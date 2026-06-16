#!/usr/bin/env python3
"""Generate the wetlands edge (§08 Act IV) north of the station.

Where the forest gives way to wetland: wet meadow, shallow pools, mud
flats, and a small fishing-dock settlement on a backwater. Harland's
grievance, Dorsey's polished half-truths, and the Poisoned Waters event
all stage here. 50x44, frp_general + seafoam. Connects south to
ParcelStation (corridors at x24-26, offset 0).

Run from repo root: python3 tools/maptools/build_wetlands.py
"""
import struct
from pathlib import Path

W, H = 50, 44

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
SAND = 261                       # reads as mud flat / packed track here
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, WATER, col=1, elev=1)
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    # forest frame, with the south corridor back to the station (x24-26)
    # and the east corridor to the Old Service Cut (rows 20-22)
    for y in range(H):
        for x in range(W):
            if 23 <= x <= 27 and y >= H - 8:
                continue
            if x >= W - 8 and 19 <= y <= 23:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                forest(x, y)
    for y in range(19, 24):
        for x in range(W - 8, W):
            put(x, y, GRASS)
    for y in range(20, 23):
        for x in range(W - 8, W):
            put(x, y, SAND)
    for y in range(H - 8, H):
        for x in range(23, 28):
            put(x, y, GRASS)
    for y in range(H - 8, H):
        for x in range(24, 27):
            put(x, y, SAND)

    # wet meadow texture: heavy tufts, scattered reed-pools, mud flats
    for y in range(8, H - 8):
        for x in range(8, W - 8):
            r = (x * 13 + y * 5) % 37
            if r == 0:
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)
            elif r == 19:
                put(x, y, FLOWERS)
    pool(10, 16, 10, 13)             # reed pool NW (disturbed reeds clue)
    pool(13, 18, 22, 25)             # mid pool
    for y in range(27, 32):          # mud flat SW (crate imprint clue)
        for x in range(9, 18):
            put(x, y, SAND)

    # the backwater: large pool east with the fishing dock    # tall reed-grass (wild encounters; the amphibian guild lives here)
    for (x0, x1, y0, y1) in ((9, 17, 14, 21), (18, 24, 25, 30), (28, 34, 32, 36)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, 12)


    pool(32, 42, 12, 24)
    for y in range(14, 25):          # dock planks from the settlement edge
        put(34, y, PLANK_L)          # out into the backwater
        put(35, y, PLANK_M)
        put(36, y, PLANK_R)
    for x in range(37, 42):          # a footbridge east across the backwater to
        for y in range(20, 23):      # the corridor landing -- without this the
            put(x, y, PLANK_M)       # east exit is unreachable (a §08 soft-lock)
    for x in range(38, 40):          # and a plank ramp straight down to the
        put(x, 23, PLANK_M)          # settlement ground, so the through-route to
        put(x, 24, PLANK_M)          # the exit is a wide, obvious causeway and
        # not a one-tile turn lost in the wetland fog (a §08 playtest snag).
    for x in range(30, 42):          # settlement ground south of the water
        for y in range(25, 31):
            put(x, y, SAND)

    # track: from the south corridor up and around to the settlement
    for y in range(20, 36):
        put(25, y, SAND)
    for x in range(25, 34):
        put(x, 28, SAND)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelWetlands")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
