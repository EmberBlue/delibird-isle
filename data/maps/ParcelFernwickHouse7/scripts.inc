ParcelFernwickHouse7_MapScripts::
	.byte 0


ParcelFernwickHouse7_Woman::
# 7 "data/maps/ParcelFernwickHouse7/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse7/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickHouse7_Woman_2
# 14 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse7_Woman_5
# 19 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse7_Woman_8
# 24 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Woman_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelFernwickHouse7/scripts.pory"
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

ParcelFernwickHouse7_Woman_8:
# 20 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Woman_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end


ParcelFernwickHouse7_Man::
# 30 "data/maps/ParcelFernwickHouse7/scripts.pory"
	lock
# 31 "data/maps/ParcelFernwickHouse7/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickHouse7_Man_2
# 37 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse7_Man_5
# 42 "data/maps/ParcelFernwickHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse7_Man_8
# 47 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Man_2:
# 33 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Man_5:
# 38 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end

ParcelFernwickHouse7_Man_8:
# 43 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_Man_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFernwickHouse7/scripts.pory"
	release
	end


ParcelFernwickHouse7_ReadDresser::
# 53 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse7_ReadDrawer::
# 58 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse7_ReadPots::
# 63 "data/maps/ParcelFernwickHouse7/scripts.pory"
	msgbox ParcelFernwickHouse7_ReadPots_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse7_Woman_Text_0:
# 10 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: I went home. The works have\n"
	.string "their page and the nose agrees with the\l"
	.string "paper now, mostly.\p"
	.string "My sister kept my room anyway. Just in\n"
	.string "case, she says.$"

ParcelFernwickHouse7_Woman_Text_1:
# 15 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: They say the works have a new\n"
	.string "page in their permit. I'd like to go home.\l"
	.string "Not yet. The nose knows before the\l"
	.string "paper does.$"

ParcelFernwickHouse7_Woman_Text_2:
# 20 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: They've stood the dredge crew\n"
	.string "down at REEDMERE. My sister says the\l"
	.string "landing's quiet in a different way now.\p"
	.string "Not the sick quiet. The waiting kind.\n"
	.string "She's thinking about going back. I'm\l"
	.string "not. Not yet.$"

ParcelFernwickHouse7_Woman_Text_3:
# 24 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "WOMAN: We moved here from REEDMERE\n"
	.string "when the water turned. The house smells\l"
	.string "of marsh when it rains. I don't mind.$"

ParcelFernwickHouse7_Man_Text_0:
# 33 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: Drove the correction crew's pipe\n"
	.string "up the Corridor. Heavier than the\l"
	.string "minutes, lighter than the sandbags.\p"
	.string "Everything's a weight to a driver. That\n"
	.string "one was a good one.$"

ParcelFernwickHouse7_Man_Text_1:
# 38 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: The map's been corrected. First\n"
	.string "time in eleven years. Your name's on the\l"
	.string "correction slip.$"

ParcelFernwickHouse7_Man_Text_2:
# 43 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: Drove the basin relief twice and\n"
	.string "the river minutes once. The minutes\l"
	.string "weighed more than the sandbags, the\l"
	.string "way HALE carried them.\p"
	.string "The map's still wrong about three zones.\n"
	.string "Getting it wrong about fewer, maybe.$"

ParcelFernwickHouse7_Man_Text_3:
# 47 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "MAN: I drive the station truck. Eight\n"
	.string "zones, one truck, and a map that's wrong\l"
	.string "about three of them.$"

ParcelFernwickHouse7_ReadDresser_Text_0:
# 53 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "A dresser from another house. You can\n"
	.string "tell by the water line on its legs, a\l"
	.string "hand above the floor.\p"
	.string "It came from REEDMERE. So did the line.$"

ParcelFernwickHouse7_ReadDrawer_Text_0:
# 58 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "The station truck's logbook, kept at\n"
	.string "home where the station can't lose it.\l"
	.string "Eight zones.\p"
	.string "The mileage to three of them is crossed\n"
	.string "out and rewritten.$"

ParcelFernwickHouse7_ReadPots_Text_0:
# 63 "data/maps/ParcelFernwickHouse7/scripts.pory"
	.string "Two pots of marsh reed, grown indoors.\n"
	.string "They should not grow indoors. They do.$"
