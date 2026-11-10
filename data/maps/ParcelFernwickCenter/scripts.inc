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


ParcelFernwickCenter_Bound::
# 50 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Bound_Text_0, MSGBOX_SIGN
# 51 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Bound_Text_1, MSGBOX_SIGN
# 52 "data/maps/ParcelFernwickCenter/scripts.pory"
	msgbox ParcelFernwickCenter_Bound_Text_2, MSGBOX_SIGN
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

ParcelFernwickCenter_Bound_Text_0:
# 50 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "A bound volume of THE SKALDMERE\n"
	.string "COURIER on the Centre's shelf, the\l"
	.string "years before you came. The nurse says\l"
	.string "people read it while they wait and\l"
	.string "nobody has ever finished it.\p"
	.string "MEREHOLT TO FUND TWO FIELD STATIONS.\n"
	.string "The Foundation's Chair, photographed\l"
	.string "with the Corps' director at Fernwick. A\l"
	.string "new era of partnership for the region's\l"
	.string "environment.\p"
	.string "PRESERVE GATE OPENED AT SALTWICK.\n"
	.string "Managed access to the saltmarsh, a\l"
	.string "Foundation crest on the gate. A fisher\l"
	.string "quoted, briefly, asking who manages the\l"
	.string "sea.$"

ParcelFernwickCenter_Bound_Text_1:
# 51 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "RECORD HERRING YEAR. A photograph of\n"
	.string "the quay heaped. Smaller, inside: the\l"
	.string "Survey notes the record is for\l"
	.string "landings, not for fish.\p"
	.string "HAUKFELL BORE EXPLORATORY ONLY,\n"
	.string "COMPANY ASSURES. The first use of the\l"
	.string "phrase in print. INGER, then on page six,\l"
	.string "counts its uses by the end of the year:\l"
	.string "fourteen.\p"
	.string "LAB OPENS ON THE SALTWICK FRONT. A\n"
	.string "regional ecologist, returned from Johto\l"
	.string "to lead the Foundation's resilience\l"
	.string "programme. She is photographed not\l"
	.string "smiling. The caption calls it modesty.$"

ParcelFernwickCenter_Bound_Text_2:
# 52 "data/maps/ParcelFernwickCenter/scripts.pory"
	.string "CORRECTION. The Courier regrets that\n"
	.string "last week's figure for the Reedmere\l"
	.string "WOOPER count was supplied by the\l"
	.string "Foundation and not, as stated, by the\l"
	.string "Survey. The Survey's figure is lower.\p"
	.string "The volume ends there. The next year is\n"
	.string "the one you arrived in, and it is on the\l"
	.string "board by the door, one page at a time.$"
