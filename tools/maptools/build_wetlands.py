#!/usr/bin/env python3
"""Generate the wetlands edge (§08 Act IV) north of the station.

Where the forest gives way to wetland: wet meadow, shallow pools, mud flats,
and a small fishing-dock settlement on a backwater. Harland's grievance,
Dorsey's half-truths, and the Poisoned Waters event stage here. Rebuilt on
gTileset_General + gTileset_leob_dewford to match the station/bridge (clean
water, real plank dock) instead of the old seafoam grid. 50x44.

Geometry is preserved (forest frame, south corridor to the station, east
corridor to the Old Service Cut, the dock + footbridge causeway) so the 9
object events, the poison cutscene, and the connections still line up.

Run from repo root: python3 tools/maptools/build_wetlands.py
"""
import struct
from pathlib import Path

W, H = 50, 44

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292                       # mud flat / packed track / settlement ground
OCEAN = 368                      # backwater / pools (clean, elev 1)
DECK = 440  # general plank deck; its art was TOP-layer (covered sprites) until the tileset fix -- see general/metatiles.bin 440 (now COVERED: water bottom, planks middle)                       # dock + footbridge planks
TALL_GRASS = 13                  # reed beds (wild encounters)
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
            put(x, y1, SAND)             # walkable shore lip

    # forest frame, with the south corridor back to the station (x24-26)
    # and the east corridor to the Old Service Cut (rows 20-22)
    for y in range(H):
        for x in range(W):
            if 23 <= x <= 27 and y >= H - 8:
                continue
            if x >= W - 8 and 19 <= y <= 23:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                put(x, y, TREES, col=1, elev=0)
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

    # wet meadow texture: scattered flowers
    for y in range(8, H - 8):
        for x in range(8, W - 8):
            if (x * 13 + y * 5) % 37 == 19:
                put(x, y, FLOWERS)
    pool(10, 16, 10, 13)             # reed pool NW (disturbed reeds clue)
    pool(13, 18, 22, 25)             # mid pool
    for y in range(27, 32):          # mud flat SW (crate imprint clue)
        for x in range(9, 18):
            put(x, y, SAND)

    # tall reed-grass (wild encounters; the amphibian guild lives here)
    for (x0, x1, y0, y1) in ((9, 17, 14, 21), (18, 24, 25, 30), (28, 34, 32, 36)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, TALL_GRASS)

    # the backwater: large pool east with the fishing dock + footbridge
    pool(32, 42, 12, 24)
    for y in range(14, 25):          # dock planks from the settlement edge
        for x in range(34, 37):      # out into the backwater
            put(x, y, DECK)
    for x in range(37, 42):          # a footbridge east across the backwater to
        for y in range(20, 23):      # the corridor landing -- without this the
            put(x, y, DECK)          # east exit is unreachable (a §08 soft-lock)
    for x in range(38, 40):          # and a plank ramp straight down to the
        put(x, 23, DECK)             # settlement ground, so the through-route to
        put(x, 24, DECK)             # the exit is a wide, obvious causeway
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
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
