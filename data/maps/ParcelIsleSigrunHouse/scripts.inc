ParcelIsleSigrunHouse_MapScripts::
	.byte 0


ParcelIsleSigrunHouse_Wingull::
# 8 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	waitse
# 11 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 12 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	msgbox ParcelIsleSigrunHouse_Wingull_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	waitmoncry
# 14 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	release
	end


ParcelIsleSigrunHouse_Photo::
# 19 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleSigrunHouse_Photo_2
# 22 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	msgbox ParcelIsleSigrunHouse_Photo_Text_1, MSGBOX_SIGN
ParcelIsleSigrunHouse_Photo_1:
	end

ParcelIsleSigrunHouse_Photo_2:
# 20 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	msgbox ParcelIsleSigrunHouse_Photo_Text_0, MSGBOX_SIGN
	goto ParcelIsleSigrunHouse_Photo_1


ParcelIsleSigrunHouse_Wingull_Text_0:
# 12 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	.string "A WINGULL, in the house like it owns the\n"
	.string "place.\p"
	.string "It looks at you, then at the window,\n"
	.string "then at you.$"

ParcelIsleSigrunHouse_Photo_Text_0:
# 20 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	.string "A photo of a man on a boat, laughing,\n"
	.string "one hand on the rail.\p"
	.string "On the hull, in the corner of the frame:\n"
	.string "a green-and-gray crest. The same one\l"
	.string "as the gate, the office, the blankets.$"

ParcelIsleSigrunHouse_Photo_Text_1:
# 22 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	.string "A photo of a man on a boat, laughing,\n"
	.string "one hand on the rail.\p"
	.string "The frame is the cleanest thing in the\n"
	.string "room.$"
