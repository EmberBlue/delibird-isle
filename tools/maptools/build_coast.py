#!/usr/bin/env python3
"""Generate the Industrial Coast (§01/§06 zone 7 -- Chapter 6, the endgame ramp).

The extraction economy made physical: a working harbour. The cannery and the
Mereholt Coastal office on the land; the docks and Harland's boat along the
shore; the overfished sea to the east. No mask left to speak of -- the scale
speaks for itself. The coast reads COLLAPSING: a live trophic cascade
(overfishing's mesopredator release), and a dredge scar that won't come back.

This is where Harland's arc comes home (his boat note is Mereholt's), and where
the notebook's marginalia decode -- Dr. Heron's methods are inside the Board's
"sustainable harvest" models. The mentor was not silenced. She is cited.

64x44, frp_general + seafoam. No edge connection -- ferry warp in/out from the
dock town (the captain runs the coast route once the Highlands are behind you).

Run from repo root: python3 tools/maptools/build_coast.py
"""
import struct
from pathlib import Path

W, H = 64, 44

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5                         # crates / net-piles on the docks
ENCOUNTER = 12
SAND = 261                       # the docks / waterfront / quay
SHORE_A, SHORE_B = 256, 257
WATER = 282
PLANK_L, PLANK_M, PLANK_R = 313, 314, 315
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}

SHORE_X = 44                     # east of this: the open sea


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

    def building(x0, y0, w, h, door_dx):
        for y in range(y0, y0 + h):
            for x in range(x0, x0 + w):
                put(x, y, PLANK_M, col=1)
        put(x0 + door_dx, y0 + h, SAND)         # the walkable threshold

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- the sea (east) + the land frame (west/north/south) -----------------
    for y in range(H):
        for x in range(SHORE_X, W):
            water(x, y)
    for x in range(SHORE_X - 2, SHORE_X):       # the quay edge / shore lip
        for y in range(H):
            put(x, y, SHORE_A if y % 2 == 0 else SHORE_B, col=1)
    for y in range(H):
        for x in range(W):
            if x < 5 or y < 3 or y >= H - 3:
                if x < SHORE_X:
                    forest(x, y)

    # --- the waterfront quay (walkable sand along the shore) ----------------
    patch(38, SHORE_X - 2, 3, H - 3, SAND)

    # --- the industrial buildings -------------------------------------------
    building(9, 8, 11, 7, 5)        # the CANNERY (north-west)
    building(9, 27, 8, 5, 4)        # the MEREHOLT COASTAL office (south-west)

    # --- Harland's boat, moored at the quay ---------------------------------
    for y in range(18, 21):         # the hull, out on the water
        put(SHORE_X, y, PLANK_M, col=1); put(SHORE_X + 1, y, PLANK_M, col=1)
    put(SHORE_X + 2, 19, PLANK_R, col=1)

    # --- the arrival dock (south quay; the ferry pulls in here) --------------
    patch(36, 42, H - 6, H - 3, SAND)

    # --- crates and net-piles on the docks (cover, not walls) ---------------
    for (cx, cy) in ((36, 10), (41, 13), (37, 24), (40, 30), (35, 16), (39, 35)):
        put(cx, cy, BUSH, col=1)

    # --- a little harbour scrub the rats and gulls work (land encounters) ---
    patch(22, 30, 33, 38, ENCOUNTER)
    patch(24, 32, 5, 9, ENCOUNTER)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelCoast")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(struct.pack("<4H", word(WATER, 1, 1), word(WATER, 1, 1),
                                                 word(WATER, 1, 1), word(WATER, 1, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (sea)")


if __name__ == "__main__":
    main()
