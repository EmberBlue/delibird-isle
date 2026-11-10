#!/usr/bin/env python3
"""ParcelWetlands (Reedmere): reworked from the south 68 rows of LAYOUT_ROUTE119
(rows 72-139 of the vanilla map, General + Fortree). This script is the map
source -- run it after editing to regenerate map.bin.
  python3 tools/skald/layoutascii.py LAYOUT_PARCEL_WETLANDS   (see the result)
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
W, H = 40, 68
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))
R119 = struct.unpack("<5600H", (ROOT / "data/layouts/Route119/map.bin").read_bytes())  # 40x140 source for blocks

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def paste_from_r119(sx, sy, w, h, dx, dy):
    """Copy a block of the full vanilla Route 119 (its own coords) into this map."""
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = R119[(sy + j) * 40 + (sx + i)]

GRASS, TALL, SIGN, DOOR = 1, 21, 3, 33
CANOPY = 199   # Route 119's dense-forest fill; the Hoenn 2x2 tree blocks (468-477)
               # render black under the Fortree secondary (no palette for them)
def tree_block(x, y):
    rect(x, y, x + 1, y + 1, CANOPY, 1)

# ---- edits ------------------------------------------------------------------
# Reedmere: the backwater landing. The pond is the backwater; the house on its
# east bank is HARLAND's; the Mereholt Tidewater office (the Weather Institute
# building) faces the landing from the south; the bridge row runs east to the
# Corridor; Fernwick is through the funnel at the bottom.

# 1. the east exit: the bridge row continues over the rock top to the map edge
for y in (12, 13):
    e = words[y * W + 37] >> 12
    put(33, y, 113, 0, e)
    put(38, y, 113, 0, 0); put(39, y, 113, 0, 0)   # elevation 0 = transition to the Corridor's ground level
# stray edge tiles that would only be enterable from the Corridor side
put(39, 18, get(39, 18), 1); put(39, 19, get(39, 19), 1); put(0, 14, get(0, 14), 1)

# 2. the landing: HARLAND's house gets a real door; a signpost by the water
put(33, 37, DOOR, 0)
put(28, 39, SIGN, 1)

# 3. the Tidewater office (Weather Institute block, vanilla rows 26-33, x 1-11)
#    on flattened ground south of the landing, its sign kept at (34,47)
e_land = words[38 * W + 30] >> 12
rect(26, 40, 36, 48, GRASS, 0, e_land)
paste_from_r119(1, 26, 11, 8, 26, 40)
put(26, 47, GRASS, 0, e_land); put(27, 47, GRASS, 0, e_land)    # the block's two tree cells
rect(26, 48, 36, 48, GRASS, 0, e_land)

# 4. the funnel from the reed beds into the landing: trees either side of x 20-22
for x in (17, 23):
    tree_block(x, 40)
rect(19, 40, 19, 41, CANOPY, 1)
rect(25, 40, 25, 41, CANOPY, 1)
rect(37, 40, 37, 41, CANOPY, 1)

# 5. the route sign at the Fernwick funnel
put(15, 62, SIGN, 1)


HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]   # General's small house; 33 is the door
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row):
            put(x + i, y + j, mid, 0 if mid == 33 else 1, 0)

# houses added 2026-11-08 (interiors with residents)
house(24, 57)
def blob(x0, y0, x1, y1, clip=1, ok=(21, 520, 1, 14, 15, 23, 4)):
    cells = set()
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) not in ok: continue
            if min(x - x0, x1 - x) + min(y - y0, y1 - y) < clip: continue
            cells.add((x, y))
    for (x, y) in cells:
        n = (x, y - 1) not in cells; s = (x, y + 1) not in cells
        w = (x - 1, y) not in cells; e = (x + 1, y) not in cells
        mid = 265
        if n and w and not s and not e: mid = 256
        elif n and e and not s and not w: mid = 258
        elif s and w and not n and not e: mid = 272
        elif s and e and not n and not w: mid = 274
        elif n and not (s or e or w): mid = 257
        elif s and not (n or e or w): mid = 273
        elif w and not (n or s or e): mid = 264
        elif e and not (n or s or w): mid = 266
        put(x, y, mid, 0, 3)
def puddle(x0, y0, x1, y1):
    """a standing pool of the walkable puddle tiles, on grass only"""
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) not in (1, 4, 14, 15): continue
            n, s, w, e = y == y0, y == y1, x == x0, x == x1
            mid = 209
            if n and w: mid = 200
            elif n and e: mid = 202
            elif s and w: mid = 216
            elif s and e: mid = 218
            elif n: mid = 201
            elif s: mid = 217
            elif w: mid = 208
            elif e: mid = 210
            put(x, y, mid, 0, 3)
GRAVEL = {280: 256, 281: 257, 282: 258, 288: 264, 289: 265, 290: 266, 296: 272, 297: 273, 298: 274}

# ---- the remix (2026-11-09): the sick backwater -----------------------------------
# The backwater pond goes dark where the discharge reaches it; the reed beds
# around it die back to bare earth; the west bank is mud; standing water on the
# landing ground. Every event stays put.
for y in range(26, 39):
    for x in range(13, 26):
        if get(x, y) == 368: put(x, y, 369, 0, 1)
blob(3, 24, 11, 29, clip=2); blob(4, 16, 7, 18); blob(10, 24, 12, 30, clip=1, ok=(21, 520, 1))
blob(2, 42, 8, 46, clip=2); blob(12, 48, 18, 52, clip=2); blob(30, 50, 36, 54, clip=2); blob(26, 15, 29, 19, clip=1)
puddle(27, 36, 28, 37); puddle(32, 35, 33, 36); puddle(6, 50, 7, 51)
house(10, 57)

# ---- write ------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes())
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelWetlands: wrote {W}x{H} map.bin; {changed} tiles differ from Route 119 ({100*changed//(W*H)}%)")
