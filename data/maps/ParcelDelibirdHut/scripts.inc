ParcelDelibirdHut_MapScripts::
	.byte 0


ParcelDelibirdHut_Guest::
# 8 "data/maps/ParcelDelibirdHut/scripts.pory"
	lock
# 9 "data/maps/ParcelDelibirdHut/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelDelibirdHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdHut_Guest_2
# 12 "data/maps/ParcelDelibirdHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_DELIBIRD_GIFT, ParcelDelibirdHut_Guest_3
# 15 "data/maps/ParcelDelibirdHut/scripts.pory"
	msgbox ParcelDelibirdHut_Guest_Text_2, MSGBOX_DEFAULT
ParcelDelibirdHut_Guest_1:
# 17 "data/maps/ParcelDelibirdHut/scripts.pory"
	release
	end

ParcelDelibirdHut_Guest_2:
# 11 "data/maps/ParcelDelibirdHut/scripts.pory"
	msgbox ParcelDelibirdHut_Guest_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdHut_Guest_1

ParcelDelibirdHut_Guest_3:
# 13 "data/maps/ParcelDelibirdHut/scripts.pory"
	msgbox ParcelDelibirdHut_Guest_Text_1, MSGBOX_DEFAULT
	goto ParcelDelibirdHut_Guest_1


ParcelDelibirdHut_Swinub::
# 22 "data/maps/ParcelDelibirdHut/scripts.pory"
	lock
# 23 "data/maps/ParcelDelibirdHut/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 24 "data/maps/ParcelDelibirdHut/scripts.pory"
	msgbox ParcelDelibirdHut_Swinub_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/ParcelDelibirdHut/scripts.pory"
	waitmoncry
# 26 "data/maps/ParcelDelibirdHut/scripts.pory"
	release
	end


ParcelDelibirdHut_Crate::
# 31 "data/maps/ParcelDelibirdHut/scripts.pory"
	msgbox ParcelDelibirdHut_Crate_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdHut_Log::
# 36 "data/maps/ParcelDelibirdHut/scripts.pory"
	msgbox ParcelDelibirdHut_Log_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdHut_Guest_Text_0:
# 11 "data/maps/ParcelDelibirdHut/scripts.pory"
	.string "GIRL: The hut is in a filing now. The hut\n"
	.string "man put the filing on the shelf with the\l"
	.string "tea.\p"
	.string "He says that is where the important\n"
	.string "things go.$"

ParcelDelibirdHut_Guest_Text_1:
# 13 "data/maps/ParcelDelibirdHut/scripts.pory"
	.string "GIRL: You did the round. They lit the\n"
	.string "square. I watched from the door with my\l"
	.string "boots off.\p"
	.string "It is the best place to watch from. You\n"
	.string "can leave before anyone sees you cry.$"

ParcelDelibirdHut_Guest_Text_2:
# 15 "data/maps/ParcelDelibirdHut/scripts.pory"
	.string "GIRL: I'm not cold. I just like the\n"
	.string "stove.\p"
	.string "Storm rule says you don't have to say\n"
	.string "why you came in. So I'm not saying.$"

ParcelDelibirdHut_Swinub_Text_0:
# 24 "data/maps/ParcelDelibirdHut/scripts.pory"
	.string "SWINUB has its nose a whisker from the\n"
	.string "stove door. Every so often it moves a\l"
	.string "little closer and looks surprised.$"

ParcelDelibirdHut_Crate_Text_0:
# 31 "data/maps/ParcelDelibirdHut/scripts.pory"
	.string "A crate of donated kit. Mittens in pairs\n"
	.string "that do not match, a lantern, a tin of\l"
	.string "wax.\p"
	.string "A card on the lid: TAKE WHAT THE\n"
	.string "WEATHER ASKS.$"

ParcelDelibirdHut_Log_Text_0:
# 36 "data/maps/ParcelDelibirdHut/scripts.pory"
	.string "The hut log. One line for every night\n"
	.string "somebody slept here, sixty years of\l"
	.string "lines.\p"
	.string "The early pages are all one season. The\n"
	.string "late pages are all of them.$"
