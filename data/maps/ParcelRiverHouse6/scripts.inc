ParcelRiverHouse6_MapScripts::
	.byte 0


ParcelRiverHouse6_Man::
# 7 "data/maps/ParcelRiverHouse6/scripts.pory"
	lock
# 8 "data/maps/ParcelRiverHouse6/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse6_Man_2
# 14 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse6_Man_5
# 19 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse6_Man_8
# 24 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Man_2:
# 10 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Man_5:
# 15 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Man_8:
# 20 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Man_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end


ParcelRiverHouse6_Girl::
# 30 "data/maps/ParcelRiverHouse6/scripts.pory"
	lock
# 31 "data/maps/ParcelRiverHouse6/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverHouse6_Girl_2
# 37 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse6_Girl_5
# 42 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse6_Girl_8
# 47 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Girl_2:
# 33 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Girl_5:
# 38 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end

ParcelRiverHouse6_Girl_8:
# 43 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_Girl_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRiverHouse6/scripts.pory"
	release
	end


ParcelRiverHouse6_ReadDresser::
# 53 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse6_ReadShelf::
# 58 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse6_PaperRoundSheet::
# 65 "data/maps/ParcelRiverHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse6_PaperRoundSheet_2
# 68 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_PaperRoundSheet_Text_1, MSGBOX_SIGN
ParcelRiverHouse6_PaperRoundSheet_1:
	end

ParcelRiverHouse6_PaperRoundSheet_2:
# 66 "data/maps/ParcelRiverHouse6/scripts.pory"
	msgbox ParcelRiverHouse6_PaperRoundSheet_Text_0, MSGBOX_SIGN
	goto ParcelRiverHouse6_PaperRoundSheet_1


ParcelRiverHouse6_Man_Text_0:
# 10 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: SLUICE has me read the spine twice\n"
	.string "a quarter now and sign both. 'Meltwater,\l"
	.string "HAUKFELL' is printed on the form.\p"
	.string "The Board reads what's printed. I\n"
	.string "printed it.$"

ParcelRiverHouse6_Man_Text_1:
# 15 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: SLUICE had me re-read every gauge\n"
	.string "on the spine after the hearing. Same\l"
	.string "numbers. She wanted them in my hand,\l"
	.string "not the Board's.$"

ParcelRiverHouse6_Man_Text_2:
# 20 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: Readings are up, all fourteen\n"
	.string "plots. The Board wrote 'seasonal'. I\l"
	.string "wrote 'meltwater, HAUKFELL'. The Board\l"
	.string "reads what I write, then writes over it.\p"
	.string "I've started keeping the first sheet.\n"
	.string "SLUICE's idea. She's full of them.$"

ParcelRiverHouse6_Man_Text_3:
# 24 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "MAN: Meter reader for the WATER BOARD.\n"
	.string "I read what the river does. The Board\l"
	.string "reads what I write. Different things,\l"
	.string "sometimes.$"

ParcelRiverHouse6_Girl_Text_0:
# 33 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: The river's budget balanced. Dad\n"
	.string "says. I asked if the mountain paid it\l"
	.string "back. He said no, the mountain's still\l"
	.string "spending, but we know what it's\l"
	.string "spending now.\p"
	.string "Knowing is in the budget, he says.$"

ParcelRiverHouse6_Girl_Text_1:
# 38 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: The river's budget got bigger!\n"
	.string "Dad says it's not money. I said I know,\l"
	.string "Dad.$"

ParcelRiverHouse6_Girl_Text_2:
# 43 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: Dad says the mountain's spending\n"
	.string "the river's budget. I said that's\l"
	.string "stealing. He said it's accounting. I said\l"
	.string "that's the same thing. He laughed, but\l"
	.string "not the good laugh.$"

ParcelRiverHouse6_Girl_Text_3:
# 47 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "GIRL: Dad says the river has a budget. I\n"
	.string "said rivers don't have money. He said\l"
	.string "that's the problem.$"

ParcelRiverHouse6_ReadDresser_Text_0:
# 53 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "A first sheet of meter readings on the\n"
	.string "dresser, the real one, kept at home.\l"
	.string "SLUICE's idea.\p"
	.string "Fourteen plots. The word MELTWATER,\n"
	.string "written small.$"

ParcelRiverHouse6_ReadShelf_Text_0:
# 58 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "A child's arithmetic book, open at a\n"
	.string "page about budgets. In the margin, in a\l"
	.string "child's hand: RIVERS DON'T HAVE MONEY.$"

ParcelRiverHouse6_PaperRoundSheet_Text_0:
# 66 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "The gauge round sheet. The Board's\n"
	.string "column says MELTWATER now, in type,\l"
	.string "with a reference to the Station's book.\l"
	.string "His column says: told you, in pencil,\l"
	.string "once, and then stops saying it.\p"
	.string "SLUICE had him re-read every gauge\n"
	.string "after the sitting. Same numbers. She\l"
	.string "wanted the numbers to be able to say\l"
	.string "so.$"

ParcelRiverHouse6_PaperRoundSheet_Text_1:
# 68 "data/maps/ParcelRiverHouse6/scripts.pory"
	.string "The gauge round sheet, fourteen gauges\n"
	.string "up the spine, one column a week. In the\l"
	.string "Board's column: SEASONAL. In his: the\l"
	.string "same numbers, and beside them, in\l"
	.string "pencil, what he thinks they are.\p"
	.string "MELTWATER, HAUKFELL. He has written it\n"
	.string "eleven times. The Board has never once\l"
	.string "written it back.$"
