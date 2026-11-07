---
name: skald-verify
description: Verification playbook for delibird-isle map/script/tileset work. Use BEFORE declaring any map, script, warp, tileset, or freeze fix done, and when debugging freezes, stuck players, invisible sprites, or broken warps.
---

# Skaldmere verification playbook

**Automated:** `python3 tools/skald/audit.py [MapName]` runs every audit below
over all Parcel maps (exit 1 on findings). Run it first; read on for the why.

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
   but is Deoxys's. Never touch MAX_TRAINERS_COUNT (pinned 2048; save layout).
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

## FireRed tileset (frp_*) specifics

- Attributes are **u16** (behaviour low byte, layer bits 12-13) — decode with `<H`.
- Tile roles: `tools/skald/legends/*.json`; look at any tile with
  `tools/skald/tileascii.py --tiles 40-63`. Water rims sit on the water tile
  (291 land-north, 298 land-west, 300 land-east). Non-animated doors (670) are
  walkable; animated doors (98) are solid.
- The primary needs `InitTilesetAnim_FrpGeneral` as its callback or water shows
  static garbage; the vanilla General animator corrupts FR art.

## Lessons from the 2026-11 rebuilds (check these too)
- **Black tiles in-game or in the renderer = palette, not data.** The
  leob_general 2×2 trees (468–477) only have a palette under leob_*
  secondaries. Fill with canopy 199 elsewhere; prefer `gTileset_leob_rustboro`
  over vanilla Rustboro.
- **A trigger that never fires = elevation.** Coord/bg events match the
  player's elevation unless the event's elevation is 0. Use 0 everywhere
  (`audit.py` warns). Painted ground must match its neighbours' elevation or
  the player is blocked; connection edge tiles at 0 bridge two levels.
- **Arriving by warp onto a trigger tile does not fire it.** Use
  `MAP_SCRIPT_ON_FRAME_TABLE [VAR_TEMP_1, 0: Script]` for arrival scenes.
- **Audit seeds:** maps entered only by script warps need their arrival tile
  in `ARRIVALS` inside `audit.py`, or every object reads as unreachable.
- Fresh container: `python3 -m pip install --break-system-packages mgba pillow`
  (not `pip3`). Capture timing: 16 frames per tile plus a few for the turn;
  if a screenshot shows no dialogue, the walk fell one tile short.

## Walk test (the real check for connections and warps)
`tools/skald/walktest.py --spawn MAP_X:x,y --walk DIR:n [--walk ...] --expect MAP_Y`
boots the ROM headless, pokes the spawn into `gProbe` (a TEMP hook in
`src/new_game.c`: `python3 tools/skald/probe_hook.py --on` adds it, build,
test, `--off` removes it, `grep -c "TEMP TEST" src/new_game.c` = 0 before
the commit), walks, mashes B through any scene, and reads the live map and
position out of the save block (`pos` at +0/+2; `location.x/y` at +8/+10
is only the warp target). `--flag FLAG_X` (up to five) sets story flags
before the new game, so any later state is one spawn away (the ending:
`--spawn MAP_PARCEL_BOARDROOM:4,2 --flag FLAG_SKALDMERE_CORDELIA_DONE --walk
LEFT:2 --walk WAIT:9000`); `--check FLAG_X|VAR_X` prints flags and vars at
the end (the hook writes the save-block offsets back into `gProbe[8..9]`).
`--walk A:n` taps A n times (answers YES to a prompt; pair with `--dismiss
0` so the B-mash doesn't answer NO first).
A trigger scene fired mid-segment eats the rest of that segment: walk onto
the trigger as its own `--walk DIR:1` with `--dismiss 1800` (a page of text
prints in ~300 frames; the default 360 only clears a one-liner), then
continue in the next segment. `--walk A` taps A to talk to whatever the
player faces (turn first with `--walk LEFT:0` etc.). `--trace 150` saves a
PNG every 150 frames from the first walk on — tile them and look; the video
buffer must be set before `core.reset()` or every PNG is black. The harness
party is empty, so any trainer battle ends in a whiteout: spawn out of
sight lines and count "reached the battle screen" as the pass. The full
list that was green on 2026-11-07 is the one in the handoff.
