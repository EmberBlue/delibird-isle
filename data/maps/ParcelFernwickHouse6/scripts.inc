ParcelFernwickHouse6_MapScripts::
	.byte 0


ParcelFernwickHouse6_Man::
# 7 "data/maps/ParcelFernwickHouse6/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse6/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickHouse6_Man_2
# 14 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse6_Man_5
# 19 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse6_Man_8
# 24 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Man_2:
# 10 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Man_5:
# 15 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Man_8:
# 20 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end


ParcelFernwickHouse6_Girl::
# 30 "data/maps/ParcelFernwickHouse6/scripts.pory"
	lock
# 31 "data/maps/ParcelFernwickHouse6/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickHouse6_Girl_2
# 37 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse6_Girl_5
# 42 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse6_Girl_8
# 47 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Girl_2:
# 33 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Girl_5:
# 38 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Girl_8:
# 43 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end


ParcelFernwickHouse6_ReadDresser::
# 53 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse6_ReadShelf::
# 58 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse6_ReadPantry::
# 63 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_ReadPantry_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse6_Man_Text_0:
# 10 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: Feed the review's clerks the first\n"
	.string "Tuesday, the Survey girl Thursdays,\l"
	.string "HALE whenever he remembers to eat.\p"
	.string "Nobody's thin this year. I check.$"

ParcelFernwickHouse6_Man_Text_1:
# 15 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: Fed the hearing's clerks for a\n"
	.string "week. They eat like people who sit all\l"
	.string "day. They have.$"

ParcelFernwickHouse6_Man_Text_2:
# 20 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: Rangers back from the basin eat\n"
	.string "like they've been digging, because they\l"
	.string "have. Sandbags.\p"
	.string "I've started putting sugar in the pot\n"
	.string "without being asked. Nobody's objected.$"

ParcelFernwickHouse6_Man_Text_3:
# 24 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: I cook for the District Station.\n"
	.string "Rangers eat like people who've walked\l"
	.string "all day, because they have.$"

ParcelFernwickHouse6_Girl_Text_0:
# 33 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: Dad says the whole region's still\n"
	.string "eating what you cooked. He says you\l"
	.string "don't have to be hungry to be fed.\p"
	.string "I don't understand it. He says I will.$"

ParcelFernwickHouse6_Girl_Text_1:
# 38 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: Dad says you fed a whole region a\n"
	.string "truth. He says that's cooking.$"

ParcelFernwickHouse6_Girl_Text_2:
# 43 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: Dad says the river people fed the\n"
	.string "whole meeting from one pot and nobody\l"
	.string "went home hungry or quiet.\p"
	.string "That IS the same job. I told you.$"

ParcelFernwickHouse6_Girl_Text_3:
# 47 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: I'm going to be a ranger. Or a\n"
	.string "cook. Dad says they're the same job.$"

ParcelFernwickHouse6_ReadDresser_Text_0:
# 53 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "A cook's apron on the dresser, washed\n"
	.string "thin. Embroidered on the pocket, badly,\l"
	.string "by a child: RANGER.$"

ParcelFernwickHouse6_ReadShelf_Text_0:
# 58 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "Cookbooks, and between them the\n"
	.string "District Station duty roster, so he\l"
	.string "knows how many to feed. Tonight's\l"
	.string "number is circled twice.$"

ParcelFernwickHouse6_ReadPantry_Text_0:
# 63 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "A sugar jar with a note taped to it: FOR\n"
	.string "THE BASIN LOT. NO ARGUMENTS.$"
