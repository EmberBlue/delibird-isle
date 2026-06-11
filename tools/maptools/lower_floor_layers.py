#!/usr/bin/env python3
"""Lower floor-surface art out of the over-sprite layer (triple-layer fix).

In this fork's triple-layer metatile system, the third layer renders OVER
sprites (walk-behind: tree canopy, roof eaves). The triple_layer_converter
mapped some FireRed-port floor tiles' art into that layer, so the player
walks UNDER the floor (e.g. the pier planks hide the sprite).

This shifts a metatile's layers downward so the standing surface renders
under sprites: while the bottom layer is empty, shift [B,M,T] -> [M,T,0];
then if the middle is empty and the top has art, move top into middle.
Only runs on an explicit ID list — canopy/eaves tiles must keep their top
art, so a blanket rule would break walk-behinds.

Usage: python3 tools/maptools/lower_floor_layers.py <tileset_dir> <id> [<id>...]
e.g.:  python3 tools/maptools/lower_floor_layers.py \
           data/tilesets/primary/frp_general 313 314 315
"""
import struct
import sys
from pathlib import Path


def fix(words):
    layers = [list(words[0:4]), list(words[4:8]), list(words[8:12])]
    def empty(l): return all(v == 0 for v in l)
    changed = False
    while empty(layers[0]) and not (empty(layers[1]) and empty(layers[2])):
        layers = [layers[1], layers[2], [0, 0, 0, 0]]
        changed = True
    if empty(layers[1]) and not empty(layers[2]):
        layers[1], layers[2] = layers[2], [0, 0, 0, 0]
        changed = True
    return [v for l in layers for v in l], changed


def main():
    tsdir = Path(sys.argv[1])
    ids = [int(a) for a in sys.argv[2:]]
    p = tsdir / "metatiles.bin"
    data = bytearray(p.read_bytes())
    assert len(data) % 24 == 0, f"{p}: not triple-layer format"
    for mid in ids:
        words = struct.unpack_from("<12H", data, mid * 24)
        new, changed = fix(words)
        struct.pack_into("<12H", data, mid * 24, *new)
        print(f"metatile {mid}: {'lowered' if changed else 'already grounded'}")
    p.write_bytes(data)


if __name__ == "__main__":
    main()
