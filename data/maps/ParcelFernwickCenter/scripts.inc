ParcelFernwickCenter_MapScripts::
# 2 "data/maps/ParcelFernwickCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFernwickCenter_OnTransition
	.byte 0


ParcelFernwickCenter_OnTransition::
# 6 "data/maps/ParcelFernwickCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_FERNWICK
	end


ParcelFernwickCenter_Nurse::
# 11 "data/maps/ParcelFernwickCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_FC_NURSE
# 12 "data/maps/ParcelFernwickCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/ParcelFernwickCenter/scripts.pory"
	waitmessage
# 14 "data/maps/ParcelFernwickCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/ParcelFernwickCenter/scripts.pory"
	release
	end


ParcelFernwickCenter_Trainer::
# 20 "data/maps/ParcelFernwickCenter/scripts.pory"
	lock
# 21 "data/maps/ParcelFernwickCenter/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/ParcelFernwickCenter/scripts.pory"
	release
	end


ParcelFernwickCenter_Trainer_Text_0:
# 22 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "BOY: The nurse healed my WOOPER. Then\n"
	.string "it got sick again.\p"
	.string "It's a WOOPER thing, apparently.$"
