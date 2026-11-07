ParcelRiverHouse1_MapScripts::
	.byte 0


ParcelRiverHouse1_OldMan::
# 4 "data/maps/ParcelRiverHouse1/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER_DONE, ParcelRiverHouse1_OldMan_2
# 11 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER_SEEN, ParcelRiverHouse1_OldMan_5
# 18 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER, ParcelRiverHouse1_OldMan_8
# 23 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_4, MSGBOX_DEFAULT
# 25 "data/maps/ParcelRiverHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER
# 26 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_2:
# 7 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_5:
# 12 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelRiverHouse1/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 14 "data/maps/ParcelRiverHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER_DONE
# 15 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_8:
# 19 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end


ParcelRiverHouse1_OldWoman::
# 30 "data/maps/ParcelRiverHouse1/scripts.pory"
	lock
# 31 "data/maps/ParcelRiverHouse1/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldWoman_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end


ParcelRiverHouse1_OldMan_Text_0:
# 7 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: Fresh chips. Pale. I've said it\n"
	.string "to everyone in the valley. They nod.\l"
	.string "You're the one who went and looked.$"

ParcelRiverHouse1_OldMan_Text_1:
# 12 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: Fresh? FRESH? Cut to a point,\n"
	.string "chips still pale?\p"
	.string "…Fifty-one years. Here. I've carried\n"
	.string "this for luck since the pond went. It's\l"
	.string "brought me none. Maybe it's for\l"
	.string "carrying, not keeping.$"

ParcelRiverHouse1_OldMan_Text_2:
# 19 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: The clean reach, above the\n"
	.string "town, on the bank. A stump cut to a\l"
	.string "point. If it's there, it's there. If it\l"
	.string "isn't, don't spare me.$"

ParcelRiverHouse1_OldMan_Text_3:
# 23 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: The beaver pond. Above the\n"
	.string "town. We swam in it. The water was so\l"
	.string "still you could see the bottom.\p"
	.string "Then the trappers took the beavers and\n"
	.string "the Board took the pond. Nobody took\l"
	.string "the memory, I'll give them that.$"

ParcelRiverHouse1_OldMan_Text_4:
# 24 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: You walk the bank, don't you.\n"
	.string "The clean reach above the town. Look\l"
	.string "for a stump cut to a point, chips at the\l"
	.string "foot of it. Beaver sign.\p"
	.string "I'd give a lot to know. I'd give a lot to\n"
	.string "be wrong about it being gone.$"

ParcelRiverHouse1_OldWoman_Text_0:
# 32 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD WOMAN: He talks about the pond.\n"
	.string "Every day. I've stopped listening and\l"
	.string "started counting. Fifty-one years he's\l"
	.string "talked about that pond.$"
