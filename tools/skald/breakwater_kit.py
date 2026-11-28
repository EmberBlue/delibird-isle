#!/usr/bin/env python3
"""The Breakwater's dredge spoil: one metatile added to the Slateport kit.

The spoil bank's sign says KRABBY have dug into it. Sand has no wild Pokemon to the engine, and neither
General nor the Slateport kit holds a piece that does, so the zone's land table could never be met.
This adds, reproducibly and without touching the kit's own metatiles:

  918  soft spoil: General's plain sand (292) with the behaviour MB_DEEP_SAND, the desert's soft sand.
       It looks like the beach beside it; the player's tracks sink deeper in it, and the map's land
       table lives on it.

  python3 tools/skald/breakwater_kit.py            make it (idempotent)
  python3 tools/skald/breakwater_kit.py --check    exit 1 if it is missing or sits elsewhere
  python3 tools/skald/breakwater_kit.py --rebuild  drop the addition (and what a drawing pass appended
                                                   after it), make it again and redraw the Breakwater
"""
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
KIT = ROOT / "data/tilesets/secondary/slateport"
PRIMARY = ROOT / "data/tilesets/primary/leob_general"
KIT_METATILES = 406              # the kit's own: 512-917
SAND = 292                       # General's plain sand
MB_DEEP_SAND = 0x06


def want():
    cells = struct.unpack_from("<12H", (PRIMARY / "metatiles.bin").read_bytes(), SAND * 24)
    layer = struct.unpack_from("<H", (PRIMARY / "metatile_attributes.bin").read_bytes(), SAND * 2)[0] & 0xF000
    return [("soft spoil", cells, layer | MB_DEEP_SAND)]


def metatiles(check):
    mfile, afile = KIT / "metatiles.bin", KIT / "metatile_attributes.bin"
    bad = 0
    for i, (name, cells, attr) in enumerate(want()):
        data, attrs = mfile.read_bytes(), afile.read_bytes()
        n, slot = len(data) // 24, KIT_METATILES + i
        if (n > slot and struct.unpack_from("<12H", data, slot * 24) == tuple(cells)
                and struct.unpack_from("<H", attrs, slot * 2)[0] == attr):
            continue
        if check or n != slot:
            print(f"{name}: not at {512 + slot}" + ("" if check else "; run with --rebuild")); bad += 1
            continue
        mfile.write_bytes(data + struct.pack("<12H", *cells))
        afile.write_bytes(attrs + struct.pack("<H", attr))
    return bad


def main():
    check, rebuild = "--check" in sys.argv, "--rebuild" in sys.argv
    if rebuild:
        for name, per in (("metatiles.bin", 24), ("metatile_attributes.bin", 2)):
            f = KIT / name
            f.write_bytes(f.read_bytes()[:KIT_METATILES * per])
    bad = metatiles(check)
    print("breakwater kit:", "ok" if not bad else f"{bad} problem(s)")
    canvas = ROOT / "data/layouts/ParcelCoastBreakwater/canvas.txt"
    if rebuild and not bad and canvas.exists():
        subprocess.run([sys.executable, str(ROOT / "tools/skald/draw.py"), str(canvas)], check=True, stdout=subprocess.DEVNULL)
        print("  redrawn: ParcelCoastBreakwater")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
