---
name: skald-add-content
description: Checklist for adding maps, interiors, NPCs, trainers, flags, or items to delibird-isle. Use whenever creating new game content so nothing is missed and saves don't break.
---

# Skaldmere add-content checklist

## New map / interior (use the pipeline: tools/skald/)
0. `python3 tools/skald/newmap.py --name <Name> ...` registers everything below;
   outdoor maps are DRAWN: `data/layouts/<Name>/canvas.txt` + a legend in
   `tools/skald/legends/`, built by `python3 tools/skald/draw.py <canvas>`
   (prints anchor + door coordinates for map.json). Never generate fills.
1. Reuse a vanilla layout when possible (interiors: LAYOUT_HOUSE1 exits (3,8)/(4,8),
   HOUSE2 (3,7)/(4,7), Birch lab (6,12)/(7,12), PC 1F (6,8)/(7,8), Devon 3F (2,1)).
2. `data/maps/<Name>/map.json` + `scripts.pory` (see existing Parcel maps).
3. Register: name into `data/maps/map_groups.json`; add
   `.include "data/maps/<Name>/scripts.inc"` to `data/event_scripts.s`.
4. Connections: ONLY between maps sharing the same primary tileset (the engine
   reloads just the secondary on a seamless crossing). Different primary =>
   edge coord triggers that `warp` both ways (see ParcelIsle_ToBridge).
5. Exterior door: warp_event ON the door tile (doors are col1 — correct);
   interior exit warps' dest_warp_id = the exterior warp's INDEX (order matters).
6. Build ritual: rm stale .o files (see skald-verify) then `make -j modern`.
7. Run `python3 tools/skald/reach.py` (must read 0) — see skald-verify.

## Placing NPCs and setting elevation (what the reachability audit keeps catching)
- **Never put an NPC, trainer or item ball on the only tile through.** A
  one-wide gap in a fence, a doorstep lane, a 1-tile corridor, the tile
  below a stair: a standing NPC there seals the map for good (trainers who
  walk up to you stay where they stop, so a trainer facing down a 1-wide
  path can end up blocking it too — have them face a wall or stand beside
  the path). Pairs standing shoulder to shoulder across a road are a wall.
  `grid.py MAP --comp` before and after placing: the letters must not split.
- **An NPC a script moves aside must be moved for good**: `applymovement`
  is forgotten on the next map load. Put `setobjectxyperm` +
  `setobjectmovementtype` under the flag in the map's ON_TRANSITION
  (ParcelFloodbasin_OnTransition / BREEN is the template) and record it in
  `reach.py`'s `OBJ_AFTER`.
- **Elevation is per level, not per metatile.** Adjacent walkable tiles
  connect only if their elevations match or one is 0 or 15. Puddles, snow
  patches and other "decor" metatiles painted into an elevation-5 area
  must carry 5 too, or they are invisible walls (the Floodbasin and
  Highlands puddles). Keep every outdoor ground level at 3 unless a cliff
  art line separates it; use 0 for stairs and the one ground tile beside a
  bridge end; keep bridge decks at 4 or 15 (their rails are top-layer art,
  elevation 4 draws the player above them — `audit.py` warns otherwise).
  Cave ledge lips are `MB_IMPASSABLE_<dir>`: walkable floor with one walled
  edge, not solid.
- **Every event carries the elevation of the tile it is used from.** The
  engine matches a trigger, a sign or a talkable NPC to the player only
  when the event's elevation is 0 or equals the player's, which is the
  tile's. Placing a village at elevation 5 with its NPCs, triggers and
  boards left at the default 3 makes all of them silent (33 such, found
  2026-11-10). `python3 tools/skald/event_elev.py` lists them, `--fix`
  rewrites them (objects and triggers take the tile's elevation, signs
  take 0); `audit.py` warns on each. **An NPC's elevation is re-read from
  its tile when it spawns**, so the template's 0 does not survive on a
  water tile: for a fish or swimmer spoken to from a bridge, set the water
  tile itself to elevation 0 (`layout_edit.py MAP elev x,y 0`), and put the
  walkway's ramp/edge tiles at 0 as well so the player on it is a wildcard
  too (the Floodbasin levee).
- **Ledges are one-way and the Mach-Bike slope is down-only** (no bike in
  Skaldmere). A ring of ledges around a village needs a stair out
  (metatile 175 in the mountain kit, elevation 0 — see the Highlands at
  (31,69)). Never use `MB_MUDDY_SLOPE` as a ramp the player must climb.
- **Edit tiles and objects in place**: `layout_edit.py` (elev / copy / set)
  and `map_obj.py` (--to / --face) keep the ROM's addresses stable, so
  harness savestates survive a rebuild. Script edits do not.

## Delibird Isle (Johto tilesets)
- Legend `tools/skald/legends/johtogeneral__azaleatown.json` (sea 473, not
  265 which carries a rock pair; cliff strips A B C over H K M, stairs T over
  |; ponds solid; snow patches are the 13 metatiles `tools/skald/snowtiles.py`
  adds to AzaleaTown, 564-575 + 601). The three island outdoor maps share the
  primary, so they are seamless connections. Compose canvases with a small
  placement script if the map is big (see the git log for the island commit).

## Evidence and the survey stakes
- A zone's clue tells set bits in its `VAR_SKALDMERE_CHn_EVIDENCE` (bit
  tables in each zone script's header). The zone's survey stake
  (`<Map>_SurveyStake` -> `SkaldSurveyStake`) names those bits from
  `sStakes[]` in `src/survey_scripting.c`; a new tell means a new bit AND a
  new name in that table.

## Remixing a vanilla slice (a map must not read as its base)
- Every `data/layouts/<X>/build.py` prints "N tiles differ from the base
  (P%)". Under ~5% the zone is still the vanilla map; reshape until the
  ground tells the zone's story (see SESSION-HANDOFF "Map provenance").
- Use the vocabulary already in the build scripts (`bed`, `puddle2`,
  `shallow`, `spill`, `mound`, `fence_h`, `solid`, the Breakwater's
  `retile`); check a new id on `tools/maptools/metatile_sheet.py` at 4x
  before using it (653 is a produce basket, not a crate; 909 is sliding
  ice; 209 alone is a flat blue square).
- Keep every event reachable (`audit.py`), then walk the new ground in the
  emulator (`walktest.py`): a shallow pool must be entered, a gap passed.

## Flags & vars
- Claim only a `FLAG_UNUSED_*` whose define greps unreferenced outside flags.h.
- NEVER change MAX_TRAINERS_COUNT (pinned 2048 since 2026-09-25 — moving it shifts
  SYSTEM_FLAGS and silently corrupts every save). TRAINERS_COUNT may grow to 2047.
- `python3 tools/skald/newtrainer.py TAG --name .. --class .. --mons "Krabby / Level 6"`
  allocates the id, the constant and the party stub.

## Trainers
- Party in `src/data/trainers.party` (Showdown-ish; see TRAINER_SKALD_* tail),
  ID in `include/constants/opponents.h`. Gym pattern: 4-arg trainerbattle_single
  with a Defeated script (badge + fanfare + HM). Sight trainers' scripts must
  START with trainerbattle. Story bosses: TRAINER_TYPE_NONE talk script.

## A trainer battle's aftermath needs the fourth argument
`trainerbattle_single(TRAINER, intro, defeat)` ends the script when the fight
starts; whatever follows runs only when the player talks again (that is the
"already beaten" line). A mark, a flag or an item that must follow the win
goes in a continuation script passed as the fourth argument
(`trainerbattle_single(TRAINER, intro, defeat, Map_Name_Won)`), re-setting
`VAR_0x8004/5` inside it since the battle clobbers them. KOLE's evidence bit,
Cordelia's flag and Dell's quest were silently second-talk-only (2026-11-10).

## An NPC's job comes before their errand, and survives the ending
- **A side quest never stands in front of a main-path function.** If the
  NPC carries a ferry, a heal, a shop, an exam or an evidence mark, that
  comes first; quest turn-in and offer are preambles that fall through, and
  the "still looking?" reminder only shows where it cannot block. The ferry
  captain's pier-post tally locked chapters 5-7; the Homesteader's errand
  locked a reading HALE requires.
- **A post-finale / post-epilogue reaction line must not end the talk of an
  NPC with a lasting function.** Make the new line the prompt (the three
  return sailors: the reaction line became the YES/NO), then fall through.
- `python3 tools/skald/gates.py` must print `0 suspicious gate(s)`.

## Prose rules (poryscript format())
- No em-dash (use --), no escaped double quotes, \p new box, \n line, \l scroll.
- §00 register: implies more than it states; no exposition dumps.

## Art (title screen, cast sprites, UI frames)
- Every custom graphic is generated: `tools/skald/title_art.py` (title layers),
  `tools/skald/cast_sprites.py` (nine cast sheets + two faction palettes),
  `tools/skald/leader_pics.py` (battle palettes for the leaders over stock
  pictures), `tools/skald/ui_frames.py` (dialogue border colours, menu frame 1),
  `tools/skald/pokenav_labels.py` (the PokéNav's SKALDMERE option and header,
  lettered in the stock 6px-pitch label font; it reads the *stock* label images
  as glyph sources, so `git checkout` them before re-running). Edit the
  generator, re-run it, rebuild; the PNG/.pal/.bin outputs are what's committed.
- Buildings: the town kits are restyled by `tools/skald/kit_restyle.py`
  (slate roofs; walls per town). A map on a kit already in its `SPEC` needs
  nothing. A new kit: `python3 tools/skald/pal_tool.py info MAP` to find the
  roof/wall entries, `mask MAP out.png P:I` to see what else they touch, then a
  `SPEC` entry and re-run (idempotent). `gTileset_General` is
  `data/tilesets/primary/leob_general`, not `general`. Never put a new cottage
  or hall on General's palette 5 yellows (they are the sand) or expect the
  Pokémon Center's red on palette 1 (it lives on palette 4's free entries).
- Outdoor palettes are graded: a colour you want in the game goes into
  `tools/skald/palette_base/<tileset>/NN.pal` (kit_restyle writes there by
  itself), then `python3 tools/skald/grade.py --apply` regenerates the live
  `.pal`. `grade.py --check` must say 0 drift before committing. A new outdoor
  tileset gets a base folder on the first `--apply`.
- The player's clothes are `tools/skald/player_kit.py` (six palettes: overworld,
  reflection and the shared back-sprite/trainer-card palette per avatar; entries
  10-11 green pair, 12-13 red pair). Change colours there, never in the PNGs.
- A new fly town: `FLAG_VISITED_PARCEL_X` (alias an unreachable Hoenn visited
  flag in `flags.h`), `setflag` it in the map's `MAP_SCRIPT_ON_TRANSITION`, add
  the `MAPSEC_` case to `GetMapsecType()` in `src/region_map.c`, a row in
  `sMapHealLocations`, the cell(s) in `region_map_layout.h`, and a town tile
  (162) at the cell in `map.bin` (8-bit affine, see skald-verify).
- A new species in a wild table or a trainer party needs a Skaldmere dex entry
  (`e("NAME", ...)` in the scratchpad dex scripts' format: four lines ≤ 44 chars,
  written into `gen_*_families.h`), its name in `tools/skald/dex_species.txt`,
  and `python3 tools/skald/regional_dex.py` re-run so the SKALD DEX lists it
  (the regional dex is generated from that file, south to north, families
  together). The Pokédex is granted with the Field Notebook
  (`FLAG_SYS_POKEDEX_GET` in Hale's brief and in the notebook's use script).
- A trainer class (the title before the name in battle): `TRAINER_CLASS_X` after
  0x4a in `include/constants/trainers.h` (bump `TRAINER_CLASS_COUNT`), a row
  `{ _("NAME"), payout, BALL }` in `gTrainerClasses` (`src/battle_main.c`,
  name ≤ 12 chars), then `Class: Relief Chief` on the `.party` entries
  (trainerproc upper-cases and underscores the words). Nothing else indexes
  classes in this fork.
- A leader's battle picture: a palette-only variant needs a JASC `.pal` in
  `graphics/trainers/palettes/`, a `TRAINER_PIC_SKALD_X` (bump
  `TRAINER_PIC_COUNT`), a `gTrainerPalette_SkaldX` INCBIN and a
  `TRAINER_SPRITE(TRAINER_PIC_SKALD_X, gTrainerFrontPic_<Stock>, gTrainerPalette_SkaldX)`
  row in `src/data/graphics/trainers.h`, then `Pic: Skald X` on every one of
  that trainer's `.party` entries (rematches too). To see it, trace the fight:
  `walktest.py ... --walk A:300 --trace 100` and look at the frames.
- New overworld sprite: 144x32 nine-frame indexed PNG (16 colours, index 0
  transparent, skin at 1-4, white 14, black 15) under
  `graphics/object_events/pics/people/skald/` (the pattern rule in
  `spritesheet_rules.mk` converts anything there). Then: `OBJ_EVENT_GFX_SKALD_X`
  in `include/constants/event_objects.h` (bump `NUM_OBJ_EVENT_GFX`), an INCBIN in
  `object_event_graphics.h`, a `sPicTable_SkaldX` in `object_event_pic_tables.h`,
  `SKALD_CAST_GRAPHICS_INFO(SkaldX, palTag)` in `object_event_graphics_info.h`,
  the extern + `[OBJ_EVENT_GFX_SKALD_X]` entry in
  `object_event_graphics_info_pointers.h`, and the map.json `graphics_id`.
- New sprite palette: JASC `.pal` in `graphics/object_events/palettes/`, INCBIN in
  `object_event_graphics.h`, `OBJ_EVENT_PAL_TAG_*` (next after 0x1127) in
  `event_objects.h`, extern + row in `sObjectEventSpritePalettes`
  (`src/event_object_movement.c`). Palettes load dynamically by tag; keep the
  distinct palettes on one map under ~8.
- Title screen BG palettes: 0-9 wordmark, 10-14 scene, 15 aurora. The harbour
  lamp is palette 10 colour 15 (pulsed in code) -- keep `LAMP` out of every
  other scene palette so its tile can only be assigned to palette 10.
- Check art in the emulator, not just the PNG: `capture.py` for the title,
  `walktest.py --out` next to the NPC for sprites, a talk for the dialogue box.

## Readables on the ground (Survey boards, stakes, papers)
- A readable is a `bg_events` entry of type `sign` (elevation 0 = any) on a
  **solid** tile with a walkable tile directly south, plus a
  `msgbox(format("..."), MSGBOX_SIGN)` script. Scout spots with the pattern in
  `boards_scout.py` (scratchpad; uses `tools/skald/audit.py`'s `load_map`): solid,
  not water, not a door, clear of warps/events/objects and their wander ranges,
  an open stand area, spread ≥ 9 tiles apart. Verify by spawning on the stand
  tile: `--walk UP:0 --walk TAP:A --walk IDLE:100 --out shot.png`.
- `python3 tools/skald/wordcount.py` after any prose pass (hand-written words
  exclude the `_R2`..`_R9`/`_FirstWin`/`_Rematch` scripts; `--rematch` includes
  them; dex entries counted via `tools/skald/dex_species.txt`).

## Ship ritual
- `python3 tools/skald/audit.py` must be clean (walkability, warps, trigger guards,
  top-layer cover, connections, fly rows, trainer registration).
- Build green → zip the .gba (32MB > 30MB send cap; zip ≈ 16MB, mGBA opens zips)
  → SendUserFile → commit (footer: session URL) → push; if the container has no
  git creds, push small TEXT files via mcp github push_files (binaries cannot
  ride it — document recipes in design/PENDING-LOCAL-COMMITS.md instead).
- Save-compat note for users: same .gba filename+folder keeps the .sav.

## Rebuilding a zone from a vanilla layout (the 2026-11 recipe)
1. Copy or row-slice the vanilla `map.bin` into `data/layouts/<Zone>/base.bin`
   (+ its `border.bin`), set width/height/tilesets in `layouts.json`, and
   write `build.py` (paint ops on raw ids; `paste_*` helpers for blocks from
   other layouts of the same tileset pair; the General house ids 8–34 with
   door 33; canopy 199 for trees). Run it; `layoutascii.py` to plan;
   `render_map.py` to look.
2. Trainer classes/pics must be Hoenn's (`Swimmer M`, `Tuber F`,
   `Ruin Maniac`, `Pokemon Ranger F`, `Pokemon Breeder M`); `newtrainer.py`
   allocates ids. Keep the level curve: Fernwick 11–16, Reedmere 10–16,
   Corridor 14–19, Floodbasin 15–22, Elvsund 20–26, Haukfell 23–29, Delibird
   28–32, Coast 27–35, Station 32–38, Marsh 36–42.
3. Gym leaders in the field are trigger gates (see Mirren/Breen/Vale):
   `trainerbattle_no_intro` inside the scene, then the badge, the HM, and a
   step aside. Leaders indoors are talk battles (Tarn, Sluice, Vane).
4. Every coord/bg event elevation 0; arrival scenes on the ON_FRAME table;
   re-point any ferry/Hale/summit warps that land on the rebuilt map.
5. `audit.py`, build, TEMP-spawn screenshot, revert the spawn, commit.

## Adding a key item (the Field Notebook is the template)
1. `include/constants/items.h`: a new id before `ITEMS_COUNT`, bump the count.
2. `src/data/items.h`: the entry (`POCKET_KEY_ITEMS`, `.importance = 1`,
   `.type = ITEM_USE_FIELD`, `.fieldUseFunc = ItemUseOutOfBattle_X`).
3. Icon: a 24×24 **4-bit** indexed PNG in `graphics/items/icons/` (Pillow:
   `im.save(path, bits=4)`, index 0 transparent) and a JASC `.pal` (CRLF)
   in `graphics/items/icon_palettes/`; declare both in
   `src/data/graphics/items.h` (INCBIN) **and** `include/graphics.h` (extern)
   or the items table fails to compile.
4. `src/item_use.c` + `include/item_use.h`: the Berry pattern --
   `sItemUseOnFieldCB = CB; SetUpItemUseOnFieldCallback(taskId);` and the CB
   does `LockPlayerFieldControls(); ScriptContext_SetupScript(Script);
   DestroyTask(taskId);`.
5. The script can live in `data/scripts/<name>.pory` (the Makefile compiles
   every .pory under data/); add `.include "data/scripts/<name>.inc"` to
   `data/event_scripts.s`. Dynamic text: a special fills `gStringVar4`
   (`msgbox(gStringVar4, MSGBOX_DEFAULT)` works); a menu is a
   `MULTI_*` id in `include/constants/script_menu.h` + a `MenuAction` list
   and a `MULTICHOICE(...)` row in `src/data/script_menu.h`.
6. Give it in a script with `giveitem(ITEM_X)`; verify through the bag with
   the walk test (`--item`, TAP/IDLE segments; see skald-verify).

## Route trainers and their rematch tiers
Write a simple trainer in the exact shape the generator recognises
(`trainerbattle_single(TRAINER_SKALD_X, format(intro), format(defeat))`,
one `msgbox(format(post), MSGBOX_DEFAULT)`, `end`), add its id and party,
then run `python3 tools/skald/rematch_tiers.py` (idempotent): it rewrites
the script with the four tier branches, appends `_R2.._R5` ids and evolved
parties. Never put anything before `trainerbattle_single` in a sighted
trainer's object script: the approach path parses the trainer id out of
the script's first command.
