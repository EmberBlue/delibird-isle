#!/usr/bin/env python3
"""Walk every warp and every map connection of the Skaldmere maps in the emulator.

For each warp event the player is spawned on a walkable neighbour and walks onto
(and once past) the warp tile; for each connection the player is spawned one tile
inside the edge and walks across. Each probe is a walktest.py run against a
probe-hook ROM (see the skald-verify skill), so the sources can stay clean while
this runs:

  python3 tools/skald/probe_hook.py --on && make -j modern
  cp pokeemerald.gba /tmp/hookon.gba && cp pokeemerald.map /tmp/hookon.map
  python3 tools/skald/probe_hook.py --off
  python3 tools/skald/sweep.py --rom /tmp/hookon.gba --map /tmp/hookon.map --jobs 4 --log /tmp/sweep.log

A BAD line is a warp or connection that did not land on its destination; a
"pos?" note means it landed on the right map but not on the destination warp
tile (a scripted arrival, or a door that walks the player off the mat).
"""
import argparse, json, re, struct, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

def load_layouts():
    lay = json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]
    out = {}
    for L in lay:
        p = ROOT / L["blockdata_filepath"]
        if not p.exists(): continue
        W, H = L["width"], L["height"]
        raw = p.read_bytes()
        if len(raw) != W * H * 2: continue      # a placeholder or a stale vanilla entry
        out[L["id"]] = (W, H, struct.unpack(f"<{W*H}H", raw))
    return out

def walkable(layout, x, y):
    W, H, words = layout
    if not (0 <= x < W and 0 <= y < H): return False
    return ((words[y * W + x] >> 10) & 3) == 0

def elev(layout, x, y):
    W, H, words = layout
    return words[y * W + x] >> 12

def same_level(l1, x1, y1, l2, x2, y2):
    a, b = elev(l1, x1, y1), elev(l2, x2, y2)
    return a == b or a == 0 or b == 0

def behaviour(layout_json, mid):
    """metatile behaviour byte for a metatile id of this layout's tileset pair (None if unknown)"""
    import re as _re
    ts = layout_json["primary_tileset"] if mid < 512 else layout_json["secondary_tileset"]
    name = _re.sub(r"(?<!^)(?=[A-Z])", "_", ts.replace("gTileset_", "")).lower()
    for base in ("data/tilesets/primary/", "data/tilesets/secondary/"):
        p = ROOT / (base + name) / "metatile_attributes.bin"
        if p.exists():
            a = p.read_bytes(); i = mid if mid < 512 else mid - 512
            return struct.unpack_from("<H", a, i * 2)[0] & 0xFF if i * 2 + 2 <= len(a) else None
    return None

ARROWS = {0x62: ("EAST", 1, 0), 0x63: ("WEST", -1, 0), 0x64: ("NORTH", 0, -1), 0x65: ("SOUTH", 0, 1)}  # MB_*_ARROW_WARP
WARPISH = {0x60, 0x61, 0x69, 0x6A, 0x6B}   # doors, ladders, escalators: the engine fires these on a step
RETIRED = {"MAP_PARCEL_STATION", "MAP_PARCEL_BRIDGE", "MAP_PARCEL_STATION_HALL"}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", required=True); ap.add_argument("--map", required=True)
    ap.add_argument("--jobs", type=int, default=4)
    ap.add_argument("--log", required=True)
    ap.add_argument("--only", help="substring filter on the map name")
    ap.add_argument("--connections-only", action="store_true")
    a = ap.parse_args()
    layouts = load_layouts()
    layout_json = {L["id"]: L for L in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]}
    maps = {}
    for p in sorted((ROOT / "data/maps").glob("Parcel*/map.json")):
        j = json.loads(p.read_text()); maps[j["id"]] = j
    jobs = []
    for mid, j in maps.items():
        if a.only and a.only not in mid: continue
        if mid in RETIRED: continue
        L = layouts.get(j["layout"])
        if L is None: print("no layout for", mid); continue
        warp_tiles = {(w["x"], w["y"]) for w in j.get("warp_events", [])}
        if not a.connections_only:
            for i, w in enumerate(j.get("warp_events", [])):
                x, y = w["x"], w["y"]
                approach = None
                beh = behaviour(layout_json[j["layout"]], L[2][y * L[0] + x] & 0x3FF)
                trig = [(c["x"], c["y"]) for c in j.get("coord_events", []) if abs(c["x"] - x) + abs(c["y"] - y) <= 1]
                if beh is not None and beh not in ARROWS and beh not in WARPISH and trig:
                    # an arrival-only warp whose way out is a trigger beside it: walk onto the trigger
                    tx, ty = min(trig, key=lambda t: abs(t[0] - x) + abs(t[1] - y))
                    dx, dy = (tx - x, ty - y) if (tx, ty) != (x, y) else (0, 0)
                    if (dx, dy) == (0, 0):
                        for ddx, ddy, d in ((0, 1, "UP"), (0, -1, "DOWN"), (-1, 0, "RIGHT"), (1, 0, "LEFT")):
                            if walkable(L, x + ddx, y + ddy): approach = (x + ddx, y + ddy, d + ":0"); break
                    elif walkable(L, x - dx, y - dy):
                        d = {(1, 0): "RIGHT", (-1, 0): "LEFT", (0, 1): "DOWN", (0, -1): "UP"}[(dx, dy)]
                        approach = (x - dx, y - dy, d + ":1")
                if beh in ARROWS:   # an arrow mat fires when the player on it presses that way: come from behind it
                    dname, dx, dy = ARROWS[beh]
                    if walkable(L, x - dx, y - dy): approach = (x - dx, y - dy, {"EAST": "RIGHT", "WEST": "LEFT", "NORTH": "UP", "SOUTH": "DOWN"}[dname])
                for dx, dy, d in ((0, 1, "UP"), (0, -1, "DOWN"), (-1, 0, "RIGHT"), (1, 0, "LEFT")):
                    if approach: break
                    nx, ny = x + dx, y + dy
                    if walkable(L, nx, ny) and (nx, ny) not in warp_tiles:
                        approach = (nx, ny, d); break
                if approach is None:
                    jobs.append((f"{mid} warp {i} ({x},{y})", None, "no walkable neighbour")); continue
                dest = w["dest_map"]; dj = maps.get(dest)
                dw = None
                if dj is not None:
                    try: dw = dj["warp_events"][int(w["dest_warp_id"])]
                    except (IndexError, ValueError): dw = None
                walk = approach[2] if ":" in approach[2] else f"{approach[2]}:1"
                jobs.append((f"{mid} warp {i} ({x},{y}) -> {dest}", (mid, approach[0], approach[1], walk, dest, dw), None))
        for c in j.get("connections") or []:
            d, off, m2 = c["direction"], c["offset"], c["map"]
            j2 = maps.get(m2); L2 = layouts.get(j2["layout"]) if j2 else None
            if L2 is None: jobs.append((f"{mid} conn {d} -> {m2}", None, "no layout for the other side")); continue
            W, H, _ = L; W2, H2, _ = L2
            pick = None
            if d in ("up", "down"):
                y_in, y_edge = (1, 0) if d == "up" else (H - 2, H - 1)
                y2 = H2 - 1 if d == "up" else 0
                xs = sorted(range(W), key=lambda x: abs(x - W // 2))
                for x in xs:
                    if walkable(L, x, y_in) and walkable(L, x, y_edge) and walkable(L2, x - off, y2) \
                       and same_level(L, x, y_in, L, x, y_edge) and same_level(L, x, y_edge, L2, x - off, y2):
                        pick = (x, y_in, "UP" if d == "up" else "DOWN"); break
            else:
                x_in, x_edge = (1, 0) if d == "left" else (W - 2, W - 1)
                x2 = W2 - 1 if d == "left" else 0
                ys = sorted(range(H), key=lambda y: abs(y - H // 2))
                for y in ys:
                    if walkable(L, x_in, y) and walkable(L, x_edge, y) and walkable(L2, x2, y - off) \
                       and same_level(L, x_in, y, L, x_edge, y) and same_level(L, x_edge, y, L2, x2, y - off):
                        pick = (x_in, y, "LEFT" if d == "left" else "RIGHT"); break
            if pick is None: jobs.append((f"{mid} conn {d} -> {m2}", None, "no walkable crossing tile")); continue
            jobs.append((f"{mid} conn {d} -> {m2} via ({pick[0]},{pick[1]})", (mid, pick[0], pick[1], f"{pick[2]}:1", m2, None), None))
    print(len(jobs), "probes")
    log = open(a.log, "w")
    def run(job):
        label, spec, err = job
        if spec is None: return f"SKIP {label}: {err}"
        mid, x, y, walk, dest, dw = spec
        cmd = [sys.executable, str(ROOT / "tools/skald/walktest.py"), "--rom", a.rom, "--map", a.map,
               "--spawn", f"{mid}:{x},{y}", "--walk", walk, "--expect", dest, "--dismiss", "120"]
        try:
            r = subprocess.run(cmd, capture_output=True, text=True, timeout=600)
            out = (r.stdout + r.stderr).strip().splitlines()
            line = out[-1] if out else "(no output)"
        except subprocess.TimeoutExpired:
            line = "TIMEOUT"
        note = ""
        m = re.search(r"-> (MAP_\w+) at \((-?\d+),(-?\d+)\)", line)
        if m and dw is not None and m.group(1) == dest:
            fx, fy = int(m.group(2)), int(m.group(3))
            if (fx, fy) not in ((dw["x"], dw["y"]), (dw["x"], dw["y"] + 1)): note = f"  pos? dest warp at ({dw['x']},{dw['y']})"
        status = "OK " if line.startswith("OK") else "BAD"
        return f"{status} {label}: {line}{note}"
    with ThreadPoolExecutor(max_workers=a.jobs) as ex:
        for res in ex.map(run, jobs):
            print(res); log.write(res + "\n"); log.flush()
    log.close()
    lines = Path(a.log).read_text().splitlines()
    print(f"done: {sum(l.startswith('OK') for l in lines)} ok, {sum(l.startswith('BAD') for l in lines)} bad, {sum(l.startswith('SKIP') for l in lines)} skipped, {sum('pos?' in l for l in lines)} pos?")

if __name__ == "__main__":
    main()
