#!/usr/bin/env python3
"""The Mereholt Breakwater (zone 7's beach), second drawing.

  --write  put it into data/layouts/ParcelCoastBreakwater/canvas.txt (then: python3 tools/skald/draw.py on it)
  --check  exit 1 if the canvas in the tree is not what this script writes
  --show   print the canvas with coordinates"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from kit import Canvas

W, H = 40, 63
c = Canvas(W, H, stamps={'H': (5, 4), 'R': (2, 2), 'e': (2, 2), 'A': (3, 3), 'Y': (3, 2), 'U': (2, 2), 'h': (1, 2)})


def land(x0, y0, x1, y1, ch):
    c.level(x0, y0, x1, y1, 1, ch)


# ================= the apron under the Coast's quay (rows 0-1 are the join: paving 8-35, the quay's lip of sand
# at 7 and 36; the lip is sea, as on the Coast, so the dredge line at (7,0) is read from the paving beside it)
land(8, 0, 35, 1, 'c'); land(7, 0, 7, 1, '['); land(36, 0, 36, 1, ']')

# ================= the beach the breakwater took the sand from
BEACH = {2: (7, 29), 3: (8, 29), 4: (8, 29), 5: (8, 29), 6: (8, 29), 7: (8, 29), 8: (8, 29), 9: (9, 29), 10: (9, 29),
         11: (10, 29), 12: (11, 29), 13: (12, 29), 14: (13, 29), 15: (14, 29), 16: (16, 28), 17: (19, 27), 18: (22, 26)}
for y, (a, b) in BEACH.items():
    land(a, y, b, y, 's')

land(35, 2, 35, 2, '_'); land(36, 2, 36, 2, '/')             # the lip turns the apron's east corner

# ================= the breakwater: out from the apron's east end, south, then west across the bay's mouth
land(30, 2, 34, 47, 'c')
land(12, 43, 34, 47, 'c')

# ================= the silted basin behind it: shallows one wades, the dredged channel, the spoil bank
for y in range(2, 43):
    for x in range(4, 30):
        if c.lv[y][x] == 0:
            c.g[y][x] = 'w'
WEST = [4, 4, 5, 5, 4, 4, 4, 5, 6, 6, 5, 4, 4, 4, 5, 5, 4, 4, 5, 6, 5, 4, 4, 4, 5, 5, 4, 4]    # the basin's west edge wanders
for i, y in enumerate(range(2, 30)):
    for x in range(4, WEST[i]):
        c.g[y][x] = '~'
for y, (a, b) in {25: (25, 27), 26: (24, 28), 27: (25, 27), 40: (26, 29), 41: (25, 29), 42: (26, 29)}.items():
    land(a, y, b, y, 's')                                                                     # silt, banked against the wall
for y, (a, b) in {30: (4, 20), 31: (4, 23), 32: (4, 24), 33: (4, 22), 34: (4, 18)}.items():   # the dredge's channel
    c.fill(a, y, b, y, '~')
c.fill(4, 35, 11, 42, '~'); c.fill(4, 43, 11, 47, '~')                                        # and its way out past the wall's end
for y, (a, b) in {23: (9, 13), 24: (8, 15), 25: (7, 16), 26: (7, 16), 27: (8, 15), 28: (10, 13)}.items():
    land(a, y, b, y, 's')                                                                     # the spoil bank
c.fill(22, 35, 25, 38, '~'); c.put(22, 35, 'w'); c.put(25, 38, 'w')                           # a hole the dredge left

# ================= sandbars outside the wall (SURF)
for y, (a, b) in {51: (26, 30), 52: (25, 31), 53: (25, 31), 54: (26, 30)}.items():
    land(a, y, b, y, 's')
for y, (a, b) in {54: (16, 20), 55: (15, 22), 56: (15, 22), 57: (15, 22), 58: (16, 21), 59: (18, 20)}.items():
    land(a, y, b, y, 's')
for y, (a, b) in {50: (5, 8), 51: (4, 9), 52: (5, 8)}.items():
    land(a, y, b, y, 's')
for y in range(48, H):                                       # each with its ring of shallows
    for x in range(W):
        if c.g[y][x] == '~' and any(0 <= x + dx < W and 0 <= y + dy < H and c.g[y + dy][x + dx] == 's'
                                    for dx in (-1, 0, 1) for dy in (-1, 0, 1)):
            c.g[y][x] = 'W'
for y in range(H):
    for x in range(W):
        if c.g[y][x] == 'W':
            c.g[y][x] = 'w'

# ================= on the apron and the beach
c.row(16, 1, 'Kk'); c.put(22, 1, 'j'); c.put(27, 1, 'b'); c.put(12, 1, 'b')
c.stamp(21, 3, 'H')                                          # the lifeguard hut, closed
c.put(26, 6, 'z'); c.put(10, 3, 'Z')                         # the hut's board; the harbour office's notice
c.put(29, 5, 'n')                                            # the board at the breakwater's root
c.stamp(12, 6, 'U'); c.stamp(15, 10, 'h')
for x, y, ch in ((18, 12, 'i'), (18, 14, 'I'), (18, 16, 'i')):
    c.put(x, y, ch)                                          # the old wall's posts, on what sand is left
c.put(21, 16, 'n')                                           # the board that faces the sea
for y in (19, 21, 23, 25, 27):
    c.put(18, y, 'd')                                        # and its foot, awash
c.put(11, 25, 'i'); c.put(13, 26, 'I'); c.put(12, 24, 'n')   # markers on the spoil
c.put(6, 12, 'd'); c.put(26, 22, 'd'); c.put(14, 38, 'd'); c.put(20, 40, 'd'); c.put(8, 20, 'd')

# ================= on the wall
c.put(31, 8, 'K'); c.put(33, 20, 'k'); c.put(31, 33, 'j'); c.put(33, 41, 'b'); c.put(33, 12, 'b'); c.put(33, 28, 'b'); c.put(20, 46, 'b'); c.put(27, 46, 'b')
c.put(13, 45, 'k')                                           # the end of the wall: the board is on this crate
c.put(27, 53, 'i'); c.put(18, 56, 'n')

# ================= boats in the lee, rocks all round
c.stamp(36, 6, 'Y'); c.stamp(36, 14, 'Y'); c.stamp(36, 24, 'Y')
c.stamp(0, 0, 'R')
c.g[0][38], c.g[0][39] = '(', ')'                            # the lower half of a rock the Coast's last row begins
ROCKS = [(1, 4, 'e'), (0, 7, 'R'), (2, 10, 'e'), (0, 13, 'A'), (1, 17, 'e'), (0, 20, 'R'), (2, 23, 'e'), (0, 26, 'A'),
         (1, 30, 'e'), (0, 33, 'R'), (1, 36, 'e'), (0, 39, 'A'), (2, 43, 'e'), (0, 46, 'R'), (1, 49, 'e'),
         (0, 54, 'R'), (2, 56, 'e'), (0, 58, 'A'), (4, 60, 'R'), (7, 61, 'e'), (10, 60, 'R'), (13, 61, 'e'),
         (24, 60, 'R'), (27, 61, 'e'), (30, 59, 'A'), (34, 60, 'R'), (37, 58, 'e'), (36, 55, 'A'),
         (38, 3, 'e'), (37, 10, 'e'), (38, 18, 'R'), (37, 21, 'e'), (38, 28, 'R'), (37, 31, 'e'), (36, 34, 'A'),
         (38, 38, 'e'), (37, 41, 'R'), (38, 44, 'e'), (36, 47, 'A'), (38, 51, 'e'), (37, 53, 'e'),
         (11, 53, 'e'), (33, 50, 'e'), (22, 50, 'e')]
for x, y, ch in ROCKS:
    c.stamp(x, y, ch)
c.put(12, 57, 'O'); c.put(26, 57, 'O')                       # where the two swimmers tread water

title = """The Mereholt Breakwater, second drawing (composed by tools/skald/compose/coast_breakwater.py; this file is the source).
The apron under the Coast's quay, the beach the breakwater took the sand from (the closed lifeguard hut, the old
wall's posts), the breakwater itself out to the end of the wall, the silted basin behind it (shallows, the dredged
channel, the spoil bank) and the sandbars outside. North edge: the Mereholt Coast (rows 0-1 are its apron)."""
c.finish('ParcelCoastBreakwater', 'general__slateport', title, sys.argv)
