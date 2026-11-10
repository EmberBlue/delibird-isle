#!/usr/bin/env python3
"""Every big fir is whole: a tip, a body and a foot, left half beside right half.

The big tree of the General kit is two metatiles wide and three tall, and it is assembled from
parts: the tip rides in the top layer of the metatile above the body (so it can overlap a tree
behind, a cliff, water), the body and the foot are their own metatiles. Emerald's round tree
forgave a missing part; the Skaldmere fir (tools/skald/nordic_tiles.py) does not: a body with
no tip is a tree sawn flat, a tip with no body floats.

The parts are recognised from the tile entries, not from a list of ids, so the secondary kits'
variants (a tip over a fence, a body over a cliff edge) are covered:

  tip    the metatile draws tile 493 (unflipped = left half, h-flipped = right half)
  body   tile 8   (same)
  foot   tile 40  (same)

  python3 tools/skald/trees.py            list every broken assembly, per map
  python3 tools/skald/trees.py --fix      repair the mechanical cases in place (layout_edit rules:
                                          collision and elevation kept, fixes.json updated):
                                          a body gets its tip in the metatile above, whatever
                                          stands there (the variant is found, or made: in a free
                                          slot of the primary when it only uses primary tiles,
                                          appended to the map's secondary otherwise); a tip with
                                          no tree under it is taken off

A body whose foot is hidden by something solid in front of it (a roof, a fence) is not an error.

The map's top row, bottom row and side edges are not judged: the border block continues the wood.
"""
import json
import struct
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import audit  # noqa: E402

GRASS = 1
TIP_ON_GRASS = (462, 463)           # left, right
FOOT_PLAIN = {476: 484, 477: 485, 478: 486, 479: 487}    # the same foot without a tip in its top layer


def parts(mts):
    """metatile id -> set of 'tipL','tipR','bodyL','bodyR','footL','footR'."""
    out = {}
    for mid, w in mts.items():
        s = set()
        for e in w:
            t, h = e & 0x3FF, bool(e & 0x400)
            if (e >> 12) != 12:
                continue
            if t == 493:
                s.add("tipR" if h else "tipL")
            elif t == 8:
                s.add("bodyR" if h else "bodyL")
            elif t == 40:
                s.add("footR" if h else "footL")
        if s:
            out[mid] = s
    return out


TIP = {"L": (0, 493 | 12 << 12, 494 | 12 << 12, 495 | 12 << 12),
       "R": (493 | 0x400 | 12 << 12, 0, 495 | 0x400 | 12 << 12, 494 | 0x400 | 12 << 12)}


def _tileset_files(d, mid):
    """(metatiles.bin, metatile_attributes.bin, base id) of the tileset that owns a metatile id."""
    t = d["prim"] if mid < 512 else d["sec"]
    return t / "metatiles.bin", t / "metatile_attributes.bin", 0 if mid < 512 else 512


def with_tip(d, base_id, side):
    """The id of a metatile that is base_id with the fir's tip in its top layer; made if it does not exist.
    None when the base has no room for one (all three layers in use)."""
    w = d["mts"][base_id]
    bottom, mid, top = w[0:4], w[4:8], w[8:12]
    if not any(top):
        target = tuple(bottom) + tuple(mid) + TIP[side]
    elif not any(bottom):
        target = tuple(mid) + tuple(top) + TIP[side]        # a canopy: slide its two layers down
    else:
        return None
    for mid_, ww in d["mts"].items():
        if tuple(ww) == target:
            return mid_
    # make it: in the primary when every tile is a primary tile, else in this map's secondary
    in_primary = all((e & 0x3FF) < 512 for e in target)
    tdir = d["prim"] if in_primary else d["sec"]
    base = 0 if in_primary else 512
    mfile, afile = tdir / "metatiles.bin", tdir / "metatile_attributes.bin"
    mdata, adata = bytearray(mfile.read_bytes()), bytearray(afile.read_bytes())
    n = len(mdata) // 24
    slot = None
    if in_primary:
        for i in range(1, n):                                 # an all-zero slot (never slot 0)
            if not any(mdata[i * 24:(i + 1) * 24]) and not any(adata[i * 2:i * 2 + 2]):
                slot = i
                break
        if slot is None:
            return None
        mdata[slot * 24:(slot + 1) * 24] = struct.pack("<12H", *target)
    else:
        if n >= 512:
            return None
        slot = n
        mdata += struct.pack("<12H", *target)
        adata += b"\0\0"
    # behaviour and layer type follow the tile it was made from
    src_m, src_a, src_base = _tileset_files(d, base_id)
    attr = src_a.read_bytes()[(base_id - src_base) * 2:(base_id - src_base) * 2 + 2]
    adata[slot * 2:slot * 2 + 2] = attr
    mfile.write_bytes(bytes(mdata)); afile.write_bytes(bytes(adata))
    d["mts"][base + slot] = target
    print(f"   new metatile {base + slot} in {tdir.name}: {base_id} with a fir tip ({side})")
    return base + slot


def without_tip(d, mid):
    """The id of the same metatile with no tip in its top layer, if one exists."""
    if mid in FOOT_PLAIN:
        return FOOT_PLAIN[mid]
    w = d["mts"][mid]
    target = tuple(w[0:8]) + (0, 0, 0, 0)
    for mid_, ww in d["mts"].items():
        if tuple(ww) == target:
            return mid_
    return None


def check(name, fix=False):
    mj, lay, W, H, words, tiles = audit.load_map(name)
    if lay["primary_tileset"] != "gTileset_General":
        return []
    import pal_tool
    d = pal_tool.load(name)
    P = parts(d["mts"])
    g = [w & 0x3FF for w in words]
    solid = [(w >> 10) & 3 for w in words]

    def has(x, y, part):
        return 0 <= x < W and 0 <= y < H and part in P.get(g[y * W + x], ())

    out, edits = [], {}
    for y in range(H):
        for x in range(W):
            m = g[y * W + x]
            p = P.get(m, ())
            for side, dx in (("L", 1), ("R", -1)):
                other = "R" if side == "L" else "L"
                if "body" + side in p:
                    if 0 <= x + dx < W and not has(x + dx, y, "body" + other):
                        out.append(f"({x},{y}) body {side} half has no {other} half beside it")
                    if y > 0 and not has(x, y - 1, "tip" + side):
                        above = g[(y - 1) * W + x]
                        out.append(f"({x},{y}) body has no tip above (metatile {above} there)")
                        if fix and (x, y - 1) not in edits:
                            v = with_tip(d, above, side)
                            if v is not None:
                                edits[(x, y - 1)] = v
                    if y < H - 1 and not has(x, y + 1, "foot" + side):
                        below = g[(y + 1) * W + x]
                        # a roof, a wall or a fence in front of the tree hides its foot; open ground does not
                        if not solid[(y + 1) * W + x] or P.get(below):
                            out.append(f"({x},{y}) body has no foot below (metatile {below} there)")
                if "tip" + side in p and y < H - 1 and not has(x, y + 1, "body" + side):
                    out.append(f"({x},{y}) tip floats: no body below (metatile {g[(y + 1) * W + x]} there)")
                    if fix and (x, y) not in edits:
                        v = without_tip(d, m)
                        if v is not None:
                            edits[(x, y)] = v
                if "foot" + side in p and y > 0 and not has(x, y - 1, "body" + side):
                    out.append(f"({x},{y}) foot has no body above (metatile {g[(y - 1) * W + x]} there)")
    if fix and edits:
        import subprocess
        for (x, y), mid in sorted(edits.items()):
            w = words[y * W + x]
            col, elev = (w >> 10) & 3, (w >> 12) & 15
            subprocess.run([sys.executable, str(Path(__file__).parent / "layout_edit.py"), name, "set",
                            f"{x},{y}", str(mid), str(col), str(elev)], check=True, stdout=subprocess.DEVNULL)
    return out


def main():
    fix = "--fix" in sys.argv
    total = 0
    for p in sorted((ROOT / "data/maps").glob("Parcel*/map.json")):
        name = p.parent.name
        if name in audit.RETIRED_MAPS:
            continue
        lines = check(name, fix)
        if lines:
            print(f"{name}: {len(lines)}")
            for line in lines[:40]:
                print("   ", line)
            total += len(lines)
    print(f"\n{total} broken tree assembl{'y' if total == 1 else 'ies'}" + (" before the fix; run again" if fix and total else ""))
    return 1 if total else 0


if __name__ == "__main__":
    sys.exit(main())
