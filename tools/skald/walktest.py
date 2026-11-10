#!/usr/bin/env python3
"""Walk test: boot the ROM headless, spawn the new game on any map (needs the
TEMP probe hook in src/new_game.c -- see the skald-verify skill), optionally
walk, then read the player's map and position straight out of the save block.

  python3 tools/skald/walktest.py --spawn MAP_PARCEL_ISLE:20,2 --walk UP:3 --expect MAP_PARCEL_MEADOW
Exit status 0 when the final map matches --expect (or when no --expect).
"""
import argparse, re, sys
from pathlib import Path
import mgba.core, mgba.image, mgba.log

ROOT = Path(__file__).resolve().parents[2]
KEYS = {"A": 0, "B": 1, "SELECT": 2, "START": 3, "RIGHT": 4, "LEFT": 5, "UP": 6, "DOWN": 7, "R": 8, "L": 9}

MAPFILE = [ROOT / "pokeemerald.map"]

def symbols():
    out = {}
    for line in MAPFILE[0].read_text().splitlines():
        m = re.match(r"\s+0x([0-9a-f]{8})\s+([A-Za-z_]\w*)$", line)   # globals and functions (CB2_* etc.)
        if m: out[m.group(2)] = int(m.group(1), 16)
    return out

def map_ids():
    out = {}
    for line in (ROOT / "include/constants/map_groups.h").read_text().splitlines():
        m = re.match(r"#define (MAP_\w+)\s+\((\d+) \| \((\d+) << 8\)\)", line)
        if m: out[m.group(1)] = (int(m.group(3)), int(m.group(2)))   # (group, num)
    return out

_folders = {}
def map_folders():
    """MAP_X constant -> data/maps folder name (from each map.json's id)."""
    if not _folders:
        import json
        for p in (ROOT / "data/maps").iterdir():
            if (p / "map.json").exists():
                _folders[json.loads((p / "map.json").read_text()).get("id")] = p.name
    return _folders

def constants(header, prefix, seed=None):
    """#define NAME value, where value may be an expression over earlier names (FLAG_SYS_* etc.)."""
    out = dict(seed or {})
    for line in (ROOT / header).read_text().splitlines():
        m = re.match(r"#define (\w+)\s+(.+?)\s*(//.*)?$", line)
        if not m: continue
        expr = re.sub(r"\b(\w+)\b", lambda w: str(out[w.group(1)]) if w.group(1) in out else w.group(1), m.group(2))
        if re.fullmatch(r"[0-9a-fA-Fx+\-*/() ]+", expr):
            try: out[m.group(1)] = int(eval(expr))
            except Exception: pass
    return {k: v for k, v in out.items() if k.startswith(prefix)}

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", default=str(ROOT / "pokeemerald.gba"))
    ap.add_argument("--map", help="the .map symbol file of that ROM (default: pokeemerald.map beside the sources)")
    ap.add_argument("--spawn", help="MAP_X:x,y (required unless --load-state)")
    ap.add_argument("--walk", action="append", default=[], help="DIR:tiles (repeatable); 'A' taps A to talk to whatever the player faces")
    ap.add_argument("--expect")
    ap.add_argument("--settle", type=int, default=8600)
    ap.add_argument("--out", help="optional PNG at the end")
    ap.add_argument("--trace", type=int, default=0, help="save a PNG every N frames once walking starts (next to --out)")
    ap.add_argument("--dismiss", type=int, default=360, help="frames of B-mashing after each segment (a long scene needs ~1500)")
    ap.add_argument("--flag", action="append", default=[], help="FLAG_X to set before the new game (up to 5, repeatable)")
    ap.add_argument("--check", action="append", default=[], help="FLAG_X or VAR_X to print at the end")
    ap.add_argument("--item", help="ITEM_X to put in the bag before the new game")
    ap.add_argument("--party", help="SPECIES_X given at level 100 before the new game, so battles can be won by mashing A")
    ap.add_argument("--var", action="append", default=[], help="VAR_X=value to set before the new game (up to 2, repeatable)")
    ap.add_argument("--fight-cap", type=int, default=20000, help="frames to spend on one battle before giving up (default 20000)")
    ap.add_argument("--fight", action="store_true", help="after each segment, while gMain.inBattle: mash A (FIGHT, first move) until the battle ends -- for a continuous run with a party")
    ap.add_argument("--load-state", help="resume from a savestate written by --save-state instead of booting a new game (--spawn is then ignored; pass any)")
    ap.add_argument("--save-state", help="write the emulator state at the end, so the next run can --load-state it (a continuous playthrough in segments)")
    a = ap.parse_args()
    if a.map: MAPFILE[0] = Path(a.map)
    syms, maps = symbols(), map_ids()
    flags = constants("include/constants/flags.h", "FLAG_", constants("include/constants/opponents.h", ""))   # system flags count up from MAX_TRAINERS_COUNT
    vars_ = constants("include/constants/vars.h", "VAR_")
    probe = syms["gProbe"]; sb1p = syms["gSaveBlock1Ptr"]
    if a.spawn:
        mname, xy = a.spawn.split(":"); sx, sy = map(int, xy.split(","))
        group, num = maps[mname]
    else:
        assert a.load_state, "--spawn is required unless --load-state is given"
        mname, sx, sy = "(state)", 0, 0
    assert len(a.flag) <= 5, "at most 5 --flag"
    mgba.log.silence()
    core = mgba.core.load_path(a.rom)
    w, h = core.desired_video_dimensions(); img = mgba.image.Image(w, h)
    core.set_video_buffer(img)      # must precede reset(), or every PNG comes out black
    core.reset()
    presses = {4500: ("START", 8), 4700: ("A", 8), 4900: ("A", 8)}
    for f in range(5000, 8001, 70): presses[f] = ("B", 8)
    held = []   # (key, until)
    tracing = [False]
    frame = 0
    def step(n, key=None):
        nonlocal frame
        for _ in range(n):
            raw = 0
            if frame in presses: held.append((presses[frame][0], frame + presses[frame][1]))
            for k, until in held:
                if frame < until: raw |= 1 << KEYS[k]
            if key: raw |= 1 << KEYS[key]
            core.set_keys(raw=raw); core.run_frame(); frame += 1
            if a.trace and tracing[0] and frame % a.trace == 0:
                img.to_pil().convert("RGB").save(str(Path(a.out).with_name(Path(a.out).stem + f"_{frame}.png")))
        held[:] = [(k, u) for k, u in held if u > frame]
    trainers = constants("include/constants/opponents.h", "TRAINER_")
    tfs = constants("include/constants/flags.h", "TRAINER_FLAGS_START")["TRAINER_FLAGS_START"]
    gmain = syms.get("gMain")
    def in_battle():
        return bool(gmain) and (core.memory.u8[gmain + 0x439] >> 1) & 1
    btf = syms.get("gBattleTypeFlags")
    battles = [0]                  # how many fights so far (GOTO compares before/after a run)
    def fight(limit=None):         # through a battle until inBattle clears.
        limit = a.fight_cap if limit is None else limit
        spent, taps = 0, 0
        # A wild battle is run from (a level-100 partner always escapes): UP, LEFT to FIGHT, DOWN, RIGHT to RUN, A,
        # then B through the text. A trainer battle is fought by reading the battle RAM instead of mashing blind:
        # the lead's PP is topped up in gBattleMons (written back to the party when the battle ends), so move 1
        # never reads "no PP left", and if the action cursor drifted off FIGHT (an A that landed during an
        # animation, then a stray direction) it is steered back before the next A. B every sixth tap closes
        # anything that still opened.
        battles[0] += 1
        wild = btf is not None and not (core.memory.u32[btf] & 8)   # BATTLE_TYPE_TRAINER
        if a.trace: print(f"  battle: gBattleTypeFlags={core.memory.u32[btf] if btf else None:#x} wild={wild}", flush=True)
        run_keys = ["UP", "LEFT", "DOWN", "RIGHT", "A", "B", "B", "B"]
        bmons, acur = syms.get("gBattleMons"), syms.get("gActionSelectionCursor")
        bmain = syms.get("BattleMainCB2")
        while in_battle() and spent < limit:
            if bmain and (core.memory.u32[gmain + 4] & ~1) != bmain and spent > 400:
                # Some other screen is up inside the battle: the move-forget summary a level-up opens (an
                # A there deletes move 1, which is how a partner lost ROCK SMASH to ROLLOUT, 2026-11-10),
                # the bag, the party menu. B backs out of each; "Stop learning it?" then takes the A.
                key = "B"
            elif wild:
                key = run_keys[taps % len(run_keys)]
            else:
                if bmons is not None:
                    for i in range(4):                               # struct BattlePokemon: moves @0x0C, pp @0x25
                        if core.memory.u16[bmons + 0x0C + 2 * i] and core.memory.u8[bmons + 0x25 + i] < 10:
                            core.memory.u8[bmons + 0x25 + i] = 20
                cur = core.memory.u8[acur] if acur is not None else 0    # 0 FIGHT, 1 BAG, 2 POKEMON, 3 RUN
                key = "A" if cur == 0 else ("UP" if cur == 2 else "LEFT")
                if cur == 0 and taps % 6 == 5: key = "B"
            step(8, key); step(32); spent += 40; taps += 1
        if spent:                   # the exp / level-up text and the fade back, plain B (no re-entry)
            step(120)
            for f in range(0, 240, 45): presses[frame + f] = ("B", 8)
            step(250)
        return spent
    def set_battle_style_set():
        # SaveBlock2: u16 at 0x14 holds optionsTextSpeed:3, optionsWindowFrameType:5, optionsSound:1, optionsBattleStyle:1.
        # SET style means no "switch POKéMON?" prompt, which the A-mash would otherwise answer YES to and then live
        # in the party menu. Only when the field reads as expected (text speed MID = 1 in the low bits).
        sb2 = core.memory.u32[syms["gSaveBlock2Ptr"]]
        v = core.memory.u16[sb2 + 0x14]
        if (v & 7) in (0, 1, 2):
            core.memory.u16[sb2 + 0x14] = (v & ~7) | 2 | (1 << 9)   # text speed FAST, battle style SET
    def live_pos():
        sb1 = core.memory.u32[sb1p]
        g, n = core.memory.u8[sb1 + 4], core.memory.u8[sb1 + 5]
        return next((k for k, v in maps.items() if v == (g, n)), None), core.memory.s16[sb1], core.memory.s16[sb1 + 2]
    def dismiss(frames):           # mash B: closes any scene text, harmless otherwise; fights any battle a scene starts
        done = 0
        while done < frames:
            chunk = min(180, frames - done)
            for f in range(0, chunk, 45): presses[frame + f] = ("B", 8)
            step(chunk); done += chunk
            if a.fight and in_battle():
                print(f"  (battle at frame {frame}: fought for {fight()} frames)")
        step(10)
    if a.load_state:
        # resume: the boot key schedule must not fire, so start the frame clock past it
        from mgba._pylib import ffi
        presses.clear()
        data = Path(a.load_state).read_bytes()
        state = ffi.new("unsigned char[]", data)
        assert core.load_raw_state(state), "load_raw_state failed (state from another ROM build?)"
        frame = 100000
        step(30)
    else:
        step(4400)
        core.memory.u16[probe] = (group << 8) | num; core.memory.u16[probe + 2] = sx; core.memory.u16[probe + 4] = sy
        for i, f in enumerate(a.flag):   # FLAG_X, or TRAINER_X to mark that trainer as already defeated
            core.memory.u16[probe + 6 + 2 * i] = flags[f] if f in flags else tfs + trainers[f]
        if a.item:
            core.memory.u16[probe + 20] = constants("include/constants/items.h", "ITEM_")[a.item]
        if a.party:
            core.memory.u16[probe + 22] = constants("include/constants/species.h", "SPECIES_")[a.party]
        assert len(a.var) <= 2, "at most 2 --var"
        for i, v in enumerate(a.var):
            name, val = v.split("=")
            core.memory.u16[probe + 24 + 4 * i] = vars_[name]; core.memory.u16[probe + 26 + 4 * i] = int(val, 0)
        step(a.settle - 4400)
        dismiss(900)                    # the arrival scene, if any
    if a.fight:
        set_battle_style_set()
    # SaveBlock1's flags/vars offsets, written into the probe block by the new-game hook. Remember them now:
    # a soft reset (the credits) clears EWRAM, and CONTINUE does not run the hook again.
    offs0 = (core.memory.u16[probe + 16], core.memory.u16[probe + 18])
    offs_file = Path(str(a.rom) + ".offs")        # ... and across runs: a state saved after the reset has none
    if offs0[0] and offs0[1]:
        if not offs_file.exists() or offs_file.read_text() != f"{offs0[0]} {offs0[1]}":
            offs_file.write_text(f"{offs0[0]} {offs0[1]}")
    elif offs_file.exists():
        offs0 = tuple(int(v) for v in offs_file.read_text().split())
    tracing[0] = True
    for wspec in a.walk:
        d, n = (wspec.split(":") + ["1"])[:2]
        if d.upper() == "DUMPOBJ":  # DUMPOBJ -- print the live object events (debugging what the player faces)
            oe = syms.get("gObjectEvents")
            mapname, px, py = live_pos()
            print(f"  DUMPOBJ on {mapname} at ({px},{py}), facing {core.memory.u8[oe + 0x18] & 0xF if oe else '?'}")
            for i in range(16):
                b = oe + i * 0x24
                bits = core.memory.u32[b]
                if bits & 1:
                    print(f"    obj{i}: local {core.memory.u8[b + 8]} gfx {core.memory.u16[b + 4]} at ({core.memory.s16[b + 0x10] - 7},{core.memory.s16[b + 0x12] - 7}) elev {core.memory.u8[b + 0x0B] & 0xF}{' PLAYER' if (bits >> 16) & 1 else ''}")
            continue
        if d.upper() == "A":        # A[:n] -- tap A n times (talk, page through text, answer YES to a prompt)
            for _ in range(int(n)):
                step(8, "A"); step(37)
        elif d.upper() == "WAIT":   # WAIT:n -- just mash B for n frames (a long scene, a chained warp sequence)
            dismiss(int(n)); continue
        elif d.upper() == "TAP":    # TAP:KEY -- one tap (menus: TAP:START, TAP:DOWN, TAP:A, TAP:R ...), no dismiss phase
            if a.trace: print(f"  TAP {n.upper()} @ {frame}", flush=True)
            step(8, n.upper()); step(40); continue
        elif d.upper() == "IDLE":   # IDLE:n -- wait n frames with no input (menu fades, text printing)
            step(int(n)); continue
        elif d.upper() == "TEACHHM":
            # TEACHHM:i,slot -- from the field: START, the BAG entry (3rd with the dex, 2nd without), the TMs & HMs
            # pocket, the i-th item, then A every 300 frames until the party menu's callback is live, DOWN to
            # the slot, A, A until the party menu closes, B until the field is back. Screen states are read
            # from gMain.callback2, so nothing depends on how long a text box takes to print.
            cb2 = lambda: core.memory.u32[gmain + 4] & ~1      # function pointers carry the Thumb bit
            CB = {k: syms.get(k) for k in ("CB2_BagMenuRun", "CB2_Overworld", "CB2_OverworldBasic", "CB2_ReturnToField",
                                           "CB2_ReturnToFieldWithOpenMenu", "CB2_ReturnToFieldContinueScript")}
            assert CB["CB2_BagMenuRun"] and CB["CB2_Overworld"], f"callbacks missing from the map: {CB}"
            field_cbs = {v for k, v in CB.items() if v and k != "CB2_BagMenuRun"}
            # the party menu's own callback is static (not in the map): in this flow it is the screen
            # that is neither the bag nor the field
            CB["CB2_UpdatePartyMenu"] = None
            def in_party():
                c = cb2()
                return c != CB["CB2_BagMenuRun"] and c not in field_cbs
            # TEACHHM:item,slot[,forget] -- forget = which move (1-4) to give up when the mon knows four
            item_s, slot_s, *rest = n.split(",")
            forget_slot = int(rest[0]) if rest else 1
            # 'last' = the newest party member (gPlayerPartyCount), e.g. a lent swimmer
            slot = core.memory.u8[syms["gPlayerPartyCount"]] if slot_s == "last" else int(slot_s)
            item_name = f"ITEM_{item_s.upper()}" if not item_s.isdigit() else None
            item = int(item_s) if item_s.isdigit() else -1
            sb1 = core.memory.u32[sb1p]
            flags_off = core.memory.u16[probe + 16]
            has_dex = (core.memory.u8[sb1 + flags_off + (flags["FLAG_SYS_POKEDEX_GET"] >> 3)] >> (flags["FLAG_SYS_POKEDEX_GET"] & 7)) & 1
            # The START menu remembers its cursor between openings, so a fixed number of DOWNs lands on
            # whatever was picked last (the second TEACHHM of a run opened the PokeNav). Scan instead:
            # open, move k down, A; if the bag's callback is not live, B back to the field and try k+1.
            for k in range(9):
                step(8, "START"); step(60)
                for _ in range(k):
                    step(8, "DOWN"); step(16)
                step(8, "A")
                for _ in range(40):                  # the bag opens
                    step(10)
                    if cb2() == CB["CB2_BagMenuRun"]: break
                if cb2() == CB["CB2_BagMenuRun"]:
                    break
                for _ in range(12):                  # something else opened: close it
                    if cb2() == CB["CB2_Overworld"]: break
                    step(8, "B"); step(60)
                step(8, "B"); step(40); step(8, "B"); step(60)   # and the START menu it returned to
            else:
                print("  TEACHHM: the bag never opened"); continue
            step(90)
            # The bag remembers its pocket and cursor, and TMs sort before HMs, so neither "RIGHT twice"
            # nor "the i-th item" is stable. Read gBagPosition / gBagPockets: switch pockets until the
            # TMs & HMs one is showing, then move the cursor until it sits on the wanted item.
            tmhm = constants("include/constants/item.h", "TMHM_POCKET")["TMHM_POCKET"]
            npock = constants("include/constants/item.h", "POCKETS_COUNT")["POCKETS_COUNT"]
            bpos, bpk = syms["gBagPosition"], syms["gBagPockets"]
            for _ in range(npock + 1):
                if core.memory.u8[bpos + 5] == tmhm: break
                step(8, "RIGHT"); step(60)
            step(60)
            slots = core.memory.u32[bpk + 8 * tmhm]; cap = core.memory.u8[bpk + 8 * tmhm + 4]
            ids = [core.memory.u16[slots + 4 * i] for i in range(cap)]
            if item_name:
                wanted = constants("include/constants/items.h", "ITEM_")[item_name]
                if wanted not in ids:
                    print(f"  TEACHHM: {item_name} is not in the TMs & HMs pocket {[i for i in ids if i]}"); continue
                target = ids.index(wanted)
            else:
                target = item
            def cursor():
                return core.memory.u16[bpos + 8 + 2 * tmhm] + core.memory.u16[bpos + 8 + 2 * npock + 2 * tmhm]
            for _ in range(24):
                c = cursor()
                if c == target: break
                step(8, "DOWN" if c < target else "UP"); step(24)
            step(30)
            presses_done = 0
            while not in_party() and presses_done < 14:
                if a.trace: print(f"  TEACHHM A @ {frame} cb2={cb2():#x}", flush=True)
                step(8, "A"); step(300); presses_done += 1
            if a.trace: print(f"  TEACHHM after A-loop @ {frame} cb2={cb2():#x} party={in_party()}", flush=True)
            if not in_party():
                print(f"  TEACHHM: party menu never opened (cb2 {cb2():#x})")
            else:
                step(90)
                # The party menu remembers its cursor too (gPartyMenu.slotId, offset 9): steer onto the
                # wanted slot instead of counting DOWNs from wherever the last visit left it.
                pm = syms.get("gPartyMenu")
                for _ in range(10):
                    cur = core.memory.s8[pm + 9] if pm is not None else 0
                    if cur == slot - 1: break
                    step(8, "UP" if 0 <= cur < 6 and cur > slot - 1 else "DOWN"); step(30)
                party_cb = cb2()                     # the party menu's own callback (static, so read here)
                forget_moved = False
                step(8, "A"); step(300)
                for _ in range(40):
                    c = cb2()
                    if not in_party(): break
                    if c == party_cb:                # the learn text, "delete a move?" (A = YES), "Poof!", ...
                        step(8, "A"); step(300)
                    else:                            # the move-forget screen: go to the move to give up
                        if not forget_moved:         # (HMs are forgettable in Skaldmere, so choose with care:
                            step(90)                 # the first move may be the ROCK SMASH the road still needs)
                            for _ in range(forget_slot - 1):
                                step(8, "DOWN"); step(40)
                            forget_moved = True
                        step(8, "A"); step(150)
                        if cb2() == c:               # refused (an engine that protects HMs): try the next one down
                            step(8, "DOWN"); step(40)
            for _ in range(10):
                if cb2() == CB["CB2_Overworld"]: break
                step(8, "B"); step(60)
            step(60)
            print(f"  TEACHHM {item_name or item} slot {slot}: back in the field = {cb2() == CB['CB2_Overworld']}")
            continue
        elif d.upper() == "MENU":   # MENU:k,n -- a talk that ends in a choice box and a warp (the ferry): up to n
            # rounds of [DOWN x k, A], stopping the moment the map changes, so no stray press lands on
            # whoever stands at the arrival point. k = 0 is "A until the boat leaves".
            k, rounds = (int(v) for v in n.split(","))
            m0 = live_pos()[0]
            for _ in range(rounds):
                if live_pos()[0] != m0: break
                for _ in range(k):
                    step(8, "DOWN"); step(20)
                step(8, "A")
                for _ in range(30):                  # 300 frames, watching for the warp
                    step(10)
                    if live_pos()[0] != m0: break
            step(200)
            continue
        elif d.upper() == "TALK":   # TALK:n -- A, wait for the text, then n more A presses spaced for printing
            step(8, "A"); step(420)   # (a YES/NO prompt takes the default YES)
            for _ in range(int(n)):
                step(8, "A"); step(300)
        elif d.upper() == "TALKFIGHT":   # TALKFIGHT:n -- A through up to n pages until a battle starts, fight it, stop.
            # For a scene whose text AFTER the battle holds a YES/NO: WAIT would mash B through it and answer NO.
            for _ in range(int(n)):
                step(8, "A"); step(300)
                if in_battle():
                    print(f"  (battle at frame {frame}: fought for {fight()} frames)")
                    break
            else:
                print("  TALKFIGHT: no battle started")
        elif d.upper() in ("GOTO", "GOTOEDGE", "GOTOWARP"):
            # GOTO:x,y / GOTOEDGE:up / GOTOWARP:n -- plan on the live map with tools/skald/route.py, walk run by
            # run, and re-plan from the real position after anything (a trainer, a scene, a wanderer) cuts a run short
            import route
            target = n
            still = 0
            nopath = 0
            blocked = set()             # tiles that refused a step (an NPC who moved): re-plan around them
            DXY = {"RIGHT": (1, 0), "LEFT": (-1, 0), "DOWN": (0, 1), "UP": (0, -1)}
            for attempt in range(60):
                mapname, px, py = live_pos()
                mdir = map_folders().get(mapname)
                if mdir is None:
                    print(f"  GOTO: unknown live map {mapname}"); break
                kw = {}
                if d.upper() == "GOTO":
                    gx, gy = map(int, target.split(",")); kw["goal"] = (gx, gy)
                    if (px, py) == (gx, gy): break
                elif d.upper() == "GOTOEDGE":
                    kw["edge"] = target.lower()
                else:
                    kw["warp"] = int(target)
                # prefer a grass-free path (fewer wild battles); fall back to any path. While surfing
                # (gPlayerAvatar.flags bit 3) water is floor and riding onto a shore dismounts.
                pav = syms.get("gPlayerAvatar")
                kw["surf"] = bool(pav is not None and core.memory.u8[pav] & 0x08)
                # plan around the NPCs where they stand NOW (gObjectEvents, 16 x 0x24 bytes: active bit 0,
                # isPlayer bit 16, currentCoords at +0x10 with MAP_OFFSET 7), not where map.json spawned them:
                # a leader who stepped aside, a trainer who walked up, an item ball already taken
                oe = syms.get("gObjectEvents")
                if oe is not None:
                    live = set()
                    for i in range(16):
                        b = oe + i * 0x24
                        bits = core.memory.u32[b]
                        if (bits & 1) and not ((bits >> 16) & 1) and core.memory.u8[b + 8] != 0xFF:
                            live.add((core.memory.s16[b + 0x10] - 7, core.memory.s16[b + 0x12] - 7))
                    kw["objects"] = live
                path, runs = route.plan(mdir, (px, py), blocked=blocked, avoid_grass=True, **kw)
                if not path:
                    path, runs = route.plan(mdir, (px, py), blocked=blocked, **kw)
                if path and len(path) == 1 and d.upper() != "GOTO":
                    # standing on the warp tile with the map unchanged: an interior's exit mat fires when the
                    # player walks off it in its direction (south first), a side exit when walking sideways
                    for key in ("DOWN", "UP", "LEFT", "RIGHT"):
                        step(16, key); step(60); dismiss(120)
                        if live_pos()[0] != mapname:
                            break
                    break
                if not runs:
                    # a scene may have an NPC standing in the way for now (an examiner who walked up and
                    # has not walked back yet): B through it and plan again before giving up
                    nopath += 1
                    if nopath <= 3:
                        dismiss(1500); blocked.clear(); continue
                    print(f"  GOTO: no path from ({px},{py}) on {mdir} to {target}"); break
                rd, rk = runs[0]
                print(f"  GOTO {target}: at ({px},{py}) {rd} x{rk} (frame {frame})", flush=True)
                fights_before = battles[0]
                # walking is 16 frames a tile, surfing 8: hold the key for the run at the current speed,
                # or a surf ride overshoots onto whatever shore lies beyond the plan
                if kw.get("surf"):
                    step(8 * (rk - 1) + 6, rd); step(30)
                else:
                    step(16 * (rk - 1) + 12, rd); step(30)
                dismiss(120)
                nm, nx, ny = live_pos()
                if nm != mapname:
                    break               # crossed a connection or took a door: the goal was the edge/warp
                if (nx, ny) == (px, py) and pav is not None and core.memory.u8[pav + 6]:
                    # gPlayerAvatar.preventStep: a script has the player (a trigger on this tile started a
                    # scene). Not a blocked tile -- dismiss until the script lets go, then plan again.
                    dismiss(600)
                    continue
                if (nx, ny) == (px, py) and battles[0] != fights_before:
                    continue            # a wild battle took the run: not a wall, just plan again
                if (nx, ny) == (px, py):
                    still += 1
                    dismiss(900)        # a scene on this tile (the Floodbasin relief line runs ten boxes) or a
                                        # trainer's closing lines may still be playing: B through it first
                    if still >= 3:      # three times without moving: something stands there now
                        dx, dy = DXY[rd]
                        blocked.add((px + dx, py + dy))
                    if still >= 8:
                        print(f"  GOTO: stuck at ({px},{py}) heading {rd}"); break
                else:
                    still = 0
            dismiss(a.dismiss); continue
        else:
            step(16 * int(n) + 12, d.upper()); step(30)
        dismiss(a.dismiss)          # a trigger's text, a leave prompt, an arrival on the other side
    step(60)
    sb1 = core.memory.u32[sb1p]
    # SaveBlock1: pos (live x,y) at +0/+2; location.mapGroup/mapNum at +4/+5 (location.x/y at +8/+10 is only the warp target)
    x, y = core.memory.s16[sb1], core.memory.s16[sb1 + 2]
    g, n = core.memory.u8[sb1 + 4], core.memory.u8[sb1 + 5]
    name = next((k for k, v in maps.items() if v == (g, n)), f"({g},{n})")
    ok = (a.expect is None) or (name == a.expect)
    print(f"{'OK ' if ok else 'BAD'} spawn {mname}({sx},{sy}) walk {a.walk} -> {name} at ({x},{y})" + (f" expected {a.expect}" if not ok else ""))
    flags_off, vars_off = core.memory.u16[probe + 16], core.memory.u16[probe + 18]   # written back by the hook
    if not flags_off or not vars_off:      # the game was reset and continued from its save since
        flags_off, vars_off = offs0
    for c in a.check:
        if c in flags:
            print(f"  {c} = {(core.memory.u8[sb1 + flags_off + (flags[c] >> 3)] >> (flags[c] & 7)) & 1}")
        elif c in vars_:
            print(f"  {c} = {core.memory.u16[sb1 + vars_off + 2 * (vars_[c] - 0x4000)]}")
        elif c in trainers:          # defeated flag
            fid = tfs + trainers[c]
            print(f"  {c} defeated = {(core.memory.u8[sb1 + flags_off + (fid >> 3)] >> (fid & 7)) & 1}")
        else:
            print(f"  {c}: unknown")
    if a.out: img.to_pil().convert("RGB").save(a.out)
    if a.save_state:
        from mgba._pylib import ffi
        st = core.save_raw_state()
        assert st is not None, "save_raw_state failed"
        Path(a.save_state).write_bytes(bytes(ffi.buffer(st)))
    sys.exit(0 if ok else 1)

if __name__ == "__main__":
    main()
