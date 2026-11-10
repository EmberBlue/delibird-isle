ParcelIsleNeighborHouse_MapScripts::
	.byte 0


ParcelIsleNeighborHouse_Man::
# 11 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	lock
# 12 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	faceplayer
# 13 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleNeighborHouse_Man_2
# 18 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleNeighborHouse_Man_5
# 23 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Man_Text_2, MSGBOX_DEFAULT
# 24 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Man_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	release
	end

ParcelIsleNeighborHouse_Man_2:
# 14 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Man_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	release
	end

ParcelIsleNeighborHouse_Man_5:
# 19 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Man_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	release
	end


ParcelIsleNeighborHouse_Schedules::
# 30 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Schedules_Text_0, MSGBOX_SIGN
	end


ParcelIsleNeighborHouse_Drawer::
# 35 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Drawer_Text_0, MSGBOX_SIGN
	end


ParcelIsleNeighborHouse_PaperWindowBook::
# 42 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleNeighborHouse_PaperWindowBook_2
# 45 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_PaperWindowBook_Text_1, MSGBOX_SIGN
ParcelIsleNeighborHouse_PaperWindowBook_1:
	end

ParcelIsleNeighborHouse_PaperWindowBook_2:
# 43 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_PaperWindowBook_Text_0, MSGBOX_SIGN
	goto ParcelIsleNeighborHouse_PaperWindowBook_1


ParcelIsleNeighborHouse_Man_Text_0:
# 14 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "He is at the stove, the same as always.\n"
	.string "The kettle is on for two.\p"
	.string "Man: She cried when she read it, you\n"
	.string "know. Your filing. Not sad crying.\p"
	.string "The kind where a held thing finally gets\n"
	.string "put down.$"

ParcelIsleNeighborHouse_Man_Text_1:
# 19 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A man at the stove. The kettle has\n"
	.string "nearly made up its mind.\p"
	.string "Man: The river village stood up to the\n"
	.string "Board, they say. Words carry over water.\p"
	.string "These ones carried a long way to get\n"
	.string "here. Means somebody meant them.$"

ParcelIsleNeighborHouse_Man_Text_2:
# 23 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A man at the stove, minding a kettle\n"
	.string "that is in no hurry.\p"
	.string "Man: Evening.$"

ParcelIsleNeighborHouse_Man_Text_3:
# 24 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "You wait. The kettle ticks.\p"
	.string "Man: …She talks enough for the both of\n"
	.string "us. It's not that I don't.\p"
	.string "It's that the town is small, and words\n"
	.string "carry over water.$"

ParcelIsleNeighborHouse_Schedules_Text_0:
# 30 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "Ferry schedules, years of them, pinned\n"
	.string "up in layers like sediment.\p"
	.string "The older ones are dense with sailings.\n"
	.string "The recent ones are thin.\p"
	.string "The blank spaces are recent, too.$"

ParcelIsleNeighborHouse_Drawer_Text_0:
# 35 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A writing drawer, locked. The keyhole is\n"
	.string "bright from use.\p"
	.string "Whoever writes here writes often -- and\n"
	.string "puts it away, every time, before the\l"
	.string "kettle sings.$"

ParcelIsleNeighborHouse_PaperWindowBook_Text_0:
# 43 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A notebook on the sill, in the wife's\n"
	.string "hand. The 02:10 entry has the review's\l"
	.string "reference number written beside it,\l"
	.string "small, in a hand that pressed hard\l"
	.string "enough to dent the next page.\p"
	.string "The man at the stove says she wrote it\n"
	.string "down the night it happened and did not\l"
	.string "tell him for a year. He says that is the\l"
	.string "bravest thing he knows about her, and\l"
	.string "he has known her thirty years.$"

ParcelIsleNeighborHouse_PaperWindowBook_Text_1:
# 45 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A notebook on the sill, in the wife's\n"
	.string "hand: every hull seen from this window,\l"
	.string "with the hour. A harbourmaster's log\l"
	.string "kept from a kitchen.\p"
	.string "One night entry, 02:10, LOGISTICS, VAN\n"
	.string "AND LAUNCH, is underlined twice and\l"
	.string "then has a line drawn through the\l"
	.string "underlining, as if she had decided\l"
	.string "twice.$"
