import requests

GENS = [9, 8, 7]
BASE_URL = "https://data.pkmn.cc/randbats/gen{}randombattle.json"

# Download JSON for a generation
def download_gen(gen):
    url = BASE_URL.format(gen)
    print(f"Downloading Gen {gen}...")
    r = requests.get(url)
    r.raise_for_status()
    return r.json()

# Merge generations (newer gens override older)
def merge_data():
    merged = {}
    for gen in GENS:
        data = download_gen(gen)
        for mon, info in data.items():
            if mon not in merged:
                merged[mon] = info
    return merged

# Format Pokémon name
def format_name(mon):
    return mon.replace("-", "-").replace(" ", "")

# Select one role / set per Pokémon
def select_role(mon_data):
    if "roles" in mon_data and mon_data["roles"]:
        # pick first role (deterministic)
        role_name = list(mon_data["roles"].keys())[0]
        role = mon_data["roles"][role_name]
        role["role_name"] = role_name
        return role
    return mon_data

def generate_set(mon, mon_data):
    role = select_role(mon_data)

    moves = role.get("moves", [])
    # Only keep the first 4 moves
    moves = moves[:4]

    ability = role.get("abilities", mon_data.get("abilities", ["None"]))[0]
    item = role.get("items", mon_data.get("items", ["None"]))[0]
    tera = role.get("teraTypes", mon_data.get("randomBattleTeraTypes", ["Normal"]))[0]

    # EVs and Nature
    evs_dict = role.get("evs", {})
    evs = " / ".join(f"{v} {k.upper()}" for k, v in evs_dict.items()) if evs_dict else None
    natures = ["Adamant", "Bold", "Timid", "Jolly"]
    nature = natures[0] if evs_dict else None

    set_name = role.get("role_name", "Default Set")

    return {
        "mon": format_name(mon),
        "set_name": set_name,
        "item": item,
        "ability": ability,
        "tera": tera,
        "evs": evs,
        "nature": nature,
        "moves": moves
    }

def write_sets(data):
    with open("dev_scripts/lykae/output/randbats_pokemon.sets", "w", encoding="utf-8") as f:
        for mon, mon_data in data.items():
            s = generate_set(mon, mon_data)
            f.write(f"=== {s['mon']} ===\n")
            f.write(f"=== {s['set_name']} ===\n")
            f.write(f"{s['mon']} @ {s['item']}\n")
            f.write(f"Ability: {s['ability']}\n")
            f.write(f"Tera Type: {s['tera']}\n")
            if s['evs']:
                f.write(f"EVs: {s['evs']}\n")
            if s['nature']:
                f.write(f"{s['nature']} Nature\n")
            for move in s['moves']:
                f.write(f"- {move}\n")
            f.write("\n")

def main():
    merged = merge_data()
    write_sets(merged)
    print("Done! File saved as pokemon.sets")

if __name__ == "__main__":
    main()