ParcelFernwickFlats_MapScripts::
	.byte 0


ParcelFernwickFlats_Man::
# 5 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickFlats_Man_2
# 12 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFlats_Man_5
# 17 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickFlats_Man_8
# 22 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_3, MSGBOX_DEFAULT
# 23 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Man_2:
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Man_5:
# 13 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Man_8:
# 18 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Man_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_Girl::
# 28 "data/maps/ParcelFernwickFlats/scripts.pory"
	lock
# 29 "data/maps/ParcelFernwickFlats/scripts.pory"
	faceplayer
# 30 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickFlats_Girl_2
# 35 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFlats_Girl_5
# 40 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickFlats_Girl_8
# 45 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Girl_2:
# 31 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Girl_5:
# 36 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end

ParcelFernwickFlats_Girl_8:
# 41 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_Girl_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/ParcelFernwickFlats/scripts.pory"
	release
	end


ParcelFernwickFlats_ReadFridge::
# 51 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_ReadFridge_Text_0, MSGBOX_SIGN
	end


ParcelFernwickFlats_ReadBunk::
# 56 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_ReadBunk_Text_0, MSGBOX_SIGN
	end


ParcelFernwickFlats_PaperRentCard::
# 63 "data/maps/ParcelFernwickFlats/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickFlats_PaperRentCard_2
# 66 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_PaperRentCard_Text_1, MSGBOX_SIGN
ParcelFernwickFlats_PaperRentCard_1:
	end

ParcelFernwickFlats_PaperRentCard_2:
# 64 "data/maps/ParcelFernwickFlats/scripts.pory"
	msgbox ParcelFernwickFlats_PaperRentCard_Text_0, MSGBOX_SIGN
	goto ParcelFernwickFlats_PaperRentCard_1


ParcelFernwickFlats_Man_Text_0:
# 8 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Six rangers, one bathroom, and\n"
	.string "nobody reads the transcript any more.\l"
	.string "It's on the shelf. We did that; now we do\l"
	.string "the next thing.\p"
	.string "That's the job HALE never explained and\n"
	.string "didn't need to.$"

ParcelFernwickFlats_Man_Text_1:
# 13 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom, and a transcript on the\l"
	.string "kitchen table that everyone's read\l"
	.string "twice. We reduce harm. We still don't\l"
	.string "reduce queues.$"

ParcelFernwickFlats_Man_Text_2:
# 18 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Two of us got sent to the basin\n"
	.string "for the relief line and came back not\l"
	.string "talking. Not sulking. Thinking.\p"
	.string "Six rangers, one bathroom, and now a\n"
	.string "queue for the kettle as well.$"

ParcelFernwickFlats_Man_Text_3:
# 22 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "MAN: Corps housing. Six rangers, one\n"
	.string "bathroom.\p"
	.string "We reduce harm. We do not reduce\n"
	.string "queues.$"

ParcelFernwickFlats_Girl_Text_0:
# 31 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy laughs at work sometimes\n"
	.string "now. Not a lot. He says the job's got\l"
	.string "laughing in it if you do it long enough.\p"
	.string "He said it quietly.$"

ParcelFernwickFlats_Girl_Text_1:
# 36 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy came home from the hearing\n"
	.string "and said 'we reduced some harm'. Then he\l"
	.string "laughed. I didn't know the job had\l"
	.string "laughing in it.$"

ParcelFernwickFlats_Girl_Text_2:
# 41 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy came back from the river\n"
	.string "smelling like a meeting. That's a smell.\l"
	.string "Coffee and paper.\p"
	.string "He said six people stood up. I asked if\n"
	.string "he did. He said he was holding the door.\l"
	.string "That counts.$"

ParcelFernwickFlats_Girl_Text_3:
# 45 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "GIRL: Daddy's a RANGER. He says he\n"
	.string "doesn't win, he reduces harm.\p"
	.string "I told him that's a weird job.$"

ParcelFernwickFlats_ReadFridge_Text_0:
# 51 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "Six names on the fridge, six shelves,\n"
	.string "one note: WHOEVER TOOK THE BASIN LOT'S\l"
	.string "SUGAR, THE COOK KNOWS.$"

ParcelFernwickFlats_ReadBunk_Text_0:
# 56 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "Six bunks, one bathroom. Each bunk has\n"
	.string "a boot print on the wall at the same\l"
	.string "height, where a ranger lies down without\l"
	.string "taking the boots off first.$"

ParcelFernwickFlats_PaperRentCard_Text_0:
# 64 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "A rent card for the flat, stamped\n"
	.string "weekly. The two FOUNDATION stamps have\l"
	.string "been struck through and CORPS written\l"
	.string "over them, and a note: housing budget\l"
	.string "restored, Director's office.\p"
	.string "The man says he never understood the\n"
	.string "stamps and understands the correction\l"
	.string "less. He has kept the card anyway.\l"
	.string "Everything in this town keeps its paper\l"
	.string "now.$"

ParcelFernwickFlats_PaperRentCard_Text_1:
# 66 "data/maps/ParcelFernwickFlats/scripts.pory"
	.string "A rent card for the flat, stamped\n"
	.string "weekly. The landlord is the Corps'\l"
	.string "housing office; the flats were built for\l"
	.string "provisionals and their families and the\l"
	.string "stamps are small and reliable.\p"
	.string "Two weeks are stamped FOUNDATION\n"
	.string "instead of CORPS. Nobody in the flat\l"
	.string "knows what that means. Nobody has\l"
	.string "asked.$"
