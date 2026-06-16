#!/usr/bin/env python3
"""Generate the River & Farmland (§01/§06 zone 4 -- Chapter 3 opener).

Upstream of the Floodbasin: a working river the player walks beside -- braided
clean reaches NW, a channelized straight cut centre, a broken beaver-dam oxbow
gone eutrophic east-centre, and farmland strip-crops east. Rebuilt on
gTileset_General + gTileset_leob_dewford to match the chain. 84x44.

Geometry (the bank network, the ford, the dam relic, the south seam to the
floodbasin, the north trail to the highlands) is preserved so every survey
point and NPC stays reachable.

Run from repo root: python3 tools/maptools/build_river.py
"""
import struct
from pathlib import Path

W, H = 84, 44

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
CROP = 4                        # strip-crop rows (flower beds, decorative)
SAND = 292                     # bank / track / "concrete" cut-banks
OCEAN = 368                    # the river (clean, elev 1)
DECK = 440                     # the broken beaver-dam ridge
TALL_GRASS = 13
TREES = 579                    # forest wall (blocked, elev 0)

OPEN_X0, OPEN_X1 = 33, 38      # walkable bank columns at the south edge


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        grid[y][x] = word(mid, col, elev)

    def water(x, y):
        put(x, y, OCEAN, col=0, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)
        for x in range(x0, x1):
            put(x, y1, SAND)              # walkable south shore lip

    def grass_patch(x0, x1, y0, y1, tile=TALL_GRASS):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- forest frame, with the walkable south opening --------------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 8:
                continue
            if x < 8 or x >= W - 8 or y < 8 or y >= H - 8:
                put(x, y, TREES, col=1, elev=0)
    for y in range(H - 8, H):
        for x in range(OPEN_X0, OPEN_X1):
            put(x, y, GRASS)
    for y in range(H - 8, H):
        for x in range(34, 37):
            put(x, y, SAND)

    # --- the river: a single channel down the west-centre -----------------
    pool(11, 19, 12, 16)                  # upper braided reach (clean)
    pool(17, 25, 14, 18)                  # mid braided reach
    pool(23, 30, 16, 20)                  # the reaches gather toward the cut
    for y in range(20, 35):               # channelized straight cut + banks
        for x in range(29, 33):
            water(x, y)
        put(28, y, SAND)                  # west cut-bank
        put(33, y, SAND)                  # east cut-bank
    for y in range(35, H):                # the mouth drains south
        for x in range(29, 33):
            water(x, y)
    for x in range(28, 34):               # a shallow FORD across the cut
        put(x, 31, SAND)

    # --- the broken beaver-dam oxbow (east-centre) ------------------------
    pool(45, 58, 12, 20)                  # the oxbow pond -- slack, eutrophic
    for x in range(48, 56):
        put(x, 14, DECK, col=1)           # the broken dam ridge (relic)

    # --- east-bank farmland: rectangular strip-crops ----------------------
    for row_y in (10, 14, 18, 22, 26, 30):
        for x in range(62, W - 9):
            for dy in range(2):
                put(x, row_y + dy, CROP)

    # --- a sand bank-track linking the entrance to every feature ----------
    for y in range(18, H - 8):
        put(35, y, SAND)
    for x in range(35, 62):
        put(x, 23, SAND)
    for x in range(34, 45):
        put(x, 17, SAND)
    for y in range(17, 24):
        put(44, y, SAND)
    for x in range(20, 35):
        put(x, 27, SAND)

    # --- tall grass (encounters, §06 state-keyed) -------------------------
    grass_patch(10, 18, 20, 26)
    grass_patch(38, 46, 26, 32)
    grass_patch(60, 68, 11, 16)
    grass_patch(60, 68, 28, 33)

    # --- north exit up to the Highlands (offset 0, x21-22) ----------------
    for y in range(0, 8):
        for x in range(21, 23):
            put(x, y, SAND)
    for y in range(14, 18):
        for x in range(21, 23):
            put(x, y, SAND)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelRiver")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
