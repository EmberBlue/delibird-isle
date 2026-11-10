#!/usr/bin/env python3
"""Toggle the TEMP probe hook in src/new_game.c that tools/skald/walktest.py needs.

  python3 tools/skald/probe_hook.py --on     # patch (idempotent), then build
  python3 tools/skald/probe_hook.py --off    # remove it again before committing

The hook adds an EWRAM array (gProbe) the harness pokes before the new game
starts: [0] map id, [1] x, [2] y, [3..7] flags to set, [10] an item to put in
the bag, [11] a species given at level 100 so battles can be won, [12..15] two
var id/value pairs, and WarpToTruck writes back [8] = offset of SaveBlock1.flags,
[9] = offset of SaveBlock1.vars so the harness can read flags and vars by name. Every added line carries the marker
"TEMP TEST ONLY"; `grep -c "TEMP TEST" src/new_game.c` must be 0 in a commit.
"""
import sys
from pathlib import Path

PATH = Path(__file__).resolve().parents[2] / "src/new_game.c"
MARK = "// TEMP TEST ONLY"
DECL_ANCHOR = "static void WarpToTruck(void);\n"
DECL = f"EWRAM_DATA u16 gProbe[16] = {{0}}; {MARK}\nu32 ScriptGiveMon(u16 species, u8 level, u16 item); {MARK}\n"
CALL = "    SetWarpDestination(MAP_GROUP(MAP_PARCEL_FERRY), MAP_NUM(MAP_PARCEL_FERRY), WARP_ID_NONE, 4, 6);\n"
HOOK = f"""    if (gProbe[0] != 0) {MARK}: tools/skald/walktest.py pokes gProbe before the new game
    {{ {MARK}
        u32 i; {MARK}
        SetWarpDestination(MAP_GROUP(gProbe[0]), MAP_NUM(gProbe[0]), WARP_ID_NONE, gProbe[1], gProbe[2]); {MARK}
        for (i = 3; i < 8; i++) {MARK}
            if (gProbe[i] != 0) {MARK}
                FlagSet(gProbe[i]); {MARK}
        gProbe[8] = (u16)((u8 *)gSaveBlock1Ptr->flags - (u8 *)gSaveBlock1Ptr); {MARK}
        gProbe[9] = (u16)((u8 *)gSaveBlock1Ptr->vars - (u8 *)gSaveBlock1Ptr); {MARK}
        if (gProbe[10] != 0) {MARK}
            AddBagItem(gProbe[10], 1); {MARK}
        if (gProbe[11] != 0) {MARK}: a level-100 partner so the harness can win battles
        {{ {MARK}
            u16 mv[4] = {{58, 585, 408, 573}}; u8 pp[4] = {{16, 24, 32, 32}}; u8 bon = 0xFF; {MARK}: ICE BEAM, MOONBLAST, POWER GEM, FREEZE-DRY: no type is immune to all four; 104 PP between heals
            ScriptGiveMon(gProbe[11], 100, 472); {MARK}: holding LEFTOVERS, so a chapter of fights does not wear it down
            for (i = 0; i < 4; i++) {MARK}
            {{ {MARK}
                SetMonData(&gPlayerParty[0], MON_DATA_MOVE1 + i, &mv[i]); {MARK}
                SetMonData(&gPlayerParty[0], MON_DATA_PP1 + i, &pp[i]); {MARK}
            }} {MARK}
            SetMonData(&gPlayerParty[0], MON_DATA_PP_BONUSES, &bon); {MARK}
        }} {MARK}
        if (gProbe[12] != 0) {MARK}: up to two vars, id/value pairs
            VarSet(gProbe[12], gProbe[13]); {MARK}
        if (gProbe[14] != 0) {MARK}
            VarSet(gProbe[14], gProbe[15]); {MARK}
    }} {MARK}
    else {MARK}
"""

def main():
    src = PATH.read_text()
    if "--on" in sys.argv:
        if MARK in src:
            print("hook already on"); return
        assert DECL_ANCHOR in src and CALL in src, "anchors not found; new_game.c changed"
        src = src.replace(DECL_ANCHOR, DECL + DECL_ANCHOR, 1).replace(CALL, HOOK + "    " + CALL, 1)
        PATH.write_text(src); print("hook on")
    elif "--off" in sys.argv:
        lines = [l for l in src.splitlines(keepends=True) if MARK not in l]
        src = "".join(lines).replace("    " + CALL, CALL, 1)
        PATH.write_text(src); print("hook off:", src.count("TEMP TEST"), "markers left")
    else:
        print("hook is", "on" if MARK in src else "off")

if __name__ == "__main__":
    main()
