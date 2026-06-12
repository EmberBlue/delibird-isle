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
#define CERT_TASK_BITS 7
#define CERT_ALL_MASK ((1 << CERT_TASK_BITS) - 1)

// in: gSpecialVar_0x8004 = bit index. Marks a training task done.
void SkaldmereCertTaskMark(void)
{
    VarSet(VAR_SKALDMERE_CERT_TASKS,
           VarGet(VAR_SKALDMERE_CERT_TASKS) | (1 << gSpecialVar_0x8004));
}

// in: gSpecialVar_0x8004 = bit index. Returns 0/1 (use with specialvar).
u16 SkaldmereCertTaskGet(void)
{
    return (VarGet(VAR_SKALDMERE_CERT_TASKS) >> gSpecialVar_0x8004) & 1;
}

// Returns the number of training tasks done, 0..7 (use with specialvar).
u16 SkaldmereCertTaskCount(void)
{
    u32 v = VarGet(VAR_SKALDMERE_CERT_TASKS) & CERT_ALL_MASK;
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
