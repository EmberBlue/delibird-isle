#include "global.h"
#include "test/test.h"

u16 SkaldmereClassifyCoast(void);

// §06 zone 7 / Chapter 6: the Industrial Coast is COLLAPSING -- a live trophic
// cascade (overfishing's mesopredator release; the keystone grazer failing).
// The same state the Floodbasin read, by a different and more dramatic
// mechanism: the web coming apart in real time. Act now or lose it.
TEST("Coast: classifier reads as Collapsing (trophic cascade in motion)")
{
    // SURVEY_COLLAPSING == 2 in include/survey.h.
    EXPECT_EQ(SkaldmereClassifyCoast(), 2);
}
