ParcelFernwickHouse6_MapScripts::
	.byte 0


ParcelFernwickHouse6_Man::
# 7 "data/maps/ParcelFernwickHouse6/scripts.pory"
	lock
# 8 "data/maps/ParcelFernwickHouse6/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse6_Man_2
# 14 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse6_Man_5
# 19 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Man_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelFernwickHouse6/scripts.pory"
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


ParcelFernwickHouse6_Girl::
# 25 "data/maps/ParcelFernwickHouse6/scripts.pory"
	lock
# 26 "data/maps/ParcelFernwickHouse6/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse6_Girl_2
# 32 "data/maps/ParcelFernwickHouse6/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse6_Girl_5
# 37 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Girl_2:
# 28 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end

ParcelFernwickHouse6_Girl_5:
# 33 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_Girl_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickHouse6/scripts.pory"
	release
	end


ParcelFernwickHouse6_ReadDresser::
# 43 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse6_ReadShelf::
# 48 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse6_ReadPantry::
# 53 "data/maps/ParcelFernwickHouse6/scripts.pory"
	msgbox ParcelFernwickHouse6_ReadPantry_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse6_Man_Text_0:
# 10 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: Fed the hearing's clerks for a\n"
	.string "week. They eat like people who sit all\l"
	.string "day. They have.$"

ParcelFernwickHouse6_Man_Text_1:
# 15 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: Rangers back from the basin eat\n"
	.string "like they've been digging, because they\l"
	.string "have. Sandbags.\p"
	.string "I've started putting sugar in the pot\n"
	.string "without being asked. Nobody's objected.$"

ParcelFernwickHouse6_Man_Text_2:
# 19 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "MAN: I cook for the District Station.\n"
	.string "Rangers eat like people who've walked\l"
	.string "all day, because they have.$"

ParcelFernwickHouse6_Girl_Text_0:
# 28 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: Dad says you fed a whole region a\n"
	.string "truth. He says that's cooking.$"

ParcelFernwickHouse6_Girl_Text_1:
# 33 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: Dad says the river people fed the\n"
	.string "whole meeting from one pot and nobody\l"
	.string "went home hungry or quiet.\p"
	.string "That IS the same job. I told you.$"

ParcelFernwickHouse6_Girl_Text_2:
# 37 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "GIRL: I'm going to be a ranger. Or a\n"
	.string "cook. Dad says they're the same job.$"

ParcelFernwickHouse6_ReadDresser_Text_0:
# 43 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "A cook's apron on the dresser, washed\n"
	.string "thin. Embroidered on the pocket, badly,\l"
	.string "by a child: RANGER.$"

ParcelFernwickHouse6_ReadShelf_Text_0:
# 48 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "Cookbooks, and between them the\n"
	.string "District Station duty roster, so he\l"
	.string "knows how many to feed. Tonight's\l"
	.string "number is circled twice.$"

ParcelFernwickHouse6_ReadPantry_Text_0:
# 53 "data/maps/ParcelFernwickHouse6/scripts.pory"
	.string "A sugar jar with a note taped to it: FOR\n"
	.string "THE BASIN LOT. NO ARGUMENTS.$"
