#!/usr/bin/env python3
"""The Reedmere hide's boards: four metatiles added to leob0505's Petalburg kit.

The hide's sign says "Keep to the boards" and the kit has no boards. This adds, reproducibly and
without touching the kit's own tiles or metatiles:

  tiles 672 673   a plank tile (the Lilycove kit's 729, in the primary's palette 5, so it is
                  coloured the same under every kit) and its transpose, planks lying the other way
  656  boards on grass, for a walk running east-west (the planks lie across it)
  657  boards on grass, for a walk running north-south
  658  boards over still water, east-west        659  boards over still water, north-south

  python3 tools/skald/hide_kit.py            make them (idempotent)
  python3 tools/skald/hide_kit.py --check    exit 1 if anything is missing or sits elsewhere
  python3 tools/skald/hide_kit.py --rebuild  drop the additions (and what the drawing passes appended after
                                             them), make them again and redraw the hide
"""
import struct
import subprocess
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
KIT = ROOT / "data/tilesets/secondary/leob_petalburg"
SRC = ROOT / "data/tilesets/secondary/leob_lilycove/tiles.png"
KIT_METATILES = 144
KIT_ROWS = 10                    # the kit's own sheet is 128x80: tiles 512-671
V, H = 672, 673                  # the two plank tiles


def e(tile, pal):
    return tile | (pal << 12)


GRASS = (e(2, 2), e(3, 2), e(3, 2), e(2, 2))
POND = (e(286, 1),) * 4
NONE = (0, 0, 0, 0)
WANT = [("boards on grass, east-west", GRASS + (e(V, 5),) * 4 + NONE),
        ("boards on grass, north-south", GRASS + (e(H, 5),) * 4 + NONE),
        ("boards over water, east-west", POND + (e(V, 5),) * 4 + NONE),
        ("boards over water, north-south", POND + (e(H, 5),) * 4 + NONE)]


def plank():
    im = Image.open(SRC)
    x0, y0 = ((729 - 512) % 16) * 8, ((729 - 512) // 16) * 8
    v = [[im.getpixel((x0 + x, y0 + y)) & 15 for x in range(8)] for y in range(8)]
    return v, [[v[x][y] for x in range(8)] for y in range(8)]


def tiles(check, rebuild):
    im = Image.open(KIT / "tiles.png")
    assert im.mode == "P" and im.size[0] == 128, im
    need = (H - 512) // 16 + 1
    if im.size[1] // 8 < need or rebuild:
        if check and im.size[1] // 8 < need:
            return 1
        if not check:
            big = Image.new("P", (128, need * 8), 0)
            big.putpalette(im.getpalette())
            big.paste(im.crop((0, 0, 128, KIT_ROWS * 8)), (0, 0))
            im = big
    drift = 0
    for t, px in zip((V, H), plank()):
        x0, y0 = ((t - 512) % 16) * 8, ((t - 512) // 16) * 8
        for y in range(8):
            for x in range(8):
                if im.getpixel((x0 + x, y0 + y)) != px[y][x]:
                    drift += 1
                    if not check:
                        im.putpixel((x0 + x, y0 + y), px[y][x])
    if not check:
        im.save(KIT / "tiles.png", bits=4)
    return 1 if drift and check else 0


def metatiles(check):
    mfile, afile = KIT / "metatiles.bin", KIT / "metatile_attributes.bin"
    bad = 0
    for i, (name, w) in enumerate(WANT):
        data = mfile.read_bytes()
        n, slot = len(data) // 24, KIT_METATILES + i
        if n > slot and struct.unpack_from("<12H", data, slot * 24) == tuple(w):
            continue
        if check or n != slot:
            print(f"{name}: not at {512 + slot}" + ("" if check else "; run with --rebuild")); bad += 1
            continue
        mfile.write_bytes(data + struct.pack("<12H", *w))
        afile.write_bytes(afile.read_bytes() + struct.pack("<H", 0))
    return bad


def main():
    check, rebuild = "--check" in sys.argv, "--rebuild" in sys.argv
    if rebuild:
        for name, per in (("metatiles.bin", 24), ("metatile_attributes.bin", 2)):
            f = KIT / name
            f.write_bytes(f.read_bytes()[:KIT_METATILES * per])
    bad = tiles(check, rebuild) + metatiles(check)
    print("hide kit:", "ok" if not bad else f"{bad} problem(s)")
    canvas = ROOT / "data/layouts/ParcelWetlandsHide/canvas.txt"
    if rebuild and not bad and canvas.exists():
        subprocess.run([sys.executable, str(ROOT / "tools/skald/draw.py"), str(canvas)], check=True, stdout=subprocess.DEVNULL)
        print("  redrawn: ParcelWetlandsHide")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
