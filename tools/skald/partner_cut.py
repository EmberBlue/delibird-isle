#!/usr/bin/env python3
"""Every Holding Meadow partner can learn CUT.

Mistwood's north track is blocked by a deadfall; the warden pays HM01 CUT for the
freed snares and says "Teach it to your partner." In pokeemerald-expansion's
teachable learnsets (Gen 9 era) none of the seven partners could learn it, so a
player who caught nothing else was stuck in the forest. This adds MOVE_CUT to the
teachable learnsets of the seven partner lines (and ZIGZAGOON's, the local wild
fallback, if it is ever missing).

Idempotent:  python3 tools/skald/partner_cut.py  [--check]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PATH = ROOT / "src/data/pokemon/teachable_learnsets.h"
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
        if "MOVE_CUT" in m.group(2):
            continue
        changed.append(sp)
        if not check:
            text = text[:m.start()] + m.group(1) + "    MOVE_CUT,\n" + m.group(2) + m.group(3) + text[m.end():]
    if changed and not check:
        PATH.write_text(text)
    print(("would add" if check else "added") + f" MOVE_CUT for: {changed or 'nobody (all present)'}")


if __name__ == "__main__":
    main(check="--check" in sys.argv)
