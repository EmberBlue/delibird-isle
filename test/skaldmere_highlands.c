#include "global.h"
#include "test/test.h"

u16 SkaldmereClassifyHighlands(void);

// §06 zone 5 / Chapter 4: the Highlands are SHIFTED -- the keystone (the frozen
// ground) is absent, the original cold community gone, the assembly simplified
// to upslope lowlanders. The first past-threshold reading in the game; the
// response the certification tests is witness, not repair (RESPONSE_WITNESS).
TEST("Highlands: classifier reads as Shifted (one-way; it won't come back)")
{
    // SURVEY_SHIFTED == 3 in include/survey.h.
    EXPECT_EQ(SkaldmereClassifyHighlands(), 3);
}
