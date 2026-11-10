ParcelHighlandsHouse1_MapScripts::
	.byte 0


ParcelHighlandsHouse1_Man::
# 7 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	lock
# 8 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsHouse1_Man_3
ParcelHighlandsHouse1_Man_1:
# 14 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP_DONE, ParcelHighlandsHouse1_Man_7
# 19 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP_FOUND, ParcelHighlandsHouse1_Man_10
# 26 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP, ParcelHighlandsHouse1_Man_13
# 31 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_ARRIVAL, ParcelHighlandsHouse1_Man_16
# 37 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_Man_19
# 42 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_6, MSGBOX_DEFAULT
# 43 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_2:
# 10 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_3:
# 9 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_MAREEP_DONE, ParcelHighlandsHouse1_Man_2
	goto ParcelHighlandsHouse1_Man_1

ParcelHighlandsHouse1_Man_7:
# 15 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_10:
# 20 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	giveitem ITEM_HYPER_POTION, 3
# 22 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_MAREEP_DONE
# 23 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_13:
# 27 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_16:
# 32 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_4, MSGBOX_DEFAULT
# 33 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_MAREEP
# 34 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Man_19:
# 38 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Man_Text_5, MSGBOX_DEFAULT
# 39 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end


ParcelHighlandsHouse1_Girl::
# 48 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	lock
# 49 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	faceplayer
# 50 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsHouse1_Girl_2
# 55 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_Girl_5
# 60 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHouse1_Girl_8
# 65 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_3, MSGBOX_DEFAULT
# 66 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Girl_2:
# 51 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Girl_5:
# 56 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end

ParcelHighlandsHouse1_Girl_8:
# 61 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_Girl_Text_2, MSGBOX_DEFAULT
# 62 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	release
	end


ParcelHighlandsHouse1_ReadDresser::
# 71 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse1_ReadDrawer::
# 76 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse1_PaperGrantLetter::
# 83 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse1_PaperGrantLetter_2
# 86 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_PaperGrantLetter_Text_1, MSGBOX_SIGN
ParcelHighlandsHouse1_PaperGrantLetter_1:
	end

ParcelHighlandsHouse1_PaperGrantLetter_2:
# 84 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	msgbox ParcelHighlandsHouse1_PaperGrantLetter_Text_0, MSGBOX_SIGN
	goto ParcelHighlandsHouse1_PaperGrantLetter_1


ParcelHighlandsHouse1_Man_Text_0:
# 10 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: She came down. In the autumn, by\n"
	.string "herself, when the slope went quiet. She\l"
	.string "stands in the yard now and faces it.\p"
	.string "I don't tell her it's safe. I don't know\n"
	.string "that.$"

ParcelHighlandsHouse1_Man_Text_1:
# 15 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Standing. You said standing. She'll\n"
	.string "come down when the slope stops\l"
	.string "frightening her, or she won't. Either\l"
	.string "way I know where she is. That's most of\l"
	.string "shepherding.$"

ParcelHighlandsHouse1_Man_Text_2:
# 20 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Standing? Legs braced? That's her.\n"
	.string "Good.\p"
	.string "Take these. The FOUNDATION sent a box\n"
	.string "for the relocations. I've no use for\l"
	.string "them where I'm not going.$"

ParcelHighlandsHouse1_Man_Text_3:
# 27 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Above the slide, on the scree.\n"
	.string "Don't bring her down. Just tell me she's\l"
	.string "standing.$"

ParcelHighlandsHouse1_Man_Text_4:
# 32 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: One of the MAREEP went up after\n"
	.string "the old grazing. The slope's moving and\l"
	.string "I can't go up on these knees.\p"
	.string "If you see her, don't bring her down.\n"
	.string "Just tell me she's standing.$"

ParcelHighlandsHouse1_Man_Text_5:
# 38 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: The leases are enjoined. The slope\n"
	.string "doesn't know. It'll keep moving at its\l"
	.string "own speed. So will I.$"

ParcelHighlandsHouse1_Man_Text_6:
# 42 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "MAN: Sheep on the high ground until the\n"
	.string "ground stopped being ground. Now they\l"
	.string "graze the lower slope and I watch the\l"
	.string "upper one move.$"

ParcelHighlandsHouse1_Girl_Text_0:
# 51 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: Grandad goes to the centre for\n"
	.string "the cocoa and comes back and tells me\l"
	.string "what everyone said. He never used to\l"
	.string "tell me anything.\p"
	.string "The cocoa's good, he says. I think it's\n"
	.string "the telling.$"

ParcelHighlandsHouse1_Girl_Text_1:
# 56 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: Grandad went to the warming\n"
	.string "centre. He had the cocoa. He said it was\l"
	.string "good, and then he was quiet for a long\l"
	.string "time.$"

ParcelHighlandsHouse1_Girl_Text_2:
# 61 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: HOLLIS went down to the coast.\n"
	.string "The cocoa stopped the day after.\l"
	.string "Grandad said nothing's as much as you\l"
	.string "like, and then he said 'told you' very\l"
	.string "quietly.$"

ParcelHighlandsHouse1_Girl_Text_3:
# 65 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "GIRL: The warming centre has cocoa.\n"
	.string "HOLLIS said we could have as much as we\l"
	.string "liked. Grandad said nothing's as much as\l"
	.string "you like.$"

ParcelHighlandsHouse1_ReadDresser_Text_0:
# 71 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "A mug on the dresser with the\n"
	.string "FOUNDATION crest, washed and put\l"
	.string "upside down. A child's mug beside it,\l"
	.string "right way up, with cocoa rings inside.$"

ParcelHighlandsHouse1_ReadDrawer_Text_0:
# 76 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "A drawer of mittens, in pairs, by size.\n"
	.string "The smallest pairs have never been\l"
	.string "worn. There was no snow to wear them in.$"

ParcelHighlandsHouse1_PaperGrantLetter_Text_0:
# 84 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "The relocation grant letter, and across\n"
	.string "its face in the Council's stamp: VOID\l"
	.string "PENDING SURVEY. The survey is yours.\p"
	.string "The man has pinned it where the girl can\n"
	.string "reach it. She has drawn a house on the\l"
	.string "back, standing, legs braced.$"

ParcelHighlandsHouse1_PaperGrantLetter_Text_1:
# 86 "data/maps/ParcelHighlandsHouse1/scripts.pory"
	.string "The relocation grant letter, in its\n"
	.string "envelope, on the shelf where the girl\l"
	.string "cannot reach it. MEREHOLT FOUNDATION:\l"
	.string "RESETTLEMENT ASSISTANCE, HAUKFELL\l"
	.string "SLOPE. A sum. A deadline. A box to sign.\p"
	.string "The box is empty. The envelope has been\n"
	.string "opened and closed so many times the\l"
	.string "flap has gone soft.$"
