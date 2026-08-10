# Pending local commits — apply, build, push, then DELETE this file

A session container with no git credentials produced these changes; sources
that could travel are already in the repo (interiors map.json + scripts.pory
landed inert). What remains is below — apply all of it in one commit, run
`make -j modern` (green) and `make check DEBUG=0` (2849 PASS / 4 known), push.
The shipped user ROMs already contain all of this; the repo is what lags.

## 1. Deck sprite-cover fix (BINARY — the one the API could not carry)

`data/tilesets/primary/leob_general/metatiles.bin` — metatile 440 draws its
planks in the TOP layer, which DrawMetatile sends to Bg1 (covers sprites).
Restack (python):

    import struct
    p="data/tilesets/primary/leob_general/metatiles.bin"
    mt=bytearray(open(p,"rb").read()); off=440*24
    c=list(struct.unpack_from("<12H",mt,off))
    struct.pack_into("<12H",mt,off,*(c[4:8]+c[8:12]+[0,0,0,0]))
    open(p,"wb").write(mt)

Expected result: bottom=0x2002,0x2003,0x2003,0x2002 / middle=0x5163,0x5164,
0x5173,0x5174 / top=zeros. Attributes file untouched (layer NORMAL).
WARNING: `data/tilesets/primary/general/` is a GHOST — gTileset_General binds
leob_general (src/data/tilesets/headers.h). Do not patch the ghost. After the
edit: `rm build/modern-debug/src/tilesets.o` (INCBIN deps are not tracked).

## 2. Register the three interiors

`data/maps/map_groups.json`: after `"ParcelBoardroom"` add
`"ParcelStationHall", "ParcelIsleNeighborHouse", "ParcelIsleTimoHouse"`.

`data/event_scripts.s`: after the ParcelBoardroom include add

    .include "data/maps/ParcelStationHall/scripts.inc"
    .include "data/maps/ParcelIsleNeighborHouse/scripts.inc"
    .include "data/maps/ParcelIsleTimoHouse/scripts.inc"

## 3. Exterior door warps

`data/maps/ParcelIsle/map.json` warp_events += (indices 3 and 4 — order matters,
the interiors' dest_warp_id expect it):

    {"x":30,"y":20,"elevation":0,"dest_map":"MAP_PARCEL_ISLE_NEIGHBOR_HOUSE","dest_warp_id":"0"}
    {"x":62,"y":26,"elevation":0,"dest_map":"MAP_PARCEL_ISLE_TIMO_HOUSE","dest_warp_id":"0"}

`data/maps/ParcelStation/map.json` warp_events (was empty):

    {"x":18,"y":14,"elevation":0,"dest_map":"MAP_PARCEL_STATION_HALL","dest_warp_id":"0"}

## 4. Flag

`include/constants/flags.h`: rename `FLAG_UNUSED_0x1DA` to
`FLAG_SKALD_HALL_REQUISITION` (same value 0x1DA). NOTE 0x1AC is Deoxys's —
verify "free" flags by grepping the actual define, not a guessed name.

## 5. PokeNav grant (region map was unreachable — vanilla Devon errand cut)

`src/new_game.c`, in WarpToTruck() right after `WarpIntoMap();`:

    // The Corps nav unit (PokeNav) is standard field issue -- the region map
    // must be reachable without vanilla's Devon errand, which this hack cut.
    FlagSet(FLAG_SYS_POKENAV_GET);

`data/scripts/debug.inc`, Script 1, after `setflag FLAG_SYS_B_DASH`:

    setflag FLAG_SYS_POKENAV_GET

(The third grant — Moss, idempotent — is already in the pushed hall script.)

## 6. Fly wiring (custom MAPSECs had no rows -> warp to map 0,0 = Littleroot)

`src/data/heal_locations.json` heal_locations += (mirror the PARCEL_ISLE
entry's key style):

    {"id":"HEAL_LOCATION_PARCEL_DELIBIRD","map":"PARCEL_DELIBIRD","x":30,"y":38}
    {"id":"HEAL_LOCATION_PARCEL_COAST","map":"PARCEL_COAST","x":38,"y":38}
    {"id":"HEAL_LOCATION_PARCEL_WEATHER","map":"PARCEL_WEATHER","x":23,"y":36}

(If the existing PARCEL_ISLE entry's "map" carries a MAP_ prefix, match it.)

`src/region_map.c`, sMapHealLocations[], insert before the
MAPSEC_LITTLEROOT_TOWN row — mainland zones land at the harbour, islands at
their ferry moorings:

    [MAPSEC_PARCEL_ISLE] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_BRIDGE] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_STATION] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_WETLANDS] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_MARSH] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_CORRIDOR] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_FLOODBASIN] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_RIVER] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_HIGHLANDS] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_CAVERN] = {MAP_GROUP(MAP_PARCEL_ISLE), MAP_NUM(MAP_PARCEL_ISLE), HEAL_LOCATION_PARCEL_ISLE},
    [MAPSEC_SKALD_DELIBIRD] = {MAP_GROUP(MAP_PARCEL_DELIBIRD), MAP_NUM(MAP_PARCEL_DELIBIRD), HEAL_LOCATION_PARCEL_DELIBIRD},
    [MAPSEC_SKALD_COAST] = {MAP_GROUP(MAP_PARCEL_COAST), MAP_NUM(MAP_PARCEL_COAST), HEAL_LOCATION_PARCEL_COAST},
    [MAPSEC_SKALD_WEATHER] = {MAP_GROUP(MAP_PARCEL_WEATHER), MAP_NUM(MAP_PARCEL_WEATHER), HEAL_LOCATION_PARCEL_WEATHER},

## Build ritual reminders

After map.json edits: `rm build/modern-debug/data/{maps,map_events}.o`.
After event_scripts.s: `rm build/modern-debug/data/event_scripts.o`.
After the tileset binary: `rm build/modern-debug/src/tilesets.o`.
