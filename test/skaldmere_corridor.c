#include "global.h"
#include "test/test.h"

u16 SkaldmereClassifyCorridor(void);

// §06 zone 8 / Chapter 7 (the climax): the Last Corridor's keystone marsh is
// COLLAPSING -- the Poliwag-line keystone failing, the headwater web coming
// apart. The survey is the final credential; the player reads it as the mentor
// who taught them the verb dies in front of them, and testifies anyway.
TEST("Last Corridor: classifier reads as Collapsing (the keystone marsh failing)")
{
    // SURVEY_COLLAPSING == 2 in include/survey.h.
    EXPECT_EQ(SkaldmereClassifyCorridor(), 2);
}
