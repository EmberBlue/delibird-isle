#include "global.h"
#include "main.h"
#include "credits.h"
#include "event_data.h"
#include "hall_of_fame.h"
#include "load_save.h"
#include "overworld.h"
#include "save.h"
#include "script_pokemon_util.h"
#include "tv.h"
#include "constants/heal_locations.h"

// Skaldmere's game clear: no Hall of Fame. The epilogue's last scene (the
// Route 1 bridge) calls this after a fade to black. Heal, mark the clear,
// point "continue" at Fernwick, save, and roll the credits; the credits end in
// a soft reset, so the next continue lands at the Fernwick Center.
void SkaldGameClear(void)
{
    HealPlayerParty();

    if (FlagGet(FLAG_SYS_GAME_CLEAR) == TRUE)
    {
        gHasHallOfFameRecords = TRUE;
    }
    else
    {
        gHasHallOfFameRecords = FALSE;
        FlagSet(FLAG_SYS_GAME_CLEAR);
    }

    if (GetGameStat(GAME_STAT_FIRST_HOF_PLAY_TIME) == 0)
        SetGameStat(GAME_STAT_FIRST_HOF_PLAY_TIME, (gSaveBlock2Ptr->playTimeHours << 16) | (gSaveBlock2Ptr->playTimeMinutes << 8) | gSaveBlock2Ptr->playTimeSeconds);

    SetContinueGameWarpStatus();
    SetContinueGameWarpToHealLocation(HEAL_LOCATION_PARCEL_FERNWICK);

    // If the save fails on damaged sectors, TrySavingData has already switched
    // to the save-failed screen, which continues into this callback.
    gGameContinueCallback = CB2_StartCreditsSequence;
    if (TrySavingData(SAVE_NORMAL) == SAVE_STATUS_ERROR && gDamagedSaveSectors != 0)
        return;

    SetMainCallback2(CB2_StartCreditsSequence);
}

int GameClear(void)
{
    int i;
    bool32 ribbonGet;
    struct RibbonCounter {
        u8 partyIndex;
        u8 count;
    } ribbonCounts[6];

    HealPlayerParty();

    if (FlagGet(FLAG_SYS_GAME_CLEAR) == TRUE)
    {
        gHasHallOfFameRecords = TRUE;
    }
    else
    {
        gHasHallOfFameRecords = FALSE;
        FlagSet(FLAG_SYS_GAME_CLEAR);
    }

    if (GetGameStat(GAME_STAT_FIRST_HOF_PLAY_TIME) == 0)
        SetGameStat(GAME_STAT_FIRST_HOF_PLAY_TIME, (gSaveBlock2Ptr->playTimeHours << 16) | (gSaveBlock2Ptr->playTimeMinutes << 8) | gSaveBlock2Ptr->playTimeSeconds);

    SetContinueGameWarpStatus();

    if (gSaveBlock2Ptr->playerGender == MALE)
        SetContinueGameWarpToHealLocation(HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F);
    else
        SetContinueGameWarpToHealLocation(HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F);

    ribbonGet = FALSE;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];

        ribbonCounts[i].partyIndex = i;
        ribbonCounts[i].count = 0;

        if (GetMonData(mon, MON_DATA_SANITY_HAS_SPECIES)
         && !GetMonData(mon, MON_DATA_SANITY_IS_EGG)
         && !GetMonData(mon, MON_DATA_CHAMPION_RIBBON))
        {
            u8 val[1] = {TRUE};
            SetMonData(mon, MON_DATA_CHAMPION_RIBBON, val);
            ribbonCounts[i].count = GetRibbonCount(mon);
            ribbonGet = TRUE;
        }
    }

    if (ribbonGet == TRUE)
    {
        IncrementGameStat(GAME_STAT_RECEIVED_RIBBONS);
        FlagSet(FLAG_SYS_RIBBON_GET);

        for (i = 1; i < 6; i++)
        {
            if (ribbonCounts[i].count > ribbonCounts[0].count)
            {
                struct RibbonCounter prevBest = ribbonCounts[0];
                ribbonCounts[0] = ribbonCounts[i];
                ribbonCounts[i] = prevBest;
            }
        }

        if (ribbonCounts[0].count > NUM_CUTIES_RIBBONS)
        {
            TryPutSpotTheCutiesOnAir(&gPlayerParty[ribbonCounts[0].partyIndex], MON_DATA_CHAMPION_RIBBON);
        }
    }

    SetMainCallback2(CB2_DoHallOfFameScreen);
    return 0;
}

bool8 SetCB2WhiteOut(void)
{
    SetMainCallback2(CB2_WhiteOut);
    return FALSE;
}
