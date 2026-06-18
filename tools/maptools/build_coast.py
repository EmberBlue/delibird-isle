#!/usr/bin/env python3
"""Generate the Industrial Coast (§01/§06 zone 7 -- Chapter 6, the endgame ramp).

A working harbour: the cannery and the Mereholt Coastal office on the land, the
docks and Harland's boat along the shore, the overfished sea to the east.
Reads COLLAPSING. Rebuilt on gTileset_General + gTileset_leob_dewford (clean
sea, plank docks/warehouses). 64x44. No edge connection -- ferry warp in/out.

Run from repo root: python3 tools/maptools/build_coast.py
"""
import struct
from pathlib import Path

W, H = 64, 44

# gTileset_General primary (shared) + gTileset_leob_dewford secondary
GRASS = 1
FLOWERS = 4
SAND = 292                       # the docks / waterfront / quay
OCEAN = 368                      # the overfished sea (clean, elev 1)
DECK = 440                       # docks, warehouses, the boat
TALL_GRASS = 13
TREES = 579                      # land frame (blocked, elev 0)

SHORE_X = 44                     # east of this: the open sea


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(GRASS) for _ in range(W)] for _ in range(H)]

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def water(x, y):
        put(x, y, OCEAN, col=0, elev=1)

    def building(x0, y0, w, h, door_dx):
        for y in range(y0, y0 + h):
            for x in range(x0, x0 + w):
                put(x, y, DECK, col=1)
        put(x0 + door_dx, y0 + h, SAND)         # the walkable threshold

    def patch(x0, x1, y0, y1, tile):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, tile)

    # --- the sea (east) + the land frame (west/north/south) -----------------
    for y in range(H):
        for x in range(SHORE_X, W):
            water(x, y)
    for x in range(SHORE_X - 2, SHORE_X):       # the quay edge (walkable sand)
        for y in range(H):
            put(x, y, SAND)
    for y in range(H):
        for x in range(W):
            if x < 5 or y < 3 or y >= H - 3:
                if x < SHORE_X:
                    put(x, y, TREES, col=1, elev=0)

    # --- the waterfront quay (walkable sand along the shore) ----------------
    patch(38, SHORE_X - 2, 3, H - 3, SAND)

    # --- the industrial buildings -------------------------------------------
    building(9, 8, 11, 7, 5)        # the CANNERY (north-west)
    building(9, 27, 8, 5, 4)        # the MEREHOLT COASTAL office (south-west)

    # --- Harland's boat, moored at the quay ---------------------------------
    for y in range(18, 21):
        put(SHORE_X, y, DECK, col=1); put(SHORE_X + 1, y, DECK, col=1)
    put(SHORE_X + 2, 19, DECK, col=1)

    # --- the arrival dock (south quay; the ferry pulls in here) --------------
    patch(36, 42, H - 6, H - 3, SAND)

    # --- crates and net-piles on the docks (cover, not walls) ---------------
    for (cx, cy) in ((36, 10), (41, 13), (37, 24), (40, 30), (35, 16), (39, 35)):
        put(cx, cy, DECK, col=1)

    # --- a little harbour scrub the rats and gulls work (land encounters) ---
    patch(22, 30, 33, 38, TALL_GRASS)
    patch(24, 32, 5, 9, TALL_GRASS)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelCoast")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(OCEAN, col=0, elev=1)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (sea)")


if __name__ == "__main__":
    main()
