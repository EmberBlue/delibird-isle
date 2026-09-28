ParcelFernwickCenter_MapScripts::
# 2 "data/maps/ParcelFernwickCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFernwickCenter_OnTransition
	.byte 0


ParcelFernwickCenter_OnTransition::
# 6 "data/maps/ParcelFernwickCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PARCEL_FERNWICK
	end


ParcelFernwickCenter_Trainer::
# 11 "data/maps/ParcelFernwickCenter/scripts.pory"
	lock
# 12 "data/maps/ParcelFernwickCenter/scripts.pory"
	faceplayer
# 13 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickCenter/scripts.pory"
	release
	end


ParcelFernwickCenter_Trainer_Text_0:
# 13 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "BOY: The nurse healed my WOOPER. Then\n"
	.string "it got sick again.\p"
	.string "It's a WOOPER thing, apparently.$"
