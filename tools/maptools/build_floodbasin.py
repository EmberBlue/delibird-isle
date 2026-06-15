#!/usr/bin/env python3
"""Generate the Floodbasin (§01/§06 zone 3 — Chapter 2 opener).

The wetlands are sick. Wide, low, flood-pulse: reed flats and shallow pools
that should be teeming with the amphibian guild, broken by the contamination
plume bleeding in from a culvert at the north edge. A small remediation
site (the mask -- a Foundation outreach booth) sits beside the discharge.
The decline is decades old and the cleanup is decades behind.

72x44, frp_general + seafoam. Connects south to ParcelCorridor (rows 8-10
here = corridor rows 9-11, offset 4).

Run from repo root: python3 tools/maptools/build_floodbasin.py
"""
import struct
from pathlib import Path

W, H = 72, 44

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
SAND = 261
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

    # --- forest frame with the south corridor (x 4-9; offset 4 over corridor)
    for y in range(H):
        for x in range(W):
            if 4 <= x <= 9 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                forest(x, y)
    for y in range(H - 8, H):
        for x in range(4, 10):
            put(x, y, GRASS)
    for y in range(H - 8, H):
        for x in range(5, 9):
            put(x, y, SAND)

    # --- reed flats: heavy tufts pattern across the whole basin ------------
    for y in range(8, H - 8):
        for x in range(8, W - 8):
            r = (x * 11 + y * 7) % 23
            if r in (0, 11):
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)
            elif r == 6:
                put(x, y, FLOWERS)
            elif r == 17 and y < H - 12:
                put(x, y, BUSH, col=1)

    # --- pools and channels: the wetland's water (where amphibians live) ---
    pool(14, 22, 12, 18)        # north-west pool (clue: deformed Wooper)
    pool(28, 38, 14, 19)        # main central pool (the plume hits here)
    pool(46, 58, 16, 22)        # east pool
    pool(24, 30, 26, 31)        # mid-south pool
    pool(38, 46, 28, 33)        # south-east pool
    pool(12, 18, 30, 34)        # south-west pool

    # --- the contamination plume: a visible discharge from the north -------
    # A culvert pipe and a thin band of stained water flowing south into the
    # main pool. The pipe sits at (33, 9) at the forest edge.
    for y in range(9, 14):
        put(33, y, WATER, col=1, elev=1)   # the plume channel
        put(34, y, WATER, col=1, elev=1)
    put(33, 8, SAND)                       # pipe head: bare ground apron
    put(34, 8, SAND)

    # --- track + Foundation outreach booth at the discharge ---------------
    # The mask sits next to the harm: a small booth and a track from the south
    # corridor up to it.
    for y in range(H - 8, 22):
        put(7, y, SAND)
    for x in range(7, 30):
        put(x, 22, SAND)
    # booth (3x2 plank shed) just east of the plume
    for y in range(20, 22):
        for x in range(36, 39):
            put(x, y, PLANK_M, col=1)
    put(37, 22, SAND)                      # door (walkable approach)

    # --- tall grass (wild encounters, §06 amphibian guild + bioaccumulation)
    for (x0, x1, y0, y1) in ((12, 18, 22, 28), (40, 50, 24, 30),
                              (22, 30, 33, 37), (50, 60, 30, 36)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, 12)

    # --- north trail up to the River (Chapter 3 connection; offset 0, x34-36)
    # A bank track carved through the north forest, beside the discharge plume:
    # the player follows the channel upstream to find where the sickness starts.
    for y in range(0, 9):
        for x in range(34, 37):
            put(x, y, GRASS)
    for y in range(9, 14):
        for x in range(35, 37):
            put(x, y, GRASS)       # stay clear of the plume (x33-34) on the way down

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelFloodbasin")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
