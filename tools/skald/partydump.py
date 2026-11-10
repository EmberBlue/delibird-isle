#!/usr/bin/env python3
"""Print the player's party (species, level, moves) from a harness savestate.

  python3 tools/skald/partydump.py ROM MAPFILE STATE [STATE ...]

The chains teach HMs by slot and forget-index, so a party that levelled differently on a new
build can lose a field move without any segment failing until the rock it needed (the Shady
Forest build, 2026-11-10: Rock Smash gone by chapter 5). This shows where.
"""
import re
import sys
from pathlib import Path

import mgba.core, mgba.image, mgba.log
from mgba._pylib import ffi

ROOT = Path(__file__).resolve().parents[2]
ORDER = ["GAEM", "GAME", "GEAM", "GEMA", "GMAE", "GMEA", "AGEM", "AGME", "AEGM", "AEMG", "AMGE", "AMEG",
         "EGAM", "EGMA", "EAGM", "EAMG", "EMGA", "EMAG", "MGAE", "MGEA", "MAGE", "MAEG", "MEGA", "MEAG"]


def consts(path, prefix):
    out = {}
    for m in re.finditer(rf"#define\s+({prefix}\w+)\s+(\d+|0x[0-9A-Fa-f]+)\b", (ROOT / path).read_text()):
        out.setdefault(int(m.group(2), 0), m.group(1)[len(prefix):])
    return out


def main():
    rom, mapfile, states = sys.argv[1], sys.argv[2], sys.argv[3:]
    sym = {}
    for line in Path(mapfile).read_text().splitlines():
        m = re.match(r"\s+0x0*([0-9a-f]{8})\s+(\w+)$", line)
        if m:
            sym[m.group(2)] = int(m.group(1), 16)
    party, count = sym["gPlayerParty"], sym["gPlayerPartyCount"]
    moves, species = consts("include/constants/moves.h", "MOVE_"), consts("include/constants/species.h", "SPECIES_")
    mgba.log.silence()
    core = mgba.core.load_path(rom)
    w, h = core.desired_video_dimensions(); img = mgba.image.Image(w, h)
    core.set_video_buffer(img); core.reset()
    for st in states:
        data = Path(st).read_bytes()
        assert core.load_raw_state(ffi.new("unsigned char[]", data)), st
        core.run_frame()
        n = core.memory.u8[count]
        print(f"{Path(st).stem}: {n} in the party")
        for i in range(min(n, 6)):
            b = party + i * 100
            pers, ot = core.memory.u32[b], core.memory.u32[b + 4]
            key = pers ^ ot
            sub = [[core.memory.u32[b + 32 + s * 12 + k * 4] ^ key for k in range(3)] for s in range(4)]
            order = ORDER[pers % 24]
            g, a = sub[order.index("G")], sub[order.index("A")]
            sp = g[0] & 0x7FF
            mv = [a[0] & 0xFFFF, a[0] >> 16, a[1] & 0xFFFF, a[1] >> 16]
            mv = [(m & 0x7FF) for m in mv]
            lvl = core.memory.u8[b + 84]
            print(f"   {i}: {species.get(sp, sp):12s} L{lvl:<3d} " + ", ".join(moves.get(m, str(m)) for m in mv if m))


if __name__ == "__main__":
    main()
