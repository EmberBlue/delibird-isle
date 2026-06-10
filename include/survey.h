#ifndef GUARD_SURVEY_H
#define GUARD_SURVEY_H

// The survey system (design §06 + §10): the player reads a place's ecological
// state from what they observe, and records it. "Reading is the gameplay."
// This module is the core verb in pure form — the classifier that turns a set
// of observed signals into one of four states. Persistence, the survey UI, and
// state-driven encounters build on top of this later.

// The four states a survey point can be in, best to worst. A place degrades
// down this list over the course of the story (§06).
enum SurveyState
{
    SURVEY_REFERENCE,   // whole and healthy; the baseline
    SURVEY_STRESSED,    // strained, but it can still recover on its own
    SURVEY_COLLAPSING,  // the web is coming apart; act now or lose it
    SURVEY_SHIFTED,     // past the point of no return; it won't come back
    SURVEY_STATE_COUNT,
};

// How the keystone species is doing at this point (§06: the one species that
// holds the place together, e.g. the Poliwag line in the Last Corridor marsh).
enum KeystoneStanding
{
    KEYSTONE_BREEDING,  // present and reproducing
    KEYSTONE_STRAINED,  // present but struggling
    KEYSTONE_FAILING,   // barely hanging on
    KEYSTONE_ABSENT,    // gone
};

// The shape of the counts the player tallies. Lots of one thing is not health
// (§06): a single middling species swarming an empty web is collapse, not
// abundance.
enum SurveyAbundance
{
    ABUNDANCE_BALANCED,            // a full spread, top to bottom
    ABUNDANCE_SKEWED,             // tilted; some tiers thinning
    ABUNDANCE_MESOPREDATOR_SWARM, // one tier everywhere, nothing above or below
};

// What the place actually needs from the player, per state. Maps onto the
// certification competencies (§01/§10): record≈survey, restrain≈restraint,
// intervene≈response/remediation. Witness is the honest answer to a place
// that is already past saving — the clear-eyed grief the game is built on.
enum SurveyResponse
{
    RESPONSE_RECORD,     // Reference: log the healthy baseline and move on
    RESPONSE_RESTRAIN,   // Stressed: leave it alone; intervening would hurt
    RESPONSE_INTERVENE,  // Collapsing: act while it can still be pulled back
    RESPONSE_WITNESS,    // Shifted: it won't come back; document the loss
};

// Everything the player can observe at a survey point. The classifier needs
// nothing more than what is present and in what condition.
struct SurveySignals
{
    enum KeystoneStanding keystone;
    enum SurveyAbundance abundance;
    bool8 sensitiveGuildPresent; // amphibians / lichen — first to vanish (§06)
    bool8 apexPresent;           // a web complete enough to hold a top tier
    bool8 disturbanceSigns;      // deformities, contamination, physical damage
};

enum SurveyState ClassifySurveyState(const struct SurveySignals *signals);
enum SurveyResponse RecommendedResponse(enum SurveyState state);

#endif // GUARD_SURVEY_H
