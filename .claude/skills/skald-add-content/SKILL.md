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

## Prose rules (poryscript format())
- No em-dash (use --), no escaped double quotes, \p new box, \n line, \l scroll.
- §00 register: implies more than it states; no exposition dumps.

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
