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

Title screen: `--frames 2600 --press START@500:8` lands on the settled title
(the START skips the intro); take a second frame ~350 later to see the aurora
drift and the harbour lamp pulse. Overworld sprites: `walktest.py --spawn` two
tiles below the NPC, `--walk UP:0 --out shot.png`. A dialogue box: add
`--walk A:90` before `--out`. Menus: `TAP:START` works, but follow it with
`IDLE:n`, never `WAIT:n` -- WAIT mashes B and closes the menu (that was the
"start menu won't open" mystery of 2026-11-10). PokéNav map, from any field
spot: `--walk IDLE:30 --walk TAP:START --walk IDLE:40 --walk TAP:DOWN --walk
IDLE:15 --walk TAP:A --walk IDLE:220 --walk TAP:A --walk IDLE:260 --out map.png`.
Add `--trace 60` to see every screen along the way. A fight's intro frames
(trainer sprite, "would like to battle") are found the same way: `--trace 100`
over the talk-and-fight sequence, then pick the frames.

After any pass that adds objects or sign events (pairs, boards, quest finds),
re-run `tools/skald/sweep.py` (every warp and connection) and
`tools/skald/spine.sh` (the eight exams, the signings, the confession, the
boardroom) against a fresh probe ROM; a pair of standing NPCs can block a
one-tile path that the audit does not model. Both runs are background jobs of
twenty to thirty minutes; the logs are the record.

See a whole map without booting: `python3 tools/skald/pal_tool.py render
ParcelFernwick out.png` draws it from tile data (seconds, exact colours).
Before touching any tileset palette, `mask MAP out.png P:I,I` paints every
pixel that entry reaches; a change is safe only when the magenta is all
yours. The emulator is still the final word (`walktest.py --spawn ... --out`).

Region map gotcha: `graphics/pokenav/region_map/map.bin` is an **8-bit affine
tilemap (64x64 bytes, no flips)**, not a 16-bit text tilemap. A 16-bit file
of the same 4096 bytes renders as vertical stripes in the PokéNav. Decode it
as bytes (`row*64+col`) when checking, and keep the tile sheet under 233
tiles (`-num_tiles 233` in `graphics_file_rules.mk`).

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

After any change to map tables, warps or connections, run the whole-world
sweep: `tools/skald/sweep.py --rom HOOKON.gba --map HOOKON.map --jobs 3
--log sweep.log` walks every warp event and every connection (257 probes)
against a probe-hook ROM copied out of the tree (`--map` points walktest at
that ROM's symbol file, so the sources can be clean while it runs). Read the
BAD lines: a retired map or a tile the picker chose at the wrong elevation is
noise; anything else is a break. Map number 127 of a group used to misroute
every warp into it (fixed in the engine 2026-11-10).

To fight through a gate instead of whiting out, give the harness a partner:
`--party SPECIES_MEWTWO` puts a level-100 one in the party with ICE BEAM in
slot 1 (no type is immune, so `--walk A:300` wins any leader; Vane needs
`A:650`, Cordelia `A:1300`). `--var VAR_X=value` (up to two) sets the
chapter evidence vars so the signings can be reached (`--var
VAR_SKALDMERE_CH2_EVIDENCE=0xFFFF`). `tools/skald/spine.sh HOOKON.gba
HOOKON.map` runs the whole certification spine and prints each flag.
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
0` so the B-mash doesn't answer NO first). Menus: `--item ITEM_X` puts an
item in the bag before the new game; `TAP:KEY` is one tap with no B-mash
(TAP:START, TAP:A, TAP:LEFT wraps the bag to Key Items), `IDLE:n` waits n
frames with no input (the bag fades in ~120 frames; a text page prints in
~300). The notebook was driven this way: START, A, LEFT, A (select), A
(USE), then the multichoice.
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

## Two traps the harness found (2026-11-07)
- A map whose number in its group is ≥ 128 used to load a garbage header
  (signed map numbers); fixed to `u8`, but a group tops out at 255 maps, so
  watch `include/constants/map_groups.h` as maps are added. Symptom: black
  screen, `gMain.state` 0, callback `CB2_NewGame`, no game code in the PC
  samples (read `core.cpu.pc` and `gMain` straight out of the emulator).
- Door-class exit tiles (cave mouths, track ends, ladders) take warp events on
  both sides; a step trigger never fires on them because the tile is solid.

## Harness gotchas (2026-11-08)
- `--walk DIR:n` moves n+1 tiles when nothing stops the player (the key is
  held 16n+12 frames). Route against obstacles or pass n−1; `DIR:0` is one
  step.
- Sight battles never fire in the harness: `CheckForTrainersWantingBattle`
  bails when the party is empty. Test a trainer through the talk path with
  its `TRAINER_` flag pre-set (the post-battle line proves the wiring), or
  run a `givemon` scene first (Marta's round) and then walk into a line.
- A flag set after `giveitem` needs ~3000 frames of dismissal before it
  reads back; `--dismiss 1200` is too short.
