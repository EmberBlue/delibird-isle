#!/usr/bin/env python3
"""The Shoreline Cliffs, Delibird Isle (zone 6), second drawing. 

  --write  put it into data/layouts/.../canvas.txt (then: python3 tools/skald/holiday_kit.py --rebuild)
  --check  exit 1 if the canvas in the tree is not what this script writes
  --show   print the canvas with coordinates"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from kit import Canvas

W, H = 40, 46
c = Canvas(W, H)
# ================= heights: the heath (2), the beacon's knoll (3), the shore terrace (1)
c.level(0, 4, 7, 24, 2); c.level(8, 3, 16, 24, 2); c.level(17, 5, 26, 24, 2); c.level(27, 4, 38, 24, 2)
c.level(30, 9, 36, 16, 3)
c.level(0, 25, 15, 33, 1); c.level(16, 25, 38, 32, 1)

# ================= the beach, the tide pools, the shallows
for y in range(34, 39):
    c.fill(0, y, 37, y, 's')
c.fill(16, 33, 37, 33, 's')
c.fill(8, 39, 30, 39, 's'); c.fill(11, 40, 27, 40, 's')
for y in range(H):
    for x in range(W):
        if c.g[y][x] == '~' and c.lv[y][x] == 0 and y > 32:
            if any(0 <= x + dx < W and 0 <= y + dy < H and c.g[y + dy][x + dx] == 's'
                   for dx in range(-2, 3) for dy in range(-2, 3)):
                c.g[y][x] = 'W'
for y in range(H):
    for x in range(W):
        if c.g[y][x] == 'W':
            c.g[y][x] = 'w'
c.fill(10, 36, 14, 38, 'w'); c.put(10, 36, 's'); c.put(14, 38, 's')      # the cold pool
c.fill(19, 36, 24, 38, 'w'); c.put(24, 36, 's'); c.put(19, 38, 's'); c.fill(21, 39, 22, 41, 'w')   # the warm pools, open to the sea
c.put(15, 37, 'q'); c.put(7, 36, 'q'); c.put(26, 35, 'q'); c.put(21, 37, 'd'); c.put(3, 39, 'd'); c.put(33, 40, 'd')
# Tomas's cabin on its patch of dune grass, at the foot of the east stair
c.fill(29, 34, 36, 38, 'p'); c.fill(30, 34, 35, 37, ','); c.fill(31, 39, 36, 39, 's')
c.stamp(31, 34, 'H')
c.put(30, 37, 'f'); c.put(35, 36, 'B'); c.put(35, 34, 'f')

# ================= the stairs: two at the west end, two at the east
c.row(4, 24, '=='); c.row(4, 25, '=='); c.row(4, 33, '=='); c.row(4, 34, '==')
c.row(27, 24, '=='); c.row(27, 25, '=='); c.row(27, 32, '=='); c.row(27, 33, '==')

# ================= the heath: the cliff path, the bench over the strait, the tall grass
c.row(0, 17, 'cc'); c.fill(2, 17, 22, 17, 'p'); c.fill(22, 18, 22, 19, 'p'); c.fill(22, 19, 37, 19, 'p')
c.fill(12, 5, 12, 16, 'p'); c.stamp(11, 4, 'Q'); c.put(14, 4, 'N')
c.fill(4, 18, 5, 23, 'p'); c.fill(27, 20, 28, 23, 'p'); c.fill(32, 18, 33, 18, 'p')
c.fill(37, 5, 37, 18, 'p')                                   # round the knoll's seaward side
c.row(14, 7, 'ttt'); c.row(14, 8, 'ttttt'); c.row(15, 9, 'ttatt'); c.row(14, 10, 'ttaattt'); c.row(15, 11, 'ttttt'); c.row(16, 12, 'ttt')
c.row(23, 7, 'tttt'); c.row(22, 8, 'ttttat'); c.row(23, 9, 'ttatt'); c.row(24, 10, 'ttt'); c.row(24, 11, 'tt')
c.row(2, 7, 'tt'); c.row(1, 8, 'tttt'); c.row(2, 9, 'tatt'); c.row(2, 10, 'ttt'); c.row(3, 11, 't')
c.row(7, 20, 'ttt'); c.row(7, 21, 'tatt'); c.row(8, 22, 'ttt')
c.fill(17, 20, 19, 21, 'g'); c.fill(6, 13, 8, 14, 'g'); c.fill(24, 14, 26, 15, 'g'); c.fill(31, 21, 33, 22, 'g')
c.stamp(20, 13, 'O'); c.stamp(34, 5, 'O'); c.put(27, 13, 'k'); c.put(18, 15, 'k'); c.put(9, 6, 'k'); c.put(13, 21, 'k'); c.put(24, 21, 'k')
c.put(3, 16, 'S'); c.put(16, 16, 'N'); c.put(2, 13, '>'); c.put(10, 11, '>'); c.put(19, 6, '>'); c.put(29, 6, '>'); c.put(15, 20, '>'); c.put(22, 22, '>'); c.put(35, 22, '>')
for x, y in ((1, 5), (6, 6), (5, 15), (10, 15), (9, 19), (14, 14), (20, 16), (26, 17), (29, 12), (16, 22), (20, 23), (25, 22), (31, 6), (2, 21), (11, 23), (36, 21), (30, 23), (28, 8), (3, 20)):
    c.put(x, y, 'f')

# ================= the knoll and the beacon
c.row(32, 16, '=='); c.row(32, 17, '==')
c.stamp(33, 10, 'E')
c.put(35, 12, 'S'); c.put(31, 14, 'f'); c.put(35, 15, 'f'); c.put(31, 11, 'k')

# ================= the shore terrace: the trail, the tall grass, the rails
c.fill(0, 31, 9, 31, 'p'); c.fill(9, 29, 10, 31, 'p'); c.fill(10, 29, 28, 29, 'p'); c.fill(27, 30, 28, 31, 'p')
c.fill(4, 26, 5, 30, 'p'); c.fill(4, 32, 5, 32, 'p'); c.fill(27, 26, 28, 28, 'p')
c.row(0, 32, 'FFFF'); c.row(6, 32, 'F' * 10); c.row(16, 31, 'F' * 11); c.row(29, 31, 'F' * 9)
c.row(11, 26, 'tttt'); c.row(10, 27, 'ttttat'); c.row(11, 28, 'tttt'); c.row(19, 26, 'ttt'); c.row(18, 27, 'ttatt'); c.row(19, 28, 'ttt')
c.put(17, 28, 'N'); c.stamp(21, 30, 'Q'); c.put(7, 27, 'B'); c.put(8, 29, 'f'); c.put(2, 27, 'f'); c.put(1, 29, 'f'); c.put(14, 30, 'f')
c.put(24, 27, 'B'); c.put(25, 30, 'f'); c.put(31, 27, 'f'); c.put(33, 29, 'B'); c.put(36, 27, 'f'); c.put(35, 29, 'f'); c.put(30, 29, 'l')
c.put(16, 26, 'k'); c.put(32, 28, 'k'); c.put(37, 30, 'f'); c.put(2, 30, 'B')

# ================= the sea: stacks off both shores
c.stamp(20, 0, 'A'); c.stamp(33, 0, 'e'); c.stamp(3, 1, 'e'); c.put(28, 1, '0'); c.put(11, 0, '0')
c.stamp(5, 42, 'A'); c.stamp(30, 43, 'e'); c.stamp(15, 44, 'e'); c.put(25, 44, '0'); c.put(36, 44, '0'); c.put(1, 44, '0'); c.put(39, 38, 'd')

title = """The Shoreline Cliffs, Delibird Isle (zone 6), second drawing (composed by a placement script, then this file is the source).
The island's east horn: the heath on the cliff top with the bench over the strait, the point beacon on its knoll,
the shore terrace with the trail, the warm beach below with its tide pools and Tomas's cabin at the foot of the
east stair. Stairs at both ends. West edge: the Holiday Village (street row 17, shore trail row 31)."""
c.finish('ParcelDelibirdCliffs', 'general__leob_lilycove', title, sys.argv)
