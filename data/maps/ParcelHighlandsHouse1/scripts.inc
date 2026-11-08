ParcelHighlandsHouse1_MapScripts::
	.byte 0


ParcelHighlandsHouse1_Man::
# 7 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	lock
# 8 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP_DONE, ParcelHighlandsHouse1_Man_2
# 14 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP_FOUND, ParcelHighlandsHouse1_Man_5
# 21 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP, ParcelHighlandsHouse1_Man_8
# 26 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_ARRIVAL, ParcelHighlandsHouse1_Man_11
# 32 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_Man_14
# 37 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_5, MSGBOX_DEFAULT
# 38 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_2:
# 10 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_5:
# 15 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	giveitem ITEM_HYPER_POTION, 3
# 17 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_MAREEP_DONE
# 18 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_8:
# 22 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_11:
# 27 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_MAREEP
# 29 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_14:
# 33 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_4, MSGBOX_DEFAULT
# 34 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end


ParcelHighlandsHouse1_Girl::
# 43 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	lock
# 44 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	faceplayer
# 45 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_Girl_2
# 50 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHouse1_Girl_5
# 55 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_2, MSGBOX_DEFAULT
# 56 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Girl_2:
# 46 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Girl_5:
# 51 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end


ParcelHighlandsHouse1_ReadDresser::
# 61 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse1_ReadDrawer::
# 66 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse1_Man_Text_0:
# 10 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Standing. You said standing. She'll\n"
	.string "come down when the slope stops\l"
	.string "frightening her, or she won't. Either\l"
	.string "way I know where she is. That's most of\l"
	.string "shepherding.$"

ParcelHighlandsHouse1_Man_Text_1:
# 15 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Standing? Legs braced? That's her.\n"
	.string "Good.\p"
	.string "Take these. The FOUNDATION sent a box\n"
	.string "for the relocations. I've no use for\l"
	.string "them where I'm not going.$"

ParcelHighlandsHouse1_Man_Text_2:
# 22 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Above the slide, on the scree.\n"
	.string "Don't bring her down. Just tell me she's\l"
	.string "standing.$"

ParcelHighlandsHouse1_Man_Text_3:
# 27 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: One of the MAREEP went up after\n"
	.string "the old grazing. The slope's moving and\l"
	.string "I can't go up on these knees.\p"
	.string "If you see her, don't bring her down.\n"
	.string "Just tell me she's standing.$"

ParcelHighlandsHouse1_Man_Text_4:
# 33 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: The leases are enjoined. The slope\n"
	.string "doesn't know. It'll keep moving at its\l"
	.string "own speed. So will I.$"

ParcelHighlandsHouse1_Man_Text_5:
# 37 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Sheep on the high ground until the\n"
	.string "ground stopped being ground. Now they\l"
	.string "graze the lower slope and I watch the\l"
	.string "upper one move.$"

ParcelHighlandsHouse1_Girl_Text_0:
# 46 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: Grandad went to the warming\n"
	.string "centre. He had the cocoa. He said it was\l"
	.string "good, and then he was quiet for a long\l"
	.string "time.$"

ParcelHighlandsHouse1_Girl_Text_1:
# 51 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: HOLLIS went down to the coast.\n"
	.string "The cocoa stopped the day after.\l"
	.string "Grandad said nothing's as much as you\l"
	.string "like, and then he said 'told you' very\l"
	.string "quietly.$"

ParcelHighlandsHouse1_Girl_Text_2:
# 55 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: The warming centre has cocoa.\n"
	.string "HOLLIS said we could have as much as we\l"
	.string "liked. Grandad said nothing's as much as\l"
	.string "you like.$"

ParcelHighlandsHouse1_ReadDresser_Text_0:
# 61 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "A mug on the dresser with the\n"
	.string "FOUNDATION crest, washed and put\l"
	.string "upside down. A child's mug beside it,\l"
	.string "right way up, with cocoa rings inside.$"

ParcelHighlandsHouse1_ReadDrawer_Text_0:
# 66 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "A drawer of mittens, in pairs, by size.\n"
	.string "The smallest pairs have never been\l"
	.string "worn. There was no snow to wear them in.$"
