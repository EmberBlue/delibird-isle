#!/usr/bin/env python3
"""ParcelMarsh -- the KEYSTONE MARSH, the Last Corridor (zone 7). Base: a slice of
vanilla Route 119 (base.bin). This script is the map source: run it to regenerate.

The remix (2026-11-09) makes the marsh a DRYING one: the river's southern half is
a dry channel bed (pale cracked earth inside its old mud banks, with standing
puddles where the water was, and gaps cut in the banks so it can be walked);
the reed swathes have dead beds of bare earth in them; the graded edge along the
east is a step down where Mereholt's earthworks cut the marsh. Every event
(Heron, the Poliwag, the hut, the gate, the items, the tells) stays put.
Ids: 265 dry earth (256-258/264/266/272-274 its grass-lipped edges), 209 a
puddle, 368 deep water, 21 tall grass, 262 a west-facing ledge."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
raw = (HERE / "base.bin").read_bytes()
words = list(struct.unpack(f"<{len(raw)//2}H", raw))
import json
lay = next(l for l in json.load(open(HERE.parents[1] / "layouts/layouts.json"))["layouts"] if l["name"] == "ParcelMarsh_Layout")
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
# Heron's hut on the pond's west shore (door (17,4)): rows 1-4, x 16-19 of the
# grass pocket -- the General house (primary ids), door col 1 as in vanilla
HOUSE = [[8, 9, 9, 10], [16, 17, 17, 18], [24, 25, 11, 26], [32, 33, 19, 34]]
for j, row in enumerate(HOUSE):
    for i, mid in enumerate(row): put(10 + i, 1 + j, mid, 1, 0)
# ---- the drying river: rows 25-35 of the channel go to bed ------------------
RIM = {376, 377, 384, 385, 392, 393, 394, 400, 402, 410, 372, 614, 615}
for y in range(25, H):
    for x in range(W):
        if get(x, y) == 368:
            put(x, y, 265, 0, 3)                      # the bed
for x in range(W):                                    # one row of shallows where the water ends
    if get(x, 25) == 265: put(x, 25, 209, 0, 3)
for x, y in ((29, 27), (28, 29), (26, 30), (25, 31), (24, 33), (23, 34), (27, 26), (30, 26)):
    if get(x, y) == 265: put(x, y, 209, 0, 3)        # standing puddles
# gaps in the banks so the bed can be walked into from the grass
for x, y, mid in ((26, 27, 264), (32, 27, 266), (24, 30, 264), (28, 30, 266), (22, 32, 264), (26, 32, 266), (20, 34, 264), (25, 34, 266)):
    if get(x, y) in RIM: put(x, y, mid, 0, 3)
# ---- dead reed beds: bare earth in the swathes ---------------------------------
def blob(x0, y0, x1, y1, clip=1):
    """A bed of bare earth: a rectangle with its corners clipped, edged with the
    grass-lipped pieces by which neighbours are outside the bed."""
    cells = set()
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1):
            if get(x, y) not in (21, 520, 1, 14, 15, 23): continue
            dx = min(x - x0, x1 - x); dy = min(y - y0, y1 - y)
            if dx + dy < clip: continue
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
blob(8, 9, 11, 12); blob(13, 19, 17, 22); blob(26, 15, 29, 17); blob(33, 30, 36, 34); blob(8, 30, 12, 32)
# ---- the graded edge: a step down into the marsh along the east ---------------
for y in range(29, 36):
    put(34, y, 262, 0, 3)
# ---- write ------------------------------------------------------------------
import sys; sys.path.insert(0, str(HERE.parents[2] / "tools/skald")); import layout_fixes
layout_fixes.apply(HERE, words, W)                   # fixes.json: tile fixes that survive regeneration
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{len(raw)//2}H", raw)
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelMarsh: wrote {W}x{H} map.bin; {changed} tiles differ from the vanilla slice ({100*changed//(W*H)}%)")
