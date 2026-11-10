#!/usr/bin/env python3
"""ParcelHighlandsTarn: reworked from LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM. This script is the map source -- run it after
editing to regenerate map.bin. Paint ops use raw metatile ids (see the id grid:
python3 tools/skald/idgrid.py ParcelHighlandsTarn)."""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = 35, 35
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

# ---- the remix (2026-11-09): the tarn cave ----------------------------------
# Meltwater: the tarn has come up a row, pools stand on the sand floors, and roof-fall
# lies in the brown galleries.
# the tarn rises one row (its top edge moves from row 26 to row 25)
for x, mid in ((18, 398), (19, 422), (20, 422), (21, 397)): put(x, 25, mid, 0, 3)
for x, mid in ((18, 415), (19, 414), (20, 414), (21, 413)): put(x, 26, mid, 0, 3)
shallow(13, 16, 14, 17); shallow(24, 17, 25, 18); shallow(10, 25, 11, 26)
SANDRIM = (664, 665, 666, 672, 673, 674, 680, 681, 682)
def spill(x0, y0, x1, y1, clip=1):
    """a spill of sand over the brown floor, rimmed like the tileset's own sand floors"""
    cells = set()
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) != 529 or col(x, y): continue
            if min(x - x0, x1 - x) + min(y - y0, y1 - y) < clip: continue
            cells.add((x, y))
    TL, T, TR, L, C, R, BL, B, BR = SANDRIM
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
spill(29, 6, 31, 12); spill(3, 24, 5, 28); spill(9, 16, 11, 21); spill(13, 9, 14, 12)
for x, y, mid in ((3, 22, 592), (5, 22, 614), (31, 9, 614), (12, 7, 610), (26, 22, 592), (9, 29, 614)):
    solid(x, y, mid, (529, 513))

# ---- write ------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes())
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelHighlandsTarn: wrote {W}x{H} map.bin; {changed} tiles differ from the vanilla base ({100*changed//(W*H)}%)")
