ParcelRiverHouse5_MapScripts::
	.byte 0


ParcelRiverHouse5_OldMan::
# 7 "data/maps/ParcelRiverHouse5/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse5/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse5_OldMan_2
# 14 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldMan_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldMan_2:
# 10 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end


ParcelRiverHouse5_OldWoman::
# 20 "data/maps/ParcelRiverHouse5/scripts.pory"
	lock
# 21 "data/maps/ParcelRiverHouse5/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelRiverHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse5_OldWoman_2
# 27 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldWoman_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end

ParcelRiverHouse5_OldWoman_2:
# 23 "data/maps/ParcelRiverHouse5/scripts.pory"
	msgbox ParcelRiverHouse5_OldWoman_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverHouse5/scripts.pory"
	release
	end


ParcelRiverHouse5_OldMan_Text_0:
# 10 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD MAN: The allocation gives the race\n"
	.string "a trickle in spring. A trickle turns a\l"
	.string "wheel if you've the patience. I've the\l"
	.string "patience.$"

ParcelRiverHouse5_OldMan_Text_1:
# 14 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD MAN: I ran the mill until the race\n"
	.string "went dry. The wood's still there. The\l"
	.string "race is still there. The water isn't.$"

ParcelRiverHouse5_OldWoman_Text_0:
# 23 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD WOMAN: He came back from the mill\n"
	.string "wet to the knee and grinning. The race\l"
	.string "ran an hour. One hour, in forty years of\l"
	.string "waiting.$"

ParcelRiverHouse5_OldWoman_Text_1:
# 27 "data/maps/ParcelRiverHouse5/scripts.pory"
	.string "OLD WOMAN: My husband walks to the mill\n"
	.string "every morning to oil a wheel that\l"
	.string "doesn't turn. I pack him a lunch. It's a\l"
	.string "marriage.$"
