ParcelFernwickHouse5_MapScripts::
	.byte 0


ParcelFernwickHouse5_OldMan::
# 7 "data/maps/ParcelFernwickHouse5/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse5/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PAGE_DONE, ParcelFernwickHouse5_OldMan_2
# 14 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PAGE_FOUND, ParcelFernwickHouse5_OldMan_5
# 21 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PAGE, ParcelFernwickHouse5_OldMan_8
# 26 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickHouse5_OldMan_11
# 32 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse5_OldMan_14
# 37 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_5, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_OldMan_2:
# 10 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_OldMan_5:
# 15 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelFernwickHouse5/scripts.pory"
	giveitem ITEM_PP_UP
# 17 "data/maps/ParcelFernwickHouse5/scripts.pory"
	setflag FLAG_SKALD_Q_PAGE_DONE
# 18 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_OldMan_8:
# 22 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_OldMan_11:
# 27 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwickHouse5/scripts.pory"
	setflag FLAG_SKALD_Q_PAGE
# 29 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_OldMan_14:
# 33 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_OldMan_Text_4, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end


ParcelFernwickHouse5_Woman::
# 43 "data/maps/ParcelFernwickHouse5/scripts.pory"
	lock
# 44 "data/maps/ParcelFernwickHouse5/scripts.pory"
	faceplayer
# 45 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse5_Woman_2
# 50 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse5_Woman_5
# 55 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_Woman_Text_2, MSGBOX_DEFAULT
# 56 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_Woman_2:
# 46 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_Woman_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end

ParcelFernwickHouse5_Woman_5:
# 51 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_Woman_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelFernwickHouse5/scripts.pory"
	release
	end


ParcelFernwickHouse5_ReadDresser::
# 61 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse5_ReadDrawer::
# 66 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse5_PaperPondLedger::
# 73 "data/maps/ParcelFernwickHouse5/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse5_PaperPondLedger_2
# 76 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_PaperPondLedger_Text_1, MSGBOX_SIGN
ParcelFernwickHouse5_PaperPondLedger_1:
	end

ParcelFernwickHouse5_PaperPondLedger_2:
# 74 "data/maps/ParcelFernwickHouse5/scripts.pory"
	msgbox ParcelFernwickHouse5_PaperPondLedger_Text_0, MSGBOX_SIGN
	goto ParcelFernwickHouse5_PaperPondLedger_1


ParcelFernwickHouse5_OldMan_Text_0:
# 10 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: Twenty-eight pairs. It's back\n"
	.string "in the book, pulp and all. A book with a\l"
	.string "hole in it is a book with a hole in it.\l"
	.string "Mine's whole.$"

ParcelFernwickHouse5_OldMan_Text_1:
# 15 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: You found it. Twenty-eight\n"
	.string "pairs. I remember writing that. I\l"
	.string "remember not believing it.\p"
	.string "Take this. I've no use for it now, and\n"
	.string "HALE won't take presents.$"

ParcelFernwickHouse5_OldMan_Text_2:
# 22 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: The marsh page. The pond's\n"
	.string "edge, the far bank, where the CORPS dug.\l"
	.string "If it's anywhere.$"

ParcelFernwickHouse5_OldMan_Text_3:
# 27 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: One page is missing from the\n"
	.string "'98 book. The marsh page. I dropped it\l"
	.string "at the pond the day I retired and the\l"
	.string "CORPS dug the pond out over it last\l"
	.string "spring.\p"
	.string "If you're passing the far bank. You'll\n"
	.string "know it; it'll be the only paper in the\l"
	.string "water.$"

ParcelFernwickHouse5_OldMan_Text_4:
# 33 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: HALE came by after the\n"
	.string "hearing. Didn't say much. Sat in that\l"
	.string "chair for an hour. That's him saying a\l"
	.string "lot.$"

ParcelFernwickHouse5_OldMan_Text_5:
# 37 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "OLD MAN: Thirty years in the CORPS. We\n"
	.string "counted everything and saved less than\l"
	.string "we counted.\p"
	.string "HALE was my cadet. He still stands like\n"
	.string "one.$"

ParcelFernwickHouse5_Woman_Text_0:
# 46 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "WOMAN: He got the notebooks out and\n"
	.string "read your filing against them. Then he\l"
	.string "put them away and said 'good'. Just\l"
	.string "that.$"

ParcelFernwickHouse5_Woman_Text_1:
# 51 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "WOMAN: He took one of the old\n"
	.string "notebooks out of the chest last night.\l"
	.string "The river one. He read it with the\l"
	.string "Board's minutes beside it.\p"
	.string "He said the numbers matched. Then he\n"
	.string "said that was the worst thing he'd\l"
	.string "heard all year.$"

ParcelFernwickHouse5_Woman_Text_2:
# 55 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "WOMAN: He keeps his old notebooks in\n"
	.string "the chest. Every page is a river that\l"
	.string "isn't there now.$"

ParcelFernwickHouse5_ReadDresser_Text_0:
# 61 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "On the dresser, a pen with a bitten end\n"
	.string "and a pair of reading glasses folded\l"
	.string "over it, waiting.$"

ParcelFernwickHouse5_ReadDrawer_Text_0:
# 66 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "The chest. Old notebooks in the top\n"
	.string "drawer, each one a river.\p"
	.string "You don't open them. You know what a\n"
	.string "page full of a place that isn't there\l"
	.string "feels like under your hand.$"

ParcelFernwickHouse5_PaperPondLedger_Text_0:
# 74 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "The old man's own pond book. The spring\n"
	.string "after the sitting: twenty-eight pairs,\l"
	.string "fourteen paces, and a third column he\l"
	.string "has never kept before: WHO READ IT.\p"
	.string "One name, yours, in capitals. He says a\n"
	.string "count somebody else has read is a\l"
	.string "different kind of number.$"

ParcelFernwickHouse5_PaperPondLedger_Text_1:
# 76 "data/maps/ParcelFernwickHouse5/scripts.pory"
	.string "The old man's own pond book, kept since\n"
	.string "before the Survey's. One line a spring:\l"
	.string "WINGULL, pairs. Twenty-eight.\l"
	.string "Twenty-eight. Twenty-eight.\p"
	.string "Beside the last few: the water, in paces\n"
	.string "from the stone. Twelve. Fourteen.\l"
	.string "Fourteen. He writes the paces smaller,\l"
	.string "as if ashamed of them.$"
