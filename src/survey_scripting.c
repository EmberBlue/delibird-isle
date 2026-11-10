#include "global.h"
#include "battle_setup.h"
#include "event_data.h"
#include "pokemon.h"
#include "string_util.h"
#include "survey.h"
#include "constants/moves.h"
#include "constants/species.h"

// Script bridge for the survey/certification systems (§08 Act III, §10).
// The training tasks track in one var as a bitfield; the habitat-survey
// classification calls the same tested classifier the whole survey verb is
// built on (src/survey.c) rather than restating its rules in script.

// VAR_SKALDMERE_CERT_TASKS bits:
//   0..2  the three practice snares
//   3..5  the survey stakes: bank, substrate, canopy
//   6     the water sample
// Generic var-bitfield helpers so every chapter's clue/task tracking reuses
// one tested path. in: gSpecialVar_0x8005 = var id, gSpecialVar_0x8004 = bit.
void SkaldmereCertTaskMark(void)
{
    VarSet(gSpecialVar_0x8005,
           VarGet(gSpecialVar_0x8005) | (1 << gSpecialVar_0x8004));
}

// Returns 0/1 (use with specialvar).
u16 SkaldmereCertTaskGet(void)
{
    return (VarGet(gSpecialVar_0x8005) >> gSpecialVar_0x8004) & 1;
}

// in: gSpecialVar_0x8005 = var id, gSpecialVar_0x8004 = mask of bits that
// count. Returns the number of set bits within the mask.
u16 SkaldmereCertTaskCount(void)
{
    u32 v = VarGet(gSpecialVar_0x8005) & gSpecialVar_0x8004;
    u16 n = 0;
    while (v)
    {
        n += v & 1;
        v >>= 1;
    }
    return n;
}

// Does anyone in the party know, or could be taught, the move in
// gSpecialVar_0x8004? Used where a field move the main path needs is handed
// out (VALE's HM03), so a party of non-swimmers is lent a swimmer instead of
// being stranded below the summit.
u16 SkaldmerePartyCanLearn(void)
{
    u32 i, j;
    for (i = 0; i < gPlayerPartyCount; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        if (species == SPECIES_NONE || species == SPECIES_EGG)
            continue;
        for (j = 0; j < MAX_MON_MOVES; j++)
            if (GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + j) == gSpecialVar_0x8004)
                return 1;
        if (CanLearnTeachableMove(species, gSpecialVar_0x8004))
            return 1;
    }
    return 0;
}

// The Holding Meadow habitat read (§08: a Reference-state teaching ground).
// The observations are authored — the meadow is designed whole — but the
// *judgment* comes from the real classifier, so the first "survey" the
// player ever completes runs the same code path the whole game will.
// Returns enum SurveyState (use with specialvar).
u16 SkaldmereClassifyMeadow(void)
{
    struct SurveySignals signals = {
        .keystone = KEYSTONE_BREEDING,
        .abundance = ABUNDANCE_BALANCED,
        .sensitiveGuildPresent = TRUE,
        .apexPresent = TRUE,
        .disturbanceSigns = FALSE,
    };
    return ClassifySurveyState(&signals);
}

// §07 opening / §04: the player chooses pronouns only — everything else
// about Wren is fixed. in: gSpecialVar_0x8004 = MALE/FEMALE. The avatar
// graphics apply on the next warp, which the ferry-arrival script does
// immediately after the choice.
void SkaldmereSetGender(void)
{
    gSaveBlock2Ptr->playerGender = gSpecialVar_0x8004;
}

// §06 contamination signature: amphibians present but low-density, with
// disturbance signs (deformities), and abundance skewed by a mesopredator
// swarm. Returns the SurveyState the Floodbasin reads as -- the first time
// the player sees the classifier produce something other than Reference.
u16 SkaldmereClassifyFloodbasin(void)
{
    struct SurveySignals signals = {
        .keystone = KEYSTONE_STRAINED,
        .abundance = ABUNDANCE_MESOPREDATOR_SWARM,
        .sensitiveGuildPresent = TRUE,    // amphibians still here -- the lie's seam
        .apexPresent = TRUE,              // and SICK: bioaccumulation
        .disturbanceSigns = TRUE,
    };
    return ClassifySurveyState(&signals);
}

// §06 zone 4: the river reads STRESSED -- and that is the whole point of the
// chapter. A riparian dam-builder (the wetland's engineer) strained by removal
// upstream and the channelized cut; the sensitive invertebrate guild thinning
// but STILL PRESENT (the open window); the apex thinning, not swarming; visible
// hydrological-alteration damage (the concrete banks, the broken dam relic).
// Strained, not collapsed: relief NOW and it recovers. Wait, and it won't.
u16 SkaldmereClassifyRiver(void)
{
    struct SurveySignals signals = {
        .keystone = KEYSTONE_STRAINED,        // the dam-builder, thinned out upstream
        .abundance = ABUNDANCE_SKEWED,        // apex thinning -- not a swarm yet
        .sensitiveGuildPresent = TRUE,        // mayfly-coded inverts thinning, still here
        .apexPresent = TRUE,
        .disturbanceSigns = TRUE,             // channelization + the broken dam
    };
    return ClassifySurveyState(&signals);
}

// §06 zone 5: the Highlands read SHIFTED -- the first place that won't come
// back, and the tonal turn of the whole game. Permafrost thaw is one-way
// (carbon feedback): the keystone is the frozen ground itself, and it is
// going. The cold-specialist guild is compressed upslope until it runs out of
// "up"; lowland species climb into the gap; the ground slumps, the forest
// tilts. KEYSTONE_ABSENT alone forces SHIFTED -- nothing outvotes it. The
// honest response is not repair. It is witness.
u16 SkaldmereClassifyHighlands(void)
{
    struct SurveySignals signals = {
        .keystone = KEYSTONE_ABSENT,          // the frozen ground -- thawing, gone
        .abundance = ABUNDANCE_SKEWED,        // a simpler assembly; lowlanders upslope
        .sensitiveGuildPresent = FALSE,       // the cold-specialists, compressed out
        .apexPresent = FALSE,
        .disturbanceSigns = TRUE,             // thermokarst, slumping, the drunken forest
    };
    return ClassifySurveyState(&signals);
}

// §06 zone 7: the Industrial Coast reads COLLAPSING -- the trophic cascade in
// motion, the clearest "take out the big ones and the web comes apart" in the
// game. Industrial overfishing has pulled the apex (Sharpedo, Gyarados) and the
// otter-coded grazer that guards the kelp; the urchins boom unchecked and strip
// the canopy; the forage fish and the seabirds that hunt them crash; the dredge
// has scarred the seafloor (that part will not come back). FAILING keystone +
// mesopredator swarm => COLLAPSING. Reversible only if the fishing stops now.
u16 SkaldmereClassifyCoast(void)
{
    struct SurveySignals signals = {
        .keystone = KEYSTONE_FAILING,              // the otter-grazer, fished to nothing
        .abundance = ABUNDANCE_MESOPREDATOR_SWARM, // urchins/mid-fish boom; apex gone
        .sensitiveGuildPresent = FALSE,            // kelp stripped, forage crashed
        .apexPresent = FALSE,
        .disturbanceSigns = TRUE,                  // dredge scars, the nets, the cannery
    };
    return ClassifySurveyState(&signals);
}

// §06 zone 8 / the climax: the Last Corridor's keystone marsh reads COLLAPSING.
// The Poliwag line -- the keystone-indicator, the same frogs from the prologue
// bridge, the species Dr. Heron's noble lie once "saved" -- is failing here, the
// headwater drying under cumulative pressure and an encroaching edge. The web at
// the heart of the whole region is coming apart. The survey IS the final
// credential: Wren reads it while the one who taught them the verb dies in front
// of them, and testifies anyway. FAILING keystone => COLLAPSING.
u16 SkaldmereClassifyCorridor(void)
{
    struct SurveySignals signals = {
        .keystone = KEYSTONE_FAILING,         // the Poliwag line, barely holding
        .abundance = ABUNDANCE_SKEWED,        // the web thinning from the bottom up
        .sensitiveGuildPresent = FALSE,       // the marsh's fine indicators, going
        .apexPresent = FALSE,
        .disturbanceSigns = TRUE,             // the drying, the encroaching edge
    };
    return ClassifySurveyState(&signals);
}

// ---------------------------------------------------------------------------
// The Field Notebook (ITEM_FIELD_NOTEBOOK). data/scripts/skald_notebook.pory
// shows a menu and calls this with gSpecialVar_0x8004 = page; the page is
// built into gStringVar4 (two lines per box, \p between boxes).
//   0  the assignment -- where the story wants the player next (Hale's own
//      briefing logic from ParcelFernwickHQ, latest state first)
//   1  the certifications and clearances
//   2  the side quests
//   3  the margins -- Heron's marginalia, one line per clearance earned
// ---------------------------------------------------------------------------
#define NB_MAX_BADGES 8

static const u8 sNb_Assign_Partner[]   = _("Choose a partner at the Holding\nMeadow north of SALTWICK.\pThen ROUTE 1, north, and MISTWOOD,\nto the Corps station in FERNWICK.");
static const u8 sNb_Assign_Fernwick[]  = _("Report to HALE at the Corps District\nStation in FERNWICK.\pROUTE 1 north, then the forest\nat MISTWOOD. Keep going.");
static const u8 sNb_Assign_Tarn[]      = _("The Certification Hall, across the\nboulevard from the Station.\pTARN runs the practical. Pass it,\nthen report back to HALE.");
static const u8 sNb_Assign_Report1[]   = _("TARN passed you.\nReport to HALE at the Station.");
static const u8 sNb_Assign_Wetlands[]  = _("North of FERNWICK the forest gives\nout. A fishing landing on the backwater.\pListen. Document. Then the old\nservice cut east, to the FLOODBASIN.");
static const u8 sNb_Assign_Basin[]     = _("Walk the FLOODBASIN slowly. Read\nevery stake. Talk to the booth.\pThen tell ILEX what you saw,\nand report to HALE.");
static const u8 sNb_Assign_Report2[]   = _("The basin is read. Report to HALE\nat the Station in FERNWICK.");
static const u8 sNb_Assign_River[]     = _("Two certifications. North past the\ndischarge to ELVSUND, on the river.\pRead the whole river before you name\nany part of it. ILEX works the bank.");
static const u8 sNb_Assign_Highland[]  = _("Three certifications. Follow the\nriver up into the high cold: HAUKFELL.\pVALE holds the gate. ILEX is up\nthere, measuring what's left.");
static const u8 sNb_Assign_Ferry[]     = _("Four certifications. The ferry from\nSALTWICK: DELIBIRD ISLE first.\pThen the MEREHOLT coast, and the\nClimate Station past it. Read the coast.");
static const u8 sNb_Assign_Marsh[]     = _("Five certifications. HALE will walk\nyou from the Station to the Last\pCorridor. Past the water, the marsh\nis yours to read. All of it.");
static const u8 sNb_Assign_Aide[]      = _("The testimony is filed. The coast\noffice has asked for you.\pTake the ferry to the MEREHOLT\ncoast. An aide waits on the quay.");
static const u8 sNb_Assign_Stairs[]    = _("BROOKE has said her piece.\nThe stairs down are the way out.");
static const u8 sNb_Assign_Post[]      = _("Filed, read, and done. The leaders\nwill take a full-strength rematch.\pPERRIN is at his desk in the coast\noffice. There's a lot of region left.");

static const u8 sNb_Certs_Head[]       = _("CERTIFICATIONS\n");
static const u8 sNb_Cert_Forest[]      = _("Forest: ");
static const u8 sNb_Cert_Wetland[]     = _("Wetland: ");
static const u8 sNb_Cert_Watershed[]   = _("Watershed: ");
static const u8 sNb_Cert_Highland[]    = _("Highland: ");
static const u8 sNb_Cert_Coastal[]     = _("Coastal: ");
static const u8 sNb_Signed[]           = _("signed");
static const u8 sNb_Open[]             = _("--");
static const u8 sNb_Clearances[]       = _("Clearances held: ");
static const u8 sNb_Exams[]            = _("\nRead right at the examinations: ");
static const u8 sNb_OfEightPlain[]     = _(" of 8.");
static const u8 sNb_Second[]           = _("\nSecond readings, after: ");
static const u8 sNb_OfSeven[]          = _(" of 7.");
static const u8 sNb_Of8[]              = _(" of 8.\nTARN MIRREN BREEN SLUICE\pVALE HARLAND VANE ILEX,\nin that order up the region.");
static const u8 sNb_Newline[]          = _("\n");
static const u8 sNb_Page[]             = _("\p");

static const u8 sNb_Quests_Head[]      = _("SIDE WORK\n");
static const u8 sNb_Done[]             = _("done");
static const u8 sNb_Started[]          = _("open");
static const u8 sNb_Quests_NoneOpen[]  = _("Nothing open. Ask around.");
static const u8 sNb_Quests_Finished[]  = _("\pFinished: ");
static const u8 sNb_Quests_Of[]        = _(" of ");
static const u8 sNb_Quests_Dot[]       = _(".");
struct NbQuest { const u8 *name; u16 startFlag; u16 doneFlag; };
static const u8 sNbQ_Anni[]    = _("ANNI's net: ");
static const u8 sNbQ_Sigrun[]  = _("SIGRUN's gulls: ");
static const u8 sNbQ_Corwen[]  = _("CORWEN's DELIBIRD: ");
static const u8 sNbQ_Gunnar[]  = _("GUNNAR's SURSKIT: ");
static const u8 sNbQ_Grettir[] = _("GRETTIR's pond: ");
static const u8 sNbQ_Flow[]    = _("The flow pages: ");
static const u8 sNbQ_Hedda[]   = _("HEDDA's count: ");
static const u8 sNbQ_Dell[]    = _("DELL's lure: ");
static const u8 sNbQ_Beaver[]  = _("The beaver stump: ");
static const u8 sNbQ_Egg[]     = _("The SWINUB egg: ");
static const u8 sNbQ_Shell[]   = _("The shell: ");
static const u8 sNbQ_Drawer[]  = _("GAUTE's drawer: ");
static const u8 sNbQ_Page[]    = _("The captain's page: ");
static const u8 sNbQ_Dusk[]    = _("The dusk count: ");
static const u8 sNbQ_Sign[]    = _("The closure sign: ");
static const u8 sNbQ_Roof[]    = _("MRS. ASKE's roof: ");
static const u8 sNbQ_Hives[]   = _("The beekeeper: ");
static const u8 sNbQ_Mareep[]  = _("The shepherd's MAREEP: ");
static const u8 sNbQ_Tins[]    = _("The line of tins: ");
static const u8 sNbQ_Cast[]    = _("The office CASTFORM: ");
static const u8 sNbQ_Round[]   = _("Marta's relief round: ");
static const u8 sNbQ_Halvar[]  = _("HALVAR's whistle: ");
static const u8 sNbQ_Crate[]   = _("The crate label: ");
static const u8 sNbQ_Reed[]    = _("The reed count: ");
static const u8 sNbQ_Brown[]   = _("The brown water: ");
static const u8 sNbQ_Plank[]   = _("The keel plank: ");
static const u8 sNbQ_Core[]    = _("Core tag 48-50: ");
static const u8 sNbQ_Sledge[]  = _("KARI's sledge: ");
static const u8 sNbQ_Carbon[]  = _("The fourth carbon: ");
static const u8 sNbQ_Shoal[] = _("The shoal stake: ");
static const u8 sNbQ_Stone[] = _("The high-water stone: ");
static const u8 sNbQ_Turf[] = _("The turf cut: ");
static const u8 sNbQ_Plate[] = _("The pump house plate: ");
static const u8 sNbQ_Book[] = _("The kept book: ");
static const u8 sNbQ_Letter[] = _("The carrier's letter: ");
static const u8 sNbQ_Scratch[] = _("The hut wall scratch: ");
static const u8 sNbQ_Copy[] = _("The inspector's copy: ");
static const u8 sNbQ_FortyOne[] = _("Page forty-one: ");
static const u8 sNbQ_Tally[] = _("The pier post's notches: ");
static const u8 sNbQ_Jar[] = _("The jar on the kerb: ");
static const u8 sNbQ_Deadline[] = _("The top of the line: ");
static const u8 sNbQ_Depth[] = _("The red lead mark: ");
static const u8 sNbQ_Frost[] = _("The lambing field crack: ");
static const u8 sNbQ_Corner[] = _("Tomas's sill: ");
static const u8 sNbQ_Roost[] = _("The gulls on the wall: ");
static const u8 sNbQ_FirstOne[] = _("The first TENTACOOL: ");
static const u8 sNbQ_Nest[] = _("The heron's nest: ");
static const u8 sNbQ_Seal[] = _("The sealed crate: ");
static const u8 sNbQ_Brass[] = _("The fountain's small plate: ");
static const u8 sNbQ_Rack[] = _("The monitor's jars: ");
static const u8 sNbQ_Headwall[] = _("The old flow mark: ");
static const u8 sNbQ_Voucher[] = _("The voucher box: ");
static const u8 sNbQ_BoardDrawer[] = _("The bottom drawer: ");
static const u8 sNbQ_Step[] = _("The old house's step: ");
static const u8 sNbQ_Scale[] = _("The quay scale's plate: ");
static const struct NbQuest sNbQuests[] =
{
    {sNbQ_Anni,    FLAG_SKALD_Q_ANNI_NET,    FLAG_SKALD_Q_ANNI_DONE},
    {sNbQ_Sigrun,  FLAG_SKALD_Q_SIGRUN,      FLAG_SKALD_Q_SIGRUN_DONE},
    {sNbQ_Corwen,  0,                        FLAG_SKALD_Q_BIRDER_DONE},
    {sNbQ_Gunnar,  FLAG_SKALD_Q_GUNNAR,      FLAG_SKALD_Q_GUNNAR_DONE},
    {sNbQ_Grettir, FLAG_SKALD_Q_GRETTIR,     FLAG_SKALD_Q_GRETTIR_DONE},
    {sNbQ_Flow,    FLAG_SKALD_Q_FLOW,        FLAG_SKALD_Q_FLOW_DONE},
    {sNbQ_Hedda,   FLAG_SKALD_Q_HEDDA,       FLAG_SKALD_Q_HEDDA_DONE},
    {sNbQ_Dell,    FLAG_SKALD_Q_DELL,        FLAG_SKALD_Q_DELL_DONE},
    {sNbQ_Beaver,  FLAG_SKALD_Q_BEAVER,      FLAG_SKALD_Q_BEAVER_DONE},
    {sNbQ_Egg,     0,                        FLAG_SKALD_HL_EGG_GIVEN},
    {sNbQ_Shell,   FLAG_SKALD_Q_SHELL_FOUND, FLAG_SKALD_Q_SHELL_DONE},
    {sNbQ_Drawer,  FLAG_SKALD_Q_DRAWER,      FLAG_SKALD_Q_DRAWER_DONE},
    {sNbQ_Page,    FLAG_SKALD_Q_PAGE,        FLAG_SKALD_Q_PAGE_DONE},
    {sNbQ_Dusk,    FLAG_SKALD_Q_DUSK,        FLAG_SKALD_Q_DUSK_DONE},
    {sNbQ_Sign,    FLAG_SKALD_Q_SIGN,        FLAG_SKALD_Q_SIGN_DONE},
    {sNbQ_Roof,    FLAG_SKALD_Q_ROOF,        FLAG_SKALD_Q_ROOF_DONE},
    {sNbQ_Hives,   FLAG_SKALD_Q_HIVES,       FLAG_SKALD_Q_HIVES_DONE},
    {sNbQ_Mareep,  FLAG_SKALD_Q_MAREEP,      FLAG_SKALD_Q_MAREEP_DONE},
    {sNbQ_Tins,    FLAG_SKALD_Q_TINS,        FLAG_SKALD_Q_TINS_DONE},
    {sNbQ_Cast,    FLAG_SKALD_Q_CASTFORM,    FLAG_SKALD_Q_CASTFORM_DONE},
    {sNbQ_Round,   FLAG_SKALDMERE_DELIBIRD_PARCEL, FLAG_SKALDMERE_DELIBIRD_GIFT},
    {sNbQ_Halvar,  FLAG_SKALD_Q_HALVAR,      FLAG_SKALD_Q_HALVAR_DONE},
    {sNbQ_Crate,   FLAG_SKALD_Q_CRATE,       FLAG_SKALD_Q_CRATE_DONE},
    {sNbQ_Reed,    FLAG_SKALD_Q_REED,        FLAG_SKALD_Q_REED_DONE},
    {sNbQ_Brown,   FLAG_SKALD_Q_BROWN,       FLAG_SKALD_Q_BROWN_DONE},
    {sNbQ_Plank,   FLAG_SKALD_Q_PLANK,       FLAG_SKALD_Q_PLANK_DONE},
    {sNbQ_Core,    FLAG_SKALD_Q_CORE,        FLAG_SKALD_Q_CORE_DONE},
    {sNbQ_Sledge,  FLAG_SKALD_Q_SLEDGE,      FLAG_SKALD_Q_SLEDGE_DONE},
    {sNbQ_Carbon,  FLAG_SKALD_Q_CARBON,      FLAG_SKALD_Q_CARBON_DONE},
    {sNbQ_Shoal, FLAG_SKALD_Q_SHOAL, FLAG_SKALD_Q_SHOAL_DONE},
    {sNbQ_Stone, FLAG_SKALD_Q_STONE, FLAG_SKALD_Q_STONE_DONE},
    {sNbQ_Turf, FLAG_SKALD_Q_TURF, FLAG_SKALD_Q_TURF_DONE},
    {sNbQ_Plate, FLAG_SKALD_Q_PLATE, FLAG_SKALD_Q_PLATE_DONE},
    {sNbQ_Book, FLAG_SKALD_Q_BOOK, FLAG_SKALD_Q_BOOK_DONE},
    {sNbQ_Letter, FLAG_SKALD_Q_LETTER, FLAG_SKALD_Q_LETTER_DONE},
    {sNbQ_Scratch, FLAG_SKALD_Q_SCRATCH, FLAG_SKALD_Q_SCRATCH_DONE},
    {sNbQ_Copy, FLAG_SKALD_Q_COPY, FLAG_SKALD_Q_COPY_DONE},
    {sNbQ_FortyOne, FLAG_SKALD_Q_FORTYONE, FLAG_SKALD_Q_FORTYONE_DONE},
    {sNbQ_Tally, FLAG_SKALD_Q_TALLY, FLAG_SKALD_Q_TALLY_DONE},
    {sNbQ_Jar, FLAG_SKALD_Q_JAR, FLAG_SKALD_Q_JAR_DONE},
    {sNbQ_Deadline, FLAG_SKALD_Q_DEADLINE, FLAG_SKALD_Q_DEADLINE_DONE},
    {sNbQ_Depth, FLAG_SKALD_Q_DEPTH, FLAG_SKALD_Q_DEPTH_DONE},
    {sNbQ_Frost, FLAG_SKALD_Q_FROST, FLAG_SKALD_Q_FROST_DONE},
    {sNbQ_Corner, FLAG_SKALD_Q_CORNER, FLAG_SKALD_Q_CORNER_DONE},
    {sNbQ_Roost, FLAG_SKALD_Q_ROOST, FLAG_SKALD_Q_ROOST_DONE},
    {sNbQ_FirstOne, FLAG_SKALD_Q_FIRSTONE, FLAG_SKALD_Q_FIRSTONE_DONE},
    {sNbQ_Nest, FLAG_SKALD_Q_NEST, FLAG_SKALD_Q_NEST_DONE},
    {sNbQ_Seal, FLAG_SKALD_Q_SEAL, FLAG_SKALD_Q_SEAL_DONE},
    {sNbQ_Brass, FLAG_SKALD_Q_BRASS, FLAG_SKALD_Q_BRASS_DONE},
    {sNbQ_Rack, FLAG_SKALD_Q_RACK, FLAG_SKALD_Q_RACK_DONE},
    {sNbQ_Headwall, FLAG_SKALD_Q_HEADWALL, FLAG_SKALD_Q_HEADWALL_DONE},
    {sNbQ_Voucher, FLAG_SKALD_Q_VOUCHER, FLAG_SKALD_Q_VOUCHER_DONE},
    {sNbQ_BoardDrawer, FLAG_SKALD_Q_LABEL, FLAG_SKALD_Q_LABEL_DONE},
    {sNbQ_Step, FLAG_SKALD_Q_STEP, FLAG_SKALD_Q_STEP_DONE},
    {sNbQ_Scale, FLAG_SKALD_Q_SCALE, FLAG_SKALD_Q_SCALE_DONE},
};

static const u8 sNb_Margins_None[]  = _("The margins are in her hand, in a\nshorthand you can't read yet.\pIt gets easier the more of the\nregion you've read yourself.");
static const u8 sNb_Margins_Head[]  = _("THE MARGINS, in her hand:\p");
static const u8 *const sNbMargins[NB_MAX_BADGES] =
{
    COMPOUND_STRING("Count what is there. Not what you\nhoped was there. Then count again."),
    COMPOUND_STRING("A road is a wound that decided\nto stay open."),
    COMPOUND_STRING("Water remembers every shortcut.\nIt will show you, in its own time."),
    COMPOUND_STRING("Nobody poisons a river on purpose.\nThey do it on schedule."),
    COMPOUND_STRING("The ground is honest. It can't be\nbribed. It can only be misread."),
    COMPOUND_STRING("The sea gives receipts.\nWe stopped reading them."),
    COMPOUND_STRING("A model is a promise about tomorrow\nmade by someone leaving today."),
    COMPOUND_STRING("If you can't fix it, write it down.\nSomeone will need to know it was there."),
};
static const u8 sNb_Notes_None[]   = _("Her field notes are in the same\nshorthand as the margins. Nothing\pof them reads yet. Earn the first\ncertification and look again.");
static const u8 sNb_Notes_Head[]   = _("HER FIELD NOTES, decoded:\p");
static const u8 sNb_Note_Forest[]  = _("FERNWICK, spring. 28 pairs of WINGULL\non the pond, 3 POLIWAG in the channel.\pAsk who dug the channel straight. Nobody\ndigs a channel straight for the frogs.");
static const u8 sNb_Note_Wetland[] = _("\pThe basin, after the first pulse.\nBrown water, not grey: that's soil from\pupstream, not the lake. Count the\nstakes. A stake is a promise.");
static const u8 sNb_Note_Water[]   = _("\pELVSUND. Six voices at the hall and\none ledger. The ledger wins because it\pdoesn't get tired. Make friends with it.\nSLUICE keeps it honest. Keep SLUICE.");
static const u8 sNb_Note_High[]    = _("\pHAUKFELL. The ground moved two metres\nthis year. I wrote SHIFTED. The grant\poffice wrote 'transitioning'. One of us\ngets paid for the word.");
static const u8 sNb_Note_Coast[]   = _("\pThe coast. Eleven fish, one length.\nA reef is a nursery is a shelf is a line.\pWatch the nouns change; the thing\ndoesn't. Drink HOLLIS's tea. Write anyway.");
static const u8 sNb_Note_Marsh[]   = _("\pThe marsh. 41. 41. 39. 40.\nIf you can read this page you've read\pall of them. Then you know what I\ndidn't say. Say it. -- H.");
static const u8 sNb_Margins_Last[]  = _("\pUnder the last of hers, the first\nline in your own hand, from the marsh:\pCOLLAPSING. Keystone failing.\nIt's true. That's all it has to be.");

static void NbAppendFlagState(u16 doneFlag, u16 startFlag, const u8 *doneWord)
{
    if (FlagGet(doneFlag))
        StringAppend(gStringVar4, doneWord);
    else if (startFlag != 0 && FlagGet(startFlag))
        StringAppend(gStringVar4, sNb_Started);
    else
        StringAppend(gStringVar4, sNb_Open);
}

static u32 NbBadgeCount(void)
{
    u32 i, n = 0;
    for (i = 0; i < NB_MAX_BADGES; i++)
        if (FlagGet(FLAG_BADGE01_GET + i))
            n++;
    return n;
}

void SkaldNotebookBuffer(void)
{
    u32 i;

    switch (gSpecialVar_0x8004)
    {
    case 0:
        if (FlagGet(FLAG_SKALDMERE_EPILOGUE_DONE))      StringCopy(gStringVar4, sNb_Assign_Post);
        else if (FlagGet(FLAG_SKALDMERE_CORDELIA_DONE)) StringCopy(gStringVar4, sNb_Assign_Stairs);
        else if (FlagGet(FLAG_SKALDMERE_FINALE_DONE))   StringCopy(gStringVar4, sNb_Assign_Aide);
        else if (FlagGet(FLAG_SKALDMERE_COASTAL_CERT))  StringCopy(gStringVar4, sNb_Assign_Marsh);
        else if (FlagGet(FLAG_SKALDMERE_HIGHLAND_CERT)) StringCopy(gStringVar4, sNb_Assign_Ferry);
        else if (FlagGet(FLAG_SKALDMERE_WATERSHED_CERT)) StringCopy(gStringVar4, sNb_Assign_Highland);
        else if (FlagGet(FLAG_SKALDMERE_WETLAND_CERT))  StringCopy(gStringVar4, sNb_Assign_River);
        else if (FlagGet(FLAG_SKALDMERE_FOREST_CERT))
        {
            if ((VarGet(VAR_SKALDMERE_CH2_EVIDENCE) >> 6) & 1)   StringCopy(gStringVar4, sNb_Assign_Report2);
            else if (FlagGet(FLAG_SKALDMERE_FLOODBASIN_ARRIVAL)) StringCopy(gStringVar4, sNb_Assign_Basin);
            else                                                 StringCopy(gStringVar4, sNb_Assign_Wetlands);
        }
        else if (FlagGet(FLAG_BADGE01_GET))             StringCopy(gStringVar4, sNb_Assign_Report1);
        else if (FlagGet(FLAG_SKALDMERE_STATION_BRIEF)) StringCopy(gStringVar4, sNb_Assign_Tarn);
        else if (FlagGet(FLAG_SKALD_NO_PARTNER_YET))    StringCopy(gStringVar4, sNb_Assign_Partner);
        else                                            StringCopy(gStringVar4, sNb_Assign_Fernwick);
        break;
    case 1:
        StringCopy(gStringVar4, sNb_Certs_Head);
        StringAppend(gStringVar4, sNb_Cert_Forest);    NbAppendFlagState(FLAG_SKALDMERE_FOREST_CERT, 0, sNb_Signed);
        StringAppend(gStringVar4, sNb_Page);
        StringAppend(gStringVar4, sNb_Cert_Wetland);   NbAppendFlagState(FLAG_SKALDMERE_WETLAND_CERT, 0, sNb_Signed);
        StringAppend(gStringVar4, sNb_Newline);
        StringAppend(gStringVar4, sNb_Cert_Watershed); NbAppendFlagState(FLAG_SKALDMERE_WATERSHED_CERT, 0, sNb_Signed);
        StringAppend(gStringVar4, sNb_Page);
        StringAppend(gStringVar4, sNb_Cert_Highland);  NbAppendFlagState(FLAG_SKALDMERE_HIGHLAND_CERT, 0, sNb_Signed);
        StringAppend(gStringVar4, sNb_Newline);
        StringAppend(gStringVar4, sNb_Cert_Coastal);   NbAppendFlagState(FLAG_SKALDMERE_COASTAL_CERT, 0, sNb_Signed);
        StringAppend(gStringVar4, sNb_Page);
        StringAppend(gStringVar4, sNb_Clearances);
        ConvertIntToDecimalStringN(gStringVar1, NbBadgeCount(), STR_CONV_MODE_LEFT_ALIGN, 1);
        StringAppend(gStringVar4, gStringVar1);
        StringAppend(gStringVar4, sNb_Of8);
        {
            static const u16 sExamFlags[8] = {FLAG_SKALD_EXAM_1, FLAG_SKALD_EXAM_2, FLAG_SKALD_EXAM_3, FLAG_SKALD_EXAM_4, FLAG_SKALD_EXAM_5, FLAG_SKALD_EXAM_6, FLAG_SKALD_EXAM_7, FLAG_SKALD_EXAM_8};
            u32 right = 0;
            for (i = 0; i < 8; i++)
                if (FlagGet(sExamFlags[i])) right++;
            StringAppend(gStringVar4, sNb_Exams);
            ConvertIntToDecimalStringN(gStringVar1, right, STR_CONV_MODE_LEFT_ALIGN, 1);
            StringAppend(gStringVar4, gStringVar1);
            StringAppend(gStringVar4, sNb_OfEightPlain);
            if (FlagGet(FLAG_SKALD_SECOND))
            {
                static const u16 sSecondFlags[7] = {FLAG_SKALD_SECOND_0, FLAG_SKALD_SECOND_1, FLAG_SKALD_SECOND_2, FLAG_SKALD_SECOND_3, FLAG_SKALD_SECOND_4, FLAG_SKALD_SECOND_5, FLAG_SKALD_SECOND_6};
                u32 again = 0;
                for (i = 0; i < 7; i++)
                    if (FlagGet(sSecondFlags[i])) again++;
                StringAppend(gStringVar4, sNb_Second);
                ConvertIntToDecimalStringN(gStringVar1, again, STR_CONV_MODE_LEFT_ALIGN, 1);
                StringAppend(gStringVar4, gStringVar1);
                StringAppend(gStringVar4, sNb_OfSeven);
            }
        }
        break;
    case 2:
    {
        // Open quests in full, then a count of the finished ones: the list is
        // long enough now that printing every entry could overrun gStringVar4.
        u32 open = 0, done = 0;
        StringCopy(gStringVar4, sNb_Quests_Head);
        for (i = 0; i < ARRAY_COUNT(sNbQuests); i++)
        {
            if (FlagGet(sNbQuests[i].doneFlag))
            {
                done++;
                continue;
            }
            if (sNbQuests[i].startFlag != 0 && !FlagGet(sNbQuests[i].startFlag))
                continue;
            if (open >= 14)
                continue;
            if (open)
                StringAppend(gStringVar4, (open & 1) ? sNb_Newline : sNb_Page);
            StringAppend(gStringVar4, sNbQuests[i].name);
            StringAppend(gStringVar4, sNb_Started);
            open++;
        }
        if (open == 0)
            StringAppend(gStringVar4, sNb_Quests_NoneOpen);
        StringAppend(gStringVar4, sNb_Quests_Finished);
        ConvertIntToDecimalStringN(gStringVar1, done, STR_CONV_MODE_LEFT_ALIGN, 2);
        StringAppend(gStringVar4, gStringVar1);
        StringAppend(gStringVar4, sNb_Quests_Of);
        ConvertIntToDecimalStringN(gStringVar1, ARRAY_COUNT(sNbQuests), STR_CONV_MODE_LEFT_ALIGN, 2);
        StringAppend(gStringVar4, gStringVar1);
        StringAppend(gStringVar4, sNb_Quests_Dot);
        break;
    }
    case 4:
        if (!FlagGet(FLAG_SKALDMERE_FOREST_CERT))
        {
            StringCopy(gStringVar4, sNb_Notes_None);
            break;
        }
        StringCopy(gStringVar4, sNb_Notes_Head);
        StringAppend(gStringVar4, sNb_Note_Forest);
        if (FlagGet(FLAG_SKALDMERE_WETLAND_CERT))   StringAppend(gStringVar4, sNb_Note_Wetland);
        if (FlagGet(FLAG_SKALDMERE_WATERSHED_CERT)) StringAppend(gStringVar4, sNb_Note_Water);
        if (FlagGet(FLAG_SKALDMERE_HIGHLAND_CERT))  StringAppend(gStringVar4, sNb_Note_High);
        if (FlagGet(FLAG_SKALDMERE_COASTAL_CERT))   StringAppend(gStringVar4, sNb_Note_Coast);
        if (FlagGet(FLAG_SKALDMERE_FINALE_DONE))    StringAppend(gStringVar4, sNb_Note_Marsh);
        break;
    default:
        if (NbBadgeCount() == 0)
        {
            StringCopy(gStringVar4, sNb_Margins_None);
            break;
        }
        StringCopy(gStringVar4, sNb_Margins_Head);
        for (i = 0; i < NbBadgeCount(); i++)
        {
            if (i != 0)
                StringAppend(gStringVar4, sNb_Page);
            StringAppend(gStringVar4, sNbMargins[i]);
        }
        if (FlagGet(FLAG_SKALDMERE_FINALE_DONE))
            StringAppend(gStringVar4, sNb_Margins_Last);
        break;
    }
}


// ---------------------------------------------------------------------------
// The survey stakes (§13 fix E, the field half). One red-cloth stake per
// zone reads the chapter's evidence bitfield back to the player: what has been
// logged, what is still to read, and -- when every counted bit is set -- that
// the place is ready to be named. in: gSpecialVar_0x8004 = zone (sStakes
// index). out: gStringVar4.
// ---------------------------------------------------------------------------
struct SkaldStakeItem { u8 bit; const u8 *name; };
struct SkaldStake { const u8 *zone; u16 var; u8 count; const struct SkaldStakeItem *items; };

static const struct SkaldStakeItem sStakeReedmere[] = {
    {0, COMPOUND_STRING("the reed roots")}, {1, COMPOUND_STRING("the crate imprint")}, {2, COMPOUND_STRING("the trade tag")},
    {6, COMPOUND_STRING("the residue")}, {7, COMPOUND_STRING("the pipe")}, {8, COMPOUND_STRING("the manifest")},
};
static const struct SkaldStakeItem sStakeCorridor[] = {
    {9, COMPOUND_STRING("the culvert")}, {10, COMPOUND_STRING("the works crew")},
};
static const struct SkaldStakeItem sStakeLeirvik[] = {
    {0, COMPOUND_STRING("the discharge pipe")}, {1, COMPOUND_STRING("the sheen")}, {2, COMPOUND_STRING("the dead reeds")},
    {3, COMPOUND_STRING("the WOOPER")}, {4, COMPOUND_STRING("the sick MAGIKARP")}, {5, COMPOUND_STRING("the booth")},
};
static const struct SkaldStakeItem sStakeElvsund[] = {
    {0, COMPOUND_STRING("the cut")}, {1, COMPOUND_STRING("the broken dam")}, {2, COMPOUND_STRING("the bloom")},
    {3, COMPOUND_STRING("the clean reach")}, {4, COMPOUND_STRING("the Board's sign")}, {5, COMPOUND_STRING("HARLAND")},
};
static const struct SkaldStakeItem sStakeHaukfell[] = {
    {0, COMPOUND_STRING("the sunk ponds")}, {1, COMPOUND_STRING("the drunk trees")}, {2, COMPOUND_STRING("ILEX's band")},
    {3, COMPOUND_STRING("the lowlander")}, {4, COMPOUND_STRING("the drill sign")}, {5, COMPOUND_STRING("the homesteader")},
};
static const struct SkaldStakeItem sStakeCoast[] = {
    {0, COMPOUND_STRING("the dredge scar")}, {1, COMPOUND_STRING("the urchin barren")}, {2, COMPOUND_STRING("the catch, one size")},
    {3, COMPOUND_STRING("the empty pilings")}, {4, COMPOUND_STRING("the plaque")}, {5, COMPOUND_STRING("HARLAND's boat")},
};
static const struct SkaldStakeItem sStakeMarsh[] = {
    {0, COMPOUND_STRING("the drying channel")}, {1, COMPOUND_STRING("the dead reeds")}, {2, COMPOUND_STRING("the graded edge")},
    {3, COMPOUND_STRING("the POLIWAG")},
};
static const struct SkaldStake sStakes[] = {
    {COMPOUND_STRING("REEDMERE"),  VAR_SKALDMERE_CH1_EVIDENCE, 6, sStakeReedmere},
    {COMPOUND_STRING("HOLLOWBEND"), VAR_SKALDMERE_CH1_EVIDENCE, 2, sStakeCorridor},
    {COMPOUND_STRING("LEIRVIK"),   VAR_SKALDMERE_CH2_EVIDENCE, 6, sStakeLeirvik},
    {COMPOUND_STRING("ELVSUND"),   VAR_SKALDMERE_CH3_EVIDENCE, 6, sStakeElvsund},
    {COMPOUND_STRING("HAUKFELL"),  VAR_SKALDMERE_CH4_EVIDENCE, 6, sStakeHaukfell},
    {COMPOUND_STRING("MEREHOLT COAST"), VAR_SKALDMERE_CH6_EVIDENCE, 6, sStakeCoast},
    {COMPOUND_STRING("KEYSTONE MARSH"), VAR_SKALDMERE_CH7_EVIDENCE, 4, sStakeMarsh},
};
static const u8 sStake_Head[]    = _("SURVEY STAKE -- ");
static const u8 sStake_Cloth[]   = _("\nRed cloth at the top. Yours.");
static const u8 sStake_Read[]    = _("\pRead: ");
static const u8 sStake_ToRead[]  = _("\pStill to read: ");
static const u8 sStake_None[]    = _("nothing yet");
static const u8 sStake_Comma[]   = _(", ");
static const u8 sStake_Dot[]     = _(".");
static const u8 sStake_AllRead[] = _("\pAll of it read. Put a name on it.");

void SkaldSurveyStake(void)
{
    const struct SkaldStake *z;
    u32 i, v, n, got;

    if (gSpecialVar_0x8004 >= ARRAY_COUNT(sStakes))
        gSpecialVar_0x8004 = 0;
    z = &sStakes[gSpecialVar_0x8004];
    v = VarGet(z->var);
    StringCopy(gStringVar4, sStake_Head);
    StringAppend(gStringVar4, z->zone);
    StringAppend(gStringVar4, sStake_Cloth);
    for (got = 0, n = 0, i = 0; i < z->count; i++)
        if ((v >> z->items[i].bit) & 1)
            got++;
    StringAppend(gStringVar4, sStake_Read);
    for (n = 0, i = 0; i < z->count; i++)
    {
        if (!((v >> z->items[i].bit) & 1))
            continue;
        if (n++) StringAppend(gStringVar4, sStake_Comma);
        StringAppend(gStringVar4, z->items[i].name);
    }
    if (n == 0) StringAppend(gStringVar4, sStake_None);
    StringAppend(gStringVar4, sStake_Dot);
    if (got == z->count)
    {
        StringAppend(gStringVar4, sStake_AllRead);
        return;
    }
    StringAppend(gStringVar4, sStake_ToRead);
    for (n = 0, i = 0; i < z->count; i++)
    {
        if ((v >> z->items[i].bit) & 1)
            continue;
        if (n++) StringAppend(gStringVar4, sStake_Comma);
        StringAppend(gStringVar4, z->items[i].name);
    }
    StringAppend(gStringVar4, sStake_Dot);
}

// ---------------------------------------------------------------------------
// Route-trainer rematch tiers (tools/skald/rematch_tiers.py generates the
// scripts and parties). A defeated trainer, talked to again, offers the
// lowest unfought tier the player's clearances unlock: tier 2 at three,
// 3 at five, 4 at seven, 5 after the epilogue; each tier is fought once.
// Only reached when the trainer is already defeated (the first win runs the
// trainerbattle_single continue script instead). Returns the highest unlocked
// tier, or 0.
// ---------------------------------------------------------------------------
u16 SkaldRematchTier(void)
{
    u32 n;

    if (FlagGet(FLAG_SKALDMERE_EPILOGUE_DONE))
        return 5;
    n = NbBadgeCount();
    if (n >= 7) return 4;
    if (n >= 5) return 3;
    if (n >= 3) return 2;
    return 0;
}
