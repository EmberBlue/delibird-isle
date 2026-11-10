#!/usr/bin/env python3
"""Per-layout tile fixes that survive regeneration.

A remixed map's map.bin is generated (build.py over base.bin, or draw.py over canvas.txt). Tiles
edited afterwards with layout_edit.py -- an elevation, a stair, a doorstep -- used to live only in
map.bin and would vanish the next time the generator ran. They are recorded in
data/layouts/<Layout>/fixes.json as [x, y, word] and re-applied by the generator as its last step:

    build.py:  layout_fixes.apply(HERE, words, W)          (flat list of u16)
    draw.py:   layout_fixes.apply_grid(out_dir, grid)       (rows of u16)
    layout_edit.py records every edit with record().

  python3 tools/skald/layout_fixes.py --check     regenerate every layout in memory and compare with
                                                  map.bin (must print 0 differing layouts)

A fix wins over the generator for its tile. If a generator change is meant to replace one, delete
that entry from fixes.json.
"""
import json
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def load(here):
    f = Path(here) / "fixes.json"
    return {(x, y): w for x, y, w in json.loads(f.read_text())["tiles"]} if f.exists() else {}


def save(here, fixes):
    f = Path(here) / "fixes.json"
    if not fixes:
        if f.exists():
            f.unlink()
        return
    rows = [[x, y, w] for (x, y), w in sorted(fixes.items(), key=lambda kv: (kv[0][1], kv[0][0]))]
    f.write_text(json.dumps({"comment": "tile fixes re-applied after generation: [x, y, word] with word = metatile | collision<<10 | elevation<<12 (tools/skald/layout_fixes.py)",
                             "tiles": rows}, indent=None, separators=(",", ":")).replace("],[", "],\n[").replace('"tiles":[[', '"tiles":[\n[') + "\n")


def apply(here, words, W):
    for (x, y), w in load(here).items():
        words[y * W + x] = w


def apply_grid(here, grid):
    for (x, y), w in load(here).items():
        grid[y][x] = w


def record(here, x, y, word):
    fixes = load(here)
    fixes[(x, y)] = word
    save(here, fixes)


def generators():
    for d in sorted((ROOT / "data/layouts").glob("Parcel*")):
        if (d / "build.py").exists():
            yield d, [sys.executable, str(d / "build.py")]
        elif (d / "canvas.txt").exists():
            yield d, [sys.executable, str(ROOT / "tools/skald/draw.py"), str(d / "canvas.txt")]


def regenerate(d, cmd):
    """Run the generator and return its map.bin, leaving every file as it was."""
    keep = {p: p.read_bytes() for p in d.iterdir() if p.is_file()}
    try:
        r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
        if r.returncode != 0:
            print(f"{d.name}: generator does not run ({(r.stderr or r.stdout).strip().splitlines()[-1][:120]}) -- map.bin is the only source")
            return None
        return (d / "map.bin").read_bytes()
    finally:
        for p, data in keep.items():
            p.write_bytes(data)
        for p in d.iterdir():
            if p.is_file() and p not in keep:
                p.unlink()


def main():
    bad = 0
    for d, cmd in generators():
        cur = (d / "map.bin").read_bytes()
        gen = regenerate(d, cmd)
        if gen is None:
            continue
        if cur != gen:
            n = sum(1 for i in range(0, len(cur), 2) if cur[i:i + 2] != gen[i:i + 2])
            bad += 1
            print(f"{d.name}: map.bin differs from its generator in {n} tile(s)")
            if "--adopt" in sys.argv:
                # one-off: take map.bin as the truth and record the difference as fixes
                W = next(l for l in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]
                         if l["blockdata_filepath"].endswith(f"{d.name}/map.bin"))["width"]
                fixes = load(d)
                cw = struct.unpack(f"<{len(cur)//2}H", cur); gw = struct.unpack(f"<{len(gen)//2}H", gen)
                for i, (a, b) in enumerate(zip(cw, gw)):
                    if a != b:
                        fixes[(i % W, i // W)] = a
                save(d, fixes)
                print(f"   adopted into fixes.json ({len(fixes)} tiles)")
    print(f"\n{bad} layout(s) differ from their generator")


if __name__ == "__main__":
    main()
