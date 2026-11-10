#!/usr/bin/env python3
"""ParcelCavern: the base is a vanilla slice (see the commit); this script is the map
source -- edit the ops and run it to regenerate map.bin."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
raw = (HERE / "base.bin").read_bytes()
words = list(struct.unpack(f"<{len(raw)//2}H", raw))
import json
lay = next(l for l in json.load(open(HERE.parents[1] / "layouts/layouts.json"))["layouts"] if l["name"] == "ParcelCavern_Layout")
W, H = lay["width"], lay["height"]
def get(x, y): return words[y * W + x] & 0x3FF
def put(x, y, mid, c=None, e=None):
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
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

# ---- the remix (2026-11-09): the thawing cavern -----------------------------
# The everfrost is going: patches of the ice floor have gone to bare wet rock. Bare rock
# stops a slide, so nothing that could be reached before is lost.
def melt(x0, y0, x1, y1):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) == 909: put(x, y, 901, 0, None)
melt(3, 4, 6, 6); melt(12, 12, 14, 14); melt(4, 24, 7, 25); melt(15, 19, 17, 21); melt(9, 2, 11, 3)

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{W*H}H", (HERE / "base.bin").read_bytes())
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelCavern: wrote {W}x{H} map.bin; {changed} tiles differ from the vanilla base ({100*changed//(W*H)}%)")
