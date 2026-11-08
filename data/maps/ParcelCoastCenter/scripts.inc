ParcelCoastCenter_MapScripts::
# 3 "data/maps/ParcelCoastCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCoastCenter_OnTransition
# 4 "data/maps/ParcelCoastCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ParcelCoastCenter_OnTransition::
# 7 "data/maps/ParcelCoastCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_COAST
	end


ParcelCoastCenter_Nurse::
# 11 "data/maps/ParcelCoastCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/ParcelCoastCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/ParcelCoastCenter/scripts.pory"
	waitmessage
# 14 "data/maps/ParcelCoastCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/ParcelCoastCenter/scripts.pory"
	release
	end


ParcelCoastCenter_Trainer::
# 19 "data/maps/ParcelCoastCenter/scripts.pory"
	lock
# 20 "data/maps/ParcelCoastCenter/scripts.pory"
	faceplayer
# 21 "data/maps/ParcelCoastCenter/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCenter_Trainer_2
# 26 "data/maps/ParcelCoastCenter/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastCenter_Trainer_5
# 31 "data/maps/ParcelCoastCenter/scripts.pory"
	msgbox ParcelCoastCenter_Trainer_Text_2, MSGBOX_DEFAULT
# 32 "data/maps/ParcelCoastCenter/scripts.pory"
	release
	end

ParcelCoastCenter_Trainer_2:
# 22 "data/maps/ParcelCoastCenter/scripts.pory"
	msgbox ParcelCoastCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/ParcelCoastCenter/scripts.pory"
	release
	end

ParcelCoastCenter_Trainer_5:
# 27 "data/maps/ParcelCoastCenter/scripts.pory"
	msgbox ParcelCoastCenter_Trainer_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastCenter/scripts.pory"
	release
	end


ParcelCoastCenter_Trainer_Text_0:
# 22 "data/maps/ParcelCoastCenter/scripts.pory"
	.string "SAILOR: The WINGULL came in today\n"
	.string "without hooks in them. Three. The nurse\l"
	.string "didn't know what to do with a well bird.\l"
	.string "Neither did I.$"

ParcelCoastCenter_Trainer_Text_1:
# 27 "data/maps/ParcelCoastCenter/scripts.pory"
	.string "SAILOR: The nurse read your survey to\n"
	.string "the waiting room. The hooks, the\l"
	.string "starving. She said 'coastal thing', and\l"
	.string "then she said 'that's not a diagnosis, is\l"
	.string "it.'\p"
	.string "First time I've heard her say what\n"
	.string "something isn't.$"

ParcelCoastCenter_Trainer_Text_2:
# 31 "data/maps/ParcelCoastCenter/scripts.pory"
	.string "SAILOR: Half the WINGULL in here come\n"
	.string "in with hooks in them. The other half\l"
	.string "come in with nothing in them. Starved.\l"
	.string "The nurse says it's a coastal thing.$"
