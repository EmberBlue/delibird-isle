#!/usr/bin/env python3
"""Make a secondary tileset usable under the FireRed-port General primary.

`gTileset_Primary_frp_general` is not self-contained: 69 of the 8x8 tiles its metatiles draw (plain
grass, the lower corners of its trees, path edges) live at fixed indices 512-639 of whatever
SECONDARY sheet is loaded, and every `frp_*` secondary carries an identical copy of them there.
Pair that primary with a secondary from anywhere else and those metatiles draw the newcomer's
tiles in FireRed's palette: the grass of Mistwood's entrance came out as red roof tiles
(2026-11-10, the Shady Forest kit).

This moves the newcomer's own tiles off the 69 shared slots into free slots of its sheet,
rewrites its metatiles to follow, and installs the shared tiles. Idempotent.

  python3 tools/skald/kit_share_frp.py shady_forest            apply
  python3 tools/skald/kit_share_frp.py shady_forest --check    exit 1 if the shared tiles are not in place
"""
import struct
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
SEC = ROOT / "data/tilesets/secondary"
FRP = ROOT / "data/tilesets/primary/frp_general"
DONOR = SEC / "frp_vermilion_city"          # any frp_* secondary: the shared block is identical in all


def refs(mb):
    out = set()
    for i in range(len(mb) // 24):
        for e in struct.unpack_from("<12H", mb, i * 24):
            if e and (e & 0x3FF) >= 512:
                out.add(e & 0x3FF)
    return out


def get(im, t):
    x0, y0 = ((t - 512) % 16) * 8, ((t - 512) // 16) * 8
    return [im.getpixel((x0 + x, y0 + y)) & 15 for y in range(8) for x in range(8)]


def put(im, t, px):
    x0, y0 = ((t - 512) % 16) * 8, ((t - 512) // 16) * 8
    for i, v in enumerate(px):
        im.putpixel((x0 + i % 8, y0 + i // 8), v)


def main():
    name = sys.argv[1]
    check = "--check" in sys.argv
    kit = SEC / name
    shared = sorted(refs((FRP / "metatiles.bin").read_bytes()))
    donor = Image.open(DONOR / "tiles.png")
    im = Image.open(kit / "tiles.png")
    assert im.mode == "P" and im.size[0] == 128, im
    n_tiles = (im.size[1] // 8) * 16
    assert max(shared) - 512 < n_tiles, "the kit's sheet is too short for the shared block"
    want = {t: get(donor, t) for t in shared}
    if all(get(im, t) == want[t] for t in shared):
        print(f"{name}: the {len(shared)} shared FireRed tiles are in place")
        return 0
    if check:
        print(f"{name}: the shared FireRed tiles are NOT in place")
        return 1
    mb = bytearray((kit / "metatiles.bin").read_bytes())
    used = refs(mb)
    clash = sorted(used & set(shared))
    free = [t for t in range(512, 512 + n_tiles) if t not in used and t not in want]
    blank = [t for t in free if not any(get(im, t))]          # prefer slots that are really empty
    free = blank + [t for t in free if t not in blank]
    if len(free) < len(clash):
        raise SystemExit(f"{name}: {len(clash)} tiles to move, {len(free)} free slots")
    move = dict(zip(clash, free))
    for old, new in move.items():
        put(im, new, get(im, old))
    for i in range(len(mb) // 2):
        e = struct.unpack_from("<H", mb, i * 2)[0]
        if e and (e & 0x3FF) in move:
            struct.pack_into("<H", mb, i * 2, (e & ~0x3FF) | move[e & 0x3FF])
    for t in shared:
        put(im, t, want[t])
    im.save(kit / "tiles.png", bits=4)
    (kit / "metatiles.bin").write_bytes(bytes(mb))
    print(f"{name}: moved {len(move)} of its tiles, installed {len(shared)} shared FireRed tiles")
    return 0


if __name__ == "__main__":
    sys.exit(main())
