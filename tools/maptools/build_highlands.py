#!/usr/bin/env python3
"""Generate the Highlands (§01/§06 zone 5 -- Chapter 4 opener).

The climb out of the river valley into the permafrost edge -- green foothills
below the treeline, bare pale scree above with thermokarst melt ponds, a
drunken forest of thaw-tilted trees, and the "exploratory" drill rig. The
first place that reads SHIFTED. Rebuilt on gTileset_General +
gTileset_leob_dewford to match the chain. 64x56.

Geometry (the vertical climb, the south seam to the river, the melt ponds, the
rig, the refuge grass) is preserved so events + the connection line up.

Run from repo root: python3 tools/maptools/build_highlands.py
"""
import struct
from pathlib import Path

W, H = 64, 56

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292                      # the pale frost-ground / scree above the treeline
OCEAN = 368                     # thermokarst melt ponds (elev 1)
DECK = 440                      # the drill rig
TALL_GRASS = 13
TREES = 579                     # forest wall (blocked, elev 0)

OPEN_X0, OPEN_X1 = 21, 23       # the south seam (matches ParcelRiver's north exit)
TREELINE = 36                   # below this y: green tundra; above: bare scree


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def water(x, y):
        put(x, y, OCEAN, col=0, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)
        for x in range(x0, x1):
            put(x, y1, SAND)

    def track(x0, y0, x1, y1):                 # a 2-wide scree path
        if x0 == x1:
            for y in range(min(y0, y1), max(y0, y1) + 1):
                put(x0, y, SAND); put(x0 + 1, y, SAND)
        else:
            for x in range(min(x0, x1), max(x0, x1) + 1):
                put(x, y0, SAND); put(x, y0 + 1, SAND)

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- altitude base: scree above the treeline ---------------------------
    for y in range(4, TREELINE):
        for x in range(6, W - 6):
            put(x, y, SAND)

    # --- frame: forest sides + bottom treeline (south opening) + top headwall
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 4:
                continue
            if x < 6 or x >= W - 6 or y < 4 or y >= H - 4:
                put(x, y, TREES, col=1, elev=0)
    for y in range(H - 4, H):                   # the seam: a walkable bank
        for x in range(OPEN_X0, OPEN_X1):
            put(x, y, SAND)

    # --- the winding climb (visual guide; the scree is walkable throughout) -
    track(21, 52, 22, 45)
    track(21, 44, 41, 45)
    track(40, 44, 41, 30)
    track(18, 30, 41, 31)
    track(17, 16, 18, 30)
    track(17, 8, 33, 9)

    # --- thermokarst: melt ponds where the frozen ground has let go --------
    pool(27, 33, 45, 49)
    pool(43, 49, 22, 26)
    pool(11, 16, 18, 22)

    # --- the drunken forest: trees tilted/stranded by the thaw (sparse) ----
    for (tx, ty) in ((42, 34), (45, 36), (47, 33), (44, 38), (48, 37),
                     (41, 37), (46, 40), (43, 41)):
        put(tx, ty, TREES, col=1, elev=0)

    # --- the "exploratory" drill rig (the §05 mask) ------------------------
    for y in range(26, 29):
        for x in range(40, 43):
            put(x, y, DECK, col=1)
    put(41, 29, SAND)           # the rig's walkable apron

    # --- tall grass: the cold refuge (low, scarce) + lowlanders upslope ----
    patch(9, 15, 44, 50, TALL_GRASS)     # foothill refuge -- where the cold held
    patch(45, 53, 14, 20, TALL_GRASS)    # high scree -- generalists climbed in
    patch(24, 31, 21, 27, TALL_GRASS)    # mid scree -- the gap filling

    # --- a little hardy growth in the green foothills (life, thinning) -----
    for y in range(TREELINE, H - 4):
        for x in range(6, W - 6):
            if (x * 7 + y * 5) % 19 == 9:
                put(x, y, FLOWERS)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelHighlands")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(TREES, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
