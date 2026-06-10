# Headless ROM screenshots

Render the built ROM to a PNG without a display server, so visual work — maps,
UI, cutscenes — can be *seen* in a remote session, not just compiled. Uses the
mGBA Python bindings driving a headless emulator core.

## One-time setup

```bash
bash tools/screenshot/setup.sh
```

Installs `libmgba0.10t64` (apt) and `mgba` + `Pillow` (pip). Idempotent.

## Use

```bash
# build the ROM first
make -j$(nproc) modern

# boot to the title screen
python3 tools/screenshot/capture.py --frames 4500 --out /tmp/title.png

# drive input: press START at the title, capture what follows
python3 tools/screenshot/capture.py --frames 4800 --out /tmp/menu.png \
    --press START@4500:8
```

Then open the PNG (it's 240x160, native GBA resolution).

## Reaching a specific map

For verifying a particular map, two paths beat scripting the whole intro:

1. **Savestate** — park a savestate at the map and load it (mGBA savestate
   support); capture from there.
2. **Debug warp** — the expansion's debug menu can warp directly to a map;
   drive the inputs to reach it.

`--press KEY@FRAME[:HOLD]` is repeatable, so multi-step input sequences are
just multiple flags. Keys: A B SELECT START RIGHT LEFT UP DOWN R L.

## Why this exists

A remote session can build and headless-test logic, but couldn't *see* the
game. This closes that gap: the same ROM that passes `make check` can be
rendered frame-by-frame and inspected.
