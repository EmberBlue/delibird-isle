#include "global.h"
#include "test/test.h"
#include "event_data.h"
#include "constants/vars.h"

// The §08 Act III script bridge (src/survey_scripting.c): training-task
// bitfield specials + the meadow classification. These are plain C — test
// them directly so in-game symptoms can be bisected to script vs. C.

void SkaldmereCertTaskMark(void);
u16 SkaldmereCertTaskGet(void);
u16 SkaldmereCertTaskCount(void);
u16 SkaldmereClassifyMeadow(void);

#define TASKS VAR_SKALDMERE_CERT_TASKS

TEST("Cert tasks: var roundtrip works in this context")
{
    VarSet(VAR_SKALDMERE_CERT_TASKS, 0);
    EXPECT_EQ(VarGet(VAR_SKALDMERE_CERT_TASKS), 0);
    VarSet(VAR_SKALDMERE_CERT_TASKS, 0x7F);
    EXPECT_EQ(VarGet(VAR_SKALDMERE_CERT_TASKS), 0x7F);
    VarSet(VAR_SKALDMERE_CERT_TASKS, 0);
}

TEST("Cert tasks: mark, get, count")
{
    VarSet(VAR_SKALDMERE_CERT_TASKS, 0);

    gSpecialVar_0x8005 = TASKS;
    gSpecialVar_0x8004 = 2;
    SkaldmereCertTaskMark();
    EXPECT_EQ(VarGet(TASKS), 1 << 2);

    gSpecialVar_0x8004 = 2;
    EXPECT_EQ(SkaldmereCertTaskGet(), 1);
    gSpecialVar_0x8004 = 3;
    EXPECT_EQ(SkaldmereCertTaskGet(), 0);

    gSpecialVar_0x8004 = 6;
    SkaldmereCertTaskMark();
    gSpecialVar_0x8004 = 0x7F;       // count mask
    EXPECT_EQ(SkaldmereCertTaskCount(), 2);

    VarSet(TASKS, 0x7F);
    gSpecialVar_0x8004 = 0x7F;
    EXPECT_EQ(SkaldmereCertTaskCount(), 7);

    VarSet(VAR_SKALDMERE_CERT_TASKS, 0);
}

TEST("Meadow classification returns Reference")
{
    EXPECT_EQ(SkaldmereClassifyMeadow(), 0); // SURVEY_REFERENCE
}
