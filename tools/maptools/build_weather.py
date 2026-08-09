#!/usr/bin/env python3
"""Generate the Mereholt Climate Station (the weather-division gauntlet).

A back-half optional challenge: four climatologists who each model (and command)
a weather, plus the Director who commands all four -- a "gym" reframed as the
concern's intellectual arm. A walled compound: a central approach, four themed
weather plots in the corners (a rain pool, a sun garden, a sand pit, a frost
plot), the Director's dais north. Rebuilt on gTileset_General +
gTileset_leob_dewford. 48x40. No edge connection -- ferry warp in/out.

Run from repo root: python3 tools/maptools/build_weather.py
"""
import struct
from pathlib import Path

W, H = 48, 40

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292
OCEAN = 368                     # the rain sampling pool (clean, elev 1)
DECK = 440  # general plank deck; its art was TOP-layer (covered sprites) until the tileset fix -- see general/metatiles.bin 440 (now COVERED: water bottom, planks middle)                      # the dais rail
TREES = 579                     # compound wall (blocked, elev 0)

OPEN_X0, OPEN_X1 = 21, 27          # the south gate / dock


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, OCEAN, col=0, elev=1)
        for x in range(x0, x1):
            put(x, y1, SAND)

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- compound wall (forest), south gate ---------------------------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 4:
                continue
            if x < 5 or x >= W - 5 or y < 4 or y >= H - 4:
                put(x, y, TREES, col=1, elev=0)
    for y in range(H - 4, H):                  # the dock / approach
        for x in range(22, 26):
            put(x, y, SAND)

    # --- the four weather plots (corners) -----------------------------------
    pool(8, 15, 25, 29)                        # RAIN -- a sampling pool (SW)
    patch(33, 40, 25, 30, FLOWERS)             # SUN -- a forcing garden (SE)
    patch(8, 15, 12, 17, SAND)                 # SAND -- an aridity pit (NW)
    patch(33, 40, 12, 17, SAND)                # FROST -- a frost plot (NE)

    # --- the Director's dais (north centre) ---------------------------------
    patch(20, 27, 7, 10, SAND)
    for x in range(21, 26):                     # a low rail behind the dais
        put(x, 6, DECK, col=1)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelWeather")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
