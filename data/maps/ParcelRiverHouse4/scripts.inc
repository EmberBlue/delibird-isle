ParcelRiverHouse4_MapScripts::
	.byte 0


ParcelRiverHouse4_Woman::
# 7 "data/maps/ParcelRiverHouse4/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse4/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse4_Woman_2
# 14 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_Woman_5
# 19 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse4_Woman_8
# 24 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Woman_2:
# 10 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Woman_5:
# 15 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Woman_8:
# 20 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Woman_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end


ParcelRiverHouse4_Boy::
# 30 "data/maps/ParcelRiverHouse4/scripts.pory"
	lock
# 31 "data/maps/ParcelRiverHouse4/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse4_Boy_2
# 37 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_Boy_5
# 42 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse4_Boy_8
# 47 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Boy_2:
# 33 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Boy_5:
# 38 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end

ParcelRiverHouse4_Boy_8:
# 43 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_Boy_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRiverHouse4/scripts.pory"
	release
	end


ParcelRiverHouse4_ReadDresser::
# 53 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse4_ReadDrawer::
# 58 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse4_PaperStallLicence::
# 65 "data/maps/ParcelRiverHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse4_PaperStallLicence_2
# 68 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_PaperStallLicence_Text_1, MSGBOX_SIGN
ParcelRiverHouse4_PaperStallLicence_1:
	end

ParcelRiverHouse4_PaperStallLicence_2:
# 66 "data/maps/ParcelRiverHouse4/scripts.pory"
	msgbox ParcelRiverHouse4_PaperStallLicence_Text_0, MSGBOX_SIGN
	goto ParcelRiverHouse4_PaperStallLicence_1


ParcelRiverHouse4_Woman_Text_0:
# 10 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: Six names on the allocation. I\n"
	.string "read mine every market day. It hasn't\l"
	.string "moved.\p"
	.string "That's what fair looks like, it turns\n"
	.string "out. It looks like a number that stays.$"

ParcelRiverHouse4_Woman_Text_1:
# 15 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: The Board posted the\n"
	.string "allocations with six names under them. I\l"
	.string "read mine twice. It's fair. First time\l"
	.string "I've written 'fair' on a form.$"

ParcelRiverHouse4_Woman_Text_2:
# 20 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: Fish on market day, vegetables\n"
	.string "the rest, and now blankets with a crest\l"
	.string "from a van. The Board meters the water\l"
	.string "and the FOUNDATION hands out the wool.\p"
	.string "I took a blanket. It's a good blanket. I\n"
	.string "know what I took it with.$"

ParcelRiverHouse4_Woman_Text_3:
# 24 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "WOMAN: Fish on market day, vegetables\n"
	.string "the rest. The river gives both and the\l"
	.string "Board meters both.$"

ParcelRiverHouse4_Boy_Text_0:
# 33 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: Twenty-two stalls! The hill people\n"
	.string "have potatoes now. I counted them\l"
	.string "twice. The ranger way.\p"
	.string "HALE's boy from FERNWICK counts his\n"
	.string "pond the same. We compared.$"

ParcelRiverHouse4_Boy_Text_1:
# 38 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: Nineteen stalls today! I counted\n"
	.string "twice, like the ranger does.$"

ParcelRiverHouse4_Boy_Text_2:
# 43 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: Fourteen stalls this spring, and\n"
	.string "now nineteen, because the hill people\l"
	.string "set up on the end with nothing on the\l"
	.string "table.\p"
	.string "I count them anyway. Mum says an empty\n"
	.string "stall still counts. I don't know. I\l"
	.string "counted it.$"

ParcelRiverHouse4_Boy_Text_3:
# 47 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "BOY: I count the stalls. Twenty-two on\n"
	.string "a good day. Fourteen this spring.$"

ParcelRiverHouse4_ReadDresser_Text_0:
# 53 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "A chalk slate on the dresser: STALLS.\n"
	.string "Twenty-two, rubbed out. Fourteen,\l"
	.string "rubbed out. Nineteen. The chalk is\l"
	.string "nearly gone.$"

ParcelRiverHouse4_ReadDrawer_Text_0:
# 58 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "Market scales in the drawer, and a Board\n"
	.string "water receipt under them. Fish on one\l"
	.string "side of the scale, metered water on the\l"
	.string "other.$"

ParcelRiverHouse4_PaperStallLicence_Text_0:
# 66 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "The market stall licence, renewed. The\n"
	.string "Board has crossed out FOUNDATION RATE\l"
	.string "and written BOARD RATE above it, which\l"
	.string "is the same number with a different\l"
	.string "name on it.\p"
	.string "She has written beside the box that\n"
	.string "says FAIR: ask the six. She has not\l"
	.string "decided whether that is a joke.$"

ParcelRiverHouse4_PaperStallLicence_Text_1:
# 68 "data/maps/ParcelRiverHouse4/scripts.pory"
	.string "The market stall licence, renewed each\n"
	.string "spring. Produce and fish, FOUNDATION\l"
	.string "RATE. The rate is printed; the licence\l"
	.string "fee is printed; the word FAIR is printed,\l"
	.string "in a box, as if it were a quantity.\p"
	.string "She pays it. Everyone pays it. The box\n"
	.string "says fair.$"
