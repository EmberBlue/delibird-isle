ParcelRiverBoard_MapScripts::
	.byte 0


ParcelRiverBoard_Sluice::
# 10 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 11 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 12 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, ParcelRiverBoard_Sluice_2
# 22 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelRiverBoard/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM4, ParcelRiverBoard_Sluice_Text_3
# 24 "data/maps/ParcelRiverBoard/scripts.pory"
	setflag FLAG_BADGE04_GET
# 25 "data/maps/ParcelRiverBoard/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 26 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_4, MSGBOX_DEFAULT
# 27 "data/maps/ParcelRiverBoard/scripts.pory"
	giveitem ITEM_HM04
# 28 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_5, MSGBOX_DEFAULT
# 29 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_2:
# 13 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverBoard_Sluice_5
# 18 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_5:
# 14 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Clerk::
# 34 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 35 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 36 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_0, MSGBOX_DEFAULT
# 37 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Ratepayer::
# 41 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 42 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 43 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Meterman::
# 48 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 49 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 50 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Ledger::
# 55 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ledger_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoard_Sluice_Text_0:
# 14 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: STRESSED. I read your filing.\n"
	.string "I'd have rated it the same, and I'd have\l"
	.string "been overruled.\p"
	.string "You weren't. Interesting.$"

ParcelRiverBoard_Sluice_Text_1:
# 18 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Mind the cut upstream. The\n"
	.string "Board rated it an improvement. I\l"
	.string "metered it. The water disagrees with\l"
	.string "the rating.$"

ParcelRiverBoard_Sluice_Text_2:
# 22 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Sluice Division. Every drop\n"
	.string "that crosses this spine is metered,\l"
	.string "rated, and accounted to someone.\p"
	.string "You want clearance to work this\n"
	.string "watershed? Show me you read a ledger as\l"
	.string "well as a current.$"

ParcelRiverBoard_Sluice_Text_3:
# 23 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: …Balanced. Down to the drop.\n"
	.string "The crossing's yours.$"

ParcelRiverBoard_Sluice_Text_4:
# 26 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: That's your Sluice clearance.\n"
	.string "Line item 04. It certifies you fit to\l"
	.string "move what the river leaves in the way.\l"
	.string "Signed, sealed, on the ledger.$"

ParcelRiverBoard_Sluice_Text_5:
# 28 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: STRENGTH. Shoulders a boulder\n"
	.string "out of a channel where it has no\l"
	.string "business sitting.\p"
	.string "The river drops plenty of those. So\n"
	.string "does the Board.$"

ParcelRiverBoard_Clerk_Text_0:
# 36 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations are posted.\n"
	.string "Objections are closed. The councilman's\l"
	.string "Phase 2 file is on the shelf and no, you\l"
	.string "can't read it. Ratepayers only. You're\l"
	.string "not a ratepayer.$"

ParcelRiverBoard_Ratepayer_Text_0:
# 43 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered since spring. I\n"
	.string "pay for water that used to run past my\l"
	.string "gate for nothing.\p"
	.string "The FOUNDATION says the meters are\n"
	.string "fair. The FOUNDATION sells the meters.$"

ParcelRiverBoard_Meterman_Text_0:
# 50 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Fourteen plots, fourteen\n"
	.string "meters, hourly. The readings go to the\l"
	.string "coast office. SLUICE keeps a copy.\l"
	.string "She's not supposed to. Don't tell her I\l"
	.string "said.$"

ParcelRiverBoard_Ledger_Text_0:
# 55 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "THE ALLOCATION LEDGER. Plots 1-14,\n"
	.string "metered flow, rates. A column headed\l"
	.string "PHASE 2 -- UPSTREAM RESERVE. The\l"
	.string "reserve is the clean reach, allocated in\l"
	.string "full. To the Foundation.$"
