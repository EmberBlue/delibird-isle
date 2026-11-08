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
	msgbox ParcelFernwickHouse7_Woman_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Woman_2:
# 10 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end


ParcelFernwickHouse7_Man::
# 20 "data/maps/ParcelFernwickHouse7/scripts.pory"
	lock
# 21 "data/maps/ParcelFernwickHouse7/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse7_Man_2
# 27 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Man_2:
# 23 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end


ParcelFernwickHouse7_Woman_Text_0:
# 10 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: They say the works have a new\n"
	.string "page in their permit. I'd like to go home.\l"
	.string "Not yet. The nose knows before the\l"
	.string "paper does.$"

ParcelFernwickHouse7_Woman_Text_1:
# 14 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: We moved here from REEDMERE\n"
	.string "when the water turned. The house smells\l"
	.string "of marsh when it rains. I don't mind.$"

ParcelFernwickHouse7_Man_Text_0:
# 23 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: The map's been corrected. First\n"
	.string "time in eleven years. Your name's on the\l"
	.string "correction slip.$"

ParcelFernwickHouse7_Man_Text_1:
# 27 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: I drive the station truck. Eight\n"
	.string "zones, one truck, and a map that's wrong\l"
	.string "about three of them.$"
