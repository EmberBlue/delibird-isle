ParcelRiverCenter_MapScripts::
# 3 "data/maps/ParcelRiverCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelRiverCenter_OnTransition
# 4 "data/maps/ParcelRiverCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ParcelRiverCenter_OnTransition::
# 7 "data/maps/ParcelRiverCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_RIVER
	end


ParcelRiverCenter_Nurse::
# 11 "data/maps/ParcelRiverCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/ParcelRiverCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/ParcelRiverCenter/scripts.pory"
	waitmessage
# 14 "data/maps/ParcelRiverCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/ParcelRiverCenter/scripts.pory"
	release
	end


ParcelRiverCenter_Trainer::
# 19 "data/maps/ParcelRiverCenter/scripts.pory"
	lock
# 20 "data/maps/ParcelRiverCenter/scripts.pory"
	faceplayer
# 21 "data/maps/ParcelRiverCenter/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverCenter_Trainer_2
# 26 "data/maps/ParcelRiverCenter/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverCenter_Trainer_5
# 31 "data/maps/ParcelRiverCenter/scripts.pory"
	msgbox ParcelRiverCenter_Trainer_Text_2, MSGBOX_DEFAULT
# 32 "data/maps/ParcelRiverCenter/scripts.pory"
	release
	end

ParcelRiverCenter_Trainer_2:
# 22 "data/maps/ParcelRiverCenter/scripts.pory"
	msgbox ParcelRiverCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/ParcelRiverCenter/scripts.pory"
	release
	end

ParcelRiverCenter_Trainer_5:
# 27 "data/maps/ParcelRiverCenter/scripts.pory"
	msgbox ParcelRiverCenter_Trainer_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelRiverCenter/scripts.pory"
	release
	end


ParcelRiverCenter_Trainer_Text_0:
# 22 "data/maps/ParcelRiverCenter/scripts.pory"
	.string "YOUNGSTER: The MARILL don't come in\n"
	.string "itchy from the lower river so much. The\l"
	.string "nurse still has the cream. She says keep\l"
	.string "it. Water has a memory, she says.$"

ParcelRiverCenter_Trainer_Text_1:
# 27 "data/maps/ParcelRiverCenter/scripts.pory"
	.string "YOUNGSTER: The nurse's cream is for the\n"
	.string "itch from the lower river. Now there's a\l"
	.string "SWINUB in here from HAUKFELL with no\l"
	.string "itch and no cold either.\p"
	.string "It just lies by the stove. She says\n"
	.string "that's a mountain thing. She says\l"
	.string "everything's a thing.$"

ParcelRiverCenter_Trainer_Text_2:
# 31 "data/maps/ParcelRiverCenter/scripts.pory"
	.string "YOUNGSTER: Everyone's MARILL comes in\n"
	.string "itchy after the lower river. The nurse\l"
	.string "has a cream for it now. A CREAM. For a\l"
	.string "river.$"
