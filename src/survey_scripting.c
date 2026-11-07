#include "global.h"
#include "event_data.h"
#include "string_util.h"
#include "survey.h"

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
static const u8 sNb_Of8[]              = _(" of 8.\nTARN MIRREN BREEN SLUICE\pVALE HARLAND VANE ILEX,\nin that order up the region.");
static const u8 sNb_Newline[]          = _("\n");
static const u8 sNb_Page[]             = _("\p");

static const u8 sNb_Quests_Head[]      = _("SIDE WORK\n");
static const u8 sNb_Done[]             = _("done");
static const u8 sNb_Started[]          = _("open");
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
        break;
    case 2:
        StringCopy(gStringVar4, sNb_Quests_Head);
        for (i = 0; i < ARRAY_COUNT(sNbQuests); i++)
        {
            if (i != 0)
                StringAppend(gStringVar4, (i & 1) ? sNb_Newline : sNb_Page);
            StringAppend(gStringVar4, sNbQuests[i].name);
            NbAppendFlagState(sNbQuests[i].doneFlag, sNbQuests[i].startFlag, sNb_Done);
        }
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
