#!/usr/bin/env python3
"""Headless screenshot capture for the delibird-isle ROM.

Boots the built ROM in a headless mGBA core (no display server), runs it for a
number of frames, optionally holds input along the way, and writes a PNG that
can be opened and inspected. This is how visual work (maps, UI, cutscenes) gets
*seen* in a remote session, not just compiled.

Usage:
    python3 tools/screenshot/capture.py [--rom ROM] [--frames N] [--out FILE]
                                        [--press KEY@FRAME[:HOLD] ...]

    # boot to the title screen
    python3 tools/screenshot/capture.py --frames 4500 --out /tmp/title.png

    # press START at frame 4500 (hold 4 frames), then capture at 4600
    python3 tools/screenshot/capture.py --frames 4600 --out /tmp/menu.png \
        --press START@4500:4

Keys: A B SELECT START RIGHT LEFT UP DOWN R L  (case-insensitive)

Dependencies (installed by .claude/hooks/session-start.sh, or by hand):
    apt-get install -y libmgba0.10t64
    pip3 install mgba Pillow
"""
import argparse
import sys

import mgba.core
import mgba.image
import mgba.log


KEYS = {
    "A": 0, "B": 1, "SELECT": 2, "START": 3,
    "RIGHT": 4, "LEFT": 5, "UP": 6, "DOWN": 7, "R": 8, "L": 9,
}


def parse_press(spec):
    # KEY@FRAME[:HOLD]  ->  (key_bit, frame, hold)
    key, _, rest = spec.partition("@")
    frame, _, hold = rest.partition(":")
    if key.upper() not in KEYS:
        sys.exit(f"unknown key: {key} (valid: {', '.join(KEYS)})")
    return (KEYS[key.upper()], int(frame), int(hold) if hold else 4)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rom", default="pokeemerald.gba")
    ap.add_argument("--frames", type=int, default=4500)
    ap.add_argument("--out", default="/tmp/shot.png")
    ap.add_argument("--press", action="append", default=[],
                    help="KEY@FRAME[:HOLD], repeatable")
    args = ap.parse_args()

    mgba.log.silence()
    core = mgba.core.load_path(args.rom)
    if core is None:
        sys.exit(f"failed to load ROM: {args.rom}")

    width, height = core.desired_video_dimensions()
    image = mgba.image.Image(width, height)
    core.set_video_buffer(image)
    core.reset()

    presses = [parse_press(p) for p in args.press]

    for frame in range(args.frames):
        held = 0
        for key_bit, at, hold in presses:
            if at <= frame < at + hold:
                held |= (1 << key_bit)
        core.set_keys(raw=held)
        core.run_frame()

    if not hasattr(image, "to_pil"):
        sys.exit("Pillow not available; run: pip3 install Pillow")
    image.to_pil().convert("RGB").save(args.out)
    print(f"captured {width}x{height} after {args.frames} frames -> {args.out}")


if __name__ == "__main__":
    main()
