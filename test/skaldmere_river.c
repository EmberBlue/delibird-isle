#include "global.h"
#include "test/test.h"

u16 SkaldmereClassifyRiver(void);

// §06 zone 4 / Chapter 3: the river is Stressed -- strained keystone, the
// sensitive guild thinning but present, visible alteration -- one step worse
// than Reference, one step better than the Floodbasin's Collapsing. The state
// where intervention still works, which is the lesson the chapter teaches.
TEST("River: classifier reads as Stressed (window still open)")
{
    // SURVEY_STRESSED == 1 in include/survey.h.
    EXPECT_EQ(SkaldmereClassifyRiver(), 1);
}
