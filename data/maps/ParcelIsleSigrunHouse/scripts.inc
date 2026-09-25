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
	.string "A Wingull, in the house as if it owns it.\n"
	.string "It looks at you, and then at the window,\l"
	.string "and then at you.$"

ParcelIsleSigrunHouse_Photo_Text_0:
# 20 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	.string "A photograph: a man on a boat, laughing,\n"
	.string "a hand on the gunwale.\p"
	.string "On the hull, in the corner of the frame,\n"
	.string "a crest. Green and grey. The kerning is\l"
	.string "the same as the gate, the office, the\l"
	.string "blankets.\p"
	.string "You would not have seen it, the first\n"
	.string "day.$"

ParcelIsleSigrunHouse_Photo_Text_1:
# 22 "data/maps/ParcelIsleSigrunHouse/scripts.pory"
	.string "A photograph: a man on a boat, laughing,\n"
	.string "a hand on the gunwale. The frame is the\l"
	.string "cleanest thing in the room.$"
