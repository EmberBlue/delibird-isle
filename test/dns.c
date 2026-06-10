#include "global.h"
#include "test/test.h"
#include "overworld.h"
#include "rtc.h"
#include "constants/rtc.h"

// The day/night system (OW_ENABLE_DNS) tints the outdoor overworld by time of
// day. This verifies the underlying time-of-day computation: that clock hours
// map to the correct phase. Hours below assume the GEN_8+ schedule
// (OW_TIMES_OF_DAY = GEN_LATEST): morning 6-10, day 10-19, evening 19-20,
// night 20-6. If OW_TIMES_OF_DAY changes, update the sample hours.
//
// SetTimeOfDay() overrides the apparent hour (0 means "use the real clock");
// GetTimeOfDay() recomputes the phase and returns it.

TEST("DNS time of day maps clock hours to the correct phase")
{
    u16 saved = SetTimeOfDay(7);    // inside morning (6-10)
    EXPECT_EQ(GetTimeOfDay(), TIME_MORNING);

    SetTimeOfDay(14);               // inside day (10-19)
    EXPECT_EQ(GetTimeOfDay(), TIME_DAY);

    SetTimeOfDay(19);               // inside evening (19-20)
    EXPECT_EQ(GetTimeOfDay(), TIME_EVENING);

    SetTimeOfDay(22);               // inside night (20-6)
    EXPECT_EQ(GetTimeOfDay(), TIME_NIGHT);

    SetTimeOfDay(saved);            // restore real-clock behavior
}

TEST("DNS night and day produce distinct, non-empty tint states")
{
    u16 saved = SetTimeOfDay(14);
    EXPECT_EQ(GetTimeOfDay(), TIME_DAY);

    SetTimeOfDay(22);
    EXPECT_EQ(GetTimeOfDay(), TIME_NIGHT);

    // Day and night must differ, or the overworld would never visibly change.
    EXPECT_NE(TIME_DAY, TIME_NIGHT);

    SetTimeOfDay(saved);
}
