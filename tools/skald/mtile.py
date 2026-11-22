#!/usr/bin/env python3
"""Find or make a metatile.

A drawing pass often needs a metatile nobody shipped: a path piece with an edge on two sides,
a lamp's head over a kerb, a fir's tip over a roof. A metatile is only twelve tile entries
(three layers of four 8x8 tiles), so the missing one is put together from the entries of the
ones that exist and appended, once, to the tileset that can hold it:

  the primary     when every entry is a primary tile and the primary has an all-zero slot
  the secondary   otherwise (appended after its last metatile, up to 512)

Nothing here touches the tile sheets or an existing metatile; ids already handed out never move.

  load(prim_dir, sec_dir)      -> d   (dict: prim, sec, mts {id: 12 entries}, attrs {id: u16})
  ensure(d, entries, like)     -> id  of the metatile with these entries and `like`'s attributes
  with_top(d, base_id, top4)   -> id  of base_id with these four entries as its top layer
  quad(d, ids)                 -> id  of the metatile whose four quarters come from four others
"""
import struct
from pathlib import Path

N_PRIMARY = 512


def load(prim, sec):
    prim, sec = Path(prim), Path(sec)
    mts, attrs = {}, {}
    for t, base in ((prim, 0), (sec, N_PRIMARY)):
        data = (t / "metatiles.bin").read_bytes()
        adata = (t / "metatile_attributes.bin").read_bytes()
        for i in range(len(data) // 24):
            mts[base + i] = struct.unpack_from("<12H", data, i * 24)
            attrs[base + i] = struct.unpack_from("<H", adata, i * 2)[0] if i * 2 + 2 <= len(adata) else 0
    return dict(prim=prim, sec=sec, mts=mts, attrs=attrs)


def _attrs(d):
    """d may come from pal_tool.load (no attrs): read them on first use."""
    if "attrs" not in d:
        d["attrs"] = {}
        for t, base in ((d["prim"], 0), (d["sec"], N_PRIMARY)):
            adata = (t / "metatile_attributes.bin").read_bytes()
            for i in range(len(adata) // 2):
                d["attrs"][base + i] = struct.unpack_from("<H", adata, i * 2)[0]
    return d["attrs"]


def ensure(d, entries, like=None, attr=None, quiet=False, why=""):
    """The id of the metatile with these 12 entries (and the attributes of `like`, or `attr`); made if missing.
    None when neither tileset has room."""
    target = tuple(entries)
    assert len(target) == 12
    attrs = _attrs(d)
    want = attr if attr is not None else attrs.get(like, 0)
    for mid, ww in d["mts"].items():
        if tuple(ww) == target and attrs.get(mid, 0) == want:
            return mid
    only_primary = all((e & 0x3FF) < N_PRIMARY for e in target)
    for tdir, base, ok in ((d["prim"], 0, only_primary), (d["sec"], N_PRIMARY, True)):
        if not ok:
            continue
        mfile, afile = tdir / "metatiles.bin", tdir / "metatile_attributes.bin"
        mdata, adata = bytearray(mfile.read_bytes()), bytearray(afile.read_bytes())
        n = len(mdata) // 24
        slot = None
        if base == 0:
            for i in range(1, n):                               # an all-zero slot (never slot 0)
                if not any(mdata[i * 24:(i + 1) * 24]) and not any(adata[i * 2:i * 2 + 2]):
                    slot = i
                    break
            if slot is None:
                continue
            mdata[slot * 24:(slot + 1) * 24] = struct.pack("<12H", *target)
        else:
            if n >= 512:
                continue
            slot = n
            mdata += struct.pack("<12H", *target)
            adata += b"\0\0"
        adata[slot * 2:slot * 2 + 2] = struct.pack("<H", want)
        mfile.write_bytes(bytes(mdata)); afile.write_bytes(bytes(adata))
        d["mts"][base + slot] = target
        attrs[base + slot] = want
        if not quiet:
            print(f"   new metatile {base + slot} in {tdir.name}" + (f": {why}" if why else ""))
        return base + slot
    return None


def with_top(d, base_id, top, why=""):
    """base_id with `top` (four entries) as its top layer. None when the base has no room for one."""
    w = d["mts"][base_id]
    bottom, mid, cur = w[0:4], w[4:8], w[8:12]
    if not any(cur):
        target = tuple(bottom) + tuple(mid) + tuple(top)
    elif not any(bottom):
        target = tuple(mid) + tuple(cur) + tuple(top)            # a canopy: slide its two layers down
    else:
        return None
    return ensure(d, target, like=base_id, why=why or f"{base_id} with something standing in front of it")


def quad(d, ids, like=None):
    """The metatile whose top-left, top-right, bottom-left and bottom-right quarters (all three layers)
    are those of the four given metatiles. This is how an autotile set is meant to be used: each
    quarter of a path cell is chosen by the three neighbours that touch it."""
    if len(set(ids)) == 1:
        return ids[0]
    target = [0] * 12
    for q, mid in enumerate(ids):
        w = d["mts"][mid]
        for layer in range(3):
            target[layer * 4 + q] = w[layer * 4 + q]
    return ensure(d, target, like=like if like is not None else ids[0],
                  why="path piece from the quarters of " + " ".join(str(i) for i in ids))
