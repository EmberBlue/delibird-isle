#!/usr/bin/env python3
"""Render a map.bin to a PNG using its tilesets -- see a map without booting.

Usage:
  python3 tools/maptools/render_map.py --map data/layouts/ParcelIsle \
      --primary data/tilesets/primary/general \
      --secondary data/tilesets/secondary/leob_dewford \
      --w 83 --h 60 --out /tmp/isle.png [--scale 1]
"""
import argparse
import struct
from pathlib import Path

from PIL import Image

import metatile_sheet as ms  # same directory


def load_metatiles(path, base):
    data = Path(path, "metatiles.bin").read_bytes()
    return {base + i: struct.unpack_from("<12H", data, i * 24)
            for i in range(len(data) // 24)}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--map", required=True)
    ap.add_argument("--primary", required=True)
    ap.add_argument("--secondary", required=True)
    ap.add_argument("--w", type=int, required=True)
    ap.add_argument("--h", type=int, required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--scale", type=int, default=1)
    args = ap.parse_args()

    pals = ms.load_palettes(args.primary, args.secondary)
    prim = ms.load_tiles(Path(args.primary, "tiles.png"))
    sec = ms.load_tiles(Path(args.secondary, "tiles.png"))
    tiles = (prim + [[0] * 64] * (ms.NUM_TILES_IN_PRIMARY - len(prim)))[
        :ms.NUM_TILES_IN_PRIMARY] + sec

    mts = load_metatiles(args.primary, 0)
    mts.update(load_metatiles(args.secondary, ms.NUM_METATILES_IN_PRIMARY))

    words = struct.unpack(
        f"<{args.w*args.h}H", Path(args.map, "map.bin").read_bytes())
    M = ms.METATILE
    img = Image.new("RGB", (args.w * M, args.h * M), (0, 0, 0))
    cache = {}
    for y in range(args.h):
        for x in range(args.w):
            mid = words[y * args.w + x] & 0x3FF
            if mid not in cache:
                cache[mid] = ms.render_metatile(
                    mts.get(mid, (0,) * 12), tiles, pals)
            img.paste(cache[mid], (x * M, y * M))
    if args.scale != 1:
        img = img.resize((img.width * args.scale, img.height * args.scale),
                         Image.NEAREST)
    img.save(args.out)
    print(f"rendered {args.w}x{args.h} map -> {args.out} ({img.size[0]}x{img.size[1]})")


if __name__ == "__main__":
    main()
