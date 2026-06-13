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
