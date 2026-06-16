#include "global.h"
#include "event_data.h"
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
