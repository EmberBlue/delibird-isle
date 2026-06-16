#!/usr/bin/env python3
"""Generate the Mereholt Climate Station (the weather-division gauntlet).

A back-half optional challenge, on-theme for a climate game: Mereholt's
atmospheric-research division -- four climatologists who each model (and command)
a weather, and the Director who commands all four. A "gym" reframed as the
concern's intellectual arm: the hubris of "we can manage the climate," made into
a battle gauntlet. Clear the four divisions, then beat the Director for the
reward. Reached by ferry from the dock town once the Coastal cert is earned.

A walled compound: a central approach, four themed weather plots in the corners
(a rain pool, a sun garden, a sand pit, an ice plot), the Director's dais north.

48x40, frp_general + seafoam. No edge connection -- ferry warp in/out.

Run from repo root: python3 tools/maptools/build_weather.py
"""
import struct
from pathlib import Path

W, H = 48, 40

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
ENCOUNTER = 12
SAND = 261
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}

OPEN_X0, OPEN_X1 = 21, 27          # the south gate / dock


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, WATER, col=1, elev=1)
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    def patch(x0, x1, y0, y1, tile, col=0):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile, col)

    # --- compound wall (forest), south gate ---------------------------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 4:
                continue
            if x < 5 or x >= W - 5 or y < 4 or y >= H - 4:
                forest(x, y)
    for y in range(H - 4, H):                  # the dock / approach
        for x in range(22, 26):
            put(x, y, SAND)

    # --- the four weather plots (corners) -----------------------------------
    pool(8, 15, 25, 29)                        # RAIN -- a sampling pool (SW)
    patch(33, 40, 25, 30, FLOWERS)             # SUN -- a forcing garden (SE)
    patch(8, 15, 12, 17, SAND)                 # SAND -- an aridity pit (NW)
    patch(33, 40, 12, 17, SAND)                # ICE -- a frost plot (NE)
    # a few tufts so the plots read as worked ground
    for (px, py) in ((34, 13), (37, 15), (9, 13), (12, 15)):
        put(px, py, TUFT_A)

    # --- the Director's dais (north centre) ---------------------------------
    patch(20, 27, 7, 10, SAND)
    for x in range(21, 26):                     # a low rail behind the dais
        put(x, 6, PLANK_M, col=1)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelWeather")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
