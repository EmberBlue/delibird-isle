#!/usr/bin/env python3
"""Generate the Crystal Cavern (§09 Delibird Isle side-area; the ranger-tools demo).

The cold refuge -- an ice grotto under the summit, reached from the Delibird
Isle peak. Demonstrates the LAMP (Flash) gate and the WINCH (Strength) ice-jam,
reframed from HMs with no soft-lock. Rebuilt on gTileset_General +
gTileset_Cave (a real cave: rock floor + walls, frozen pools) instead of the
old sand-and-trees placeholder. 40x36. No edge connection -- warp in/out from
ParcelDelibird's peak.

Run from repo root: python3 tools/maptools/build_cavern.py
"""
import struct
from pathlib import Path

W, H = 40, 36

# gTileset_General primary (shared) + gTileset_Cave secondary
FLOOR = 513                      # cave floor (walkable, non-slip)
WALL = 529                       # cave wall (blocked, elev 0)
CRYSTAL = 537                    # ice-crystal cluster (blocked)
OCEAN = 368                      # frozen seep pools (elev 1)
LICHEN = 13                      # frost growth (wild encounters)

OPEN_X0, OPEN_X1 = 17, 22        # the south mouth


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(FLOOR) for _ in range(W)] for _ in range(H)]   # rock floor

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, OCEAN, col=0, elev=1)

    # --- the cavern walls, with the south mouth ----------------------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 4:
                continue
            if x < 5 or x >= W - 5 or y < 4 or y >= H - 4:
                put(x, y, WALL, col=1, elev=0)
    for y in range(H - 4, H):
        for x in range(18, 21):
            put(x, y, FLOOR)

    # --- the deep pool at the heart (the last true cold) -------------------
    pool(14, 25, 9, 15)
    pool(7, 11, 22, 26)            # frozen seeps elsewhere
    pool(29, 34, 20, 25)

    # --- ice crystals (impassable clusters, scenery) -----------------------
    for (cx, cy) in ((9, 7), (30, 7), (12, 18), (27, 13), (33, 16),
                     (8, 14), (31, 28), (11, 27), (24, 26)):
        put(cx, cy, CRYSTAL, col=1, elev=0)

    # --- frost growth (the cavern's thin wild guild) -----------------------
    for (x0, x1, y0, y1) in ((7, 13, 15, 20), (26, 33, 9, 14)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, LICHEN)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelCavern")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", *([word(WALL, col=1, elev=0)] * 4)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (rock)")


if __name__ == "__main__":
    main()
