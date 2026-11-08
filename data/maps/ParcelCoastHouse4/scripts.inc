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
	msgbox ParcelCoastHouse4_Woman_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end

ParcelCoastHouse4_Woman_2:
# 10 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end


ParcelCoastHouse4_Man::
# 20 "data/maps/ParcelCoastHouse4/scripts.pory"
	lock
# 21 "data/maps/ParcelCoastHouse4/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelCoastHouse4/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse4_Man_2
# 27 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Man_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end

ParcelCoastHouse4_Man_2:
# 23 "data/maps/ParcelCoastHouse4/scripts.pory"
	msgbox ParcelCoastHouse4_Man_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelCoastHouse4/scripts.pory"
	release
	end


ParcelCoastHouse4_Woman_Text_0:
# 10 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "WOMAN: The line's on half days under the\n"
	.string "review. Half days, full pay; HARLAND's\l"
	.string "union saw to that. I've a garden now.$"

ParcelCoastHouse4_Woman_Text_1:
# 14 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "WOMAN: Cannery line, six to two. The\n"
	.string "tins come down faster than the fish\l"
	.string "come in. Somebody's filling tins with\l"
	.string "sea.$"

ParcelCoastHouse4_Man_Text_0:
# 23 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "MAN: They read the eleven-fish line at\n"
	.string "the hearing. My line. I sorted them.\l"
	.string "Nobody asked my name. That's fine. It\l"
	.string "was true.$"

ParcelCoastHouse4_Man_Text_1:
# 27 "data/maps/ParcelCoastHouse4/scripts.pory"
	.string "MAN: I sort the catch. Eleven fish,\n"
	.string "every one the same length. I didn't need\l"
	.string "a ranger to tell me. I needed one to\l"
	.string "write it down.$"
