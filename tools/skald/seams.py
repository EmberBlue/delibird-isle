#!/usr/bin/env python3
"""What a connection shows of the map next door must look the same in both tilesets.

Walking across a connection swaps the secondary tileset (its tiles, its metatiles, its palettes
6-12) at the moment the player steps over, while the rows of the map just left are still on
screen. Anything in those rows that draws a secondary tile, or a colour from a secondary
palette, flashes into the newcomer's art: Mistwood's entrance grass came out as roof tiles once.
So near a seam between two different secondaries a map may only use

  primary metatiles, whose tiles are all primary tiles, in palettes 0-5
  or in a secondary palette slot that holds the very same colours in both kits (the fir's 12)

and connected maps must share the primary outright.

Only what is on screen counts. The screen is fifteen tiles wide and ten tall, the player in the
middle and the rows offset by half a tile: standing on the far side of a seam the player sees
four and a half rows of this map past a north or south edge, and seven columns past an east or
west one, for as long as they stand there. So from each cell where the edge can be crossed
(walkable on both sides) the check covers seven columns to either side and five rows in, or five
rows to either side and seven columns in. One row (or column) further is on screen only for the
few frames of the step that crosses; it is not checked.

  python3 tools/skald/seams.py            list every offending metatile per seam; exit 1 if any
  python3 tools/skald/seams.py A B ...    only seams of these maps (the others are listed as a count)
"""
import json
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402
import pal_tool  # noqa: E402

DEPTH = {"up": 5, "down": 5, "left": 7, "right": 7}


def pal_text(tdir, n):
    f = tdir / "palettes" / f"{n:02}.pal"
    return f.read_text().split() if f.exists() else None


def check():
    layouts = {l["id"]: l for l in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"] if "id" in l}
    maps = {}
    for p in sorted((ROOT / "data/maps").glob("Parcel*/map.json")):
        mj = json.loads(p.read_text())
        maps[mj["id"]] = (p.parent.name, mj, layouts[mj["layout"]])
    out = []
    for mid_, (name, mj, lay) in maps.items():
        if name in audit.RETIRED_MAPS:
            continue
        for c in mj.get("connections") or []:
            if c["map"] not in maps:
                continue
            oname, omj, olay = maps[c["map"]]
            if lay["primary_tileset"] != olay["primary_tileset"]:
                out.append(f"{name} -> {oname}: different primaries ({lay['primary_tileset']} / {olay['primary_tileset']})")
                continue
            if lay["secondary_tileset"] == olay["secondary_tileset"]:
                continue
            prim = pal_tool.tdir(lay["primary_tileset"], "primary")
            sec, osec = pal_tool.tdir(lay["secondary_tileset"], "secondary"), pal_tool.tdir(olay["secondary_tileset"], "secondary")
            shared = {n for n in range(6, 13) if pal_text(sec, n) is not None and pal_text(sec, n) == pal_text(osec, n)}
            pm = (prim / "metatiles.bin").read_bytes()
            W, H = lay["width"], lay["height"]
            words = struct.unpack(f"<{W * H}H", (ROOT / lay["blockdata_filepath"]).read_bytes())
            d, depth = c["direction"], DEPTH[c["direction"]]
            oW, oH = olay["width"], olay["height"]
            owords = struct.unpack(f"<{oW * oH}H", (ROOT / olay["blockdata_filepath"]).read_bytes())
            off = c["offset"]
            cross = []                       # cells of this map's edge where the player can step over
            if d in ("up", "down"):
                y, oy = (0, oH - 1) if d == "up" else (H - 1, 0)
                cross = [(x, y) for x in range(W) if 0 <= x - off < oW
                         and not (words[y * W + x] >> 10) & 3 and not (owords[oy * oW + x - off] >> 10) & 3]
            else:
                x, ox = (0, oW - 1) if d == "left" else (W - 1, 0)
                cross = [(x, y) for y in range(H) if 0 <= y - off < oH
                         and not (words[y * W + x] >> 10) & 3 and not (owords[(y - off) * oW + ox] >> 10) & 3]
            cells = set()
            for cx, cy in cross:
                if d in ("up", "down"):
                    ys = range(0, depth) if d == "up" else range(H - depth, H)
                    cells.update((x, y) for y in ys for x in range(max(0, cx - 7), min(W, cx + 8)))
                else:
                    xs = range(0, depth) if d == "left" else range(W - depth, W)
                    cells.update((x, y) for x in xs for y in range(max(0, cy - 5), min(H, cy + 6)))
            cells = sorted(cells)
            bad = {}
            for x, y in cells:
                m = words[y * W + x] & 0x3FF
                why = None
                if m >= 512:
                    why = "secondary metatile"
                else:
                    for e in struct.unpack_from("<12H", pm, m * 24):
                        if not e:
                            continue
                        if (e & 0x3FF) >= 512:
                            why = "draws a secondary tile"
                        elif (e >> 12) >= 6 and (e >> 12) not in shared:
                            why = f"palette {e >> 12} differs between the two kits"
                if why:
                    bad.setdefault((m, why), []).append((x, y))
            for (m, why), where in sorted(bad.items()):
                out.append(f"{name} -> {oname} ({d}): metatile {m}, {why}: {len(where)} cell(s), first at {where[0]}")
    return out


if __name__ == "__main__":
    only = set(sys.argv[1:])
    lines = check()
    shown = [l for l in lines if not only or l.split(" -> ")[0] in only]
    for line in shown:
        print(line)
    if only:
        print(f"\n{len(shown)} seam problem(s) on {', '.join(sorted(only))}; {len(lines) - len(shown)} on other maps")
    else:
        print(f"\n{len(lines)} seam problem(s)")
    sys.exit(1 if shown else 0)
