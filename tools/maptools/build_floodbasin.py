#!/usr/bin/env python3
"""Generate the Floodbasin (§01/§06 zone 3 -- Chapter 2 opener).

Wide, low, flood-pulse wetlands gone sick: reed flats and shallow pools broken
by a contamination plume bleeding in from a culvert at the north edge, with a
Foundation outreach booth sitting beside the discharge. Rebuilt on
gTileset_General + gTileset_leob_dewford to match the chain. 72x44.

Geometry preserved (south corridor from the cut, the pools, the plume + pipe,
the booth, the north trail up to the river) so events + connections line up.

Run from repo root: python3 tools/maptools/build_floodbasin.py
"""
import struct
from pathlib import Path

W, H = 72, 44

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292
OCEAN = 368                      # pools / channels / the plume (clean, elev 1)
DECK = 440  # general plank deck; its art was TOP-layer (covered sprites) until the tileset fix -- see general/metatiles.bin 440 (now COVERED: water bottom, planks middle)                       # the outreach booth shed
TALL_GRASS = 13
TREES = 579                      # forest wall (blocked, elev 0)


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, OCEAN, col=0, elev=1)
        for x in range(x0, x1):
            put(x, y1, SAND)

    # --- forest frame with the south corridor (x4-9; offset 4 over corridor)
    for y in range(H):
        for x in range(W):
            if 4 <= x <= 9 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                put(x, y, TREES, col=1, elev=0)
    for y in range(H - 8, H):
        for x in range(4, 10):
            put(x, y, GRASS)
    for y in range(H - 8, H):
        for x in range(5, 9):
            put(x, y, SAND)

    # --- reed flats: sparse flowers across the basin -----------------------
    for y in range(8, H - 8):
        for x in range(8, W - 8):
            if (x * 11 + y * 7) % 23 == 6:
                put(x, y, FLOWERS)

    # --- pools and channels (where the amphibian guild lives) --------------
    pool(14, 22, 12, 18)        # north-west pool (clue: deformed Wooper)
    pool(28, 38, 14, 19)        # main central pool (the plume hits here)
    pool(46, 58, 16, 22)        # east pool
    pool(24, 30, 26, 31)        # mid-south pool
    pool(38, 46, 28, 33)        # south-east pool
    pool(12, 18, 30, 34)        # south-west pool

    # --- the contamination plume: a discharge channel from the north culvert
    for y in range(9, 14):
        put(33, y, OCEAN, col=0, elev=1)
        put(34, y, OCEAN, col=0, elev=1)
    put(33, 8, SAND)            # pipe head: bare ground apron
    put(34, 8, SAND)

    # --- track + Foundation outreach booth at the discharge ----------------
    for y in range(H - 8, 22):
        put(7, y, SAND)
    for x in range(7, 30):
        put(x, 22, SAND)
    for y in range(20, 22):    # booth (3x2 shed) just east of the plume
        for x in range(36, 39):
            put(x, y, DECK, col=1)
    put(37, 22, SAND)          # door (walkable approach)

    # --- tall grass (wild encounters, §06 amphibian guild) -----------------
    for (x0, x1, y0, y1) in ((12, 18, 22, 28), (40, 50, 24, 30),
                              (22, 30, 33, 37), (50, 60, 30, 36)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, TALL_GRASS)

    # --- north trail up to the River (offset 0, x34-36) --------------------
    for y in range(0, 9):
        for x in range(34, 37):
            put(x, y, GRASS)
    for y in range(9, 14):
        for x in range(35, 37):
            put(x, y, GRASS)   # stay clear of the plume (x33-34) on the way down

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelFloodbasin")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
