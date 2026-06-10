#include "global.h"
#include "test/test.h"
#include "survey.h"

// Verifies the survey-state classifier (the §06 state table). The classifier is
// the core "reading" verb: observed signals -> ecological state. These tests
// pin the rules so future changes to the encounter/UI layers can't silently
// change what a place "reads" as.

static struct SurveySignals Signals(enum KeystoneStanding keystone,
                                    enum SurveyAbundance abundance,
                                    bool8 sensitive, bool8 apex, bool8 damage)
{
    struct SurveySignals s;
    s.keystone = keystone;
    s.abundance = abundance;
    s.sensitiveGuildPresent = sensitive;
    s.apexPresent = apex;
    s.disturbanceSigns = damage;
    return s;
}

TEST("Survey: a whole place reads as Reference")
{
    struct SurveySignals s = Signals(KEYSTONE_BREEDING, ABUNDANCE_BALANCED, TRUE, TRUE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&s), SURVEY_REFERENCE);
}

TEST("Survey: a strained place reads as Stressed")
{
    // The keystone still breeds, but the sensitive guild is thinning.
    struct SurveySignals thinning = Signals(KEYSTONE_BREEDING, ABUNDANCE_BALANCED, FALSE, TRUE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&thinning), SURVEY_STRESSED);

    // A strained keystone alone is enough.
    struct SurveySignals strained = Signals(KEYSTONE_STRAINED, ABUNDANCE_BALANCED, TRUE, TRUE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&strained), SURVEY_STRESSED);

    // A missing apex alone is enough.
    struct SurveySignals noApex = Signals(KEYSTONE_BREEDING, ABUNDANCE_BALANCED, TRUE, FALSE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&noApex), SURVEY_STRESSED);
}

TEST("Survey: a web coming apart reads as Collapsing")
{
    // One tier swarming, nothing above or below.
    struct SurveySignals swarm = Signals(KEYSTONE_STRAINED, ABUNDANCE_MESOPREDATOR_SWARM, TRUE, FALSE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&swarm), SURVEY_COLLAPSING);

    // A failing keystone outranks a Stressed read.
    struct SurveySignals failing = Signals(KEYSTONE_FAILING, ABUNDANCE_BALANCED, TRUE, TRUE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&failing), SURVEY_COLLAPSING);

    // Sensitive guild gone AND damage showing.
    struct SurveySignals poisoned = Signals(KEYSTONE_BREEDING, ABUNDANCE_BALANCED, FALSE, TRUE, TRUE);
    EXPECT_EQ(ClassifySurveyState(&poisoned), SURVEY_COLLAPSING);
}

TEST("Survey: a place past the threshold reads as Shifted")
{
    // Keystone gone outranks everything else, even otherwise-healthy signals.
    struct SurveySignals gone = Signals(KEYSTONE_ABSENT, ABUNDANCE_BALANCED, TRUE, TRUE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&gone), SURVEY_SHIFTED);
}

TEST("Survey: abundance is not health")
{
    // The §06 inversion of the usual Pokemon reflex: a swarming route is
    // collapsing, a quiet balanced one is the healthy baseline.
    struct SurveySignals swarm = Signals(KEYSTONE_BREEDING, ABUNDANCE_MESOPREDATOR_SWARM, TRUE, TRUE, FALSE);
    struct SurveySignals balanced = Signals(KEYSTONE_BREEDING, ABUNDANCE_BALANCED, TRUE, TRUE, FALSE);
    EXPECT_EQ(ClassifySurveyState(&swarm), SURVEY_COLLAPSING);
    EXPECT_EQ(ClassifySurveyState(&balanced), SURVEY_REFERENCE);
}

TEST("Survey: recommended response matches the state")
{
    EXPECT_EQ(RecommendedResponse(SURVEY_REFERENCE), RESPONSE_RECORD);
    EXPECT_EQ(RecommendedResponse(SURVEY_STRESSED), RESPONSE_RESTRAIN);
    EXPECT_EQ(RecommendedResponse(SURVEY_COLLAPSING), RESPONSE_INTERVENE);
    // A shifted place is a loss to record, not a puzzle to solve.
    EXPECT_EQ(RecommendedResponse(SURVEY_SHIFTED), RESPONSE_WITNESS);
}
