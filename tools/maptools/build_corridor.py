#!/usr/bin/env python3
"""Generate the Old Service Cut / Hollowbend Spur (§08 Act V).

The corridor that shrank: a long, quiet route where the forest thins
unnaturally -- old stumps, sharp drainage cuts, a cracked service road half-
reclaimed by weeds -- ending at the culvert that forced a braided stream
into a single fast channel. Observe only. 70x20, frp_general + seafoam.
Connects west to ParcelWetlands (corridor rows 9-11, offset 11).

Run from repo root: python3 tools/maptools/build_corridor.py
"""
import struct
from pathlib import Path

W, H = 70, 20

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    # north/south forest walls -- dense at the west, visibly thinning east
    for y in range(0, 6):
        for x in range(W):
            if x < 20 or (x < 44 and (x * 7 + y * 3) % 9 < 5) or (x >= 44 and (x * 7 + y * 3) % 9 < 2):
                forest(x, y)
    for y in range(14, H):
        for x in range(W):
            if x < 20 or (x < 44 and (x * 5 + y * 3) % 9 < 5) or (x >= 44 and (x * 5 + y * 3) % 9 < 2):
                forest(x, y)
    # west entry frame except the corridor (rows 9-11)
    for y in range(H):
        for x in range(0, 8):
            if not (8 <= y <= 12):
                forest(x, y)
    for y in range(8, 13):
        for x in range(0, 8):
            put(x, y, GRASS)

    # the old service road: cracked, half-reclaimed (sand with weed gaps)
    for x in range(0, 64):
        for y in (9, 10, 11):
            if (x * 3 + y) % 11 == 0:
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)   # weeds in the cracks
            else:
                put(x, y, SAND)

    # drainage cuts: sharp little channels slicing south
    for (cx) in (26, 36):
        for y in range(12, 16):
            put(cx, y, WATER, col=1, elev=1)
        put(cx, 16, SHORE_A if cx % 2 == 0 else SHORE_B, col=1)

    # weed bushes scattered in the thinned stretches
    for x in range(22, 62):
        for y in range(6, 14):
            if (x * 13 + y * 7) % 53 == 0 and y not in (9, 10, 11):
                put(x, y, BUSH, col=1)

    # the braided stream, forced into one channel: a wide water band that
    # narrows to a single fast gap under the road embankment (the culvert)
    for y in range(0, H):
        for x in range(64, 68):
            put(x, y, WATER, col=1, elev=1)
    # the embankment carries the road over the culvert
    for x in range(64, 68):
        put(x, 9, SAND)
        put(x, 10, SAND)
        put(x, 11, SAND)
    # the single fast channel visible below the road
    put(65, 12, WATER, col=1, elev=1)
    put(66, 12, WATER, col=1, elev=1)
    # far bank: a sliver of grass on the east edge (the excluded side)
    for y in range(0, H):
        put(68, y, GRASS, col=1)
        put(69, y, GRASS, col=1)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelCorridor")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
