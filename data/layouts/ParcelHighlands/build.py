#!/usr/bin/env python3
"""ParcelHighlands (HAUKFELL): reworked from vanilla LAYOUT_ROUTE115 (General +
leob_fallarbor, 40x80) with Route 114's waterfall grafted into the north-west
pocket. This script is the map source -- run it after editing to regenerate
map.bin.   python3 tools/skald/layoutascii.py LAYOUT_PARCEL_HIGHLANDS
"""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 40, 80
words = list(struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes()))
R114 = struct.unpack("<3200H", (HERE.parent / "Route114/map.bin").read_bytes())

def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def paste_r114(sx, sy, w, h, dx, dy):
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = R114[(sy + j) * 40 + (sx + i)]

GRASS, SIGN = 1, 3
WL, WO, WR = 184, 161, 186
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]
def house(x, y):
    for j, row in enumerate(HOUSE):
        for i, mid in enumerate(row): put(x + i, y + j, mid, 1, 0)

# ---- edits ------------------------------------------------------------------
# 1. the meltwater fall: Route 114's waterfall block (its rows 5-13, x 8-13:
#    pool / three rows of fall / river) into the NW pocket at (5,5), then a
#    channel down to the sea so the fall's foot is reached by Surf
paste_r114(8, 5, 6, 9, 5, 5)
for y in range(14, 19):
    put(6, y, WL, 0, 1); put(7, y, WO, 0, 1); put(8, y, WO, 0, 1); put(9, y, WR, 0, 1)

# 2. the foothills: the homestead (door (16,65)) and the warming centre
#    (door (25,69), facing the meadow row 70)
house(15, 62)
house(24, 66)
put(22, 70, SIGN, 1)        # the centre's banner board

# 3. the pool above the fall is reached only by the fall: close its east bank
rect(11, 5, 11, 7, 199, 1)

# the tarn cave's mouth west of the bore (Fallarbor brown cave entrance; bottom walkable at the floor's elevation)
put(24, 36, 0x259, 1, 0)
put(24, 37, 0x261, 0, 3)


# houses added 2026-11-08 (interiors with residents)
house(10, 64)
house(24, 58)
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

# ---- the remix (2026-11-09): the thaw, drawn --------------------------------------
# Thermokarst: standing pools where the ground has let go, in the meadow and by
# the drunken stand; the stand itself thinned to bare slumped earth; rubble off
# the slide on the grass below the stake fence; the sand track a gravel one.
puddle(22, 53, 23, 54); puddle(16, 55, 17, 56); puddle(22, 57, 23, 58); puddle(9, 68, 11, 69); puddle(16, 60, 17, 60)
for y in range(53, 62, 2):                               # the drunken stand: every other tree gone to bare ground
    for x in (14, 15):
        if get(x, y) in (468, 469, 476, 477): put(x, y, 265, 0, 3)
for (x, y) in ((22, 50), (23, 50), (24, 50)): put(x, y, (331, 332, 333)[x - 22], 1, 0)   # a rubble mound
for (x, y) in ((14, 49), (15, 49), (16, 49)): put(x, y, (331, 332, 333)[x - 14], 1, 0)
put(12, 51, 213, 1, 0); put(13, 51, 214, 1, 0)           # smaller scree spill
blob(22, 62, 24, 66, clip=1)                              # slumped ground east of the homestead
for y in range(H):                                        # the sand track becomes gravel
    for x in range(W):
        if get(x, y) in GRAVEL and y >= 48: put(x, y, GRAVEL[get(x, y)], 0, 3)

# ---- write ------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes())
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelHighlands: wrote {W}x{H} map.bin; {changed} tiles differ from Route 115 ({100*changed//(W*H)}%)")
