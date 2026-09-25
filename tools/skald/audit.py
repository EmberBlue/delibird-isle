#!/usr/bin/env python3
"""The skald-verify playbook, automated. Run before declaring any map done.

  python3 tools/skald/audit.py            # every Parcel* map
  python3 tools/skald/audit.py ParcelIsle # one map

Checks (WARN lines are the findings; exit 1 if any):
  - events in bounds; NPCs/items/triggers on walkable tiles (col 0)
  - walkable tiles whose metatile has art in the top layer (cells 8-11):
    the player would be drawn under it (the bridge-deck bug)
  - warp tiles: door behaviour or walkable; dest map + dest_warp_id exist;
    interior exits point back at an exterior warp that targets this map
  - coord triggers: script sets the trigger var (or warps) before any `end`
    (an unguarded early exit re-fires every frame = frozen player)
  - lock/lockall without release/releaseall/warp in the same script
  - connections: at least one offset-aligned walkable pair on the shared edge
  - every map's MAPSEC has a fly/heal row in src/region_map.c
  - TRAINER_SKALD_* used in scripts exist in opponents.h and trainers.party;
    TRAINERS_COUNT <= MAX_TRAINERS_COUNT
"""
import json, re, struct, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
NUM_METATILES_IN_PRIMARY = 512
DOOR_BEHAVIOURS = {0x69, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65}  # animated/non-animated door, ladder, arrow warps
warns = []


def warn(m, msg):
    warns.append(f"{m}: {msg}")


def tileset_dir(sym):
    hdr = (ROOT / "src/data/tilesets/headers.h").read_text()
    m = re.search(rf"const struct Tileset {re.escape(sym)}\s*=\s*\{{(.*?)\}};", hdr, re.S)
    if not m:
        return None
    mt = re.search(r"\.metatiles\s*=\s*(\w+)", m.group(1)).group(1)
    for line in (ROOT / "src/data/tilesets/metatiles.h").read_text().splitlines():
        if mt in line and "INCBIN" in line:
            p = re.search(r'"([^"]+)"', line).group(1)
            return ROOT / Path(p).parent
    return None


_ts_cache = {}


def load_ts(sym, base):
    if sym in _ts_cache:
        return _ts_cache[sym]
    d = tileset_dir(sym)
    out = {}
    if d and (d / "metatiles.bin").exists():
        mb = (d / "metatiles.bin").read_bytes()
        ab = (d / "metatile_attributes.bin").read_bytes()
        n = len(mb) // 24
        per = len(ab) // n if n else 2  # this fork stores u16 attributes (behaviour low byte, layer type bits 12-13)
        for i in range(n):
            cells = struct.unpack_from("<12H", mb, i * 24)
            if per == 2:
                attr = struct.unpack_from("<H", ab, i * 2)[0]
                layer = (attr >> 12) & 3
            else:
                attr = struct.unpack_from("<I", ab, i * 4)[0]
                layer = (attr >> 29) & 3
            out[base + i] = (cells, attr & 0xFF, layer)
    _ts_cache[sym] = out
    return out


def load_map(name):
    mj = json.loads((ROOT / "data/maps" / name / "map.json").read_text())
    lay = {l["id"]: l for l in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]}[mj["layout"]]
    W, H = lay["width"], lay["height"]
    words = struct.unpack(f"<{W*H}H", (ROOT / lay["blockdata_filepath"]).read_bytes())
    tiles = dict(load_ts(lay["primary_tileset"], 0))
    tiles.update(load_ts(lay["secondary_tileset"], NUM_METATILES_IN_PRIMARY))
    return mj, lay, W, H, words, tiles


def decode(w):
    return w & 0x3FF, (w >> 10) & 3, w >> 12


_px_cache = {}


def tile_has_art(lay, cell):
    """True if the 8x8 tile referenced by a metatile cell has any opaque pixel."""
    tid = cell & 0x3FF
    if tid == 0:
        return False
    key = (lay["primary_tileset"], lay["secondary_tileset"])
    if key not in _px_cache:
        import sys
        sys.path.insert(0, str(ROOT / "tools/maptools"))
        import metatile_sheet as ms
        prim = ms.load_tiles(tileset_dir(lay["primary_tileset"]) / "tiles.png")
        sec_dir = tileset_dir(lay["secondary_tileset"])
        sec = ms.load_tiles(sec_dir / "tiles.png") if sec_dir and (sec_dir / "tiles.png").exists() else []
        tiles = (prim + [[0] * 64] * (ms.NUM_TILES_IN_PRIMARY - len(prim)))[:ms.NUM_TILES_IN_PRIMARY] + sec
        _px_cache[key] = tiles
    tiles = _px_cache[key]
    return tid < len(tiles) and any(tiles[tid])


def script_bodies(pory):
    bodies = {}
    for m in re.finditer(r"^script\s+(\w+)\s*\{", pory, re.M):
        i, depth, j = m.end(), 1, m.end()
        while depth and j < len(pory):
            if pory[j] == "{": depth += 1
            elif pory[j] == "}": depth -= 1
            j += 1
        bodies[m.group(1)] = pory[i:j - 1]
    return bodies


def audit_map(name, all_maps, fly_secs, trainer_ids, party_ids):
    mj, lay, W, H, words, tiles = load_map(name)
    pory_path = ROOT / "data/maps" / name / "scripts.pory"
    pory = pory_path.read_text() if pory_path.exists() else ""
    bodies = script_bodies(pory)

    def at(x, y):
        return decode(words[y * W + x])

    def walkable(x, y):
        mid, col, elev = at(x, y)
        return col == 0

    # top-layer cover on walkable tiles (our layouts only -- vanilla ones are proven)
    if lay["blockdata_filepath"].startswith("data/layouts/Parcel"):
        covered = set()
        for y in range(H):
            for x in range(W):
                mid, col, elev = at(x, y)
                if col != 0 or mid not in tiles:
                    continue
                beh = tiles[mid][1]
                if beh == 0x02 or 0x10 <= beh <= 0x19 or beh in DOOR_BEHAVIOURS:  # grass/water shimmer/doorway overlays are intended
                    continue
                if any(tile_has_art(lay, c) for c in tiles[mid][0][8:12]):
                    covered.add(mid)
        if covered:
            warn(name, f"walkable metatiles with top-layer art (player drawn under): {sorted(covered)}")

    for e in mj.get("object_events", []):
        x, y = e["x"], e["y"]
        if not (0 <= x < W and 0 <= y < H):
            warn(name, f"object {e['local_id']} out of bounds ({x},{y})"); continue
        if not walkable(x, y) and e.get("movement_type", "").startswith(("MOVEMENT_TYPE_WANDER", "MOVEMENT_TYPE_WALK")):
            warn(name, f"object {e['local_id']} at ({x},{y}) wanders from a solid tile")
    for e in mj.get("coord_events", []):
        x, y = e["x"], e["y"]
        if not (0 <= x < W and 0 <= y < H) or not walkable(x, y):
            warn(name, f"trigger {e['script']} at ({x},{y}) not on a walkable tile")
        body = bodies.get(e["script"])
        if body is None:
            warn(name, f"trigger script {e['script']} not found in scripts.pory"); continue
        var = e.get("var", "")
        guarded = re.search(rf"setvar\(\s*{re.escape(var)}\s*,", body) or "warp(" in body
        if not guarded:
            warn(name, f"trigger {e['script']} never sets {var} (re-fires every frame)")
        else:
            first_guard = min([m.start() for m in re.finditer(rf"setvar\(\s*{re.escape(var)}\s*,|warp\(", body)])
            early_end = re.search(r"^\s*end\s*$", body[:first_guard], re.M)
            if early_end:
                warn(name, f"trigger {e['script']} has an `end` before its guard ({var}) -- early-exit re-fire")
    for e in mj.get("warp_events", []):
        x, y = e["x"], e["y"]
        if not (0 <= x < W and 0 <= y < H):
            warn(name, f"warp to {e['dest_map']} out of bounds ({x},{y})"); continue
        mid, col, elev = at(x, y)
        beh = tiles.get(mid, ((), 0, 0))[1]
        if col != 0 and beh not in DOOR_BEHAVIOURS:
            warn(name, f"warp at ({x},{y}) to {e['dest_map']} is on a solid non-door tile (mid {mid}, beh {beh:#x})")
        dest = e["dest_map"]
        if dest == "MAP_DYNAMIC":
            continue
        dname = all_maps.get(dest)
        if not dname:
            warn(name, f"warp at ({x},{y}) targets unknown map {dest}"); continue
        dj = json.loads((ROOT / "data/maps" / dname / "map.json").read_text())
        wid = int(e["dest_warp_id"]) if str(e["dest_warp_id"]).isdigit() else None
        if wid is not None:
            if wid >= len(dj.get("warp_events", [])):
                warn(name, f"warp at ({x},{y}) -> {dest} warp id {wid} does not exist")
            elif dj["warp_events"][wid]["dest_map"] != mj["id"] and mj["map_type"] == "MAP_TYPE_INDOOR":
                warn(name, f"exit warp {wid} of {dest} points at {dj['warp_events'][wid]['dest_map']}, not back here")
    for sname, body in bodies.items():
        if re.search(r"^\s*lock(all)?\s*$", body, re.M) and not re.search(r"release(all)?|warp\(", body):
            warn(name, f"script {sname} locks without release/warp")
    for c in mj.get("connections", []) or []:
        other = all_maps.get(c["map"])
        if not other:
            warn(name, f"connection to unknown map {c['map']}"); continue
        oj, olay, oW, oH, owords, _ = load_map(other)
        off, d = c["offset"], c["direction"]
        ok = False
        if d in ("right", "left"):
            for y in range(H):
                oy = y - off
                if 0 <= oy < oH:
                    x = W - 1 if d == "right" else 0
                    ox = 0 if d == "right" else oW - 1
                    if decode(words[y * W + x])[1] == 0 and decode(owords[oy * oW + ox])[1] == 0:
                        ok = True; break
        else:
            for x in range(W):
                ox = x - off
                if 0 <= ox < oW:
                    y = H - 1 if d == "down" else 0
                    oy = 0 if d == "down" else oH - 1
                    if decode(words[y * W + x])[1] == 0 and decode(owords[oy * oW + ox])[1] == 0:
                        ok = True; break
        if not ok:
            warn(name, f"connection {d} -> {c['map']} (offset {off}) has no aligned walkable pair")
    sec = mj.get("region_map_section")
    if sec and sec.startswith(("MAPSEC_PARCEL", "MAPSEC_SKALD")) and sec not in fly_secs:
        warn(name, f"{sec} has no sMapHealLocations row (fly lands in Littleroot's bedroom)")
    for t in set(re.findall(r"TRAINER_SKALD_\w+", pory)):
        if t not in trainer_ids:
            warn(name, f"{t} not in opponents.h")
        elif t not in party_ids:
            warn(name, f"{t} has no party in trainers.party")


def main():
    groups = json.loads((ROOT / "data/maps/map_groups.json").read_text())
    names = [n for g in groups["group_order"] for n in groups[g]]
    all_maps = {}
    for n in names:
        p = ROOT / "data/maps" / n / "map.json"
        if p.exists():
            all_maps[json.loads(p.read_text())["id"]] = n
    rm = (ROOT / "src/region_map.c").read_text()
    fly_secs = set(re.findall(r"\[(MAPSEC_\w+)\]\s*=", rm))
    opp = (ROOT / "include/constants/opponents.h").read_text()
    trainer_ids = set(re.findall(r"#define (TRAINER_SKALD_\w+)", opp))
    party_ids = set(re.findall(r"^=== (TRAINER_SKALD_\w+) ===", (ROOT / "src/data/trainers.party").read_text(), re.M))
    tc = int(re.search(r"#define TRAINERS_COUNT\s+(\d+)", opp).group(1))
    mx = int(re.search(r"#define MAX_TRAINERS_COUNT\s+(\d+)", opp).group(1))
    if tc > mx:
        warn("opponents.h", f"TRAINERS_COUNT {tc} > MAX_TRAINERS_COUNT {mx}")
    targets = sys.argv[1:] or [n for n in names if n.startswith("Parcel")]
    for n in targets:
        try:
            audit_map(n, all_maps, fly_secs, trainer_ids, party_ids)
        except Exception as ex:  # keep going; report
            warn(n, f"audit crashed: {ex!r}")
    for w in warns:
        print("WARN", w)
    print(f"{len(targets)} maps audited, {len(warns)} warnings")
    sys.exit(1 if warns else 0)


if __name__ == "__main__":
    main()
