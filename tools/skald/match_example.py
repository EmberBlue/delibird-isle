#!/usr/bin/env python3
"""Recover the metatile grid of a kit's example screenshot by matching rendered metatiles against it.

A community kit ships metatiles and an example map picture, but not the map. How its buildings
and trees are assembled (which metatile sits beside which) is only in the picture. This renders
every metatile of the kit over a primary, finds the picture's scale and grid offset, and prints
the grid of ids, so stamps can be read off it instead of guessed.

  python3 tools/skald/match_example.py KIT_DIR PRIMARY_DIR EXAMPLE.png OUT.txt [scale]

Colours are compared at GBA precision (5 bits a channel). A cell that matches nothing (a sprite
standing there, an event marker) prints as ?.
"""
import collections
import struct
import sys
from pathlib import Path

from PIL import Image


def pal(p):
    L = Path(p).read_text().splitlines()
    return [tuple(int(c) >> 3 for c in L[3 + i].split()) for i in range(int(L[2]))]


def tiles(png):
    im = Image.open(png)
    im = im if im.mode == "P" else im.convert("P")
    w, h = im.size
    px = im.load()
    return [[px[tx * 8 + x, ty * 8 + y] & 15 for y in range(8) for x in range(8)] for ty in range(h // 8) for tx in range(w // 8)]


def load(kit, prim, kit_primary_palettes=True):
    P = []
    for i in range(13):
        src = kit if (i >= 6 or (kit_primary_palettes and (kit / "palettes" / f"{i:02}.pal").exists())) else prim
        f = src / "palettes" / f"{i:02}.pal"
        P.append(pal(f) if f.exists() else [(31, 0, 31)] * 16)
    pt, st = tiles(prim / "tiles.png"), tiles(kit / "tiles.png")
    T = (pt + [[0] * 64] * (512 - len(pt)))[:512] + st
    M = {}
    for d, base in ((prim, 0), (kit, 512)):
        data = (d / "metatiles.bin").read_bytes()
        for i in range(len(data) // 24):
            M[base + i] = struct.unpack_from("<12H", data, i * 24)
    return P, T, M


def render(w, T, P):
    out = [None] * 256
    for layer in range(3):
        for q in range(4):
            e = w[layer * 4 + q]
            t, h, v, p = e & 0x3FF, bool(e & 0x400), bool(e & 0x800), e >> 12
            if t >= len(T) or p > 12:
                continue
            ox, oy = (q % 2) * 8, (q // 2) * 8
            for i, c in enumerate(T[t]):
                if c == 0:
                    continue
                x, y = i % 8, i // 8
                if h:
                    x = 7 - x
                if v:
                    y = 7 - y
                out[(oy + y) * 16 + ox + x] = P[p][c]
    return tuple(out)


def main():
    kit, prim, example, out = Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3], sys.argv[4]
    scales = [int(sys.argv[5])] if len(sys.argv) > 5 else [1, 2, 3]
    P, T, M = load(kit, prim)
    full = {}
    for mid, w in M.items():
        if any(w):
            px = render(w, T, P)
            if all(v is not None for v in px):
                full.setdefault(px, mid)
    ex = Image.open(example).convert("RGB")
    W, H = ex.size
    epx = ex.load()

    def cell(x0, y0, s):
        return tuple(tuple(c >> 3 for c in epx[x0 + s * (i % 16), y0 + s * (i // 16)]) for i in range(256))

    best = None
    for s in scales:
        step = 16 * s
        for oy in range(0, step, 1):
            for ox in range(0, step, 1):
                hits = 0
                for cy in range(0, (H - oy - step) // step, 3):
                    for cx in range(0, (W - ox - step) // step, 3):
                        if cell(ox + cx * step, oy + cy * step, s) in full:
                            hits += 1
                if best is None or hits > best[0]:
                    best = (hits, s, ox, oy)
    hits, s, ox, oy = best
    step = 16 * s
    cols, rows = (W - ox) // step, (H - oy) // step
    grid = [[full.get(cell(ox + cx * step, oy + cy * step, s), -1) for cx in range(cols)] for cy in range(rows)]
    cnt = collections.Counter(v for r in grid for v in r)
    print(f"scale {s}, offset ({ox},{oy}), grid {cols}x{rows}, unmatched {cnt[-1]} of {rows * cols}")
    Path(out).write_text("\n".join(" ".join(f"{v:4d}" if v >= 0 else "   ?" for v in r) for r in grid) + "\n")


if __name__ == "__main__":
    main()
