ParcelFloodbasinHouse3_MapScripts::
	.byte 0


ParcelFloodbasinHouse3_OldWoman::
# 7 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	lock
# 8 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse3_OldWoman_2
# 14 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinHouse3_OldWoman_5
# 19 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	msgbox ParcelFloodbasinHouse3_OldWoman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	release
	end

ParcelFloodbasinHouse3_OldWoman_2:
# 10 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	msgbox ParcelFloodbasinHouse3_OldWoman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	release
	end

ParcelFloodbasinHouse3_OldWoman_5:
# 15 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	msgbox ParcelFloodbasinHouse3_OldWoman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	release
	end


ParcelFloodbasinHouse3_Man::
# 25 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	lock
# 26 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse3_Man_2
# 32 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinHouse3_Man_5
# 37 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	msgbox ParcelFloodbasinHouse3_Man_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	release
	end

ParcelFloodbasinHouse3_Man_2:
# 28 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	msgbox ParcelFloodbasinHouse3_Man_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	release
	end

ParcelFloodbasinHouse3_Man_5:
# 33 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	msgbox ParcelFloodbasinHouse3_Man_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	release
	end


ParcelFloodbasinHouse3_OldWoman_Text_0:
# 10 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	.string "OLD WOMAN: Phase 2 goes ahead. Dry\n"
	.string "sheds. My door frame gets a third line\l"
	.string "or it doesn't. The paper says it doesn't.\l"
	.string "The paper wasn't here in '09.$"

ParcelFloodbasinHouse3_OldWoman_Text_1:
# 15 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	.string "OLD WOMAN: Two water lines on the door\n"
	.string "frame, and now a third mark, in pencil:\l"
	.string "the day the river hall voted against\l"
	.string "Phase 2.\p"
	.string "No water that day. I marked it anyway.\n"
	.string "Some lines you make on purpose.$"

ParcelFloodbasinHouse3_OldWoman_Text_2:
# 19 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	.string "OLD WOMAN: The pulse came through this\n"
	.string "house twice. Once in '09, once the\l"
	.string "spring you came. Both water lines are on\l"
	.string "the door frame. Look.$"

ParcelFloodbasinHouse3_Man_Text_0:
# 28 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	.string "MAN: I kept the blanket. MEREHOLT on it.\n"
	.string "It's warm. I'm not giving back a warm\l"
	.string "blanket to make a point.$"

ParcelFloodbasinHouse3_Man_Text_1:
# 33 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	.string "MAN: DORSEY came back from the river\n"
	.string "and didn't shake anybody's hand. First\l"
	.string "time I've seen him not.\p"
	.string "He stood where the sandbags were and\n"
	.string "looked at the bridge a long while. Good\l"
	.string "handshake, that man. I'd still take it.\l"
	.string "I'd think first now.$"

ParcelFloodbasinHouse3_Man_Text_2:
# 37 "data/maps/ParcelFloodbasinHouse3/scripts.pory"
	.string "MAN: We stacked the sandbags where the\n"
	.string "photographer stood. DORSEY shook my\l"
	.string "hand in front of the camera. It was a\l"
	.string "good handshake. I'll give him that.$"
