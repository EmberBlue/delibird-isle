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



#endif //GUARD_tilesets_H
