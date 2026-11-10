#!/usr/bin/env python3
"""Generate the Pokémon Anthropocene title-screen art.

Writes into graphics/title_screen/:

  pokemon_logo.png / .pal   the stock wordmark, palette compacted to 160 colours
                            (BG palettes 0-9) so the scene can own 10-14 and the
                            aurora 15
  skald_scene.png / .bin    the night coast: one 4bpp tile pool (the PNG palette is
                            only for viewing) plus a 32x32 BG0 tilemap whose entries
                            carry the real palette number (10-14)
  skald_scene_0..4.pal      the five scene palettes (sky, sea, land, delibird, horizon)
  skald_aurora.png / .bin   the BG1 aurora band and its sea reflection; palette 15.
                            BG1 is alpha-blended over the scene and wobbled per
                            scanline by the title screen's wave effect
  skald_aurora.pal
  skald_title.png / .pal    the "ANTHROPOCENE" banner: 192x32, three 64x32 8bpp
                            sprites (tile offsets 0, 64, 128)

Everything is deterministic (seeded), so re-running produces identical files.
Colours are snapped to the GBA's 5-bit channels. Run from anywhere:

    python3 tools/skald/title_art.py
"""
import math
import os
import random
import struct
import sys
from pathlib import Path

from PIL import Image, ImageDraw, ImageFont

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / "graphics" / "title_screen"

W, H = 240, 160
HORIZON = 98          # first sea row
SHORE = 128           # first land row (nominal)
TILE = 8

SCENE_FIRST_PAL = 10  # BG palettes 10..14
AURORA_PAL = 15


def g(r, gg, b):
    """Snap to GBA 5-bit channels (what gbagfx will store)."""
    return (r & ~7, gg & ~7, b & ~7)


# ---------------------------------------------------------------- colours
C = {
    # sky, top to horizon
    "SKY1": g(4, 6, 20), "SKY2": g(8, 10, 30), "SKY3": g(12, 16, 42),
    "SKY4": g(16, 24, 56), "SKY5": g(22, 34, 72), "SKY6": g(30, 48, 90),
    "SKY7": g(44, 66, 104),
    "STAR_B": g(232, 240, 255), "STAR_M": g(150, 176, 224),
    # the isle on the horizon
    "ISLE": g(10, 14, 28), "SNOW": g(132, 148, 176),
    "LH_LIGHT": g(208, 212, 224), "LH_DARK": g(96, 104, 128), "LH_GLOW": g(216, 168, 72),
    "LAMP": g(248, 224, 128),      # pulsed at run time (palette 10, index 15)
    # sea, horizon to shore
    "SEA1": g(28, 62, 104), "SEA2": g(20, 50, 90), "SEA3": g(14, 38, 72), "SEA4": g(10, 28, 56),
    "RIP1": g(44, 92, 136), "RIP2": g(74, 134, 168), "RIP3": g(120, 184, 208),
    "FOAM": g(160, 196, 216),
    # the near headland
    "LAND_DEEP": g(8, 14, 14), "LAND_DARK": g(14, 28, 26), "LAND_MID": g(24, 46, 38),
    "GRASS": g(48, 84, 58), "MOSS": g(36, 66, 44),
    "ROCK_DARK": g(30, 34, 42), "ROCK_MID": g(50, 56, 66), "ROCK_LIGHT": g(78, 86, 98),
    "STAKE": g(104, 78, 48), "RED": g(176, 40, 48), "RED_DARK": g(112, 20, 32),
    # delibird
    "CREAM": g(236, 232, 220), "CREAM_SH": g(172, 176, 184), "BEAK": g(232, 192, 64),
    "INK": g(16, 12, 16), "WHITE": g(255, 255, 255),
}

# the five scene palettes; index 0 is the hardware transparent colour
PALETTES = [
    ("sky", ["SKY1", "SKY2", "SKY3", "SKY4", "SKY5", "SKY6", "SKY7", "STAR_B", "STAR_M",
             "ISLE", "SNOW", "LH_LIGHT", "LH_DARK", "LH_GLOW", "LAMP"]),
    ("sea", ["SEA1", "SEA2", "SEA3", "SEA4", "RIP1", "RIP2", "RIP3", "ISLE", "SKY6", "SKY7",
             "LAND_DARK", "LAND_MID", "ROCK_DARK", "FOAM", "GRASS"]),
    ("land", ["LAND_DARK", "LAND_MID", "GRASS", "ROCK_DARK", "ROCK_MID", "ROCK_LIGHT", "SEA3",
              "SEA4", "STAKE", "RED", "RED_DARK", "LAND_DEEP", "MOSS", "SEA2", "FOAM"]),
    ("delibird", ["SEA1", "SEA2", "SEA3", "SEA4", "LAND_DARK", "LAND_MID", "GRASS", "MOSS",
                  "CREAM", "CREAM_SH", "RED", "RED_DARK", "BEAK", "INK", "WHITE"]),
    ("horizon", ["SKY5", "SKY6", "SKY7", "ISLE", "SNOW", "SEA1", "SEA2", "SEA3", "RIP1", "RIP2",
                 "LH_LIGHT", "LH_DARK", "LH_GLOW", "STAR_M", "FOAM"]),
]
assert PALETTES[0][1][14] == "LAMP"   # title_screen.c pulses palette 10, colour 15
for _n, _p in PALETTES:
    assert len(_p) == 15, _n

# ---------------------------------------------------------------- delibird
# Facing right, toward the sea. Legend: . bg  r red  d dark red  c cream
# s cream shade  b beak/feet  k ink  w eye glint
DELIBIRD = [
    "........rrr..........",
    ".......rrrrr.........",
    "......rrdrrrr........",
    ".....rrrrrrrrr.......",
    ".....rrccccrrrr......",
    "....rrccccccrrrr.....",
    "....rccckwcccrrr.....",
    "....rcccckccccrbbb...",
    "....rccccccccrrbbbb..",
    ".....sccccccrrrbb....",
    "......ssccccrrrr.....",
    ".....crrrrrrrrrr.....",
    "....ccrrrrrrrrrrc....",
    "...ccccrrrrrrrrccc...",
    "..ccccsrrrrrrrrcscc..",
    "..cccccsrrrrrrrcscc..",
    ".ccccccsdrrrrrrcscc..",
    ".cccccccsdrrrrrccc...",
    ".ccccccccsdrrrrrr....",
    "..cccccccsddrrrrr....",
    "..sccccccss.dddrrr...",
    "...ssccsss..dddrrr...",
    "....ssss.....ddrr....",
    ".............rr.rr...",
    ".............bb.bb...",
    "............bbb.bbb..",
]
DELI_MAP = {"r": "RED", "d": "RED_DARK", "c": "CREAM", "s": "CREAM_SH", "b": "BEAK",
            "k": "INK", "w": "WHITE"}


# ---------------------------------------------------------------- the scene
def paint_scene():
    rnd = random.Random(1206)
    px = [[None] * W for _ in range(H)]

    # sky: seven bands with a one-row dither at each seam
    seams = [10, 24, 40, 56, 70, 82]
    for y in range(HORIZON):
        band = sum(1 for s in seams if y >= s)
        for x in range(W):
            b = band
            if y + 1 in seams and (x + y) & 1:
                b += 1
            if y - 1 in seams and y - 1 >= 0 and not (x + y) & 1 and band > 0:
                b -= 1
            px[y][x] = "SKY%d" % (min(b, 6) + 1)

    # stars, kept out of the lowest sky band and off the isle
    for _ in range(70):
        x = rnd.randrange(W)
        y = rnd.randrange(0, HORIZON - 12)
        if px[y][x].startswith("SKY"):
            px[y][x] = "STAR_B" if rnd.random() < 0.3 else "STAR_M"
    for (x, y) in [(28, 14), (205, 22), (118, 8), (232, 46), (12, 60)]:
        if px[y][x].startswith("SKY"):
            px[y][x] = "STAR_B"
            for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                if px[y + dy][x + dx].startswith("SKY"):
                    px[y + dy][x + dx] = "STAR_M"

    # Delibird Isle on the horizon: low hills, one snowy summit
    def isle_h(x):
        if x < 150 or x > 236:
            return 0
        t = (x - 150) / 86.0
        h = 3.5 * math.sin(math.pi * t) + 2.2 * math.sin(math.pi * t * 3 + 0.4)
        h += 7.5 * math.exp(-((x - 204) ** 2) / 90.0)      # the summit
        return max(0, h)
    for x in range(W):
        h = isle_h(x)
        for y in range(HORIZON - int(round(h)), HORIZON):
            px[y][x] = "ISLE"
    for x in range(198, 211):                              # snow on the summit
        top = HORIZON - int(round(isle_h(x)))
        if isle_h(x) > 7.5:
            px[top][x] = "SNOW"
            if isle_h(x) > 9.0:
                px[top + 1][x] = "SNOW"

    # the harbour light on the isle's western tip
    lx = 156
    for y in range(HORIZON - 10, HORIZON):
        for dx in range(3):
            px[y][lx + dx] = "LH_DARK" if (y in (HORIZON - 6, HORIZON - 3) or dx == 2) else "LH_LIGHT"
    px[HORIZON - 11][lx] = "LAMP"
    px[HORIZON - 11][lx + 1] = "LAMP"
    px[HORIZON - 11][lx + 2] = "LH_DARK"
    px[HORIZON - 12][lx] = "LH_GLOW"
    px[HORIZON - 12][lx + 1] = "LH_GLOW"
    px[HORIZON - 11][lx - 1] = "LH_GLOW"
    px[HORIZON - 11][lx + 3] = "LH_GLOW"
    px[HORIZON - 10][lx - 1] = "LH_GLOW"
    px[HORIZON - 10][lx + 3] = "LH_GLOW"

    # sea: four bands, ripples that thin toward the shore
    sea_seams = [HORIZON + 8, HORIZON + 17, HORIZON + 27]
    for y in range(HORIZON, H):
        band = sum(1 for s in sea_seams if y >= s)
        for x in range(W):
            px[y][x] = "SEA%d" % (band + 1)
    for y in range(HORIZON + 1, SHORE - 2):
        chance = 0.55 if y < HORIZON + 10 else (0.35 if y < HORIZON + 20 else 0.2)
        x = rnd.randrange(0, 12)
        while x < W:
            length = rnd.randrange(2, 9 if y < HORIZON + 12 else 6)
            if rnd.random() < chance and not (12 <= x <= 48):   # keep the water behind Delibird plain
                col = "RIP3" if (y < HORIZON + 5 and rnd.random() < 0.35) else ("RIP2" if rnd.random() < 0.5 else "RIP1")
                for xx in range(x, min(W, x + length)):
                    px[y][xx] = col
            x += length + rnd.randrange(6, 22)
    # a lighter path under the lamp, the way harbour lights sit on water
    for y in range(HORIZON, HORIZON + 14):
        if y % 2 == 0:
            spread = 1 + (y - HORIZON) // 4
            for xx in range(lx + 1 - spread, lx + 2 + spread):
                if rnd.random() < 0.7:
                    px[y][xx] = "RIP2" if y < HORIZON + 6 else "RIP1"

    # the near headland
    def ground(x):
        return SHORE + 1.5 * math.sin(x / 11.0) + 1.2 * math.sin(x / 4.3 + 1.0)
    gy = [int(round(ground(x))) for x in range(W)]
    for x in range(W):
        for y in range(gy[x], H):
            d = y - gy[x]
            px[y][x] = "LAND_DARK" if d < 14 else "LAND_DEEP"
        # a rim of grass/moss along the edge
        px[gy[x]][x] = "GRASS" if (x % 3) else "MOSS"
        if (x * 7) % 11 < 3:
            px[gy[x] - 1][x] = "GRASS"
    # mid-tone hummocks and rock outcrops
    for _ in range(26):
        cx = rnd.randrange(0, W)
        cy = rnd.randrange(SHORE + 3, H - 2)
        rx = rnd.randrange(4, 14)
        ry = rnd.randrange(2, 4)
        col = "LAND_MID" if rnd.random() < 0.7 else "MOSS"
        for y in range(cy - ry, cy + ry + 1):
            for x in range(cx - rx, cx + rx + 1):
                if 0 <= x < W and 0 <= y < H and ((x - cx) / rx) ** 2 + ((y - cy) / ry) ** 2 <= 1 and px[y][x] in ("LAND_DARK", "LAND_DEEP"):
                    px[y][x] = col
    for (cx, cy, rw, rh) in [(96, 131, 9, 4), (178, 134, 7, 3), (142, 150, 11, 4), (30, 146, 8, 3), (214, 128, 6, 3)]:
        for y in range(cy - rh, cy + rh + 1):
            for x in range(cx - rw, cx + rw + 1):
                if 0 <= x < W and 0 <= y < H and ((x - cx) / rw) ** 2 + ((y - cy) / rh) ** 2 <= 1 and y >= gy[x]:
                    px[y][x] = "ROCK_LIGHT" if y < cy - rh // 2 else ("ROCK_MID" if y <= cy else "ROCK_DARK")
    # grass tufts standing above the rim
    for x in range(2, W - 2, 1):
        if (x * 13) % 17 == 0:
            y = gy[x] - 1
            for dx, dy in ((0, 0), (0, -1), (-1, 0), (1, 0), (-1, -1), (1, -2)):
                if px[y + dy][x + dx].startswith("SEA") or px[y + dy][x + dx] in ("RIP1", "RIP2"):
                    px[y + dy][x + dx] = "GRASS"

    # a Surveyor's stake with its red cloth
    sx = 62
    for y in range(gy[sx] - 13, gy[sx] + 1):
        px[y][sx] = "STAKE"
    for y, row in enumerate(["rrrr", "rrdr", "rdd."]):
        for dx, ch in enumerate(row):
            if ch != ".":
                px[gy[sx] - 13 + y][sx + 1 + dx] = "RED" if ch == "r" else "RED_DARK"

    # Delibird on the headland, looking out
    dx0, dy0 = 18, gy[28] - len(DELIBIRD) + 1
    for yy, row in enumerate(DELIBIRD):
        for xx, ch in enumerate(row):
            if ch in DELI_MAP:
                px[dy0 + yy][dx0 + xx] = DELI_MAP[ch]
    return px


# ---------------------------------------------------------------- tiles
def quantize_tiles(px):
    """Assign each 8x8 tile a palette, remapping stray colours to the nearest.
    Returns (tiles: list of 64-int lists, palette_of_tile, remap_count)."""
    pal_sets = [(name, {k: i + 1 for i, k in enumerate(keys)}) for name, keys in PALETTES]
    tiles, pals, remaps = [], [], 0
    rows, cols = H // TILE, W // TILE
    for ty in range(rows):
        for tx in range(cols):
            keys = [px[ty * TILE + y][tx * TILE + x] for y in range(TILE) for x in range(TILE)]
            used = set(keys)
            chosen = None
            for name, m in pal_sets:
                if used <= set(m):
                    chosen = (name, m)
                    break
            if chosen is None:
                best = None
                for name, m in pal_sets:
                    err = 0
                    for k in keys:
                        if k not in m:
                            err += min(dist(C[k], C[o]) for o in m)
                    if best is None or err < best[0]:
                        best = (err, name, m)
                chosen = (best[1], best[2])
                remaps += 1
            name, m = chosen
            data = []
            for k in keys:
                if k in m:
                    data.append(m[k])
                else:
                    o = min(m, key=lambda o: dist(C[k], C[o]))
                    data.append(m[o])
            tiles.append(data)
            pals.append([n for n, _ in PALETTES].index(name))
    return tiles, pals, remaps


def dist(a, b):
    return (a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2 + (a[2] - b[2]) ** 2


def flip_h(t):
    return [t[y * 8 + (7 - x)] for y in range(8) for x in range(8)]


def flip_v(t):
    return [t[(7 - y) * 8 + x] for y in range(8) for x in range(8)]


class TilePool:
    """Deduplicates 4bpp tiles, recognising horizontal/vertical flips."""

    def __init__(self, reserve_blank=False):
        self.tiles = []
        self.index = {}
        if reserve_blank:
            self.add([0] * 64)

    def add(self, t):
        key = tuple(t)
        if key in self.index:
            return self.index[key]
        for flip, f in ((1, flip_h), (2, flip_v), (3, lambda q: flip_v(flip_h(q)))):
            k2 = tuple(f(t))
            if k2 in self.index:
                i, fl = self.index[k2]
                return (i, fl ^ flip)
        i = len(self.tiles)
        self.tiles.append(list(t))
        self.index[key] = (i, 0)
        return (i, 0)


def write_sheet(pool, path, display_palette):
    n = len(pool.tiles)
    cols = 16
    rows = (n + cols - 1) // cols
    img = Image.new("P", (cols * 8, rows * 8), 0)
    flat = list(display_palette)
    while len(flat) < 16:
        flat.append((0, 0, 0))
    img.putpalette([c for rgb in flat[:16] for c in rgb])
    for i, t in enumerate(pool.tiles):
        ox, oy = (i % cols) * 8, (i // cols) * 8
        for y in range(8):
            for x in range(8):
                img.putpixel((ox + x, oy + y), t[y * 8 + x])
    img.save(path, bits=4)
    return rows * cols


def write_tilemap(path, entries):
    with open(path, "wb") as f:
        f.write(struct.pack("<%dH" % len(entries), *entries))


def write_pal(path, colours):
    flat = list(colours)
    while len(flat) < 16:
        flat.append((0, 0, 0))
    with open(path, "w", newline="\r\n") as f:
        f.write("JASC-PAL\n0100\n%d\n" % len(flat))
        for r, gg, b in flat:
            f.write("%d %d %d\n" % (r, gg, b))


def build_scene():
    px = paint_scene()
    tiles, pals, remaps = quantize_tiles(px)
    pool = TilePool(reserve_blank=True)
    entries = [0] * (32 * 32)
    cols = W // TILE
    for i, t in enumerate(tiles):
        idx, fl = pool.add(t)
        ty, tx = divmod(i, cols)
        entries[ty * 32 + tx] = idx | (fl << 10) | ((SCENE_FIRST_PAL + pals[i]) << 12)
    grey = [(0, 0, 0)] + [(16 * k + 8,) * 3 for k in range(15)]
    write_sheet(pool, OUT / "skald_scene.png", grey)
    write_tilemap(OUT / "skald_scene.bin", entries)
    for i, (name, keys) in enumerate(PALETTES):
        write_pal(OUT / ("skald_scene_%d.pal" % i), [(0, 0, 0)] + [C[k] for k in keys])
    # a true-colour preview for the designer's eye
    prev = Image.new("RGB", (W, H))
    for y in range(H):
        for x in range(W):
            prev.putpixel((x, y), C[px[y][x]])
    print("scene: %d unique tiles, %d tiles remapped" % (len(pool.tiles), remaps))
    return prev


# ---------------------------------------------------------------- aurora
AURORA = [
    (0, 0, 0),            # transparent
    g(64, 32, 96),        # 1 violet dim
    g(128, 72, 176),      # 2 violet
    g(192, 136, 240),     # 3 violet bright
    g(24, 88, 88),        # 4 teal dim
    g(48, 168, 160),      # 5 teal
    g(112, 232, 216),     # 6 teal bright
    g(32, 104, 56),       # 7 green dim
    g(80, 196, 96),       # 8 green
    g(152, 255, 168),     # 9 green bright
    g(224, 255, 232),     # 10 white-green
    g(16, 48, 40),        # 11 reflection deep
    g(24, 72, 56),        # 12 reflection green
    g(40, 60, 88),        # 13 reflection violet
    g(20, 80, 84),        # 14 reflection teal
    (0, 0, 0),
]
AW, AH = 256, 256
A_TOP, A_BOTTOM_MAX = 12, 97


def paint_aurora():
    rnd = random.Random(77)
    px = [[0] * AW for _ in range(AH)]
    ray = [0.75 + 0.25 * math.sin(2 * math.pi * 19 * x / AW + 1.3) * math.sin(2 * math.pi * 7 * x / AW) for x in range(AW)]
    jitter = [rnd.uniform(-0.08, 0.08) for _ in range(AW)]

    def profile(x):
        i1 = 0.5 + 0.5 * math.sin(2 * math.pi * x / AW + 0.4)
        i2 = 0.5 + 0.5 * math.sin(2 * math.pi * 3 * x / AW + 1.1)
        i3 = 0.5 + 0.5 * math.sin(2 * math.pi * 7 * x / AW + 2.3)
        inten = 0.25 + 0.75 * (0.5 * i1 + 0.3 * i2 + 0.2 * i3)
        yb = 87 + 6 * math.sin(2 * math.pi * 2 * x / AW + 0.5) + 3 * math.sin(2 * math.pi * 5 * x / AW)
        height = 18 + 34 * inten
        return inten, yb, yb - height

    for x in range(AW):
        inten, yb, yt = profile(x)
        for y in range(max(A_TOP, int(yt)), min(A_BOTTOM_MAX, int(yb)) + 1):
            t = (y - yt) / max(1.0, (yb - yt))       # 0 at the top, 1 at the bright lower edge
            bright = inten * (0.25 + 0.75 * t) * ray[x] + jitter[x]
            if bright < 0.16:
                continue
            if t < 0.3:
                px[y][x] = 1 if bright < 0.35 else (2 if bright < 0.6 else 3)
            elif t < 0.6:
                px[y][x] = 4 if bright < 0.35 else (5 if bright < 0.62 else 6)
            else:
                px[y][x] = 7 if bright < 0.34 else (8 if bright < 0.58 else (9 if bright < 0.86 else 10))
    # the reflection, compressed and interlaced so the wave reads as water
    for y in range(HORIZON, SHORE):
        d = y - HORIZON
        for x in range(AW):
            inten, yb, yt = profile(x)
            src = int(yb - d * 1.7)
            if src < yt or src < A_TOP:
                continue
            s = px[src][x]
            if s == 0 or (y + (x // 3)) % 2:
                continue
            if s in (1, 2, 3):
                px[y][x] = 13
            elif s in (4, 5, 6):
                px[y][x] = 14
            elif s in (7, 8):
                px[y][x] = 12
            else:
                px[y][x] = 12 if d > 10 else 8
    return px


def build_aurora():
    px = paint_aurora()
    pool = TilePool(reserve_blank=True)
    entries = [0] * (32 * 32)
    for ty in range(32):
        for tx in range(32):
            t = [px[ty * 8 + y][tx * 8 + x] for y in range(8) for x in range(8)]
            idx, fl = pool.add(t)
            entries[ty * 32 + tx] = idx | (fl << 10) | (AURORA_PAL << 12)
    write_sheet(pool, OUT / "skald_aurora.png", AURORA)
    write_tilemap(OUT / "skald_aurora.bin", entries)
    write_pal(OUT / "skald_aurora.pal", AURORA)
    prev = Image.new("RGBA", (AW, AH), (0, 0, 0, 0))
    for y in range(AH):
        for x in range(AW):
            if px[y][x]:
                prev.putpixel((x, y), AURORA[px[y][x]] + (255,))
    print("aurora: %d unique tiles" % len(pool.tiles))
    return prev


# ---------------------------------------------------------------- banner
BANNER_W, BANNER_H = 192, 32
BANNER_PAL = [
    (0, 0, 0),           # 0 transparent
    g(16, 24, 56),       # 1 outline
    g(8, 12, 32),        # 2 shadow
    g(255, 255, 255),    # 3 fill, top
    g(240, 248, 255),    # 4
    g(216, 236, 252),    # 5
    g(184, 220, 248),    # 6
    g(152, 200, 240),    # 7
    g(120, 176, 232),    # 8 fill, bottom
]


def find_font():
    for p in ["/usr/share/fonts/opentype/inter/Inter-ExtraBold.otf",
              "/usr/share/fonts/opentype/inter/Inter-Bold.otf",
              "/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf",
              "/usr/share/fonts/truetype/freefont/FreeSansBold.ttf"]:
        if os.path.exists(p):
            return p
    return None


def build_banner(text="ANTHROPOCENE"):
    font_path = find_font()
    if font_path is None:
        sys.exit("no usable bold font found for the banner")
    scale = 8
    big_w, big_h = BANNER_W * scale, BANNER_H * scale
    target_w = (BANNER_W - 10) * scale
    size = 60
    font = ImageFont.truetype(font_path, size)
    while True:
        font = ImageFont.truetype(font_path, size)
        bbox = font.getbbox(text)
        if bbox[2] - bbox[0] >= target_w or size > 400:
            break
        size += 2
    while font.getbbox(text)[2] - font.getbbox(text)[0] > target_w:
        size -= 1
        font = ImageFont.truetype(font_path, size)
    bbox = font.getbbox(text)
    mask_big = Image.new("L", (big_w, big_h), 0)
    d = ImageDraw.Draw(mask_big)
    tx = (big_w - (bbox[2] - bbox[0])) // 2 - bbox[0]
    ty = (big_h - (bbox[3] - bbox[1])) // 2 - bbox[1] - 1 * scale
    d.text((tx, ty), text, fill=255, font=font)
    mask = mask_big.resize((BANNER_W, BANNER_H), Image.BOX)
    fill = [[1 if mask.getpixel((x, y)) >= 128 else 0 for x in range(BANNER_W)] for y in range(BANNER_H)]
    ys = [y for y in range(BANNER_H) if any(fill[y])]
    top, bottom = ys[0], ys[-1]
    img = Image.new("P", (BANNER_W, BANNER_H), 0)
    img.putpalette([c for rgb in (BANNER_PAL + [(0, 0, 0)] * (16 - len(BANNER_PAL))) for c in rgb])

    def filled(x, y):
        return 0 <= x < BANNER_W and 0 <= y < BANNER_H and fill[y][x]
    for y in range(BANNER_H):
        for x in range(BANNER_W):
            if fill[y][x]:
                t = (y - top) / max(1, bottom - top)
                img.putpixel((x, y), 3 + min(5, int(t * 6)))
            else:
                near = any(filled(x + dx, y + dy) for dx in (-1, 0, 1) for dy in (-1, 0, 1))
                if near:
                    img.putpixel((x, y), 1)
                elif any(filled(x + dx, y + dy) for dx in (-1, 0, 1) for dy in (-2, -1, 0)) or filled(x, y - 2) or filled(x - 1, y - 2) or filled(x + 1, y - 2):
                    img.putpixel((x, y), 2)
    img.save(OUT / "skald_title.png")
    write_pal(OUT / "skald_title.pal", BANNER_PAL)
    print("banner: %s at %dpt from %s" % (text, size // scale, os.path.basename(font_path)))
    return img.convert("RGBA")


# ---------------------------------------------------------------- logo
def compact_logo(max_colours=160):
    """Renumber the wordmark's palette so every used index is below max_colours."""
    path = OUT / "pokemon_logo.png"
    im = Image.open(path)
    assert im.mode == "P"
    pal = im.getpalette()
    data = list(im.getdata())
    used = sorted(set(data))
    if 0 not in used:
        used = [0] + used
    assert len(used) <= max_colours, len(used)
    remap = {old: new for new, old in enumerate(used)}
    out = Image.new("P", im.size)
    newpal = []
    for old in used:
        newpal.extend(pal[old * 3:old * 3 + 3])
    while len(newpal) < 256 * 3:
        newpal.extend((0, 0, 0))
    out.putpalette(newpal)
    out.putdata([remap[v] for v in data])
    out.save(path)
    colours = [tuple(newpal[i * 3:i * 3 + 3]) for i in range(256)]
    with open(OUT / "pokemon_logo.pal", "w", newline="\r\n") as f:
        f.write("JASC-PAL\n0100\n256\n")
        for r, gg, b in colours:
            f.write("%d %d %d\n" % (r, gg, b))
    print("logo: %d colours, highest index %d" % (len(used), len(used) - 1))


# ---------------------------------------------------------------- preview
def preview(scene, aurora, banner, out_path):
    """Approximate the composed title screen for a quick look (not pixel-exact)."""
    comp = scene.convert("RGBA")
    # BG1 blends at roughly 7/16 over the scene
    for y in range(H):
        for x in range(W):
            a = aurora.getpixel((x, y))
            if a[3]:
                s = comp.getpixel((x, y))
                comp.putpixel((x, y), tuple(min(255, s[i] + a[i] * 7 // 16) for i in range(3)) + (255,))
    logo = Image.open(OUT / "pokemon_logo.png").convert("RGBA")
    lp = Image.open(OUT / "pokemon_logo.png")
    # index 0 is transparent on BG2
    alpha = lp.point(lambda v: 0 if v == 0 else 255, "L")
    logo.putalpha(alpha)
    comp.alpha_composite(logo.crop((0, 0, W - 29, 64)), (29, 0))   # BG2X is -29: the wordmark sits 29px right
    bp = Image.open(OUT / "skald_title.png")
    banner = banner.copy()
    banner.putalpha(bp.point(lambda v: 0 if v == 0 else 255, "L"))
    comp.alpha_composite(banner, ((W - BANNER_W) // 2, 66 - BANNER_H // 2))
    comp = comp.resize((W * 3, H * 3), Image.NEAREST)
    comp.save(out_path)


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    compact_logo()
    scene = build_scene()
    aurora = build_aurora()
    banner = build_banner()
    prev_dir = Path(os.environ.get("SKALD_PREVIEW_DIR", "/tmp"))
    preview(scene, aurora, banner, prev_dir / "title_preview.png")
    scene.resize((W * 3, H * 3), Image.NEAREST).save(prev_dir / "title_scene.png")
    print("previews in", prev_dir)


if __name__ == "__main__":
    main()
