ParcelCoastHouse4_MapScripts::
	.byte 0


ParcelCoastHouse4_Woman::
# 7 "data/maps/ParcelCoastHouse4/scripts.pory"
	lock
# 8 "data/maps/ParcelCoastHouse4/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelCoastHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse4_Woman_2
# 14 "data/maps/ParcelCoastHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse4_Woman_5
# 19 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Woman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end

ParcelCoastHouse4_Woman_2:
# 10 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end

ParcelCoastHouse4_Woman_5:
# 15 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end


ParcelCoastHouse4_Man::
# 25 "data/maps/ParcelCoastHouse4/scripts.pory"
	lock
# 26 "data/maps/ParcelCoastHouse4/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelCoastHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse4_Man_2
# 32 "data/maps/ParcelCoastHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse4_Man_5
# 37 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Man_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end

ParcelCoastHouse4_Man_2:
# 28 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Man_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end

ParcelCoastHouse4_Man_5:
# 33 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Man_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end


ParcelCoastHouse4_ReadDresser::
# 43 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse4_ReadDrawer::
# 48 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse4_Woman_Text_0:
# 10 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "WOMAN: The line's on half days under the\n"
	.string "review. Half days, full pay; HARLAND's\l"
	.string "union saw to that. I've a garden now.$"

ParcelCoastHouse4_Woman_Text_1:
# 15 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "WOMAN: Six to two, and the line stopped\n"
	.string "for a day. 'Pending the ranger.' The tins\l"
	.string "stopped coming down.\p"
	.string "You don't know how loud a cannery is\n"
	.string "until it's quiet. Then you don't know how\l"
	.string "to feel about either.$"

ParcelCoastHouse4_Woman_Text_2:
# 19 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "WOMAN: Cannery line, six to two. The\n"
	.string "tins come down faster than the fish\l"
	.string "come in. Somebody's filling tins with\l"
	.string "sea.$"

ParcelCoastHouse4_Man_Text_0:
# 28 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "MAN: They read the eleven-fish line at\n"
	.string "the hearing. My line. I sorted them.\l"
	.string "Nobody asked my name. That's fine. It\l"
	.string "was true.$"

ParcelCoastHouse4_Man_Text_1:
# 33 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "MAN: Eleven fish, every one the same\n"
	.string "length. I needed a ranger to write it\l"
	.string "down, and now it's written, and I'm the\l"
	.string "one who sorted them, so my name's near\l"
	.string "it.\p"
	.string "I don't mind. I counted them. They're\n"
	.string "mine too.$"

ParcelCoastHouse4_Man_Text_2:
# 37 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "MAN: I sort the catch. Eleven fish,\n"
	.string "every one the same length. I didn't need\l"
	.string "a ranger to tell me. I needed one to\l"
	.string "write it down.$"

ParcelCoastHouse4_ReadDresser_Text_0:
# 43 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "Two alarm clocks on the dresser, set an\n"
	.string "hour apart. Six to two, and the other\l"
	.string "shift.$"

ParcelCoastHouse4_ReadDrawer_Text_0:
# 48 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "A drawer of gutting gloves, every pair\n"
	.string "mended at the same finger.\p"
	.string "The fish are all one size. So is the work.$"
