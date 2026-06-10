#include "global.h"
#include "survey.h"

// Turn what the player observed into an ecological state, worst case first.
// This single rule is what the whole survey verb hangs on; it encodes the
// state table in design §06. Order matters: a place can show several warning
// signs at once, and it should be read at its worst honest level.
enum SurveyState ClassifySurveyState(const struct SurveySignals *signals)
{
    // Past the point of no return: the keystone is gone, so the place has
    // already flipped to something simpler. Nothing else can outvote that.
    if (signals->keystone == KEYSTONE_ABSENT)
        return SURVEY_SHIFTED;

    // Coming apart: the keystone is failing, or the web has collapsed into one
    // swarming tier, or the sensitive species are gone and damage is showing.
    if (signals->keystone == KEYSTONE_FAILING
     || signals->abundance == ABUNDANCE_MESOPREDATOR_SWARM
     || (!signals->sensitiveGuildPresent && signals->disturbanceSigns))
        return SURVEY_COLLAPSING;

    // Strained but recoverable: the keystone is struggling, the sensitive
    // species are thinning, the top of the web is missing, the counts are
    // tilting, or early damage is showing. Any one of these is enough.
    if (signals->keystone == KEYSTONE_STRAINED
     || !signals->sensitiveGuildPresent
     || !signals->apexPresent
     || signals->abundance == ABUNDANCE_SKEWED
     || signals->disturbanceSigns)
        return SURVEY_STRESSED;

    // Keystone breeding, sensitive guild present, apex present, balanced counts,
    // no damage. The place is whole.
    return SURVEY_REFERENCE;
}

// What the situation actually asks of the player at each state (§10). Note the
// last one: a shifted place is not a puzzle to solve, it is a loss to record.
enum SurveyResponse RecommendedResponse(enum SurveyState state)
{
    switch (state)
    {
    case SURVEY_REFERENCE:  return RESPONSE_RECORD;
    case SURVEY_STRESSED:   return RESPONSE_RESTRAIN;
    case SURVEY_COLLAPSING: return RESPONSE_INTERVENE;
    case SURVEY_SHIFTED:    return RESPONSE_WITNESS;
    default:                return RESPONSE_RECORD;
    }
}
