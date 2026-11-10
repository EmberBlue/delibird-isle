#!/usr/bin/env python3
"""ParcelWeather -- the MEREHOLT CLIMATE STATION grounds (zone 7's gym). Base: a
slice of vanilla Route 119 around the Weather Institute (base.bin). This script
is the map source: run it to regenerate map.bin.

The remix (2026-11-09): a research compound, not a route. The sand trail is a
gravel service road; the ground in front of the institute is a gravelled yard
with a fence; the east strip is the station's test plots -- alternating bare
beds and grass, fenced off from the wood, with instrument stakes in them. The
river and its weirs stay (the station gauges them). Every event stays put.
Ids: 265 gravel (256-258/264/266/272-274 its grass-lipped edges), 320 a fence
post (vertical run), 312/313/314 a horizontal run, 21 tall grass."""
import struct
from pathlib import Path
HERE = Path(__file__).resolve().parent
raw = (HERE / "base.bin").read_bytes()
words = list(struct.unpack(f"<{len(raw)//2}H", raw))
import json
lay = next(l for l in json.load(open(HERE.parents[1] / "layouts/layouts.json"))["layouts"] if l["name"] == "ParcelWeather_Layout")
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
GRAVEL = {280: 256, 281: 257, 282: 258, 288: 264, 289: 265, 290: 266, 296: 272, 297: 273, 298: 274}
for y in range(H):                                   # the sand trail becomes the service road
    for x in range(W):
        if get(x, y) in GRAVEL: put(x, y, GRAVEL[get(x, y)], 0, 3)
for y in range(32, 36):                              # the yard in front of the institute
    for x in range(3, 31):
        if get(x, y) == 1: put(x, y, 265, 0, 3)
for x in range(12, 23):                              # a fence between the yard and the plots' road
    if get(x, 33) == 265: put(x, 33, 313 if x not in (12, 22) else (312 if x == 12 else 314), 1, 0)
put(17, 33, 265, 0, 3)                               # the gate in it
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
blob(34, 10, 34, 13); blob(34, 16, 35, 18); blob(31, 21, 34, 22); blob(31, 24, 33, 25)   # the test plots, alternating with grass
for y in range(11, 19):                              # the fence between the plots and the wood
    if get(32, y) in (199, 198, 15): put(32, y, 320, 1, 0)
for x, y in ((36, 10), (38, 6), (35, 15), (33, 19), (37, 23)):   # instrument stakes
    if get(x, y) in (1, 14, 15): put(x, y, 320, 1, 0)
# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
base = struct.unpack(f"<{len(raw)//2}H", raw)
changed = sum(1 for a, b in zip(base, words) if (a & 0x3FF) != (b & 0x3FF))
print(f"ParcelWeather: wrote {W}x{H} map.bin; {changed} tiles differ from the vanilla slice ({100*changed//(W*H)}%)")
