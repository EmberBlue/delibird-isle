#!/usr/bin/env python3
"""The Holiday Village, Delibird Isle (zone 6), third drawing. 

  --write  put it into data/layouts/.../canvas.txt (then: python3 tools/skald/holiday_kit.py --rebuild)
  --check  exit 1 if the canvas in the tree is not what this script writes
  --show   print the canvas with coordinates"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from kit import Canvas

W, H = 44, 46
c = Canvas(W, H)
# ================= heights: the forest shelf (3), the village terrace (2), the shore terrace (1)
c.level(2, 0, 38, 6, 3); c.level(3, 7, 38, 10, 3)
c.level(39, 4, 43, 10, 2)                                   # the heath, east of the shelf
c.level(4, 11, 43, 17, 2); c.level(5, 18, 43, 24, 2)
c.level(5, 25, 43, 32, 1)
c.level(17, 25, 27, 25, 2)                                  # the square's bastion
c.level(5, 33, 9, 37, 1); c.level(6, 38, 8, 39, 1)          # the spit

# ================= the beach, its shallows, the brook's mouth, the pier
SAND = {33: (10, 33), 34: (10, 43), 35: (10, 43), 36: (10, 43), 37: (11, 43), 38: (13, 43), 39: (15, 37), 40: (18, 33)}
for y, (a, b) in SAND.items():
    c.fill(a, y, b, y, 's')
c.level(34, 33, 43, 33, 1)                                  # east of the brook the shore terrace is a row deeper
for y in range(H):
    for x in range(W):
        if c.g[y][x] == '~' and c.lv[y][x] == 0:
            if any(0 <= x + dx < W and 0 <= y + dy < H and c.g[y + dy][x + dx] == 's'
                   for dx in range(-2, 3) for dy in range(-2, 3)):
                c.g[y][x] = 'W'                             # marked first, so the ring does not grow from itself
for y in range(H):
    for x in range(W):
        if c.g[y][x] == 'W':
            c.g[y][x] = 'w'
c.fill(31, 35, 32, 40, 'w')
c.fill(21, 39, 22, 44, '+'); c.fill(19, 44, 24, 44, '+')
c.fill(37, 36, 40, 38, 'w')                                 # a tide pool
c.row(35, 41, 'ss')                                         # a sandbar

# ================= the forest shelf: the summit trail, the brook, two clearings
c.fill(15, 0, 16, 9, 'p')
for y in range(0, 10):
    c.row(31, y, 'rr')
c.fill(6, 4, 13, 9, ',')                                    # the west clearing: tall grass
c.row(7, 4, 'tttt'); c.row(6, 5, 'tttttt'); c.row(6, 6, 'ttaattf'); c.row(6, 7, 'ttaatt'); c.row(7, 8, 'tttt,k'); c.row(8, 9, 'tt')
c.put(13, 5, 'f'); c.put(13, 8, 'f'); c.put(6, 9, 'f')
c.fill(18, 4, 29, 9, ',')                                   # the wet slope above the hall
c.stamp(22, 5, 'U')
c.fill(18, 6, 20, 8, 'm'); c.fill(26, 6, 28, 8, 'm')
for x in (19, 22, 25, 28):
    c.put(x, 9, '1')
c.put(18, 4, 'B'); c.put(29, 5, 'B'); c.put(25, 4, 'f'); c.put(21, 8, 'f')

# ================= the rock face under the shelf: cave, stair, fall
c.stamp(6, 10, 'C')
c.row(15, 10, '=='); c.row(15, 11, '==')
c.row(31, 10, '^^'); c.row(31, 11, 'vv'); c.row(31, 12, 'uu')

# ================= the village terrace, north of the street
c.fill(7, 12, 7, 16, 'c')
c.stamp(10, 13, 'W')
c.fill(15, 12, 16, 16, 'c')
c.stamp(18, 12, 'M')
c.stamp(25, 13, 'Y')
c.fill(30, 13, 33, 14, 'r')
for y in range(15, 24):
    c.row(31, y, 'rr')
c.stamp(35, 12, 'G')
c.fill(41, 6, 41, 16, 'p')
c.fill(6, 17, 43, 17, 'c'); c.row(31, 17, 'jj')
# dressing
c.put(5, 12, 'b'); c.put(5, 14, 'B'); c.put(5, 16, 'f'); c.put(6, 13, 'f'); c.put(9, 12, 'f'); c.put(8, 14, 'f')
c.put(14, 12, 'S'); c.put(14, 14, 'b'); c.put(14, 16, 'f'); c.put(17, 16, 'N'); c.put(17, 13, 'B')
c.put(24, 16, 'Z'); c.put(24, 13, 'f'); c.put(29, 16, 'f'); c.put(29, 12, 'B'); c.put(34, 12, 'b'); c.put(34, 15, 'f')
c.put(34, 16, 'l'); c.put(40, 16, 'f'); c.put(40, 13, 'B'); c.put(42, 14, 'f'); c.put(43, 12, 'B'); c.put(9, 16, 'l')

# ================= the heath in the north-east: a lookout over the strait
c.stamp(40, 5, 'Q')
c.row(39, 7, 'tt'); c.row(39, 8, 'tt'); c.row(39, 9, 'ta'); c.row(39, 10, 'tt')
c.row(42, 7, 'tt'); c.row(42, 8, 'at'); c.row(42, 9, 'tt'); c.put(43, 5, 'f'); c.put(39, 5, 'f')
c.put(42, 11, 'k')

# ================= the square
c.fill(17, 18, 27, 24, 'c')
c.stamp(21, 19, 'T')
for x, y in ((17, 18), (27, 18), (17, 24), (27, 24), (20, 24), (23, 24)):
    c.put(x, y, 'l')
c.over(18, 20, 18, '*'); c.over(23, 26, 18, '*')
c.over(18, 19, 24, '*'); c.over(24, 26, 24, '*'); c.over(21, 22, 24, '!')
c.stamp(18, 21, 'V'); c.put(17, 21, 'N')
c.fill(24, 20, 26, 21, 'D'); c.put(27, 20, 'N')
c.row(21, 25, '=='); c.row(21, 26, '==')

# ================= west of the square: two cabins on a lane, the lit railing
c.stamp(7, 18, 'R'); c.stamp(12, 18, 'H')
c.fill(6, 22, 16, 22, 'c')
c.row(6, 23, 'l' + 'F' * 9 + 'l'); c.over(7, 15, 23, '*')
c.put(6, 19, 'b'); c.put(11, 20, 'f'); c.put(11, 21, 'f'); c.put(16, 19, 'B'); c.put(16, 21, 'f'); c.put(6, 21, 'f')

# ================= east of the square: the seep, the brook, two cabins, the lit railing
c.stamp(28, 18, 'U')
c.row(28, 21, '$$')
c.stamp(34, 18, 'H'); c.stamp(39, 18, 'Y')
c.fill(28, 22, 42, 22, 'c'); c.row(31, 22, 'jj')
c.row(28, 23, 'FFF'); c.row(33, 23, 'l' + 'F' * 8 + 'l'); c.over(34, 41, 23, '*')
c.put(33, 19, 'f'); c.put(38, 19, 'f'); c.put(38, 21, 'b'); c.put(43, 19, 'B'); c.put(43, 21, 'f'); c.put(30, 21, 'f')
c.put(33, 21, 'f'); c.put(38, 20, 'f')

# ================= the falls between the terraces
c.row(31, 24, '^^'); c.row(31, 25, 'vv'); c.row(31, 26, 'uu')
for y in range(27, 32):
    c.row(31, y, 'rr')
c.row(31, 32, '^^'); c.row(31, 33, 'vv'); c.row(31, 34, 'uu')

# ================= the shore terrace
c.fill(21, 27, 22, 31, 'c'); c.row(21, 32, '=='); c.row(21, 33, '==')
c.stamp(7, 26, 'H')                                         # the cabin that is going into the ground
c.stamp(12, 29, 'P')                                        # the slump pond, planks across
c.fill(6, 30, 11, 30, 'p'); c.fill(15, 30, 20, 30, 'p'); c.fill(23, 30, 34, 30, 'p'); c.row(31, 30, 'jj')
c.fill(34, 31, 43, 31, 'p')                                 # past the brook the trail drops a row and runs on east
c.stamp(35, 26, 'R')
c.row(7, 31, 'F' * 5); c.row(15, 31, 'F' * 6); c.row(23, 31, 'F' * 8); c.row(34, 32, 'F' * 9)
c.put(15, 28, 'l'); c.fill(12, 26, 14, 28, 'm'); c.put(15, 29, 'S')
c.put(6, 27, 'f'); c.put(6, 29, 'b'); c.put(16, 26, 'B'); c.put(18, 29, 'N'); c.put(11, 27, 'f')
c.stamp(17, 28, 'Q'); c.put(18, 27, 'f'); c.put(23, 27, 'B'); c.put(23, 28, 'N'); c.put(26, 27, 'f'); c.put(27, 28, 'f')
c.stamp(25, 29, 'Q'); c.put(29, 27, 'b'); c.put(29, 29, 'f'); c.put(34, 27, 'f'); c.put(34, 29, 'l'); c.put(39, 27, 'B'); c.put(40, 30, 'S')
c.put(42, 27, 'f'); c.put(43, 28, 'f'); c.put(41, 26, 'k'); c.put(39, 29, 'f'); c.put(42, 30, 'f'); c.put(33, 28, 'f')

# ================= the spit
c.stamp(7, 33, 'T')
c.put(8, 35, 'f'); c.put(8, 36, 'B')

# ================= the beach and the sea
for x in (12, 14, 16, 18):
    c.put(x, 35, 'z')
c.put(15, 37, '_'); c.put(27, 36, 'q'); c.put(36, 35, 'q'); c.put(42, 36, 'q')
c.put(13, 40, 'd'); c.put(27, 42, 'd'); c.put(40, 40, 'd')
c.put(3, 28, '0'); c.put(12, 43, '0'); c.put(38, 44, '0'); c.put(2, 41, '0')

# ================= the wood
c.firs(2, 0, 39, 10)

title = """The Holiday Village, Delibird Isle (zone 6), third drawing (composed by a placement script, then this file is the source).
A crescent's inner bay: the pier and the beach, the shore terrace with the slump pond, the village terrace with the
square (festival fir, giving table, stage, banner over the stair), the forest shelf under the summit. The brook
comes down the middle over three falls. North edge: the Snowy Summit (trail x 15-16). East edge: the Shoreline
Cliffs (street row 17, shore trail row 31)."""
c.finish('ParcelDelibird', 'general__leob_lilycove', title, sys.argv)
