#!/usr/bin/env python3
"""Edit single tiles of a map layout (data/layouts/<Layout>/map.bin) in place.

  python3 tools/skald/layout_edit.py MAP show x,y
  python3 tools/skald/layout_edit.py MAP elev x,y[:x2,y2] N          set the elevation of a tile or rect
  python3 tools/skald/layout_edit.py MAP copy x,y from x2,y2         copy metatile, collision and elevation
  python3 tools/skald/layout_edit.py MAP set x,y METATILE [col] [elev]

MAP is the map folder name (ParcelHighlands). The file keeps its size, so the ROM's data
addresses do not move: savestates taken on the previous build stay valid. When the layout is
generated (build.py or canvas.txt), every edit is also recorded in its fixes.json, which the
generator re-applies, so the edit survives regeneration (tools/skald/layout_fixes.py). Touch
data/maps.s afterwards (or run make, which notices the .bin) so the ROM is rebuilt.
"""
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402


def load(name):
    mj, lay, W, H, words, tiles = audit.load_map(name)
    return lay, W, H, list(words), tiles


def save(lay, words):
    path = ROOT / lay["blockdata_filepath"]
    before = struct.unpack(f"<{len(words)}H", path.read_bytes())
    path.write_bytes(struct.pack(f"<{len(words)}H", *words))
    # A generated layout (build.py / canvas.txt) would lose this edit on its next regeneration:
    # record every changed tile in fixes.json, which the generator re-applies (layout_fixes.py).
    here = path.parent
    if (here / "build.py").exists() or (here / "canvas.txt").exists():
        import layout_fixes
        fixes = layout_fixes.load(here)
        W = lay["width"]
        for i, (a, b) in enumerate(zip(before, words)):
            if a != b:
                fixes[(i % W, i // W)] = b
        layout_fixes.save(here, fixes)


def word(mid, col, elev):
    return (mid & 0x3FF) | ((col & 3) << 10) | ((elev & 0xF) << 12)


def describe(words, tiles, W, x, y):
    mid, col, elev = audit.decode(words[y * W + x])
    beh = audit.BEH.get(tiles.get(mid, ((), 0, 0))[1], "?")
    return f"({x},{y}) metatile {mid} collision {col} elevation {elev} {beh}"


def main():
    name, cmd = sys.argv[1], sys.argv[2]
    lay, W, H, words, tiles = load(name)
    if cmd == "show":
        x, y = (int(v) for v in sys.argv[3].split(","))
        print(describe(words, tiles, W, x, y))
        return
    if cmd == "elev":
        spec, n = sys.argv[3], int(sys.argv[4])
        a, _, b = spec.partition(":")
        x0, y0 = (int(v) for v in a.split(","))
        x1, y1 = (int(v) for v in b.split(",")) if b else (x0, y0)
        for y in range(min(y0, y1), max(y0, y1) + 1):
            for x in range(min(x0, x1), max(x0, x1) + 1):
                mid, col, _ = audit.decode(words[y * W + x])
                words[y * W + x] = word(mid, col, n)
                print("set", describe(words, tiles, W, x, y))
    elif cmd == "copy":
        x, y = (int(v) for v in sys.argv[3].split(","))
        assert sys.argv[4] == "from"
        sx, sy = (int(v) for v in sys.argv[5].split(","))
        words[y * W + x] = words[sy * W + sx]
        print("set", describe(words, tiles, W, x, y))
    elif cmd == "set":
        x, y = (int(v) for v in sys.argv[3].split(","))
        mid = int(sys.argv[4])
        _, col, elev = audit.decode(words[y * W + x])
        col = int(sys.argv[5]) if len(sys.argv) > 5 else col
        elev = int(sys.argv[6]) if len(sys.argv) > 6 else elev
        words[y * W + x] = word(mid, col, elev)
        print("set", describe(words, tiles, W, x, y))
    else:
        sys.exit(f"unknown command {cmd}")
    save(lay, words)


if __name__ == "__main__":
    main()
