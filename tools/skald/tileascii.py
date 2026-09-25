#!/usr/bin/env python3
"""Print metatiles as ASCII art (text only) so tile roles can be read without images.

  python3 tools/skald/tileascii.py --primary data/tilesets/primary/frp_general \
      --secondary data/tilesets/secondary/frp_vermilion_city --tiles 40-63 --cols 4
Rows of `--cols` tiles are composited side by side (like a test layout) and
printed with one char per pixel-pair: each 16x16 metatile becomes 8x16 chars.
"""
import argparse, struct, sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "maptools"))
import metatile_sheet as ms  # noqa: E402


def classify(rgb, transparent):
    if transparent:
        return " "
    r, g, b = rgb
    mx, mn = max(rgb), min(rgb)
    if mx < 60: return "#"
    if mx - mn < 28: return "W" if mx > 190 else ("w" if mx > 120 else "-")
    if b > r and b > g: return "B" if mx > 150 else "b"
    if g > r and g > b: return "G" if mx > 150 else "g"
    if r > g and r > b and g < 110: return "R" if mx > 150 else "r"
    if r > b and g > b: return "Y" if mx > 200 else ("y" if mx > 150 else "o")
    return "?"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--primary", required=True)
    ap.add_argument("--secondary", required=True)
    ap.add_argument("--tiles", required=True, help="e.g. 40-63 or 40,41,42")
    ap.add_argument("--cols", type=int, default=4)
    ap.add_argument("--step", type=int, default=1, help="print every Nth pixel row (2 = half height)")
    a = ap.parse_args()
    ids = []
    for part in a.tiles.split(","):
        if "-" in part:
            lo, hi = part.split("-"); ids += list(range(int(lo), int(hi) + 1))
        else:
            ids.append(int(part))
    pals = ms.load_palettes(a.primary, a.secondary)
    prim = ms.load_tiles(Path(a.primary, "tiles.png"))
    sec = ms.load_tiles(Path(a.secondary, "tiles.png"))
    tiles = (prim + [[0] * 64] * (ms.NUM_TILES_IN_PRIMARY - len(prim)))[:ms.NUM_TILES_IN_PRIMARY] + sec
    mts = {}
    for path, base in [(a.primary, 0), (a.secondary, ms.NUM_METATILES_IN_PRIMARY)]:
        data = Path(path, "metatiles.bin").read_bytes()
        for i in range(len(data) // 24):
            mts[base + i] = struct.unpack_from("<12H", data, i * 24)

    def render(mid):
        px = [[(None, True)] * 16 for _ in range(16)]
        for layer in range(3):
            for q in range(4):
                w = mts[mid][layer * 4 + q]
                tid, pal, hf, vf = w & 0x3FF, (w >> 12) & 0xF, (w >> 10) & 1, (w >> 11) & 1
                t = tiles[tid] if tid < len(tiles) else [0] * 64
                ox, oy = (q % 2) * 8, (q // 2) * 8
                for y in range(8):
                    for x in range(8):
                        sx = 7 - x if hf else x
                        sy = 7 - y if vf else y
                        ci = t[sy * 8 + sx]
                        if ci == 0 and layer > 0:
                            continue
                        if ci == 0 and layer == 0:
                            px[oy + y][ox + x] = (None, True); continue
                        px[oy + y][ox + x] = (pals[pal][ci], False)
        return px

    for r in range(0, len(ids), a.cols):
        row = ids[r:r + a.cols]
        print("   " + "".join(f"{mid:<9}" for mid in row))
        rendered = [render(m) for m in row]
        for y in range(0, 16, a.step):
            line = ""
            for px in rendered:
                line += "".join(classify(*px[y][x]) for x in range(0, 16, 2)) + " "
            print(f"{y:2} {line}")
        print()


if __name__ == "__main__":
    main()
