#!/usr/bin/env python3
"""Every Holding Meadow partner can learn the field moves the main path needs.

Mistwood's north track is blocked by a deadfall and SKELD says "Teach it to your
partner"; the Floodbasin's way north to the river is three breakable rocks; the
Highlands' way up to VALE's gate is a row of rocks and boulders. In
pokeemerald-expansion's teachable learnsets (Gen 9 era) most of the seven
partners could learn none of CUT, ROCK SMASH or STRENGTH, so a player who caught
nothing else was stuck. This adds the three moves to the teachable learnsets of
the seven partner lines (and ZIGZAGOON's, the local wild fallback). SURF, FLY,
DIVE, FLASH and WATERFALL open side areas only and are left to the species.

Idempotent:  python3 tools/skald/partner_hms.py  [--check]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PATH = ROOT / "src/data/pokemon/teachable_learnsets.h"
MOVES = ["MOVE_CUT", "MOVE_ROCK_SMASH", "MOVE_STRENGTH"]
LINES = ["Doduo", "Dodrio", "Shroomish", "Breloom", "Seedot", "Nuzleaf", "Shiftry", "Lotad", "Lombre", "Ludicolo",
         "Carvanha", "Sharpedo", "Numel", "Camerupt", "Electrike", "Manectric", "Zigzagoon", "Linoone"]


def main(check=False):
    text = PATH.read_text()
    changed = []
    for sp in LINES:
        m = re.search(r"(static const u16 s%sTeachableLearnset\[\] = \{\n)(.*?)(\};)" % sp, text, re.S)
        if not m:
            print(f"?? no teachable learnset for {sp}")
            continue
        missing = [mv for mv in MOVES if mv not in m.group(2)]
        if not missing:
            continue
        changed.append(f"{sp}:{'+'.join(mv[5:] for mv in missing)}")
        if not check:
            text = text[:m.start()] + m.group(1) + "".join(f"    {mv},\n" for mv in missing) + m.group(2) + m.group(3) + text[m.end():]
    if changed and not check:
        PATH.write_text(text)
    print(("would add" if check else "added") + f": {changed or 'nothing (all present)'}")


if __name__ == "__main__":
    main(check="--check" in sys.argv)
