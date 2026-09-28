#!/usr/bin/env python3
"""ParcelFernwick: reworked from LAYOUT_RUSTBORO_CITY. This script is the map source -- run it after
editing to regenerate map.bin. Paint ops use raw metatile ids (see the id grid:
python3 tools/skald/idgrid.py ParcelFernwick)."""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 40, 60
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))

def get(x, y): return words[y * W + x] & 0x3FF
def col(x, y): return (words[y * W + x] >> 10) & 3
def put(x, y, mid, c=None, e=None):
    """Set a tile. c/e default: keep the base tile's collision/elevation."""
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def copy_block(sx, sy, w, h, dx, dy):
    """Move a rectangle of the base (buildings, ponds) to a new place."""
    block = [[words[(sy + j) * W + (sx + i)] for i in range(w)] for j in range(h)]
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = block[j][i]

# ---- edits ------------------------------------------------------------------
# Fernwick: the Corps district town on the bluff above the marsh water.
# Reworked from Rustboro: the Devon building is the Corps District Station,
# the gym is the Certification Hall, the school is the Survey office, the big
# west flats become a park with a pond, the east road is closed off, the
# south road is where you arrive from Mistwood.

GRASS, FLOWER_A, FLOWER_B = 1, 4, 4
TREE = [(468, 469), (476, 477)]          # 2x2 Hoenn tree block, top row / bottom row

def tree_block(x, y):
    put(x, y, TREE[0][0], 1, 0); put(x + 1, y, TREE[0][1], 1, 0)
    put(x, y + 1, TREE[1][0], 1, 0); put(x + 1, y + 1, TREE[1][1], 1, 0)

# 1. close the east road (rows 7-13, x=37-39) with trees
for y in (7, 9, 11):
    tree_block(37, y)
for y in range(7, 14):
    put(39, y, 468 if y % 2 else 476, 1, 0)
put(37, 13, 476, 1, 0); put(38, 13, 477, 1, 0)

# 2. the west flats (rows 24-31, x=9-17) -> a park with a pond
rect(9, 24, 17, 31, GRASS, 0, 3)
rect(8, 32, 17, 32, 699, 0, 3)                       # pavement below the park
pond_x, pond_y = 10, 26
put(pond_x, pond_y, 176, 0, 1); rect(pond_x + 1, pond_y, pond_x + 4, pond_y, 177, 0, 1); put(pond_x + 5, pond_y, 178, 0, 1)
for y in (pond_y + 1, pond_y + 2):
    put(pond_x, y, 184, 0, 1); rect(pond_x + 1, y, pond_x + 4, y, 161, 0, 1); put(pond_x + 5, y, 186, 0, 1)
put(pond_x, pond_y + 3, 184, 0, 1); put(pond_x + 5, pond_y + 3, 186, 0, 1)
for i, x in enumerate(range(pond_x + 1, pond_x + 5)):
    put(x, pond_y + 3, 510 if i % 2 == 0 else 511, 0, 1)
for i, x in enumerate(range(pond_x, pond_x + 6)):
    put(x, pond_y + 4, 508 if i % 2 == 0 else 509, 1, 0)
for x, y in [(9, 25), (16, 25), (9, 30), (17, 30), (12, 24), (15, 31)]:
    put(x, y, FLOWER_A, 0, 3)
for x, y in [(11, 25), (14, 25), (16, 29)]:
    put(x, y, FLOWER_B, 0, 3)
tree_block(16, 27)

# 3. the south square: flower beds beside the arrival road
for x, y in [(13, 55), (18, 55), (13, 57), (18, 57)]:
    put(x, y, FLOWER_A, 0, 3)

# 4. a hedge of trees to break the long east pavement (rows 47-53 x=30-35)
tree_block(32, 49); tree_block(34, 51)

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"ParcelFernwick: wrote {W}x{H} map.bin")
