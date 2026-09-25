#!/usr/bin/env python3
"""Scaffold + register a new map so nothing on the add-content checklist is missed.

  python3 tools/skald/newmap.py --name ParcelDockNorth --w 40 --h 30 \
      --primary gTileset_Primary_frp_general --secondary gTileset_frp_vermilion_city \
      --mapsec MAPSEC_PARCEL_ISLE --music MUS_DEWFORD --type MAP_TYPE_ROUTE
  python3 tools/skald/newmap.py --name ParcelIsleHouse3 --layout LAYOUT_HOUSE3 \
      --mapsec MAPSEC_PARCEL_ISLE --music MUS_DEWFORD --type MAP_TYPE_INDOOR

Writes data/maps/<Name>/{map.json,scripts.pory}, registers the name in
data/maps/map_groups.json (gMapGroup_TownsAndRoutes) and data/event_scripts.s,
and for a new layout adds the layouts.json entry + a blank canvas.txt under
data/layouts/<Name>/ for tools/skald/draw.py. Refuses to touch anything that
already exists. Map id = MAP_ + SCREAMING_SNAKE(name).
"""
import argparse, json, re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def snake(name):
    return re.sub(r"(?<!^)(?=[A-Z])", "_", name).upper()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--name", required=True)
    ap.add_argument("--layout", help="reuse an existing LAYOUT_* instead of creating one")
    ap.add_argument("--w", type=int)
    ap.add_argument("--h", type=int)
    ap.add_argument("--primary")
    ap.add_argument("--secondary")
    ap.add_argument("--legend", help="legend name for the canvas header")
    ap.add_argument("--mapsec", required=True)
    ap.add_argument("--music", default="MUS_DEWFORD")
    ap.add_argument("--type", default="MAP_TYPE_TOWN")
    ap.add_argument("--weather", default="WEATHER_NONE")
    ap.add_argument("--show-name", action="store_true")
    a = ap.parse_args()

    name = a.name
    map_id = "MAP_" + snake(name)
    mdir = ROOT / "data/maps" / name
    if mdir.exists():
        raise SystemExit(f"{mdir} exists")

    if a.layout:
        layout_id = a.layout
    else:
        if not (a.w and a.h and a.primary and a.secondary):
            raise SystemExit("new layout needs --w --h --primary --secondary")
        layout_id = "LAYOUT_" + snake(name)
        ldir = ROOT / "data/layouts" / name
        if ldir.exists():
            raise SystemExit(f"{ldir} exists")
        ldir.mkdir(parents=True)
        lp = ROOT / "data/layouts/layouts.json"
        lj = json.loads(lp.read_text())
        if any(l["id"] == layout_id for l in lj["layouts"]):
            raise SystemExit(f"{layout_id} already in layouts.json")
        lj["layouts"].append({
            "id": layout_id, "name": f"{name}_Layout", "width": a.w, "height": a.h,
            "primary_tileset": a.primary, "secondary_tileset": a.secondary,
            "border_filepath": f"data/layouts/{name}/border.bin",
            "blockdata_filepath": f"data/layouts/{name}/map.bin"})
        lp.write_text(json.dumps(lj, indent=2) + "\n")
        legend = a.legend or "TODO"
        (ldir / "canvas.txt").write_text(
            f"legend {legend}\nsize {a.w} {a.h}\n---\n" + "\n".join(["." * a.w] * a.h) + "\n")
        # placeholder bins so the tree builds before the drawing exists
        import struct
        (ldir / "map.bin").write_bytes(struct.pack(f"<{a.w*a.h}H", *([(3 << 12) | 1] * (a.w * a.h))))
        (ldir / "border.bin").write_bytes(struct.pack("<4H", *([(1 << 10) | 1] * 4)))

    mdir.mkdir(parents=True)
    (mdir / "map.json").write_text(json.dumps({
        "id": map_id, "name": name, "layout": layout_id, "music": a.music,
        "region_map_section": a.mapsec, "requires_flash": False, "weather": a.weather,
        "map_type": a.type, "allow_cycling": False, "allow_escaping": False,
        "allow_running": True, "show_map_name": bool(a.show_name),
        "battle_scene": "MAP_BATTLE_SCENE_NORMAL", "connections": [],
        "object_events": [], "warp_events": [], "coord_events": [], "bg_events": []},
        indent=2) + "\n")
    (mdir / "scripts.pory").write_text(
        f"// {name} -- \n\nmapscripts {name}_MapScripts {{\n}}\n")

    gp = ROOT / "data/maps/map_groups.json"
    gj = json.loads(gp.read_text())
    if name in gj["gMapGroup_TownsAndRoutes"]:
        raise SystemExit("already in map_groups.json")
    gj["gMapGroup_TownsAndRoutes"].append(name)
    gp.write_text(json.dumps(gj, indent=2) + "\n")

    es = ROOT / "data/event_scripts.s"
    s = es.read_text()
    inc = f'\t.include "data/maps/{name}/scripts.inc"\n'
    if inc in s:
        raise SystemExit("already in event_scripts.s")
    last = s.rfind('\t.include "data/maps/Parcel')
    end = s.index("\n", last) + 1
    es.write_text(s[:end] + inc + s[end:])
    print(f"registered {map_id} ({layout_id}) -> {mdir}")


if __name__ == "__main__":
    main()
