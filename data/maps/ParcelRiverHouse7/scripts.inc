ParcelRiverHouse7_MapScripts::
	.byte 0


ParcelRiverHouse7_Woman::
# 7 "data/maps/ParcelRiverHouse7/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse7/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse7_Woman_2
# 14 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse7_Woman_5
# 19 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse7_Woman_8
# 24 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Woman_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Woman_2:
# 10 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Woman_5:
# 15 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Woman_8:
# 20 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Woman_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end


ParcelRiverHouse7_Man::
# 30 "data/maps/ParcelRiverHouse7/scripts.pory"
	lock
# 31 "data/maps/ParcelRiverHouse7/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse7_Man_2
# 37 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse7_Man_5
# 42 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse7_Man_8
# 47 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Man_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Man_2:
# 33 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Man_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Man_5:
# 38 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Man_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end

ParcelRiverHouse7_Man_8:
# 43 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_Man_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRiverHouse7/scripts.pory"
	release
	end


ParcelRiverHouse7_ReadDresser::
# 53 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse7_ReadDrawer::
# 58 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse7_PaperSixNames::
# 65 "data/maps/ParcelRiverHouse7/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse7_PaperSixNames_2
# 68 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_PaperSixNames_Text_1, MSGBOX_SIGN
ParcelRiverHouse7_PaperSixNames_1:
	end

ParcelRiverHouse7_PaperSixNames_2:
# 66 "data/maps/ParcelRiverHouse7/scripts.pory"
	msgbox ParcelRiverHouse7_PaperSixNames_Text_0, MSGBOX_SIGN
	goto ParcelRiverHouse7_PaperSixNames_1


ParcelRiverHouse7_Woman_Text_0:
# 10 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "WOMAN: My name's under HARLAND's in the\n"
	.string "record. I went to the coast and read it.\l"
	.string "My own name, typed.\p"
	.string "I'd have liked it bigger. It's the right\n"
	.string "size.$"

ParcelRiverHouse7_Woman_Text_1:
# 15 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "WOMAN: HARLAND spoke at the hearing\n"
	.string "for the river people too. His name was in\l"
	.string "it where he put it. So's mine, under his.$"

ParcelRiverHouse7_Woman_Text_2:
# 20 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "WOMAN: The net comes up honest and\n"
	.string "cold now. Meltwater, they say, off\l"
	.string "HAUKFELL. The fish don't like it either.\p"
	.string "Honest and cold. That's most of what\n"
	.string "this valley's got this year.$"

ParcelRiverHouse7_Woman_Text_3:
# 24 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "WOMAN: I net the slow water below the\n"
	.string "town. Ten years ago the net came up\l"
	.string "heavy. Now it comes up honest.$"

ParcelRiverHouse7_Man_Text_0:
# 33 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "MAN: Small mesh, let the small ones\n"
	.string "through, and this spring there were big\l"
	.string "ones. Not many.\p"
	.string "I mended the HAUKFELL man's net again.\n"
	.string "He catches with it now. Badly. Honestly.$"

ParcelRiverHouse7_Man_Text_1:
# 38 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "MAN: Mended the net for the review\n"
	.string "season. Smaller mesh, she says. Let the\l"
	.string "small ones through. We've learnt that\l"
	.string "the slow way.$"

ParcelRiverHouse7_Man_Text_2:
# 43 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "MAN: Mended a net for a HAUKFELL man\n"
	.string "who'd never held one. He's moving down\l"
	.string "to the valley house and wants to fish. I\l"
	.string "didn't tell him about the fish.\p"
	.string "The holes in the net are the same size.\n"
	.string "He'll find out what comes through on his\l"
	.string "own.$"

ParcelRiverHouse7_Man_Text_3:
# 47 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "MAN: My wife fishes; I mend. The holes in\n"
	.string "the net are the same size every year.\l"
	.string "The fish aren't.$"

ParcelRiverHouse7_ReadDresser_Text_0:
# 53 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "A net needle on the dresser and a reel\n"
	.string "of twine. The holes are the same size\l"
	.string "every year. The twine runs out faster.$"

ParcelRiverHouse7_ReadDrawer_Text_0:
# 58 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "A drawer of weights for a net: river\n"
	.string "stones, drilled. Lighter ones at the\l"
	.string "front now. The slow water isn't as slow.$"

ParcelRiverHouse7_PaperSixNames_Text_0:
# 66 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "A list pinned over the table: six names,\n"
	.string "and under them the Board's own bulletin\l"
	.string "with the same six names typed at the\l"
	.string "foot of it.\p"
	.string "She has written across the top:\n"
	.string "HARLAND spoke for us too. He is not on\l"
	.string "the list. He did not need to be.$"

ParcelRiverHouse7_PaperSixNames_Text_1:
# 68 "data/maps/ParcelRiverHouse7/scripts.pory"
	.string "A list pinned over the table: six names.\n"
	.string "The people on the river who said they\l"
	.string "would stand up at the hall if nobody\l"
	.string "else did. Her husband's is third.\p"
	.string "Under the list, a date, and the word\n"
	.string "TONIGHT. The meeting was months ago.\l"
	.string "Nobody has taken the list down.$"
