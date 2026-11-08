ParcelFernwickHouse7_MapScripts::
	.byte 0


ParcelFernwickHouse7_Woman::
# 7 "data/maps/ParcelFernwickHouse7/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse7/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse7_Woman_2
# 14 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse7_Woman_5
# 19 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Woman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Woman_2:
# 10 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Woman_5:
# 15 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end


ParcelFernwickHouse7_Man::
# 25 "data/maps/ParcelFernwickHouse7/scripts.pory"
	lock
# 26 "data/maps/ParcelFernwickHouse7/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse7_Man_2
# 32 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse7_Man_5
# 37 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Man_2:
# 28 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Man_5:
# 33 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end


ParcelFernwickHouse7_Woman_Text_0:
# 10 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: They say the works have a new\n"
	.string "page in their permit. I'd like to go home.\l"
	.string "Not yet. The nose knows before the\l"
	.string "paper does.$"

ParcelFernwickHouse7_Woman_Text_1:
# 15 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: They've stood the dredge crew\n"
	.string "down at REEDMERE. My sister says the\l"
	.string "landing's quiet in a different way now.\p"
	.string "Not the sick quiet. The waiting kind.\n"
	.string "She's thinking about going back. I'm\l"
	.string "not. Not yet.$"

ParcelFernwickHouse7_Woman_Text_2:
# 19 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: We moved here from REEDMERE\n"
	.string "when the water turned. The house smells\l"
	.string "of marsh when it rains. I don't mind.$"

ParcelFernwickHouse7_Man_Text_0:
# 28 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: The map's been corrected. First\n"
	.string "time in eleven years. Your name's on the\l"
	.string "correction slip.$"

ParcelFernwickHouse7_Man_Text_1:
# 33 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: Drove the basin relief twice and\n"
	.string "the river minutes once. The minutes\l"
	.string "weighed more than the sandbags, the\l"
	.string "way HALE carried them.\p"
	.string "The map's still wrong about three zones.\n"
	.string "Getting it wrong about fewer, maybe.$"

ParcelFernwickHouse7_Man_Text_2:
# 37 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: I drive the station truck. Eight\n"
	.string "zones, one truck, and a map that's wrong\l"
	.string "about three of them.$"
