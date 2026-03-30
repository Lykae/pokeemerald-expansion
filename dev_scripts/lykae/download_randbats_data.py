import requests
import random

GENS = [9, 8, 7]
BASE_URL = "https://data.pkmn.cc/randbats/gen{}randombattle.json"

OUTPUT_FILE = "dev_scripts/lykae/output/randbats_pokemon.sets"

def download_gen(gen):
    url = BASE_URL.format(gen)
    print(f"Downloading Gen {gen}...")
    r = requests.get(url)
    r.raise_for_status()
    return r.json()

def merge_data():
    merged = {}
    for gen in GENS:
        data = download_gen(gen)
        for mon, info in data.items():
            if mon not in merged:
                merged[mon] = info
    return merged

def format_name(mon):
    return mon.replace(" ", "")

def pick(lst, default="None", randomize=False):
    if not lst:
        return default
    return random.choice(lst) if randomize else lst[0]

def generate_set(mon, mon_data, role_name, role, randomize=False):
    # Moves
    moves_pool = role.get("moves", [])
    if randomize and len(moves_pool) > 4:
        moves = random.sample(moves_pool, 4)
    else:
        moves = moves_pool[:4]

    # Ability / Item / Tera
    ability = pick(role.get("abilities", mon_data.get("abilities", [])), randomize=randomize)
    item = pick(role.get("items", mon_data.get("items", [])), randomize=randomize)
    tera = pick(role.get("teraTypes", mon_data.get("randomBattleTeraTypes", ["Normal"])), randomize=randomize)

    # EVs
    evs_dict = role.get("evs", {})
    evs = " / ".join(f"{v} {k.upper()}" for k, v in evs_dict.items()) if evs_dict else None

    # Nature (basic fallback)
    natures = ["Adamant", "Bold", "Timid", "Jolly", "Modest", "Impish", "Careful"]
    nature = random.choice(natures) if randomize and evs_dict else (natures[0] if evs_dict else None)

    return {
        "mon": format_name(mon),
        "set_name": role_name,
        "item": item,
        "ability": ability,
        "tera": tera,
        "evs": evs,
        "nature": nature,
        "moves": moves
    }

def write_sets(data, randomize=False):
    with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
        for mon, mon_data in data.items():

            roles = mon_data.get("roles", {})

            # If roles exist → multiple sets
            if roles:
                for role_name, role in roles.items():
                    s = generate_set(mon, mon_data, role_name, role, randomize)

                    write_block(f, s)

            # Fallback (no roles)
            else:
                s = generate_set(mon, mon_data, "Default", mon_data, randomize)
                write_block(f, s)

def write_block(f, s):
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

    # Toggle this:
    RANDOMIZE = False  # True = more Showdown-like randomness

    write_sets(merged, randomize=RANDOMIZE)

    print(f"Done! File saved as {OUTPUT_FILE}")

if __name__ == "__main__":
    main()