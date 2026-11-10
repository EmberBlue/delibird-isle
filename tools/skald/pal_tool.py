#!/usr/bin/env python3
"""Palette-aware map renderer: see a map from its tile data, and know which palette entry
every visible pixel uses (for restyling tilesets without guessing).

  python3 tools/skald/pal_tool.py render    MAP OUT.png [scale]
  python3 tools/skald/pal_tool.py info      MAP                 -> per palette entry: RGB, % of the map, top metatiles
  python3 tools/skald/pal_tool.py mask      MAP OUT.png P:I,I.. [P:I..]        -> those entries magenta
  python3 tools/skald/pal_tool.py multimask MAP OUT.png "P:I,I" "P:I+Q:J" ...  -> one colour per group
  python3 tools/skald/pal_tool.py mts       MAP P:I             -> metatile ids whose pixels use that entry

MAP is a map folder name (ParcelFernwick). Every visible pixel is tracked as pal*16 + idx
(255 = nothing drawn), so a .pal edit re-renders exactly as the GBA shows it. Tilesets are
resolved through audit.tileset_dir (gTileset_General is data/tilesets/primary/leob_general;
a tileset whose header lives elsewhere falls back to data/tilesets/<kind>/<lowercase name>).
"""
import json
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools/maptools"))
sys.path.insert(0, str(Path(__file__).resolve().parent))
import metatile_sheet as ms  # noqa: E402
import audit  # noqa: E402

M, T = 16, 8


def tdir(sym, kind):
    d = audit.tileset_dir(sym)
    return d if d else ROOT / "data/tilesets" / kind / sym.replace("gTileset_", "").replace("Primary_", "").lower()


def load(map_name):
    mj = json.load(open(ROOT / "data/maps" / map_name / "map.json"))
    lay = {l["id"]: l for l in json.load(open(ROOT / "data/layouts/layouts.json"))["layouts"]}[mj["layout"]]
    prim, sec = tdir(lay["primary_tileset"], "primary"), tdir(lay["secondary_tileset"], "secondary")
    pals = ms.load_palettes(prim, sec)
    pt = ms.load_tiles(prim / "tiles.png")
    st = ms.load_tiles(sec / "tiles.png")
    tiles = (pt + [[0] * 64] * (ms.NUM_TILES_IN_PRIMARY - len(pt)))[:ms.NUM_TILES_IN_PRIMARY] + st
    mts = {}
    for d, base in ((prim, 0), (sec, ms.NUM_METATILES_IN_PRIMARY)):
        data = (d / "metatiles.bin").read_bytes()
        for i in range(len(data) // 24):
            mts[base + i] = struct.unpack_from("<12H", data, i * 24)
    W, H = lay["width"], lay["height"]
    words = struct.unpack(f"<{W*H}H", (ROOT / lay["blockdata_filepath"]).read_bytes())
    return dict(prim=prim, sec=sec, pals=pals, tiles=tiles, mts=mts, W=W, H=H, words=words, lay=lay)


def metatile_codes(words12, tiles):
    """16x16 list of codes pal*16+idx (255 = transparent/nothing)."""
    out = [255] * (M * M)
    quads = [(0, 0), (T, 0), (0, T), (T, T)]
    for layer in range(3):
        for q, (qx, qy) in enumerate(quads):
            e = words12[layer * 4 + q]
            tid, hf, vf, pal = e & 0x3FF, (e >> 10) & 1, (e >> 11) & 1, (e >> 12) & 0xF
            if tid >= len(tiles):
                continue
            data = tiles[tid]
            for y in range(T):
                for x in range(T):
                    ci = data[y * T + x]
                    if layer > 0 and ci == 0:
                        continue
                    sx = (T - 1 - x) if hf else x
                    sy = (T - 1 - y) if vf else y
                    out[(qy + sy) * M + qx + sx] = pal * 16 + ci
    return out


def code_map(d):
    W, H = d["W"], d["H"]
    img = Image.new("L", (W * M, H * M), 255)
    cache = {}
    for y in range(H):
        for x in range(W):
            mid = d["words"][y * W + x] & 0x3FF
            if mid not in cache:
                cache[mid] = Image.frombytes("L", (M, M), bytes(metatile_codes(d["mts"].get(mid, (0,) * 12), d["tiles"])))
            img.paste(cache[mid], (x * M, y * M))
    return img


def table(pals, override=None):
    flat = []
    for p in range(16):
        for i in range(16):
            c = pals[p][i] if p < len(pals) else (255, 0, 255)
            if override and (p, i) in override:
                c = override[(p, i)]
            flat.extend(c)
    flat[255 * 3:255 * 3 + 3] = [0, 0, 0]
    return flat


def to_rgb(code_img, pals, override=None, scale=1):
    p = code_img.copy()
    p.putpalette(table(pals, override))
    rgb = p.convert("RGB")
    if scale != 1:
        rgb = rgb.resize((rgb.width * scale, rgb.height * scale), Image.NEAREST)
    return rgb


def parse_sel(args):
    sel = set()
    for a in args:
        p, idxs = a.split(":")
        for i in idxs.split(","):
            sel.add((int(p), int(i)))
    return sel


def per_code_metatiles(d):
    W, H = d["W"], d["H"]
    seen, per = {}, defaultdict(Counter)
    for y in range(H):
        for x in range(W):
            mid = d["words"][y * W + x] & 0x3FF
            if mid not in seen:
                seen[mid] = Counter(metatile_codes(d["mts"].get(mid, (0,) * 12), d["tiles"]))
            for c, n in seen[mid].items():
                per[c][mid] += n
    return per


def main():
    cmd, map_name = sys.argv[1], sys.argv[2]
    d = load(map_name)
    cm = code_map(d)
    if cmd == "render":
        to_rgb(cm, d["pals"], scale=int(sys.argv[4]) if len(sys.argv) > 4 else 1).save(sys.argv[3])
    elif cmd == "mask":
        sel = parse_sel(sys.argv[4:])
        to_rgb(cm, d["pals"], {k: (255, 0, 255) for k in sel}).save(sys.argv[3])
        print("masked", sorted(sel))
    elif cmd == "multimask":
        names = ["magenta", "cyan", "yellow", "lime", "orange", "red"]
        colours = [(255, 0, 255), (0, 255, 255), (255, 255, 0), (0, 255, 0), (255, 128, 0), (255, 0, 0)]
        override = {}
        for gi, grp in enumerate(sys.argv[4:]):
            for k in parse_sel(grp.split("+")):
                override[k] = colours[gi % 6]
            print(f"group {gi} {names[gi % 6]}: {grp}")
        to_rgb(cm, d["pals"], override).save(sys.argv[3])
    elif cmd == "info":
        hist = cm.histogram()
        total = sum(hist[:208]) or 1
        per = per_code_metatiles(d)
        print(f"{map_name}: {d['lay']['primary_tileset']} + {d['lay']['secondary_tileset']}  ({d['W']}x{d['H']})")
        for p in range(13):
            print(f"pal {p:2d} ({'prim' if p < 6 else 'sec '}):")
            for i in range(16):
                c = p * 16 + i
                if hist[c] == 0:
                    continue
                rgb = d["pals"][p][i]
                top = ", ".join(str(m) for m, _ in per[c].most_common(6))
                print(f"   {i:2d} {rgb[0]:3d},{rgb[1]:3d},{rgb[2]:3d}  {100*hist[c]/total:5.2f}%  mts: {top}")
    elif cmd == "mts":
        sel = parse_sel(sys.argv[3:])
        per = per_code_metatiles(d)
        cnt = Counter()
        for (p, i) in sel:
            for mid, n in per[p * 16 + i].items():
                cnt[mid] += n
        print(sorted((m, n) for m, n in cnt.items() if n))


if __name__ == "__main__":
    main()
