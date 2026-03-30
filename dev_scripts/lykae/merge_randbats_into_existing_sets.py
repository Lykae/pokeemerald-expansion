import re
import unicodedata
from collections import defaultdict

# Files
existing_file = "dev_scripts/lykae/input/pokemon.sets"
new_file = "dev_scripts/lykae/output/randbats_pokemon.sets"
merged_file = "dev_scripts/lykae/output/pokemon_merged.sets"

def split_camel_case(name):
    return re.sub(r'(?<!^)(?=[A-Z])', ' ', name)


def clean_display_name(name):
    name = unicodedata.normalize("NFKD", name)
    name = re.sub(r"['`:.\-]", " ", name)
    name = re.sub(r"\s+", " ", name).strip()
    return name.replace("’", "")

def normalize_mon_name(name):
    return (
        name.lower()
        .replace(" ", "")
        .replace("-", "")
        .replace(".", "")
        .replace("'", "")
        .replace("’", "")
        .replace(":", "")
    )

def parse_sets(file_path):
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

        if lines and lines[0].startswith("==="):
            mon_name = lines[0].strip("= ").strip()

        if len(lines) > 1 and lines[1].startswith("==="):
            role_line = lines[1].strip("= ").strip()
            rest_lines = lines[2:]

        if not mon_name:
            for l in rest_lines:
                if "@" in l:
                    mon_name = l.split("@")[0].strip()
                    break

        if not mon_name:
            mon_name = matches[i].group(1).strip()

        mon_name = split_camel_case(mon_name)
        mon_name = clean_display_name(mon_name)

        text_lines = [f"=== {mon_name} ==="]
        if role_line:
            text_lines.append(f"=== {role_line} ===")
        text_lines.extend(rest_lines)

        sets.append({
            "mon": mon_name,
            "role": role_line or "Default",
            "text": "\n".join(text_lines).strip()
        })

        i += 1

    return sets

def is_placeholder(set_dict):
    if not set_dict["text"]:
        return True

    lines = set_dict["text"].splitlines()[1:]
    return any("TODO" in l or "Literally don't Use" in l for l in lines)

def group_sets(sets):
    grouped = defaultdict(list)

    for s in sets:
        norm = normalize_mon_name(s["mon"])
        grouped[norm].append(s)

    return grouped

def dedupe_sets(set_list):
    seen = set()
    result = []

    for s in set_list:
        key = (s["role"], s["text"])
        if key not in seen:
            seen.add(key)
            result.append(s)

    return result

old_sets = parse_sets(existing_file)
new_sets = parse_sets(new_file)

old_grouped = group_sets(old_sets)
new_grouped = group_sets(new_sets)

merged_grouped = {}

all_keys = set(old_grouped.keys()) | set(new_grouped.keys())

for mon in all_keys:
    old_list = old_grouped.get(mon, [])
    new_list = new_grouped.get(mon, [])

    final_sets = []

    for old in old_list:
        if is_placeholder(old):
            replacement = next((n for n in new_list if not is_placeholder(n)), None)
            if replacement:
                final_sets.append(replacement)
            else:
                final_sets.append(old)
        else:
            final_sets.append(old)

    existing_texts = {s["text"] for s in final_sets}
    for new in new_list:
        if new["text"] not in existing_texts:
            final_sets.append(new)

    merged_grouped[mon] = dedupe_sets(final_sets)

with open(merged_file, "w", encoding="utf-8") as f:
    f.write("!! Competitive givemon sets are stored here in Showdown syntax !!\n\n")

    for mon_sets in merged_grouped.values():
        for s in mon_sets:
            f.write(s["text"].strip() + "\n\n")

print(f"Done! Merged file saved as {merged_file}")