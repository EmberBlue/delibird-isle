#!/usr/bin/env python3
"""ParcelCoastBreakwater: reworked from LAYOUT_ROUTE109. This script is the map source -- run it after
editing to regenerate map.bin. Paint ops use raw metatile ids (see the id grid:
python3 tools/skald/idgrid.py ParcelCoastBreakwater)."""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 40, 63
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
# The Coast's beach is a concrete quay now (ParcelCoast/build.py); the join rows
# match it, and the closed beach starts at row 2.
rect(8, 0, 35, 1, 514, 0, 3)


# ---- the remix helpers (2026-11-09) ---------------------------------------------
PALE = (256, 257, 258, 264, 265, 266, 272, 273, 274)   # bleached litter / dead reed bed
TAN = (280, 281, 282, 288, 289, 290, 296, 297, 298)    # bare earth, dried mud
def bed(x0, y0, x1, y1, kind=TAN, clip=1, ok=(1, 13, 2, 4, 14, 15, 21, 23)):
    """a bed of bare ground on grass: a clipped rectangle with grass-lipped edges"""
    cells = set()
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) not in ok: continue
            if min(x - x0, x1 - x) + min(y - y0, y1 - y) < clip: continue
            cells.add((x, y))
    TL, T, TR, L, C, R, BL, B, BR = kind
    for (x, y) in cells:
        n = (x, y - 1) not in cells; s = (x, y + 1) not in cells
        w = (x - 1, y) not in cells; e = (x + 1, y) not in cells
        mid = C
        if n and w and not (s or e): mid = TL
        elif n and e and not (s or w): mid = TR
        elif s and w and not (n or e): mid = BL
        elif s and e and not (n or w): mid = BR
        elif n and not (s or e or w): mid = T
        elif s and not (n or e or w): mid = B
        elif w and not (n or s or e): mid = L
        elif e and not (n or s or w): mid = R
        put(x, y, mid, 0, None)
def puddle2(x, y, ok=(1, 2, 4, 13, 14, 15)):
    """a 2x2 puddle from the grass-rimmed set, only where all four tiles are plain ground"""
    if all(get(x + i, y + j) in ok for i in (0, 1) for j in (0, 1)):
        put(x, y, 200, 0, None); put(x + 1, y, 202, 0, None); put(x, y + 1, 216, 0, None); put(x + 1, y + 1, 218, 0, None)
def shallow(x0, y0, x1, y1, ok=(673, 292, 289, 265), e=None):
    """a rectangle (>= 2x2) of walkable shallow water with sand rims, only over sand"""
    if x1 - x0 < 1 or y1 - y0 < 1: return
    if not all(get(x, y) in ok for y in range(y0, y1 + 1) for x in range(x0, x1 + 1)): return
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            n = y == y0; s = y == y1; w = x == x0; ee = x == x1
            mid = 414
            if n and w: mid = 398
            elif n and ee: mid = 397
            elif s and w: mid = 405
            elif s and ee: mid = 407
            elif n: mid = 422
            elif s: mid = 406
            elif w: mid = 415
            elif ee: mid = 413
            put(x, y, mid, 0, e)
def mound(x, y, ok=(1, 13, 2)):
    """a 3-wide heap (spoil, cordwood), solid, only on plain grass"""
    if all(get(x + i, y) in ok for i in range(3)):
        for i, mid in enumerate((331, 332, 333)): put(x + i, y, mid, 1, None)
def fence_h(x0, x1, y, ok=(1, 2, 13), gap=()):
    for x in range(x0, x1 + 1):
        if x in gap or get(x, y) not in ok: continue
        put(x, y, 312 if x == x0 else (314 if x == x1 else 313), 1, None)
def solid(x, y, mid, ok):
    """one solid prop (boulder, stool, crate) only on the listed ground ids"""
    if get(x, y) in ok: put(x, y, mid, 1, None)

# ---- the remix (2026-11-09): the beach the breakwater killed -------------------
# Route 109 was a holiday beach. This one is downdrift of the port's breakwater, so the
# sea has taken the south lobe and bitten both flanks, the furniture is gone, the quay
# apron and a crate yard reach down onto the sand, and a line of posts closes the beach.
SEA = {368}
SEAROCK = {336, 337, 344, 345, 373, 374, 381, 382, 370, 372, 378, 380, 386, 388, 113, 116, 121, 180, 379}
SANDSET = {292, 283, 284, 285, 291, 293, 299, 300, 301, 317, 318, 325, 326}
SEA_E = words[0 * W + 3] >> 12
def is_sea(x, y):
    if not (0 <= x < W and 0 <= y < H): return False
    return get(x, y) in SEA or get(x, y) in SEAROCK
def retile(x0, y0, x1, y1):
    """re-edge every sand tile in the box against the sea around it; reports shapes the tileset cannot draw"""
    bad = []
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) not in SANDSET: continue
            n, s, w, e = is_sea(x, y - 1), is_sea(x, y + 1), is_sea(x - 1, y), is_sea(x + 1, y)
            nw, ne, sw, se = is_sea(x - 1, y - 1), is_sea(x + 1, y - 1), is_sea(x - 1, y + 1), is_sea(x + 1, y + 1)
            if (n and s) or (w and e): bad.append((x, y))
            if n and w: mid = 283
            elif n and e: mid = 285
            elif s and w: mid = 299
            elif s and e: mid = 301
            elif n: mid = 284
            elif s: mid = 300
            elif w: mid = 291
            elif e: mid = 293
            else:
                diag = [d for d, v in (("nw", nw), ("ne", ne), ("sw", sw), ("se", se)) if v]
                if len(diag) > 1: bad.append((x, y))
                mid = {"nw": 317, "ne": 318, "sw": 325, "se": 326}[diag[0]] if diag else 292
            put(x, y, mid, 0, None)
    if bad: print("  retile: undrawable sand shapes at", bad)
def drown(x0, y0, x1, y1):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) in SANDSET: put(x, y, 368, 0, SEA_E)
# 1. the furniture goes (umbrellas, chairs, the notice board): bare sand
for y in range(H):
    for x in range(W):
        if 736 <= get(x, y) <= 759 or get(x, y) == 660: put(x, y, 292, 0, 3)
# 2. the sea takes the south lobe and bites both flanks
drown(12, 24, 27, 25); drown(15, 23, 21, 23); drown(10, 15, 11, 19); drown(33, 9, 34, 12)
# 3. tide pools where the beach now floods
for x, y in ((20, 19), (27, 18), (14, 9), (25, 21)): put(x, y, 368, 0, SEA_E)
retile(6, 2, 38, 27)
# 4. the quay apron comes down onto the sand, with the dredge crew's crates on it
rect(16, 2, 23, 3, 514, 0, 3)
for x, y in ((16, 2), (17, 2), (16, 3)): put(x, y, 822, 1, 3)
for x, y in ((22, 3), (23, 2)): put(x, y, 823, 1, 3)
# 5. a line of posts closes the beach, one gap left for the path
for x in range(11, 32):
    if x in (21, 22): continue
    solid(x, 14, 619 if x % 2 else 620, (292,))

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes())
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelCoastBreakwater: wrote {W}x{H} map.bin; {changed} tiles differ from the vanilla base ({100*changed//(W*H)}%)")
