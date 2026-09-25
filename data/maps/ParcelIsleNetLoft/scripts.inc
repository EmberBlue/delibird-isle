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
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleNetLoft_Grette_3
# 15 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Grette_Text_2, MSGBOX_DEFAULT
ParcelIsleNetLoft_Grette_1:
# 17 "data/maps/ParcelIsleNetLoft/scripts.pory"
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


ParcelIsleNetLoft_Zigzagoon::
# 22 "data/maps/ParcelIsleNetLoft/scripts.pory"
	lock
# 23 "data/maps/ParcelIsleNetLoft/scripts.pory"
	faceplayer
# 24 "data/maps/ParcelIsleNetLoft/scripts.pory"
	waitse
# 25 "data/maps/ParcelIsleNetLoft/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 26 "data/maps/ParcelIsleNetLoft/scripts.pory"
	msgbox ParcelIsleNetLoft_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelIsleNetLoft/scripts.pory"
	waitmoncry
# 28 "data/maps/ParcelIsleNetLoft/scripts.pory"
	release
	end


ParcelIsleNetLoft_Grette_Text_0:
# 11 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "Grette: Blankets. Sixty of them,\n"
	.string "Foundation crest, still in the plastic.\l"
	.string "Nobody's had a storm bad enough to\l"
	.string "need sixty blankets.\p"
	.string "That's the thing about relief. It's for a\n"
	.string "disaster that suits the giver.$"

ParcelIsleNetLoft_Grette_Text_1:
# 13 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "Grette: A net's a survey. Every hole\n"
	.string "tells you what went through and what\l"
	.string "didn't.\p"
	.string "I've been reading this coast in mesh for\n"
	.string "fifty years. You've got a notebook.\l"
	.string "Same thing, slower.$"

ParcelIsleNetLoft_Grette_Text_2:
# 15 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "Grette: Mind the Zigzagoon. He thinks\n"
	.string "the nets are for him.\p"
	.string "Sixty years I've made nets for this\n"
	.string "quay. The last ten, they've come back\l"
	.string "with less in them and more holes. Work it\l"
	.string "out yourself.$"

ParcelIsleNetLoft_Zigzagoon_Text_0:
# 26 "data/maps/ParcelIsleNetLoft/scripts.pory"
	.string "Zigzagoon is tangled in a net and\n"
	.string "entirely content about it.$"
