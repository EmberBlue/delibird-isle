#!/usr/bin/env python3
"""Start a new map from an existing layout (a vanilla city, a route) so it can
be reworked by hand instead of drawn from nothing.

  python3 tools/skald/import_layout.py --from LAYOUT_RUSTBORO_CITY --name ParcelFernwick \
      --primary gTileset_General --secondary gTileset_leob_rustboro \
      --mapsec MAPSEC_SKALD_STATION --music MUS_RUSTBORO --type MAP_TYPE_CITY --show-name

Copies the source map.bin/border.bin into data/layouts/<Name>/ as base.bin /
border.bin, writes a build.py there (the map IS that script: it loads base.bin,
applies paint ops with raw metatile ids, writes map.bin), adds the layouts.json
entry, and registers the map through newmap.py. Edit build.py, run it, build.
"""
import argparse, json, re, shutil, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
BUILD_TEMPLATE = '''#!/usr/bin/env python3
"""{name}: reworked from {src}. This script is the map source -- run it after
editing to regenerate map.bin. Paint ops use raw metatile ids (see the id grid:
python3 tools/skald/idgrid.py {name})."""
import struct
from pathlib import Path

HERE = Path(__file__).resolve().parent
W, H = {w}, {h}
words = list(struct.unpack(f"<{{W*H}}H", (HERE / "base.bin").read_bytes()))

def get(x, y): return words[y * W + x] & 0x3FF
def col(x, y): return (words[y * W + x] >> 10) & 3
def put(x, y, mid, c=None, e=None):
    """Set a tile. c/e default: keep the base tile's collision/elevation."""
    old = words[y * W + x]
    if c is None: c = (old >> 10) & 3
    if e is None: e = old >> 12
    words[y * W + x] = (e << 12) | (c << 10) | mid
def rect(x0, y0, x1, y1, mid, c=None, e=None):
    for y in range(y0, y1 + 1):
        for x in range(x0, x1 + 1): put(x, y, mid, c, e)
def copy_block(sx, sy, w, h, dx, dy):
    """Move a rectangle of the base (buildings, ponds) to a new place."""
    block = [[words[(sy + j) * W + (sx + i)] for i in range(w)] for j in range(h)]
    for j in range(h):
        for i in range(w): words[(dy + j) * W + (dx + i)] = block[j][i]

# ---- edits ------------------------------------------------------------------

# ---- write ------------------------------------------------------------------
(HERE / "map.bin").write_bytes(b"".join(struct.pack("<H", v) for v in words))
print(f"{name}: wrote {{W}}x{{H}} map.bin")
'''


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--from", dest="src", required=True)
    ap.add_argument("--name", required=True)
    ap.add_argument("--primary", required=True)
    ap.add_argument("--secondary", required=True)
    ap.add_argument("--mapsec", required=True)
    ap.add_argument("--music", default="MUS_RUSTBORO")
    ap.add_argument("--type", default="MAP_TYPE_CITY")
    ap.add_argument("--show-name", action="store_true")
    a = ap.parse_args()
    lp = ROOT / "data/layouts/layouts.json"
    lj = json.loads(lp.read_text())
    src = next(l for l in lj["layouts"] if l["id"] == a.src)
    name = a.name
    layout_id = "LAYOUT_" + re.sub(r"(?<!^)(?=[A-Z])", "_", name).upper()
    ldir = ROOT / "data/layouts" / name
    if ldir.exists():
        raise SystemExit(f"{ldir} exists")
    ldir.mkdir(parents=True)
    shutil.copy(ROOT / src["blockdata_filepath"], ldir / "base.bin")
    shutil.copy(ROOT / src["blockdata_filepath"], ldir / "map.bin")
    shutil.copy(ROOT / src["border_filepath"], ldir / "border.bin")
    (ldir / "build.py").write_text(BUILD_TEMPLATE.format(name=name, src=a.src, w=src["width"], h=src["height"]))
    lj["layouts"].append({
        "id": layout_id, "name": f"{name}_Layout", "width": src["width"], "height": src["height"],
        "primary_tileset": a.primary, "secondary_tileset": a.secondary,
        "border_filepath": f"data/layouts/{name}/border.bin",
        "blockdata_filepath": f"data/layouts/{name}/map.bin"})
    lp.write_text(json.dumps(lj, indent=2) + "\n")
    cmd = [sys.executable, str(ROOT / "tools/skald/newmap.py"), "--name", name, "--layout", layout_id,
           "--mapsec", a.mapsec, "--music", a.music, "--type", a.type] + (["--show-name"] if a.show_name else [])
    subprocess.run(cmd, check=True)
    print(f"{name}: {src['width']}x{src['height']} from {a.src}; edit {ldir/'build.py'}")


if __name__ == "__main__":
    main()
