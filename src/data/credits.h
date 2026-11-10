// Skaldmere credits. Same shape as vanilla: PAGE_COUNT pages of ENTRIES_PER_PAGE
// lines, the bike/Pokémon scenes changing every PAGE_COUNT / 9 pages, so keep
// PAGE_COUNT a multiple of 9.
enum
{
    PAGE_TITLE,
    PAGE_STORY,
    PAGE_CORPS,
    PAGE_MEREHOLT,
    PAGE_LEADERS_1,
    PAGE_LEADERS_2,
    PAGE_SALTWICK,
    PAGE_ROUTE1,
    PAGE_FERNWICK,
    PAGE_REEDMERE,
    PAGE_CORRIDOR,
    PAGE_LEIRVIK,
    PAGE_ELVSUND,
    PAGE_HAUKFELL,
    PAGE_DELIBIRD,
    PAGE_COAST,
    PAGE_STATION,
    PAGE_CAVERN,
    PAGE_ENGINE,
    PAGE_DECOMP,
    PAGE_TILES_2,
    PAGE_TOOLS,
    PAGE_ORIGINAL,
    PAGE_MUSIC,
    PAGE_ART,
    PAGE_THANKS,
    PAGE_LEGAL,
    PAGE_COUNT
};

#define ENTRIES_PER_PAGE 5

static const u8 sCreditsText_EmptyString[] = _("");
static const u8 sCreditsText_GameTitle[] = _("POKéMON ANTHROPOCENE");   // as the title screen spells it
static const u8 sCreditsText_ASkaldmereStory[] = _("a SKALDMERE story");
static const u8 sCreditsText_StoryDesignWriting[] = _("Story, Design & Writing");
static const u8 sCreditsText_Emberblue[] = _("EMBERBLUE");
static const u8 sCreditsText_MapsScriptsTrainers[] = _("Maps, Scripts & Trainers");
static const u8 sCreditsText_TheCorps[] = _("The Corps");
static const u8 sCreditsText_Wren[] = _("WREN");
static const u8 sCreditsText_Hale[] = _("HALE");
static const u8 sCreditsText_DrHeron[] = _("DR. HERON");
static const u8 sCreditsText_Perrin[] = _("PERRIN");
static const u8 sCreditsText_Mereholt[] = _("Mereholt");
static const u8 sCreditsText_HollisAune[] = _("HOLLIS AUNE");
static const u8 sCreditsText_Dorsey[] = _("DORSEY");
static const u8 sCreditsText_CordeliaBrooke[] = _("CORDELIA BROOKE");
static const u8 sCreditsText_DistrictLeaders[] = _("District Leaders");
static const u8 sCreditsText_Tarn[] = _("TARN");
static const u8 sCreditsText_Mirren[] = _("MIRREN");
static const u8 sCreditsText_Breen[] = _("BREEN");
static const u8 sCreditsText_Sluice[] = _("SLUICE");
static const u8 sCreditsText_Vale[] = _("VALE");
static const u8 sCreditsText_Harland[] = _("HARLAND");
static const u8 sCreditsText_Vane[] = _("VANE");
static const u8 sCreditsText_Ilex[] = _("ILEX");
static const u8 sCreditsText_Saltwick[] = _("Saltwick");
static const u8 sCreditsText_Anni[] = _("ANNI");
static const u8 sCreditsText_Sigrun[] = _("SIGRUN");
static const u8 sCreditsText_Corwen[] = _("CORWEN");
static const u8 sCreditsText_Bram[] = _("BRAM");
static const u8 sCreditsText_Route1AndMistwood[] = _("Route 1 and Mistwood");
static const u8 sCreditsText_Bo[] = _("BO");
static const u8 sCreditsText_Ida[] = _("IDA");
static const u8 sCreditsText_Sanna[] = _("SANNA");
static const u8 sCreditsText_Skeld[] = _("SKELD");
static const u8 sCreditsText_Fernwick[] = _("Fernwick");
static const u8 sCreditsText_Grettir[] = _("GRETTIR");
static const u8 sCreditsText_Ward[] = _("WARD");
static const u8 sCreditsText_Solvi[] = _("SOLVI");
static const u8 sCreditsText_Egil[] = _("EGIL");
static const u8 sCreditsText_Reedmere[] = _("Reedmere");
static const u8 sCreditsText_Gunnar[] = _("GUNNAR");
static const u8 sCreditsText_Maren[] = _("MAREN");
static const u8 sCreditsText_Voss[] = _("VOSS");
static const u8 sCreditsText_Mora[] = _("MORA");
static const u8 sCreditsText_TheCorridor[] = _("The Corridor");
static const u8 sCreditsText_Geir[] = _("GEIR");
static const u8 sCreditsText_Per[] = _("PER");
static const u8 sCreditsText_Rune[] = _("RUNE");
static const u8 sCreditsText_Else[] = _("ELSE");
static const u8 sCreditsText_Leirvik[] = _("Leirvik");
static const u8 sCreditsText_Hedda[] = _("HEDDA");
static const u8 sCreditsText_Kole[] = _("KOLE");
static const u8 sCreditsText_Piper[] = _("PIPER");
static const u8 sCreditsText_Arve[] = _("ARVE");
static const u8 sCreditsText_Elvsund[] = _("Elvsund");
static const u8 sCreditsText_Dell[] = _("DELL");
static const u8 sCreditsText_Arna[] = _("ARNA");
static const u8 sCreditsText_Botolv[] = _("BOTOLV");
static const u8 sCreditsText_Gudrun[] = _("GUDRUN");
static const u8 sCreditsText_Haukfell[] = _("Haukfell");
static const u8 sCreditsText_Kass[] = _("KASS");
static const u8 sCreditsText_Asbjorn[] = _("ASBJORN");
static const u8 sCreditsText_Brynjar[] = _("BRYNJAR");
static const u8 sCreditsText_Dagny[] = _("DAGNY");
static const u8 sCreditsText_DelibirdIsle2[] = _("Delibird Isle");
static const u8 sCreditsText_Hakon[] = _("HAKON");
static const u8 sCreditsText_Bjarne[] = _("BJARNE");
static const u8 sCreditsText_Frida[] = _("FRIDA");
static const u8 sCreditsText_Erlend[] = _("ERLEND");
static const u8 sCreditsText_MereholtCoast[] = _("Mereholt Coast");
static const u8 sCreditsText_Brage[] = _("BRAGE");
static const u8 sCreditsText_Frod[] = _("FROD");
static const u8 sCreditsText_Gyda[] = _("GYDA");
static const u8 sCreditsText_Hroar[] = _("HROAR");
static const u8 sCreditsText_TheClimateStation[] = _("The Climate Station");
static const u8 sCreditsText_Gaute[] = _("GAUTE");
static const u8 sCreditsText_Marlowe[] = _("MARLOWE");
static const u8 sCreditsText_Helio[] = _("HELIO");
static const u8 sCreditsText_Dune[] = _("DUNE");
static const u8 sCreditsText_TheCavernAndTheMarsh[] = _("The Cavern and the Marsh");
static const u8 sCreditsText_Kelda[] = _("KELDA");
static const u8 sCreditsText_Rolf[] = _("ROLF");
static const u8 sCreditsText_Vig[] = _("VIG");
static const u8 sCreditsText_Tova[] = _("TOVA");
static const u8 sCreditsText_Engine[] = _("Engine");
static const u8 sCreditsText_PokeemeraldExpansion[] = _("pokeemerald-expansion");
static const u8 sCreditsText_RomHackingHideout[] = _("Rom Hacking Hideout");
static const u8 sCreditsText_Decompilation[] = _("Decompilation");
static const u8 sCreditsText_Pret[] = _("pret");
static const u8 sCreditsText_Tilesets[] = _("Tilesets");
static const u8 sCreditsText_Liamjd14[] = _("FireRed port: Liamjd14");
static const u8 sCreditsText_Leob[] = _("ORAS tiles: leob0505");
static const u8 sCreditsText_HnS[] = _("Heart & Soul: Kertra, Ekat99");
static const u8 sCreditsText_HnSArtists[] = _("Alistair, Johto Redrawn Team");
static const u8 sCreditsText_Shady[] = _("Shady Forest tiles");
static const u8 sCreditsText_Shady1[] = _("Ekat99, Heartlessdragoon");
static const u8 sCreditsText_Shady2[] = _("Vurtax, Yumekua, Rahtak");
static const u8 sCreditsText_Shady3[] = _("and the artists named");
static const u8 sCreditsText_Shady4[] = _("in CREDITS.md");
static const u8 sCreditsText_TeamAqua[] = _("Team Aqua's Asset Repo");
static const u8 sCreditsText_Tools[] = _("Tools");
static const u8 sCreditsText_Poryscript[] = _("poryscript");
static const u8 sCreditsText_Porytiles[] = _("porytiles");
static const u8 sCreditsText_Mgba[] = _("mGBA");
static const u8 sCreditsText_OriginalGame[] = _("Original Game");
static const u8 sCreditsText_GameFreakInc[] = _("GAME FREAK inc.");
static const u8 sCreditsText_CreaturesInc[] = _("Creatures Inc.");
static const u8 sCreditsText_Nintendo[] = _("Nintendo");
static const u8 sCreditsText_Music[] = _("Music");
static const u8 sCreditsText_GoIchinose[] = _("Go Ichinose");
static const u8 sCreditsText_JunichiMasuda[] = _("Junichi Masuda");
static const u8 sCreditsText_MorikazuAoki[] = _("Morikazu Aoki");
static const u8 sCreditsText_PokemonDesigners[] = _("POKéMON Designers");
static const u8 sCreditsText_KenSugimori[] = _("Ken Sugimori");
static const u8 sCreditsText_AtsukoNishida[] = _("Atsuko Nishida");
static const u8 sCreditsText_SpecialThanks[] = _("Special Thanks");
static const u8 sCreditsText_ThePretCommunity[] = _("the pret community");
static const u8 sCreditsText_TheRhhCommunity[] = _("the RHH community");
static const u8 sCreditsText_Endrift[] = _("endrift");
static const u8 sCreditsText_Huderlem[] = _("huderlem");
static const u8 sCreditsText_AFanWorkNotForSale[] = _("A fan work. Not for sale.");
static const u8 sCreditsText_PokemonIsATrademarkOf[] = _("POKéMON is a trademark of");
static const u8 sCreditsText_NintendoCreaturesAndGameFreak[] = _("Nintendo, Creatures and GAME FREAK");

static const struct CreditsEntry sCreditsEntry_EmptyString = { 0, FALSE, sCreditsText_EmptyString};
static const struct CreditsEntry sCreditsEntry_GameTitle = { 0, TRUE, sCreditsText_GameTitle};
static const struct CreditsEntry sCreditsEntry_ASkaldmereStory = { 0, FALSE, sCreditsText_ASkaldmereStory};
static const struct CreditsEntry sCreditsEntry_StoryDesignWriting = { 0, TRUE, sCreditsText_StoryDesignWriting};
static const struct CreditsEntry sCreditsEntry_Emberblue = { 0, FALSE, sCreditsText_Emberblue};
static const struct CreditsEntry sCreditsEntry_MapsScriptsTrainers = { 0, TRUE, sCreditsText_MapsScriptsTrainers};
static const struct CreditsEntry sCreditsEntry_TheCorps = { 0, TRUE, sCreditsText_TheCorps};
static const struct CreditsEntry sCreditsEntry_Wren = { 0, FALSE, sCreditsText_Wren};
static const struct CreditsEntry sCreditsEntry_Hale = { 0, FALSE, sCreditsText_Hale};
static const struct CreditsEntry sCreditsEntry_DrHeron = { 0, FALSE, sCreditsText_DrHeron};
static const struct CreditsEntry sCreditsEntry_Perrin = { 0, FALSE, sCreditsText_Perrin};
static const struct CreditsEntry sCreditsEntry_Mereholt = { 0, TRUE, sCreditsText_Mereholt};
static const struct CreditsEntry sCreditsEntry_HollisAune = { 0, FALSE, sCreditsText_HollisAune};
static const struct CreditsEntry sCreditsEntry_Dorsey = { 0, FALSE, sCreditsText_Dorsey};
static const struct CreditsEntry sCreditsEntry_CordeliaBrooke = { 0, FALSE, sCreditsText_CordeliaBrooke};
static const struct CreditsEntry sCreditsEntry_DistrictLeaders = { 0, TRUE, sCreditsText_DistrictLeaders};
static const struct CreditsEntry sCreditsEntry_Tarn = { 0, FALSE, sCreditsText_Tarn};
static const struct CreditsEntry sCreditsEntry_Mirren = { 0, FALSE, sCreditsText_Mirren};
static const struct CreditsEntry sCreditsEntry_Breen = { 0, FALSE, sCreditsText_Breen};
static const struct CreditsEntry sCreditsEntry_Sluice = { 0, FALSE, sCreditsText_Sluice};
static const struct CreditsEntry sCreditsEntry_Vale = { 0, FALSE, sCreditsText_Vale};
static const struct CreditsEntry sCreditsEntry_Harland = { 0, FALSE, sCreditsText_Harland};
static const struct CreditsEntry sCreditsEntry_Vane = { 0, FALSE, sCreditsText_Vane};
static const struct CreditsEntry sCreditsEntry_Ilex = { 0, FALSE, sCreditsText_Ilex};
static const struct CreditsEntry sCreditsEntry_Saltwick = { 0, TRUE, sCreditsText_Saltwick};
static const struct CreditsEntry sCreditsEntry_Anni = { 0, FALSE, sCreditsText_Anni};
static const struct CreditsEntry sCreditsEntry_Sigrun = { 0, FALSE, sCreditsText_Sigrun};
static const struct CreditsEntry sCreditsEntry_Corwen = { 0, FALSE, sCreditsText_Corwen};
static const struct CreditsEntry sCreditsEntry_Bram = { 0, FALSE, sCreditsText_Bram};
static const struct CreditsEntry sCreditsEntry_Route1AndMistwood = { 0, TRUE, sCreditsText_Route1AndMistwood};
static const struct CreditsEntry sCreditsEntry_Bo = { 0, FALSE, sCreditsText_Bo};
static const struct CreditsEntry sCreditsEntry_Ida = { 0, FALSE, sCreditsText_Ida};
static const struct CreditsEntry sCreditsEntry_Sanna = { 0, FALSE, sCreditsText_Sanna};
static const struct CreditsEntry sCreditsEntry_Skeld = { 0, FALSE, sCreditsText_Skeld};
static const struct CreditsEntry sCreditsEntry_Fernwick = { 0, TRUE, sCreditsText_Fernwick};
static const struct CreditsEntry sCreditsEntry_Grettir = { 0, FALSE, sCreditsText_Grettir};
static const struct CreditsEntry sCreditsEntry_Ward = { 0, FALSE, sCreditsText_Ward};
static const struct CreditsEntry sCreditsEntry_Solvi = { 0, FALSE, sCreditsText_Solvi};
static const struct CreditsEntry sCreditsEntry_Egil = { 0, FALSE, sCreditsText_Egil};
static const struct CreditsEntry sCreditsEntry_Reedmere = { 0, TRUE, sCreditsText_Reedmere};
static const struct CreditsEntry sCreditsEntry_Gunnar = { 0, FALSE, sCreditsText_Gunnar};
static const struct CreditsEntry sCreditsEntry_Maren = { 0, FALSE, sCreditsText_Maren};
static const struct CreditsEntry sCreditsEntry_Voss = { 0, FALSE, sCreditsText_Voss};
static const struct CreditsEntry sCreditsEntry_Mora = { 0, FALSE, sCreditsText_Mora};
static const struct CreditsEntry sCreditsEntry_TheCorridor = { 0, TRUE, sCreditsText_TheCorridor};
static const struct CreditsEntry sCreditsEntry_Geir = { 0, FALSE, sCreditsText_Geir};
static const struct CreditsEntry sCreditsEntry_Per = { 0, FALSE, sCreditsText_Per};
static const struct CreditsEntry sCreditsEntry_Rune = { 0, FALSE, sCreditsText_Rune};
static const struct CreditsEntry sCreditsEntry_Else = { 0, FALSE, sCreditsText_Else};
static const struct CreditsEntry sCreditsEntry_Leirvik = { 0, TRUE, sCreditsText_Leirvik};
static const struct CreditsEntry sCreditsEntry_Hedda = { 0, FALSE, sCreditsText_Hedda};
static const struct CreditsEntry sCreditsEntry_Kole = { 0, FALSE, sCreditsText_Kole};
static const struct CreditsEntry sCreditsEntry_Piper = { 0, FALSE, sCreditsText_Piper};
static const struct CreditsEntry sCreditsEntry_Arve = { 0, FALSE, sCreditsText_Arve};
static const struct CreditsEntry sCreditsEntry_Elvsund = { 0, TRUE, sCreditsText_Elvsund};
static const struct CreditsEntry sCreditsEntry_Dell = { 0, FALSE, sCreditsText_Dell};
static const struct CreditsEntry sCreditsEntry_Arna = { 0, FALSE, sCreditsText_Arna};
static const struct CreditsEntry sCreditsEntry_Botolv = { 0, FALSE, sCreditsText_Botolv};
static const struct CreditsEntry sCreditsEntry_Gudrun = { 0, FALSE, sCreditsText_Gudrun};
static const struct CreditsEntry sCreditsEntry_Haukfell = { 0, TRUE, sCreditsText_Haukfell};
static const struct CreditsEntry sCreditsEntry_Kass = { 0, FALSE, sCreditsText_Kass};
static const struct CreditsEntry sCreditsEntry_Asbjorn = { 0, FALSE, sCreditsText_Asbjorn};
static const struct CreditsEntry sCreditsEntry_Brynjar = { 0, FALSE, sCreditsText_Brynjar};
static const struct CreditsEntry sCreditsEntry_Dagny = { 0, FALSE, sCreditsText_Dagny};
static const struct CreditsEntry sCreditsEntry_DelibirdIsle2 = { 0, TRUE, sCreditsText_DelibirdIsle2};
static const struct CreditsEntry sCreditsEntry_Hakon = { 0, FALSE, sCreditsText_Hakon};
static const struct CreditsEntry sCreditsEntry_Bjarne = { 0, FALSE, sCreditsText_Bjarne};
static const struct CreditsEntry sCreditsEntry_Frida = { 0, FALSE, sCreditsText_Frida};
static const struct CreditsEntry sCreditsEntry_Erlend = { 0, FALSE, sCreditsText_Erlend};
static const struct CreditsEntry sCreditsEntry_MereholtCoast = { 0, TRUE, sCreditsText_MereholtCoast};
static const struct CreditsEntry sCreditsEntry_Brage = { 0, FALSE, sCreditsText_Brage};
static const struct CreditsEntry sCreditsEntry_Frod = { 0, FALSE, sCreditsText_Frod};
static const struct CreditsEntry sCreditsEntry_Gyda = { 0, FALSE, sCreditsText_Gyda};
static const struct CreditsEntry sCreditsEntry_Hroar = { 0, FALSE, sCreditsText_Hroar};
static const struct CreditsEntry sCreditsEntry_TheClimateStation = { 0, TRUE, sCreditsText_TheClimateStation};
static const struct CreditsEntry sCreditsEntry_Gaute = { 0, FALSE, sCreditsText_Gaute};
static const struct CreditsEntry sCreditsEntry_Marlowe = { 0, FALSE, sCreditsText_Marlowe};
static const struct CreditsEntry sCreditsEntry_Helio = { 0, FALSE, sCreditsText_Helio};
static const struct CreditsEntry sCreditsEntry_Dune = { 0, FALSE, sCreditsText_Dune};
static const struct CreditsEntry sCreditsEntry_TheCavernAndTheMarsh = { 0, TRUE, sCreditsText_TheCavernAndTheMarsh};
static const struct CreditsEntry sCreditsEntry_Kelda = { 0, FALSE, sCreditsText_Kelda};
static const struct CreditsEntry sCreditsEntry_Rolf = { 0, FALSE, sCreditsText_Rolf};
static const struct CreditsEntry sCreditsEntry_Vig = { 0, FALSE, sCreditsText_Vig};
static const struct CreditsEntry sCreditsEntry_Tova = { 0, FALSE, sCreditsText_Tova};
static const struct CreditsEntry sCreditsEntry_Engine = { 0, TRUE, sCreditsText_Engine};
static const struct CreditsEntry sCreditsEntry_PokeemeraldExpansion = { 0, FALSE, sCreditsText_PokeemeraldExpansion};
static const struct CreditsEntry sCreditsEntry_RomHackingHideout = { 0, FALSE, sCreditsText_RomHackingHideout};
static const struct CreditsEntry sCreditsEntry_Decompilation = { 0, TRUE, sCreditsText_Decompilation};
static const struct CreditsEntry sCreditsEntry_Pret = { 0, FALSE, sCreditsText_Pret};
static const struct CreditsEntry sCreditsEntry_Tilesets = { 0, TRUE, sCreditsText_Tilesets};
static const struct CreditsEntry sCreditsEntry_Liamjd14 = { 0, FALSE, sCreditsText_Liamjd14};
static const struct CreditsEntry sCreditsEntry_Leob = { 0, FALSE, sCreditsText_Leob};
static const struct CreditsEntry sCreditsEntry_HnS = { 0, FALSE, sCreditsText_HnS};
static const struct CreditsEntry sCreditsEntry_HnSArtists = { 0, FALSE, sCreditsText_HnSArtists};
static const struct CreditsEntry sCreditsEntry_Shady = { 0, TRUE, sCreditsText_Shady};
static const struct CreditsEntry sCreditsEntry_Shady1 = { 0, FALSE, sCreditsText_Shady1};
static const struct CreditsEntry sCreditsEntry_Shady2 = { 0, FALSE, sCreditsText_Shady2};
static const struct CreditsEntry sCreditsEntry_Shady3 = { 0, FALSE, sCreditsText_Shady3};
static const struct CreditsEntry sCreditsEntry_Shady4 = { 0, FALSE, sCreditsText_Shady4};
static const struct CreditsEntry sCreditsEntry_TeamAqua = { 0, FALSE, sCreditsText_TeamAqua};
static const struct CreditsEntry sCreditsEntry_Tools = { 0, TRUE, sCreditsText_Tools};
static const struct CreditsEntry sCreditsEntry_Poryscript = { 0, FALSE, sCreditsText_Poryscript};
static const struct CreditsEntry sCreditsEntry_Porytiles = { 0, FALSE, sCreditsText_Porytiles};
static const struct CreditsEntry sCreditsEntry_Mgba = { 0, FALSE, sCreditsText_Mgba};
static const struct CreditsEntry sCreditsEntry_OriginalGame = { 0, TRUE, sCreditsText_OriginalGame};
static const struct CreditsEntry sCreditsEntry_GameFreakInc = { 0, FALSE, sCreditsText_GameFreakInc};
static const struct CreditsEntry sCreditsEntry_CreaturesInc = { 0, FALSE, sCreditsText_CreaturesInc};
static const struct CreditsEntry sCreditsEntry_Nintendo = { 0, FALSE, sCreditsText_Nintendo};
static const struct CreditsEntry sCreditsEntry_Music = { 0, TRUE, sCreditsText_Music};
static const struct CreditsEntry sCreditsEntry_GoIchinose = { 0, FALSE, sCreditsText_GoIchinose};
static const struct CreditsEntry sCreditsEntry_JunichiMasuda = { 0, FALSE, sCreditsText_JunichiMasuda};
static const struct CreditsEntry sCreditsEntry_MorikazuAoki = { 0, FALSE, sCreditsText_MorikazuAoki};
static const struct CreditsEntry sCreditsEntry_PokemonDesigners = { 0, TRUE, sCreditsText_PokemonDesigners};
static const struct CreditsEntry sCreditsEntry_KenSugimori = { 0, FALSE, sCreditsText_KenSugimori};
static const struct CreditsEntry sCreditsEntry_AtsukoNishida = { 0, FALSE, sCreditsText_AtsukoNishida};
static const struct CreditsEntry sCreditsEntry_SpecialThanks = { 0, TRUE, sCreditsText_SpecialThanks};
static const struct CreditsEntry sCreditsEntry_ThePretCommunity = { 0, FALSE, sCreditsText_ThePretCommunity};
static const struct CreditsEntry sCreditsEntry_TheRhhCommunity = { 0, FALSE, sCreditsText_TheRhhCommunity};
static const struct CreditsEntry sCreditsEntry_Endrift = { 0, FALSE, sCreditsText_Endrift};
static const struct CreditsEntry sCreditsEntry_Huderlem = { 0, FALSE, sCreditsText_Huderlem};
static const struct CreditsEntry sCreditsEntry_AFanWorkNotForSale = { 0, TRUE, sCreditsText_AFanWorkNotForSale};
static const struct CreditsEntry sCreditsEntry_PokemonIsATrademarkOf = { 0, FALSE, sCreditsText_PokemonIsATrademarkOf};
static const struct CreditsEntry sCreditsEntry_NintendoCreaturesAndGameFreak = { 0, FALSE, sCreditsText_NintendoCreaturesAndGameFreak};

#define _ &sCreditsEntry_EmptyString
static const struct CreditsEntry *const sCreditsEntryPointerTable[PAGE_COUNT][ENTRIES_PER_PAGE] =
{
    [PAGE_TITLE] = {
        _,
        &sCreditsEntry_GameTitle,
        &sCreditsEntry_ASkaldmereStory,
        _,
        _,
    },
    [PAGE_STORY] = {
        &sCreditsEntry_StoryDesignWriting,
        &sCreditsEntry_Emberblue,
        _,
        &sCreditsEntry_MapsScriptsTrainers,
        &sCreditsEntry_Emberblue,
    },
    [PAGE_CORPS] = {
        &sCreditsEntry_TheCorps,
        &sCreditsEntry_Wren,
        &sCreditsEntry_Hale,
        &sCreditsEntry_DrHeron,
        &sCreditsEntry_Perrin,
    },
    [PAGE_MEREHOLT] = {
        _,
        &sCreditsEntry_Mereholt,
        &sCreditsEntry_HollisAune,
        &sCreditsEntry_Dorsey,
        &sCreditsEntry_CordeliaBrooke,
    },
    [PAGE_LEADERS_1] = {
        &sCreditsEntry_DistrictLeaders,
        &sCreditsEntry_Tarn,
        &sCreditsEntry_Mirren,
        &sCreditsEntry_Breen,
        &sCreditsEntry_Sluice,
    },
    [PAGE_LEADERS_2] = {
        &sCreditsEntry_DistrictLeaders,
        &sCreditsEntry_Vale,
        &sCreditsEntry_Harland,
        &sCreditsEntry_Vane,
        &sCreditsEntry_Ilex,
    },
    [PAGE_SALTWICK] = {
        &sCreditsEntry_Saltwick,
        &sCreditsEntry_Anni,
        &sCreditsEntry_Sigrun,
        &sCreditsEntry_Corwen,
        &sCreditsEntry_Bram,
    },
    [PAGE_ROUTE1] = {
        &sCreditsEntry_Route1AndMistwood,
        &sCreditsEntry_Bo,
        &sCreditsEntry_Ida,
        &sCreditsEntry_Sanna,
        &sCreditsEntry_Skeld,
    },
    [PAGE_FERNWICK] = {
        &sCreditsEntry_Fernwick,
        &sCreditsEntry_Grettir,
        &sCreditsEntry_Ward,
        &sCreditsEntry_Solvi,
        &sCreditsEntry_Egil,
    },
    [PAGE_REEDMERE] = {
        &sCreditsEntry_Reedmere,
        &sCreditsEntry_Gunnar,
        &sCreditsEntry_Maren,
        &sCreditsEntry_Voss,
        &sCreditsEntry_Mora,
    },
    [PAGE_CORRIDOR] = {
        &sCreditsEntry_TheCorridor,
        &sCreditsEntry_Geir,
        &sCreditsEntry_Per,
        &sCreditsEntry_Rune,
        &sCreditsEntry_Else,
    },
    [PAGE_LEIRVIK] = {
        &sCreditsEntry_Leirvik,
        &sCreditsEntry_Hedda,
        &sCreditsEntry_Kole,
        &sCreditsEntry_Piper,
        &sCreditsEntry_Arve,
    },
    [PAGE_ELVSUND] = {
        &sCreditsEntry_Elvsund,
        &sCreditsEntry_Dell,
        &sCreditsEntry_Arna,
        &sCreditsEntry_Botolv,
        &sCreditsEntry_Gudrun,
    },
    [PAGE_HAUKFELL] = {
        &sCreditsEntry_Haukfell,
        &sCreditsEntry_Kass,
        &sCreditsEntry_Asbjorn,
        &sCreditsEntry_Brynjar,
        &sCreditsEntry_Dagny,
    },
    [PAGE_DELIBIRD] = {
        &sCreditsEntry_DelibirdIsle2,
        &sCreditsEntry_Hakon,
        &sCreditsEntry_Bjarne,
        &sCreditsEntry_Frida,
        &sCreditsEntry_Erlend,
    },
    [PAGE_COAST] = {
        &sCreditsEntry_MereholtCoast,
        &sCreditsEntry_Brage,
        &sCreditsEntry_Frod,
        &sCreditsEntry_Gyda,
        &sCreditsEntry_Hroar,
    },
    [PAGE_STATION] = {
        &sCreditsEntry_TheClimateStation,
        &sCreditsEntry_Gaute,
        &sCreditsEntry_Marlowe,
        &sCreditsEntry_Helio,
        &sCreditsEntry_Dune,
    },
    [PAGE_CAVERN] = {
        &sCreditsEntry_TheCavernAndTheMarsh,
        &sCreditsEntry_Kelda,
        &sCreditsEntry_Rolf,
        &sCreditsEntry_Vig,
        &sCreditsEntry_Tova,
    },
    [PAGE_ENGINE] = {
        &sCreditsEntry_Engine,
        &sCreditsEntry_PokeemeraldExpansion,
        &sCreditsEntry_RomHackingHideout,
        &sCreditsEntry_Decompilation,
        &sCreditsEntry_Pret,
    },
    [PAGE_DECOMP] = {
        &sCreditsEntry_Tilesets,
        &sCreditsEntry_Liamjd14,
        &sCreditsEntry_Leob,
        &sCreditsEntry_HnS,
        &sCreditsEntry_HnSArtists,
    },
    [PAGE_TILES_2] = {
        &sCreditsEntry_Shady,
        &sCreditsEntry_Shady1,
        &sCreditsEntry_Shady2,
        &sCreditsEntry_Shady3,
        &sCreditsEntry_Shady4,
    },
    [PAGE_TOOLS] = {
        &sCreditsEntry_Tools,
        &sCreditsEntry_Poryscript,
        &sCreditsEntry_Porytiles,
        &sCreditsEntry_Mgba,
        &sCreditsEntry_TeamAqua,
    },
    [PAGE_ORIGINAL] = {
        &sCreditsEntry_OriginalGame,
        &sCreditsEntry_GameFreakInc,
        &sCreditsEntry_CreaturesInc,
        &sCreditsEntry_Nintendo,
        _,
    },
    [PAGE_MUSIC] = {
        &sCreditsEntry_Music,
        &sCreditsEntry_GoIchinose,
        &sCreditsEntry_JunichiMasuda,
        &sCreditsEntry_MorikazuAoki,
        _,
    },
    [PAGE_ART] = {
        &sCreditsEntry_PokemonDesigners,
        &sCreditsEntry_KenSugimori,
        &sCreditsEntry_AtsukoNishida,
        &sCreditsEntry_GameFreakInc,
        _,
    },
    [PAGE_THANKS] = {
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_ThePretCommunity,
        &sCreditsEntry_TheRhhCommunity,
        &sCreditsEntry_Endrift,
        &sCreditsEntry_Huderlem,
    },
    [PAGE_LEGAL] = {
        _,
        &sCreditsEntry_AFanWorkNotForSale,
        &sCreditsEntry_PokemonIsATrademarkOf,
        &sCreditsEntry_NintendoCreaturesAndGameFreak,
        _,
    },
};
#undef _
