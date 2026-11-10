ParcelRiverHouse1_MapScripts::
	.byte 0


ParcelRiverHouse1_OldMan::
# 4 "data/maps/ParcelRiverHouse1/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse1_OldMan_3
ParcelRiverHouse1_OldMan_1:
# 11 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse1_OldMan_7
# 16 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER_DONE, ParcelRiverHouse1_OldMan_10
# 21 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER_SEEN, ParcelRiverHouse1_OldMan_13
# 28 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER, ParcelRiverHouse1_OldMan_16
# 33 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_6, MSGBOX_DEFAULT
# 35 "data/maps/ParcelRiverHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER
# 36 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_2:
# 7 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_3:
# 6 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER_DONE, ParcelRiverHouse1_OldMan_2
	goto ParcelRiverHouse1_OldMan_1

ParcelRiverHouse1_OldMan_7:
# 12 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_10:
# 17 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_13:
# 22 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_3, MSGBOX_DEFAULT
# 23 "data/maps/ParcelRiverHouse1/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 24 "data/maps/ParcelRiverHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER_DONE
# 25 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldMan_16:
# 29 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldMan_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end


ParcelRiverHouse1_OldWoman::
# 40 "data/maps/ParcelRiverHouse1/scripts.pory"
	lock
# 41 "data/maps/ParcelRiverHouse1/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse1_OldWoman_2
# 47 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse1_OldWoman_5
# 52 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse1_OldWoman_8
# 57 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldWoman_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldWoman_2:
# 43 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldWoman_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldWoman_5:
# 48 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldWoman_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end

ParcelRiverHouse1_OldWoman_8:
# 53 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_OldWoman_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/ParcelRiverHouse1/scripts.pory"
	release
	end


ParcelRiverHouse1_ReadDresser::
# 63 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse1_ReadDrawer::
# 68 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse1_PaperAllocation::
# 75 "data/maps/ParcelRiverHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse1_PaperAllocation_2
# 78 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_PaperAllocation_Text_1, MSGBOX_SIGN
ParcelRiverHouse1_PaperAllocation_1:
	end

ParcelRiverHouse1_PaperAllocation_2:
# 76 "data/maps/ParcelRiverHouse1/scripts.pory"
	msgbox ParcelRiverHouse1_PaperAllocation_Text_0, MSGBOX_SIGN
	goto ParcelRiverHouse1_PaperAllocation_1


ParcelRiverHouse1_OldMan_Text_0:
# 7 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: A dam. Small. Sticks and mud\n"
	.string "and a pool behind it you could swim in if\l"
	.string "you were a boy. I'm not. I sat by it an\l"
	.string "hour.\p"
	.string "The allocation did that. I'll never say\n"
	.string "that sentence again.$"

ParcelRiverHouse1_OldMan_Text_1:
# 12 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: Fresh chips, pale, and the\n"
	.string "allocation gives the reach above the\l"
	.string "town a flow again. I went and looked.\l"
	.string "I'll keep going. One beaver, and I'll die\l"
	.string "happy. I've told everyone that too.$"

ParcelRiverHouse1_OldMan_Text_2:
# 17 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: Fresh chips. Pale. I've said it\n"
	.string "to everyone in the valley. They nod.\l"
	.string "You're the one who went and looked.$"

ParcelRiverHouse1_OldMan_Text_3:
# 22 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: Fresh? FRESH? Cut to a point,\n"
	.string "chips still pale?\p"
	.string "…Fifty-one years. Here. I've carried\n"
	.string "this for luck since the pond went. It's\l"
	.string "brought me none. Maybe it's for\l"
	.string "carrying, not keeping.$"

ParcelRiverHouse1_OldMan_Text_4:
# 29 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: The clean reach, above the\n"
	.string "town, on the bank. A stump cut to a\l"
	.string "point. If it's there, it's there. If it\l"
	.string "isn't, don't spare me.$"

ParcelRiverHouse1_OldMan_Text_5:
# 33 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: The beaver pond. Above the\n"
	.string "town. We swam in it. The water was so\l"
	.string "still you could see the bottom.\p"
	.string "Then the trappers took the beavers and\n"
	.string "the Board took the pond. Nobody took\l"
	.string "the memory, I'll give them that.$"

ParcelRiverHouse1_OldMan_Text_6:
# 34 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD MAN: You walk the bank, don't you.\n"
	.string "The clean reach above the town. Look\l"
	.string "for a stump cut to a point, chips at the\l"
	.string "foot of it. Beaver sign.\p"
	.string "I'd give a lot to know. I'd give a lot to\n"
	.string "be wrong about it being gone.$"

ParcelRiverHouse1_OldWoman_Text_0:
# 43 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD WOMAN: He walks up to the dam every\n"
	.string "morning and comes back wet to the knee.\l"
	.string "Fifty-two years of the pond. I pack the\l"
	.string "lunch.\p"
	.string "I've started packing two. He meets\n"
	.string "people up there.$"

ParcelRiverHouse1_OldWoman_Text_1:
# 48 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD WOMAN: Fifty-one years of the\n"
	.string "pond, and now he walks up every morning\l"
	.string "to look for a beaver. I pack him a lunch.\l"
	.string "He comes back with wet boots and no\l"
	.string "beaver. He's happier than I've seen him.$"

ParcelRiverHouse1_OldWoman_Text_2:
# 53 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD WOMAN: He's stopped talking about\n"
	.string "the pond. He talks about HAUKFELL now.\l"
	.string "The ground that let go. He says that's a\l"
	.string "pond too, a slow one.\p"
	.string "Fifty-one years of one pond, and now a\n"
	.string "second. I've started counting again.$"

ParcelRiverHouse1_OldWoman_Text_3:
# 57 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "OLD WOMAN: He talks about the pond.\n"
	.string "Every day. I've stopped listening and\l"
	.string "started counting. Fifty-one years he's\l"
	.string "talked about that pond.$"

ParcelRiverHouse1_ReadDresser_Text_0:
# 63 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "On the dresser, a jar of pale wood chips,\n"
	.string "cut to a point. The old man carries one.\l"
	.string "The rest live here, for when he loses it.$"

ParcelRiverHouse1_ReadDrawer_Text_0:
# 68 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "A drawer of the old woman's counting:\n"
	.string "fifty-one years, in tally marks, on the\l"
	.string "backs of seed packets.$"

ParcelRiverHouse1_PaperAllocation_Text_0:
# 76 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "The Board's allocation notice, the new\n"
	.string "one. Fourteen plots, a flow for each,\l"
	.string "the clean reach kept slack, and six\l"
	.string "names under it in the Board's own type.\p"
	.string "The old man has written on the margin:\n"
	.string "fresh chips, pale, the beavers are back\l"
	.string "on the reach. He has underlined back.$"

ParcelRiverHouse1_PaperAllocation_Text_1:
# 78 "data/maps/ParcelRiverHouse1/scripts.pory"
	.string "The Board's allocation notice, the one\n"
	.string "that came through every door on the\l"
	.string "river. Fourteen plots, a flow for each, a\l"
	.string "reach reserved to the FOUNDATION.\l"
	.string "Signed by the Board. Nobody's name on\l"
	.string "it.\p"
	.string "The old man has written on the margin:\n"
	.string "who. Three times, like the miller.$"
