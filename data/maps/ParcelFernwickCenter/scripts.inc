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
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickCenter_Trainer_2
# 27 "data/maps/ParcelFernwickCenter/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickCenter_Trainer_5
# 32 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Trainer_Text_2, MSGBOX_DEFAULT
# 33 "data/maps/ParcelFernwickCenter/scripts.pory"
	release
	end

ParcelFernwickCenter_Trainer_2:
# 23 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Trainer_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelFernwickCenter/scripts.pory"
	release
	end

ParcelFernwickCenter_Trainer_5:
# 28 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Trainer_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/ParcelFernwickCenter/scripts.pory"
	release
	end


ParcelFernwickCenter_ReadRack::
# 38 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_ReadRack_Text_0, MSGBOX_SIGN
	end


ParcelFernwickCenter_ReadMap::
# 43 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_ReadMap_Text_0, MSGBOX_SIGN
	end


ParcelFernwickCenter_Trainer_Text_0:
# 23 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "BOY: The nurse healed my WOOPER. It\n"
	.string "stayed healed this time. She says the\l"
	.string "water in the channel is better. The\l"
	.string "WOOPER says nothing. It's a WOOPER.$"

ParcelFernwickCenter_Trainer_Text_1:
# 28 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "BOY: My WOOPER's fine now. The nurse\n"
	.string "says the ones from upstream are fine\l"
	.string "and the ones from the landing aren't.\p"
	.string "She's started writing down which is\n"
	.string "which. She never did that before.$"

ParcelFernwickCenter_Trainer_Text_2:
# 32 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "BOY: The nurse healed my WOOPER. Then\n"
	.string "it got sick again.\p"
	.string "It's a WOOPER thing, apparently.$"

ParcelFernwickCenter_ReadRack_Text_0:
# 38 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "Leaflets: SURVEY CERTIFICATION --\n"
	.string "PRACTICAL EXAMS WEEKLY. Under it, in\l"
	.string "pen: ask for TARN. Don't smile.$"

ParcelFernwickCenter_ReadMap_Text_0:
# 43 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "A map of the district. Someone has\n"
	.string "drawn the marsh's old shoreline on it in\l"
	.string "pencil, a finger-width out from the\l"
	.string "printed one.$"
