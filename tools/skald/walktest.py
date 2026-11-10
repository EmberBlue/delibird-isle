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
    ap.add_argument("--spawn", required=True, help="MAP_X:x,y")
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
    a = ap.parse_args()
    if a.map: MAPFILE[0] = Path(a.map)
    syms, maps = symbols(), map_ids()
    flags = constants("include/constants/flags.h", "FLAG_", constants("include/constants/opponents.h", ""))   # system flags count up from MAX_TRAINERS_COUNT
    vars_ = constants("include/constants/vars.h", "VAR_")
    probe = syms["gProbe"]; sb1p = syms["gSaveBlock1Ptr"]
    mname, xy = a.spawn.split(":"); sx, sy = map(int, xy.split(","))
    group, num = maps[mname]
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
    step(4400)
    core.memory.u16[probe] = (group << 8) | num; core.memory.u16[probe + 2] = sx; core.memory.u16[probe + 4] = sy
    trainers = constants("include/constants/opponents.h", "TRAINER_")
    tfs = constants("include/constants/flags.h", "TRAINER_FLAGS_START")["TRAINER_FLAGS_START"]
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
    def dismiss(frames):           # mash B: closes any scene text, harmless otherwise
        for f in range(0, frames, 45): presses[frame + f] = ("B", 8)
        step(frames + 10)
    dismiss(900)                    # the arrival scene, if any
    tracing[0] = True
    for wspec in a.walk:
        d, n = (wspec.split(":") + ["1"])[:2]
        if d.upper() == "A":        # A[:n] -- tap A n times (talk, page through text, answer YES to a prompt)
            for _ in range(int(n)):
                step(8, "A"); step(37)
        elif d.upper() == "WAIT":   # WAIT:n -- just mash B for n frames (a long scene, a chained warp sequence)
            dismiss(int(n)); continue
        elif d.upper() == "TAP":    # TAP:KEY -- one tap (menus: TAP:START, TAP:DOWN, TAP:A, TAP:R ...), no dismiss phase
            step(8, n.upper()); step(40); continue
        elif d.upper() == "IDLE":   # IDLE:n -- wait n frames with no input (menu fades, text printing)
            step(int(n)); continue
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
    sys.exit(0 if ok else 1)

if __name__ == "__main__":
    main()
