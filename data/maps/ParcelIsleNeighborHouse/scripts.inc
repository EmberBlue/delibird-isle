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
	msgbox ParcelIsleNeighborHouse_Man_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Man_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	release
	end

ParcelIsleNeighborHouse_Man_2:
# 14 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Man_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	release
	end


ParcelIsleNeighborHouse_Schedules::
# 25 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Schedules_Text_0, MSGBOX_SIGN
	end


ParcelIsleNeighborHouse_Drawer::
# 30 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	msgbox ParcelIsleNeighborHouse_Drawer_Text_0, MSGBOX_SIGN
	end


ParcelIsleNeighborHouse_Man_Text_0:
# 14 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "He is at the stove, the same as always.\n"
	.string "The kettle is on for two.\p"
	.string "Man: She cried when she read it, you\n"
	.string "know. Your filing. Not sad crying.\p"
	.string "The kind where a held thing finally gets\n"
	.string "put down.$"

ParcelIsleNeighborHouse_Man_Text_1:
# 18 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A man at the stove, minding a kettle\n"
	.string "that is in no hurry.\p"
	.string "Man: Evening.$"

ParcelIsleNeighborHouse_Man_Text_2:
# 19 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "You wait. The kettle ticks.\p"
	.string "Man: …She talks enough for the both of\n"
	.string "us. It's not that I don't.\p"
	.string "It's that the town is small, and words\n"
	.string "carry over water.$"

ParcelIsleNeighborHouse_Schedules_Text_0:
# 25 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "Ferry schedules, years of them, pinned\n"
	.string "up in layers like sediment.\p"
	.string "The older ones are dense with sailings.\n"
	.string "The recent ones are thin.\p"
	.string "The blank spaces are recent, too.$"

ParcelIsleNeighborHouse_Drawer_Text_0:
# 30 "data/maps/ParcelIsleNeighborHouse/scripts.pory"
	.string "A writing drawer, locked. The keyhole is\n"
	.string "bright from use.\p"
	.string "Whoever writes here writes often -- and\n"
	.string "puts it away, every time, before the\l"
	.string "kettle sings.$"
