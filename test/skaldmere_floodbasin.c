#include "global.h"
#include "test/test.h"

u16 SkaldmereClassifyFloodbasin(void);

TEST("Floodbasin: classifier reads as Collapsing (mesopredator swarm + damage)")
{
    // SURVEY_COLLAPSING == 2 in include/survey.h.
    EXPECT_EQ(SkaldmereClassifyFloodbasin(), 2);
}
