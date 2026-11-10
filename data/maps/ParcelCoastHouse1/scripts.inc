ParcelCoastHouse1_MapScripts::
	.byte 0


ParcelCoastHouse1_Woman::
# 4 "data/maps/ParcelCoastHouse1/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastHouse1_Woman_2
# 11 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse1_Woman_5
# 16 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHouse1_Woman_8
# 21 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_3, MSGBOX_DEFAULT
# 22 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Woman_2:
# 7 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Woman_5:
# 12 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Woman_8:
# 17 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Woman_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end


ParcelCoastHouse1_Boy::
# 26 "data/maps/ParcelCoastHouse1/scripts.pory"
	lock
# 27 "data/maps/ParcelCoastHouse1/scripts.pory"
	faceplayer
# 28 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastHouse1_Boy_3
ParcelCoastHouse1_Boy_1:
# 33 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse1_Boy_7
# 38 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_DONE, ParcelCoastHouse1_Boy_10
# 43 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_FOUND, ParcelCoastHouse1_Boy_13
# 50 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_4, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_2:
# 29 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_3:
# 28 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SHELL_DONE, ParcelCoastHouse1_Boy_2
	goto ParcelCoastHouse1_Boy_1

ParcelCoastHouse1_Boy_7:
# 34 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_10:
# 39 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end

ParcelCoastHouse1_Boy_13:
# 44 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_Boy_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelCoastHouse1/scripts.pory"
	giveitem ITEM_DIVE_BALL, 3
# 46 "data/maps/ParcelCoastHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_SHELL_DONE
# 47 "data/maps/ParcelCoastHouse1/scripts.pory"
	release
	end


ParcelCoastHouse1_ReadDresser::
# 56 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse1_ReadDrawer::
# 61 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelCoastHouse1_PaperWageSlips::
# 68 "data/maps/ParcelCoastHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHouse1_PaperWageSlips_2
# 71 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_PaperWageSlips_Text_1, MSGBOX_SIGN
ParcelCoastHouse1_PaperWageSlips_1:
	end

ParcelCoastHouse1_PaperWageSlips_2:
# 69 "data/maps/ParcelCoastHouse1/scripts.pory"
	msgbox ParcelCoastHouse1_PaperWageSlips_Text_0, MSGBOX_SIGN
	goto ParcelCoastHouse1_PaperWageSlips_1


ParcelCoastHouse1_Woman_Text_0:
# 7 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: Husband on four days, son's boat\n"
	.string "out two, daughter typing something she\l"
	.string "won't say. Three wages again. One crest\l"
	.string "less.\p"
	.string "I've stopped counting the crests.$"

ParcelCoastHouse1_Woman_Text_1:
# 12 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: Husband on half days, son's boat\n"
	.string "grounded to spring, daughter still at\l"
	.string "the FOUNDATION desk typing the review.\l"
	.string "Three wages, one cramped house, and the\l"
	.string "first dinner in years where nobody\l"
	.string "talked about fish.$"

ParcelCoastHouse1_Woman_Text_2:
# 17 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: Three wages, one crest, and this\n"
	.string "week the crest is nervous. My daughter\l"
	.string "says the desk's been rewriting\l"
	.string "brochures since the ranger's survey\l"
	.string "went to the Board.\p"
	.string "Arithmetic's still arithmetic. But\n"
	.string "somebody's checking the sums for once.$"

ParcelCoastHouse1_Woman_Text_3:
# 21 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "WOMAN: My husband's on the cannery\n"
	.string "line, my son's on the boats, my\l"
	.string "daughter's at the FOUNDATION desk.\l"
	.string "Three wages, one crest. If it goes, we\l"
	.string "go with it. That's not loyalty. That's\l"
	.string "arithmetic.$"

ParcelCoastHouse1_Boy_Text_0:
# 29 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: I found the second one. Off the\n"
	.string "breakwater, where GYDA said. It's on the\l"
	.string "sill with the first.\p"
	.string "Mum says two is a pair. I'm going to make\n"
	.string "it a row.$"

ParcelCoastHouse1_Boy_Text_1:
# 34 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: GYDA says the water's clearer off\n"
	.string "the breakwater. I'm going to dive it\l"
	.string "when I'm old enough. Mum says that's the\l"
	.string "first thing I've said that she can plan\l"
	.string "for.$"

ParcelCoastHouse1_Boy_Text_2:
# 39 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: It's on the windowsill. Mum says\n"
	.string "it's the first real one in years. I'm\l"
	.string "going to find the second one myself.$"

ParcelCoastHouse1_Boy_Text_3:
# 44 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: A SHELL! A real one! Whole! Mum,\n"
	.string "LOOK!\p"
	.string "You can have these. They're for divers.\n"
	.string "I'm not one yet. You can give them back\l"
	.string "when I am.$"

ParcelCoastHouse1_Boy_Text_4:
# 50 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "BOY: I'm going to be a diver! GYDA says\n"
	.string "there's nothing down there to see. I'll\l"
	.string "see it anyway.\p"
	.string "I've never found a shell on our beach.\n"
	.string "Not one. Just drum rings. If you find\l"
	.string "one, that's proof there's something.$"

ParcelCoastHouse1_ReadDresser_Text_0:
# 56 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "Three pay slips in a row on the dresser,\n"
	.string "each with the same crest in the corner.\l"
	.string "Somebody has lined up the crests so\l"
	.string "they all face the same way.$"

ParcelCoastHouse1_ReadDrawer_Text_0:
# 61 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "The top drawer holds a child's diving\n"
	.string "mask, still in its box, and a shell on a\l"
	.string "bed of cotton wool.\p"
	.string "The box has been opened and closed a\n"
	.string "great many times.$"

ParcelCoastHouse1_PaperWageSlips_Text_0:
# 69 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "Three wage slips pinned to the wall.\n"
	.string "MEREHOLT COASTAL, half days, full pay,\l"
	.string "with the union's stamp. The boat: a\l"
	.string "number at last, small, in the son's hand.\l"
	.string "THE FOUNDATION slip is gone.\p"
	.string "There is a fourth slip, folded so only\n"
	.string "the crest shows. Nobody has unfolded\l"
	.string "it.$"

ParcelCoastHouse1_PaperWageSlips_Text_1:
# 71 "data/maps/ParcelCoastHouse1/scripts.pory"
	.string "Three wage slips pinned to the wall in a\n"
	.string "row. MEREHOLT COASTAL, half days. The\l"
	.string "boat: a blank, with a date the boat is\l"
	.string "grounded to. THE FOUNDATION, full week,\l"
	.string "the crest in the corner.\p"
	.string "Three wages, one crest, the woman says,\n"
	.string "and the crest pays for the other two.$"
