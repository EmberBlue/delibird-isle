#!/usr/bin/env python3
"""Generate the Crystal Cavern (§09 Delibird Isle side-area; the ranger-tools demo).

The cold refuge -- the deepest cold the warming island has left (§09). An ice
grotto under the summit, reached from the Delibird Isle peak. It demonstrates
both Ranger field-kit tools, reframed from HMs with no Pokemon move and no
soft-lock:
  * the LAMP (Flash) gates the entrance -- too dark to enter without it
    (the gate lives on the Delibird Isle side, scripted);
  * the WINCH (Strength) clears a fallen ice-jam to a reward inside.

Inside: rarer Ice encounters, a quiet beat at the deepest pool, and the kit
reward. No destructive HMs anywhere (no Cut, no Rock Smash).

40x36, frp_general + seafoam (an enclosed icy space; a true rock-cave tileset is
a later art pass). No edge connection -- warp in/out from ParcelDelibird's peak.

Run from repo root: python3 tools/maptools/build_cavern.py
"""
import struct
from pathlib import Path

W, H = 40, 36

GRASS = 1
TUFT_A, TUFT_B = 8, 9
FLOWERS = 4
BUSH = 5                          # ice-crystal clusters (impassable)
ENCOUNTER = 12
SAND = 261                       # the pale ice floor
SHORE_A, SHORE_B = 256, 257
WATER = 282                      # frozen pools
TREE_QUAD = {(0, 0): 28, (1, 0): 29, (0, 1): 36, (1, 1): 37}

OPEN_X0, OPEN_X1 = 17, 22        # the south mouth


def word(mid, col=0, elev=3):
    return (elev << 12) | (col << 10) | mid


def build():
    grid = [[word(SAND) for _ in range(W)] for _ in range(H)]   # pale ice floor

    def put(x, y, mid, col=0, elev=3):
        if 0 <= x < W and 0 <= y < H:
            grid[y][x] = word(mid, col, elev)

    def rock(x, y):
        put(x, y, TREE_QUAD[(x % 2, y % 2)], col=1)

    def pool(x0, x1, y0, y1):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, WATER, col=1, elev=1)
        for x in range(x0, x1):
            put(x, y1, SHORE_A if x % 2 == 0 else SHORE_B, col=1)

    # --- the cavern walls, with the south mouth -----------------------------
    for y in range(H):
        for x in range(W):
            if OPEN_X0 <= x < OPEN_X1 and y >= H - 4:
                continue
            if x < 5 or x >= W - 5 or y < 4 or y >= H - 4:
                rock(x, y)
    for y in range(H - 4, H):
        for x in range(18, 21):
            put(x, y, SAND)

    # --- the deep pool at the heart (the last true cold) --------------------
    pool(14, 25, 9, 15)
    # frozen seeps elsewhere
    pool(7, 11, 22, 26)
    pool(29, 34, 20, 25)

    # --- ice crystals (impassable clusters, scenery) ------------------------
    for (cx, cy) in ((9, 7), (30, 7), (12, 18), (27, 13), (33, 16),
                     (8, 14), (31, 28), (11, 27), (24, 26)):
        put(cx, cy, BUSH, col=1)

    # --- frost growth (the cavern's thin wild guild) ------------------------
    for (x0, x1, y0, y1) in ((7, 13, 15, 20), (26, 33, 9, 14)):
        for y in range(y0, y1):
            for x in range(x0, x1):
                put(x, y, ENCOUNTER)

    return grid


def main():
    grid = build()
    out = Path("data/layouts/ParcelCavern")
    out.mkdir(parents=True, exist_ok=True)
    data = b"".join(struct.pack("<H", c) for row in grid for c in row)
    assert len(data) == W * H * 2, len(data)
    (out / "map.bin").write_bytes(data)
    (out / "border.bin").write_bytes(
        struct.pack("<4H", word(28, 1), word(29, 1), word(36, 1), word(37, 1)))
    print(f"wrote {out}/map.bin ({len(data)} bytes, {W}x{H}) + border.bin (rock)")


if __name__ == "__main__":
    main()
