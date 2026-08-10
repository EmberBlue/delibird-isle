---
name: skald-add-content
description: Checklist for adding maps, interiors, NPCs, trainers, flags, or items to delibird-isle. Use whenever creating new game content so nothing is missed and saves don't break.
---

# Skaldmere add-content checklist

## New map / interior
1. Reuse a vanilla layout when possible (interiors: LAYOUT_HOUSE1 exits (3,8)/(4,8),
   HOUSE2 (3,7)/(4,7), Birch lab (6,12)/(7,12), PC 1F (6,8)/(7,8), Devon 3F (2,1)).
2. `data/maps/<Name>/map.json` + `scripts.pory` (see existing Parcel maps).
3. Register: name into `data/maps/map_groups.json`; add
   `.include "data/maps/<Name>/scripts.inc"` to `data/event_scripts.s`.
4. Exterior door: warp_event ON the door tile (doors are col1 — correct);
   interior exit warps' dest_warp_id = the exterior warp's INDEX (order matters).
5. Build ritual: rm stale .o files (see skald-verify) then `make -j modern`.

## Flags & vars
- Claim only a `FLAG_UNUSED_*` whose define greps unreferenced outside flags.h.
- NEVER change MAX_TRAINERS_COUNT (pinned 1000 — moving it shifts SYSTEM_FLAGS
  and silently corrupts every save). TRAINERS_COUNT may grow to 999 freely.

## Trainers
- Party in `src/data/trainers.party` (Showdown-ish; see TRAINER_SKALD_* tail),
  ID in `include/constants/opponents.h`. Gym pattern: 4-arg trainerbattle_single
  with a Defeated script (badge + fanfare + HM). Sight trainers' scripts must
  START with trainerbattle. Story bosses: TRAINER_TYPE_NONE talk script.

## Prose rules (poryscript format())
- No em-dash (use --), no escaped double quotes, \p new box, \n line, \l scroll.
- §00 register: implies more than it states; no exposition dumps.

## Ship ritual
- Build green → zip the .gba (32MB > 30MB send cap; zip ≈ 16MB, mGBA opens zips)
  → SendUserFile → commit (footer: session URL) → push; if the container has no
  git creds, push small TEXT files via mcp github push_files (binaries cannot
  ride it — document recipes in design/PENDING-LOCAL-COMMITS.md instead).
- Save-compat note for users: same .gba filename+folder keeps the .sav.
