#include "constants/species.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "constants/moves.h"

//
// DO NOT MODIFY THIS FILE! It is auto-generated from pokemon.sets
//
const struct PokemonSets gPokemonSets[NUM_SPECIES] =
{
    [SPECIES_BULBASAUR] = // Sun Sweeper Jr
    {
        .name = _("Bulbasaur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 44, 156, 236, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_WEATHER_BALL}
    },

    [SPECIES_IVYSAUR] = // Defensive
    {
        .name = _("Ivysaur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },

    [SPECIES_VENUSAUR] = // Sun Sweeper
    {
        .name = _("Venusaur"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL}
    },

    [SPECIES_CHARMANDER] = // Sun Wallbreaker
    {
        .name = _("Charmander"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SOLAR_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {44, 0, 12, 236, 196, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WEATHER_BALL, MOVE_FIRE_BLAST, MOVE_OVERHEAT, MOVE_SLEEP_TALK}
    },

    [SPECIES_CHARMELEON] = // Special Sweeper
    {
        .name = _("Charmeleon"),
        .item = ITEM_CHARCOAL,
        .ability = ABILITY_SOLAR_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },

    [SPECIES_CHARIZARD] = // Sun Wallbreaker
    {
        .name = _("Charizard"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SOLAR_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER}
    },

    [SPECIES_SQUIRTLE] = // Defensive Spin
    {
        .name = _("Squirtle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RAIN_DISH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_WISH, MOVE_ICE_BEAM, MOVE_SURF}
    },

    [SPECIES_WARTORTLE] = // Shell Smash
    {
        .name = _("Wartortle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_RAIN_DISH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {176, 0, 0, 80, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_SUBSTITUTE}
    },

    [SPECIES_BLASTOISE] = // Shell Smash
    {
        .name = _("Blastoise"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_RAIN_DISH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TERA_BLAST}
    },

    [SPECIES_CATERPIE] = // Literally don't Use.
    {
        .name = _("Caterpie"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHIELD_DUST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_METAPOD] = // Literally don't Use.
    {
        .name = _("Metapod"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 252, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_BUTTERFREE] = // Quiver Dance
    {
        .name = _("Butterfree"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER}
    },

    [SPECIES_WEEDLE] = // Literally don't Use.
    {
        .name = _("Weedle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHIELD_DUST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_KAKUNA] = // Literally don't Use.
    {
        .name = _("Kakuna"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 252, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_BEEDRILL] = // Mega Beedrill
    {
        .name = _("Beedrill"),
        .item = ITEM_BEEDRILLITE,
        .ability = ABILITY_SNIPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_KNOCK_OFF}
    },

    [SPECIES_PIDGEY] = // Agility
    {
        .name = _("Pidgey"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TANGLED_FEET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_AGILITY}
    },

    [SPECIES_PIDGEOTTO] = // Offensive Pivot
    {
        .name = _("Pidgeotto"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TANGLED_FEET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_PIDGEOT] = // Mega Pidgeot
    {
        .name = _("Pidgeot"),
        .item = ITEM_PIDGEOTITE,
        .ability = ABILITY_TANGLED_FEET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_TOXIC}
    },

    [SPECIES_RATTATA] = // FEAR
    {
        .name = _("Rattata"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_RATTATA_ALOLA] = // TODO: Set
    {
        .name = _("Rattata-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RATICATE] = // Guts
    {
        .name = _("Raticate"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_THROAT_CHOP, MOVE_ZEN_HEADBUTT, MOVE_SWORDS_DANCE}
    },

    [SPECIES_RATICATE_ALOLA] = // Wallbreaker
    {
        .name = _("Raticate-Alola"),
        .item = ITEM_BLACK_GLASSES,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_RETURN}
    },

    [SPECIES_SPEAROW] = // TODO: Set
    {
        .name = _("Spearow"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FEAROW] = // Setup Sweeper
    {
        .name = _("Fearow"),
        .item = ITEM_SCOPE_LENS,
        .ability = ABILITY_SNIPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_RETURN}
    },

    [SPECIES_EKANS] = // Intimidating Distruptor
    {
        .name = _("Ekans"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_GLARE, MOVE_TOXIC_SPIKES}
    },

    [SPECIES_ARBOK] = // Bulky Setup
    {
        .name = _("Arbok"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_GRASS,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_EARTHQUAKE, MOVE_GUNK_SHOT, MOVE_TRAILBLAZE}
    },

    [SPECIES_PIKACHU] = // Glass Cannon (Atk)
    {
        .name = _("Pikachu"),
        .item = ITEM_LIGHT_BALL,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK}
    },

    [SPECIES_PIKACHU_COSPLAY] = // TODO: Set
    {
        .name = _("Pikachu-C"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIKACHU_ROCK_STAR] = // TODO: Set
    {
        .name = _("Pikachu-R"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIKACHU_BELLE] = // TODO: Set
    {
        .name = _("Pikachu-B"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIKACHU_POP_STAR] = // TODO: Set
    {
        .name = _("Pikachu-P"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIKACHU_PHD] = // TODO: Set
    {
        .name = _("Pikachu-Ph"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIKACHU_LIBRE] = // TODO: Set
    {
        .name = _("Pikachu-L"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIKACHU_ORIGINAL] = // TODO: Set
    {
        .name = _("Pikachu-O-C"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RAICHU] = // Nasty Plot (SpA)
    {
        .name = _("Raichu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT}
    },

    [SPECIES_RAICHU_ALOLA] = // Fast Attacker
    {
        .name = _("Raichu-Alola"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SURGE_SURFER,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_PSYCHIC}
    },

    [SPECIES_SANDSHREW] = // Sand Sweeper
    {
        .name = _("Sandshrew"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAND_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 236, 76, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_LEECH_LIFE, MOVE_RAPID_SPIN}
    },

    [SPECIES_SANDSHREW_ALOLA] = // Snow Sweeper
    {
        .name = _("Sandshrew-A"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SLUSH_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {36, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN}
    },

    [SPECIES_SANDSLASH] = // Defensive Spinner
    {
        .name = _("Sandslash"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAND_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_SPIKES}
    },

    [SPECIES_SANDSLASH_ALOLA] = // Bulky Support
    {
        .name = _("Sandslash-Alol"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLUSH_RUSH,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_NIDORAN_F] = // TODO: Set
    {
        .name = _("Nidoran-F"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NIDORINA] = // TODO: Set
    {
        .name = _("Nidorina"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NIDOQUEEN] = // Budget Landorus-I
    {
        .name = _("Nidoqueen"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {48, 0, 0, 208, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_NIDORAN_M] = // TODO: Set
    {
        .name = _("Nidoran-M"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NIDORINO] = // TODO: Set
    {
        .name = _("Nidorino"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NIDOKING] = // Budget Landorus-I
    {
        .name = _("Nidoking"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_FLAMETHROWER}
    },

    [SPECIES_CLEFAIRY] = // Bulky Support
    {
        .name = _("Clefairy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FRIEND_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 140, 0, 0, 116},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_HEAL_PULSE, MOVE_HELPING_HAND, MOVE_FOLLOW_ME, MOVE_PROTECT}
    },

    [SPECIES_CLEFABLE] = // Unaware Wall
    {
        .name = _("Clefable"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_VULPIX] = // TODO: Set
    {
        .name = _("Vulpix"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VULPIX_ALOLA] = // TODO: Set
    {
        .name = _("Vulpix-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NINETALES] = // Sun Setter
    {
        .name = _("Ninetales"),
        .item = ITEM_HEAT_ROCK,
        .ability = ABILITY_DROUGHT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_HEALING_WISH, MOVE_ENCORE, MOVE_WILL_O_WISP}
    },

    [SPECIES_NINETALES_ALOLA] = // Fast Attacker
    {
        .name = _("Ninetales-Alol"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_SNOW_WARNING,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURORA_VEIL, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_MOONBLAST}
    },

    [SPECIES_JIGGLYPUFF] = // TODO: Set
    {
        .name = _("Jigglypuff"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WIGGLYTUFF] = // Bulky Support
    {
        .name = _("Wigglytuff"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_COMPETITIVE,
        .teraType = TYPE_POISON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_DAZZLING_GLEAM, MOVE_FIRE_BLAST, MOVE_KNOCK_OFF}
    },

    [SPECIES_ZUBAT] = // TODO: Set
    {
        .name = _("Zubat"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOLBAT] = // TODO: Set
    {
        .name = _("Golbat"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ODDISH] = // TODO: Set
    {
        .name = _("Oddish"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GLOOM] = // Defensive Utility
    {
        .name = _("Gloom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STENCH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED}
    },

    [SPECIES_VILEPLUME] = // Phyiscally Defensive
    {
        .name = _("Vileplume"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EFFECT_SPORE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP, MOVE_LEECH_SEED}
    },

    [SPECIES_PARAS] = // TODO: Set
    {
        .name = _("Paras"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PARASECT] = // Bulky Attacker
    {
        .name = _("Parasect"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_DRY_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AROMATHERAPY, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE, MOVE_SEED_BOMB}
    },

    [SPECIES_VENONAT] = // TODO: Set
    {
        .name = _("Venonat"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VENOMOTH] = // Setup Sweeper
    {
        .name = _("Venomoth"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_BUG,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_SLUDGE_WAVE}
    },

    [SPECIES_DIGLETT] = // TODO: Set
    {
        .name = _("Diglett"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DIGLETT_ALOLA] = // Life Orb
    {
        .name = _("Diglett-A"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TANGLING_HAIR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {36, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_BLAST, MOVE_SUBSTITUTE}
    },

    [SPECIES_DUGTRIO] = // Fast Support
    {
        .name = _("Dugtrio"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_ARENA_TRAP,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_DUGTRIO_ALOLA] = // Fast Attacker
    {
        .name = _("Dugtrio-Alola"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SAND_FORCE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE}
    },

    [SPECIES_MEOWTH] = // Revenge Killer
    {
        .name = _("Meowth"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 236, 76, 196, 0, 0},
        .ivs = {19, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_FEINT, MOVE_U_TURN, MOVE_PLAY_ROUGH}
    },

    [SPECIES_MEOWTH_ALOLA] = // TODO: Set
    {
        .name = _("Meowth-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MEOWTH_GALAR] = // TODO: Set
    {
        .name = _("Meowth-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PERSIAN] = // Wallbreaker
    {
        .name = _("Persian"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_LIMBER,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_SWITCHEROO, MOVE_U_TURN}
    },

    [SPECIES_PERSIAN_ALOLA] = // Fast Bulky Setup
    {
        .name = _("Persian-Alola"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FUR_COAT,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_HYPNOSIS, MOVE_NASTY_PLOT, MOVE_POWER_GEM}
    },

    [SPECIES_PSYDUCK] = // Rain Wallbreaker
    {
        .name = _("Psyduck"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 236, 236, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TERA_BLAST}
    },

    [SPECIES_GOLDUCK] = // Bulky Setup
    {
        .name = _("Golduck"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLOUD_NINE,
        .teraType = TYPE_WATER,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_GRASS_KNOT, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM}
    },

    [SPECIES_MANKEY] = // Choice Scarf
    {
        .name = _("Mankey"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {36, 196, 76, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ASSURANCE}
    },

    [SPECIES_PRIMEAPE] = // Offensive Stealth Rock
    {
        .name = _("Primeape"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_U_TURN}
    },

    [SPECIES_GROWLITHE] = // TODO: Set
    {
        .name = _("Growlithe"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GROWLITHE_HISUI] = // Choice Scarf
    {
        .name = _("Growlithe-H"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ROCK_HEAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_PSYCHIC_FANGS, MOVE_ROCK_BLAST}
    },

    [SPECIES_ARCANINE] = // Curse
    {
        .name = _("Arcanine"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {160, 252, 0, 96, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN}
    },

    [SPECIES_ARCANINE_HISUI] = // Bulky Attacker
    {
        .name = _("Arcanine-Hisui"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_ROCK_HEAD,
        .teraType = TYPE_FIRE,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_MORNING_SUN}
    },

    [SPECIES_POLIWAG] = // TODO: Set
    {
        .name = _("Poliwag"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_POLIWHIRL] = // TODO: Set
    {
        .name = _("Poliwhirl"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_POLIWRATH] = // Bulk Up
    {
        .name = _("Poliwrath"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_SUBSTITUTE, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_ABRA] = // TODO: Set
    {
        .name = _("Abra"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KADABRA] = // TODO: Set
    {
        .name = _("Kadabra"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ALAKAZAM] = // Nasty Plot
    {
        .name = _("Alakazam"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_MAGIC_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    },

    [SPECIES_MACHOP] = // TODO: Set
    {
        .name = _("Machop"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MACHOKE] = // TODO: Set
    {
        .name = _("Machoke"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MACHAMP] = // Default Set
    {
        .name = _("Machamp"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_DYNAMIC_PUNCH, MOVE_FACADE}
    },

    [SPECIES_BELLSPROUT] = // Sun Sweeper
    {
        .name = _("Bellsprout"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 76, 196, 196, 36},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER}
    },

    [SPECIES_WEEPINBELL] = // Utility
    {
        .name = _("Weepinbell"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SYNTHESIS, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN}
    },

    [SPECIES_VICTREEBEL] = // Sun Sweeper
    {
        .name = _("Victreebel"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL}
    },

    [SPECIES_TENTACOOL] = // Utility
    {
        .name = _("Tentacool"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIQUID_OOZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {36, 116, 156, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_TENTACRUEL] = // Defensive Pivot
    {
        .name = _("Tentacruel"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LIQUID_OOZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 120, 136, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_HAZE}
    },

    [SPECIES_GEODUDE] = // TODO: Set
    {
        .name = _("Geodude"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GEODUDE_ALOLA] = // TODO: Set
    {
        .name = _("Geodude-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GRAVELER] = // TODO: Set
    {
        .name = _("Graveler"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GRAVELER_ALOLA] = // TODO: Set
    {
        .name = _("Graveler-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOLEM] = // Bulky Attacker
    {
        .name = _("Golem"),
        .item = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_GRASS,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_ROCK_POLISH, MOVE_STEALTH_ROCK}
    },

    [SPECIES_GOLEM_ALOLA] = // Wallbreaker
    {
        .name = _("Golem-Alola"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GALVANIZE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STONE_EDGE}
    },

    [SPECIES_PONYTA] = // TODO: Set
    {
        .name = _("Ponyta"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PONYTA_GALAR] = // TODO: Set
    {
        .name = _("Ponyta-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RAPIDASH] = // Default Set
    {
        .name = _("Rapidash"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_HORSEPOWER, MOVE_MORNING_SUN, MOVE_SWORDS_DANCE}
    },

    [SPECIES_RAPIDASH_GALAR] = // Default Set
    {
        .name = _("Rapidash-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PASTEL_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_MORNING_SUN, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SLOWPOKE] = // Defensive
    {
        .name = _("Slowpoke"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {116, 0, 236, 0, 36, 116},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_SLACK_OFF, MOVE_PSYCHIC, MOVE_FIRE_BLAST}
    },

    [SPECIES_SLOWPOKE_GALAR] = // TODO: Set
    {
        .name = _("Slowpoke-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SLOWBRO] = // Calm Mind
    {
        .name = _("Slowbro"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_PSYCHIC_NOISE, MOVE_SLACK_OFF}
    },

    [SPECIES_SLOWBRO_GALAR] = // Wallbreaker
    {
        .name = _("Slowbro-G"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_POISON,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_SHELL_SIDE_ARM, MOVE_TRICK_ROOM}
    },

    [SPECIES_MAGNEMITE] = // Trapper
    {
        .name = _("Magnemite"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MAGNET_PULL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TERA_BLAST, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAGNETON] = // Offensive Pivot
    {
        .name = _("Magneton"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ANALYTIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {172, 0, 0, 84, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TERA_BLAST}
    },

    [SPECIES_FARFETCHD] = // Default Set
    {
        .name = _("Farfetchd"),
        .item = ITEM_LEEK,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE}
    },

    [SPECIES_FARFETCHD_GALAR] = // TODO: Set
    {
        .name = _("Farfetch-d-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DODUO] = // Fast Attacker
    {
        .name = _("Doduo"),
        .item = ITEM_SKY_PLATE,
        .ability = ABILITY_EARLY_BIRD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK, MOVE_PROTECT}
    },

    [SPECIES_DODRIO] = // Swords Dance
    {
        .name = _("Dodrio"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TANGLED_FEET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BRAVE_BIRD, MOVE_LOW_KICK, MOVE_QUICK_ATTACK}
    },

    [SPECIES_SEEL] = // TODO: Set
    {
        .name = _("Seel"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DEWGONG] = // Bulky Attacker
    {
        .name = _("Dewgong"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_FLIP_TURN, MOVE_KNOCK_OFF, MOVE_SURF}
    },

    [SPECIES_GRIMER] = // TODO: Set
    {
        .name = _("Grimer"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GRIMER_ALOLA] = // Wallbreaker
    {
        .name = _("Grimer-A"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_TOUCH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 196, 196, 0, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_SLEEP_TALK}
    },

    [SPECIES_MUK] = // Defensive
    {
        .name = _("Muk"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STICKY_HOLD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ZEN_HEADBUTT, MOVE_TOXIC}
    },

    [SPECIES_MUK_ALOLA] = // AV Pivot
    {
        .name = _("Muk-Alola"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_POISON_TOUCH,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_SHELLDER] = // Shell Smash
    {
        .name = _("Shellder"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SKILL_LINK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_LIQUIDATION, MOVE_ROCK_BLAST}
    },

    [SPECIES_CLOYSTER] = // Shell Smash Sweeper
    {
        .name = _("Cloyster"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SKILL_LINK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_DRILL_RUN, MOVE_TERA_BLAST}
    },

    [SPECIES_GASTLY] = // TODO: Set
    {
        .name = _("Gastly"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HAUNTER] = // Choiced
    {
        .name = _("Haunter"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_TRICK}
    },

    [SPECIES_GENGAR] = // Nasty Plot
    {
        .name = _("Gengar"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST}
    },

    [SPECIES_ONIX] = // TODO: Set
    {
        .name = _("Onix"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DROWZEE] = // TODO: Set
    {
        .name = _("Drowzee"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HYPNO] = // Bulky Support
    {
        .name = _("Hypno"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INSOMNIA,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_KNOCK_OFF, MOVE_PSYCHIC_NOISE, MOVE_THUNDER_WAVE}
    },

    [SPECIES_KRABBY] = // TODO: Set
    {
        .name = _("Krabby"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KINGLER] = // Default Set
    {
        .name = _("Kingler"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER}
    },

    [SPECIES_VOLTORB] = // TODO: Set
    {
        .name = _("Voltorb"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VOLTORB_HISUI] = // TODO: Set
    {
        .name = _("Voltorb-H"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ELECTRODE] = // Fast Support
    {
        .name = _("Electrode"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_AFTERMATH,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXPLOSION, MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_THUNDER_WAVE}
    },

    [SPECIES_ELECTRODE_HISUI] = // Fast Attacker
    {
        .name = _("Electrode-Hisu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_AFTERMATH,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEAF_STORM, MOVE_TAUNT, MOVE_THUNDER_WAVE}
    },

    [SPECIES_EXEGGCUTE] = // TODO: Set
    {
        .name = _("Exeggcute"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_EXEGGUTOR] = // Bulky Setup
    {
        .name = _("Exeggutor"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HARVEST,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_PSYSHOCK}
    },

    [SPECIES_EXEGGUTOR_ALOLA] = // Bulky Setup
    {
        .name = _("Exeggutor-Alol"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HARVEST,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN}
    },

    [SPECIES_CUBONE] = // TODO: Set
    {
        .name = _("Cubone"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MAROWAK] = // Default Set
    {
        .name = _("Marowak"),
        .item = ITEM_THICK_CLUB,
        .ability = ABILITY_BATTLE_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK}
    },

    [SPECIES_MAROWAK_ALOLA] = // Default Set
    {
        .name = _("Marowak-Alola"),
        .item = ITEM_THICK_CLUB,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAME_CHARGE, MOVE_FLARE_BLITZ, MOVE_POLTERGEIST}
    },

    [SPECIES_HITMONLEE] = // Terrain Sweeper
    {
        .name = _("Hitmonlee"),
        .item = ITEM_PSYCHIC_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE}
    },

    [SPECIES_HITMONCHAN] = // Bulky Rapid Spin
    {
        .name = _("Hitmonchan"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_IRON_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {248, 16, 0, 0, 0, 244},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_RAPID_SPIN}
    },

    [SPECIES_LICKITUNG] = // TODO: Set
    {
        .name = _("Lickitung"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KOFFING] = // Tank
    {
        .name = _("Koffing"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {36, 0, 156, 76, 196, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },

    [SPECIES_WEEZING] = // Physical Wall
    {
        .name = _("Weezing"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 4, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_HAZE}
    },

    [SPECIES_WEEZING_GALAR] = // Bulky Support
    {
        .name = _("Weezing-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_FIRE_BLAST, MOVE_GUNK_SHOT, MOVE_PAIN_SPLIT}
    },

    [SPECIES_RHYHORN] = // Setup Sweeper
    {
        .name = _("Rhyhorn"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 236, 0, 156, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}
    },

    [SPECIES_RHYDON] = // Stealth Rock
    {
        .name = _("Rhydon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {248, 16, 0, 44, 0, 200},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE}
    },

    [SPECIES_CHANSEY] = // Defensive
    {
        .name = _("Chansey"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NATURAL_CURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {56, 0, 252, 0, 0, 200},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE}
    },

    [SPECIES_TANGELA] = // TODO: Set
    {
        .name = _("Tangela"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KANGASKHAN] = // Default Set
    {
        .name = _("Kangaskhan"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FAKE_OUT, MOVE_HAMMER_ARM}
    },

    [SPECIES_HORSEA] = // TODO: Set
    {
        .name = _("Horsea"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SEADRA] = // RestTalk Pivot
    {
        .name = _("Seadra"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_POISON_POINT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_FLIP_TURN, MOVE_SURF}
    },

    [SPECIES_GOLDEEN] = // TODO: Set
    {
        .name = _("Goldeen"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SEAKING] = // Default Set
    {
        .name = _("Seaking"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRILL_RUN, MOVE_KNOCK_OFF, MOVE_MEGAHORN, MOVE_SWORDS_DANCE}
    },

    [SPECIES_STARYU] = // TODO: Set
    {
        .name = _("Staryu"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_STARMIE] = // Offensive
    {
        .name = _("Starmie"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_ANALYTIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RAPID_SPIN}
    },

    [SPECIES_MR_MIME] = // Default Set
    {
        .name = _("Mr-Mime"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FILTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST, MOVE_HEALING_WISH, MOVE_NASTY_PLOT}
    },

    [SPECIES_MR_MIME_GALAR] = // TODO: Set
    {
        .name = _("Mr-Mime-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SCYTHER] = // Swords Dance
    {
        .name = _("Scyther"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DUAL_WINGBEAT, MOVE_CLOSE_COMBAT, MOVE_TRAILBLAZE}
    },

    [SPECIES_JYNX] = // Default Set
    {
        .name = _("Jynx"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DRY_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT}
    },

    [SPECIES_ELECTABUZZ] = // Trick Room Support
    {
        .name = _("Electabuzz"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 180, 0, 0, 76},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOLLOW_ME, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_FEINT}
    },

    [SPECIES_MAGMAR] = // Bulky Redirector
    {
        .name = _("Magmar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 236, 0, 0, 20},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_FOLLOW_ME, MOVE_PROTECT}
    },

    [SPECIES_PINSIR] = // Swords Dance (Bug)
    {
        .name = _("Pinsir"),
        .item = ITEM_PINSIRITE,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_RETURN, MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_TAUROS] = // All-Out Attacker
    {
        .name = _("Tauros"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_SUBSTITUTE}
    },

    [SPECIES_TAUROS_PALDEA_COMBAT] = // Wallbreaker
    {
        .name = _("Tauros-Combat"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_IRON_HEAD}
    },

    [SPECIES_TAUROS_PALDEA_BLAZE] = // Wallbreaker
    {
        .name = _("Tauros-Blaze"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE, MOVE_WILD_CHARGE}
    },

    [SPECIES_TAUROS_PALDEA_AQUA] = // Wallbreaker
    {
        .name = _("Tauros-Aqua"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_WATER,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_WAVE_CRASH}
    },

    [SPECIES_MAGIKARP] = // TODO: Set
    {
        .name = _("Magikarp"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GYARADOS] = // Dragon Dance
    {
        .name = _("Gyarados"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_TERA_BLAST}
    },

    [SPECIES_LAPRAS] = // Wallbreaker
    {
        .name = _("Lapras"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_ICE,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SPARKLING_ARIA}
    },

    [SPECIES_DITTO] = // Choice Scarf
    {
        .name = _("Ditto"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_IMPOSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_EEVEE] = // TODO: Set
    {
        .name = _("Eevee"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VAPOREON] = // Defensive
    {
        .name = _("Vaporeon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_HAZE, MOVE_WISH, MOVE_PROTECT}
    },

    [SPECIES_JOLTEON] = // Calm Mind
    {
        .name = _("Jolteon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_ALLURING_VOICE}
    },

    [SPECIES_FLAREON] = // Facade
    {
        .name = _("Flareon"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_FACADE, MOVE_TRAILBLAZE, MOVE_QUICK_ATTACK}
    },

    [SPECIES_PORYGON] = // TODO: Set
    {
        .name = _("Porygon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_OMANYTE] = // TODO: Set
    {
        .name = _("Omanyte"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_OMASTAR] = // Shell Smash (Rock)
    {
        .name = _("Omastar"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_WEAK_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER}
    },

    [SPECIES_KABUTO] = // TODO: Set
    {
        .name = _("Kabuto"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KABUTOPS] = // Default Set
    {
        .name = _("Kabutops"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_LIQUIDATION, MOVE_RAPID_SPIN}
    },

    [SPECIES_AERODACTYL] = // Mega Aerodactyl
    {
        .name = _("Aerodactyl"),
        .item = ITEM_AERODACTYLITE,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_ROOST}
    },

    [SPECIES_SNORLAX] = // Curse
    {
        .name = _("Snorlax"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {12, 0, 244, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_HEAT_CRASH, MOVE_REST}
    },

    [SPECIES_ARTICUNO] = // Specially Defensive (Flying)
    {
        .name = _("Articuno"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {248, 0, 0, 52, 0, 208},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_ROOST, MOVE_SUBSTITUTE, MOVE_HAZE}
    },

    [SPECIES_ARTICUNO_GALAR] = // Fast Bulky Setup
    {
        .name = _("Articuno-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_COMPETITIVE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FREEZING_GLARE, MOVE_HURRICANE, MOVE_RECOVER}
    },

    [SPECIES_ZAPDOS] = // Defensive
    {
        .name = _("Zapdos"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STATIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 244, 16, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_ROOST}
    },

    [SPECIES_ZAPDOS_GALAR] = // Fast Attacker
    {
        .name = _("Zapdos-G"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF}
    },

    [SPECIES_MOLTRES] = // Physically Defensive
    {
        .name = _("Moltres"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 248, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_MOLTRES_GALAR] = // Bulky Setup
    {
        .name = _("Moltres-G"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_BERSERK,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_NASTY_PLOT}
    },

    [SPECIES_DRATINI] = // TODO: Set
    {
        .name = _("Dratini"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DRAGONAIR] = // Dragon Dance
    {
        .name = _("Dragonair"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED, MOVE_OUTRAGE, MOVE_REST}
    },

    [SPECIES_DRAGONITE] = // Dragon Dance
    {
        .name = _("Dragonite"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MULTISCALE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_ICE_SPINNER}
    },

    [SPECIES_MEWTWO] = // Nasty Plot
    {
        .name = _("Mewtwo"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSTRIKE, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    },

    [SPECIES_MEW] = // Hazard Lead
    {
        .name = _("Mew"),
        .item = ITEM_RED_CARD,
        .ability = ABILITY_SYNCHRONIZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 96, 160, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP, MOVE_TAUNT}
    },

    [SPECIES_CHIKORITA] = // TODO: Set
    {
        .name = _("Chikorita"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BAYLEEF] = // TODO: Set
    {
        .name = _("Bayleef"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MEGANIUM] = // Bulky Setup
    {
        .name = _("Meganium"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_OVERGROW,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_PETAL_BLIZZARD, MOVE_SWORDS_DANCE}
    },

    [SPECIES_CYNDAQUIL] = // TODO: Set
    {
        .name = _("Cyndaquil"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_QUILAVA] = // TODO: Set
    {
        .name = _("Quilava"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TYPHLOSION] = // Choice Specs
    {
        .name = _("Typhlosion"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ERUPTION, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS}
    },

    [SPECIES_TYPHLOSION_HISUI] = // Fast Bulky Setup
    {
        .name = _("Typhlosion-His"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    },

    [SPECIES_TOTODILE] = // TODO: Set
    {
        .name = _("Totodile"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CROCONAW] = // TODO: Set
    {
        .name = _("Croconaw"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FERALIGATR] = // Setup Sweeper
    {
        .name = _("Feraligatr"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_ICE_PUNCH, MOVE_CRUNCH}
    },

    [SPECIES_SENTRET] = // TODO: Set
    {
        .name = _("Sentret"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FURRET] = // Wallbreaker
    {
        .name = _("Furret"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_TRICK, MOVE_U_TURN}
    },

    [SPECIES_HOOTHOOT] = // TODO: Set
    {
        .name = _("Hoothoot"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NOCTOWL] = // Bulky Attacker
    {
        .name = _("Noctowl"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_GROUND,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DEFOG, MOVE_HURRICANE, MOVE_HYPER_VOICE}
    },

    [SPECIES_LEDYBA] = // TODO: Set
    {
        .name = _("Ledyba"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LEDIAN] = // Staller
    {
        .name = _("Ledian"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EARLY_BIRD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_DEFOG, MOVE_ENCORE, MOVE_FOCUS_BLAST}
    },

    [SPECIES_SPINARAK] = // TODO: Set
    {
        .name = _("Spinarak"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARIADOS] = // Fast Support
    {
        .name = _("Ariados"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_INSOMNIA,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_STICKY_WEB}
    },

    [SPECIES_CROBAT] = // Utility (Poison)
    {
        .name = _("Crobat"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INFILTRATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 200, 0, 56},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_TOXIC, MOVE_DEFOG, MOVE_ROOST}
    },

    [SPECIES_CHINCHOU] = // Pivot
    {
        .name = _("Chinchou"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 132, 220, 148, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH}
    },

    [SPECIES_LANTURN] = // Defensive Pivot
    {
        .name = _("Lanturn"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_SCALD, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_PICHU] = // TODO: Set
    {
        .name = _("Pichu"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CLEFFA] = // TODO: Set
    {
        .name = _("Cleffa"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_IGGLYBUFF] = // TODO: Set
    {
        .name = _("Igglybuff"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TOGEPI] = // TODO: Set
    {
        .name = _("Togepi"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TOGETIC] = // TODO: Set
    {
        .name = _("Togetic"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NATU] = // TODO: Set
    {
        .name = _("Natu"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_XATU] = // Default Set
    {
        .name = _("Xatu"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAT_WAVE, MOVE_PSYCHIC, MOVE_ROOST, MOVE_TELEPORT}
    },

    [SPECIES_MAREEP] = // TODO: Set
    {
        .name = _("Mareep"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLAAFFY] = // TODO: Set
    {
        .name = _("Flaaffy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AMPHAROS] = // AV Pivot
    {
        .name = _("Ampharos"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_STATIC,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_DISCHARGE, MOVE_DRAGON_TAIL, MOVE_FOCUS_BLAST}
    },

    [SPECIES_BELLOSSOM] = // Bulky Quiver Dance
    {
        .name = _("Bellossom"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_MARILL] = // TODO: Set
    {
        .name = _("Marill"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AZUMARILL] = // Offensive
    {
        .name = _("Azumarill"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUGE_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },

    [SPECIES_SUDOWOODO] = // Bulky Attacker
    {
        .name = _("Sudowoodo"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ROCK_HEAD,
        .teraType = TYPE_GRASS,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_STEALTH_ROCK, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_POLITOED] = // Perish Trapper
    {
        .name = _("Politoed"),
        .item = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 80, 176, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_ENCORE}
    },

    [SPECIES_HOPPIP] = // TODO: Set
    {
        .name = _("Hoppip"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SKIPLOOM] = // TODO: Set
    {
        .name = _("Skiploom"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_JUMPLUFF] = // Bulky Attacker
    {
        .name = _("Jumpluff"),
        .item = ITEM_NONE,
        .ability = ABILITY_INFILTRATOR,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACROBATICS, MOVE_ENCORE, MOVE_SLEEP_POWDER, MOVE_STRENGTH_SAP}
    },

    [SPECIES_AIPOM] = // TODO: Set
    {
        .name = _("Aipom"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SUNKERN] = // TODO: Set
    {
        .name = _("Sunkern"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SUNFLORA] = // Setup Sweeper
    {
        .name = _("Sunflora"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL}
    },

    [SPECIES_YANMA] = // TODO: Set
    {
        .name = _("Yanma"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WOOPER] = // TODO: Set
    {
        .name = _("Wooper"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WOOPER_PALDEA] = // TODO: Set
    {
        .name = _("Wooper-P"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_QUAGSIRE] = // Unaware Wall
    {
        .name = _("Quagsire"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_RECOVER}
    },

    [SPECIES_ESPEON] = // Choice Specs
    {
        .name = _("Espeon"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_ALLURING_VOICE, MOVE_TRICK}
    },

    [SPECIES_UMBREON] = // Support
    {
        .name = _("Umbreon"),
        .item = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 188, 0, 0, 68},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOUL_PLAY, MOVE_HELPING_HAND, MOVE_YAWN, MOVE_TAUNT}
    },

    [SPECIES_MURKROW] = // Nasty Plot
    {
        .name = _("Murkrow"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SUPER_LUCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_HURRICANE, MOVE_DARK_PULSE, MOVE_HEAT_WAVE}
    },

    [SPECIES_SLOWKING] = // Defensive Pivot
    {
        .name = _("Slowking"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_CHILLY_RECEPTION, MOVE_SLACK_OFF}
    },

    [SPECIES_SLOWKING_GALAR] = // Bulky Attacker
    {
        .name = _("Slowking-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CHILLY_RECEPTION, MOVE_FIRE_BLAST, MOVE_PSYCHIC_NOISE, MOVE_PSYSHOCK}
    },

    [SPECIES_MISDREAVUS] = // Utility
    {
        .name = _("Misdreavus"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_HEX, MOVE_PAIN_SPLIT, MOVE_POWER_GEM}
    },

    [SPECIES_UNOWN] = // Wallbreaker
    {
        .name = _("Unown"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIDDEN_POWER, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_WOBBUFFET] = // Default Set
    {
        .name = _("Wobbuffet"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SHADOW_TAG,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CHARM, MOVE_COUNTER, MOVE_ENCORE, MOVE_MIRROR_COAT}
    },

    [SPECIES_GIRAFARIG] = // Nasty Plot
    {
        .name = _("Girafarig"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAP_SIPPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT}
    },

    [SPECIES_PINECO] = // TODO: Set
    {
        .name = _("Pineco"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FORRETRESS] = // Support
    {
        .name = _("Forretress"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 164, 0, 0, 92},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BODY_PRESS, MOVE_VOLT_SWITCH, MOVE_GYRO_BALL}
    },

    [SPECIES_DUNSPARCE] = // Calm Mind
    {
        .name = _("Dunsparce"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SERENE_GRACE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_ROOST}
    },

    [SPECIES_GLIGAR] = // Utility
    {
        .name = _("Gligar"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IMMUNITY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 204, 16, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_U_TURN}
    },

    [SPECIES_STEELIX] = // Curse (Ground)
    {
        .name = _("Steelix"),
        .item = ITEM_STEELIXITE,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_HEAVY_SLAM, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_SNUBBULL] = // Physically Defensive
    {
        .name = _("Snubbull"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 116, 196, 36, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_WAVE, MOVE_THIEF}
    },

    [SPECIES_GRANBULL] = // Slow Wallbreaker
    {
        .name = _("Granbull"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_THUNDER_WAVE, MOVE_ICE_PUNCH}
    },

    [SPECIES_QWILFISH] = // Physical Defensive
    {
        .name = _("Qwilfish"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 240, 16, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BARB_BARRAGE, MOVE_FLIP_TURN, MOVE_PAIN_SPLIT}
    },

    [SPECIES_QWILFISH_HISUI] = // Bulky Support
    {
        .name = _("Qwilfish-Hisui"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_GUNK_SHOT, MOVE_SPIKES, MOVE_TAUNT}
    },

    [SPECIES_SCIZOR] = // Pivot
    {
        .name = _("Scizor"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {120, 252, 0, 136, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_SHUCKLE] = // Suicide Lead
    {
        .name = _("Shuckle"),
        .item = ITEM_MENTAL_HERB,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FINAL_GAMBIT, MOVE_ENCORE, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB}
    },

    [SPECIES_HERACROSS] = // Wallbreaker
    {
        .name = _("Heracross"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_MEGAHORN}
    },

    [SPECIES_SNEASEL] = // Swords Dance
    {
        .name = _("Sneasel"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_ICE_SHARD}
    },

    [SPECIES_SNEASEL_HISUI] = // Swords Dance
    {
        .name = _("Sneasel-H"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_THROAT_CHOP}
    },

    [SPECIES_TEDDIURSA] = // TODO: Set
    {
        .name = _("Teddiursa"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_URSARING] = // Offensive Swords Dance (Spe)
    {
        .name = _("Ursaring"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SLUGMA] = // TODO: Set
    {
        .name = _("Slugma"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MAGCARGO] = // Setup Sweeper
    {
        .name = _("Magcargo"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WEAK_ARMOR,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_POWER_GEM, MOVE_SHELL_SMASH}
    },

    [SPECIES_SWINUB] = // TODO: Set
    {
        .name = _("Swinub"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PILOSWINE] = // Offensive Stealth Rock
    {
        .name = _("Piloswine"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD}
    },

    [SPECIES_CORSOLA] = // Default Set
    {
        .name = _("Corsola"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POWER_GEM, MOVE_RECOVER, MOVE_SCALD, MOVE_STEALTH_ROCK}
    },

    [SPECIES_CORSOLA_GALAR] = // Default Set
    {
        .name = _("Corsola-G"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HAZE, MOVE_NIGHT_SHADE, MOVE_STEALTH_ROCK, MOVE_STRENGTH_SAP}
    },

    [SPECIES_REMORAID] = // TODO: Set
    {
        .name = _("Remoraid"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_OCTILLERY] = // Default Set
    {
        .name = _("Octillery"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SNIPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENERGY_BALL, MOVE_FIRE_BLAST, MOVE_GUNK_SHOT, MOVE_HYDRO_PUMP}
    },

    [SPECIES_DELIBIRD] = // Fast Attacker
    {
        .name = _("Delibird"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DRILL_RUN, MOVE_ICE_SHARD, MOVE_ICE_SPINNER}
    },

    [SPECIES_MANTINE] = // Water Absorb (Flying)
    {
        .name = _("Mantine"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 164, 96, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_SCALD, MOVE_ROOST, MOVE_HAZE}
    },

    [SPECIES_SKARMORY] = // Spikes
    {
        .name = _("Skarmory"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 208, 48, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_BRAVE_BIRD, MOVE_SPIKES, MOVE_ROOST}
    },

    [SPECIES_HOUNDOUR] = // TODO: Set
    {
        .name = _("Houndour"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HOUNDOOM] = // Nasty Plot
    {
        .name = _("Houndoom"),
        .item = ITEM_HOUNDOOMINITE,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_KINGDRA] = // Rain Sweeper
    {
        .name = _("Kingdra"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_DRAGON_PULSE}
    },

    [SPECIES_PHANPY] = // TODO: Set
    {
        .name = _("Phanpy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DONPHAN] = // Offensive Utility
    {
        .name = _("Donphan"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 92, 144, 20, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN, MOVE_ICE_SPINNER}
    },

    [SPECIES_PORYGON2] = // Special Wall
    {
        .name = _("Porygon2"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DOWNLOAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 0, 4, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE}
    },

    [SPECIES_STANTLER] = // Choice Scarf
    {
        .name = _("Stantler"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SAP_SIPPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_THIEF, MOVE_TRICK}
    },

    [SPECIES_SMEARGLE] = // Hazard Setter
    {
        .name = _("Smeargle"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_STONE_AXE, MOVE_POPULATION_BOMB, MOVE_BANEFUL_BUNKER}
    },

    [SPECIES_TYROGUE] = // TODO: Set
    {
        .name = _("Tyrogue"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HITMONTOP] = // Rapid Spin
    {
        .name = _("Hitmontop"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_BULLET_PUNCH}
    },

    [SPECIES_SMOOCHUM] = // TODO: Set
    {
        .name = _("Smoochum"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ELEKID] = // Offensive Pivot
    {
        .name = _("Elekid"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {0, 0, 0, 236, 236, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAGBY] = // Life Orb
    {
        .name = _("Magby"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_VITAL_SPIRIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 60, 252, 196, 0},
        .ivs = {9, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_SUBSTITUTE, MOVE_PROTECT}
    },

    [SPECIES_MILTANK] = // Whitney's Finest
    {
        .name = _("Miltank"),
        .item = ITEM_LUM_BERRY,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STOMP, MOVE_PLAY_ROUGH, MOVE_ATTRACT, MOVE_THUNDER_WAVE}
    },

    [SPECIES_BLISSEY] = // Calm Mind
    {
        .name = _("Blissey"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_NATURAL_CURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED}
    },

    [SPECIES_RAIKOU] = // Offensive Pivot
    {
        .name = _("Raikou"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_ENTEI] = // Choice Band
    {
        .name = _("Entei"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {20, 188, 4, 252, 0, 44},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXTREME_SPEED, MOVE_SACRED_FIRE, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE}
    },

    [SPECIES_SUICUNE] = // Substitute + Calm Mind
    {
        .name = _("Suicune"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SUBSTITUTE, MOVE_CALM_MIND, MOVE_SCALD, MOVE_PROTECT}
    },

    [SPECIES_LARVITAR] = // TODO: Set
    {
        .name = _("Larvitar"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PUPITAR] = // TODO: Set
    {
        .name = _("Pupitar"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TYRANITAR] = // Specially Defensive
    {
        .name = _("Tyranitar"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAND_STREAM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 44, 0, 212},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK}
    },

    [SPECIES_LUGIA] = // Specially Defensive
    {
        .name = _("Lugia"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MULTISCALE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RECOVER, MOVE_WHIRLWIND, MOVE_AEROBLAST, MOVE_WHIRLPOOL}
    },

    [SPECIES_HO_OH] = // Bulky Offense
    {
        .name = _("Ho-Oh"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_RECOVER, MOVE_EARTHQUAKE}
    },

    [SPECIES_CELEBI] = // Nasty Plot (Grass)
    {
        .name = _("Celebi"),
        .item = ITEM_GROUNDIUM_Z,
        .ability = ABILITY_NATURAL_CURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_RECOVER}
    },

    [SPECIES_TREECKO] = // Setup Sweeper
    {
        .name = _("Treecko"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 156, 36, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH, MOVE_BULLET_SEED}
    },

    [SPECIES_GROVYLE] = // TODO: Set
    {
        .name = _("Grovyle"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SCEPTILE] = // Terrain Sweeper
    {
        .name = _("Sceptile"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {248, 252, 0, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH}
    },

    [SPECIES_TORCHIC] = // Life Orb
    {
        .name = _("Torchic"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 196, 36},
        .ivs = {9, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_TERA_BLAST, MOVE_PROTECT, MOVE_WILL_O_WISP}
    },

    [SPECIES_COMBUSKEN] = // TODO: Set
    {
        .name = _("Combusken"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BLAZIKEN] = // Swords Dance + Burning Bulwark
    {
        .name = _("Blaziken"),
        .item = ITEM_COVERT_CLOAK,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {104, 252, 0, 152, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PYRO_BALL, MOVE_THUNDEROUS_KICK, MOVE_BURNING_BULWARK}
    },

    [SPECIES_MUDKIP] = // TODO: Set
    {
        .name = _("Mudkip"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MARSHTOMP] = // Offensive Stealth Rock
    {
        .name = _("Marshtomp"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_ICE_PUNCH}
    },

    [SPECIES_SWAMPERT] = // Defensive Utility
    {
        .name = _("Swampert"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_FLIP_TURN}
    },

    [SPECIES_POOCHYENA] = // TODO: Set
    {
        .name = _("Poochyena"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MIGHTYENA] = // AV Pivot
    {
        .name = _("Mightyena"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_POISON_FANG, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ZIGZAGOON] = // TODO: Set
    {
        .name = _("Zigzagoon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ZIGZAGOON_GALAR] = // TODO: Set
    {
        .name = _("Zigzagoon-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LINOONE] = // Default Set
    {
        .name = _("Linoone"),
        .item = ITEM_AGUAV_BERRY,
        .ability = ABILITY_GLUTTONY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP}
    },

    [SPECIES_LINOONE_GALAR] = // TODO: Set
    {
        .name = _("Linoone-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WURMPLE] = // TODO: Set
    {
        .name = _("Wurmple"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SILCOON] = // TODO: Set
    {
        .name = _("Silcoon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BEAUTIFLY] = // Z-Move user
    {
        .name = _("Beautifly"),
        .item = ITEM_BUGINIUM_Z,
        .ability = ABILITY_SWARM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_CUTTER, MOVE_BUG_BUZZ, MOVE_HIDDEN_POWER, MOVE_QUIVER_DANCE}
    },

    [SPECIES_CASCOON] = // TODO: Set
    {
        .name = _("Cascoon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DUSTOX] = // Bulky Support
    {
        .name = _("Dustox"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SHIELD_DUST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_DEFOG, MOVE_ROOST, MOVE_TOXIC}
    },

    [SPECIES_LOTAD] = // TODO: Set
    {
        .name = _("Lotad"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LOMBRE] = // TODO: Set
    {
        .name = _("Lombre"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LUDICOLO] = // Rain Dance Sweeper
    {
        .name = _("Ludicolo"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_RAIN_DANCE}
    },

    [SPECIES_SEEDOT] = // TODO: Set
    {
        .name = _("Seedot"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NUZLEAF] = // TODO: Set
    {
        .name = _("Nuzleaf"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SHIFTRY] = // All-Out Attacker (Tailwind)
    {
        .name = _("Shiftry"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_WIND_RIDER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAILWIND, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_LOW_KICK}
    },

    [SPECIES_TAILLOW] = // TODO: Set
    {
        .name = _("Taillow"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SWELLOW] = // Fast Attacker
    {
        .name = _("Swellow"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_PROTECT, MOVE_QUICK_ATTACK}
    },

    [SPECIES_WINGULL] = // Offensive
    {
        .name = _("Wingull"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HYDRATION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {19, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_PROTECT}
    },

    [SPECIES_PELIPPER] = // Rain Setter
    {
        .name = _("Pelipper"),
        .item = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {248, 0, 224, 0, 0, 36},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_U_TURN, MOVE_ROOST, MOVE_KNOCK_OFF}
    },

    [SPECIES_RALTS] = // TODO: Set
    {
        .name = _("Ralts"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KIRLIA] = // TODO: Set
    {
        .name = _("Kirlia"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GARDEVOIR] = // Choice Scarf
    {
        .name = _("Gardevoir"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TRACE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_HEALING_WISH}
    },

    [SPECIES_SURSKIT] = // TODO: Set
    {
        .name = _("Surskit"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MASQUERAIN] = // Fast Support
    {
        .name = _("Masquerain"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_STICKY_WEB}
    },

    [SPECIES_SHROOMISH] = // TODO: Set
    {
        .name = _("Shroomish"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BRELOOM] = // Choice Band
    {
        .name = _("Breloom"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_CLOSE_COMBAT, MOVE_ROCK_TOMB}
    },

    [SPECIES_SLAKOTH] = // TODO: Set
    {
        .name = _("Slakoth"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VIGOROTH] = // Bulk Up
    {
        .name = _("Vigoroth"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_SLACK_OFF}
    },

    [SPECIES_SLAKING] = // Wallbreaker
    {
        .name = _("Slaking"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TRUANT,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_GIGA_IMPACT, MOVE_KNOCK_OFF}
    },

    [SPECIES_NINCADA] = // TODO: Set
    {
        .name = _("Nincada"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NINJASK] = // Default Set
    {
        .name = _("Ninjask"),
        .item = ITEM_NONE,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE, MOVE_U_TURN}
    },

    [SPECIES_SHEDINJA] = // Dual Status User (Ghost)
    {
        .name = _("Shedinja"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WONDER_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_LONELY,
        .evs = {0, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_WHISMUR] = // TODO: Set
    {
        .name = _("Whismur"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LOUDRED] = // TODO: Set
    {
        .name = _("Loudred"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_EXPLOUD] = // Default Set
    {
        .name = _("Exploud"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_SURF}
    },

    [SPECIES_MAKUHITA] = // TODO: Set
    {
        .name = _("Makuhita"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HARIYAMA] = // Bulk Up
    {
        .name = _("Hariyama"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {12, 200, 0, 44, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH}
    },

    [SPECIES_AZURILL] = // Belly Drum
    {
        .name = _("Azurill"),
        .item = ITEM_ORAN_BERRY,
        .ability = ABILITY_HUGE_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 196, 116, 116, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_FACADE, MOVE_AQUA_JET, MOVE_PROTECT}
    },

    [SPECIES_NOSEPASS] = // TODO: Set
    {
        .name = _("Nosepass"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SKITTY] = // TODO: Set
    {
        .name = _("Skitty"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DELCATTY] = // Fast Support
    {
        .name = _("Delcatty"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WONDER_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_FAKE_OUT, MOVE_HEAL_BELL, MOVE_SHADOW_BALL}
    },

    [SPECIES_SABLEYE] = // Defensive
    {
        .name = _("Sableye"),
        .item = ITEM_SABLENITE,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_RECOVER}
    },

    [SPECIES_MAWILE] = // Swords Dance
    {
        .name = _("Mawile"),
        .item = ITEM_MAWILITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {116, 252, 0, 140, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ARON] = // TODO: Set
    {
        .name = _("Aron"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LAIRON] = // TODO: Set
    {
        .name = _("Lairon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AGGRON] = // Tank
    {
        .name = _("Aggron"),
        .item = ITEM_AGGRONITE,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_TOXIC}
    },

    [SPECIES_MEDITITE] = // Wallbreaker
    {
        .name = _("Meditite"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_PURE_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_DRAIN_PUNCH}
    },

    [SPECIES_MEDICHAM] = // Choice Scarf
    {
        .name = _("Medicham"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PURE_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_TRICK}
    },

    [SPECIES_ELECTRIKE] = // TODO: Set
    {
        .name = _("Electrike"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MANECTRIC] = // Offensive Pivot
    {
        .name = _("Manectric"),
        .item = ITEM_MANECTITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_HIDDEN_POWER}
    },

    [SPECIES_PLUSLE] = // Setup Sweeper
    {
        .name = _("Plusle"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_ENCORE, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT}
    },

    [SPECIES_MINUN] = // Setup Sweeper
    {
        .name = _("Minun"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_ENCORE, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT}
    },

    [SPECIES_VOLBEAT] = // Weather Setter
    {
        .name = _("Volbeat"),
        .item = ITEM_HEAT_ROCK,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_SUNNY_DAY, MOVE_ENCORE, MOVE_MOONLIGHT, MOVE_U_TURN}
    },

    [SPECIES_ILLUMISE] = // Bulky Support
    {
        .name = _("Illumise"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_ENCORE, MOVE_ROOST, MOVE_THUNDER_WAVE}
    },

    [SPECIES_ROSELIA] = // TODO: Set
    {
        .name = _("Roselia"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GULPIN] = // TODO: Set
    {
        .name = _("Gulpin"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SWALOT] = // Bulky Attacker
    {
        .name = _("Swalot"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LIQUID_OOZE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLEAR_SMOG, MOVE_EARTHQUAKE, MOVE_ENCORE, MOVE_ICE_BEAM}
    },

    [SPECIES_CARVANHA] = // TODO: Set
    {
        .name = _("Carvanha"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SHARPEDO] = // Offensive
    {
        .name = _("Sharpedo"),
        .item = ITEM_SHARPEDONITE,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_CLOSE_COMBAT, MOVE_PROTECT}
    },

    [SPECIES_WAILMER] = // TODO: Set
    {
        .name = _("Wailmer"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WAILORD] = // Default Set
    {
        .name = _("Wailord"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_OBLIVIOUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_WATER_SPOUT}
    },

    [SPECIES_NUMEL] = // Special Attacker
    {
        .name = _("Numel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SIMPLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_WILL_O_WISP}
    },

    [SPECIES_CAMERUPT] = // Bulky Support
    {
        .name = _("Camerupt"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SOLID_ROCK,
        .teraType = TYPE_GRASS,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_ROAR, MOVE_STEALTH_ROCK}
    },

    [SPECIES_TORKOAL] = // Supportive Sun Setter
    {
        .name = _("Torkoal"),
        .item = ITEM_EJECT_PACK,
        .ability = ABILITY_DROUGHT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_OVERHEAT, MOVE_ERUPTION, MOVE_HELPING_HAND, MOVE_PROTECT}
    },

    [SPECIES_SPOINK] = // TODO: Set
    {
        .name = _("Spoink"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GRUMPIG] = // Bulky Setup
    {
        .name = _("Grumpig"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}
    },

    [SPECIES_SPINDA] = // Staller
    {
        .name = _("Spinda"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CONTRARY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REST, MOVE_RETURN, MOVE_SLEEP_TALK, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_TRAPINCH] = // Trapper
    {
        .name = _("Trapinch"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ARENA_TRAP,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {0, 196, 156, 36, 0, 76},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_FEINT, MOVE_FIRST_IMPRESSION}
    },

    [SPECIES_VIBRAVA] = // TODO: Set
    {
        .name = _("Vibrava"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLYGON] = // Offensive Stealth Rock
    {
        .name = _("Flygon"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_U_TURN}
    },

    [SPECIES_CACNEA] = // TODO: Set
    {
        .name = _("Cacnea"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CACTURNE] = // Mixed Attacker
    {
        .name = _("Cacturne"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAUGHTY,
        .evs = {0, 252, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_LEAF_STORM, MOVE_SPIKES}
    },

    [SPECIES_SWABLU] = // TODO: Set
    {
        .name = _("Swablu"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ALTARIA] = // Defensive
    {
        .name = _("Altaria"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_NATURAL_CURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 120, 136, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_BRAVE_BIRD, MOVE_WILL_O_WISP}
    },

    [SPECIES_ZANGOOSE] = // Fast Attacker
    {
        .name = _("Zangoose"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_TOXIC_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK}
    },

    [SPECIES_SEVIPER] = // Bulky Setup
    {
        .name = _("Seviper"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INFILTRATOR,
        .teraType = TYPE_GRASS,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE, MOVE_TRAILBLAZE}
    },

    [SPECIES_LUNATONE] = // Default Set
    {
        .name = _("Lunatone"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_POWER_GEM}
    },

    [SPECIES_SOLROCK] = // Default Set
    {
        .name = _("Solrock"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_MORNING_SUN, MOVE_ROCK_SLIDE}
    },

    [SPECIES_BARBOACH] = // TODO: Set
    {
        .name = _("Barboach"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WHISCASH] = // Wall
    {
        .name = _("Whiscash"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_OBLIVIOUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_STONE_EDGE, MOVE_SURF}
    },

    [SPECIES_CORPHISH] = // Dragon Dance
    {
        .name = _("Corphish"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 196, 76, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRABHAMMER, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },

    [SPECIES_CRAWDAUNT] = // Choice Band
    {
        .name = _("Crawdaunt"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURGING_STRIKES, MOVE_KNOCK_OFF, MOVE_JET_PUNCH, MOVE_FLIP_TURN}
    },

    [SPECIES_BALTOY] = // TODO: Set
    {
        .name = _("Baltoy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CLAYDOL] = // Default Set
    {
        .name = _("Claydol"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_RAPID_SPIN}
    },

    [SPECIES_LILEEP] = // TODO: Set
    {
        .name = _("Lileep"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CRADILY] = // Default Set
    {
        .name = _("Cradily"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POWER_WHIP, MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE}
    },

    [SPECIES_ANORITH] = // TODO: Set
    {
        .name = _("Anorith"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARMALDO] = // Default Set
    {
        .name = _("Armaldo"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_LIQUIDATION, MOVE_RAPID_SPIN}
    },

    [SPECIES_FEEBAS] = // TODO: Set
    {
        .name = _("Feebas"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MILOTIC] = // Defensive Utility
    {
        .name = _("Milotic"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_COMPETITIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SCALD, MOVE_DRAGON_TAIL, MOVE_FLIP_TURN, MOVE_RECOVER}
    },

    [SPECIES_CASTFORM] = // Bulky Attacker
    {
        .name = _("Castform"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_FORECAST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_RETURN}
    },

    [SPECIES_KECLEON] = // Fast Support
    {
        .name = _("Kecleon"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_PROTEAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_RECOVER}
    },

    [SPECIES_SHUPPET] = // TODO: Set
    {
        .name = _("Shuppet"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BANETTE] = // Wallbreaker
    {
        .name = _("Banette"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}
    },

    [SPECIES_DUSKULL] = // TODO: Set
    {
        .name = _("Duskull"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DUSCLOPS] = // Defensive
    {
        .name = _("Dusclops"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 0, 4, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_TROPIUS] = // Setup Sweeper
    {
        .name = _("Tropius"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HARVEST,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_LEAF_BLADE}
    },

    [SPECIES_CHIMECHO] = // Bulky Setup
    {
        .name = _("Chimecho"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC_NOISE, MOVE_PSYSHOCK}
    },

    [SPECIES_ABSOL] = // Mega Absol
    {
        .name = _("Absol"),
        .item = ITEM_ABSOLITE,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_WYNAUT] = // TODO: Set
    {
        .name = _("Wynaut"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SNORUNT] = // TODO: Set
    {
        .name = _("Snorunt"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GLALIE] = // Fast Support
    {
        .name = _("Glalie"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_FREEZE_DRY, MOVE_SPIKES, MOVE_TAUNT}
    },

    [SPECIES_SPHEAL] = // TODO: Set
    {
        .name = _("Spheal"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SEALEO] = // TODO: Set
    {
        .name = _("Sealeo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WALREIN] = // Default Set
    {
        .name = _("Walrein"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_SURF, MOVE_TOXIC}
    },

    [SPECIES_CLAMPERL] = // TODO: Set
    {
        .name = _("Clamperl"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HUNTAIL] = // Setup Sweeper
    {
        .name = _("Huntail"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_RETURN, MOVE_SHELL_SMASH, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_GOREBYSS] = // Setup Sweeper
    {
        .name = _("Gorebyss"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIDDEN_POWER, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SHELL_SMASH}
    },

    [SPECIES_RELICANTH] = // Default Set
    {
        .name = _("Relicanth"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ROCK_HEAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_LIQUIDATION}
    },

    [SPECIES_LUVDISC] = // Fast Support
    {
        .name = _("Luvdisc"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_GHOST,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENDEAVOR, MOVE_FLIP_TURN, MOVE_SUBSTITUTE, MOVE_SURF}
    },

    [SPECIES_BAGON] = // TODO: Set
    {
        .name = _("Bagon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SHELGON] = // TODO: Set
    {
        .name = _("Shelgon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SALAMENCE] = // 3 Attacks + Roost
    {
        .name = _("Salamence"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {160, 0, 0, 96, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ROOST}
    },

    [SPECIES_BELDUM] = // TODO: Set
    {
        .name = _("Beldum"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_METANG] = // TODO: Set
    {
        .name = _("Metang"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_METAGROSS] = // Bulky Attacker
    {
        .name = _("Metagross"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 160, 0, 96, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAVY_SLAM, MOVE_PSYCHIC_FANGS, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK}
    },

    [SPECIES_REGIROCK] = // Stealth Rock
    {
        .name = _("Regirock"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE}
    },

    [SPECIES_REGICE] = // Bulky Attacker
    {
        .name = _("Regice"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_ICE_BEAM, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_REGISTEEL] = // IronPress
    {
        .name = _("Registeel"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 52, 76, 4, 0, 124},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_IRON_DEFENSE, MOVE_PROTECT}
    },

    [SPECIES_LATIAS] = // Double Dance
    {
        .name = _("Latias"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 232, 24, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_STORED_POWER, MOVE_AURA_SPHERE}
    },

    [SPECIES_LATIOS] = // Choice Specs
    {
        .name = _("Latios"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_LUSTER_PURGE, MOVE_SURF, MOVE_FLIP_TURN}
    },

    [SPECIES_KYOGRE] = // Calm Mind
    {
        .name = _("Kyogre"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_DRIZZLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {132, 0, 68, 108, 196, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_PROTECT}
    },

    [SPECIES_GROUDON] = // Clear Amulet
    {
        .name = _("Groudon"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_DROUGHT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {188, 132, 92, 68, 0, 28},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_SWORDS_DANCE, MOVE_PROTECT}
    },

    [SPECIES_RAYQUAZA] = // Choice Band
    {
        .name = _("Rayquaza"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_AIR_LOCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {32, 252, 8, 216, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_ASCENT, MOVE_U_TURN, MOVE_V_CREATE, MOVE_EXTREME_SPEED}
    },

    [SPECIES_JIRACHI] = // Utility
    {
        .name = _("Jirachi"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 224, 0, 32},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_BODY_SLAM, MOVE_ENCORE}
    },

    [SPECIES_DEOXYS] = // Wallbreaker
    {
        .name = _("Deoxys"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_KNOCK_OFF, MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER}
    },

    [SPECIES_DEOXYS_ATTACK] = // Fast Attacker
    {
        .name = _("Deoxys-Attack"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXTREME_SPEED, MOVE_KNOCK_OFF, MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER}
    },

    [SPECIES_DEOXYS_DEFENSE] = // Bulky Setup
    {
        .name = _("Deoxys-Defense"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COSMIC_POWER, MOVE_NIGHT_SHADE, MOVE_RECOVER, MOVE_STORED_POWER}
    },

    [SPECIES_DEOXYS_SPEED] = // Fast Support
    {
        .name = _("Deoxys-Speed"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_PSYCHO_BOOST, MOVE_SPIKES, MOVE_STEALTH_ROCK}
    },

    [SPECIES_TURTWIG] = // TODO: Set
    {
        .name = _("Turtwig"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GROTLE] = // Shell Smash
    {
        .name = _("Grotle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHELL_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_SEED_BOMB, MOVE_IRON_HEAD, MOVE_SUPERPOWER}
    },

    [SPECIES_TORTERRA] = // Shell Smash Sweeper
    {
        .name = _("Torterra"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_SHELL_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_BULLET_SEED, MOVE_HEADLONG_RUSH, MOVE_ROCK_BLAST}
    },

    [SPECIES_CHIMCHAR] = // TODO: Set
    {
        .name = _("Chimchar"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MONFERNO] = // Swords Dance
    {
        .name = _("Monferno"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF}
    },

    [SPECIES_INFERNAPE] = // Nasty Plot
    {
        .name = _("Infernape"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_GRASS_KNOT, MOVE_VACUUM_WAVE}
    },

    [SPECIES_PIPLUP] = // TODO: Set
    {
        .name = _("Piplup"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PRINPLUP] = // Defensive Pivot
    {
        .name = _("Prinplup"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_COMPETITIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_ROOST, MOVE_SURF, MOVE_ICE_BEAM}
    },

    [SPECIES_EMPOLEON] = // Offensive
    {
        .name = _("Empoleon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_COMPETITIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {144, 0, 0, 216, 148, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_ROOST}
    },

    [SPECIES_STARLY] = // TODO: Set
    {
        .name = _("Starly"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_STARAVIA] = // TODO: Set
    {
        .name = _("Staravia"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_STARAPTOR] = // Choice Band
    {
        .name = _("Staraptor"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_RECKLESS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_U_TURN, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_BIDOOF] = // TODO: Set
    {
        .name = _("Bidoof"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BIBAREL] = // Setup Sweeper
    {
        .name = _("Bibarel"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SIMPLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_QUICK_ATTACK, MOVE_RETURN}
    },

    [SPECIES_KRICKETOT] = // TODO: Set
    {
        .name = _("Kricketot"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KRICKETUNE] = // Fast Support
    {
        .name = _("Kricketune"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_POUNCE, MOVE_STICKY_WEB, MOVE_TAUNT}
    },

    [SPECIES_SHINX] = // TODO: Set
    {
        .name = _("Shinx"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LUXIO] = // TODO: Set
    {
        .name = _("Luxio"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LUXRAY] = // Setup Sweeper
    {
        .name = _("Luxray"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_SUPERCELL_SLAM, MOVE_THROAT_CHOP}
    },

    [SPECIES_BUDEW] = // TODO: Set
    {
        .name = _("Budew"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ROSERADE] = // Offensive
    {
        .name = _("Roserade"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_MAGICAL_LEAF, MOVE_HIDDEN_POWER, MOVE_SPIKES}
    },

    [SPECIES_CRANIDOS] = // TODO: Set
    {
        .name = _("Cranidos"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RAMPARDOS] = // Wallbreaker
    {
        .name = _("Rampardos"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_FIRE,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_SHIELDON] = // TODO: Set
    {
        .name = _("Shieldon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BASTIODON] = // Bulky Setup
    {
        .name = _("Bastiodon"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_SOUNDPROOF,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_FOUL_PLAY, MOVE_IRON_DEFENSE, MOVE_REST}
    },

    [SPECIES_BURMY_PLANT] = // TODO: Set
    {
        .name = _("Burmy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BURMY_SANDY] = // TODO: Set
    {
        .name = _("Burmy-S"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BURMY_TRASH] = // TODO: Set
    {
        .name = _("Burmy-T"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WORMADAM] = // Setup Sweeper
    {
        .name = _("Wormadam"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_ANTICIPATION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER}
    },

    [SPECIES_WORMADAM_SANDY] = // Staller
    {
        .name = _("Wormadam-Sandy"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_OVERCOAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_INFESTATION, MOVE_PROTECT, MOVE_STEALTH_ROCK}
    },

    [SPECIES_WORMADAM_TRASH] = // Staller
    {
        .name = _("Wormadam-Trash"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_OVERCOAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLASH_CANNON, MOVE_INFESTATION, MOVE_PROTECT, MOVE_STEALTH_ROCK}
    },

    [SPECIES_MOTHIM] = // Z-Move user
    {
        .name = _("Mothim"),
        .item = ITEM_BUGINIUM_Z,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_QUIVER_DANCE}
    },

    [SPECIES_COMBEE] = // TODO: Set
    {
        .name = _("Combee"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VESPIQUEN] = // Bulky Support
    {
        .name = _("Vespiquen"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_HURRICANE, MOVE_ROOST, MOVE_SPIKES}
    },

    [SPECIES_PACHIRISU] = // AV Pivot
    {
        .name = _("Pachirisu"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_THUNDERBOLT, MOVE_U_TURN}
    },

    [SPECIES_BUIZEL] = // Rain Wallbreaker
    {
        .name = _("Buizel"),
        .item = ITEM_ORAN_BERRY,
        .ability = ABILITY_WATER_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 0, 236, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_WAVE_CRASH, MOVE_ICE_SPINNER, MOVE_BRICK_BREAK}
    },

    [SPECIES_FLOATZEL] = // Choice Scarf
    {
        .name = _("Floatzel"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_WATER_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WAVE_CRASH, MOVE_FLIP_TURN, MOVE_ICE_SPINNER, MOVE_LIQUIDATION}
    },

    [SPECIES_CHERUBI] = // TODO: Set
    {
        .name = _("Cherubi"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CHERRIM] = // Default Set
    {
        .name = _("Cherrim"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLOWER_GIFT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_HEALING_WISH, MOVE_PETAL_DANCE}
    },

    [SPECIES_SHELLOS_WEST] = // TODO: Set
    {
        .name = _("Shellos"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SHELLOS_EAST] = // TODO: Set
    {
        .name = _("Shellos-E"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GASTRODON] = // Bulky Support
    {
        .name = _("Gastrodon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .teraType = TYPE_POISON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_SLUDGE_BOMB, MOVE_STEALTH_ROCK}
    },

    [SPECIES_GASTRODON_EAST] = // TODO: Set
    {
        .name = _("Gastrodon-E"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AMBIPOM] = // Offensive Pivot
    {
        .name = _("Ambipom"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL}
    },

    [SPECIES_DRIFLOON] = // Setup Sweeper
    {
        .name = _("Drifloon"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 84, 196, 196, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP}
    },

    [SPECIES_DRIFBLIM] = // Unburden Sweeper (Def, SpA, SpD)
    {
        .name = _("Drifblim"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HEX, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_STRENGTH_SAP}
    },

    [SPECIES_BUNEARY] = // TODO: Set
    {
        .name = _("Buneary"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LOPUNNY] = // All-Out Attacker
    {
        .name = _("Lopunny"),
        .item = ITEM_LOPUNNITE,
        .ability = ABILITY_LIMBER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_TRIPLE_AXEL}
    },

    [SPECIES_MISMAGIUS] = // Nasty Plot
    {
        .name = _("Mismagius"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_SUBSTITUTE}
    },

    [SPECIES_HONCHKROW] = // Wallbreaker
    {
        .name = _("Honchkrow"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_HEAT_WAVE, MOVE_LASH_OUT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_GLAMEOW] = // TODO: Set
    {
        .name = _("Glameow"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PURUGLY] = // Fast Attacker
    {
        .name = _("Purugly"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_RETURN, MOVE_STOMPING_TANTRUM}
    },

    [SPECIES_CHINGLING] = // TODO: Set
    {
        .name = _("Chingling"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_STUNKY] = // Physical Attacker
    {
        .name = _("Stunky"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_AFTERMATH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {12, 252, 0, 244, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_TEMPER_FLARE}
    },

    [SPECIES_SKUNTANK] = // Utility
    {
        .name = _("Skuntank"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_AFTERMATH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_TAUNT}
    },

    [SPECIES_BRONZOR] = // TODO: Set
    {
        .name = _("Bronzor"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BRONZONG] = // Defensive
    {
        .name = _("Bronzong"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC_NOISE, MOVE_BODY_PRESS, MOVE_PROTECT}
    },

    [SPECIES_BONSLY] = // TODO: Set
    {
        .name = _("Bonsly"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MIME_JR] = // TODO: Set
    {
        .name = _("Mime-Jr"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HAPPINY] = // TODO: Set
    {
        .name = _("Happiny"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CHATOT] = // Setup Sweeper
    {
        .name = _("Chatot"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TANGLED_FEET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_NASTY_PLOT}
    },

    [SPECIES_SPIRITOMB] = // Offensive Trick Room
    {
        .name = _("Spiritomb"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INFILTRATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_PSYSHOCK}
    },

    [SPECIES_GIBLE] = // Setup Sweeper
    {
        .name = _("Gible"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROUGH_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {52, 196, 76, 180, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_ENDURE}
    },

    [SPECIES_GABITE] = // Swords Dance
    {
        .name = _("Gabite"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ROUGH_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE}
    },

    [SPECIES_GARCHOMP] = // Suicide Lead
    {
        .name = _("Garchomp"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_ROUGH_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SPIKES}
    },

    [SPECIES_MUNCHLAX] = // TODO: Set
    {
        .name = _("Munchlax"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RIOLU] = // TODO: Set
    {
        .name = _("Riolu"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LUCARIO] = // Swords Dance
    {
        .name = _("Lucario"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_EXTREME_SPEED}
    },

    [SPECIES_HIPPOPOTAS] = // Sand Setter
    {
        .name = _("Hippopotas"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SAND_STREAM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 100, 212, 0, 0, 180},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLACK_OFF, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_ICE_FANG}
    },

    [SPECIES_HIPPOWDON] = // Stealth Rock
    {
        .name = _("Hippowdon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAND_STREAM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 208, 0, 0, 48},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_STONE_EDGE}
    },

    [SPECIES_SKORUPI] = // TODO: Set
    {
        .name = _("Skorupi"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DRAPION] = // Default Set
    {
        .name = _("Drapion"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SNIPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_POISON_JAB}
    },

    [SPECIES_CROAGUNK] = // Bulky Attacker
    {
        .name = _("Croagunk"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DRY_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {52, 188, 116, 116, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE}
    },

    [SPECIES_TOXICROAK] = // Swords Dance
    {
        .name = _("Toxicroak"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DRY_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_CARNIVINE] = // Bulky Support
    {
        .name = _("Carnivine"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_SLEEP_POWDER}
    },

    [SPECIES_FINNEON] = // TODO: Set
    {
        .name = _("Finneon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LUMINEON] = // Fast Support
    {
        .name = _("Lumineon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STORM_DRAIN,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_U_TURN}
    },

    [SPECIES_MANTYKE] = // TODO: Set
    {
        .name = _("Mantyke"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SNOVER] = // Snow Setter
    {
        .name = _("Snover"),
        .item = ITEM_ICY_ROCK,
        .ability = ABILITY_SNOW_WARNING,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HASTY,
        .evs = {0, 100, 0, 196, 180, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_ICE_SHARD, MOVE_PROTECT}
    },

    [SPECIES_ABOMASNOW] = // Aurora Veil
    {
        .name = _("Abomasnow"),
        .item = ITEM_EJECT_PACK,
        .ability = ABILITY_SNOW_WARNING,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURORA_VEIL, MOVE_LEAF_STORM, MOVE_BLIZZARD, MOVE_EARTH_POWER}
    },

    [SPECIES_WEAVILE] = // Boots Attacker
    {
        .name = _("Weavile"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_SWORDS_DANCE}
    },

    [SPECIES_MAGNEZONE] = // Choice Specs
    {
        .name = _("Magnezone"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ANALYTIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TERA_BLAST}
    },

    [SPECIES_LICKILICKY] = // Default Set
    {
        .name = _("Lickilicky"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_OBLIVIOUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_HEAL_BELL}
    },

    [SPECIES_RHYPERIOR] = // Stealth Rock
    {
        .name = _("Rhyperior"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SOLID_ROCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 16, 0, 0, 0, 240},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_STEALTH_ROCK}
    },

    [SPECIES_TANGROWTH] = // Physically Defensive
    {
        .name = _("Tangrowth"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER}
    },

    [SPECIES_ELECTIVIRE] = // Fast Attacker
    {
        .name = _("Electivire"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOTOR_DRIVE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_MAGMORTAR] = // All-Out Attacker
    {
        .name = _("Magmortar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_THUNDERBOLT, MOVE_KNOCK_OFF}
    },

    [SPECIES_TOGEKISS] = // Default Set
    {
        .name = _("Togekiss"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SERENE_GRACE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}
    },

    [SPECIES_YANMEGA] = // Choice Specs (Bug)
    {
        .name = _("Yanmega"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_U_TURN}
    },

    [SPECIES_LEAFEON] = // Sunny Day Attacker
    {
        .name = _("Leafeon"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SOLAR_BLADE, MOVE_DOUBLE_EDGE, MOVE_TERA_BLAST}
    },

    [SPECIES_GLACEON] = // Bulky Setup
    {
        .name = _("Glaceon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_ICE_BODY,
        .teraType = TYPE_WATER,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FREEZE_DRY, MOVE_PROTECT, MOVE_WISH}
    },

    [SPECIES_GLISCOR] = // Defensive
    {
        .name = _("Gliscor"),
        .item = ITEM_TOXIC_ORB,
        .ability = ABILITY_POISON_HEAL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {244, 0, 252, 0, 0, 12},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_SPIKES, MOVE_PROTECT}
    },

    [SPECIES_MAMOSWINE] = // Wallbreaker
    {
        .name = _("Mamoswine"),
        .item = ITEM_NEVER_MELT_ICE,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_TRAILBLAZE}
    },

    [SPECIES_PORYGON_Z] = // Agility
    {
        .name = _("Porygon-Z"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DOWNLOAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_TERA_BLAST, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_GALLADE] = // Setup Sweeper
    {
        .name = _("Gallade"),
        .item = ITEM_LUM_BERRY,
        .ability = ABILITY_SHARPNESS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_LEAF_BLADE}
    },

    [SPECIES_PROBOPASS] = // Bulky Setup
    {
        .name = _("Probopass"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_MAGNET_PULL,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_IRON_DEFENSE, MOVE_POWER_GEM}
    },

    [SPECIES_DUSKNOIR] = // Bulky Support
    {
        .name = _("Dusknoir"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_PAIN_SPLIT, MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_FROSLASS] = // Suicide Lead
    {
        .name = _("Froslass"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_TAUNT, MOVE_DESTINY_BOND, MOVE_ICY_WIND}
    },

    [SPECIES_ROTOM] = // Choice Scarf
    {
        .name = _("Rotom"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH, MOVE_TRICK}
    },

    [SPECIES_ROTOM_HEAT] = // Bulky Attacker
    {
        .name = _("Rotom-Heat"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_OVERHEAT, MOVE_PAIN_SPLIT, MOVE_THUNDERBOLT}
    },

    [SPECIES_ROTOM_FAN] = // Bulky Attacker
    {
        .name = _("Rotom-Fan"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    },

    [SPECIES_ROTOM_FROST] = // Fast Attacker
    {
        .name = _("Rotom-Frost"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLIZZARD, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH}
    },

    [SPECIES_ROTOM_MOW] = // Bulky Attacker
    {
        .name = _("Rotom-Mow"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_TRICK}
    },

    [SPECIES_ROTOM_WASH] = // Bulky Attacker
    {
        .name = _("Rotom-Wash"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_NASTY_PLOT, MOVE_PAIN_SPLIT, MOVE_THUNDERBOLT}
    },

    [SPECIES_UXIE] = // Nasty Plot
    {
        .name = _("Uxie"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_ENCORE}
    },

    [SPECIES_MESPRIT] = // Utility
    {
        .name = _("Mesprit"),
        .item = ITEM_COLBUR_BERRY,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC_NOISE, MOVE_U_TURN, MOVE_HEALING_WISH}
    },

    [SPECIES_AZELF] = // Lead
    {
        .name = _("Azelf"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_TAUNT, MOVE_EXPLOSION, MOVE_FLAMETHROWER}
    },

    [SPECIES_DIALGA_ORIGIN] = // Fast Attacker
    {
        .name = _("Dialga-Origin"),
        .item = ITEM_ADAMANT_CRYSTAL,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_FLASH_CANNON, MOVE_HEAVY_SLAM}
    },

    [SPECIES_PALKIA] = // Choice Scarf
    {
        .name = _("Palkia"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPACIAL_REND, MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_TRICK}
    },

    [SPECIES_PALKIA_ORIGIN] = // Bulky Attacker
    {
        .name = _("Palkia-Origin"),
        .item = ITEM_LUSTROUS_GLOBE,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND}
    },

    [SPECIES_HEATRAN] = // Offensive
    {
        .name = _("Heatran"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_MAGMA_STORM, MOVE_EARTH_POWER, MOVE_TERA_BLAST}
    },

    [SPECIES_REGIGIGAS] = // Bulky Support
    {
        .name = _("Regigigas"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SLOW_START,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_GIRATINA_ALTERED] = // Defog
    {
        .name = _("Giratina"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ROAR, MOVE_WILL_O_WISP, MOVE_REST}
    },

    [SPECIES_GIRATINA_ORIGIN] = // Fast Attacker
    {
        .name = _("Giratina-Origi"),
        .item = ITEM_GRISEOUS_CORE,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_DRACO_METEOR, MOVE_DRAGON_TAIL, MOVE_POLTERGEIST}
    },

    [SPECIES_CRESSELIA] = // Trick Room Support
    {
        .name = _("Cresselia"),
        .item = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 180, 0, 0, 76},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_LUNAR_BLESSING, MOVE_TRICK_ROOM, MOVE_HELPING_HAND}
    },

    [SPECIES_PHIONE] = // Bulky Attacker
    {
        .name = _("Phione"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HYDRATION,
        .teraType = TYPE_GRASS,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GRASS_KNOT, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_TAKE_HEART}
    },

    [SPECIES_MANAPHY] = // Tail Glow
    {
        .name = _("Manaphy"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HYDRATION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_TAIL_GLOW, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_ENERGY_BALL}
    },

    [SPECIES_DARKRAI] = // Choice Scarf
    {
        .name = _("Darkrai"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BAD_DREAMS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_TRICK, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_SHAYMIN_LAND] = // Serene
    {
        .name = _("Shaymin"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_NATURAL_CURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_HEALING_WISH}
    },

    [SPECIES_SHAYMIN_SKY] = // Fast Attacker
    {
        .name = _("Shaymin-Sky"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SERENE_GRACE,
        .teraType = TYPE_FLYING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER, MOVE_SEED_FLARE}
    },

    [SPECIES_ARCEUS_NORMAL] = // Extreme Killer
    {
        .name = _("Arceus"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_RECOVER, MOVE_EXTREME_SPEED, MOVE_SHADOW_CLAW}
    },

    [SPECIES_VICTINI] = // Pivot
    {
        .name = _("Victini"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VICTORY_STAR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_V_CREATE, MOVE_U_TURN, MOVE_BOLT_STRIKE, MOVE_TOXIC}
    },

    [SPECIES_SNIVY] = // TODO: Set
    {
        .name = _("Snivy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SERVINE] = // Defensive
    {
        .name = _("Servine"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CONTRARY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_SYNTHESIS, MOVE_KNOCK_OFF, MOVE_GLARE}
    },

    [SPECIES_SERPERIOR] = // Dual Screens
    {
        .name = _("Serperior"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_CONTRARY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_GLARE, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },

    [SPECIES_TEPIG] = // TODO: Set
    {
        .name = _("Tepig"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PIGNITE] = // All-Out Attacker
    {
        .name = _("Pignite"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_EMBOAR] = // Wallbreaker
    {
        .name = _("Emboar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_RECKLESS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_OSHAWOTT] = // TODO: Set
    {
        .name = _("Oshawott"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DEWOTT] = // Swords Dance
    {
        .name = _("Dewott"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 4, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_AQUA_JET}
    },

    [SPECIES_SAMUROTT] = // Special Wallbreaker
    {
        .name = _("Samurott"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_GRASS_KNOT, MOVE_ICE_BEAM, MOVE_AQUA_JET}
    },

    [SPECIES_SAMUROTT_HISUI] = // Fast Attacker
    {
        .name = _("Samurott-Hisui"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SHARPNESS,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CEASELESS_EDGE, MOVE_FLIP_TURN, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD}
    },

    [SPECIES_PATRAT] = // TODO: Set
    {
        .name = _("Patrat"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WATCHOG] = // Bulky Attacker
    {
        .name = _("Watchog"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ANALYTIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYPNOSIS, MOVE_KNOCK_OFF, MOVE_RETURN, MOVE_SUPER_FANG}
    },

    [SPECIES_LILLIPUP] = // TODO: Set
    {
        .name = _("Lillipup"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HERDIER] = // TODO: Set
    {
        .name = _("Herdier"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_STOUTLAND] = // Default Set
    {
        .name = _("Stoutland"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER}
    },

    [SPECIES_PURRLOIN] = // TODO: Set
    {
        .name = _("Purrloin"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LIEPARD] = // Default Set
    {
        .name = _("Liepard"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COPYCAT, MOVE_ENCORE, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH}
    },

    [SPECIES_PANSAGE] = // TODO: Set
    {
        .name = _("Pansage"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SIMISAGE] = // Setup Sweeper
    {
        .name = _("Simisage"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_OVERGROW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}
    },

    [SPECIES_PANSEAR] = // TODO: Set
    {
        .name = _("Pansear"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SIMISEAR] = // Setup Sweeper
    {
        .name = _("Simisear"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_HIDDEN_POWER}
    },

    [SPECIES_PANPOUR] = // TODO: Set
    {
        .name = _("Panpour"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SIMIPOUR] = // Setup Sweeper
    {
        .name = _("Simipour"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GRASS_KNOT, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_NASTY_PLOT}
    },

    [SPECIES_MUNNA] = // TODO: Set
    {
        .name = _("Munna"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MUSHARNA] = // Default Set
    {
        .name = _("Musharna"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SYNCHRONIZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_PSYCHIC}
    },

    [SPECIES_PIDOVE] = // TODO: Set
    {
        .name = _("Pidove"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TRANQUILL] = // TODO: Set
    {
        .name = _("Tranquill"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_UNFEZANT] = // Default Set
    {
        .name = _("Unfezant"),
        .item = ITEM_SCOPE_LENS,
        .ability = ABILITY_SUPER_LUCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_NIGHT_SLASH, MOVE_ROOST}
    },

    [SPECIES_BLITZLE] = // TODO: Set
    {
        .name = _("Blitzle"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ZEBSTRIKA] = // Fast Attacker
    {
        .name = _("Zebstrika"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAP_SIPPER,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_OVERHEAT, MOVE_SUPERCELL_SLAM, MOVE_VOLT_SWITCH}
    },

    [SPECIES_ROGGENROLA] = // TODO: Set
    {
        .name = _("Roggenrola"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BOLDORE] = // TODO: Set
    {
        .name = _("Boldore"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GIGALITH] = // Default Set
    {
        .name = _("Gigalith"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SAND_STREAM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE}
    },

    [SPECIES_WOOBAT] = // TODO: Set
    {
        .name = _("Woobat"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SWOOBAT] = // Default Set
    {
        .name = _("Swoobat"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SIMPLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_CALM_MIND, MOVE_HEAT_WAVE, MOVE_ROOST}
    },

    [SPECIES_DRILBUR] = // Utility
    {
        .name = _("Drilbur"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 156, 116, 212, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_RAPID_SPIN}
    },

    [SPECIES_EXCADRILL] = // Utility
    {
        .name = _("Excadrill"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {156, 0, 0, 100, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK}
    },

    [SPECIES_AUDINO] = // Default Set
    {
        .name = _("Audino"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAL_BELL, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_TIMBURR] = // Physical Attacker
    {
        .name = _("Timburr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 196, 156, 0, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_GURDURR] = // Bulky Attacker
    {
        .name = _("Gurdurr"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {248, 16, 244, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_DEFOG}
    },

    [SPECIES_CONKELDURR] = // Guts
    {
        .name = _("Conkeldurr"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {4, 68, 0, 216, 0, 220},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_MACH_PUNCH}
    },

    [SPECIES_TYMPOLE] = // TODO: Set
    {
        .name = _("Tympole"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PALPITOAD] = // TODO: Set
    {
        .name = _("Palpitoad"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SEISMITOAD] = // Default Set
    {
        .name = _("Seismitoad"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_RAIN_DANCE, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_THROH] = // Default Set
    {
        .name = _("Throh"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CIRCLE_THROW, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_SAWK] = // Default Set
    {
        .name = _("Sawk"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_POISON_JAB}
    },

    [SPECIES_SEWADDLE] = // TODO: Set
    {
        .name = _("Sewaddle"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SWADLOON] = // TODO: Set
    {
        .name = _("Swadloon"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LEAVANNY] = // Sticky Web
    {
        .name = _("Leavanny"),
        .item = ITEM_EJECT_PACK,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAUGHTY,
        .evs = {0, 116, 0, 216, 176, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_LEAF_STORM, MOVE_TRIPLE_AXEL, MOVE_LOW_KICK}
    },

    [SPECIES_VENIPEDE] = // TODO: Set
    {
        .name = _("Venipede"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WHIRLIPEDE] = // TODO: Set
    {
        .name = _("Whirlipede"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SCOLIPEDE] = // Default Set
    {
        .name = _("Scolipede"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_PROTECT}
    },

    [SPECIES_COTTONEE] = // Memento
    {
        .name = _("Cottonee"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 36, 228, 140, 36},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_STUN_SPORE, MOVE_MEMENTO}
    },

    [SPECIES_WHIMSICOTT] = // Babiri Berry
    {
        .name = _("Whimsicott"),
        .item = ITEM_BABIRI_BERRY,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {56, 0, 252, 0, 0, 200},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_ENCORE}
    },

    [SPECIES_PETILIL] = // TODO: Set
    {
        .name = _("Petilil"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LILLIGANT] = // Sun Sweeper
    {
        .name = _("Lilligant"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_ALLURING_VOICE}
    },

    [SPECIES_LILLIGANT_HISUI] = // Setup Sweeper
    {
        .name = _("Lilligant-Hisu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_LEAF_BLADE, MOVE_SLEEP_POWDER}
    },

    [SPECIES_BASCULIN] = // Wallbreaker
    {
        .name = _("Basculin"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_WATER,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_DOUBLE_EDGE, MOVE_FLIP_TURN, MOVE_WAVE_CRASH}
    },

    [SPECIES_BASCULIN_BLUE_STRIPED] = // TODO: Set
    {
        .name = _("Basculin-B"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BASCULIN_WHITE_STRIPED] = // TODO: Set
    {
        .name = _("Basculin-W"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SANDILE] = // Bulky Stealth Rock
    {
        .name = _("Sandile"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 180, 76, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_TERA_BLAST, MOVE_EARTHQUAKE, MOVE_STONE_EDGE}
    },

    [SPECIES_KROKOROK] = // Choice Item
    {
        .name = _("Krokorok"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_AQUA_TAIL}
    },

    [SPECIES_KROOKODILE] = // Choice Band
    {
        .name = _("Krookodile"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_DARUMAKA] = // TODO: Set
    {
        .name = _("Darumaka"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DARUMAKA_GALAR] = // TODO: Set
    {
        .name = _("Darumaka-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DARMANITAN] = // Default Set
    {
        .name = _("Darmanitan"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER}
    },

    [SPECIES_MARACTUS] = // Default Set
    {
        .name = _("Maractus"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENERGY_BALL, MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_SPIKES}
    },

    [SPECIES_DWEBBLE] = // TODO: Set
    {
        .name = _("Dwebble"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CRUSTLE] = // Default Set
    {
        .name = _("Crustle"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_X_SCISSOR}
    },

    [SPECIES_SCRAGGY] = // Bulk Up
    {
        .name = _("Scraggy"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 0, 4, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_REST}
    },

    [SPECIES_SCRAFTY] = // Dragon Dance
    {
        .name = _("Scrafty"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SHED_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {176, 100, 0, 232, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB}
    },

    [SPECIES_SIGILYPH] = // Default Set
    {
        .name = _("Sigilyph"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MAGIC_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_DEFOG, MOVE_ENERGY_BALL, MOVE_HEAT_WAVE}
    },

    [SPECIES_YAMASK] = // TODO: Set
    {
        .name = _("Yamask"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_YAMASK_GALAR] = // TODO: Set
    {
        .name = _("Yamask-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_COFAGRIGUS] = // Default Set
    {
        .name = _("Cofagrigus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MUMMY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_MEMENTO, MOVE_SHADOW_BALL, MOVE_TOXIC_SPIKES}
    },

    [SPECIES_TIRTOUGA] = // TODO: Set
    {
        .name = _("Tirtouga"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CARRACOSTA] = // Default Set
    {
        .name = _("Carracosta"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_SOLID_ROCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_HYDRO_PUMP, MOVE_SHELL_SMASH, MOVE_STONE_EDGE}
    },

    [SPECIES_ARCHEN] = // TODO: Set
    {
        .name = _("Archen"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARCHEOPS] = // Default Set
    {
        .name = _("Archeops"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_DEFEATIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_STONE_EDGE}
    },

    [SPECIES_TRUBBISH] = // TODO: Set
    {
        .name = _("Trubbish"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GARBODOR] = // Bulky Attacker
    {
        .name = _("Garbodor"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_AFTERMATH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GUNK_SHOT, MOVE_HAZE, MOVE_PAIN_SPLIT, MOVE_SPIKES}
    },

    [SPECIES_ZORUA] = // Choice Scarf
    {
        .name = _("Zorua"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ILLUSION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {36, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TERA_BLAST, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ZORUA_HISUI] = // Wallbreaker
    {
        .name = _("Zorua-H"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_ILLUSION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 116, 196, 156, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TERA_BLAST, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF}
    },

    [SPECIES_ZOROARK] = // Choice Specs
    {
        .name = _("Zoroark"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ILLUSION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_TRICK, MOVE_FOCUS_BLAST}
    },

    [SPECIES_ZOROARK_HISUI] = // Fast Attacker
    {
        .name = _("Zoroark-Hisui"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_ILLUSION,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_HYPER_VOICE, MOVE_POLTERGEIST, MOVE_WILL_O_WISP}
    },

    [SPECIES_MINCCINO] = // Skill Link Attacker
    {
        .name = _("Minccino"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SKILL_LINK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {76, 196, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TAIL_SLAP, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_U_TURN}
    },

    [SPECIES_CINCCINO] = // Tidy Up
    {
        .name = _("Cinccino"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TIDY_UP, MOVE_TAIL_SLAP, MOVE_KNOCK_OFF, MOVE_ENCORE}
    },

    [SPECIES_GOTHITA] = // Trapper
    {
        .name = _("Gothita"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SHADOW_TAG,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 36, 236, 236, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_TRICK, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL}
    },

    [SPECIES_GOTHORITA] = // TODO: Set
    {
        .name = _("Gothorita"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOTHITELLE] = // Supportive Trapper
    {
        .name = _("Gothitelle"),
        .item = ITEM_COVERT_CLOAK,
        .ability = ABILITY_SHADOW_TAG,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {252, 0, 100, 0, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_HELPING_HAND}
    },

    [SPECIES_SOLOSIS] = // TODO: Set
    {
        .name = _("Solosis"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DUOSION] = // Double Dance
    {
        .name = _("Duosion"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ACID_ARMOR, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_STORED_POWER}
    },

    [SPECIES_REUNICLUS] = // Calm Mind
    {
        .name = _("Reuniclus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGIC_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC_NOISE, MOVE_FOCUS_BLAST, MOVE_RECOVER}
    },

    [SPECIES_DUCKLETT] = // TODO: Set
    {
        .name = _("Ducklett"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SWANNA] = // Bulky Support
    {
        .name = _("Swanna"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_HYDRATION,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_FLIP_TURN, MOVE_HYDRO_PUMP}
    },

    [SPECIES_VANILLITE] = // TODO: Set
    {
        .name = _("Vanillite"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VANILLISH] = // TODO: Set
    {
        .name = _("Vanillish"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VANILLUXE] = // Default Set
    {
        .name = _("Vanilluxe"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SNOW_WARNING,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURORA_VEIL, MOVE_BLIZZARD, MOVE_EXPLOSION, MOVE_FLASH_CANNON}
    },

    [SPECIES_DEERLING_SPRING] = // TODO: Set
    {
        .name = _("Deerling"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DEERLING_SUMMER] = // TODO: Set
    {
        .name = _("Deerling-S"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DEERLING_AUTUMN] = // TODO: Set
    {
        .name = _("Deerling-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DEERLING_WINTER] = // TODO: Set
    {
        .name = _("Deerling-W"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SAWSBUCK] = // Fast Attacker
    {
        .name = _("Sawsbuck"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SERENE_GRACE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEADBUTT, MOVE_HIGH_HORSEPOWER, MOVE_HORN_LEECH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SAWSBUCK_SUMMER] = // TODO: Set
    {
        .name = _("Sawsbuck-S"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SAWSBUCK_AUTUMN] = // TODO: Set
    {
        .name = _("Sawsbuck-A"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SAWSBUCK_WINTER] = // TODO: Set
    {
        .name = _("Sawsbuck-W"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_EMOLGA] = // Default Set
    {
        .name = _("Emolga"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MOTOR_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_DEFOG, MOVE_ENERGY_BALL, MOVE_ROOST}
    },

    [SPECIES_KARRABLAST] = // TODO: Set
    {
        .name = _("Karrablast"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ESCAVALIER] = // Default Set
    {
        .name = _("Escavalier"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_OVERCOAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_IRON_HEAD, MOVE_KNOCK_OFF}
    },

    [SPECIES_FOONGUS] = // Defensive
    {
        .name = _("Foongus"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {44, 0, 236, 0, 0, 156},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS}
    },

    [SPECIES_AMOONGUSS] = // Bulky Support
    {
        .name = _("Amoonguss"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {244, 0, 188, 0, 0, 76},
        .ivs = {31, 31, 31, 27, 31, 31},
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_PROTECT}
    },

    [SPECIES_FRILLISH] = // TODO: Set
    {
        .name = _("Frillish"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_JELLICENT] = // Default Set
    {
        .name = _("Jellicent"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_SCALD, MOVE_SHADOW_BALL}
    },

    [SPECIES_ALOMOMOLA] = // Wish Passer
    {
        .name = _("Alomomola"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_FLIP_TURN, MOVE_SCALD}
    },

    [SPECIES_JOLTIK] = // TODO: Set
    {
        .name = _("Joltik"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GALVANTULA] = // Sticky Web
    {
        .name = _("Galvantula"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_COMPOUND_EYES,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_ENERGY_BALL, MOVE_THUNDER, MOVE_THUNDER_WAVE}
    },

    [SPECIES_FERROSEED] = // TODO: Set
    {
        .name = _("Ferroseed"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FERROTHORN] = // Specially Defensive
    {
        .name = _("Ferrothorn"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_IRON_BARBS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_POWER_WHIP, MOVE_SPIKES, MOVE_LEECH_SEED, MOVE_KNOCK_OFF}
    },

    [SPECIES_KLINK] = // TODO: Set
    {
        .name = _("Klink"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KLANG] = // TODO: Set
    {
        .name = _("Klang"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KLINKLANG] = // Default Set
    {
        .name = _("Klinklang"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GEAR_GRIND, MOVE_SHIFT_GEAR, MOVE_SUBSTITUTE, MOVE_WILD_CHARGE}
    },

    [SPECIES_TYNAMO] = // TODO: Set
    {
        .name = _("Tynamo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_EELEKTRIK] = // Defensive Pivot
    {
        .name = _("Eelektrik"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_U_TURN, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_EELEKTROSS] = // Defensive Pivot
    {
        .name = _("Eelektross"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_DISCHARGE, MOVE_DRAGON_TAIL}
    },

    [SPECIES_ELGYEM] = // TODO: Set
    {
        .name = _("Elgyem"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BEHEEYEM] = // Default Set
    {
        .name = _("Beheeyem"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ANALYTIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_TRICK}
    },

    [SPECIES_LITWICK] = // TODO: Set
    {
        .name = _("Litwick"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LAMPENT] = // Choice Item
    {
        .name = _("Lampent"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TRICK, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL}
    },

    [SPECIES_CHANDELURE] = // Choice Specs
    {
        .name = _("Chandelure"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TRICK}
    },

    [SPECIES_AXEW] = // Dragon Dance
    {
        .name = _("Axew"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 220, 116, 140, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_STOMPING_TANTRUM, MOVE_FIRST_IMPRESSION}
    },

    [SPECIES_FRAXURE] = // Setup Sweeper
    {
        .name = _("Fraxure"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_STOMPING_TANTRUM, MOVE_SUBSTITUTE}
    },

    [SPECIES_HAXORUS] = // Choice Band
    {
        .name = _("Haxorus"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POISON_JAB}
    },

    [SPECIES_CUBCHOO] = // TODO: Set
    {
        .name = _("Cubchoo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BEARTIC] = // Snow Sweeper
    {
        .name = _("Beartic"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_SLUSH_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_SPEAR, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE}
    },

    [SPECIES_CRYOGONAL] = // Hazard Remover
    {
        .name = _("Cryogonal"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_FREEZE_DRY, MOVE_RECOVER, MOVE_HAZE}
    },

    [SPECIES_SHELMET] = // TODO: Set
    {
        .name = _("Shelmet"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ACCELGOR] = // Default Set
    {
        .name = _("Accelgor"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_STICKY_HOLD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_STUNFISK] = // Default Set
    {
        .name = _("Stunfisk"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SAND_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_EARTH_POWER, MOVE_FOUL_PLAY, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_STUNFISK_GALAR] = // Default Set
    {
        .name = _("Stunfisk-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MIMICRY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_PAIN_SPLIT, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE}
    },

    [SPECIES_MIENFOO] = // Fast Pivot
    {
        .name = _("Mienfoo"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 196, 236, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT}
    },

    [SPECIES_MIENSHAO] = // Offensive Utility
    {
        .name = _("Mienshao"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ICE_SPINNER, MOVE_U_TURN}
    },

    [SPECIES_DRUDDIGON] = // Default Set
    {
        .name = _("Druddigon"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_GUNK_SHOT, MOVE_OUTRAGE}
    },

    [SPECIES_GOLETT] = // TODO: Set
    {
        .name = _("Golett"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOLURK] = // Wallbreaker
    {
        .name = _("Golurk"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_NO_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {132, 252, 0, 124, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE}
    },

    [SPECIES_PAWNIARD] = // Swords Dance
    {
        .name = _("Pawniard"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 36, 196, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_TERA_BLAST}
    },

    [SPECIES_BISHARP] = // Swords Dance
    {
        .name = _("Bisharp"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {80, 252, 0, 176, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_THROAT_CHOP}
    },

    [SPECIES_BOUFFALANT] = // Default Set
    {
        .name = _("Bouffalant"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_RECKLESS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_HEAD_CHARGE, MOVE_MEGAHORN}
    },

    [SPECIES_RUFFLET] = // Choice Band
    {
        .name = _("Rufflet"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_BRAVIARY] = // Physically Defensive (Normal)
    {
        .name = _("Braviary"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 240, 16, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_ROOST, MOVE_U_TURN}
    },

    [SPECIES_BRAVIARY_HISUI] = // Wallbreaker
    {
        .name = _("Braviary-Hisui"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ESPER_WING, MOVE_HURRICANE, MOVE_U_TURN, MOVE_VACUUM_WAVE}
    },

    [SPECIES_VULLABY] = // Physical Attacker
    {
        .name = _("Vullaby"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WEAK_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 76, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_ROOST, MOVE_U_TURN}
    },

    [SPECIES_MANDIBUZZ] = // Mixed Defensive
    {
        .name = _("Mandibuzz"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_OVERCOAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 136, 16, 0, 108},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOUL_PLAY, MOVE_DEFOG, MOVE_TOXIC, MOVE_ROOST}
    },

    [SPECIES_HEATMOR] = // Default Set
    {
        .name = _("Heatmor"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_LASH, MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SUBSTITUTE}
    },

    [SPECIES_DURANT] = // Default Set
    {
        .name = _("Durant"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_HONE_CLAWS, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE}
    },

    [SPECIES_DEINO] = // TODO: Set
    {
        .name = _("Deino"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ZWEILOUS] = // Wallbreaker
    {
        .name = _("Zweilous"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_STOMPING_TANTRUM, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_HYDREIGON] = // Nasty Plot
    {
        .name = _("Hydreigon"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE}
    },

    [SPECIES_LARVESTA] = // Defensive
    {
        .name = _("Larvesta"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {76, 0, 236, 36, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_MORNING_SUN}
    },

    [SPECIES_VOLCARONA] = // Life Orb
    {
        .name = _("Volcarona"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWARM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 32, 196, 12, 16},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_OVERHEAT, MOVE_SUBSTITUTE}
    },

    [SPECIES_COBALION] = // Utility
    {
        .name = _("Cobalion"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 0, 252, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_BODY_PRESS, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE}
    },

    [SPECIES_TERRAKION] = // Choice Band
    {
        .name = _("Terrakion"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK}
    },

    [SPECIES_VIRIZION] = // Swords Dance
    {
        .name = _("Virizion"),
        .item = ITEM_LUM_BERRY,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SYNTHESIS}
    },

    [SPECIES_TORNADUS_INCARNATE] = // Offensive Pivot
    {
        .name = _("Tornadus"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_HEAT_WAVE}
    },

    [SPECIES_TORNADUS_THERIAN] = // AV Pivot
    {
        .name = _("Tornadus-T"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_HEAT_WAVE, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_THUNDURUS_INCARNATE] = // Nasty Plot (Electric)
    {
        .name = _("Thundurus"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT, MOVE_THUNDER_WAVE}
    },

    [SPECIES_THUNDURUS_THERIAN] = // Fast Attacker
    {
        .name = _("Thundurus-T"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT, MOVE_PSYCHIC}
    },

    [SPECIES_RESHIRAM] = // Choice Specs
    {
        .name = _("Reshiram"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_TURBOBLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SHADOW_BALL}
    },

    [SPECIES_ZEKROM] = // Setup Sweeper
    {
        .name = _("Zekrom"),
        .item = ITEM_DRAGONIUM_Z,
        .ability = ABILITY_TERAVOLT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 204, 0, 52},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_BOLT_STRIKE, MOVE_OUTRAGE, MOVE_SUBSTITUTE}
    },

    [SPECIES_LANDORUS] = // Fast Attacker
    {
        .name = _("Landorus"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_PSYCHIC}
    },

    [SPECIES_LANDORUS_THERIAN] = // Bulky Support
    {
        .name = _("Landorus-T"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_TAUNT}
    },

    [SPECIES_KYUREM] = // Choice Specs
    {
        .name = _("Kyurem"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER}
    },

    [SPECIES_KYUREM_BLACK] = // Setup Sweeper
    {
        .name = _("Kyurem-Black"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_TERAVOLT,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_FUSION_BOLT, MOVE_ICICLE_SPEAR, MOVE_SCALE_SHOT}
    },

    [SPECIES_KYUREM_WHITE] = // Bulky Attacker
    {
        .name = _("Kyurem-White"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TURBOBLAZE,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FREEZE_DRY, MOVE_FUSION_FLARE, MOVE_ICE_BEAM}
    },

    [SPECIES_KELDEO] = // Bulky Setup
    {
        .name = _("Keldeo"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_SUBSTITUTE}
    },

    [SPECIES_MELOETTA] = // Wallbreaker
    {
        .name = _("Meloetta"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SERENE_GRACE,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_RELIC_SONG, MOVE_TRIPLE_AXEL}
    },

    [SPECIES_GENESECT] = // Default Set
    {
        .name = _("Genesect"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_DOWNLOAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLAZE_KICK, MOVE_EXTREME_SPEED, MOVE_IRON_HEAD, MOVE_LEECH_LIFE}
    },

    [SPECIES_CHESPIN] = // Spikes
    {
        .name = _("Chespin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BULLETPROOF,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {148, 108, 76, 0, 0, 156},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BULLET_SEED, MOVE_ROCK_SLIDE, MOVE_SYNTHESIS}
    },

    [SPECIES_QUILLADIN] = // Spikes
    {
        .name = _("Quilladin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BULLETPROOF,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_WOOD_HAMMER, MOVE_SUPER_FANG, MOVE_SYNTHESIS}
    },

    [SPECIES_CHESNAUGHT] = // Spikes Utility
    {
        .name = _("Chesnaught"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BULLETPROOF,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_BODY_PRESS, MOVE_SYNTHESIS, MOVE_WOOD_HAMMER}
    },

    [SPECIES_FENNEKIN] = // TODO: Set
    {
        .name = _("Fennekin"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BRAIXEN] = // Calm Mind
    {
        .name = _("Braixen"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SUBSTITUTE}
    },

    [SPECIES_DELPHOX] = // Nasty Plot
    {
        .name = _("Delphox"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_PSYSHOCK, MOVE_ENCORE}
    },

    [SPECIES_FROAKIE] = // TODO: Set
    {
        .name = _("Froakie"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FROGADIER] = // Spikes Pivot
    {
        .name = _("Frogadier"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PROTEAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_SURF, MOVE_ICE_BEAM, MOVE_U_TURN}
    },

    [SPECIES_GRENINJA] = // Choice Specs
    {
        .name = _("Greninja"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PROTEAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE}
    },

    [SPECIES_BUNNELBY] = // TODO: Set
    {
        .name = _("Bunnelby"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DIGGERSBY] = // Swords Dance (Normal)
    {
        .name = _("Diggersby"),
        .item = ITEM_FIRIUM_Z,
        .ability = ABILITY_HUGE_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_QUICK_ATTACK}
    },

    [SPECIES_FLETCHLING] = // TODO: Set
    {
        .name = _("Fletchling"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLETCHINDER] = // Utility
    {
        .name = _("Flechinder"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 196, 64, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_WILL_O_WISP, MOVE_FLAMETHROWER, MOVE_ROOST}
    },

    [SPECIES_TALONFLAME] = // Utility
    {
        .name = _("Talonflame"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_GALE_WINGS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {248, 8, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_WILL_O_WISP, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_SCATTERBUG] = // TODO: Set
    {
        .name = _("Scatterbug"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SPEWPA] = // TODO: Set
    {
        .name = _("Spewpa"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_VIVILLON] = // Fast Bulky Setup
    {
        .name = _("Vivillon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_COMPOUND_EYES,
        .teraType = TYPE_FLYING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER}
    },

    [SPECIES_LITLEO] = // TODO: Set
    {
        .name = _("Litleo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PYROAR] = // Special Attacker
    {
        .name = _("Pyroar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_TAUNT, MOVE_WILL_O_WISP}
    },

    [SPECIES_FLABEBE_RED] = // TODO: Set
    {
        .name = _("Flabebe"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLABEBE_YELLOW] = // TODO: Set
    {
        .name = _("Flabebe-Y"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLABEBE_ORANGE] = // TODO: Set
    {
        .name = _("Flabebe-O"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLABEBE_BLUE] = // TODO: Set
    {
        .name = _("Flabebe-B"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLABEBE_WHITE] = // TODO: Set
    {
        .name = _("Flabebe-W"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLOETTE_RED] = // TODO: Set
    {
        .name = _("Floette"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLOETTE_YELLOW] = // TODO: Set
    {
        .name = _("Floette-Y"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLOETTE_ORANGE] = // TODO: Set
    {
        .name = _("Floette-O"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLOETTE_BLUE] = // TODO: Set
    {
        .name = _("Floette-B"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLOETTE_WHITE] = // TODO: Set
    {
        .name = _("Floette-W"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLOETTE_ETERNAL] = // Fast Attacker
    {
        .name = _("Floette-Eterna"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLOWER_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIDDEN_POWER, MOVE_HIDDEN_POWER, MOVE_LIGHT_OF_RUIN, MOVE_MOONBLAST}
    },

    [SPECIES_FLORGES] = // Bulky Setup
    {
        .name = _("Florges"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLOWER_VEIL,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_WISH}
    },

    [SPECIES_FLORGES_YELLOW] = // TODO: Set
    {
        .name = _("Florges-Y"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLORGES_ORANGE] = // TODO: Set
    {
        .name = _("Florges-O"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLORGES_BLUE] = // TODO: Set
    {
        .name = _("Florges-B"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLORGES_WHITE] = // TODO: Set
    {
        .name = _("Florges-W"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SKIDDO] = // TODO: Set
    {
        .name = _("Skiddo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOGOAT] = // Bulky Setup
    {
        .name = _("Gogoat"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SAP_SIPPER,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_HORN_LEECH, MOVE_MILK_DRINK}
    },

    [SPECIES_PANCHAM] = // TODO: Set
    {
        .name = _("Pancham"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PANGORO] = // Default Set
    {
        .name = _("Pangoro"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF}
    },

    [SPECIES_FURFROU] = // Bulky Support
    {
        .name = _("Furfrou"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_FUR_COAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REST, MOVE_RETURN, MOVE_THUNDER_WAVE, MOVE_TOXIC}
    },

    [SPECIES_ESPURR] = // TODO: Set
    {
        .name = _("Espurr"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MEOWSTIC] = // Bulky Support
    {
        .name = _("Meowstic"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC_NOISE, MOVE_REFLECT}
    },

    [SPECIES_MEOWSTIC_F] = // Setup Sweeper
    {
        .name = _("Meowstic-F"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_COMPETITIVE,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_PSYCHIC}
    },

    [SPECIES_HONEDGE] = // TODO: Set
    {
        .name = _("Honedge"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DOUBLADE] = // Default Set
    {
        .name = _("Doublade"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_NO_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_AEGISLASH] = // Default Set
    {
        .name = _("Aegislash"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STANCE_CHANGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLASH_CANNON, MOVE_KINGS_SHIELD, MOVE_SHADOW_BALL}
    },

    [SPECIES_SPRITZEE] = // TODO: Set
    {
        .name = _("Spritzee"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AROMATISSE] = // Default Set
    {
        .name = _("Aromatisse"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AROMA_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_SWIRLIX] = // TODO: Set
    {
        .name = _("Swirlix"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SLURPUFF] = // Default Set
    {
        .name = _("Slurpuff"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_PLAY_ROUGH}
    },

    [SPECIES_INKAY] = // TODO: Set
    {
        .name = _("Inkay"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MALAMAR] = // Choice Scarf (Atk, Spe)
    {
        .name = _("Malamar"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_CONTRARY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_TRICK}
    },

    [SPECIES_BINACLE] = // TODO: Set
    {
        .name = _("Binacle"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BARBARACLE] = // Default Set
    {
        .name = _("Barbaracle"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_SHELL_SMASH}
    },

    [SPECIES_SKRELP] = // TODO: Set
    {
        .name = _("Skrelp"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DRAGALGE] = // Bulky Pivot
    {
        .name = _("Dragalge"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 200, 56, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_TOXIC_SPIKES, MOVE_FLIP_TURN}
    },

    [SPECIES_CLAUNCHER] = // TODO: Set
    {
        .name = _("Clauncher"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CLAWITZER] = // Choice Specs
    {
        .name = _("Clawitzer"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MEGA_LAUNCHER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    },

    [SPECIES_HELIOPTILE] = // TODO: Set
    {
        .name = _("Helioptile"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HELIOLISK] = // Default Set
    {
        .name = _("Heliolisk"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_DRY_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GLARE, MOVE_GRASS_KNOT, MOVE_HYPER_VOICE, MOVE_SURF}
    },

    [SPECIES_TYRUNT] = // TODO: Set
    {
        .name = _("Tyrunt"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TYRANTRUM] = // Default Set
    {
        .name = _("Tyrantrum"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ROCK_HEAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH}
    },

    [SPECIES_AMAURA] = // TODO: Set
    {
        .name = _("Amaura"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AURORUS] = // Default Set
    {
        .name = _("Aurorus"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SNOW_WARNING,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ANCIENT_POWER, MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_FREEZE_DRY}
    },

    [SPECIES_SYLVEON] = // Life Orb
    {
        .name = _("Sylveon"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_PIXILATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {104, 0, 224, 0, 180, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYPER_BEAM, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_FAKE_TEARS}
    },

    [SPECIES_HAWLUCHA] = // Unburden Sweeper
    {
        .name = _("Hawlucha"),
        .item = ITEM_PSYCHIC_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_ENCORE}
    },

    [SPECIES_DEDENNE] = // Fast Support
    {
        .name = _("Dedenne"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_CHEEK_POUCH,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_THUNDERBOLT}
    },

    [SPECIES_CARBINK] = // Fast Bulky Setup
    {
        .name = _("Carbink"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_MOONBLAST, MOVE_REST}
    },

    [SPECIES_GOOMY] = // TODO: Set
    {
        .name = _("Goomy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SLIGGOO] = // TODO: Set
    {
        .name = _("Sliggoo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SLIGGOO_HISUI] = // Choice Specs
    {
        .name = _("Sliggoo-H"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SHELL_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {160, 0, 0, 96, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },

    [SPECIES_GOODRA] = // Heavy-Duty Boots
    {
        .name = _("Goodra"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SAP_SIPPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_KNOCK_OFF}
    },

    [SPECIES_GOODRA_HISUI] = // AV Pivot
    {
        .name = _("Goodra-Hisui"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SAP_SIPPER,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST}
    },

    [SPECIES_KLEFKI] = // Spikes
    {
        .name = _("Klefki"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_THUNDER_WAVE, MOVE_PLAY_ROUGH, MOVE_FOUL_PLAY}
    },

    [SPECIES_PHANTUMP] = // TODO: Set
    {
        .name = _("Phantump"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TREVENANT] = // Bulky Support
    {
        .name = _("Trevenant"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HARVEST,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_POLTERGEIST, MOVE_PROTECT, MOVE_TOXIC}
    },

    [SPECIES_PUMPKABOO_AVERAGE] = // TODO: Set
    {
        .name = _("Pumpkaboo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PUMPKABOO_SMALL] = // TODO: Set
    {
        .name = _("Pumpkaboo-S"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PUMPKABOO_LARGE] = // TODO: Set
    {
        .name = _("Pumpkaboo-L"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PUMPKABOO_SUPER] = // TODO: Set
    {
        .name = _("Pumpkaboo-S-P"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOURGEIST] = // Default Set
    {
        .name = _("Gourgeist"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SHADOW_SNEAK, MOVE_SYNTHESIS}
    },

    [SPECIES_GOURGEIST_SMALL] = // Default Set
    {
        .name = _("Gourgeist-Smal"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SUBSTITUTE}
    },

    [SPECIES_GOURGEIST_LARGE] = // Default Set
    {
        .name = _("Gourgeist-Larg"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SHADOW_SNEAK, MOVE_SYNTHESIS}
    },

    [SPECIES_GOURGEIST_SUPER] = // Default Set
    {
        .name = _("Gourgeist-Supe"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_ROCK_SLIDE, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_BERGMITE] = // TODO: Set
    {
        .name = _("Bergmite"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_AVALUGG] = // Rapid Spin
    {
        .name = _("Avalugg"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_RAPID_SPIN, MOVE_RECOVER}
    },

    [SPECIES_AVALUGG_HISUI] = // Bulky Attacker
    {
        .name = _("Avalugg-Hisui"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_RAPID_SPIN, MOVE_RECOVER}
    },

    [SPECIES_NOIBAT] = // TODO: Set
    {
        .name = _("Noibat"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NOIVERN] = // Offensive Pivot
    {
        .name = _("Noivern"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INFILTRATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_ROOST}
    },

    [SPECIES_XERNEAS_NEUTRAL] = // Geomancy
    {
        .name = _("Xerneas"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_FAIRY_AURA,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 168, 88, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_THUNDER, MOVE_SUBSTITUTE}
    },

    [SPECIES_YVELTAL] = // Specially Offensive
    {
        .name = _("Yveltal"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DARK_AURA,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {0, 4, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_TAUNT, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_ZYGARDE] = // Default Set
    {
        .name = _("Zygarde"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_POWER_CONSTRUCT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_SUBSTITUTE, MOVE_THOUSAND_ARROWS}
    },

    [SPECIES_DIANCIE] = // Stealth Rock
    {
        .name = _("Diancie"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_ENCORE, MOVE_DIAMOND_STORM, MOVE_BODY_PRESS}
    },

    [SPECIES_HOOPA_CONFINED] = // Choice Scarf
    {
        .name = _("Hoopa"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MAGICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK}
    },

    [SPECIES_HOOPA_UNBOUND] = // Wallbreaker
    {
        .name = _("Hoopa-Unbound"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_MAGICIAN,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_HYPERSPACE_FURY, MOVE_TRICK}
    },

    [SPECIES_VOLCANION] = // Offensive
    {
        .name = _("Volcanion"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_TAUNT}
    },

    [SPECIES_ROWLET] = // TODO: Set
    {
        .name = _("Rowlet"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DARTRIX] = // Physically Defensive
    {
        .name = _("Dartrix"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LONG_REACH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_ROOST, MOVE_DEFOG, MOVE_KNOCK_OFF}
    },

    [SPECIES_DECIDUEYE] = // Swords Dance
    {
        .name = _("Decidueye"),
        .item = ITEM_SPELL_TAG,
        .ability = ABILITY_LONG_REACH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_DECIDUEYE_HISUI] = // Bulky Attacker
    {
        .name = _("Decidueye-Hisu"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_STEEL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_ROOST}
    },

    [SPECIES_LITTEN] = // TODO: Set
    {
        .name = _("Litten"),
        .item = ITEM_BERRY_JUICE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 156, 116, 196, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_FAKE_OUT}
    },

    [SPECIES_TORRACAT] = // Bulky Pivot
    {
        .name = _("Torracat"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_TAUNT, MOVE_OVERHEAT, MOVE_WILL_O_WISP}
    },

    [SPECIES_INCINEROAR] = // Bulky Support
    {
        .name = _("Incineroar"),
        .item = ITEM_SAFETY_GOGGLES,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 156, 0, 0, 100},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT}
    },

    [SPECIES_POPPLIO] = // TODO: Set
    {
        .name = _("Popplio"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BRIONNE] = // TODO: Set
    {
        .name = _("Brionne"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PRIMARINA] = // Assault Vest
    {
        .name = _("Primarina"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {80, 0, 0, 176, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_MOONBLAST, MOVE_FLIP_TURN, MOVE_PSYCHIC_NOISE}
    },

    [SPECIES_PIKIPEK] = // TODO: Set
    {
        .name = _("Pikipek"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TRUMBEAK] = // TODO: Set
    {
        .name = _("Trumbeak"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TOUCANNON] = // Bulky Support
    {
        .name = _("Toucannon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_KEEN_EYE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BEAK_BLAST, MOVE_BOOMBURST, MOVE_BULLET_SEED, MOVE_KNOCK_OFF}
    },

    [SPECIES_YUNGOOS] = // TODO: Set
    {
        .name = _("Yungoos"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GUMSHOOS] = // Fast Attacker
    {
        .name = _("Gumshoos"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_GRUBBIN] = // TODO: Set
    {
        .name = _("Grubbin"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CHARJABUG] = // Sticky Web
    {
        .name = _("Charjabug"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BATTERY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 4, 252, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_SKITTER_SMACK, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE}
    },

    [SPECIES_VIKAVOLT] = // Sticky Web Setter
    {
        .name = _("Vikavolt"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL}
    },

    [SPECIES_CRABRAWLER] = // TODO: Set
    {
        .name = _("Crabrawler"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CRABOMINABLE] = // Choice Band
    {
        .name = _("Crabominable"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_IRON_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 252, 0, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_HAMMER, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    },

    [SPECIES_ORICORIO] = // Setup Sweeper
    {
        .name = _("Oricorio"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DANCER,
        .teraType = TYPE_GROUND,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_ROOST}
    },

    [SPECIES_ORICORIO_POM_POM] = // Setup Sweeper
    {
        .name = _("Oricorio-Pom"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DANCER,
        .teraType = TYPE_GROUND,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_ROOST}
    },

    [SPECIES_ORICORIO_PAU] = // TODO: Set
    {
        .name = _("Oricorio-P"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DANCER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST}
    },

    [SPECIES_ORICORIO_SENSU] = // Setup Sweeper
    {
        .name = _("Oricorio-Sensu"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DANCER,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_ROOST}
    },

    [SPECIES_CUTIEFLY] = // Sticky Web Lead
    {
        .name = _("Cutiefly"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHIELD_DUST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_STUN_SPORE, MOVE_U_TURN, MOVE_MOONBLAST}
    },

    [SPECIES_RIBOMBEE] = // Offensive
    {
        .name = _("Ribombee"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SHIELD_DUST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_U_TURN, MOVE_PSYCHIC_NOISE}
    },

    [SPECIES_ROCKRUFF] = // TODO: Set
    {
        .name = _("Rockruff"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LYCANROC_MIDDAY] = // Swords Dance
    {
        .name = _("Lycanroc"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SAND_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK}
    },

    [SPECIES_LYCANROC_MIDNIGHT] = // Fast Attacker
    {
        .name = _("Lycanroc-Midni"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_NO_GUARD,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_STEALTH_ROCK}
    },

    [SPECIES_LYCANROC_DUSK] = // Wallbreaker
    {
        .name = _("Lycanroc-Dusk"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_STONE_EDGE}
    },

    [SPECIES_WISHIWASHI] = // Default Set
    {
        .name = _("Wishiwashi"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SCHOOLING,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SCALD}
    },

    [SPECIES_MAREANIE] = // Physically Defensive
    {
        .name = _("Mareanie"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {116, 0, 180, 0, 12, 180},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_RECOVER, MOVE_IRON_DEFENSE}
    },

    [SPECIES_TOXAPEX] = // Mixed Wall
    {
        .name = _("Toxapex"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 152, 0, 0, 108},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_HAZE, MOVE_RECOVER}
    },

    [SPECIES_MUDBRAY] = // Offensive Stealth Rock
    {
        .name = _("Mudbray"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STAMINA,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {36, 196, 196, 76, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_MUDSDALE] = // Physical Wall
    {
        .name = _("Mudsdale"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STAMINA,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_ROAR}
    },

    [SPECIES_DEWPIDER] = // TODO: Set
    {
        .name = _("Dewpider"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARAQUANID] = // Sticky Web
    {
        .name = _("Araquanid"),
        .item = ITEM_MENTAL_HERB,
        .ability = ABILITY_WATER_BUBBLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STICKY_WEB, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_INFESTATION}
    },

    [SPECIES_FOMANTIS] = // TODO: Set
    {
        .name = _("Fomantis"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_LURANTIS] = // Defog
    {
        .name = _("Lurantis"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CONTRARY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_SYNTHESIS, MOVE_DEFOG}
    },

    [SPECIES_MORELULL] = // TODO: Set
    {
        .name = _("Morelull"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SHIINOTIC] = // Default Set
    {
        .name = _("Shiinotic"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EFFECT_SPORE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_MOONBLAST, MOVE_SPORE}
    },

    [SPECIES_SALANDIT] = // TODO: Set
    {
        .name = _("Salandit"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SALAZZLE] = // Substitute + Toxic
    {
        .name = _("Salazzle"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_CORROSION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB, MOVE_TOXIC}
    },

    [SPECIES_STUFFUL] = // TODO: Set
    {
        .name = _("Stufful"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BEWEAR] = // Default Set
    {
        .name = _("Bewear"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_FLUFFY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DARKEST_LARIAT, MOVE_DOUBLE_EDGE, MOVE_ICE_PUNCH}
    },

    [SPECIES_BOUNSWEET] = // TODO: Set
    {
        .name = _("Bounsweet"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_STEENEE] = // TODO: Set
    {
        .name = _("Steenee"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TSAREENA] = // Fast Support
    {
        .name = _("Tsareena"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_QUEENLY_MAJESTY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POWER_WHIP, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },

    [SPECIES_COMFEY] = // Calm Mind
    {
        .name = _("Comfey"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TRIAGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {240, 0, 0, 16, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_TERA_BLAST, MOVE_TAUNT}
    },

    [SPECIES_ORANGURU] = // Bulky Attacker
    {
        .name = _("Oranguru"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_PSYCHIC, MOVE_PSYSHOCK}
    },

    [SPECIES_PASSIMIAN] = // Choice Scarf
    {
        .name = _("Passimian"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_EARTHQUAKE}
    },

    [SPECIES_WIMPOD] = // TODO: Set
    {
        .name = _("Wimpod"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GOLISOPOD] = // Default Set
    {
        .name = _("Golisopod"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_EMERGENCY_EXIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE, MOVE_LIQUIDATION}
    },

    [SPECIES_SANDYGAST] = // Defensive
    {
        .name = _("Sandygast"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WATER_COMPACTION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {156, 0, 36, 0, 196, 76},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHORE_UP, MOVE_STEALTH_ROCK, MOVE_SHADOW_BALL, MOVE_EARTH_POWER}
    },

    [SPECIES_PALOSSAND] = // Defensive
    {
        .name = _("Palossand"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_COMPACTION,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_SCORCHING_SANDS, MOVE_SHADOW_BALL, MOVE_SHORE_UP}
    },

    [SPECIES_PYUKUMUKU] = // Default Set
    {
        .name = _("Pyukumuku"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_RECOVER, MOVE_TOXIC}
    },

    [SPECIES_TYPE_NULL] = // Default Set
    {
        .name = _("Type-Null"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_BATTLE_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUSH_CLAW, MOVE_PAYBACK, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_SILVALLY] = // Default Set
    {
        .name = _("Silvally"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_EXPLOSION, MOVE_FLAME_CHARGE, MOVE_FLAMETHROWER}
    },

    [SPECIES_MINIOR] = // Setup Sweeper
    {
        .name = _("Minior"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_POWER_GEM, MOVE_SHELL_SMASH}
    },

    [SPECIES_MINIOR_METEOR_ORANGE] = // TODO: Set
    {
        .name = _("Minior-O"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MINIOR_METEOR_YELLOW] = // TODO: Set
    {
        .name = _("Minior-Y"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MINIOR_METEOR_GREEN] = // TODO: Set
    {
        .name = _("Minior-G"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MINIOR_METEOR_BLUE] = // TODO: Set
    {
        .name = _("Minior-B"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MINIOR_METEOR_INDIGO] = // TODO: Set
    {
        .name = _("Minior-I"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MINIOR_METEOR_VIOLET] = // TODO: Set
    {
        .name = _("Minior-V"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KOMALA] = // Bulky Support
    {
        .name = _("Komala"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_COMATOSE,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_TURTONATOR] = // Default Set
    {
        .name = _("Turtonator"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SHELL_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST}
    },

    [SPECIES_TOGEDEMARU] = // Default Set
    {
        .name = _("Togedemaru"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_IRON_BARBS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_HEAD, MOVE_NUZZLE, MOVE_SPIKY_SHIELD, MOVE_U_TURN}
    },

    [SPECIES_MIMIKYU] = // Fast Bulky Setup
    {
        .name = _("Mimikyu"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DISGUISE,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}
    },

    [SPECIES_BRUXISH] = // Choice Scarf
    {
        .name = _("Bruxish"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STRONG_JAW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_FLIP_TURN, MOVE_CRUNCH}
    },

    [SPECIES_DRAMPA] = // Default Set
    {
        .name = _("Drampa"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_BERSERK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_GLARE, MOVE_HYPER_VOICE}
    },

    [SPECIES_DHELMISE] = // Rapid Spin
    {
        .name = _("Dhelmise"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STEELWORKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {248, 80, 0, 60, 0, 120},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_SYNTHESIS}
    },

    [SPECIES_JANGMO_O] = // TODO: Set
    {
        .name = _("Jangmo-o"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HAKAMO_O] = // Double Dance
    {
        .name = _("Hakamo-o"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_SOUNDPROOF,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_SCALE_SHOT, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE}
    },

    [SPECIES_KOMMO_O] = // Clangorous Soul
    {
        .name = _("Kommo-o"),
        .item = ITEM_THROAT_SPRAY,
        .ability = ABILITY_SOUNDPROOF,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLANGOROUS_SOUL, MOVE_BOOMBURST, MOVE_FLAMETHROWER, MOVE_CLANGING_SCALES}
    },

    [SPECIES_TAPU_KOKO] = // Choice Specs (Electric)
    {
        .name = _("Tapu-Koko"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ELECTRIC_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}
    },

    [SPECIES_TAPU_LELE] = // Choice Scarf
    {
        .name = _("Tapu-Lele"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PSYCHIC_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FUTURE_SIGHT, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_FOCUS_BLAST}
    },

    [SPECIES_TAPU_BULU] = // Swords Dance
    {
        .name = _("Tapu-Bulu"),
        .item = ITEM_ROCKIUM_Z,
        .ability = ABILITY_GRASSY_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {252, 96, 0, 144, 0, 16},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_HORN_LEECH, MOVE_STONE_EDGE, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_TAPU_FINI] = // Choice Scarf
    {
        .name = _("Tapu-Fini"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MISTY_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {188, 0, 0, 204, 116, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_TRICK, MOVE_CALM_MIND}
    },

    [SPECIES_COSMOG] = // TODO: Set
    {
        .name = _("Cosmog"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_COSMOEM] = // TODO: Set
    {
        .name = _("Cosmoem"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SOLGALEO] = // Specially Defensive
    {
        .name = _("Solgaleo"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FULL_METAL_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_ROAR, MOVE_TELEPORT, MOVE_MORNING_SUN}
    },

    [SPECIES_LUNALA] = // Expanding Force Sweeper
    {
        .name = _("Lunala"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_SHADOW_SHIELD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {116, 0, 108, 4, 252, 28},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_METEOR_BEAM, MOVE_EXPANDING_FORCE, MOVE_TRICK_ROOM}
    },

    [SPECIES_NIHILEGO] = // Choice Scarf (Poison)
    {
        .name = _("Nihilego"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_POWER_GEM, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER}
    },

    [SPECIES_BUZZWOLE] = // Defensive
    {
        .name = _("Buzzwole"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {244, 16, 224, 24, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_ROOST}
    },

    [SPECIES_PHEROMOSA] = // Offensive Pivot
    {
        .name = _("Pheromosa"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_U_TURN, MOVE_RAPID_SPIN}
    },

    [SPECIES_XURKITREE] = // Default Set
    {
        .name = _("Xurkitree"),
        .item = ITEM_BLUNDER_POLICY,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_HYPNOSIS, MOVE_THUNDERBOLT}
    },

    [SPECIES_CELESTEELA] = // Defensive
    {
        .name = _("Celesteela"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LEECH_SEED, MOVE_HEAVY_SLAM, MOVE_PROTECT, MOVE_FLAMETHROWER}
    },

    [SPECIES_KARTANA] = // Paper Cut
    {
        .name = _("Kartana"),
        .item = ITEM_NORMALIUM_Z,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_GIGA_IMPACT}
    },

    [SPECIES_GUZZLORD] = // Default Set
    {
        .name = _("Guzzlord"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_KNOCK_OFF}
    },

    [SPECIES_NECROZMA] = // Psychic Terrain Sweeper
    {
        .name = _("Necrozma"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_PRISM_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HEAT_WAVE, MOVE_METEOR_BEAM, MOVE_TRICK_ROOM}
    },

    [SPECIES_NECROZMA_DUSK_MANE] = // Bulky Setup
    {
        .name = _("Necrozma-Mane"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_PRISM_ARMOR,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_MORNING_SUN, MOVE_PHOTON_GEYSER}
    },

    [SPECIES_NECROZMA_DAWN_WINGS] = // Bulky Setup
    {
        .name = _("Necrozma-Wings"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRISM_ARMOR,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MOONGEIST_BEAM, MOVE_MOONLIGHT, MOVE_PHOTON_GEYSER}
    },

    [SPECIES_MAGEARNA] = // Physically Defensive
    {
        .name = _("Magearna"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_SOUL_HEART,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLEUR_CANNON, MOVE_SPIKES, MOVE_ENCORE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAGEARNA_ORIGINAL] = // TODO: Set
    {
        .name = _("Magearna-O"),
        .item = ITEM_NONE,
        .ability = ABILITY_SOUL_HEART,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MARSHADOW] = // All-Out Attacker
    {
        .name = _("Marshadow"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_POLTERGEIST, MOVE_LOW_KICK, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_POIPOLE] = // TODO: Set
    {
        .name = _("Poipole"),
        .item = ITEM_NONE,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NAGANADEL] = // Default Set
    {
        .name = _("Naganadel"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}
    },

    [SPECIES_STAKATAKA] = // Default Set
    {
        .name = _("Stakataka"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_GYRO_BALL, MOVE_STEALTH_ROCK}
    },

    [SPECIES_BLACEPHALON] = // Choice Scarf
    {
        .name = _("Blacephalon"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BEAST_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_HIDDEN_POWER, MOVE_TRICK}
    },

    [SPECIES_ZERAORA] = // Offensive Pivot
    {
        .name = _("Zeraora"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLASMA_FISTS, MOVE_KNOCK_OFF, MOVE_VOLT_SWITCH, MOVE_TOXIC}
    },

    [SPECIES_MELTAN] = // TODO: Set
    {
        .name = _("Meltan"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MELMETAL] = // Choice Band
    {
        .name = _("Melmetal"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_IRON_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BRAVE,
        .evs = {56, 248, 16, 0, 0, 188},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SUPERPOWER}
    },

    [SPECIES_GROOKEY] = // Pivot
    {
        .name = _("Grookey"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_GRASSY_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {36, 76, 36, 236, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_THWACKEY] = // Terrain Setter
    {
        .name = _("Thwackey"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_GRASSY_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_U_TURN, MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_TAUNT}
    },

    [SPECIES_RILLABOOM] = // Choice Band
    {
        .name = _("Rillaboom"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GRASSY_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_U_TURN, MOVE_KNOCK_OFF}
    },

    [SPECIES_SCORBUNNY] = // TODO: Set
    {
        .name = _("Scorbunny"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RABOOT] = // Offensive Pivot
    {
        .name = _("Raboot"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LIBERO,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_CINDERACE] = // Pivot
    {
        .name = _("Cinderace"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LIBERO,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {224, 32, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PYRO_BALL, MOVE_U_TURN, MOVE_COURT_CHANGE, MOVE_WILL_O_WISP}
    },

    [SPECIES_SOBBLE] = // TODO: Set
    {
        .name = _("Sobble"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DRIZZILE] = // TODO: Set
    {
        .name = _("Drizzile"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_INTELEON] = // Choice Specs
    {
        .name = _("Inteleon"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SNIPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_U_TURN}
    },

    [SPECIES_SKWOVET] = // TODO: Set
    {
        .name = _("Skwovet"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GREEDENT] = // Bulky Setup
    {
        .name = _("Greedent"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_CHEEK_POUCH,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    },

    [SPECIES_ROOKIDEE] = // TODO: Set
    {
        .name = _("Rookidee"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CORVISQUIRE] = // TODO: Set
    {
        .name = _("Corvisquire"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CORVIKNIGHT] = // Physically Defensive
    {
        .name = _("Corviknight"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MIRROR_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_U_TURN, MOVE_ROOST, MOVE_DEFOG}
    },

    [SPECIES_BLIPBUG] = // TODO: Set
    {
        .name = _("Blipbug"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DOTTLER] = // TODO: Set
    {
        .name = _("Dottler"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ORBEETLE] = // Default Set
    {
        .name = _("Orbeetle"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_BUG_BUZZ, MOVE_CALM_MIND, MOVE_PSYCHIC}
    },

    [SPECIES_NICKIT] = // TODO: Set
    {
        .name = _("Nickit"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_THIEVUL] = // Default Set
    {
        .name = _("Thievul"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_STAKEOUT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_FOUL_PLAY, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT}
    },

    [SPECIES_GOSSIFLEUR] = // TODO: Set
    {
        .name = _("Gossifleur"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ELDEGOSS] = // Default Set
    {
        .name = _("Eldegoss"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_POLLEN_PUFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_WOOLOO] = // TODO: Set
    {
        .name = _("Wooloo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DUBWOOL] = // Default Set
    {
        .name = _("Dubwool"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_BULLETPROOF,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_COTTON_GUARD, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_CHEWTLE] = // Shell Smash
    {
        .name = _("Chewtle"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STRONG_JAW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 244, 0, 244, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG}
    },

    [SPECIES_DREDNAW] = // Shell Smash
    {
        .name = _("Drednaw"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_STRONG_JAW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_CRUNCH}
    },

    [SPECIES_YAMPER] = // TODO: Set
    {
        .name = _("Yamper"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BOLTUND] = // Default Set
    {
        .name = _("Boltund"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STRONG_JAW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_PLAY_ROUGH}
    },

    [SPECIES_ROLYCOLY] = // TODO: Set
    {
        .name = _("Rolycoly"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CARKOL] = // Physically Defensive
    {
        .name = _("Carkol"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_POWER_GEM, MOVE_WILL_O_WISP}
    },

    [SPECIES_COALOSSAL] = // Defensive
    {
        .name = _("Coalossal"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_FLAMETHROWER, MOVE_EARTH_POWER}
    },

    [SPECIES_APPLIN] = // TODO: Set
    {
        .name = _("Applin"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLAPPLE] = // Fast Attacker
    {
        .name = _("Flapple"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_GRAV_APPLE, MOVE_OUTRAGE, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_APPLETUN] = // Special Wall
    {
        .name = _("Appletun"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_APPLE_ACID, MOVE_DRAGON_PULSE, MOVE_DRAGON_TAIL, MOVE_RECOVER}
    },

    [SPECIES_SILICOBRA] = // TODO: Set
    {
        .name = _("Silicobra"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SANDACONDA] = // Stealth Rock
    {
        .name = _("Sandaconda"),
        .item = ITEM_ROCKY_HELMET,
        .ability = ABILITY_SHED_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_REST}
    },

    [SPECIES_CRAMORANT] = // Defog
    {
        .name = _("Cramorant"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_GULP_MISSILE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 188, 16, 0, 56},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_SURF, MOVE_BRAVE_BIRD}
    },

    [SPECIES_ARROKUDA] = // TODO: Set
    {
        .name = _("Arrokuda"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BARRASKEWDA] = // Offensive Pivot
    {
        .name = _("Barraskewda"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_LIQUIDATION, MOVE_FLIP_TURN, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET}
    },

    [SPECIES_TOXEL] = // TODO: Set
    {
        .name = _("Toxel"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TOXTRICITY] = // Fast Attacker
    {
        .name = _("Toxtricity"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PUNK_ROCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_TOXTRICITY_LOW_KEY] = // Default Set
    {
        .name = _("Toxtricity-Key"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PUNK_ROCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH}
    },

    [SPECIES_SIZZLIPEDE] = // TODO: Set
    {
        .name = _("Sizzlipede"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CENTISKORCH] = // Default Set
    {
        .name = _("Centiskorch"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_FIRE_LASH, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE}
    },

    [SPECIES_CLOBBOPUS] = // TODO: Set
    {
        .name = _("Clobbopus"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GRAPPLOCT] = // Default Set
    {
        .name = _("Grapploct"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_LIMBER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRUTAL_SWING, MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_SINISTEA_PHONY] = // TODO: Set
    {
        .name = _("Sinistea"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_POLTEAGEIST] = // Setup Sweeper
    {
        .name = _("Polteageist"),
        .item = ITEM_WHITE_HERB,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_PSYCHIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_SHELL_SMASH, MOVE_STORED_POWER}
    },

    [SPECIES_HATENNA] = // TODO: Set
    {
        .name = _("Hatenna"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HATTREM] = // Physically Defensive
    {
        .name = _("Hattrem"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MAGIC_BOUNCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEALING_WISH, MOVE_PSYCHIC, MOVE_NUZZLE, MOVE_MYSTICAL_FIRE}
    },

    [SPECIES_HATTERENE] = // Calm Mind (Fairy)
    {
        .name = _("Hatterene"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 204, 52, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE}
    },

    [SPECIES_IMPIDIMP] = // Dual Screens
    {
        .name = _("Impidimp"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {156, 0, 196, 36, 0, 116},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PARTING_SHOT, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_MORGREM] = // Dual Screens
    {
        .name = _("Morgrem"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PARTING_SHOT, MOVE_TAUNT}
    },

    [SPECIES_GRIMMSNARL] = // Bulky Pivot
    {
        .name = _("Grimmsnarl"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_OBSTAGOON] = // Default Set
    {
        .name = _("Obstagoon"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_KNOCK_OFF}
    },

    [SPECIES_PERRSERKER] = // Hazard Setter
    {
        .name = _("Perrserker"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TOUGH_CLAWS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {248, 252, 0, 0, 0, 8},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_U_TURN}
    },

    [SPECIES_CURSOLA] = // Default Set
    {
        .name = _("Cursola"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_WEAK_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },

    [SPECIES_SIRFETCHD] = // Default Set
    {
        .name = _("Sirfetchd"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF}
    },

    [SPECIES_MR_RIME] = // Default Set
    {
        .name = _("Mr-Rime"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SCREEN_CLEANER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_RAPID_SPIN}
    },

    [SPECIES_RUNERIGUS] = // Default Set
    {
        .name = _("Runerigus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_WANDERING_SPIRIT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_HAZE, MOVE_POLTERGEIST, MOVE_STEALTH_ROCK}
    },

    [SPECIES_MILCERY] = // TODO: Set
    {
        .name = _("Milcery"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ALCREMIE] = // Bulky Setup
    {
        .name = _("Alcremie"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AROMA_VEIL,
        .teraType = TYPE_POISON,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ALLURING_VOICE, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_PSYSHOCK}
    },

    [SPECIES_FALINKS] = // Setup Sweeper
    {
        .name = _("Falinks"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_NO_RETREAT}
    },

    [SPECIES_PINCURCHIN] = // Terrain Setter
    {
        .name = _("Pincurchin"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_ELECTRIC_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_SCALD, MOVE_SPIKES, MOVE_RECOVER}
    },

    [SPECIES_SNOM] = // TODO: Set
    {
        .name = _("Snom"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FROSMOTH] = // Defog
    {
        .name = _("Frosmoth"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_ICE_SCALES,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {248, 0, 0, 0, 20, 240},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_STUN_SPORE}
    },

    [SPECIES_STONJOURNER] = // Fast Attacker
    {
        .name = _("Stonjourner"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_POWER_SPOT,
        .teraType = TYPE_FIRE,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_ROCK_POLISH, MOVE_STEALTH_ROCK}
    },

    [SPECIES_EISCUE] = // Setup Sweeper
    {
        .name = _("Eiscue"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_ICE_FACE,
        .teraType = TYPE_WATER,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_ICE_SPINNER, MOVE_IRON_HEAD, MOVE_LIQUIDATION}
    },

    [SPECIES_INDEEDEE] = // Fast Attacker
    {
        .name = _("Indeedee"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PSYCHIC_SURGE,
        .teraType = TYPE_PSYCHIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_EXPANDING_FORCE, MOVE_HEALING_WISH}
    },

    [SPECIES_INDEEDEE_F] = // Terrain Setter
    {
        .name = _("Indeedee-F"),
        .item = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_PSYCHIC_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HEALING_WISH}
    },

    [SPECIES_MORPEKO] = // Bulky Attacker
    {
        .name = _("Morpeko"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HUNGER_SWITCH,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURA_WHEEL, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_RAPID_SPIN}
    },

    [SPECIES_CUFANT] = // TODO: Set
    {
        .name = _("Cufant"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_COPPERAJAH] = // Assault Vest
    {
        .name = _("Copperajah"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_HEAVY_METAL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 192, 0, 124, 0, 192},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    },

    [SPECIES_DRACOZOLT] = // Default Set
    {
        .name = _("Dracozolt"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AERIAL_ACE, MOVE_BOLT_BEAK, MOVE_EARTHQUAKE, MOVE_LOW_KICK}
    },

    [SPECIES_ARCTOZOLT] = // Slush Rush (Ice)
    {
        .name = _("Arctozolt"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SLUSH_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAUGHTY,
        .evs = {0, 252, 0, 252, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOLT_BEAK, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_SUBSTITUTE}
    },

    [SPECIES_DRACOVISH] = // Default Set
    {
        .name = _("Dracovish"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SAND_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_FISHIOUS_REND, MOVE_ICE_FANG, MOVE_LOW_KICK}
    },

    [SPECIES_ARCTOVISH] = // Default Set
    {
        .name = _("Arctovish"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SLUSH_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_FISHIOUS_REND, MOVE_FREEZE_DRY, MOVE_ICICLE_CRASH}
    },

    [SPECIES_DURALUDON] = // Eviolite
    {
        .name = _("Duraludon"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_LIGHT_METAL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK}
    },

    [SPECIES_DREEPY] = // TODO: Set
    {
        .name = _("Dreepy"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DRAKLOAK] = // RestTalk
    {
        .name = _("Drakloak"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 64, 192, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_DRAGON_TAIL, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_DRAGAPULT] = // Boots Pivot
    {
        .name = _("Dragapult"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INFILTRATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {0, 60, 0, 252, 196, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DARTS, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_U_TURN}
    },

    [SPECIES_ZACIAN] = // Fast Attacker
    {
        .name = _("Zacian"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTREPID_SWORD,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_ZAMAZENTA] = // Bulky Attacker
    {
        .name = _("Zamazenta"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_DAUNTLESS_SHIELD,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_ETERNATUS] = // Cosmic Power
    {
        .name = _("Eternatus"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 236, 20, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_DYNAMAX_CANNON, MOVE_FLAMETHROWER}
    },

    [SPECIES_KUBFU] = // TODO: Set
    {
        .name = _("Kubfu"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_URSHIFU] = // Fast Attacker
    {
        .name = _("Urshifu"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_UNSEEN_FIST,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_URSHIFU_RAPID_STRIKE] = // Fast Attacker
    {
        .name = _("Urshifu-R-S"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_UNSEEN_FIST,
        .teraType = TYPE_WATER,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_SURGING_STRIKES}
    },

    [SPECIES_ZARUDE] = // Swords Dance
    {
        .name = _("Zarude"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEAF_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING}
    },

    [SPECIES_ZARUDE_DADA] = // Swords Dance
    {
        .name = _("Zarude-D"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_LEAF_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING}
    },

    [SPECIES_REGIELEKI] = // Dual Screens
    {
        .name = _("Regieleki"),
        .item = ITEM_LIGHT_CLAY,
        .ability = ABILITY_TRANSISTOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_VOLT_SWITCH, MOVE_RAPID_SPIN}
    },

    [SPECIES_REGIDRAGO] = // Choice Scarf
    {
        .name = _("Regidrago"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DRAGONS_MAW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_TERA_BLAST}
    },

    [SPECIES_GLASTRIER] = // Swords Dance
    {
        .name = _("Glastrier"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CHILLING_NEIGH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {128, 252, 0, 124, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_SPECTRIER] = // Choice Scarf
    {
        .name = _("Spectrier"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_GRIM_NEIGH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {112, 0, 0, 144, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_FOUL_PLAY, MOVE_CURSE}
    },

    [SPECIES_CALYREX] = // Double Dance
    {
        .name = _("Calyrex"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {248, 0, 84, 176, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_AGILITY, MOVE_STORED_POWER, MOVE_GIGA_DRAIN}
    },

    [SPECIES_CALYREX_ICE] = // Bulky Setup
    {
        .name = _("Calyrex-Ice"),
        .item = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_AS_ONE_ICE_RIDER,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_CLOSE_COMBAT, MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_CALYREX_SHADOW] = // Fast Attacker
    {
        .name = _("Calyrex-Shadow"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_AS_ONE_SHADOW_RIDER,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_NASTY_PLOT, MOVE_POLLEN_PUFF, MOVE_PSYSHOCK}
    },

    [SPECIES_WYRDEER] = // Bulky Attacker
    {
        .name = _("Wyrdeer"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_PSYCHIC_NOISE}
    },

    [SPECIES_KLEAVOR] = // Lead
    {
        .name = _("Kleavor"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHARPNESS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_URSALUNA] = // Swords Dance
    {
        .name = _("Ursaluna"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_FIRE_PUNCH}
    },

    [SPECIES_URSALUNA_BLOODMOON] = // Bulky Attacker
    {
        .name = _("Ursaluna-Blood"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_MINDS_EYE,
        .teraType = TYPE_GHOST,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLOOD_MOON, MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_MOONLIGHT}
    },

    [SPECIES_BASCULEGION] = // AV Pivot
    {
        .name = _("Basculegion"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_WATER,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SHADOW_BALL, MOVE_WAVE_CRASH}
    },

    [SPECIES_BASCULEGION_F] = // Choice Scarf
    {
        .name = _("Basculegion-F"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ADAPTABILITY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHADOW_BALL, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLIP_TURN}
    },

    [SPECIES_SNEASLER] = // Choice Band (Poison)
    {
        .name = _("Sneasler"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_POISON_TOUCH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_THROAT_CHOP, MOVE_U_TURN}
    },

    [SPECIES_OVERQWIL] = // Rain Sweeper
    {
        .name = _("Overqwil"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_CRUNCH, MOVE_LIQUIDATION}
    },

    [SPECIES_ENAMORUS] = // Setup Sweeper
    {
        .name = _("Enamorus"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_CONTRARY,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUBSTITUTE, MOVE_SUPERPOWER, MOVE_TAUNT}
    },

    [SPECIES_ENAMORUS_THERIAN] = // Bulky Attacker
    {
        .name = _("Enamorus-T"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_OVERCOAT,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC}
    },

    [SPECIES_SPRIGATITO] = // TODO: Set
    {
        .name = _("Sprigatito"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FLORAGATO] = // TODO: Set
    {
        .name = _("Floragato"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MEOWSCARADA] = // Lead
    {
        .name = _("Meowscarada"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PROTEAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TOXIC_SPIKES, MOVE_TRIPLE_AXEL, MOVE_FLOWER_TRICK, MOVE_U_TURN}
    },

    [SPECIES_FUECOCO] = // Defensive
    {
        .name = _("Fuecoco"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {140, 0, 124, 0, 12, 196},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WILL_O_WISP, MOVE_FLAMETHROWER, MOVE_SLACK_OFF, MOVE_ROAR}
    },

    [SPECIES_CROCALOR] = // Physically Defensive
    {
        .name = _("Crocalor"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_ROAR, MOVE_SLACK_OFF}
    },

    [SPECIES_SKELEDIRGE] = // Unaware Wall
    {
        .name = _("Skeledirge"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 92, 0, 0, 164},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TORCH_SONG, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_SLACK_OFF}
    },

    [SPECIES_QUAXLY] = // Rapid Spin
    {
        .name = _("Quaxly"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {76, 76, 76, 196, 0, 76},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_ROOST, MOVE_LIQUIDATION, MOVE_AQUA_JET}
    },

    [SPECIES_QUAXWELL] = // Defensive
    {
        .name = _("Quaxwell"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLIP_TURN, MOVE_RAPID_SPIN, MOVE_ENCORE, MOVE_ROOST}
    },

    [SPECIES_QUAQUAVAL] = // Assault Vest
    {
        .name = _("Quaquaval"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_AQUA_STEP, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN}
    },

    [SPECIES_LECHONK] = // TODO: Set
    {
        .name = _("Lechonk"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_OINKOLOGNE] = // Bulky Setup
    {
        .name = _("Oinkologne"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_DOUBLE_EDGE, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_OINKOLOGNE_F] = // Bulky Support
    {
        .name = _("Oinkologne-F"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AROMA_VEIL,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_TAROUNTULA] = // TODO: Set
    {
        .name = _("Tarountula"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SPIDOPS] = // Bulky Support
    {
        .name = _("Spidops"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STAKEOUT,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_SPIKES, MOVE_STICKY_WEB}
    },

    [SPECIES_NYMBLE] = // Revenge Killer
    {
        .name = _("Nymble"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 228, 36, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE, MOVE_SUCKER_PUNCH, MOVE_U_TURN}
    },

    [SPECIES_LOKIX] = // Swords Dance
    {
        .name = _("Lokix"),
        .item = ITEM_BLACK_GLASSES,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_PROTECT}
    },

    [SPECIES_PAWMI] = // TODO: Set
    {
        .name = _("Pawmi"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PAWMO] = // TODO: Set
    {
        .name = _("Pawmo"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_PAWMOT] = // Offensive
    {
        .name = _("Pawmot"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_IRON_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH}
    },

    [SPECIES_TANDEMAUS] = // TODO: Set
    {
        .name = _("Tandemaus"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_MAUSHOLD_FOUR] = // Tidy Up
    {
        .name = _("Maushold"),
        .item = ITEM_WIDE_LENS,
        .ability = ABILITY_TECHNICIAN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_TIDY_UP, MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_ENCORE}
    },

    [SPECIES_MAUSHOLD_THREE] = // TODO: Set
    {
        .name = _("Maushold-3"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_FIDOUGH] = // TODO: Set
    {
        .name = _("Fidough"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DACHSBUN] = // Cleric
    {
        .name = _("Dachsbun"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WELL_BAKED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_PLAY_ROUGH, MOVE_ROAR}
    },

    [SPECIES_SMOLIV] = // TODO: Set
    {
        .name = _("Smoliv"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_DOLLIV] = // TODO: Set
    {
        .name = _("Dolliv"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARBOLIVA] = // Physically Defensive (Normal)
    {
        .name = _("Arboliva"),
        .item = ITEM_EJECT_BUTTON,
        .ability = ABILITY_SEED_SOWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {248, 0, 252, 0, 0, 8},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_STRENGTH_SAP, MOVE_LEECH_SEED}
    },

    [SPECIES_SQUAWKABILLY] = // Wallbreaker
    {
        .name = _("Squawkabilly"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_PROTECT, MOVE_QUICK_ATTACK}
    },

    [SPECIES_SQUAWKABILLY_BLUE] = // Wallbreaker
    {
        .name = _("Squawkabilly-B"),
        .item = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_PROTECT, MOVE_QUICK_ATTACK}
    },

    [SPECIES_SQUAWKABILLY_YELLOW] = // Wallbreaker
    {
        .name = _("Squawkabilly-Y"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_FOUL_PLAY, MOVE_PARTING_SHOT}
    },

    [SPECIES_SQUAWKABILLY_WHITE] = // Wallbreaker
    {
        .name = _("Squawkabilly-W"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .teraType = TYPE_FLYING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_FOUL_PLAY, MOVE_PARTING_SHOT}
    },

    [SPECIES_NACLI] = // TODO: Set
    {
        .name = _("Nacli"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_NACLSTACK] = // Specially Defensive
    {
        .name = _("Naclstack"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PURIFYING_SALT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SALT_CURE, MOVE_PROTECT, MOVE_RECOVER, MOVE_CURSE}
    },

    [SPECIES_GARGANACL] = // Setup
    {
        .name = _("Garganacl"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_PURIFYING_SALT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {248, 0, 8, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SALT_CURE, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_RECOVER}
    },

    [SPECIES_CHARCADET] = // TODO: Set
    {
        .name = _("Charcadet"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARMAROUGE] = // Calm Mind + 3 Attacks
    {
        .name = _("Armarouge"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WEAK_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ARMOR_CANNON, MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_CALM_MIND}
    },

    [SPECIES_CERULEDGE] = // Swords Dance
    {
        .name = _("Ceruledge"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_WEAK_ARMOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST}
    },

    [SPECIES_TADBULB] = // TODO: Set
    {
        .name = _("Tadbulb"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_BELLIBOLT] = // Physically Defensive Static
    {
        .name = _("Bellibolt"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_STATIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_MUDDY_WATER, MOVE_SLACK_OFF, MOVE_TOXIC}
    },

    [SPECIES_WATTREL] = // Pivot
    {
        .name = _("Wattrel"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 76, 196, 76, 116},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HURRICANE, MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },

    [SPECIES_KILOWATTREL] = // Offensive Pivot
    {
        .name = _("Kilowattrel"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_VOLT_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDERBOLT, MOVE_HURRICANE, MOVE_VOLT_SWITCH, MOVE_ROOST}
    },

    [SPECIES_MASCHIFF] = // Choice Scarf
    {
        .name = _("Maschiff"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STAKEOUT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 212, 0, 188, 0, 108},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_MABOSSTIFF] = // Choiced
    {
        .name = _("Mabosstiff"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_STAKEOUT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_DESTINY_BOND}
    },

    [SPECIES_SHROODLE] = // Setup Sweeper
    {
        .name = _("Shroodle"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {36, 236, 0, 236, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_TERA_BLAST, MOVE_SUBSTITUTE}
    },

    [SPECIES_GRAFAIAI] = // Terrain Sweeper
    {
        .name = _("Grafaiai"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_LOW_KICK, MOVE_ENCORE}
    },

    [SPECIES_BRAMBLIN] = // Spinner
    {
        .name = _("Bramblin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_WIND_RIDER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 236, 36, 196, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_POWER_WHIP, MOVE_SHADOW_SNEAK, MOVE_STRENGTH_SAP}
    },

    [SPECIES_BRAMBLEGHAST] = // Offensive Utility
    {
        .name = _("Brambleghast"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WIND_RIDER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_RAPID_SPIN, MOVE_STRENGTH_SAP}
    },

    [SPECIES_TOEDSCOOL] = // Utility
    {
        .name = _("Toedscool"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 236, 196, 36, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN}
    },

    [SPECIES_TOEDSCRUEL] = // Entry Hazard Support (Grass)
    {
        .name = _("Toedscruel"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {180, 0, 64, 252, 12, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_EARTH_POWER}
    },

    [SPECIES_KLAWF] = // Setup Sweeper
    {
        .name = _("Klawf"),
        .item = ITEM_EXPERT_BELT,
        .ability = ABILITY_ANGER_SHELL,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRABHAMMER, MOVE_HIGH_HORSEPOWER, MOVE_KNOCK_OFF, MOVE_STONE_EDGE}
    },

    [SPECIES_CAPSAKID] = // TODO: Set
    {
        .name = _("Capsakid"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SCOVILLAIN] = // Sun Sweeper (Fire)
    {
        .name = _("Scovillain"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {0, 32, 0, 224, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST, MOVE_STOMPING_TANTRUM}
    },

    [SPECIES_RELLOR] = // TODO: Set
    {
        .name = _("Rellor"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_RABSCA] = // Offensive Trick Room
    {
        .name = _("Rabsca"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SYNCHRONIZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 0, 0, 252, 4},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_REVIVAL_BLESSING}
    },

    [SPECIES_FLITTLE] = // TODO: Set
    {
        .name = _("Flittle"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ESPATHRA] = // Calm Mind
    {
        .name = _("Espathra"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 244, 12, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_PROTECT}
    },

    [SPECIES_TINKATINK] = // Utility
    {
        .name = _("Tinkatink"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PICKPOCKET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CALM,
        .evs = {36, 0, 236, 52, 0, 164},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAINING_KISS, MOVE_KNOCK_OFF, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK}
    },

    [SPECIES_TINKATUFF] = // Defensive Utility
    {
        .name = _("Tinkatuff"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_PICKPOCKET,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_ENCORE}
    },

    [SPECIES_TINKATON] = // Utility
    {
        .name = _("Tinkaton"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 0, 0, 232, 0, 24},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_GIGATON_HAMMER, MOVE_ENCORE, MOVE_THUNDER_WAVE}
    },

    [SPECIES_WIGLETT] = // TODO: Set
    {
        .name = _("Wiglett"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_WUGTRIO] = // Fast Attacker
    {
        .name = _("Wugtrio"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_GOOEY,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_STOMPING_TANTRUM, MOVE_THROAT_CHOP}
    },

    [SPECIES_BOMBIRDIER] = // Offensive
    {
        .name = _("Bombirdier"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_BIG_PECKS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_TAUNT}
    },

    [SPECIES_FINIZEN] = // Offensive
    {
        .name = _("Finizen"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {36, 0, 0, 236, 236, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_SURF, MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_PROTECT}
    },

    [SPECIES_PALAFIN] = // Wallbreaker
    {
        .name = _("Palafin"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_ZERO_TO_HERO,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN, MOVE_JET_PUNCH, MOVE_WAVE_CRASH}
    },

    [SPECIES_VAROOM] = // Defensive Pivot
    {
        .name = _("Varoom"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_OVERCOAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_SASSY,
        .evs = {252, 0, 72, 0, 0, 184},
        .ivs = {31, 31, 31, 0, 31, 31},
        .moves = {MOVE_PARTING_SHOT, MOVE_POISON_JAB, MOVE_TOXIC_SPIKES, MOVE_THIEF}
    },

    [SPECIES_REVAVROOM] = // Shift Gear
    {
        .name = _("Revavroom"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_FILTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER}
    },

    [SPECIES_CYCLIZAR] = // Utility
    {
        .name = _("Cyclizar"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {248, 8, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SHED_TAIL, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_TAUNT}
    },

    [SPECIES_ORTHWORM] = // Defensive
    {
        .name = _("Orthworm"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_EARTH_EATER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {252, 0, 16, 0, 0, 244},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}
    },

    [SPECIES_GLIMMET] = // Entry Hazard Setter
    {
        .name = _("Glimmet"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_TOXIC_DEBRIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {132, 0, 100, 196, 76, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_STEALTH_ROCK, MOVE_POWER_GEM, MOVE_MUD_SHOT, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_GLIMMORA] = // Meteor Beam
    {
        .name = _("Glimmora"),
        .item = ITEM_POWER_HERB,
        .ability = ABILITY_TOXIC_DEBRIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {244, 0, 4, 92, 76, 92},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_METEOR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SPIKY_SHIELD}
    },

    [SPECIES_GREAVARD] = // TODO: Set
    {
        .name = _("Greavard"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_HOUNDSTONE] = // Defensive
    {
        .name = _("Houndstone"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_FLUFFY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_BOLD,
        .evs = {252, 0, 252, 0, 0, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_NIGHT_SHADE, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },

    [SPECIES_FLAMIGO] = // Glass Cannon
    {
        .name = _("Flamigo"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_DETECT}
    },

    [SPECIES_CETODDLE] = // TODO: Set
    {
        .name = _("Cetoddle"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_CETITAN] = // Belly Drum
    {
        .name = _("Cetitan"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SLUSH_RUSH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_EARTHQUAKE}
    },

    [SPECIES_VELUZA] = // Fillet Away
    {
        .name = _("Veluza"),
        .item = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SHARPNESS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {4, 252, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FILLET_AWAY, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_AQUA_JET}
    },

    [SPECIES_DONDOZO] = // Curse + Resttalk
    {
        .name = _("Dondozo"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CURSE, MOVE_WATERFALL, MOVE_REST, MOVE_SLEEP_TALK}
    },

    [SPECIES_TATSUGIRI] = // Nasty Plot
    {
        .name = _("Tatsugiri"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_STORM_DRAIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DRACO_METEOR, MOVE_SURF, MOVE_RAPID_SPIN}
    },

    [SPECIES_TATSUGIRI_DROOPY] = // TODO: Set
    {
        .name = _("Tatsugiri-D"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_TATSUGIRI_STRETCHY] = // TODO: Set
    {
        .name = _("Tatsugiri-S"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ANNIHILAPE] = // Choice Scarf
    {
        .name = _("Annihilape"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FINAL_GAMBIT, MOVE_RAGE_FIST, MOVE_CLOSE_COMBAT, MOVE_COACHING}
    },

    [SPECIES_CLODSIRE] = // Defensive Hazard Setter
    {
        .name = _("Clodsire"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_IMPISH,
        .evs = {248, 0, 176, 0, 0, 84},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_SPIKES, MOVE_RECOVER}
    },

    [SPECIES_FARIGIRAF] = // Offensive Trick Room
    {
        .name = _("Farigiraf"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_ARMOR_TAIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_QUIET,
        .evs = {252, 0, 4, 0, 252, 0},
        .ivs = {31, 0, 31, 0, 31, 31},
        .moves = {MOVE_TRICK_ROOM, MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_TERA_BLAST}
    },

    [SPECIES_DUDUNSPARCE] = // Bulky Attacker
    {
        .name = _("Dudunsparce"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_RATTLED,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BOOMBURST, MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_ROOST}
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] = // TODO: Set
    {
        .name = _("Dudunsparce-3"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_KINGAMBIT] = // Assault Vest
    {
        .name = _("Kingambit"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_SUPREME_OVERLORD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {244, 196, 0, 0, 0, 68},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KOWTOW_CLEAVE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE}
    },

    [SPECIES_GREAT_TUSK] = // Offensive Utility
    {
        .name = _("Great-Tusk"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEADLONG_RUSH, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_RAPID_SPIN}
    },

    [SPECIES_SCREAM_TAIL] = // Bulky Disruption
    {
        .name = _("Scream-Tail"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {228, 0, 148, 100, 4, 28},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_ENCORE, MOVE_DISABLE, MOVE_PROTECT}
    },

    [SPECIES_BRUTE_BONNET] = // Speedy Spore
    {
        .name = _("Brute-Bonnet"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {148, 100, 4, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SPORE, MOVE_TRAILBLAZE, MOVE_CRUNCH, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_FLUTTER_MANE] = // Choice Specs (Ghost)
    {
        .name = _("Flutter-Mane"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_POWER_GEM}
    },

    [SPECIES_SLITHER_WING] = // Bulk Up Sweeper
    {
        .name = _("Slither-Wing"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_LEECH_LIFE, MOVE_EARTHQUAKE, MOVE_FLAME_CHARGE}
    },

    [SPECIES_SANDY_SHOCKS] = // Pivot
    {
        .name = _("Sandy-Shocks"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_VOLT_SWITCH, MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_SPIKES}
    },

    [SPECIES_IRON_TREADS] = // Utility
    {
        .name = _("Iron-Treads"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN}
    },

    [SPECIES_IRON_BUNDLE] = // Fast Support
    {
        .name = _("Iron-Bundle"),
        .item = ITEM_FOCUS_SASH,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {4, 0, 0, 252, 252, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_ICY_WIND, MOVE_ENCORE, MOVE_PROTECT}
    },

    [SPECIES_IRON_HANDS] = // Swords Dance
    {
        .name = _("Iron-Hands"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 84, 0, 172},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },

    [SPECIES_IRON_JUGULIS] = // Booster Energy
    {
        .name = _("Iron-Jugulis"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_HURRICANE, MOVE_EARTH_POWER, MOVE_WORK_UP}
    },

    [SPECIES_IRON_MOTH] = // Booster Energy
    {
        .name = _("Iron-Moth"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 124, 252, 132, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_FIERY_DANCE, MOVE_SLUDGE_WAVE, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_IRON_THORNS] = // Dragon Dance (Electric)
    {
        .name = _("Iron-Thorns"),
        .item = ITEM_LOADED_DICE,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST}
    },

    [SPECIES_FRIGIBAX] = // TODO: Set
    {
        .name = _("Frigibax"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_ARCTIBAX] = // Swords Dance
    {
        .name = _("Arctibax"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD}
    },

    [SPECIES_BAXCALIBUR] = // Clear Amulet
    {
        .name = _("Baxcalibur"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {220, 196, 4, 52, 0, 36},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_PROTECT}
    },

    [SPECIES_GIMMIGHOUL_CHEST] = // TODO: Set
    {
        .name = _("Gimmighoul"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GIMMIGHOUL_ROAMING] = // TODO: Set
    {
        .name = _("Gimmighoul-R"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_GHOLDENGO] = // Thunder Wave (Steel)
    {
        .name = _("Gholdengo"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_GOOD_AS_GOLD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {232, 0, 0, 104, 48, 124},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_THUNDER_WAVE, MOVE_HEX, MOVE_MAKE_IT_RAIN, MOVE_RECOVER}
    },

    [SPECIES_WO_CHIEN] = // Specially Defensive
    {
        .name = _("Wo-Chien"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TABLETS_OF_RUIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 0, 4, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_LEECH_SEED, MOVE_PROTECT}
    },

    [SPECIES_CHIEN_PAO] = // Choice Band
    {
        .name = _("Chien-Pao"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_SWORD_OF_RUIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 4, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_THROAT_CHOP, MOVE_GIGA_IMPACT}
    },

    [SPECIES_TING_LU] = // Special Wall
    {
        .name = _("Ting-Lu"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_VESSEL_OF_RUIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_CAREFUL,
        .evs = {252, 4, 0, 0, 0, 252},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_RUINATION, MOVE_SPIKES, MOVE_WHIRLWIND}
    },

    [SPECIES_CHI_YU] = // Choice Item Attacker
    {
        .name = _("Chi-Yu"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_BEADS_OF_RUIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {68, 0, 84, 236, 116, 4},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_HEAT_WAVE, MOVE_DARK_PULSE, MOVE_OVERHEAT, MOVE_SNARL}
    },

    [SPECIES_ROARING_MOON] = // Choice Scarf (Dragon)
    {
        .name = _("Roaring-Moon"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_OUTRAGE, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_U_TURN}
    },

    [SPECIES_IRON_VALIANT] = // Mixed
    {
        .name = _("Iron-Valiant"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_NAIVE,
        .evs = {0, 4, 0, 252, 252, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_MOONBLAST, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ENCORE}
    },

    [SPECIES_KORAIDON] = // Clear Amulet
    {
        .name = _("Koraidon"),
        .item = ITEM_CLEAR_AMULET,
        .ability = ABILITY_ORICHALCUM_PULSE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {236, 196, 4, 68, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_FLAME_CHARGE, MOVE_PROTECT}
    },

    [SPECIES_MIRAIDON] = // Choice Specs
    {
        .name = _("Miraidon"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_HADRON_ENGINE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {44, 0, 4, 204, 244, 12},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM}
    },

    [SPECIES_WALKING_WAKE] = // Choice Specs (Dragon)
    {
        .name = _("Walking-Wake"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {12, 0, 0, 252, 244, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_SCALD, MOVE_FLAMETHROWER}
    },

    [SPECIES_IRON_LEAVES] = // Swords Dance
    {
        .name = _("Iron-Leaves"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {96, 160, 0, 252, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_DIPPLIN] = // Growth
    {
        .name = _("Dipplin"),
        .item = ITEM_EVIOLITE,
        .ability = ABILITY_STICKY_HOLD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_RELAXED,
        .evs = {252, 0, 252, 0, 4, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_GROWTH, MOVE_RECOVER, MOVE_DRAGON_TAIL, MOVE_GIGA_DRAIN}
    },

    [SPECIES_POLTCHAGEIST_COUNTERFEIT] = // TODO: Set
    {
        .name = _("Poltchageist"),
        .item = ITEM_NONE,
        .ability = ABILITY_NONE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {252, 252, 4, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_POUND, MOVE_POUND, MOVE_POUND, MOVE_POUND}
    },

    [SPECIES_SINISTCHA] = // Bulky Setup
    {
        .name = _("Sinistcha"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_HEATPROOF,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_MATCHA_GOTCHA, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP}
    },

    [SPECIES_OKIDOGI] = // Assault Vest
    {
        .name = _("Okidogi"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_TOXIC_CHAIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {240, 252, 0, 16, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH}
    },

    [SPECIES_MUNKIDORI] = // Offensive Pivot
    {
        .name = _("Munkidori"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TOXIC_CHAIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SLUDGE_WAVE, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_U_TURN}
    },

    [SPECIES_FEZANDIPITI] = // Bulky Attacker
    {
        .name = _("Fezandipiti"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TOXIC_CHAIN,
        .teraType = TYPE_DARK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BEAT_UP, MOVE_GUNK_SHOT, MOVE_MOONBLAST, MOVE_ROOST}
    },

    [SPECIES_OGERPON_TEAL] = // Pivot
    {
        .name = _("Ogerpon"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_DEFIANT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_STOMPING_TANTRUM}
    },

    [SPECIES_OGERPON_CORNERSTONE] = // Setup Sweeper
    {
        .name = _("Ogerpon-Corner"),
        .item = ITEM_CORNERSTONE_MASK,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_ROCK,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HORN_LEECH, MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_SUPERPOWER}
    },

    [SPECIES_OGERPON_HEARTHFLAME] = // Setup Sweeper
    {
        .name = _("Ogerpon-Hearth"),
        .item = ITEM_HEARTHFLAME_MASK,
        .ability = ABILITY_MOLD_BREAKER,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {77, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HORN_LEECH, MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_POWER_WHIP}
    },

    [SPECIES_OGERPON_WELLSPRING] = // Setup Sweeper
    {
        .name = _("Ogerpon-Wellsp"),
        .item = ITEM_WELLSPRING_MASK,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_WATER,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HORN_LEECH, MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH}
    },

    [SPECIES_ARCHALUDON] = // Bulky Setup Sweeper
    {
        .name = _("Archaludon"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_STAMINA,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 4, 20, 36, 196},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_ELECTRO_SHOT, MOVE_BODY_PRESS, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE}
    },

    [SPECIES_HYDRAPPLE] = // Nasty Plot
    {
        .name = _("Hydrapple"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {252, 0, 92, 0, 164, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_NASTY_PLOT, MOVE_DRACO_METEOR, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER}
    },

    [SPECIES_GOUGING_FIRE] = // Offensive Support
    {
        .name = _("Gouging-Fire"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {252, 4, 20, 164, 0, 68},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HEAT_CRASH, MOVE_BURNING_BULWARK, MOVE_BREAKING_SWIPE, MOVE_DRAGON_DANCE}
    },

    [SPECIES_RAGING_BOLT] = // Calm Mind
    {
        .name = _("Raging-Bolt"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_PROTOSYNTHESIS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_MODEST,
        .evs = {0, 0, 4, 252, 252, 0},
        .ivs = {31, 20, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT}
    },

    [SPECIES_IRON_BOULDER] = // Swords Dance
    {
        .name = _("Iron-Boulder"),
        .item = ITEM_BOOSTER_ENERGY,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_JOLLY,
        .evs = {0, 252, 0, 252, 0, 4},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_SWORDS_DANCE, MOVE_MIGHTY_CLEAVE, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT}
    },

    [SPECIES_IRON_CROWN] = // Assault Vest
    {
        .name = _("Iron-Crown"),
        .item = ITEM_ASSAULT_VEST,
        .ability = ABILITY_QUARK_DRIVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {0, 0, 0, 252, 252, 4},
        .ivs = {31, 20, 31, 31, 31, 31},
        .moves = {MOVE_TACHYON_CUTTER, MOVE_FUTURE_SIGHT, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH}
    },

    [SPECIES_TERAPAGOS] = // Setup Sweeper
    {
        .name = _("Terapagos"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_TERA_SHIFT,
        .teraType = TYPE_STELLAR,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DARK_PULSE, MOVE_RAPID_SPIN, MOVE_REST}
    },

    [SPECIES_PECHARUNT] = // Pivot
    {
        .name = _("Pecharunt"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_POISON_PUPPETEER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_TIMID,
        .evs = {252, 0, 4, 252, 0, 0},
        .ivs = {31, 0, 31, 31, 31, 31},
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_HEX, MOVE_PARTING_SHOT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_BUG] = // Bulky Setup
    {
        .name = _("Arceus-Bug"),
        .item = ITEM_INSECT_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_JUDGMENT}
    },

    [SPECIES_ARCEUS_DARK] = // Bulky Setup
    {
        .name = _("Arceus-Dark"),
        .item = ITEM_DREAD_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_FAIRY,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_DRAGON] = // Fast Bulky Setup
    {
        .name = _("Arceus-Dragon"),
        .item = ITEM_DRACO_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FIRE_BLAST, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_ELECTRIC] = // Bulky Setup
    {
        .name = _("Arceus-Electri"),
        .item = ITEM_ZAP_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_FAIRY] = // Bulky Setup
    {
        .name = _("Arceus-Fairy"),
        .item = ITEM_PIXIE_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_FIGHTING] = // Bulky Setup
    {
        .name = _("Arceus-Fightin"),
        .item = ITEM_FIST_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_RECOVER, MOVE_SHADOW_BALL}
    },

    [SPECIES_ARCEUS_FIRE] = // Fast Bulky Setup
    {
        .name = _("Arceus-Fire"),
        .item = ITEM_FLAME_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_FLYING] = // Bulky Setup
    {
        .name = _("Arceus-Flying"),
        .item = ITEM_SKY_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_GHOST] = // Bulky Attacker
    {
        .name = _("Arceus-Ghost"),
        .item = ITEM_SPOOKY_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_DARK,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FOCUS_BLAST, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_GRASS] = // Bulky Setup
    {
        .name = _("Arceus-Grass"),
        .item = ITEM_MEADOW_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_FIRE,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FIRE_BLAST, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_GROUND] = // Bulky Setup
    {
        .name = _("Arceus-Ground"),
        .item = ITEM_EARTH_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_DRAGON,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_JUDGMENT}
    },

    [SPECIES_ARCEUS_ICE] = // Bulky Setup
    {
        .name = _("Arceus-Ice"),
        .item = ITEM_ICICLE_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_ELECTRIC,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_EARTH_POWER, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_ARCEUS_POISON] = // Fast Bulky Setup
    {
        .name = _("Arceus-Poison"),
        .item = ITEM_TOXIC_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE}
    },

    [SPECIES_ARCEUS_PSYCHIC] = // Bulky Setup
    {
        .name = _("Arceus-Psychic"),
        .item = ITEM_MIND_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_STORED_POWER}
    },

    [SPECIES_ARCEUS_ROCK] = // Setup Sweeper
    {
        .name = _("Arceus-Rock"),
        .item = ITEM_STONE_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_GROUND,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_STONE_EDGE}
    },

    [SPECIES_ARCEUS_STEEL] = // Bulky Support
    {
        .name = _("Arceus-Steel"),
        .item = ITEM_IRON_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_GHOST,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_JUDGMENT, MOVE_RECOVER, MOVE_WILL_O_WISP}
    },

    [SPECIES_ARCEUS_WATER] = // Bulky Support
    {
        .name = _("Arceus-Water"),
        .item = ITEM_SPLASH_PLATE,
        .ability = ABILITY_MULTITYPE,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_JUDGMENT, MOVE_RECOVER}
    },

    [SPECIES_GRENINJA_BOND] = // Fast Attacker
    {
        .name = _("Greninja-Bond"),
        .item = ITEM_LIFE_ORB,
        .ability = ABILITY_BATTLE_BOND,
        .teraType = TYPE_POISON,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_GUNK_SHOT, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM}
    },

    [SPECIES_KELDEO_RESOLUTE] = // Bulky Setup
    {
        .name = _("Keldeo-Resolut"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_STEEL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_SUBSTITUTE}
    },

    [SPECIES_ZACIAN_CROWNED] = // Setup Sweeper
    {
        .name = _("Zacian-C"),
        .item = ITEM_RUSTED_SWORD,
        .ability = ABILITY_INTREPID_SWORD,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BEHEMOTH_BLADE, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_ZAMAZENTA_CROWNED] = // Bulky Setup
    {
        .name = _("Zamazenta-C"),
        .item = ITEM_RUSTED_SHIELD,
        .ability = ABILITY_DAUNTLESS_SHIELD,
        .teraType = TYPE_FIGHTING,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_IRON_DEFENSE, MOVE_STONE_EDGE}
    },

    [SPECIES_AEGISLASH_BLADE] = // Default Set
    {
        .name = _("Aegislash-Blad"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_STANCE_CHANGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK}
    },

    [SPECIES_ALCREMIE_GMAX] = // Default Set
    {
        .name = _("Alcremie-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_AROMA_VEIL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC}
    },

    [SPECIES_APPLETUN_GMAX] = // Default Set
    {
        .name = _("Appletun-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_APPLE_ACID, MOVE_DRACO_METEOR, MOVE_LEECH_SEED, MOVE_RECOVER}
    },

    [SPECIES_BLASTOISE_GMAX] = // Default Set
    {
        .name = _("Blastoise-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_TORRENT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_RAPID_SPIN, MOVE_SCALD}
    },

    [SPECIES_BUTTERFREE_GMAX] = // Default Set
    {
        .name = _("Butterfree-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_TINTED_LENS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER}
    },

    [SPECIES_CINDERACE_GMAX] = // Default Set
    {
        .name = _("Cinderace-G"),
        .item = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_LIBERO,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_COALOSSAL_GMAX] = // Default Set
    {
        .name = _("Coalossal-G"),
        .item = ITEM_AIR_BALLOON,
        .ability = ABILITY_FLAME_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_OVERHEAT, MOVE_RAPID_SPIN, MOVE_SPIKES, MOVE_STEALTH_ROCK}
    },

    [SPECIES_COPPERAJAH_GMAX] = // Default Set
    {
        .name = _("Copperajah-G"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_HEAVY_METAL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAT_CRASH, MOVE_HEAVY_SLAM, MOVE_POWER_WHIP}
    },

    [SPECIES_DARMANITAN_GALAR] = // Default Set
    {
        .name = _("Darmanitan-G"),
        .item = ITEM_CHOICE_SCARF,
        .ability = ABILITY_GORILLA_TACTICS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_ICICLE_CRASH, MOVE_SUPERPOWER}
    },

    [SPECIES_DARMANITAN_GALAR_ZEN] = // Default Set
    {
        .name = _("Darmanitan-Zen"),
        .item = ITEM_SALAC_BERRY,
        .ability = ABILITY_ZEN_MODE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_ICICLE_CRASH}
    },

    [SPECIES_GARBODOR_GMAX] = // Default Set
    {
        .name = _("Garbodor-G"),
        .item = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_AFTERMATH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EXPLOSION, MOVE_GUNK_SHOT, MOVE_PAIN_SPLIT, MOVE_SPIKES}
    },

    [SPECIES_GENESECT_DOUSE] = // Default Set
    {
        .name = _("Genesect-Douse"),
        .item = ITEM_DOUSE_DRIVE,
        .ability = ABILITY_DOWNLOAD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BUZZ, MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ICE_BEAM}
    },

    [SPECIES_GENGAR_GMAX] = // Default Set
    {
        .name = _("Gengar-G"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE}
    },

    [SPECIES_GRIMMSNARL_GMAX] = // Default Set
    {
        .name = _("Grimmsnarl-G"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DARKEST_LARIAT, MOVE_PLAY_ROUGH, MOVE_REST}
    },

    [SPECIES_HATTERENE_GMAX] = // Default Set
    {
        .name = _("Hatterene-G"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC}
    },

    [SPECIES_INTELEON_GMAX] = // Default Set
    {
        .name = _("Inteleon-G"),
        .item = ITEM_SCOPE_LENS,
        .ability = ABILITY_SNIPER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_FOCUS_ENERGY, MOVE_ICE_BEAM, MOVE_SURF}
    },

    [SPECIES_LAPRAS_GMAX] = // Default Set
    {
        .name = _("Lapras-G"),
        .item = ITEM_CHOICE_SPECS,
        .ability = ABILITY_WATER_ABSORB,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FREEZE_DRY, MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_SPARKLING_ARIA}
    },

    [SPECIES_RILLABOOM_GMAX] = // Default Set
    {
        .name = _("Rillaboom-G"),
        .item = ITEM_GRASSY_SEED,
        .ability = ABILITY_GRASSY_SURGE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ACROBATICS, MOVE_GRASSY_GLIDE, MOVE_HIGH_HORSEPOWER, MOVE_KNOCK_OFF}
    },

    [SPECIES_SILVALLY_BUG] = // Default Set
    {
        .name = _("Silvally-Bug"),
        .item = ITEM_BUG_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_SILVALLY_DARK] = // Default Set
    {
        .name = _("Silvally-Dark"),
        .item = ITEM_DARK_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_HEAD, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_SILVALLY_DRAGON] = // Default Set
    {
        .name = _("Silvally-Drago"),
        .item = ITEM_DRAGON_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_IRON_HEAD, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT}
    },

    [SPECIES_SILVALLY_ELECTRIC] = // Default Set
    {
        .name = _("Silvally-Elect"),
        .item = ITEM_ELECTRIC_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT}
    },

    [SPECIES_SILVALLY_FAIRY] = // Default Set
    {
        .name = _("Silvally-Fairy"),
        .item = ITEM_FAIRY_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_MULTI_ATTACK, MOVE_PSYCHIC_FANGS, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SILVALLY_FIGHTING] = // Default Set
    {
        .name = _("Silvally-Fight"),
        .item = ITEM_FIGHTING_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_MULTI_ATTACK, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SILVALLY_FIRE] = // Default Set
    {
        .name = _("Silvally-Fire"),
        .item = ITEM_FIRE_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_MULTI_ATTACK, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SILVALLY_FLYING] = // Default Set
    {
        .name = _("Silvally-Flyin"),
        .item = ITEM_FLYING_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_IRON_HEAD, MOVE_MULTI_ATTACK, MOVE_ROCK_SLIDE}
    },

    [SPECIES_SILVALLY_GHOST] = // Default Set
    {
        .name = _("Silvally-Ghost"),
        .item = ITEM_GHOST_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SILVALLY_GRASS] = // Default Set
    {
        .name = _("Silvally-Grass"),
        .item = ITEM_GRASS_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_MULTI_ATTACK}
    },

    [SPECIES_SILVALLY_GROUND] = // Default Set
    {
        .name = _("Silvally-Groun"),
        .item = ITEM_GROUND_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_MULTI_ATTACK}
    },

    [SPECIES_SILVALLY_ICE] = // Default Set
    {
        .name = _("Silvally-Ice"),
        .item = ITEM_ICE_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_MULTI_ATTACK, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SILVALLY_POISON] = // Default Set
    {
        .name = _("Silvally-Poiso"),
        .item = ITEM_POISON_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_FLAMETHROWER, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT}
    },

    [SPECIES_SILVALLY_PSYCHIC] = // Default Set
    {
        .name = _("Silvally-Psych"),
        .item = ITEM_PSYCHIC_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_MULTI_ATTACK, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR}
    },

    [SPECIES_SILVALLY_ROCK] = // Default Set
    {
        .name = _("Silvally-Rock"),
        .item = ITEM_ROCK_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLAME_CHARGE, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_SILVALLY_STEEL] = // Default Set
    {
        .name = _("Silvally-Steel"),
        .item = ITEM_STEEL_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_FLAMETHROWER, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT}
    },

    [SPECIES_SILVALLY_WATER] = // Default Set
    {
        .name = _("Silvally-Water"),
        .item = ITEM_WATER_MEMORY,
        .ability = ABILITY_RKS_SYSTEM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_ICE_BEAM, MOVE_MULTI_ATTACK, MOVE_PARTING_SHOT}
    },

    [SPECIES_SNORLAX_GMAX] = // Default Set
    {
        .name = _("Snorlax-G"),
        .item = ITEM_CHESTO_BERRY,
        .ability = ABILITY_THICK_FAT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE}
    },

    [SPECIES_URSHIFU_GMAX] = // Default Set
    {
        .name = _("Urshifu-G"),
        .item = ITEM_LEFTOVERS,
        .ability = ABILITY_UNSEEN_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE, MOVE_WICKED_BLOW}
    },

    [SPECIES_URSHIFU_RAPID_STRIKE_GMAX] = // Default Set
    {
        .name = _("Urshifu-R-S-G"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_UNSEEN_FIST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_SURGING_STRIKES}
    },

    [SPECIES_ZYGARDE_10] = // Default Set
    {
        .name = _("Zygarde-10%"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_AURA_BREAK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_COIL, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_OUTRAGE}
    },

    [SPECIES_ABOMASNOW_MEGA] = // Bulky Attacker
    {
        .name = _("Abomasnow-M"),
        .item = ITEM_ABOMASITE,
        .ability = ABILITY_SNOW_WARNING,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ICE_SHARD}
    },

    [SPECIES_ABSOL_MEGA] = // Fast Attacker
    {
        .name = _("Absol-M"),
        .item = ITEM_ABSOLITE,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_TAIL, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_PURSUIT}
    },

    [SPECIES_AERODACTYL_MEGA] = // Fast Attacker
    {
        .name = _("Aerodactyl-M"),
        .item = ITEM_AERODACTYLITE,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AERIAL_ACE, MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_HONE_CLAWS}
    },

    [SPECIES_AGGRON_MEGA] = // Bulky Attacker
    {
        .name = _("Aggron-M"),
        .item = ITEM_AGGRONITE,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_ROAR, MOVE_STEALTH_ROCK}
    },

    [SPECIES_ALAKAZAM_MEGA] = // Setup Sweeper
    {
        .name = _("Alakazam-M"),
        .item = ITEM_ALAKAZITE,
        .ability = ABILITY_MAGIC_GUARD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ENCORE, MOVE_FOCUS_BLAST, MOVE_PSYCHIC}
    },

    [SPECIES_ALTARIA_MEGA] = // Setup Sweeper
    {
        .name = _("Altaria-M"),
        .item = ITEM_ALTARIANITE,
        .ability = ABILITY_NATURAL_CURE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_ROOST}
    },

    [SPECIES_AMPHAROS_MEGA] = // Bulky Support
    {
        .name = _("Ampharos-M"),
        .item = ITEM_AMPHAROSITE,
        .ability = ABILITY_STATIC,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DISCHARGE, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_REST}
    },

    [SPECIES_AUDINO_MEGA] = // Staller
    {
        .name = _("Audino-M"),
        .item = ITEM_AUDINITE,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PROTECT, MOVE_TOXIC, MOVE_WISH}
    },

    [SPECIES_BANETTE_MEGA] = // Fast Support
    {
        .name = _("Banette-M"),
        .item = ITEM_BANETTITE,
        .ability = ABILITY_FRISK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DESTINY_BOND, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SHADOW_CLAW}
    },

    [SPECIES_BEEDRILL_MEGA] = // Setup Sweeper
    {
        .name = _("Beedrill-M"),
        .item = ITEM_BEEDRILLITE,
        .ability = ABILITY_SWARM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRILL_RUN, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_SWORDS_DANCE}
    },

    [SPECIES_BLASTOISE_MEGA] = // Bulky Support
    {
        .name = _("Blastoise-M"),
        .item = ITEM_BLASTOISINITE,
        .ability = ABILITY_RAIN_DISH,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_RAPID_SPIN}
    },

    [SPECIES_BLAZIKEN_MEGA] = // Setup Sweeper
    {
        .name = _("Blaziken-M"),
        .item = ITEM_BLAZIKENITE,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_PROTECT}
    },

    [SPECIES_CAMERUPT_MEGA] = // Bulky Attacker
    {
        .name = _("Camerupt-M"),
        .item = ITEM_CAMERUPTITE,
        .ability = ABILITY_SOLID_ROCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_STEALTH_ROCK}
    },

    [SPECIES_CHARIZARD_MEGA_X] = // Setup Sweeper
    {
        .name = _("Charizard-M-X"),
        .item = ITEM_CHARIZARDITE_X,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ}
    },

    [SPECIES_CHARIZARD_MEGA_Y] = // Fast Attacker
    {
        .name = _("Charizard-M-Y"),
        .item = ITEM_CHARIZARDITE_Y,
        .ability = ABILITY_BLAZE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AIR_SLASH, MOVE_FIRE_BLAST, MOVE_ROOST, MOVE_SOLAR_BEAM}
    },

    [SPECIES_DIANCIE_MEGA] = // Fast Attacker
    {
        .name = _("Diancie-M"),
        .item = ITEM_DIANCITE,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DIAMOND_STORM, MOVE_EARTH_POWER, MOVE_MOONBLAST}
    },

    [SPECIES_GALLADE_MEGA] = // Setup Sweeper
    {
        .name = _("Gallade-M"),
        .item = ITEM_GALLADITE,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_ZEN_HEADBUTT}
    },

    [SPECIES_GARCHOMP_MEGA] = // Bulky Support
    {
        .name = _("Garchomp-M"),
        .item = ITEM_GARCHOMPITE,
        .ability = ABILITY_ROUGH_SKIN,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_STEALTH_ROCK}
    },

    [SPECIES_GARDEVOIR_MEGA] = // Setup Sweeper
    {
        .name = _("Gardevoir-M"),
        .item = ITEM_GARDEVOIRITE,
        .ability = ABILITY_TRACE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ENCORE, MOVE_FOCUS_BLAST, MOVE_HYPER_VOICE}
    },

    [SPECIES_GENGAR_MEGA] = // Fast Attacker
    {
        .name = _("Gengar-M"),
        .item = ITEM_GENGARITE,
        .ability = ABILITY_CURSED_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DESTINY_BOND, MOVE_DISABLE, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    },

    [SPECIES_GLALIE_MEGA] = // Fast Attacker
    {
        .name = _("Glalie-M"),
        .item = ITEM_GLALITITE,
        .ability = ABILITY_INNER_FOCUS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {77, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_FREEZE_DRY, MOVE_ICE_SHARD}
    },

    [SPECIES_GROUDON_PRIMAL] = // Bulky Setup
    {
        .name = _("Groudon-Primal"),
        .item = ITEM_RED_ORB,
        .ability = ABILITY_DROUGHT,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FIRE_PUNCH, MOVE_PRECIPICE_BLADES, MOVE_ROCK_POLISH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_GYARADOS_MEGA] = // Setup Sweeper
    {
        .name = _("Gyarados-M"),
        .item = ITEM_GYARADOSITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE}
    },

    [SPECIES_HERACROSS_MEGA] = // Wallbreaker
    {
        .name = _("Heracross-M"),
        .item = ITEM_HERACRONITE,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_PIN_MISSILE}
    },

    [SPECIES_HOUNDOOM_MEGA] = // Setup Sweeper
    {
        .name = _("Houndoom-M"),
        .item = ITEM_HOUNDOOMINITE,
        .ability = ABILITY_FLASH_FIRE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT, MOVE_SLUDGE_BOMB}
    },

    [SPECIES_KANGASKHAN_MEGA] = // Fast Support
    {
        .name = _("Kangaskhan-M"),
        .item = ITEM_KANGASKHANITE,
        .ability = ABILITY_SCRAPPY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS}
    },

    [SPECIES_KYOGRE_PRIMAL] = // Setup Sweeper
    {
        .name = _("Kyogre-Primal"),
        .item = ITEM_BLUE_ORB,
        .ability = ABILITY_DRIZZLE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_ORIGIN_PULSE, MOVE_THUNDER}
    },

    [SPECIES_LATIAS_MEGA] = // Bulky Attacker
    {
        .name = _("Latias-M"),
        .item = ITEM_LATIASITE,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_ROOST}
    },

    [SPECIES_LATIOS_MEGA] = // Bulky Attacker
    {
        .name = _("Latios-M"),
        .item = ITEM_LATIOSITE,
        .ability = ABILITY_LEVITATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_ROOST}
    },

    [SPECIES_LOPUNNY_MEGA] = // Fast Attacker
    {
        .name = _("Lopunny-M"),
        .item = ITEM_LOPUNNITE,
        .ability = ABILITY_LIMBER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_ENCORE, MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_POWER_UP_PUNCH}
    },

    [SPECIES_LUCARIO_MEGA] = // Bulky Setup
    {
        .name = _("Lucario-M"),
        .item = ITEM_LUCARIONITE,
        .ability = ABILITY_JUSTIFIED,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED, MOVE_METEOR_MASH, MOVE_SWORDS_DANCE}
    },

    [SPECIES_MANECTRIC_MEGA] = // Fast Attacker
    {
        .name = _("Manectric-M"),
        .item = ITEM_MANECTITE,
        .ability = ABILITY_LIGHTNING_ROD,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_HIDDEN_POWER, MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH}
    },

    [SPECIES_MAWILE_MEGA] = // Wallbreaker
    {
        .name = _("Mawile-M"),
        .item = ITEM_MAWILITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH}
    },

    [SPECIES_MEDICHAM_MEGA] = // Fast Attacker
    {
        .name = _("Medicham-M"),
        .item = ITEM_MEDICHAMITE,
        .ability = ABILITY_PURE_POWER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH}
    },

    [SPECIES_METAGROSS_MEGA] = // Bulky Attacker
    {
        .name = _("Metagross-M"),
        .item = ITEM_METAGROSSITE,
        .ability = ABILITY_CLEAR_BODY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AGILITY, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_METEOR_MASH}
    },

    [SPECIES_MEWTWO_MEGA_X] = // Setup Sweeper
    {
        .name = _("Mewtwo-M-X"),
        .item = ITEM_MEWTWONITE_X,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_STONE_EDGE, MOVE_TAUNT}
    },

    [SPECIES_MEWTWO_MEGA_Y] = // Setup Sweeper
    {
        .name = _("Mewtwo-M-Y"),
        .item = ITEM_MEWTWONITE_Y,
        .ability = ABILITY_UNNERVE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_AURA_SPHERE, MOVE_CALM_MIND, MOVE_FIRE_BLAST, MOVE_PSYSTRIKE}
    },

    [SPECIES_PIDGEOT_MEGA] = // Bulky Attacker
    {
        .name = _("Pidgeot-M"),
        .item = ITEM_PIDGEOTITE,
        .ability = ABILITY_BIG_PECKS,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DEFOG, MOVE_HEAT_WAVE, MOVE_HURRICANE, MOVE_ROOST}
    },

    [SPECIES_PINSIR_MEGA] = // Bulky Setup
    {
        .name = _("Pinsir-M"),
        .item = ITEM_PINSIRITE,
        .ability = ABILITY_MOXIE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {81, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK, MOVE_RETURN}
    },

    [SPECIES_RAYQUAZA_MEGA] = // Fast Attacker
    {
        .name = _("Rayquaza-M"),
        .item = ITEM_CHOICE_BAND,
        .ability = ABILITY_AIR_LOCK,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_ASCENT, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED}
    },

    [SPECIES_SABLEYE_MEGA] = // Bulky Setup
    {
        .name = _("Sableye-M"),
        .item = ITEM_SABLENITE,
        .ability = ABILITY_PRANKSTER,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_DARK_PULSE, MOVE_RECOVER, MOVE_WILL_O_WISP}
    },

    [SPECIES_SALAMENCE_MEGA] = // Setup Sweeper
    {
        .name = _("Salamence-M"),
        .item = ITEM_SALAMENCITE,
        .ability = ABILITY_INTIMIDATE,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_RETURN}
    },

    [SPECIES_SCEPTILE_MEGA] = // Setup Sweeper
    {
        .name = _("Sceptile-M"),
        .item = ITEM_SCEPTILITE,
        .ability = ABILITY_OVERGROW,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_LEAF_BLADE, MOVE_OUTRAGE, MOVE_SWORDS_DANCE}
    },

    [SPECIES_SCIZOR_MEGA] = // Bulky Setup
    {
        .name = _("Scizor-M"),
        .item = ITEM_SCIZORITE,
        .ability = ABILITY_LIGHT_METAL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_BUG_BITE, MOVE_BULLET_PUNCH, MOVE_KNOCK_OFF, MOVE_ROOST}
    },

    [SPECIES_SHARPEDO_MEGA] = // Wallbreaker
    {
        .name = _("Sharpedo-M"),
        .item = ITEM_SHARPEDONITE,
        .ability = ABILITY_SPEED_BOOST,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT, MOVE_PSYCHIC_FANGS}
    },

    [SPECIES_SLOWBRO_MEGA] = // Bulky Setup
    {
        .name = _("Slowbro-M"),
        .item = ITEM_SLOWBRONITE,
        .ability = ABILITY_REGENERATOR,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_ADAMANT,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SCALD, MOVE_SLACK_OFF}
    },

    [SPECIES_STEELIX_MEGA] = // Bulky Support
    {
        .name = _("Steelix-M"),
        .item = ITEM_STEELIXITE,
        .ability = ABILITY_STURDY,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK}
    },

    [SPECIES_SWAMPERT_MEGA] = // Setup Sweeper
    {
        .name = _("Swampert-M"),
        .item = ITEM_SWAMPERTITE,
        .ability = ABILITY_DAMP,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE, MOVE_SUPERPOWER}
    },

    [SPECIES_TYRANITAR_MEGA] = // Setup Sweeper
    {
        .name = _("Tyranitar-M"),
        .item = ITEM_TYRANITARITE,
        .ability = ABILITY_SAND_STREAM,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH}
    },

    [SPECIES_VENUSAUR_MEGA] = // Bulky Attacker
    {
        .name = _("Venusaur-M"),
        .item = ITEM_VENUSAURITE,
        .ability = ABILITY_CHLOROPHYLL,
        .teraType = TYPE_NORMAL,
        .nature = NATURE_HARDY,
        .evs = {0, 0, 0, 0, 0, 0},
        .ivs = {31, 31, 31, 31, 31, 31},
        .moves = {MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SLEEP_POWDER}
    }
};
