#ifndef GUARD_tilesets_H
#define GUARD_tilesets_H

extern const u32 gTilesetTiles_General[];
extern const u16 gTilesetPalettes_General[][16];

extern const struct Tileset *const gTilesetPointer_SecretBase;
extern const struct Tileset *const gTilesetPointer_SecretBaseRedCave;

extern const struct Tileset gTileset_Building;
extern const struct Tileset gTileset_BrendansMaysHouse;


// Leob_General externs
extern const u32 gTilesetTiles_leob_general[];
extern const u16 gTilesetPalettes_leob_general[][16];
extern const u16 gMetatiles_leob_general[];
extern const u16 gMetatileAttributes_leob_general[];
extern const struct Tileset gtileset_leob_general;


// Desert_Primary externs
extern const u32  gTilesetTiles_DesertPrimary[];
extern const u16  gTilesetPalettes_DesertPrimary[][16];
extern const u16  gMetatiles_DesertPrimary[];
extern const u16  gMetatileAttributes_DesertPrimary[];
extern const struct Tileset gTileset_Primary_Desert;


// ---- Primary: general_hub externs ----
extern const u32  gTilesetTiles_general_hub[];
extern const u16  gTilesetPalettes_general_hub[][16];
extern const u16  gMetatiles_general_hub[];
extern const u16  gMetatileAttributes_general_hub[];
extern const struct Tileset gTileset_general_hub;


// ---- FR Port Primary: General ----
extern const u32  gTilesetTiles_frp_general[];
extern const u16  gTilesetPalettes_frp_general[][16];
extern const u16  gMetatiles_frp_general[];
extern const u16  gMetatileAttributes_frp_general[];
extern const struct Tileset gTileset_Primary_frp_general;


// ---- FR Port Primary: Building ----
extern const u32  gTilesetTiles_frp_building[];
extern const u16  gTilesetPalettes_frp_building[][16];
extern const u16  gMetatiles_frp_building[];
extern const u16  gMetatileAttributes_frp_building[];
extern const struct Tileset gTileset_Primary_frp_building;

// ---- Johto General Primary externs ----
extern const u32 gTilesetTiles_JohtoGeneral[];
extern const u16 gTilesetPalettes_JohtoGeneral[][16];
extern const u16 gTilesetPalettes_JohtoGeneral_Summer[][16];
extern const u16 gTilesetPalettes_JohtoGeneral_Autumn[][16];
extern const u16 gTilesetPalettes_JohtoGeneral_Winter[][16];

#endif //GUARD_tilesets_H
