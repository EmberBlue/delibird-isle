#!/usr/bin/env python3
"""The level curve of the main road: every required boss, in the order the story meets them.

The playthrough chains (tools/skald/play/) fight with a level-100 lead, so they prove the game can
be finished and say nothing about how hard it is. This reads the parties straight from
src/data/trainers.party and prints each required battle's top level beside the wild levels of
the ground the player has just walked, then flags a step no party could have trained for.
(Cordelia Brooke stood at 55-58 straight after a level-42 finale with the credits behind her,
2026-11-10. She is 44-47 now.)

  python3 tools/skald/curve.py        prints the table; exit 1 if a required step is too steep

A step is too steep when a required boss's ace is more than MAX_STEP levels over the previous
required ace. Optional battles are listed and not judged (ILEX's Skyline clearance, badge 8, is
on an island the ferry opens in chapter 5; he says so and asks before the exam).
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
MAX_STEP = 7

# (label, trainer id, required on the main road?, maps whose land encounters the player has just had)
SPINE = [
    ("TARN, Fernwick hall (badge 1)", "TRAINER_SKALD_GYM1", True, ["ParcelRoute1", "ParcelMistwood"]),
    ("MIRREN, the Corridor (badge 2)", "TRAINER_SKALD_GYM2", True, ["ParcelWetlands", "ParcelCorridor"]),
    ("BREEN, the Floodbasin (badge 3)", "TRAINER_SKALD_GYM3", True, ["ParcelFloodbasin"]),
    ("SLUICE, Elvsund (badge 4)", "TRAINER_SKALD_GYM4", True, ["ParcelRiver"]),
    ("VALE, Haukfell (badge 5)", "TRAINER_SKALD_GYM5", True, ["ParcelHighlands"]),
    ("ILEX, Delibird Isle (badge 8, optional)", "TRAINER_SKALD_GYM8", False, ["ParcelDelibird", "ParcelDelibirdSummit"]),
    ("HARLAND, the Coast (badge 6)", "TRAINER_SKALD_GYM6", True, ["ParcelCoast"]),
    ("VANE, the climate station (badge 7)", "TRAINER_SKALD_DIRECTOR", True, ["ParcelCoastBreakwater"]),
    ("AUNE, the marsh gate", "TRAINER_SKALD_GATE_MARSH", True, ["ParcelMarsh"]),
    ("DR. HERON, the finale", "TRAINER_SKALD_HERON", True, ["ParcelMarsh"]),
    ("CORDELIA BROOKE, the boardroom (credits behind her)", "TRAINER_SKALD_CORDELIA", True, ["ParcelMarsh"]),
]


def parties():
    out = {}
    for blk in re.split(r"\n(?==== )", (ROOT / "src/data/trainers.party").read_text()):
        m = re.match(r"=== (TRAINER_\w+) ===", blk)
        if m:
            out[m.group(1)] = [int(v) for v in re.findall(r"^Level:\s*(\d+)", blk, re.M)]
    return out


def wild_land():
    ids = {}
    for p in (ROOT / "data/maps").glob("Parcel*/map.json"):
        ids[json.loads(p.read_text())["id"]] = p.parent.name
    out = {}
    wild = json.loads((ROOT / "src/data/wild_encounters.json").read_text())
    for g in wild["wild_encounter_groups"]:
        for e in g.get("encounters", []):
            name = ids.get(e.get("map"))
            land = e.get("land_mons")
            if name and land:
                out.setdefault(name, []).extend(v for mon in land["mons"] for v in (mon["min_level"], mon["max_level"]))
    return out


def main():
    lv, wild = parties(), wild_land()
    prev, bad = None, 0
    print(f"{'battle':52s} {'party':22s} {'step':>5s}  wild on the way")
    for label, tid, required, maps in SPINE:
        party = lv.get(tid)
        if not party:
            print(f"{label:52s} MISSING {tid}"); bad += 1; continue
        ace = max(party)
        w = [v for m in maps for v in wild.get(m, [])]
        ws = f"{min(w)}-{max(w)}" if w else "-"
        step = "" if prev is None else f"{ace - prev:+d}"
        flag = ""
        if required and prev is not None and ace - prev > MAX_STEP:
            flag = f"   <-- more than {MAX_STEP} over the last required boss"; bad += 1
        if required and w and ace - max(w) > 14:
            flag += f"   <-- {ace - max(w)} over anything wild nearby"; bad += 1
        print(f"{label:52s} {str(party):22s} {step if required else '(opt)':>5s}  {ws}{flag}")
        if required:
            prev = ace
    print(f"\n{bad} step(s) too steep on the main road")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
