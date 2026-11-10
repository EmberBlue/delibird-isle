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
        m = re.match(r"\s+0x([0-9a-f]{8})\s+(g\w+)$", line)
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
    def fight(limit=20000):        # through a battle until inBattle clears.
        spent, taps = 0, 0
        # A wild battle is run from (a level-100 partner always escapes): UP, LEFT to FIGHT, DOWN, RIGHT to RUN, A,
        # then B through the text. Fighting every encounter drains PP until Recover is the only move left and a
        # wild battle can never end. A trainer battle is fought: per six taps A (FIGHT), a cursor nudge, A (the
        # move), A, A, B -- the nudge cycles the move so an exhausted move's "no PP left" cannot loop forever.
        wild = btf is not None and not (core.memory.u32[btf] & 8)   # BATTLE_TYPE_TRAINER
        nudges = ["RIGHT", "DOWN", "LEFT", "UP"]
        run_keys = ["UP", "LEFT", "DOWN", "RIGHT", "A", "B", "B", "B"]
        while in_battle() and spent < limit:
            if wild:
                key = run_keys[taps % len(run_keys)]
            else:
                k = taps % 6
                key = nudges[(taps // 6) % 4] if k == 1 else ("B" if k == 5 else "A")
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
    tracing[0] = True
    for wspec in a.walk:
        d, n = (wspec.split(":") + ["1"])[:2]
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
        elif d.upper() == "TALK":   # TALK:n -- A, wait for the text, then n more A presses spaced for printing
            step(8, "A"); step(420)   # (a YES/NO prompt takes the default YES)
            for _ in range(int(n)):
                step(8, "A"); step(300)
        elif d.upper() in ("GOTO", "GOTOEDGE", "GOTOWARP"):
            # GOTO:x,y / GOTOEDGE:up / GOTOWARP:n -- plan on the live map with tools/skald/route.py, walk run by
            # run, and re-plan from the real position after anything (a trainer, a scene, a wanderer) cuts a run short
            import route
            target = n
            still = 0
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
                # prefer a grass-free path (fewer wild battles); fall back to any path
                path, runs = route.plan(mdir, (px, py), blocked=blocked, avoid_grass=True, **kw)
                if not path:
                    path, runs = route.plan(mdir, (px, py), blocked=blocked, **kw)
                if not runs:
                    print(f"  GOTO: no path from ({px},{py}) on {mdir} to {target}"); break
                if d.upper() != "GOTO" and len(path) == 1:
                    # already on the warp tile and still on this map: an interior's exit door only fires
                    # when stepped onto in its direction, so step off and back on, DOWN first (south doors)
                    for back, fwd in (("UP", "DOWN"), ("DOWN", "UP"), ("RIGHT", "LEFT"), ("LEFT", "RIGHT")):
                        step(12, back); step(20); step(12, fwd); step(40); dismiss(120)
                        if live_pos()[0] != mapname:
                            break
                    break
                rd, rk = runs[0]
                print(f"  GOTO {target}: at ({px},{py}) {rd} x{rk} (frame {frame})", flush=True)
                step(16 * (rk - 1) + 12, rd); step(30)
                dismiss(120)
                nm, nx, ny = live_pos()
                if nm != mapname:
                    break               # crossed a connection or took a door: the goal was the edge/warp
                if (nx, ny) == (px, py):
                    still += 1
                    dismiss(300)        # a scene or a trainer's closing lines may still be running
                    if still >= 2:      # twice without moving: something stands there now
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
