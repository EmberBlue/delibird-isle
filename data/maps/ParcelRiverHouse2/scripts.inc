ParcelRiverHouse2_MapScripts::
	.byte 0


ParcelRiverHouse2_Woman::
# 4 "data/maps/ParcelRiverHouse2/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverHouse2/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse2_Woman_2
# 11 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse2_Woman_5
# 16 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Woman_Text_2, MSGBOX_DEFAULT
# 17 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end

ParcelRiverHouse2_Woman_2:
# 7 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Woman_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end

ParcelRiverHouse2_Woman_5:
# 12 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Woman_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end


ParcelRiverHouse2_Girl::
# 21 "data/maps/ParcelRiverHouse2/scripts.pory"
	lock
# 22 "data/maps/ParcelRiverHouse2/scripts.pory"
	faceplayer
# 23 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse2_Girl_2
# 28 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHouse2_Girl_5
# 33 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Girl_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end

ParcelRiverHouse2_Girl_2:
# 24 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Girl_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end

ParcelRiverHouse2_Girl_5:
# 29 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_Girl_Text_1, MSGBOX_DEFAULT
# 30 "data/maps/ParcelRiverHouse2/scripts.pory"
	release
	end


ParcelRiverHouse2_ReadDresser::
# 39 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse2_ReadShelf::
# 44 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelRiverHouse2_PaperMeterBook::
# 51 "data/maps/ParcelRiverHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHouse2_PaperMeterBook_2
# 54 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_PaperMeterBook_Text_1, MSGBOX_SIGN
ParcelRiverHouse2_PaperMeterBook_1:
	end

ParcelRiverHouse2_PaperMeterBook_2:
# 52 "data/maps/ParcelRiverHouse2/scripts.pory"
	msgbox ParcelRiverHouse2_PaperMeterBook_Text_0, MSGBOX_SIGN
	goto ParcelRiverHouse2_PaperMeterBook_1


ParcelRiverHouse2_Woman_Text_0:
# 7 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "WOMAN: My husband reads the meters for\n"
	.string "the Board. He read them to the hearing.\l"
	.string "Out loud. Fourteen plots. His voice held.\l"
	.string "I was proud, and I was frightened, and\l"
	.string "the pay's still steady.$"

ParcelRiverHouse2_Woman_Text_1:
# 12 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "WOMAN: He came home with the readings\n"
	.string "and told me what they said. First time in\l"
	.string "eleven years. Meltwater, all fourteen\l"
	.string "plots.\p"
	.string "I didn't ask. He told me. That's a\n"
	.string "different marriage. I'm not sure yet\l"
	.string "which I prefer.$"

ParcelRiverHouse2_Woman_Text_2:
# 16 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "WOMAN: My husband reads the meters for\n"
	.string "the Board. Good wage. Steady. I don't\l"
	.string "ask what the readings say. He doesn't\l"
	.string "tell me. That's a marriage.$"

ParcelRiverHouse2_Girl_Text_0:
# 24 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "GIRL: Dad read the river's ledger to a\n"
	.string "room full of people. I went. It's still\l"
	.string "not a book. It was a book for one\l"
	.string "afternoon.$"

ParcelRiverHouse2_Girl_Text_1:
# 29 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "GIRL: Dad says the river's a ledger and\n"
	.string "now the mountain's writing in it. I asked\l"
	.string "if mountains can write. He said they\l"
	.string "can't spell, but they're very loud.$"

ParcelRiverHouse2_Girl_Text_2:
# 33 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "GIRL: Dad says the river's a ledger. I\n"
	.string "thought a ledger was a book. The river\l"
	.string "isn't a book. I checked.$"

ParcelRiverHouse2_ReadDresser_Text_0:
# 39 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "A Board meter reader's badge on the\n"
	.string "dresser, and a child's drawing of a river\l"
	.string "with numbers in it instead of fish.$"

ParcelRiverHouse2_ReadShelf_Text_0:
# 44 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "Board ledgers, one per year. The current\n"
	.string "one is at home instead of at the Board.\l"
	.string "That is new, and it is not an accident.$"

ParcelRiverHouse2_PaperMeterBook_Text_0:
# 52 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "Her husband's meter book, the carbon\n"
	.string "side, open on the table now where\l"
	.string "anyone can see it. Fourteen plots, a\l"
	.string "reading a week, and the hearing's stamp\l"
	.string "on the page he read aloud.\p"
	.string "She has read it. She says the numbers\n"
	.string "were always in the house; she just\l"
	.string "needed somebody outside it to say they\l"
	.string "counted.$"

ParcelRiverHouse2_PaperMeterBook_Text_1:
# 54 "data/maps/ParcelRiverHouse2/scripts.pory"
	.string "Her husband's meter book, the carbon\n"
	.string "side. Fourteen plots, a reading a week,\l"
	.string "in a hand that does not change. Eleven\l"
	.string "years of NORMAL in the Board's column\l"
	.string "beside his numbers, which are not normal\l"
	.string "and never were.\p"
	.string "She has never read it. She keeps it dry.$"
