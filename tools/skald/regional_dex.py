#!/usr/bin/env python3
"""Make the regional Pokédex Skaldmere's.

The game's "Hoenn dex" (HOENN_DEX_* in include/constants/pokedex.h and
sHoennToNationalOrder[] in src/pokemon.c) is rewritten to list exactly the
species that live in Skaldmere -- every species in the wild tables and in a
Skaldmere trainer's party, i.e. the species with Skaldmere Pokédex entries
(tools/skald/dex_species.txt) -- in ecological order, south to north, with
evolution families kept together. The Pokédex UI then shows SKALD DEX 1..N.

Idempotent; run from anywhere:  python3 tools/skald/regional_dex.py
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

# zones south -> north (the certification ladder), by encounter-table map suffix
ZONES = ["ROUTE1", "ISLE", "MEADOW", "MISTWOOD", "STATION", "BRIDGE", "WETLANDS", "WETLANDS_HIDE", "MARSH",
         "CORRIDOR", "CORRIDOR_ADIT", "CORRIDOR_WORKINGS", "FLOODBASIN", "FLOODBASIN_SLUICE", "RIVER",
         "RIVER_MILL_WOOD", "HIGHLANDS", "HIGHLANDS_TARN", "WEATHER", "COAST", "COAST_BREAKWATER",
         "DELIBIRD", "DELIBIRD_CLIFFS", "DELIBIRD_SUMMIT", "CAVERN"]
# trainer-id prefixes -> zone (for species that only trainers carry)
PREFIX_ZONE = {"R1": "ROUTE1", "MW": "MISTWOOD", "MWD": "MISTWOOD", "FW": "MISTWOOD", "GYM1": "MISTWOOD",
               "WET": "WETLANDS", "HID": "WETLANDS_HIDE", "MARSH": "MARSH", "FORAGER": "WETLANDS", "POACHER": "MISTWOOD", "HERON": "MARSH",
               "COR": "CORRIDOR", "WRK": "CORRIDOR_WORKINGS", "GYM2": "CORRIDOR",
               "FLD": "FLOODBASIN", "BASIN": "FLOODBASIN", "SLU": "FLOODBASIN_SLUICE", "GYM3": "FLOODBASIN",
               "RIV": "RIVER", "GYM4": "RIVER",
               "HL": "HIGHLANDS", "TRN": "HIGHLANDS_TARN", "GYM5": "HIGHLANDS", "SURVEYOR": "HIGHLANDS",
               "WEA": "WEATHER", "SAND": "WEATHER", "SUN": "WEATHER", "RAIN": "WEATHER", "ICE": "WEATHER", "DIRECTOR": "WEATHER", "GATE": "WEATHER",
               "COAST": "COAST", "BRK": "COAST_BREAKWATER", "GYM6": "COAST", "CORDELIA": "COAST", "PERRIN": "COAST",
               "DEL": "DELIBIRD", "CLF": "DELIBIRD_CLIFFS", "SUM": "DELIBIRD_SUMMIT", "CAV": "CAVERN", "REVELER": "DELIBIRD", "GYM8": "DELIBIRD"}
BASE_OF = {"CASTFORM_NORMAL": "CASTFORM", "CASTFORM_SUNNY": "CASTFORM", "CASTFORM_RAINY": "CASTFORM", "CASTFORM_SNOWY": "CASTFORM",
           "GASTRODON_WEST": "GASTRODON", "GASTRODON_EAST": "GASTRODON", "SHELLOS_WEST": "SHELLOS", "SHELLOS_EAST": "SHELLOS"}


def zone_index(z):
    return ZONES.index(z) if z in ZONES else len(ZONES)


def wild_zones():
    j = json.loads((ROOT / "src/data/wild_encounters.json").read_text())
    first = {}
    for grp in j["wild_encounter_groups"]:
        for enc in grp["encounters"]:
            m = enc.get("map", "")
            if not m.startswith("MAP_PARCEL_"):
                continue
            z = m[len("MAP_PARCEL_"):]
            for k in ("land_mons", "water_mons", "rock_smash_mons", "fishing_mons"):
                for mon in enc.get(k, {}).get("mons", []):
                    sp = BASE_OF.get(mon["species"][8:], mon["species"][8:])
                    if sp not in first or zone_index(z) < zone_index(first[sp]):
                        first[sp] = z
    return first


def trainer_zones():
    txt = (ROOT / "src/data/trainers.h").read_text()
    pos = [(m.start(), m.group(1)) for m in re.finditer(r"\[TRAINER_SKALD_([A-Z0-9_]+)\]\s*=", txt)]
    first = {}
    for i, (p, tid) in enumerate(pos):
        end = pos[i + 1][0] if i + 1 < len(pos) else len(txt)
        z = PREFIX_ZONE.get(tid.split("_")[0], "COAST")
        for sp in re.findall(r"\.species\s*=\s*SPECIES_([A-Z0-9_]+)", txt[p:end]):
            sp = BASE_OF.get(sp, sp)
            if sp not in first or zone_index(z) < zone_index(first[sp]):
                first[sp] = z
    return first


def families(species):
    """Union species linked by evolution (parsed from the species_info files)."""
    parent = {s: s for s in species}

    def find(x):
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    def union(a, b):
        ra, rb = find(a), find(b)
        if ra != rb:
            parent[rb] = ra
    stage = {s: 0 for s in species}
    evo_to = {}
    for f in (ROOT / "src/data/pokemon/species_info").glob("gen_*_families.h"):
        txt = f.read_text()
        # walk the file linearly: remember the current [SPECIES_X] = { block, and when its
        # .evolutions = EVOLUTION(...) appears, take every SPECIES_ token inside the balanced parens
        pos = 0
        current = None
        while True:
            m = re.compile(r"\[SPECIES_([A-Z0-9_]+)\]\s*=\s*\{|\.evolutions\s*=\s*EVOLUTION\(").search(txt, pos)
            if not m:
                break
            if m.group(1):
                current = BASE_OF.get(m.group(1), m.group(1))
                pos = m.end()
                continue
            depth, i = 1, m.end()
            while i < len(txt) and depth:
                depth += (txt[i] == "(") - (txt[i] == ")")
                i += 1
            if current in parent:
                for t in re.findall(r"SPECIES_([A-Z0-9_]+)", txt[m.end():i]):
                    t = BASE_OF.get(t, t)
                    if t in parent and t != current:
                        union(current, t)
                        evo_to.setdefault(current, set()).add(t)
            pos = i
    # stage = depth from a base species
    bases = set(species) - {t for ts in evo_to.values() for t in ts}
    frontier = [(b, 0) for b in bases]
    while frontier:
        s, d = frontier.pop()
        stage[s] = max(stage[s], d)
        for t in evo_to.get(s, ()):
            frontier.append((t, d + 1))
    return {s: find(s) for s in species}, stage


def main():
    names = [l.strip() for l in (ROOT / "tools/skald/dex_species.txt").read_text().splitlines() if l.strip()]
    species = []
    for n in names:
        b = BASE_OF.get(n, n)
        if b not in species:
            species.append(b)
    wz, tz = wild_zones(), trainer_zones()
    zone = {}
    for s in species:
        zs = [z for z in (wz.get(s), tz.get(s)) if z]
        zone[s] = min(zs, key=zone_index) if zs else "COAST"
    fam, stage = families(species)
    fam_zone = {}
    for s in species:
        f = fam[s]
        if f not in fam_zone or zone_index(zone[s]) < zone_index(fam_zone[f]):
            fam_zone[f] = zone[s]
    order = sorted(species, key=lambda s: (zone_index(fam_zone[fam[s]]), fam[s], stage[s], species.index(s)))

    # include/constants/pokedex.h
    ph = ROOT / "include/constants/pokedex.h"
    s = ph.read_text()
    a = s.index("    HOENN_DEX_NONE,\n")
    b = s.index("#define HOENN_DEX_COUNT")
    enum_body = "    HOENN_DEX_NONE,\n" + "".join(f"    HOENN_DEX_{sp},\n" for sp in order) + "};\n\n"
    s = s[:a] + enum_body + s[b:]
    s = re.sub(r"#define HOENN_DEX_COUNT \(HOENN_DEX_\w+ \+ 1\)", f"#define HOENN_DEX_COUNT (HOENN_DEX_{order[-1]} + 1)", s)
    ph.write_text(s)
    # src/pokemon.c
    pc = ROOT / "src/pokemon.c"
    s = pc.read_text()
    a = s.index("static const u16 sHoennToNationalOrder[HOENN_DEX_COUNT - 1] =\n{\n") + len("static const u16 sHoennToNationalOrder[HOENN_DEX_COUNT - 1] =\n{\n")
    b = s.index("};", a)
    s = s[:a] + "".join(f"    HOENN_TO_NATIONAL({sp}),\n" for sp in order) + s[b:]
    pc.write_text(s)
    print(f"regional dex: {len(order)} species, {order[0]} .. {order[-1]}")
    for z in ZONES:
        here = [sp for sp in order if fam_zone[fam[sp]] == z]
        if here:
            print(f"  {z:18s} {' '.join(here)}")


if __name__ == "__main__":
    main()
