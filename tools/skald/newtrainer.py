#!/usr/bin/env python3
"""Allocate the next trainer id: TRAINER_SKALD_<NAME> in opponents.h + a party stub.

  python3 tools/skald/newtrainer.py DOCK_FISHER_ANNI --name "Anni" --class Fisherman \
      --pic "Fisherman" --gender Female --mons "Magikarp @ Level 6" "Krabby / Level 7"
Mons are given Showdown-style, one per arg; use "Species\\nLevel: N" style or
"Species / Level N" shorthand (converted). Prints the id.
"""
import argparse, re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OPP = ROOT / "include/constants/opponents.h"
PARTY = ROOT / "src/data/trainers.party"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("tag")
    ap.add_argument("--name", required=True)
    ap.add_argument("--class", dest="cls", default="Youngster")
    ap.add_argument("--pic", default=None)
    ap.add_argument("--gender", default="Male")
    ap.add_argument("--music", default=None)
    ap.add_argument("--ai", default="Basic Trainer / Try To Faint")
    ap.add_argument("--mons", nargs="+", required=True)
    a = ap.parse_args()
    const = "TRAINER_SKALD_" + a.tag.upper()
    s = OPP.read_text()
    if const in s:
        raise SystemExit(f"{const} exists")
    m = re.search(r"#define TRAINERS_COUNT\s+(\d+)", s)
    tid = int(m.group(1))
    s = s.replace(m.group(0), f"#define {const:33} {tid}\n\n#define TRAINERS_COUNT                      {tid+1}")
    mx = int(re.search(r"#define MAX_TRAINERS_COUNT\s+(\d+)", s).group(1))
    if tid + 1 > mx:
        raise SystemExit(f"TRAINERS_COUNT {tid+1} would exceed MAX_TRAINERS_COUNT {mx}")
    OPP.write_text(s)
    pic = a.pic or a.cls
    music = a.music or ("Female" if a.gender == "Female" else "Male")
    mons = []
    for mon in a.mons:
        if " / Level " in mon:
            sp, lv = mon.split(" / Level ")
            mons.append(f"{sp.strip()}\nLevel: {lv.strip()}")
        else:
            mons.append(mon.replace("\\n", "\n"))
    block = (f"\n=== {const} ===\nName: {a.name.upper()}\nClass: {a.cls}\nPic: {pic}\n"
             f"Gender: {a.gender}\nMusic: {music}\nDouble Battle: No\nAI: {a.ai}\n\n"
             + "\n\n".join(mons) + "\n")
    with PARTY.open("a") as f:
        f.write(block)
    print(f"{const} = {tid}")


if __name__ == "__main__":
    main()
