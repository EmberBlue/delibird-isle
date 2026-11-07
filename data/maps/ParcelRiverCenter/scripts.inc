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
	msgbox ParcelRiverCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelRiverCenter/scripts.pory"
	release
	end


ParcelRiverCenter_Trainer_Text_0:
# 21 "data/maps/ParcelRiverCenter/scripts.pory"
	.string "YOUNGSTER: Everyone's MARILL comes in\n"
	.string "itchy after the lower river. The nurse\l"
	.string "has a cream for it now. A CREAM. For a\l"
	.string "river.$"
