import os
from collections import OrderedDict, defaultdict
import re
import unicodedata

INPUT_FILE = 'src/data/pokemon/pokemon.sets'
OUTPUT_FILE = 'src/data/pokemon/pokemon_sets.h'

DEFAULT_IV = 31
DEFAULT_EV = 0
DEFAULT_MOVE = "MOVE_NONE"
DEFAULT_ITEM = "ITEM_NONE"
DEFAULT_NATURE = "NATURE_HARDY"
DEFAULT_ABILITY = "ABILITY_NONE"

MAX_SETS_PER_SPECIES = 16  # <-- adjust as needed

STAT_INDEX = {
    'hp': 0,
    'atk': 1,
    'def': 2,
    'spe': 3, 'speed': 3,
    'spa': 4, 'spatk': 4, 'spattack': 4,
    'spd': 5, 'spdef': 5, 'spdefense': 5
}

ABBREVIATIONS = {
    "Rapid": "R",
    "Strike": "S",
    "Single": "S",
    "Gmax": "G",
    "Gigantamax": "G",
    "Mega": "M",
    "Galar": "G",
    "Alolan": "A",
    "Hisuian": "H",
    "Standard": "",
    "Form": "",
}

FORM_TAGS = {
    "Battle Bond": "BB",
    "Zen Mode": "Z",
    "Crowned": "C",
    "Therian": "T",
}

# ----------------------------
# NAME / ENUM CONVERSION
# ----------------------------

def compress_name(name: str) -> str:
    name = re.sub(r"\s+", " ", name.strip())

    for k, v in FORM_TAGS.items():
        if k in name:
            name = name.replace(k, v)

    parts = name.split()
    compressed_parts = []

    for p in parts:
        compressed_parts.append(ABBREVIATIONS.get(p, p))

    name = "".join(
        part if part in FORM_TAGS.values() else part + "-"
        for part in compressed_parts
    ).rstrip("-")

    name = name.replace("--", "-")

    if len(name) > 14:
        chunks = name.split("-")
        if len(chunks) >= 2:
            name = f"{chunks[0]}-{chunks[-1]}"
        name = name[:14]

    return name


def to_species_enum(name: str) -> str:
    name = unicodedata.normalize("NFKD", name)

    name = name.replace("’", "").replace(".", " ").replace(":", " ").replace("'", "").replace("%", "")

    parts = name.split("-")

    def clean_part(part):
        part = re.sub(r'(?<!^)(?=[A-Z])', ' ', part)
        part = re.sub(r"\s+", " ", part).strip()
        return part.replace(" ", "_").upper()

    cleaned = [clean_part(p) for p in parts if p.strip()]
    return "SPECIES_" + "_".join(cleaned)


def sanitize(name):
    return (
        name.replace("’", "")
            .replace("‘", "")
            .replace("'", "")
            .replace("%", "")
            .replace("-", "_")
            .replace(" ", "_")
            .replace(":", "_")
    )


def convert_species(name):
    return to_species_enum(name)


def convert_item(item):
    return f"ITEM_{sanitize(item).upper()}"


def convert_ability(ability):
    if "As One" in ability:
        if "Glastrier" in ability:
            return "ABILITY_AS_ONE_ICE_RIDER"
        if "Spectrier" in ability:
            return "ABILITY_AS_ONE_SHADOW_RIDER"
    return f"ABILITY_{sanitize(ability).upper()}"


def convert_nature(nature):
    return f"NATURE_{nature.upper()}"


def convert_move(move):
    if "Hidden Power" in move:
        return "MOVE_HIDDEN_POWER"
    return f"MOVE_{sanitize(move).upper()}"


# ----------------------------
# PARSING
# ----------------------------

def parse_stat_line(text, default):
    stats = [default] * 6
    if not text:
        return stats
    for part in text.split('/'):
        part = part.strip()
        if part:
            value, stat = part.rsplit(' ', 1)
            stats[STAT_INDEX[stat.lower()]] = int(value)
    return stats


def parse_sets(text):
    lines = [line.strip() for line in text.splitlines() if line.strip()]
    sets = []
    i = 0

    while i < len(lines):
        if lines[i].startswith("==="):
            display_name = lines[i].strip("= ")
            i += 1

            comment = lines[i].strip("= ") if i < len(lines) else ""
            i += 1

            species = "None"
            item = "None"

            if i < len(lines) and "@" in lines[i]:
                species, item = [x.strip() for x in lines[i].split("@")]
                i += 1

            data = {
                "display_name": display_name,
                "comment": comment,
                "species": species,
                "item": item,
                "ability": "None",
                "tera_type": "Normal",
                "nature": "Hardy",
                "evs": [DEFAULT_EV] * 6,
                "ivs": [DEFAULT_IV] * 6,
                "moves": []
            }

            while i < len(lines) and not lines[i].startswith("==="):
                line = lines[i]

                if line.startswith("Ability:"):
                    data["ability"] = line.split(":", 1)[1].strip()
                elif line.endswith("Nature"):
                    data["nature"] = line.split()[0]
                elif line.startswith("EVs:"):
                    data["evs"] = parse_stat_line(line[4:].strip(), DEFAULT_EV)
                elif line.startswith("IVs:"):
                    data["ivs"] = parse_stat_line(line[4:].strip(), DEFAULT_IV)
                elif line.startswith("Tera Type:"):
                    data["tera_type"] = line.split(":", 1)[1].strip()
                elif line.startswith("-"):
                    data["moves"].append(line[2:].strip())

                i += 1

            sets.append(data)
        else:
            i += 1

    return sets


# ----------------------------
# STRUCT GENERATION
# ----------------------------

def generate_struct(data):
    species_key = convert_species(data["species"])
    moves = (data["moves"] + [""] * 4)[:4]
    move_str = ', '.join(convert_move(m) if m else DEFAULT_MOVE for m in moves)

    tera_type = f"TYPE_{data['tera_type'].upper()}" if data["tera_type"] else "TYPE_NONE"

    return f"""        {{
            .species = {species_key}, // {data['comment']}
            .name = _("{compress_name(data['display_name'])}"),
            .item = {convert_item(data['item'])},
            .ability = {convert_ability(data['ability'])},
            .teraType = {tera_type},
            .nature = {convert_nature(data['nature'])},
            .evs = {{{data['evs'][0]}, {data['evs'][1]}, {data['evs'][2]}, {data['evs'][3]}, {data['evs'][4]}, {data['evs'][5]}}},
            .ivs = {{{data['ivs'][0]}, {data['ivs'][1]}, {data['ivs'][2]}, {data['ivs'][3]}, {data['ivs'][4]}, {data['ivs'][5]}}},
            .moves = {{{move_str}}}
        }}"""

def normalize_species_enum(enum_name: str) -> str:
    if (enum_name == "SPECIES_FLUTTER_MANE"):
        return enum_name
    
    parts = enum_name.replace("SPECIES_", "").split("_")

    REMOVE_SUFFIXES = {
        "NORMAL",
        "ALTERED",
        "INCARNATE",
        "THERIAN",
        "LAND",
        "SKY",
        "STANDARD",
        "BATTLE",
        "BOND",
        "MIDDAY",
        "MIDNIGHT",
        "DAWN",
        "DUSK",
        "TEAL",
        "THREE",
        "FOUR",
        "CROWNED",
        "ZEN",
        "ORIGIN",
        "NEUTRAL",
        "MANE",
        "WINGS",
        "SEGMENT",
        "CONFINED",
    }

    filtered = [p for p in parts if p not in REMOVE_SUFFIXES]

    return "SPECIES_" + "_".join(filtered)

def main():
    with open(INPUT_FILE) as f:
        text = f.read()

    sets = parse_sets(text)

    # ----------------------------
    # GROUP BY SPECIES
    # ----------------------------
    groups = defaultdict(list)

    for s in sets:
        raw_species = convert_species(s["species"])
        species = normalize_species_enum(raw_species)
        groups[species].append(s)

    species_list = sorted(groups.keys())

    os.makedirs(os.path.dirname(OUTPUT_FILE), exist_ok=True)

    with open(OUTPUT_FILE, 'w') as f:
        f.write('#include "constants/species.h"\n')
        f.write('#include "constants/items.h"\n')
        f.write('#include "constants/abilities.h"\n')
        f.write('#include "constants/moves.h"\n\n')

        f.write("// AUTO-GENERATED FILE - DO NOT EDIT\n\n")

        f.write("const struct PokemonSets gPokemonSets[NUM_SPECIES][16] = {\n")

        for species in species_list:
            sets_for_species = groups[species][:16]

            f.write(f"    [{species}] = {{\n")

            for s in sets_for_species:
                f.write("        " + generate_struct(s) + ",\n")

            for _ in range(16 - len(sets_for_species)):
                f.write("        {{0}},\n")

            f.write("    },\n")

        f.write("};\n")


if __name__ == "__main__":
    main()