ParcelStationHall_MapScripts::
	.byte 0


ParcelStationHall_Plaque::
# 13 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_Plaque_Text_0, MSGBOX_SIGN
	end


ParcelStationHall_Shelf::
# 18 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_Shelf_Text_0, MSGBOX_SIGN
	end


ParcelStationHall_CertWall::
# 24 "data/maps/ParcelStationHall/scripts.pory"
	setvar VAR_TEMP_2, 0
# 25 "data/maps/ParcelStationHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelStationHall_CertWall_2
ParcelStationHall_CertWall_1:
# 26 "data/maps/ParcelStationHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelStationHall_CertWall_5
ParcelStationHall_CertWall_4:
# 27 "data/maps/ParcelStationHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelStationHall_CertWall_8
ParcelStationHall_CertWall_7:
# 28 "data/maps/ParcelStationHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelStationHall_CertWall_11
ParcelStationHall_CertWall_10:
# 29 "data/maps/ParcelStationHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelStationHall_CertWall_14
ParcelStationHall_CertWall_13:
# 30 "data/maps/ParcelStationHall/scripts.pory"
	switch VAR_TEMP_2
# 31 "data/maps/ParcelStationHall/scripts.pory"
	case 0, ParcelStationHall_CertWall_18
# 33 "data/maps/ParcelStationHall/scripts.pory"
	case 1, ParcelStationHall_CertWall_19
# 35 "data/maps/ParcelStationHall/scripts.pory"
	case 2, ParcelStationHall_CertWall_20
# 37 "data/maps/ParcelStationHall/scripts.pory"
	case 3, ParcelStationHall_CertWall_21
# 39 "data/maps/ParcelStationHall/scripts.pory"
	case 4, ParcelStationHall_CertWall_22
# 41 "data/maps/ParcelStationHall/scripts.pory"
	case 5, ParcelStationHall_CertWall_23
ParcelStationHall_CertWall_16:
	end

ParcelStationHall_CertWall_2:
# 25 "data/maps/ParcelStationHall/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto ParcelStationHall_CertWall_1

ParcelStationHall_CertWall_5:
# 26 "data/maps/ParcelStationHall/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto ParcelStationHall_CertWall_4

ParcelStationHall_CertWall_8:
# 27 "data/maps/ParcelStationHall/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto ParcelStationHall_CertWall_7

ParcelStationHall_CertWall_11:
# 28 "data/maps/ParcelStationHall/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto ParcelStationHall_CertWall_10

ParcelStationHall_CertWall_14:
# 29 "data/maps/ParcelStationHall/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto ParcelStationHall_CertWall_13

ParcelStationHall_CertWall_18:
# 32 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_CertWall_Text_0, MSGBOX_SIGN
	goto ParcelStationHall_CertWall_16

ParcelStationHall_CertWall_19:
# 34 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_CertWall_Text_1, MSGBOX_SIGN
	goto ParcelStationHall_CertWall_16

ParcelStationHall_CertWall_20:
# 36 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_CertWall_Text_2, MSGBOX_SIGN
	goto ParcelStationHall_CertWall_16

ParcelStationHall_CertWall_21:
# 38 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_CertWall_Text_3, MSGBOX_SIGN
	goto ParcelStationHall_CertWall_16

ParcelStationHall_CertWall_22:
# 40 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_CertWall_Text_4, MSGBOX_SIGN
	goto ParcelStationHall_CertWall_16

ParcelStationHall_CertWall_23:
# 42 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_CertWall_Text_5, MSGBOX_SIGN
	goto ParcelStationHall_CertWall_16


ParcelStationHall_Clerk::
# 48 "data/maps/ParcelStationHall/scripts.pory"
	lock
# 49 "data/maps/ParcelStationHall/scripts.pory"
	faceplayer
# 50 "data/maps/ParcelStationHall/scripts.pory"
	goto_if_set FLAG_SKALD_HALL_REQUISITION, ParcelStationHall_Clerk_2
# 55 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_Clerk_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/ParcelStationHall/scripts.pory"
	giveitem ITEM_GREAT_BALL, 5
# 57 "data/maps/ParcelStationHall/scripts.pory"
	setflag FLAG_SKALD_HALL_REQUISITION
# 58 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_Clerk_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelStationHall/scripts.pory"
	release
	end

ParcelStationHall_Clerk_2:
# 51 "data/maps/ParcelStationHall/scripts.pory"
	msgbox ParcelStationHall_Clerk_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ParcelStationHall/scripts.pory"
	release
	end


ParcelStationHall_Plaque_Text_0:
# 13 "data/maps/ParcelStationHall/scripts.pory"
	.string "Carved over the inner door, the letters\n"
	.string "worn smooth:\p"
	.string "WE DON'T WIN. WE REDUCE HARM.\p"
	.string "Someone has touched the words on the\n"
	.string "way out. Many times, for a long time.$"

ParcelStationHall_Shelf_Text_0:
# 18 "data/maps/ParcelStationHall/scripts.pory"
	.string "The requisition shelf: coils of red\n"
	.string "survey cloth, sample vials, spare\l"
	.string "lamp-glass, a winch arm with a mended\l"
	.string "handle.\p"
	.string "Everything is signed out and signed\n"
	.string "back in. The ledger's columns are full,\l"
	.string "going back years.$"

ParcelStationHall_CertWall_Text_0:
# 32 "data/maps/ParcelStationHall/scripts.pory"
	.string "The certification board. Five slots\n"
	.string "under glass, five blank cards.\p"
	.string "Forest. Wetland. Watershed. Highland.\n"
	.string "Coastal.\p"
	.string "The glass is clean. Somebody dusts it\n"
	.string "anyway.$"

ParcelStationHall_CertWall_Text_1:
# 34 "data/maps/ParcelStationHall/scripts.pory"
	.string "The certification board. One card filled\n"
	.string "in, four blank.\p"
	.string "The handwriting on the filled one is\n"
	.string "Hale's -- small, square, no flourish.\p"
	.string "It does not say congratulations. It\n"
	.string "says the date.$"

ParcelStationHall_CertWall_Text_2:
# 36 "data/maps/ParcelStationHall/scripts.pory"
	.string "The certification board. Two cards\n"
	.string "filled.\p"
	.string "Someone has straightened them so the\n"
	.string "edges line up exactly.$"

ParcelStationHall_CertWall_Text_3:
# 38 "data/maps/ParcelStationHall/scripts.pory"
	.string "The certification board. Three cards\n"
	.string "filled, two to go.\p"
	.string "The blank ones wait without comment.\n"
	.string "That is the station's whole style.$"

ParcelStationHall_CertWall_Text_4:
# 40 "data/maps/ParcelStationHall/scripts.pory"
	.string "The certification board. Four of five.\p"
	.string "The last slot is the Coastal card. The\n"
	.string "glass over it has been wiped more often\l"
	.string "than the rest.$"

ParcelStationHall_CertWall_Text_5:
# 42 "data/maps/ParcelStationHall/scripts.pory"
	.string "The certification board. All five cards\n"
	.string "filled, corner to corner, in Hale's small\l"
	.string "square hand.\p"
	.string "Nobody has made a fuss of it. The board\n"
	.string "simply has no room left --\p"
	.string "which, here, is what a fuss looks like.$"

ParcelStationHall_Clerk_Text_0:
# 51 "data/maps/ParcelStationHall/scripts.pory"
	.string "Moss: Stores are stores. If it's not on\n"
	.string "the shelf, the coast took it.\p"
	.string "Sign the ledger on your way out.\n"
	.string "Everyone signs the ledger.$"

ParcelStationHall_Clerk_Text_1:
# 55 "data/maps/ParcelStationHall/scripts.pory"
	.string "A narrow man behind a narrow desk,\n"
	.string "filing survey slips by some order only\l"
	.string "he can see.\p"
	.string "Moss: Provisional, yes? Then there's an\n"
	.string "issue kit with your name on it. Had it\l"
	.string "ready for weeks. Nobody tells me\l"
	.string "anything, but I stock for it anyway.$"

ParcelStationHall_Clerk_Text_2:
# 58 "data/maps/ParcelStationHall/scripts.pory"
	.string "Moss: Sign here. And initial here. And --\n"
	.string "yes. There.\p"
	.string "Moss: The Corps runs on two things,\n"
	.string "provisional. Weather-proof ink, and\l"
	.string "people who come back. Try to be the\l"
	.string "second kind.$"
