#!/usr/bin/env python3
"""Render a labeled contact sheet of every metatile in a tileset pair.

Reads the on-disk porytiles/pokeemerald data directly (tiles.png,
metatiles.bin, palettes/*.pal) and composites each 16x16 metatile the same
way the GBA does: two layers, four 8x8 quadrant tiles each (TL TR BL BR),
color 0 transparent on the top layer. No emulator needed.

Usage:
  python3 tools/maptools/metatile_sheet.py \
      --primary data/tilesets/primary/frp_general \
      --secondary data/tilesets/secondary/frp_seafoam_islands \
      --out /tmp/sheet.png [--which both|primary|secondary] [--scale 2]

Metatile IDs printed on the sheet are the IDs to use in map.bin
(secondary metatiles are offset by NUM_METATILES_IN_PRIMARY = 512).
"""
import argparse
import struct
from pathlib import Path

from PIL import Image, ImageDraw

NUM_TILES_IN_PRIMARY = 512
NUM_METATILES_IN_PRIMARY = 512
NUM_PALS_IN_PRIMARY = 6
NUM_PALS_TOTAL = 13
TILE = 8
METATILE = 16


def load_jasc_pal(path):
    lines = Path(path).read_text().splitlines()
    assert lines[0].strip() == "JASC-PAL", path
    n = int(lines[2])
    return [tuple(int(c) for c in lines[3 + i].split()) for i in range(n)]


def load_palettes(primary_dir, secondary_dir):
    pals = []
    for i in range(NUM_PALS_TOTAL):
        src = primary_dir if i < NUM_PALS_IN_PRIMARY else secondary_dir
        p = Path(src, "palettes", f"{i:02}.pal")
        pals.append(load_jasc_pal(p) if p.exists() else [(255, 0, 255)] * 16)
    return pals


def load_tiles(png_path):
    """Return list of 8x8 tiles, each a list of 64 color indices."""
    im = Image.open(png_path)
    if im.mode != "P":
        im = im.convert("P")
    w, h = im.size
    px = im.load()
    tiles = []
    for ty in range(h // TILE):
        for tx in range(w // TILE):
            tiles.append([px[tx * TILE + x, ty * TILE + y] & 0xF
                          for y in range(TILE) for x in range(TILE)])
    return tiles


def draw_tile(img, tiles, pals, entry, ox, oy, transparent):
    tid = entry & 0x3FF
    hflip = (entry >> 10) & 1
    vflip = (entry >> 11) & 1
    pal = (entry >> 12) & 0xF
    if tid >= len(tiles) or pal >= len(pals):
        return
    data = tiles[tid]
    colors = pals[pal]
    for y in range(TILE):
        for x in range(TILE):
            ci = data[y * TILE + x]
            if transparent and ci == 0:
                continue
            sx = (TILE - 1 - x) if hflip else x
            sy = (TILE - 1 - y) if vflip else y
            img.putpixel((ox + sx, oy + sy), colors[ci])


def render_metatile(metatile_words, tiles, pals):
    """metatile_words: 12 u16s — bottom, middle, top layers, 4 quads each
    (TL TR BL BR). This fork uses the triple-layer metatile system
    (NUM_TILES_PER_METATILE == 12 in include/fieldmap.h); color 0 is
    transparent on the middle and top layers."""
    img = Image.new("RGB", (METATILE, METATILE), (255, 0, 255))
    quads = [(0, 0), (TILE, 0), (0, TILE), (TILE, TILE)]
    for layer in range(3):
        for q, (qx, qy) in enumerate(quads):
            draw_tile(img, tiles, pals, metatile_words[layer * 4 + q],
                      qx, qy, transparent=(layer > 0))
    return img


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--primary", required=True)
    ap.add_argument("--secondary", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--which", choices=["both", "primary", "secondary"],
                    default="both")
    ap.add_argument("--scale", type=int, default=2)
    ap.add_argument("--cols", type=int, default=16)
    args = ap.parse_args()

    pals = load_palettes(args.primary, args.secondary)
    prim_tiles = load_tiles(Path(args.primary, "tiles.png"))
    sec_tiles = load_tiles(Path(args.secondary, "tiles.png"))
    # VRAM layout: tile ids < 512 come from the primary sheet, >= 512 from
    # the secondary sheet (offset by 512).
    all_tiles = (prim_tiles + [[0] * 64] * (NUM_TILES_IN_PRIMARY - len(prim_tiles)))[:NUM_TILES_IN_PRIMARY] + sec_tiles

    jobs = []  # (label_id, words)
    for which, path, base in (("primary", args.primary, 0),
                              ("secondary", args.secondary,
                               NUM_METATILES_IN_PRIMARY)):
        if args.which not in ("both", which):
            continue
        data = Path(path, "metatiles.bin").read_bytes()
        assert len(data) % 24 == 0, f"{path}: not triple-layer format"
        for i in range(len(data) // 24):
            words = struct.unpack_from("<12H", data, i * 24)
            jobs.append((base + i, words))

    cell_w = METATILE * args.scale + 14   # metatile + right gutter
    cell_h = METATILE * args.scale + 12   # metatile + label strip
    cols = args.cols
    rows = (len(jobs) + cols - 1) // cols
    sheet = Image.new("RGB", (cols * cell_w + 4, rows * cell_h + 4),
                      (24, 24, 24))
    d = ImageDraw.Draw(sheet)
    for n, (mid, words) in enumerate(jobs):
        cx = 4 + (n % cols) * cell_w
        cy = 4 + (n // cols) * cell_h
        m = render_metatile(words, all_tiles, pals).resize(
            (METATILE * args.scale,) * 2, Image.NEAREST)
        sheet.paste(m, (cx, cy))
        d.text((cx, cy + METATILE * args.scale + 1), str(mid),
               fill=(255, 255, 160))
    sheet.save(args.out)
    print(f"{len(jobs)} metatiles -> {args.out} ({sheet.size[0]}x{sheet.size[1]})")


if __name__ == "__main__":
    main()
