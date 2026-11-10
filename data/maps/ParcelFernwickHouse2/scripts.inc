ParcelFernwickHouse2_MapScripts::
	.byte 0


ParcelFernwickHouse2_Woman::
# 5 "data/maps/ParcelFernwickHouse2/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickHouse2/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse2_Woman_2
# 12 "data/maps/ParcelFernwickHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse2_Woman_5
# 17 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_Woman_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickHouse2/scripts.pory"
	release
	end

ParcelFernwickHouse2_Woman_2:
# 8 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_Woman_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickHouse2/scripts.pory"
	release
	end

ParcelFernwickHouse2_Woman_5:
# 13 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_Woman_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickHouse2/scripts.pory"
	release
	end


ParcelFernwickHouse2_Zigzagoon::
# 23 "data/maps/ParcelFernwickHouse2/scripts.pory"
	lock
# 24 "data/maps/ParcelFernwickHouse2/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelFernwickHouse2/scripts.pory"
	waitse
# 26 "data/maps/ParcelFernwickHouse2/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 27 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwickHouse2/scripts.pory"
	waitmoncry
# 29 "data/maps/ParcelFernwickHouse2/scripts.pory"
	release
	end


ParcelFernwickHouse2_ReadShelf::
# 34 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse2_ReadFridge::
# 39 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_ReadFridge_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse2_ReadDresser::
# 44 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse2_PaperLetter::
# 51 "data/maps/ParcelFernwickHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse2_PaperLetter_2
# 54 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_PaperLetter_Text_1, MSGBOX_SIGN
ParcelFernwickHouse2_PaperLetter_1:
	end

ParcelFernwickHouse2_PaperLetter_2:
# 52 "data/maps/ParcelFernwickHouse2/scripts.pory"
	msgbox ParcelFernwickHouse2_PaperLetter_Text_0, MSGBOX_SIGN
	goto ParcelFernwickHouse2_PaperLetter_1


ParcelFernwickHouse2_Woman_Text_0:
# 8 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "WOMAN: HALE was born in this house and\n"
	.string "he came by for the first time in a year.\l"
	.string "He ate a biscuit. He said the hearing\l"
	.string "was 'adequate'. From HALE that's a\l"
	.string "parade.$"

ParcelFernwickHouse2_Woman_Text_1:
# 13 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "WOMAN: HALE came by. Stood in the\n"
	.string "kitchen and didn't say anything for a\l"
	.string "while, then said the river people stood\l"
	.string "up.\p"
	.string "He said it like news from a war. Have a\n"
	.string "biscuit. He wouldn't.$"

ParcelFernwickHouse2_Woman_Text_2:
# 17 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "WOMAN: HALE was born in this house. He'd\n"
	.string "hate that I told you.\p"
	.string "He hates most things I tell people. Have\n"
	.string "a biscuit.$"

ParcelFernwickHouse2_Zigzagoon_Text_0:
# 27 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "ZIGZAGOON is investigating your boots.\n"
	.string "Thoroughly.$"

ParcelFernwickHouse2_ReadShelf_Text_0:
# 34 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "Tide tables going back to before the\n"
	.string "station. One winter's table has a child's\l"
	.string "handwriting in the margin: HIGH.\p"
	.string "Somebody small learned to read the\n"
	.string "water here.$"

ParcelFernwickHouse2_ReadFridge_Text_0:
# 39 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "A biscuit tin on top of the fridge,\n"
	.string "dented. The dent is older than you. The\l"
	.string "biscuits are not.$"

ParcelFernwickHouse2_ReadDresser_Text_0:
# 44 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "A photograph on the dresser: a boy on\n"
	.string "the quay with a notebook too big for\l"
	.string "him, scowling at whoever held the\l"
	.string "camera.\p"
	.string "The scowl hasn't changed.$"

ParcelFernwickHouse2_PaperLetter_Text_0:
# 52 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "A letter on the dresser from a cousin on\n"
	.string "the Coast. The desk is restructured,\l"
	.string "the quay is quiet, I am coming up for a\l"
	.string "while, is the room free.\p"
	.string "The reply is finished this time. It is\n"
	.string "one line: Yes. Bring your boots; the\l"
	.string "pond is lower this year.$"

ParcelFernwickHouse2_PaperLetter_Text_1:
# 54 "data/maps/ParcelFernwickHouse2/scripts.pory"
	.string "A letter on the dresser from a cousin on\n"
	.string "the Coast, in a round hand. The quay is\l"
	.string "busy, the money is good, the Foundation\l"
	.string "desk is hiring, come down.\p"
	.string "The reply is half written beside it. It\n"
	.string "gets as far as: The pond is lower this\l"
	.string "year, and stops.$"
