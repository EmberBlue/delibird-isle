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

def symbols():
    out = {}
    for line in (ROOT / "pokeemerald.map").read_text().splitlines():
        m = re.match(r"\s+0x([0-9a-f]{8})\s+(g\w+)$", line)
        if m: out[m.group(2)] = int(m.group(1), 16)
    return out

def map_ids():
    out = {}
    for line in (ROOT / "include/constants/map_groups.h").read_text().splitlines():
        m = re.match(r"#define (MAP_\w+)\s+\((\d+) \| \((\d+) << 8\)\)", line)
        if m: out[m.group(1)] = (int(m.group(3)), int(m.group(2)))   # (group, num)
    return out

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", default=str(ROOT / "pokeemerald.gba"))
    ap.add_argument("--spawn", required=True, help="MAP_X:x,y")
    ap.add_argument("--walk", action="append", default=[], help="DIR:tiles (repeatable); 'A' taps A to talk to whatever the player faces")
    ap.add_argument("--expect")
    ap.add_argument("--settle", type=int, default=8600)
    ap.add_argument("--out", help="optional PNG at the end")
    ap.add_argument("--trace", type=int, default=0, help="save a PNG every N frames once walking starts (next to --out)")
    ap.add_argument("--dismiss", type=int, default=360, help="frames of B-mashing after each segment (a long scene needs ~1500)")
    a = ap.parse_args()
    syms, maps = symbols(), map_ids()
    probe = syms["gProbe"]; sb1p = syms["gSaveBlock1Ptr"]
    mname, xy = a.spawn.split(":"); sx, sy = map(int, xy.split(","))
    group, num = maps[mname]
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
    step(a.settle - 4400)
    def dismiss(frames):           # mash B: closes any scene text, harmless otherwise
        for f in range(0, frames, 45): presses[frame + f] = ("B", 8)
        step(frames + 10)
    dismiss(900)                    # the arrival scene, if any
    tracing[0] = True
    for wspec in a.walk:
        d, n = (wspec.split(":") + ["1"])[:2]
        if d.upper() == "A":        # talk / interact: tap A, then let the dismiss phase page through the text
            step(8, "A"); step(30)
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
    if a.out: img.to_pil().convert("RGB").save(a.out)
    sys.exit(0 if ok else 1)

if __name__ == "__main__":
    main()
