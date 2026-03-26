import re
import unicodedata

# Files
existing_file = "dev_scripts/lykae/input/pokemon.sets"
new_file = "dev_scripts/lykae/output/randbats_pokemon.sets"
merged_file = "dev_scripts/lykae/output/pokemon_merged.sets"


# -----------------------------
# Name normalization utilities
# -----------------------------

def split_camel_case(name):
    """WalkingWake -> Walking Wake"""
    return re.sub(r'(?<!^)(?=[A-Z])', ' ', name)


def clean_display_name(name):
    """Make Pokémon display names safe and consistent"""
    name = unicodedata.normalize("NFKD", name)

    # Turn punctuation into spaces
    name = re.sub(r"['`:.\-]", " ", name)

    # Collapse whitespace
    name = re.sub(r"\s+", " ", name).strip()

    return name.replace("’", "")


def normalize_mon_name(name):
    """Key for matching Pokémon across files"""
    return (
        name.lower()
        .replace(" ", "")
        .replace("-", "")
        .replace(".", "")
        .replace("'", "")
        .replace("’", "")
        .replace(":", "")
    )


# -----------------------------
# Parsing
# -----------------------------

def parse_sets(file_path):
    """
    Parse Showdown-style set file into:
    { mon, text }
    """
    with open(file_path, "r", encoding="utf-8") as f:
        content = f.read()

    pattern = re.compile(r'(?m)^=== (.+?) ===$\n=== (.+?) ===')
    matches = list(pattern.finditer(content))

    sets = []
    i = 0

    while i < len(matches):
        start = matches[i].start()
        end = matches[i + 1].start() if i + 1 < len(matches) else len(content)

        block = content[start:end].strip()
        lines = block.splitlines()

        mon_name = None
        role_line = None
        rest_lines = lines

        # Header parsing
        if lines and lines[0].startswith("==="):
            mon_name = lines[0].strip("= ").strip()

        if len(lines) > 1 and lines[1].startswith("==="):
            role_line = lines[1].strip("= ").strip()
            rest_lines = lines[2:]

        # Fallback: extract from "Name @ Item"
        if not mon_name:
            for l in rest_lines:
                if "@" in l:
                    mon_name = l.split("@")[0].strip()
                    break

        if not mon_name:
            mon_name = matches[i].group(1).strip()

        # 🔥 FIX: normalize display name properly
        mon_name = split_camel_case(mon_name)
        mon_name = clean_display_name(mon_name)

        # Rebuild block
        text_lines = [f"=== {mon_name} ==="]
        if role_line:
            text_lines.append(f"=== {role_line} ===")
        text_lines.extend(rest_lines)

        sets.append({
            "mon": mon_name,
            "text": "\n".join(text_lines).strip()
        })

        i += 1

    return sets


# -----------------------------
# Placeholder detection
# -----------------------------

def is_placeholder(set_dict):
    if not set_dict["text"]:
        return True

    lines = set_dict["text"].splitlines()[1:]
    return any("TODO" in l or "Literally don't Use" in l for l in lines)


# -----------------------------
# Load data
# -----------------------------

old_sets = parse_sets(existing_file)
new_sets = parse_sets(new_file)

old_dict = {normalize_mon_name(s["mon"]): s for s in old_sets}
new_dict = {normalize_mon_name(s["mon"]): s for s in new_sets}


# -----------------------------
# Merge (OLD ALWAYS WINS)
# -----------------------------

merged_dict = {}

# 1. Keep old sets unless todo
for norm, s in old_dict.items():
    if is_placeholder(s) and norm in new_dict:
        merged_dict[norm] = new_dict[norm]['text']  # replace placeholder
    else:
        merged_dict[norm] = s['text']  # keep old

# 2. Add missing new sets only
for norm, s in new_dict.items():
    if norm not in merged_dict:
        merged_dict[norm] = s["text"]


# -----------------------------
# Write output
# -----------------------------

with open(merged_file, "w", encoding="utf-8") as f:
    f.write("!! Competitive givemon sets are stored here in Showdown syntax !!\n\n")

    for text in merged_dict.values():
        f.write(text.strip() + "\n\n")

print(f"Done! Merged file saved as {merged_file}")