ParcelIsleNetLoft_MapScripts::
	.byte 0


ParcelIsleNetLoft_Grette::
# 8 "data/maps/ParcelIsleNetLoft/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleNetLoft/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleNetLoft/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleNetLoft_Grette_2
# 12 "data/maps/ParcelIsleNetLoft/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleNetLoft_Grette_3
# 14 "data/maps/ParcelIsleNetLoft/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleNetLoft_Grette_4
# 17 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Grette_Text_3, MSGBOX_DEFAULT
ParcelIsleNetLoft_Grette_1:
# 19 "data/maps/ParcelIsleNetLoft/scripts.pory"
	release
	end

ParcelIsleNetLoft_Grette_2:
# 11 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Grette_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleNetLoft_Grette_1

ParcelIsleNetLoft_Grette_3:
# 13 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Grette_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleNetLoft_Grette_1

ParcelIsleNetLoft_Grette_4:
# 15 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Grette_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleNetLoft_Grette_1


ParcelIsleNetLoft_Zigzagoon::
# 24 "data/maps/ParcelIsleNetLoft/scripts.pory"
	lock
# 25 "data/maps/ParcelIsleNetLoft/scripts.pory"
	faceplayer
# 26 "data/maps/ParcelIsleNetLoft/scripts.pory"
	waitse
# 27 "data/maps/ParcelIsleNetLoft/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 28 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelIsleNetLoft/scripts.pory"
	waitmoncry
# 30 "data/maps/ParcelIsleNetLoft/scripts.pory"
	release
	end


ParcelIsleNetLoft_ReadDresser::
# 35 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelIsleNetLoft_ReadTally::
# 40 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_ReadTally_Text_0, MSGBOX_SIGN
	end


ParcelIsleNetLoft_Gauge::
# 47 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Gauge_Text_0, MSGBOX_SIGN
	end


ParcelIsleNetLoft_Grette_Text_0:
# 11 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "GRETTE: Sixty blankets. FOUNDATION\n"
	.string "crest, still in the plastic. Nobody's had\l"
	.string "a storm bad enough for sixty blankets.\p"
	.string "That's the thing about relief. It's for a\n"
	.string "disaster that suits the giver.$"

ParcelIsleNetLoft_Grette_Text_1:
# 13 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "GRETTE: The river minutes read like a\n"
	.string "net. Every hole tells you what went\l"
	.string "through.\p"
	.string "Six holes, six names, and the Board's\n"
	.string "numbers caught in the mesh. Somebody's\l"
	.string "been reading in mesh. About time.$"

ParcelIsleNetLoft_Grette_Text_2:
# 15 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "GRETTE: A net's a survey. Every hole\n"
	.string "tells you what went through and what\l"
	.string "didn't.\p"
	.string "I've been reading this coast in mesh for\n"
	.string "fifty years. You've got a notebook.\l"
	.string "Same thing, slower.$"

ParcelIsleNetLoft_Grette_Text_3:
# 17 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "GRETTE: Mind the ZIGZAGOON. He thinks\n"
	.string "the nets are for him.\p"
	.string "Sixty years I've made nets for this\n"
	.string "quay. The last ten, they come back with\l"
	.string "less in them and more holes. Work it out.$"

ParcelIsleNetLoft_Zigzagoon_Text_0:
# 28 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "ZIGZAGOON is tangled in a net and\n"
	.string "completely happy about it.$"

ParcelIsleNetLoft_ReadDresser_Text_0:
# 35 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "Net needles in a row on the dresser,\n"
	.string "worn to the shape of one hand. Sixty\l"
	.string "years. One hand.$"

ParcelIsleNetLoft_ReadTally_Text_0:
# 40 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "A tally of nets mended, chalked on the\n"
	.string "side of the cupboard. The marks get\l"
	.string "closer together each year.\p"
	.string "More holes, she said.$"

ParcelIsleNetLoft_Gauge_Text_0:
# 47 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "The net gauges hang on a nail, wooden\n"
	.string "slats with a mesh size cut into each.\l"
	.string "The legal minimum, by year, is burned\l"
	.string "into the wall beside them, and it climbs:\l"
	.string "the Council lets the holes get bigger so\l"
	.string "the small fish get through.\p"
	.string "GRETTE's own gauge hangs lowest and\n"
	.string "has not changed. It is a size smaller\l"
	.string "than the law and a size larger than the\l"
	.string "fish. She mends to it anyway. Somebody\l"
	.string "has to mend to the fish.$"
