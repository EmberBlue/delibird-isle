#!/usr/bin/env python3
"""Generate the Highlands (§01/§06 zone 5 -- Chapter 4 opener).

The climb out of the river valley into the permafrost edge -- and the first
place that reads SHIFTED. The tonal turn: the damage here is one-way.

The map is a vertical ascent (you enter at the bottom, climb to a dead-end
headwall at the top -- "no higher left"):

  * lower (south)  -- green foothill tundra, the treeline
  * middle         -- bare pale scree where the forest thins; THERMOKARST melt
                      ponds and slumping ground; a DRUNKEN forest of trees
                      tilted by the thawing soil; the "EXPLORATORY ONLY" drill
  * upper (north)  -- the compression band where the cold-specialists are
                      pushed until they run out of mountain; the summit, where
                      the survey reads what cannot be unread

Lowland generalists (Zigzagoon) have climbed into the gap; the cold guild is
gone from everywhere but the last high refuge. Keystone (the frozen ground)
absent -> SHIFTED. The certification it teaches is witness, not repair.

64x56, frp_general + seafoam. Connects down to ParcelRiver (south opening at
x21-22, offset 0 -- the river's headwater trail).

Run from repo root: python3 tools/maptools/build_highlands.py
"""
import struct
from pathlib import Path

W, H = 64, 56

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5
ENCOUNTER = 12
SAND = 261                     # the pale frost-ground / scree above the treeline
SHORE_A, SHORE_B = 256, 257
WATER = 282                    # thermokarst melt ponds
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}

OPEN_X0, OPEN_X1 = 21, 23      # the south seam (matches ParcelRiver's north exit)
TREELINE = 36                  # below this y: green tundra; above: bare scree


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def forest(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def water(x, y):
        put(x, y, WATER, col=1, elev=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                water(x, y)
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

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

    # --- altitude base: green foothills below the treeline, scree above -------
    for y in range(4, TREELINE):
        for x in range(6, W - 6):
            put(x, y, SAND)

    # --- frame: forest sides + bottom treeline (south opening) + top headwall -
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 4:
                continue
            if x < 6 or x >= W - 6 or y < 4 or y >= H - 4:
                forest(x, y)
    for y in range(H - 4, H):                   # the seam: a walkable bank
        for x in range(OPEN_X0, OPEN_X1):
            put(x, y, SAND)

    # --- the winding climb (visual guide; the scree is walkable throughout) ---
    track(21, 52, 22, 45)
    track(21, 44, 41, 45)
    track(40, 44, 41, 30)
    track(18, 30, 41, 31)
    track(17, 16, 18, 30)
    track(17, 8, 33, 9)

    # --- thermokarst: melt ponds where the frozen ground has let go ----------
    pool(27, 33, 45, 49)        # a foothill melt pond (slumping ground beside)
    pool(43, 49, 22, 26)        # a scree melt pond
    pool(11, 16, 18, 22)        # high melt pond near the compression band

    # --- the drunken forest: trees tilted/stranded by the thaw (sparse) ------
    for (tx, ty) in ((42, 34), (45, 36), (47, 33), (44, 38), (48, 37),
                     (41, 37), (46, 40), (43, 41)):
        forest(tx, ty)          # isolated leaning relicts, not a stand

    # --- the "exploratory" drill rig (the §05 mask) --------------------------
    for y in range(26, 29):
        for x in range(40, 43):
            put(x, y, PLANK_M, col=1)
    put(41, 29, SAND)           # the rig's walkable apron (sign + Hollis stand here)

    # --- tall grass: the cold refuge (low, scarce) + lowlanders upslope ------
    patch(9, 15, 44, 50, ENCOUNTER)     # foothill refuge -- where the cold held
    patch(45, 53, 14, 20, ENCOUNTER)    # high scree -- generalists climbed in
    patch(24, 31, 21, 27, ENCOUNTER)    # mid scree -- the gap filling

    # --- a little hardy growth in the green foothills (life, thinning) -------
    for y in range(TREELINE, H - 4):
        for x in range(6, W - 6):
            r = (x * 7 + y * 5) % 19
            if r == 0:
                put(x, y, TUFT_A if (x + y) % 2 else TUFT_B)
            elif r == 9:
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
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (forest)")


if __name__ == "__main__":
    main()
