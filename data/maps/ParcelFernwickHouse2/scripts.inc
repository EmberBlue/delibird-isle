ParcelFernwickHouse2_MapScripts::
	.byte 0


ParcelFernwickHouse2_Woman::
# 5 "data/maps/ParcelFernwickHouse2/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickHouse2/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_Woman_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelFernwickHouse2/scripts.pory"
	release
	end


ParcelFernwickHouse2_Zigzagoon::
# 13 "data/maps/ParcelFernwickHouse2/scripts.pory"
	lock
# 14 "data/maps/ParcelFernwickHouse2/scripts.pory"
	faceplayer
# 15 "data/maps/ParcelFernwickHouse2/scripts.pory"
	waitse
# 16 "data/maps/ParcelFernwickHouse2/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 17 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickHouse2/scripts.pory"
	waitmoncry
# 19 "data/maps/ParcelFernwickHouse2/scripts.pory"
	release
	end


ParcelFernwickHouse2_Woman_Text_0:
# 7 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "WOMAN: HALE was born in this house. He'd\n"
	.string "hate that I told you.\p"
	.string "He hates most things I tell people. Have\n"
	.string "a biscuit.$"

ParcelFernwickHouse2_Zigzagoon_Text_0:
# 17 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "ZIGZAGOON is investigating your boots.\n"
	.string "Thoroughly.$"
