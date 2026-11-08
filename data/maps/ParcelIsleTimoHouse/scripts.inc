ParcelIsleTimoHouse_MapScripts::
	.byte 0


ParcelIsleTimoHouse_Gran::
# 10 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	lock
# 11 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	faceplayer
# 12 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleTimoHouse_Gran_2
# 18 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleTimoHouse_Gran_5
# 23 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	msgbox ParcelIsleTimoHouse_Gran_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	msgbox ParcelIsleTimoHouse_Gran_Text_4, MSGBOX_DEFAULT
# 25 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	release
	end

ParcelIsleTimoHouse_Gran_2:
# 13 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	msgbox ParcelIsleTimoHouse_Gran_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	msgbox ParcelIsleTimoHouse_Gran_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	release
	end

ParcelIsleTimoHouse_Gran_5:
# 19 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	msgbox ParcelIsleTimoHouse_Gran_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	release
	end


ParcelIsleTimoHouse_Drawing::
# 30 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	msgbox ParcelIsleTimoHouse_Drawing_Text_0, MSGBOX_SIGN
	end


ParcelIsleTimoHouse_Gran_Text_0:
# 13 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	.string "Gran: Past the bridge, was it. All the\n"
	.string "way past, and back again.\p"
	.string "She looks at you a long moment, and\n"
	.string "nods once, the way a door closes softly.$"

ParcelIsleTimoHouse_Gran_Text_1:
# 14 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	.string "Gran: His mother worked the works, down\n"
	.string "the coast. Years of it. We knew what it\l"
	.string "was and we needed what it paid, and\l"
	.string "both things were true at once.\p"
	.string "You wrote it down out loud. Good. It was\n"
	.string "never going to be us that did.$"

ParcelIsleTimoHouse_Gran_Text_2:
# 19 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	.string "Gran: Timo's asking me what an\n"
	.string "allocation is. He heard it off the ferry\l"
	.string "hands.\p"
	.string "I told him it's when somebody decides\n"
	.string "who gets the water. He said that's not\l"
	.string "fair. I said now you're ready for the\l"
	.string "other answer.$"

ParcelIsleTimoHouse_Gran_Text_3:
# 23 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	.string "Gran: Timo's out by the water again, I\n"
	.string "expect. Battling strangers off the\l"
	.string "ferry.\p"
	.string "Gran: I tell him, don't go past the\n"
	.string "bridge. He asks why. I tell him, because\l"
	.string "I said so.\p"
	.string "He's too young for the other answer.$"

ParcelIsleTimoHouse_Gran_Text_4:
# 24 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	.string "Gran: You've been past it, haven't you.\n"
	.string "It's on your boots.\p"
	.string "Come back through when you can. He\n"
	.string "listens to you lot more than he listens\l"
	.string "to me.$"

ParcelIsleTimoHouse_Drawing_Text_0:
# 30 "data/maps/ParcelIsleTimoHouse/scripts.pory"
	.string "A crayon drawing, pinned low on the wall\n"
	.string "at a kid's eye height.\p"
	.string "A bridge. A river. A row of round blue\n"
	.string "somethings on the bank, with big happy\l"
	.string "eyes.\p"
	.string "The frogs are all smiling. Every one of\n"
	.string "them.$"
