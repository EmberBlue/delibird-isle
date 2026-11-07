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
	msgbox ParcelCoastCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelCoastCenter/scripts.pory"
	release
	end


ParcelCoastCenter_Trainer_Text_0:
# 21 "data/maps/ParcelCoastCenter/scripts.pory"
	.string "SAILOR: Half the WINGULL in here come\n"
	.string "in with hooks in them. The other half\l"
	.string "come in with nothing in them. Starved.\l"
	.string "The nurse says it's a coastal thing.$"
