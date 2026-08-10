# Pending local commits — recovery manifest

A session container lost git credentials; these changes shipped to the user
in ROM zips and live in that container's local commits, but could not ride
the API (binaries) or were deferred (large files). First session with working
git: apply top to bottom, build (`make -j modern`), verify, commit, push,
then DELETE this file.

## 1. Deck sprite-cover fix (BINARY — the live tileset)
`gTileset_General` binds **leob_general** (see src/data/tilesets/headers.h),
not primary/general. Patch `data/tilesets/primary/leob_general/metatiles.bin`,
metatile 440 (24-byte records):
```python
import struct
p='data/tilesets/primary/leob_general/metatiles.bin'
b=bytearray(open(p,'rb').read()); o=440*24
c=list(struct.unpack_from('<12H',b,o))
struct.pack_into('<12H',b,o,*(c[4:8]+c[8:12]+[0,0,0,0]))  # water->bottom, planks->middle, top empty
open(p,'wb').write(b)
```
Rationale: DrawMetatile (src/field_camera.c) sends cells 8-11 to Bg1, which
covers sprites. Then `rm build/modern-debug/src/tilesets.o` before building.

## 2. Fly table (src/region_map.c) — insert above the MAPSEC_LITTLEROOT_TOWN row
```c
    [MAPSEC_PARCEL_ISLE] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    // ...same Isle row for MAPSEC_SKALD_BRIDGE/STATION/WETLANDS/MARSH/CORRIDOR/
    // FLOODBASIN/RIVER/HIGHLANDS/CAVERN (mainland zones fly to the harbour)...
    [MAPSEC_SKALD_DELIBIRD] = {MAP_GROUP(MAP_PARCEL_DELIBIRD), MAP_NUM(MAP_PARCEL_DELIBIRD), HEAL_LOCATION_PARCEL_DELIBIRD},
    [MAPSEC_SKALD_COAST] = {MAP_GROUP(MAP_PARCEL_COAST), MAP_NUM(MAP_PARCEL_COAST), HEAL_LOCATION_PARCEL_COAST},
    [MAPSEC_SKALD_WEATHER] = {MAP_GROUP(MAP_PARCEL_WEATHER), MAP_NUM(MAP_PARCEL_WEATHER), HEAL_LOCATION_PARCEL_WEATHER},
```
And in `src/data/heal_locations.json` add (same shape as HEAL_LOCATION_PARCEL_ISLE):
HEAL_LOCATION_PARCEL_DELIBIRD @ PARCEL_DELIBIRD (30,38);
HEAL_LOCATION_PARCEL_COAST @ PARCEL_COAST (38,38);
HEAL_LOCATION_PARCEL_WEATHER @ PARCEL_WEATHER (23,36).

## 3. PokeNav grant (vanilla's Devon errand is cut)
- `src/new_game.c` WarpToTruck, after WarpIntoMap(): `FlagSet(FLAG_SYS_POKENAV_GET);`
- `data/scripts/debug.inc` Script 1: add `setflag FLAG_SYS_POKENAV_GET` after B_DASH.
- `data/maps/ParcelStationHall/scripts.pory` Moss: `setflag(FLAG_SYS_POKENAV_GET)`
  before his requisition branch (idempotent for old saves).

## 4. Script 1 evolved field crew (data/scripts/debug.inc)
Replace the three givemon lines with (see also commit 4e024d22's message):
```
givemon SPECIES_DODRIO, 45, move1=MOVE_FLY, move2=MOVE_DRILL_PECK, move3=MOVE_TRI_ATTACK, move4=MOVE_AGILITY
givemon SPECIES_LINOONE, 45, move1=MOVE_CUT, move2=MOVE_ROCK_SMASH, move3=MOVE_STRENGTH, move4=MOVE_FLASH
givemon SPECIES_AZUMARILL, 45, move1=MOVE_SURF, move2=MOVE_WATERFALL, move3=MOVE_DIVE, move4=MOVE_PLAY_ROUGH
```

## 5. Interiors registration (sources already pushed)
- `data/maps/map_groups.json`: after "ParcelBoardroom" add "ParcelStationHall",
  "ParcelIsleNeighborHouse", "ParcelIsleTimoHouse".
- `data/event_scripts.s`: after the ParcelBoardroom include add the three
  matching `.include "data/maps/<Name>/scripts.inc"` lines.

## 6. Delibird Isle Johto reskin
- `data/layouts/layouts.json`: LAYOUT_PARCEL_DELIBIRD →
  `"primary_tileset": "gTileset_JohtoGeneral", "secondary_tileset": "gTileset_AzaleaTown"`.
- Regenerate the map: `python3 tools/maptools/build_delibird.py` (in repo).
- `rm build/modern-debug/data/{maps,map_events}.o` before building.

## 7. Catch-up flag
`include/constants/flags.h`: FLAG_UNUSED_0x1DA →
`#define FLAG_SKALD_HALL_REQUISITION          0x1DA // Skaldmere: Moss's issue kit claimed`
