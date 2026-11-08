ParcelRiverBoard_MapScripts::
	.byte 0


ParcelRiverBoard_Sluice::
# 10 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 11 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 12 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverBoard_Sluice_2
ParcelRiverBoard_Sluice_1:
# 15 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, ParcelRiverBoard_Sluice_5
# 25 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_2, MSGBOX_DEFAULT
# 26 "data/maps/ParcelRiverBoard/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM4, ParcelRiverBoard_Sluice_Text_3
# 27 "data/maps/ParcelRiverBoard/scripts.pory"
	setflag FLAG_BADGE04_GET
# 28 "data/maps/ParcelRiverBoard/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 29 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/ParcelRiverBoard/scripts.pory"
	giveitem ITEM_HM04
# 31 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_5, MSGBOX_DEFAULT
# 32 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_2:
# 13 "data/maps/ParcelRiverBoard/scripts.pory"
	goto ParcelRiverBoard_Sluice_Rematch
	goto ParcelRiverBoard_Sluice_1

ParcelRiverBoard_Sluice_5:
# 16 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverBoard_Sluice_8
# 21 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_1, MSGBOX_DEFAULT
# 22 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_8:
# 17 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Clerk::
# 37 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 38 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 39 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoard_Clerk_2
# 44 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_1, MSGBOX_DEFAULT
# 45 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Clerk_2:
# 40 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Ratepayer::
# 49 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 50 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoard_Ratepayer_2
# 56 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Ratepayer_2:
# 52 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Meterman::
# 61 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 62 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 63 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoard_Meterman_2
# 68 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Meterman_2:
# 64 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Ledger::
# 73 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ledger_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoard_Sluice_Rematch::
# 79 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 80 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 81 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Rematch_Text_0, MSGBOX_YESNO
# 82 "data/maps/ParcelRiverBoard/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverBoard_Sluice_Rematch_2
# 87 "data/maps/ParcelRiverBoard/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM4_R, ParcelRiverBoard_Sluice_Rematch_Text_2
# 88 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Rematch_Text_3, MSGBOX_DEFAULT
# 89 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_Rematch_2:
# 83 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Rematch_Text_1, MSGBOX_DEFAULT
# 84 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Sluice_Text_0:
# 17 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: STRESSED. I read your filing.\n"
	.string "I'd have rated it the same, and I'd have\l"
	.string "been overruled.\p"
	.string "You weren't. Interesting.$"

ParcelRiverBoard_Sluice_Text_1:
# 21 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Mind the cut upstream. The\n"
	.string "Board rated it an improvement. I\l"
	.string "metered it. The water disagrees with\l"
	.string "the rating.$"

ParcelRiverBoard_Sluice_Text_2:
# 25 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Sluice Division. Every drop\n"
	.string "that crosses this spine is metered,\l"
	.string "rated, and accounted to someone.\p"
	.string "You want clearance to work this\n"
	.string "watershed? Show me you read a ledger as\l"
	.string "well as a current.$"

ParcelRiverBoard_Sluice_Text_3:
# 26 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: …Balanced. Down to the drop.\n"
	.string "The crossing's yours.$"

ParcelRiverBoard_Sluice_Text_4:
# 29 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: That's your Sluice clearance.\n"
	.string "Line item 04. It certifies you fit to\l"
	.string "move what the river leaves in the way.\l"
	.string "Signed, sealed, on the ledger.$"

ParcelRiverBoard_Sluice_Text_5:
# 31 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: STRENGTH. Shoulders a boulder\n"
	.string "out of a channel where it has no\l"
	.string "business sitting.\p"
	.string "The river drops plenty of those. So\n"
	.string "does the Board.$"

ParcelRiverBoard_Clerk_Text_0:
# 40 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations reposted with six\n"
	.string "names under them. Objections reopened.\l"
	.string "The Phase 2 file came off the shelf and\l"
	.string "into the hearing. You can read it now.\l"
	.string "Everyone can. Nobody asks.$"

ParcelRiverBoard_Clerk_Text_1:
# 44 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations are posted.\n"
	.string "Objections are closed. The councilman's\l"
	.string "Phase 2 file is on the shelf and no, you\l"
	.string "can't read it. Ratepayers only. You're\l"
	.string "not a ratepayer.$"

ParcelRiverBoard_Ratepayer_Text_0:
# 52 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered, still. The rate\n"
	.string "came down a page. I pay for water that\l"
	.string "used to be free and now it's cheaper.\l"
	.string "I'm told that's a win. I'm trying to feel\l"
	.string "it.$"

ParcelRiverBoard_Ratepayer_Text_1:
# 56 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered since spring. I\n"
	.string "pay for water that used to run past my\l"
	.string "gate for nothing.\p"
	.string "The FOUNDATION says the meters are\n"
	.string "fair. The FOUNDATION sells the meters.$"

ParcelRiverBoard_Meterman_Text_0:
# 64 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Fourteen plots, fourteen\n"
	.string "meters, hourly, and the readings go to\l"
	.string "SLUICE first now, not the coast office.\l"
	.string "She reads them herself. She's a slow\l"
	.string "reader. Deliberately.$"

ParcelRiverBoard_Meterman_Text_1:
# 68 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Fourteen plots, fourteen\n"
	.string "meters, hourly. The readings go to the\l"
	.string "coast office. SLUICE keeps a copy.\l"
	.string "She's not supposed to. Don't tell her I\l"
	.string "said.$"

ParcelRiverBoard_Ledger_Text_0:
# 73 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "THE ALLOCATION LEDGER. Plots 1-14,\n"
	.string "metered flow, rates. A column headed\l"
	.string "PHASE 2 -- UPSTREAM RESERVE. The\l"
	.string "reserve is the clean reach, allocated in\l"
	.string "full. To the Foundation.$"

ParcelRiverBoard_Sluice_Rematch_Text_0:
# 81 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: The hearing rated your filing. I\n"
	.string "metered it. For once the rating and the\l"
	.string "meter agree.\p"
	.string "I'd like a balance read at full flow. No\n"
	.string "clearance on the end of it. Will you?$"

ParcelRiverBoard_Sluice_Rematch_Text_1:
# 83 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Noted. The ledger keeps.$"

ParcelRiverBoard_Sluice_Rematch_Text_2:
# 87 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: …Balanced. Down to the drop,\n"
	.string "again.$"

ParcelRiverBoard_Sluice_Rematch_Text_3:
# 88 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Come back when the gauge\n"
	.string "moves. It will.$"
