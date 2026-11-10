#!/usr/bin/env python3
"""ParcelCoast -- the MEREHOLT COAST (zone 6/7, the operation made visible).
Base: vanilla Slateport (base.bin). This script turns a resort town into a
working industrial port and is the map source: run it to regenerate map.bin.

What changes (every door and every placed event stays where it is):
- the green plaza is paved; the boulevard verges go to concrete
- the NE inlet is reclaimed as a walled container yard joined to the office's
  island -- crate stacks, pallets, a quay wall where the sea rock was
- the north road is a truck road with a wall and a gate, and the NW wood is
  thinned into a fenced truck park
- the beach pocket behind the cannery is a service yard; the south beach
  becomes a concrete quay with dredge-spoil heaps where the sand was
  (ParcelCoastBreakwater's rows 0-1 match it)
Ids: 514 dark concrete, 529 light pavement (528/530 edges, 521/537 top/bottom),
322/329 low wall (vertical / horizontal), 822 wooden crates, 823 metal crates (653 is a produce basket)
crates, 824-826/832-834 a 3x2 rock heap, 572/564/581/589/597/605 quay walls,
400/408/392/393 water against a wall, 368 deep water, 292 sand, 198/199 trees.
"""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
W, H = 40, 60
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def repaint(x0, y0, x1, y1, frm, mid, c=0, e=3):
    """replace only the listed ids inside the box"""
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) in frm: put(x, y, mid, c, e)
def crates(x, y, w=2, h=2, mid=822):
    rect(x, y, x + w - 1, y + h - 1, mid, 1, 0)
def heap(x, y):
    for j, row in enumerate(([824, 825, 826], [832, 833, 834])):
        for i, mid in enumerate(row): put(x + i, y + j, mid, 1, 0)
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row):
            put(x + i, y + j, mid, 0 if mid == 33 else 1, 0)

GRASS = {1, 2, 4}
WATER = {368, 336, 337, 344, 345, 356, 364, 376, 377, 400, 408, 392, 393, 597, 589, 581}

# ---- houses (2026-11-08) ----------------------------------------------------
house(16, 39)   # ParcelCoastHouse4
house(15, 50)   # ParcelCoastHouse5

# ---- the plaza and the verges: concrete, not lawn -------------------------
repaint(4, 13, 21, 31, GRASS, 529)          # the central plaza
repaint(15, 9, 15, 50, GRASS, 529)          # west verge of the boulevard
repaint(20, 9, 22, 50, GRASS, 529)          # east verge
repaint(2, 32, 13, 46, {4}, 529)            # the market's flower tubs
repaint(10, 56, 16, 57, GRASS, 529)         # the strip above the quay stairs

# ---- the NE inlet: a reclaimed container yard --------------------------------
rect(23, 13, 36, 21, 514, 0, 3)             # fill: water, rock, lawn -> concrete
rect(25, 22, 36, 22, 514, 0, 3)             # the office island's north wall goes; one yard
rect(37, 13, 37, 22, 572, 1, 0)             # east quay wall
rect(38, 13, 38, 22, 400, 0, 1)             # water against the wall
put(37, 12, 589, 1, 0); put(38, 12, 408, 0, 1)
rect(32, 12, 36, 12, 514, 0, 3)             # where the flower bed was, under the union hall
rect(23, 12, 23, 21, 322, 1, 0)             # a low wall closes the yard on the west...
put(23, 17, 514, 0, 3)                      # ...with a gate at the plaza's level
crates(26, 14); crates(30, 14); crates(34, 14)
crates(26, 19); crates(31, 18); crates(34, 19)
rect(28, 17, 29, 17, 823, 1, 0)             # a pallet row
# ---- the north road: trucks, a wall, a gate ----------------------------------
rect(16, 0, 19, 6, 514, 0, 3)
rect(16, 7, 20, 8, 514, 0, 3)               # the old cycling arch comes down
put(15, 7, 322, 1, 0); put(15, 8, 322, 1, 0); put(20, 7, 322, 1, 0); put(20, 8, 322, 1, 0)
rect(16, 7, 16, 7, 329, 1, 0); rect(19, 7, 19, 7, 329, 1, 0)   # the gate's posts; 17-18 stay open
# ---- the NW wood thinned into a fenced truck park ----------------------------
rect(2, 2, 12, 6, 529, 0, 3)
rect(2, 1, 12, 1, 329, 1, 0)                # wall along the tree line
rect(13, 2, 13, 6, 322, 1, 0)               # wall on the road side...
put(13, 5, 529, 0, 3); put(14, 5, 529, 0, 3); put(15, 5, 529, 0, 3)   # ...with the gap to the road
crates(3, 3); crates(7, 3); crates(10, 4, 2, 1)
# ---- the south: service yard, quay, spoil heaps ---------------------------------
rect(22, 55, 26, 57, 514, 0, 3)             # the sand pocket behind the cannery
rect(8, 59, 35, 59, 514, 0, 3)              # the beach is a quay now
rect(8, 58, 14, 58, 514, 0, 3)
heap(8, 58); heap(28, 58)                   # dredge spoil where the sand was
rect(31, 58, 33, 58, 823, 1, 0)             # crates landed on the quay

# ---- write ----------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
changed = sum(1 for a, b in zip(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()), words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelCoast: wrote {W}x{H} map.bin; {changed} tiles differ from Slateport ({100*changed//(W*H)}%)")
