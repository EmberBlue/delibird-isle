#!/usr/bin/env python3
"""The Reedmere hide (zone 2's side area), second drawing.

  --write  put it into data/layouts/ParcelWetlandsHide/canvas.txt (then: python3 tools/skald/hide_kit.py --rebuild)
  --check  exit 1 if the canvas in the tree is not what this script writes
  --show   print the canvas with coordinates"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from kit import Canvas

W, H = 50, 20
c = Canvas(W, H, sea='.', stamps={'C': (4, 4), 'U': (3, 3), 'T': (2, 2)})
c.level(0, 0, W - 1, H - 1, 1, '.')

# ================= the open ground between the woods (firs are planted on what stays '.')
c.fill(4, 2, 45, 15, ',')
c.fill(46, 10, 49, 11, ',')

# ================= the pond: ragged on the far side, dug straight along the south and the east
POND = {4: (14, 22), 5: (12, 25), 6: (11, 27), 7: (10, 27), 8: (10, 27), 9: (10, 27), 10: (10, 27), 11: (10, 27)}
for y, (a, b) in POND.items():
    c.fill(a, y, b, y, 'o')

# ================= the boards: in from the landing, past the gate, along the dug bank, out to the pier
c.fill(46, 10, 49, 11, 'k')
c.fill(29, 10, 45, 10, 'k')
c.put(29, 11, 'K')
c.fill(8, 12, 29, 12, 'k')
c.put(31, 9, 'K')                                            # up to the hide's door
c.put(18, 11, 'J'); c.put(18, 10, 'J'); c.row(17, 9, 'jjj')  # the pier one sits on
c.fill(8, 9, 8, 11, 'K')                                     # round the west end to the reed cut

# ================= the hide, its gate, its boards
c.stamp(30, 5, 'C')
c.put(34, 8, 'Z'); c.put(36, 9, 'N'); c.put(42, 9, 'S')
c.put(35, 9, '1'); c.put(35, 11, '1'); c.row(35, 6, 'h'); c.put(35, 7, 'h'); c.put(35, 8, 'h'); c.put(35, 12, 'h'); c.put(35, 13, 'h')
c.put(29, 5, 'b'); c.put(34, 5, 'B'); c.put(29, 8, 'f'); c.put(33, 9, 'f'); c.row(28, 6, 't'); c.row(28, 7, 'a'); c.put(29, 7, 't')

# ================= reeds: the far bank and its cut, the north bank, the litter where they have died back
c.fill(4, 3, 7, 7, 't'); c.fill(4, 9, 6, 11, 't'); c.row(5, 5, 'aa'); c.row(4, 6, 'aa'); c.row(5, 10, 'a')
c.fill(9, 3, 10, 5, 't'); c.put(9, 6, 't'); c.put(9, 7, 'a')
c.put(8, 7, 'S'); c.put(7, 8, ','); c.put(9, 8, ',')
c.row(11, 2, 'ttattta'); c.row(12, 3, 'tat'); c.row(19, 2, 'tttatt'); c.row(23, 3, 'ttat'); c.row(26, 4, 'tt')
c.fill(15, 2, 17, 3, 'r'); c.fill(37, 3, 41, 5, 'r'); c.put(37, 3, ','); c.put(41, 5, ','); c.fill(43, 6, 44, 7, 'r')
c.fill(38, 13, 40, 15, 'm'); c.fill(42, 12, 44, 14, 'g'); c.fill(31, 13, 33, 14, 'g')
c.row(37, 7, 'tt'); c.row(38, 8, 'ta'); c.row(43, 4, 'tt'); c.row(42, 3, 'tat')

# ================= south of the boards: a meadow, a puddle, a nook
c.row(19, 14, 'ttt'); c.row(18, 15, 'ttatt'); c.row(23, 14, 'tt'); c.row(26, 15, 'ttt'); c.row(27, 14, 't')
c.stamp(12, 13, 'U')
c.put(4, 14, ','); c.put(6, 14, 'q'); c.put(10, 14, 'f'); c.put(16, 14, 'f'); c.put(24, 13, 'f'); c.put(30, 15, 'B')
c.put(36, 14, 'f'); c.put(45, 13, 'f'); c.put(44, 9, 'f'); c.put(40, 11, 'f'); c.put(22, 13, 'B'); c.put(28, 3, 'f')
c.put(7, 14, 'f'); c.put(34, 3, 'f'); c.put(45, 8, 'B'); c.put(33, 2, 'B')

# ================= the woods
c.firs(0, 0, W, H)

title = """The Reedmere hide, second drawing (composed by tools/skald/compose/wetlands_hide.py; this file is the source).
In by the boards from the backwater landing (east edge, rows 10-11; arrival 47,10). The gate, the hide on the pond's
east bank, the pond dug straight along its south and east with the boards on the dug bank and a pier, reeds on the
far side with the cut where the dusk count is kept, bleached reed litter and mud toward the backwater."""
c.finish('ParcelWetlandsHide', 'general__leob_petalburg', title, sys.argv)
