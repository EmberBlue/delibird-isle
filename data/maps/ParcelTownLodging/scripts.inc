ParcelTownLodging_MapScripts::
	.byte 0


ParcelTownLodging_Keeper::
# 9 "data/maps/ParcelTownLodging/scripts.pory"
	lock
# 10 "data/maps/ParcelTownLodging/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_1, MSGBOX_YESNO
# 13 "data/maps/ParcelTownLodging/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelTownLodging_Keeper_2
# 20 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_3, MSGBOX_DEFAULT
ParcelTownLodging_Keeper_1:
# 22 "data/maps/ParcelTownLodging/scripts.pory"
	release
	end

ParcelTownLodging_Keeper_2:
# 14 "data/maps/ParcelTownLodging/scripts.pory"
	closemessage
# 15 "data/maps/ParcelTownLodging/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/ParcelTownLodging/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 17 "data/maps/ParcelTownLodging/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_2, MSGBOX_DEFAULT
	goto ParcelTownLodging_Keeper_1


ParcelTownLodging_Keeper_Text_0:
# 11 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Keeper: The scientist's room is paid\n"
	.string "through the season.\p"
	.string "She insisted. Before.$"

ParcelTownLodging_Keeper_Text_1:
# 12 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Keeper: You look wrung out.\n"
	.string "Rest a while?$"

ParcelTownLodging_Keeper_Text_2:
# 18 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Morning comes gray and early.\p"
	.string "Your partner looks rested.\n"
	.string "So, almost, do you.$"

ParcelTownLodging_Keeper_Text_3:
# 20 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Keeper: The kettle's always on.$"
