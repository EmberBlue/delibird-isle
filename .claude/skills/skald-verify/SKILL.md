---
name: skald-verify
description: Verification playbook for delibird-isle map/script/tileset work. Use BEFORE declaring any map, script, warp, tileset, or freeze fix done, and when debugging freezes, stuck players, invisible sprites, or broken warps.
---

# Skaldmere verification playbook

## The traps that burned us (check FIRST)

1. **Ghost tilesets.** `gTileset_General` binds `leob_general`, NOT
   `primary/general` — check `src/data/tilesets/headers.h` for the REAL
   `.metatiles/.tiles` binding before patching any tileset file. Offline
   renders (`tools/maptools/render_map.py`) read whatever dir you pass —
   they will happily "verify" a ghost.
2. **Stale INCBIN objects.** Binary/asm data isn't in make's dep graph:
   after map.bin/map.json edits `rm build/modern-debug/data/{maps,map_events}.o`;
   after scripts/debug.inc `rm build/modern-debug/data/event_scripts.o`;
   after tileset bins `rm build/modern-debug/src/tilesets.o`. Then `make -j modern`.
3. **Temp-spawn artifact.** A direct `WarpToTruck` spawn skips the first warp
   and the avatar stays INVISIBLE until one — never judge player visibility
   from a direct spawn; test through the real ferry flow or after any warp.
4. **Fake-free flags.** A flag is free only if `grep -rl THE_DEFINE data/ src/`
   (minus flags.h) is empty for a define that EXISTS — 0x1AC "looked free"
   but is Deoxys's. Never touch MAX_TRAINERS_COUNT (pinned 1000; save layout).
5. **Metatile layers.** `DrawMetatile` (src/field_camera.c): cells 0-3→Bg3,
   4-7→Bg2 (under sprites), 8-11→Bg1 (COVERS sprites). Floor art in top cells
   = player hidden. Behavior mask is 0x00FF; layer bits 12-15.

## Standard audits (python decode of map.bin word: mid=v&0x3ff, col=(v>>10)&3, elev=v>>12)

- Walkable = col0+elev3; water col0+elev1; doors are col1 (arrive-and-step-out is normal).
- **Trigger guard**: every coord-event script must set its var non-zero or
  warp on EVERY exit path — an unguarded early `end` re-fires per frame =
  player pinned (the Poisoned Waters freeze).
- **lock/release**: any script with lock/lockall needs release/releaseall or a warp on all paths.
- **Warp targets**: decode destination tile of every warp()/warp_event — col must be 0 (doors exempt).
- **Connections**: for each edge connection, offset-aligned walkable tiles must exist both sides.
- **Fly**: custom MAPSECs need rows in sMapHealLocations (src/region_map.c) or fly = Littleroot bedroom.

## Seeing the game

`bash tools/screenshot/setup.sh` once; `python3 tools/screenshot/capture.py
--frames N --press KEY@FRAME:HOLD --out x.png`. Boot→title ~4500 frames;
START, A, then B-mash ~130-frame spacing through the intro scroll. Mash B not
A. Deterministic per input schedule. Interiors smaller than viewport don't
scroll the camera. Cutscenes pan the camera off the player — mid-cutscene
frames prove nothing about sprite visibility.
