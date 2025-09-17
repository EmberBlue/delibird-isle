#include "fieldmap.h"

// Whether a palette has a night version, located at ((x + 9) % 16).pal
#define SWAP_PAL(x) ((x) < NUM_PALS_IN_PRIMARY ? 1 << (x) : 1 << ((x) - NUM_PALS_IN_PRIMARY))

// ---- Redirect vanilla General to leob_general assets ----
const struct Tileset gTileset_General =
{
    .isCompressed        = TRUE, // leob_general tiles are tiles.4bpp.lz
    .isSecondary         = FALSE,
    .tiles               = gTilesetTiles_leob_general,
    .palettes            = gTilesetPalettes_leob_general,
    .metatiles           = gMetatiles_leob_general,
    .metatileAttributes  = gMetatileAttributes_leob_general,
    .callback            = InitTilesetAnim_General, // or NULL if you prefer
};









// ---- Tileset object: Desert_Primary ----
const struct Tileset gTileset_Primary_Desert = {
    .isCompressed = TRUE,
    .isSecondary  = FALSE,
    .tiles        = gTilesetTiles_DesertPrimary,
    .palettes     = gTilesetPalettes_DesertPrimary,
    .metatiles    = gMetatiles_DesertPrimary,
    .metatileAttributes = gMetatileAttributes_DesertPrimary,
    .callback     = NULL, // or NULL
};

// ================= Secondary: Space Meteor =================
const struct Tileset gTileset_SpaceMeteor =
{
    .isCompressed        = TRUE,   // tiles.4bpp.lz
    .isSecondary         = TRUE,   // secondary tileset
    .tiles               = gTilesetTiles_SpaceMeteor,
    .palettes            = gTilesetPalettes_SpaceMeteor,
    .metatiles           = gMetatiles_SpaceMeteor,
    .metatileAttributes  = gMetatileAttributes_SpaceMeteor,
    .callback            = NULL,   // set to an anim callback if you add one
};

// ---- SECONDARY: Shady_Forest ----
const struct Tileset gTileset_ShadyForest =
{
    .isCompressed        = TRUE,  // tiles.4bpp.lz
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_ShadyForest,
    .palettes            = gTilesetPalettes_ShadyForest,
    .metatiles           = gMetatiles_ShadyForest,
    .metatileAttributes  = gMetatileAttributes_ShadyForest,
    .callback            = NULL,  // add an anim callback later if you have one
};



// =================== Primary: general_hub ===================
const struct Tileset gTileset_general_hub =
{
    .isCompressed        = TRUE,
    .isSecondary         = FALSE,
    .tiles               = gTilesetTiles_general_hub,
    .palettes            = gTilesetPalettes_general_hub,
    .metatiles           = gMetatiles_general_hub,
    .metatileAttributes  = gMetatileAttributes_general_hub,
    .callback            = NULL,   // or InitTilesetAnim_General if you want that behavior
};

// ===== Secondary: Desert_Pyramid_Exterior_Secondary =====
const struct Tileset gTileset_Desert_Pyramid_Exterior_Secondary =
{
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_Desert_Pyramid_Exterior_Secondary,
    .palettes            = gTilesetPalettes_Desert_Pyramid_Exterior_Secondary,
    .metatiles           = gMetatiles_Desert_Pyramid_Exterior_Secondary,
    .metatileAttributes  = gMetatileAttributes_Desert_Pyramid_Exterior_Secondary,
    .callback            = NULL,
};

// ===== Secondary: Desert_Village_Secondary =====
const struct Tileset gTileset_Desert_Village_Secondary =
{
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_Desert_Village_Secondary,
    .palettes            = gTilesetPalettes_Desert_Village_Secondary,
    .metatiles           = gMetatiles_Desert_Village_Secondary,
    .metatileAttributes  = gMetatileAttributes_Desert_Village_Secondary,
    .callback            = NULL,
};


// ---- FR Port Primary: General ----
const struct Tileset gTileset_Primary_frp_general = {
    .isCompressed = TRUE,
    .isSecondary  = FALSE,
    .tiles        = gTilesetTiles_frp_general,
    .palettes     = gTilesetPalettes_frp_general,
    .metatiles    = gMetatiles_frp_general,
    .metatileAttributes = gMetatileAttributes_frp_general,
    .callback     = InitTilesetAnim_General, // or NULL if no animation
};

// ---- FR Port Primary: Building ----
const struct Tileset gTileset_Primary_frp_building = {
    .isCompressed = TRUE,
    .isSecondary  = FALSE,
    .tiles        = gTilesetTiles_frp_building,
    .palettes     = gTilesetPalettes_frp_building,
    .metatiles    = gMetatiles_frp_building,
    .metatileAttributes = gMetatileAttributes_frp_building,
    .callback     = NULL, // building usually has no animations
};


// ---- FR Port Secondary: Berry Forest ----
const struct Tileset gTileset_frp_berry_forest = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_berry_forest,
    .palettes            = gTilesetPalettes_frp_berry_forest,
    .metatiles           = gMetatiles_frp_berry_forest,
    .metatileAttributes  = gMetatileAttributes_frp_berry_forest,
    .callback            = NULL,
};

// ---- FR Port Secondary: Bike Shop ----
const struct Tileset gTileset_frp_bike_shop = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_bike_shop,
    .palettes            = gTilesetPalettes_frp_bike_shop,
    .metatiles           = gMetatiles_frp_bike_shop,
    .metatileAttributes  = gMetatileAttributes_frp_bike_shop,
    .callback            = NULL,
};

// ---- FR Port Secondary: Burgled House ----
const struct Tileset gTileset_frp_burgled_house = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_burgled_house,
    .palettes            = gTilesetPalettes_frp_burgled_house,
    .metatiles           = gMetatiles_frp_burgled_house,
    .metatileAttributes  = gMetatileAttributes_frp_burgled_house,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cable Club ----
const struct Tileset gTileset_frp_cable_club = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cable_club,
    .palettes            = gTilesetPalettes_frp_cable_club,
    .metatiles           = gMetatiles_frp_cable_club,
    .metatileAttributes  = gMetatileAttributes_frp_cable_club,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cave ----
const struct Tileset gTileset_frp_cave = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cave,
    .palettes            = gTilesetPalettes_frp_cave,
    .metatiles           = gMetatiles_frp_cave,
    .metatileAttributes  = gMetatileAttributes_frp_cave,
    .callback            = NULL,
};

// ---- FR Port Secondary: Celadon City ----
const struct Tileset gTileset_frp_celadon_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_celadon_city,
    .palettes            = gTilesetPalettes_frp_celadon_city,
    .metatiles           = gMetatiles_frp_celadon_city,
    .metatileAttributes  = gMetatileAttributes_frp_celadon_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Celadon Gym ----
const struct Tileset gTileset_frp_celadon_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_celadon_gym,
    .palettes            = gTilesetPalettes_frp_celadon_gym,
    .metatiles           = gMetatiles_frp_celadon_gym,
    .metatileAttributes  = gMetatileAttributes_frp_celadon_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cerulean Cave ----
const struct Tileset gTileset_frp_cerulean_cave = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cerulean_cave,
    .palettes            = gTilesetPalettes_frp_cerulean_cave,
    .metatiles           = gMetatiles_frp_cerulean_cave,
    .metatileAttributes  = gMetatileAttributes_frp_cerulean_cave,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cerulean City ----
const struct Tileset gTileset_frp_cerulean_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cerulean_city,
    .palettes            = gTilesetPalettes_frp_cerulean_city,
    .metatiles           = gMetatiles_frp_cerulean_city,
    .metatileAttributes  = gMetatileAttributes_frp_cerulean_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cerulean Gym ----
const struct Tileset gTileset_frp_cerulean_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cerulean_gym,
    .palettes            = gTilesetPalettes_frp_cerulean_gym,
    .metatiles           = gMetatiles_frp_cerulean_gym,
    .metatileAttributes  = gMetatileAttributes_frp_cerulean_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cinnabar Gym ----
const struct Tileset gTileset_frp_cinnabar_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cinnabar_gym,
    .palettes            = gTilesetPalettes_frp_cinnabar_gym,
    .metatiles           = gMetatiles_frp_cinnabar_gym,
    .metatileAttributes  = gMetatileAttributes_frp_cinnabar_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: Cinnabar Island ----
const struct Tileset gTileset_frp_cinnabar_island = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_cinnabar_island,
    .palettes            = gTilesetPalettes_frp_cinnabar_island,
    .metatiles           = gMetatiles_frp_cinnabar_island,
    .metatileAttributes  = gMetatileAttributes_frp_cinnabar_island,
    .callback            = NULL,
};

// ---- FR Port Secondary: Condominiums ----
const struct Tileset gTileset_frp_condominiums = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_condominiums,
    .palettes            = gTilesetPalettes_frp_condominiums,
    .metatiles           = gMetatiles_frp_condominiums,
    .metatileAttributes  = gMetatileAttributes_frp_condominiums,
    .callback            = NULL,
};

// ---- FR Port Secondary: Department Store ----
const struct Tileset gTileset_frp_department_store = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_department_store,
    .palettes            = gTilesetPalettes_frp_department_store,
    .metatiles           = gMetatiles_frp_department_store,
    .metatileAttributes  = gMetatileAttributes_frp_department_store,
    .callback            = NULL,
};

// ---- FR Port Secondary: Digletts Cave ----
const struct Tileset gTileset_frp_digletts_cave = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_digletts_cave,
    .palettes            = gTilesetPalettes_frp_digletts_cave,
    .metatiles           = gMetatiles_frp_digletts_cave,
    .metatileAttributes  = gMetatileAttributes_frp_digletts_cave,
    .callback            = NULL,
};

// ---- FR Port Secondary: Fan Club Daycare ----
const struct Tileset gTileset_frp_fan_club_daycare = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_fan_club_daycare,
    .palettes            = gTilesetPalettes_frp_fan_club_daycare,
    .metatiles           = gMetatiles_frp_fan_club_daycare,
    .metatileAttributes  = gMetatileAttributes_frp_fan_club_daycare,
    .callback            = NULL,
};

// ---- FR Port Secondary: Fuchsia City ----
const struct Tileset gTileset_frp_fuchsia_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_fuchsia_city,
    .palettes            = gTilesetPalettes_frp_fuchsia_city,
    .metatiles           = gMetatiles_frp_fuchsia_city,
    .metatileAttributes  = gMetatileAttributes_frp_fuchsia_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Fuchsia Gym ----
const struct Tileset gTileset_frp_fuchsia_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_fuchsia_gym,
    .palettes            = gTilesetPalettes_frp_fuchsia_gym,
    .metatiles           = gMetatiles_frp_fuchsia_gym,
    .metatileAttributes  = gMetatileAttributes_frp_fuchsia_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: Game Corner ----
const struct Tileset gTileset_frp_game_corner = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_game_corner,
    .palettes            = gTilesetPalettes_frp_game_corner,
    .metatiles           = gMetatiles_frp_game_corner,
    .metatileAttributes  = gMetatileAttributes_frp_game_corner,
    .callback            = NULL,
};

// ---- FR Port Secondary: Generic Building 1 ----
const struct Tileset gTileset_frp_generic_building_1 = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_generic_building_1,
    .palettes            = gTilesetPalettes_frp_generic_building_1,
    .metatiles           = gMetatiles_frp_generic_building_1,
    .metatileAttributes  = gMetatileAttributes_frp_generic_building_1,
    .callback            = NULL,
};

// ---- FR Port Secondary: Generic Building 2 ----
const struct Tileset gTileset_frp_generic_building_2 = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_generic_building_2,
    .palettes            = gTilesetPalettes_frp_generic_building_2,
    .metatiles           = gMetatiles_frp_generic_building_2,
    .metatileAttributes  = gMetatileAttributes_frp_generic_building_2,
    .callback            = NULL,
};

// ---- FR Port Secondary: Hall Of Fame ----
const struct Tileset gTileset_frp_hall_of_fame = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_hall_of_fame,
    .palettes            = gTilesetPalettes_frp_hall_of_fame,
    .metatiles           = gMetatiles_frp_hall_of_fame,
    .metatileAttributes  = gMetatileAttributes_frp_hall_of_fame,
    .callback            = NULL,
};

// ---- FR Port Secondary: Hoenn Building ----
const struct Tileset gTileset_frp_hoenn_building = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_hoenn_building,
    .palettes            = gTilesetPalettes_frp_hoenn_building,
    .metatiles           = gMetatiles_frp_hoenn_building,
    .metatileAttributes  = gMetatileAttributes_frp_hoenn_building,
    .callback            = NULL,
};

// ---- FR Port Secondary: Indigo Plateau ----
const struct Tileset gTileset_frp_indigo_plateau = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_indigo_plateau,
    .palettes            = gTilesetPalettes_frp_indigo_plateau,
    .metatiles           = gMetatiles_frp_indigo_plateau,
    .metatileAttributes  = gMetatileAttributes_frp_indigo_plateau,
    .callback            = NULL,
};

// ---- FR Port Secondary: Island Harbor ----
const struct Tileset gTileset_frp_island_harbor = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_island_harbor,
    .palettes            = gTilesetPalettes_frp_island_harbor,
    .metatiles           = gMetatiles_frp_island_harbor,
    .metatileAttributes  = gMetatileAttributes_frp_island_harbor,
    .callback            = NULL,
};

// ---- FR Port Secondary: Lab ----
const struct Tileset gTileset_frp_lab = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_lab,
    .palettes            = gTilesetPalettes_frp_lab,
    .metatiles           = gMetatiles_frp_lab,
    .metatileAttributes  = gMetatileAttributes_frp_lab,
    .callback            = NULL,
};

// ---- FR Port Secondary: Lavender Town ----
const struct Tileset gTileset_frp_lavender_town = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_lavender_town,
    .palettes            = gTilesetPalettes_frp_lavender_town,
    .metatiles           = gMetatiles_frp_lavender_town,
    .metatileAttributes  = gMetatileAttributes_frp_lavender_town,
    .callback            = NULL,
};

// ---- FR Port Secondary: Mart ----
const struct Tileset gTileset_frp_mart = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_mart,
    .palettes            = gTilesetPalettes_frp_mart,
    .metatiles           = gMetatiles_frp_mart,
    .metatileAttributes  = gMetatileAttributes_frp_mart,
    .callback            = NULL,
};

// ---- FR Port Secondary: Mt Ember ----
const struct Tileset gTileset_frp_mt_ember = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_mt_ember,
    .palettes            = gTilesetPalettes_frp_mt_ember,
    .metatiles           = gMetatiles_frp_mt_ember,
    .metatileAttributes  = gMetatileAttributes_frp_mt_ember,
    .callback            = NULL,
};

// ---- FR Port Secondary: Museum ----
const struct Tileset gTileset_frp_museum = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_museum,
    .palettes            = gTilesetPalettes_frp_museum,
    .metatiles           = gMetatiles_frp_museum,
    .metatileAttributes  = gMetatileAttributes_frp_museum,
    .callback            = NULL,
};

// ---- FR Port Secondary: Navel Rock ----
const struct Tileset gTileset_frp_navel_rock = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_navel_rock,
    .palettes            = gTilesetPalettes_frp_navel_rock,
    .metatiles           = gMetatiles_frp_navel_rock,
    .metatileAttributes  = gMetatileAttributes_frp_navel_rock,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pallet Town ----
const struct Tileset gTileset_frp_pallet_town = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pallet_town,
    .palettes            = gTilesetPalettes_frp_pallet_town,
    .metatiles           = gMetatiles_frp_pallet_town,
    .metatileAttributes  = gMetatileAttributes_frp_pallet_town,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pewter City ----
const struct Tileset gTileset_frp_pewter_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pewter_city,
    .palettes            = gTilesetPalettes_frp_pewter_city,
    .metatiles           = gMetatiles_frp_pewter_city,
    .metatileAttributes  = gMetatileAttributes_frp_pewter_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pewter Gym ----
const struct Tileset gTileset_frp_pewter_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pewter_gym,
    .palettes            = gTilesetPalettes_frp_pewter_gym,
    .metatiles           = gMetatiles_frp_pewter_gym,
    .metatileAttributes  = gMetatileAttributes_frp_pewter_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pokemon Center ----
const struct Tileset gTileset_frp_pokemon_center = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pokemon_center,
    .palettes            = gTilesetPalettes_frp_pokemon_center,
    .metatiles           = gMetatiles_frp_pokemon_center,
    .metatileAttributes  = gMetatileAttributes_frp_pokemon_center,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pokemon League ----
const struct Tileset gTileset_frp_pokemon_league = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pokemon_league,
    .palettes            = gTilesetPalettes_frp_pokemon_league,
    .metatiles           = gMetatiles_frp_pokemon_league,
    .metatileAttributes  = gMetatileAttributes_frp_pokemon_league,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pokemon Mansion ----
const struct Tileset gTileset_frp_pokemon_mansion = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pokemon_mansion,
    .palettes            = gTilesetPalettes_frp_pokemon_mansion,
    .metatiles           = gMetatiles_frp_pokemon_mansion,
    .metatileAttributes  = gMetatileAttributes_frp_pokemon_mansion,
    .callback            = NULL,
};

// ---- FR Port Secondary: Pokemon Tower ----
const struct Tileset gTileset_frp_pokemon_tower = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_pokemon_tower,
    .palettes            = gTilesetPalettes_frp_pokemon_tower,
    .metatiles           = gMetatiles_frp_pokemon_tower,
    .metatileAttributes  = gMetatileAttributes_frp_pokemon_tower,
    .callback            = NULL,
};

// ---- FR Port Secondary: Power Plant ----
const struct Tileset gTileset_frp_power_plant = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_power_plant,
    .palettes            = gTilesetPalettes_frp_power_plant,
    .metatiles           = gMetatiles_frp_power_plant,
    .metatileAttributes  = gMetatileAttributes_frp_power_plant,
    .callback            = NULL,
};

// ---- FR Port Secondary: Restaurant Hotel ----
const struct Tileset gTileset_frp_restaurant_hotel = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_restaurant_hotel,
    .palettes            = gTilesetPalettes_frp_restaurant_hotel,
    .metatiles           = gMetatiles_frp_restaurant_hotel,
    .metatileAttributes  = gMetatileAttributes_frp_restaurant_hotel,
    .callback            = NULL,
};

// ---- FR Port Secondary: Rock Tunnel ----
const struct Tileset gTileset_frp_rock_tunnel = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_rock_tunnel,
    .palettes            = gTilesetPalettes_frp_rock_tunnel,
    .metatiles           = gMetatiles_frp_rock_tunnel,
    .metatileAttributes  = gMetatileAttributes_frp_rock_tunnel,
    .callback            = NULL,
};

// ---- FR Port Secondary: Safari Zone Building ----
const struct Tileset gTileset_frp_safari_zone_building = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_safari_zone_building,
    .palettes            = gTilesetPalettes_frp_safari_zone_building,
    .metatiles           = gMetatiles_frp_safari_zone_building,
    .metatileAttributes  = gMetatileAttributes_frp_safari_zone_building,
    .callback            = NULL,
};

// ---- FR Port Secondary: Saffron City ----
const struct Tileset gTileset_frp_saffron_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_saffron_city,
    .palettes            = gTilesetPalettes_frp_saffron_city,
    .metatiles           = gMetatiles_frp_saffron_city,
    .metatileAttributes  = gMetatileAttributes_frp_saffron_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Saffron Gym ----
const struct Tileset gTileset_frp_saffron_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_saffron_gym,
    .palettes            = gTilesetPalettes_frp_saffron_gym,
    .metatiles           = gMetatiles_frp_saffron_gym,
    .metatileAttributes  = gMetatileAttributes_frp_saffron_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: School ----
const struct Tileset gTileset_frp_school = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_school,
    .palettes            = gTilesetPalettes_frp_school,
    .metatiles           = gMetatiles_frp_school,
    .metatileAttributes  = gMetatileAttributes_frp_school,
    .callback            = NULL,
};

// ---- FR Port Secondary: Sea Cottage ----
const struct Tileset gTileset_frp_sea_cottage = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_sea_cottage,
    .palettes            = gTilesetPalettes_frp_sea_cottage,
    .metatiles           = gMetatiles_frp_sea_cottage,
    .metatileAttributes  = gMetatileAttributes_frp_sea_cottage,
    .callback            = NULL,
};

// ---- FR Port Secondary: Seafoam Islands ----
const struct Tileset gTileset_frp_seafoam_islands = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_seafoam_islands,
    .palettes            = gTilesetPalettes_frp_seafoam_islands,
    .metatiles           = gMetatiles_frp_seafoam_islands,
    .metatileAttributes  = gMetatileAttributes_frp_seafoam_islands,
    .callback            = NULL,
};

// ---- FR Port Secondary: Sevii Islands 45 ----
const struct Tileset gTileset_frp_sevii_islands_45 = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_sevii_islands_45,
    .palettes            = gTilesetPalettes_frp_sevii_islands_45,
    .metatiles           = gMetatiles_frp_sevii_islands_45,
    .metatileAttributes  = gMetatileAttributes_frp_sevii_islands_45,
    .callback            = NULL,
};

// ---- FR Port Secondary: Sevii Islands 67 ----
const struct Tileset gTileset_frp_sevii_islands_67 = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_sevii_islands_67,
    .palettes            = gTilesetPalettes_frp_sevii_islands_67,
    .metatiles           = gMetatiles_frp_sevii_islands_67,
    .metatileAttributes  = gMetatileAttributes_frp_sevii_islands_67,
    .callback            = NULL,
};

// ---- FR Port Secondary: Sevii Islands 123 ----
const struct Tileset gTileset_frp_sevii_islands_123 = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_sevii_islands_123,
    .palettes            = gTilesetPalettes_frp_sevii_islands_123,
    .metatiles           = gMetatiles_frp_sevii_islands_123,
    .metatileAttributes  = gMetatileAttributes_frp_sevii_islands_123,
    .callback            = NULL,
};

// ---- FR Port Secondary: Silph Co ----
const struct Tileset gTileset_frp_silph_co = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_silph_co,
    .palettes            = gTilesetPalettes_frp_silph_co,
    .metatiles           = gMetatiles_frp_silph_co,
    .metatileAttributes  = gMetatileAttributes_frp_silph_co,
    .callback            = NULL,
};

// ---- FR Port Secondary: Ss Anne ----
const struct Tileset gTileset_frp_ss_anne = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_ss_anne,
    .palettes            = gTilesetPalettes_frp_ss_anne,
    .metatiles           = gMetatiles_frp_ss_anne,
    .metatileAttributes  = gMetatileAttributes_frp_ss_anne,
    .callback            = NULL,
};

// ---- FR Port Secondary: Tanoby Ruins ----
const struct Tileset gTileset_frp_tanoby_ruins = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_tanoby_ruins,
    .palettes            = gTilesetPalettes_frp_tanoby_ruins,
    .metatiles           = gMetatiles_frp_tanoby_ruins,
    .metatileAttributes  = gMetatileAttributes_frp_tanoby_ruins,
    .callback            = NULL,
};

// ---- FR Port Secondary: Trainer Tower ----
const struct Tileset gTileset_frp_trainer_tower = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_trainer_tower,
    .palettes            = gTilesetPalettes_frp_trainer_tower,
    .metatiles           = gMetatiles_frp_trainer_tower,
    .metatileAttributes  = gMetatileAttributes_frp_trainer_tower,
    .callback            = NULL,
};

// ---- FR Port Secondary: Underground Path ----
const struct Tileset gTileset_frp_underground_path = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_underground_path,
    .palettes            = gTilesetPalettes_frp_underground_path,
    .metatiles           = gMetatiles_frp_underground_path,
    .metatileAttributes  = gMetatileAttributes_frp_underground_path,
    .callback            = NULL,
};

// ---- FR Port Secondary: Vermilion City ----
const struct Tileset gTileset_frp_vermilion_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_vermilion_city,
    .palettes            = gTilesetPalettes_frp_vermilion_city,
    .metatiles           = gMetatiles_frp_vermilion_city,
    .metatileAttributes  = gMetatileAttributes_frp_vermilion_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Vermilion Gym ----
const struct Tileset gTileset_frp_vermilion_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_vermilion_gym,
    .palettes            = gTilesetPalettes_frp_vermilion_gym,
    .metatiles           = gMetatiles_frp_vermilion_gym,
    .metatileAttributes  = gMetatileAttributes_frp_vermilion_gym,
    .callback            = NULL,
};

// ---- FR Port Secondary: Viridian City ----
const struct Tileset gTileset_frp_viridian_city = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_viridian_city,
    .palettes            = gTilesetPalettes_frp_viridian_city,
    .metatiles           = gMetatiles_frp_viridian_city,
    .metatileAttributes  = gMetatileAttributes_frp_viridian_city,
    .callback            = NULL,
};

// ---- FR Port Secondary: Viridian Forest ----
const struct Tileset gTileset_frp_viridian_forest = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_viridian_forest,
    .palettes            = gTilesetPalettes_frp_viridian_forest,
    .metatiles           = gMetatiles_frp_viridian_forest,
    .metatileAttributes  = gMetatileAttributes_frp_viridian_forest,
    .callback            = NULL,
};

// ---- FR Port Secondary: Viridian Gym ----
const struct Tileset gTileset_frp_viridian_gym = {
    .isCompressed        = TRUE,
    .isSecondary         = TRUE,
    .tiles               = gTilesetTiles_frp_viridian_gym,
    .palettes            = gTilesetPalettes_frp_viridian_gym,
    .metatiles           = gMetatiles_frp_viridian_gym,
    .metatileAttributes  = gMetatileAttributes_frp_viridian_gym,
    .callback            = NULL,
};


























const struct Tileset gTileset_Petalburg =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Petalburg,
    .palettes = gTilesetPalettes_Petalburg,
    .metatiles = gMetatiles_Petalburg,
    .metatileAttributes = gMetatileAttributes_Petalburg,
    .callback = InitTilesetAnim_Petalburg,
};

const struct Tileset gTileset_Rustboro =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Rustboro,
    .palettes = gTilesetPalettes_Rustboro,
    .metatiles = gMetatiles_Rustboro,
    .metatileAttributes = gMetatileAttributes_Rustboro,
    .callback = InitTilesetAnim_Rustboro,
};

const struct Tileset gTileset_Dewford =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Dewford,
    .palettes = gTilesetPalettes_Dewford,
    .metatiles = gMetatiles_Dewford,
    .metatileAttributes = gMetatileAttributes_Dewford,
    .callback = InitTilesetAnim_Dewford,
};

const struct Tileset gTileset_Slateport =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Slateport,
    .palettes = gTilesetPalettes_Slateport,
    .metatiles = gMetatiles_Slateport,
    .metatileAttributes = gMetatileAttributes_Slateport,
    .callback = InitTilesetAnim_Slateport,
};

const struct Tileset gTileset_Mauville =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Mauville,
    .palettes = gTilesetPalettes_Mauville,
    .metatiles = gMetatiles_Mauville,
    .metatileAttributes = gMetatileAttributes_Mauville,
    .callback = InitTilesetAnim_Mauville,
};

const struct Tileset gTileset_Lavaridge =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lavaridge,
    .palettes = gTilesetPalettes_Lavaridge,
    .metatiles = gMetatiles_Lavaridge,
    .metatileAttributes = gMetatileAttributes_Lavaridge,
    .callback = InitTilesetAnim_Lavaridge,
};

const struct Tileset gTileset_Fallarbor =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Fallarbor,
    .palettes = gTilesetPalettes_Fallarbor,
    .metatiles = gMetatiles_Fallarbor,
    .metatileAttributes = gMetatileAttributes_Fallarbor,
    .callback = InitTilesetAnim_Fallarbor,
};

const struct Tileset gTileset_Fortree =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Fortree,
    .palettes = gTilesetPalettes_Fortree,
    .metatiles = gMetatiles_Fortree,
    .metatileAttributes = gMetatileAttributes_Fortree,
    .callback = InitTilesetAnim_Fortree,
};

const struct Tileset gTileset_Lilycove =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lilycove,
    .palettes = gTilesetPalettes_Lilycove,
    .metatiles = gMetatiles_Lilycove,
    .metatileAttributes = gMetatileAttributes_Lilycove,
    .callback = InitTilesetAnim_Lilycove,
};

const struct Tileset gTileset_Mossdeep =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Mossdeep,
    .palettes = gTilesetPalettes_Mossdeep,
    .metatiles = gMetatiles_Mossdeep,
    .metatileAttributes = gMetatileAttributes_Mossdeep,
    .callback = InitTilesetAnim_Mossdeep,
};

const struct Tileset gTileset_EverGrande =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_EverGrande,
    .palettes = gTilesetPalettes_EverGrande,
    .metatiles = gMetatiles_EverGrande,
    .metatileAttributes = gMetatileAttributes_EverGrande,
    .callback = InitTilesetAnim_EverGrande,
};

const struct Tileset gTileset_Pacifidlog =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Pacifidlog,
    .palettes = gTilesetPalettes_Pacifidlog,
    .metatiles = gMetatiles_Pacifidlog,
    .metatileAttributes = gMetatileAttributes_Pacifidlog,
    .callback = InitTilesetAnim_Pacifidlog,
};

const struct Tileset gTileset_Sootopolis =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Sootopolis,
    .palettes = gTilesetPalettes_Sootopolis,
    .metatiles = gMetatiles_Sootopolis,
    .metatileAttributes = gMetatileAttributes_Sootopolis,
    .callback = InitTilesetAnim_Sootopolis,
};

const struct Tileset gTileset_BattleFrontierOutsideWest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontierOutsideWest,
    .palettes = gTilesetPalettes_BattleFrontierOutsideWest,
    .metatiles = gMetatiles_BattleFrontierOutsideWest,
    .metatileAttributes = gMetatileAttributes_BattleFrontierOutsideWest,
    .callback = InitTilesetAnim_BattleFrontierOutsideWest,
};

const struct Tileset gTileset_BattleFrontierOutsideEast =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontierOutsideEast,
    .palettes = gTilesetPalettes_BattleFrontierOutsideEast,
    .metatiles = gMetatiles_BattleFrontierOutsideEast,
    .metatileAttributes = gMetatileAttributes_BattleFrontierOutsideEast,
    .callback = InitTilesetAnim_BattleFrontierOutsideEast,
};

const struct Tileset gTileset_Building =
{
    .isCompressed = TRUE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_InsideBuilding,
    .palettes = gTilesetPalettes_InsideBuilding,
    .metatiles = gMetatiles_InsideBuilding,
    .metatileAttributes = gMetatileAttributes_InsideBuilding,
    .callback = InitTilesetAnim_Building,
};

const struct Tileset gTileset_Shop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Shop,
    .palettes = gTilesetPalettes_Shop,
    .metatiles = gMetatiles_Shop,
    .metatileAttributes = gMetatileAttributes_Shop,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonCenter =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonCenter,
    .palettes = gTilesetPalettes_PokemonCenter,
    .metatiles = gMetatiles_PokemonCenter,
    .metatileAttributes = gMetatileAttributes_PokemonCenter,
    .callback = NULL,
};

const struct Tileset gTileset_Cave =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Cave,
    .palettes = gTilesetPalettes_Cave,
    .metatiles = gMetatiles_Cave,
    .metatileAttributes = gMetatileAttributes_Cave,
    .callback = InitTilesetAnim_Cave,
};

const struct Tileset gTileset_PokemonSchool =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonSchool,
    .palettes = gTilesetPalettes_PokemonSchool,
    .metatiles = gMetatiles_PokemonSchool,
    .metatileAttributes = gMetatileAttributes_PokemonSchool,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonFanClub =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonFanClub,
    .palettes = gTilesetPalettes_PokemonFanClub,
    .metatiles = gMetatiles_PokemonFanClub,
    .metatileAttributes = gMetatileAttributes_PokemonFanClub,
    .callback = NULL,
};

const struct Tileset gTileset_Unused1 =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Unused1,
    .palettes = gTilesetPalettes_Unused1,
    .metatiles = gMetatiles_Unused1,
    .metatileAttributes = gMetatileAttributes_Unused1,
    .callback = NULL,
};

const struct Tileset gTileset_MeteorFalls =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MeteorFalls,
    .palettes = gTilesetPalettes_MeteorFalls,
    .metatiles = gMetatiles_MeteorFalls,
    .metatileAttributes = gMetatileAttributes_MeteorFalls,
    .callback = NULL,
};

const struct Tileset gTileset_OceanicMuseum =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_OceanicMuseum,
    .palettes = gTilesetPalettes_OceanicMuseum,
    .metatiles = gMetatiles_OceanicMuseum,
    .metatileAttributes = gMetatileAttributes_OceanicMuseum,
    .callback = NULL,
};

const struct Tileset gTileset_CableClub =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_CableClub,
    .palettes = gTilesetPalettes_CableClub,
    .metatiles = gMetatiles_CableClub,
    .metatileAttributes = gMetatileAttributes_CableClub,
    .callback = NULL,
};

const struct Tileset gTileset_SeashoreHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SeashoreHouse,
    .palettes = gTilesetPalettes_SeashoreHouse,
    .metatiles = gMetatiles_SeashoreHouse,
    .metatileAttributes = gMetatileAttributes_SeashoreHouse,
    .callback = NULL,
};

const struct Tileset gTileset_PrettyPetalFlowerShop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PrettyPetalFlowerShop,
    .palettes = gTilesetPalettes_PrettyPetalFlowerShop,
    .metatiles = gMetatiles_PrettyPetalFlowerShop,
    .metatileAttributes = gMetatileAttributes_PrettyPetalFlowerShop,
    .callback = NULL,
};

const struct Tileset gTileset_PokemonDayCare =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PokemonDayCare,
    .palettes = gTilesetPalettes_PokemonDayCare,
    .metatiles = gMetatiles_PokemonDayCare,
    .metatileAttributes = gMetatileAttributes_PokemonDayCare,
    .callback = NULL,
};

const struct Tileset gTileset_Facility =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Facility,
    .palettes = gTilesetPalettes_Facility,
    .metatiles = gMetatiles_Facility,
    .metatileAttributes = gMetatileAttributes_Facility,
    .callback = NULL,
};

const struct Tileset gTileset_BikeShop =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BikeShop,
    .palettes = gTilesetPalettes_BikeShop,
    .metatiles = gMetatiles_BikeShop,
    .metatileAttributes = gMetatileAttributes_BikeShop,
    .callback = InitTilesetAnim_BikeShop,
};

const struct Tileset gTileset_RusturfTunnel =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_RusturfTunnel,
    .palettes = gTilesetPalettes_RusturfTunnel,
    .metatiles = gMetatiles_RusturfTunnel,
    .metatileAttributes = gMetatileAttributes_RusturfTunnel,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseBrownCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseBrownCave,
    .palettes = gTilesetPalettes_SecretBaseBrownCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseTree =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseTree,
    .palettes = gTilesetPalettes_SecretBaseTree,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseShrub =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseShrub,
    .palettes = gTilesetPalettes_SecretBaseShrub,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseBlueCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseBlueCave,
    .palettes = gTilesetPalettes_SecretBaseBlueCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseYellowCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseYellowCave,
    .palettes = gTilesetPalettes_SecretBaseYellowCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBaseRedCave =
{
    .isCompressed = FALSE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SecretBaseRedCave,
    .palettes = gTilesetPalettes_SecretBaseRedCave,
    .metatiles = gMetatiles_SecretBaseSecondary,
    .metatileAttributes = gMetatileAttributes_SecretBaseSecondary,
    .callback = NULL,
};

const struct Tileset gTileset_InsideOfTruck =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_InsideOfTruck,
    .palettes = gTilesetPalettes_InsideOfTruck,
    .metatiles = gMetatiles_InsideOfTruck,
    .metatileAttributes = gMetatileAttributes_InsideOfTruck,
    .callback = NULL,
};

const struct Tileset gTileset_Unused2 =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Unused2,
    .palettes = gTilesetPalettes_Unused2,
    .metatiles = gMetatiles_Unused2,
    .metatileAttributes = gMetatileAttributes_Unused2,
    .callback = NULL,
};

const struct Tileset gTileset_Contest =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Contest,
    .palettes = gTilesetPalettes_Contest,
    .metatiles = gMetatiles_Contest,
    .metatileAttributes = gMetatileAttributes_Contest,
    .callback = NULL,
};

const struct Tileset gTileset_LilycoveMuseum =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_LilycoveMuseum,
    .palettes = gTilesetPalettes_LilycoveMuseum,
    .metatiles = gMetatiles_LilycoveMuseum,
    .metatileAttributes = gMetatileAttributes_LilycoveMuseum,
    .callback = NULL,
};

const struct Tileset gTileset_BrendansMaysHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BrendansMaysHouse,
    .palettes = gTilesetPalettes_BrendansMaysHouse,
    .metatiles = gMetatiles_BrendansMaysHouse,
    .metatileAttributes = gMetatileAttributes_BrendansMaysHouse,
    .callback = NULL,
};

const struct Tileset gTileset_Lab =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Lab,
    .palettes = gTilesetPalettes_Lab,
    .metatiles = gMetatiles_Lab,
    .metatileAttributes = gMetatileAttributes_Lab,
    .callback = NULL,
};

const struct Tileset gTileset_Underwater =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_Underwater,
    .palettes = gTilesetPalettes_Underwater,
    .metatiles = gMetatiles_Underwater,
    .metatileAttributes = gMetatileAttributes_Underwater,
    .callback = InitTilesetAnim_Underwater,
};

const struct Tileset gTileset_PetalburgGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_PetalburgGym,
    .palettes = gTilesetPalettes_PetalburgGym,
    .metatiles = gMetatiles_PetalburgGym,
    .metatileAttributes = gMetatileAttributes_PetalburgGym,
    .callback = NULL,
};

const struct Tileset gTileset_SootopolisGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_SootopolisGym,
    .palettes = gTilesetPalettes_SootopolisGym,
    .metatiles = gMetatiles_SootopolisGym,
    .metatileAttributes = gMetatileAttributes_SootopolisGym,
    .callback = InitTilesetAnim_SootopolisGym,
};

const struct Tileset gTileset_GenericBuilding =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_GenericBuilding,
    .palettes = gTilesetPalettes_GenericBuilding,
    .metatiles = gMetatiles_GenericBuilding,
    .metatileAttributes = gMetatileAttributes_GenericBuilding,
    .callback = NULL,
};

const struct Tileset gTileset_MauvilleGameCorner =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MauvilleGameCorner,
    .palettes = gTilesetPalettes_MauvilleGameCorner,
    .metatiles = gMetatiles_MauvilleGameCorner,
    .metatileAttributes = gMetatileAttributes_MauvilleGameCorner,
    .callback = NULL,
};

const struct Tileset gTileset_RustboroGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_RustboroGym,
    .palettes = gTilesetPalettes_RustboroGym,
    .metatiles = gMetatiles_RustboroGym,
    .metatileAttributes = gMetatileAttributes_RustboroGym,
    .callback = NULL,
};

const struct Tileset gTileset_DewfordGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_DewfordGym,
    .palettes = gTilesetPalettes_DewfordGym,
    .metatiles = gMetatiles_DewfordGym,
    .metatileAttributes = gMetatileAttributes_DewfordGym,
    .callback = NULL,
};

const struct Tileset gTileset_MauvilleGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MauvilleGym,
    .palettes = gTilesetPalettes_MauvilleGym,
    .metatiles = gMetatiles_MauvilleGym,
    .metatileAttributes = gMetatileAttributes_MauvilleGym,
    .callback = InitTilesetAnim_MauvilleGym,
};

const struct Tileset gTileset_LavaridgeGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_LavaridgeGym,
    .palettes = gTilesetPalettes_LavaridgeGym,
    .metatiles = gMetatiles_LavaridgeGym,
    .metatileAttributes = gMetatileAttributes_LavaridgeGym,
    .callback = NULL,
};

const struct Tileset gTileset_TrickHousePuzzle =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_TrickHousePuzzle,
    .palettes = gTilesetPalettes_TrickHousePuzzle,
    .metatiles = gMetatiles_TrickHousePuzzle,
    .metatileAttributes = gMetatileAttributes_TrickHousePuzzle,
    .callback = NULL,
};

const struct Tileset gTileset_FortreeGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_FortreeGym,
    .palettes = gTilesetPalettes_FortreeGym,
    .metatiles = gMetatiles_FortreeGym,
    .metatileAttributes = gMetatileAttributes_FortreeGym,
    .callback = NULL,
};

const struct Tileset gTileset_MossdeepGym =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MossdeepGym,
    .palettes = gTilesetPalettes_MossdeepGym,
    .metatiles = gMetatiles_MossdeepGym,
    .metatileAttributes = gMetatileAttributes_MossdeepGym,
    .callback = NULL,
};

const struct Tileset gTileset_InsideShip =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_InsideShip,
    .palettes = gTilesetPalettes_InsideShip,
    .metatiles = gMetatiles_InsideShip,
    .metatileAttributes = gMetatileAttributes_InsideShip,
    .callback = NULL,
};

const struct Tileset gTileset_SecretBase =
{
    .isCompressed = FALSE,
    .isSecondary = FALSE,
    .tiles = gTilesetTiles_SecretBase,
    .palettes = gTilesetPalettes_SecretBase,
    .metatiles = gMetatiles_SecretBasePrimary,
    .metatileAttributes = gMetatileAttributes_SecretBasePrimary,
    .callback = NULL,
};

const struct Tileset *const gTilesetPointer_SecretBase = &gTileset_SecretBase;
const struct Tileset *const gTilesetPointer_SecretBaseRedCave = &gTileset_SecretBaseRedCave;

const struct Tileset gTileset_EliteFour =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_EliteFour,
    .palettes = gTilesetPalettes_EliteFour,
    .metatiles = gMetatiles_EliteFour,
    .metatileAttributes = gMetatileAttributes_EliteFour,
    .callback = InitTilesetAnim_EliteFour,
};

const struct Tileset gTileset_BattleFrontier =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontier,
    .palettes = gTilesetPalettes_BattleFrontier,
    .metatiles = gMetatiles_BattleFrontier,
    .metatileAttributes = gMetatileAttributes_BattleFrontier,
    .callback = NULL,
};

const struct Tileset gTileset_BattlePalace =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattlePalace,
    .palettes = gTilesetPalettes_BattlePalace,
    .metatiles = gMetatiles_BattlePalace,
    .metatileAttributes = gMetatileAttributes_BattlePalace,
    .callback = NULL,
};

const struct Tileset gTileset_BattleDome =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleDome,
    .palettes = gTilesetPalettes_BattleDome,
    .metatiles = gMetatiles_BattleDome,
    .metatileAttributes = gMetatileAttributes_BattleDome,
    .callback = InitTilesetAnim_BattleDome,
};

const struct Tileset gTileset_BattleFactory =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFactory,
    .palettes = gTilesetPalettes_BattleFactory,
    .metatiles = gMetatiles_BattleFactory,
    .metatileAttributes = gMetatileAttributes_BattleFactory,
    .callback = NULL,
};

const struct Tileset gTileset_BattlePike =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattlePike,
    .palettes = gTilesetPalettes_BattlePike,
    .metatiles = gMetatiles_BattlePike,
    .metatileAttributes = gMetatileAttributes_BattlePike,
    .callback = NULL,
};

const struct Tileset gTileset_BattleArena =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleArena,
    .palettes = gTilesetPalettes_BattleArena,
    .metatiles = gMetatiles_BattleArena,
    .metatileAttributes = gMetatileAttributes_BattleArena,
    .callback = NULL,
};

const struct Tileset gTileset_BattlePyramid =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattlePyramid,
    .palettes = gTilesetPalettes_BattlePyramid,
    .metatiles = gMetatiles_BattlePyramid,
    .metatileAttributes = gMetatileAttributes_BattlePyramid,
    .callback = InitTilesetAnim_BattlePyramid,
};

const struct Tileset gTileset_MirageTower =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MirageTower,
    .palettes = gTilesetPalettes_MirageTower,
    .metatiles = gMetatiles_MirageTower,
    .metatileAttributes = gMetatileAttributes_MirageTower,
    .callback = NULL,
};

const struct Tileset gTileset_MossdeepGameCorner =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MossdeepGameCorner,
    .palettes = gTilesetPalettes_MossdeepGameCorner,
    .metatiles = gMetatiles_MossdeepGameCorner,
    .metatileAttributes = gMetatileAttributes_MossdeepGameCorner,
    .callback = NULL,
};

const struct Tileset gTileset_IslandHarbor =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_IslandHarbor,
    .palettes = gTilesetPalettes_IslandHarbor,
    .metatiles = gMetatiles_IslandHarbor,
    .metatileAttributes = gMetatileAttributes_IslandHarbor,
    .callback = NULL,
};

const struct Tileset gTileset_TrainerHill =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_TrainerHill,
    .palettes = gTilesetPalettes_TrainerHill,
    .metatiles = gMetatiles_TrainerHill,
    .metatileAttributes = gMetatileAttributes_TrainerHill,
    .callback = NULL,
};

const struct Tileset gTileset_NavelRock =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_NavelRock,
    .palettes = gTilesetPalettes_NavelRock,
    .metatiles = gMetatiles_NavelRock,
    .metatileAttributes = gMetatileAttributes_NavelRock,
    .callback = NULL,
};

const struct Tileset gTileset_BattleFrontierRankingHall =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleFrontierRankingHall,
    .palettes = gTilesetPalettes_BattleFrontierRankingHall,
    .metatiles = gMetatiles_BattleFrontierRankingHall,
    .metatileAttributes = gMetatileAttributes_BattleFrontierRankingHall,
    .callback = NULL,
};

const struct Tileset gTileset_BattleTent =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_BattleTent,
    .palettes = gTilesetPalettes_BattleTent,
    .metatiles = gMetatiles_BattleTent,
    .metatileAttributes = gMetatileAttributes_BattleTent,
    .callback = NULL,
};

const struct Tileset gTileset_MysteryEventsHouse =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_MysteryEventsHouse,
    .palettes = gTilesetPalettes_MysteryEventsHouse,
    .metatiles = gMetatiles_MysteryEventsHouse,
    .metatileAttributes = gMetatileAttributes_MysteryEventsHouse,
    .callback = NULL,
};

const struct Tileset gTileset_UnionRoom =
{
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .tiles = gTilesetTiles_UnionRoom,
    .palettes = gTilesetPalettes_UnionRoom,
    .metatiles = gMetatiles_UnionRoom,
    .metatileAttributes = gMetatileAttributes_UnionRoom,
    .callback = NULL,
};


// Begin my additions -----------------------------------------------------------------------------------------------------------------------



const struct Tileset gTileset_leob_sootopolis =
{
    .tiles = gTilesetTiles_leob_sootopolis,
    .palettes = gTilesetPalettes_leob_sootopolis,
    .metatiles = gMetatiles_leob_sootopolis,
    .metatileAttributes = gMetatileAttributes_leob_sootopolis,
    .callback = NULL,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
};

const struct Tileset gTileset_leob_mauville = {
    .tiles = gTilesetTiles_leob_mauville,
    .palettes = gTilesetPalettes_leob_mauville,
    .metatiles = gMetatiles_leob_mauville,
    .metatileAttributes = gMetatileAttributes_leob_mauville,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_mossdeep = {
    .tiles = gTilesetTiles_leob_mossdeep,
    .palettes = gTilesetPalettes_leob_mossdeep,
    .metatiles = gMetatiles_leob_mossdeep,
    .metatileAttributes = gMetatileAttributes_leob_mossdeep,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};



const struct Tileset gTileset_leob_petalburg = {
    .tiles = gTilesetTiles_leob_petalburg,
    .palettes = gTilesetPalettes_leob_petalburg,
    .metatiles = gMetatiles_leob_petalburg,
    .metatileAttributes = gMetatileAttributes_leob_petalburg,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};


const struct Tileset gTileset_leob_rustboro = {
    .tiles = gTilesetTiles_leob_rustboro,
    .palettes = gTilesetPalettes_leob_rustboro,
    .metatiles = gMetatiles_leob_rustboro,
    .metatileAttributes = gMetatileAttributes_leob_rustboro,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_slateport = {
    .tiles = gTilesetTiles_leob_slateport,
    .palettes = gTilesetPalettes_leob_slateport,
    .metatiles = gMetatiles_leob_slateport,
    .metatileAttributes = gMetatileAttributes_leob_slateport,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_fallarbor = {
    .tiles = gTilesetTiles_leob_fallarbor,
    .palettes = gTilesetPalettes_leob_fallarbor,
    .metatiles = gMetatiles_leob_fallarbor,
    .metatileAttributes = gMetatileAttributes_leob_fallarbor,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_fortree = {
    .tiles = gTilesetTiles_leob_fortree,
    .palettes = gTilesetPalettes_leob_fortree,
    .metatiles = gMetatiles_leob_fortree,
    .metatileAttributes = gMetatileAttributes_leob_fortree,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_lavaridge = {
    .tiles = gTilesetTiles_leob_lavaridge,
    .palettes = gTilesetPalettes_leob_lavaridge,
    .metatiles = gMetatiles_leob_lavaridge,
    .metatileAttributes = gMetatileAttributes_leob_lavaridge,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_lilycove = {
    .tiles = gTilesetTiles_leob_lilycove,
    .palettes = gTilesetPalettes_leob_lilycove,
    .metatiles = gMetatiles_leob_lilycove,
    .metatileAttributes = gMetatileAttributes_leob_lilycove,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_battle_frontier_outside_east = {
    .tiles = gTilesetTiles_leob_battle_frontier_outside_east,
    .palettes = gTilesetPalettes_leob_battle_frontier_outside_east,
    .metatiles = gMetatiles_leob_battle_frontier_outside_east,
    .metatileAttributes = gMetatileAttributes_leob_battle_frontier_outside_east,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_battle_frontier_outside_west = {
    .tiles = gTilesetTiles_leob_battle_frontier_outside_west,
    .palettes = gTilesetPalettes_leob_battle_frontier_outside_west,
    .metatiles = gMetatiles_leob_battle_frontier_outside_west,
    .metatileAttributes = gMetatileAttributes_leob_battle_frontier_outside_west,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_dewford = {
    .tiles = gTilesetTiles_leob_dewford,
    .palettes = gTilesetPalettes_leob_dewford,
    .metatiles = gMetatiles_leob_dewford,
    .metatileAttributes = gMetatileAttributes_leob_dewford,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};

const struct Tileset gTileset_leob_ever_grande = {
    .tiles = gTilesetTiles_leob_ever_grande,
    .palettes = gTilesetPalettes_leob_ever_grande,
    .metatiles = gMetatiles_leob_ever_grande,
    .metatileAttributes = gMetatileAttributes_leob_ever_grande,
    .isCompressed = TRUE,
    .isSecondary = TRUE,
    .callback = NULL,
};




// const struct Tileset gTileset_greenhouse =
// {
//     .isCompressed = TRUE,
//     .isSecondary = TRUE,
//     .tiles = gTilesetTiles_greenhouse,
//     .palettes = gTilesetPalettes_greenhouse,
//     .metatiles = gMetatiles_greenhouse,
//     .metatileAttributes = gMetatileAttributes_greenhouse,
//     .callback = NULL,
// };
