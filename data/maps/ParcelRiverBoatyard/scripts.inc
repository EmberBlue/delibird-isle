ParcelRiverBoatyard_MapScripts::
	.byte 0


ParcelRiverBoatyard_Wright::
# 4 "data/maps/ParcelRiverBoatyard/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverBoatyard/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLANK, ParcelRiverBoatyard_Wright_3
ParcelRiverBoatyard_Wright_1:
# 20 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoatyard_Wright_7
# 25 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_PLANK_DONE, ParcelRiverBoatyard_Wright_13
# 31 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverBoatyard_Wright_16
# 36 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_7, MSGBOX_DEFAULT
# 37 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Wright_2:
# 7 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLANK_HAVE, ParcelRiverBoatyard_Wright_10
# 16 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_3, MSGBOX_DEFAULT
# 17 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Wright_3:
# 6 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_PLANK_DONE, ParcelRiverBoatyard_Wright_2
	goto ParcelRiverBoatyard_Wright_1

ParcelRiverBoatyard_Wright_7:
# 21 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_4, MSGBOX_DEFAULT
# 22 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Wright_10:
# 8 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/ParcelRiverBoatyard/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 11 "data/maps/ParcelRiverBoatyard/scripts.pory"
	setflag FLAG_SKALD_Q_PLANK_DONE
# 12 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_2, MSGBOX_DEFAULT
# 13 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Wright_13:
# 26 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_5, MSGBOX_DEFAULT
# 27 "data/maps/ParcelRiverBoatyard/scripts.pory"
	setflag FLAG_SKALD_Q_PLANK
# 28 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Wright_16:
# 32 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_6, MSGBOX_DEFAULT
# 33 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end


ParcelRiverBoatyard_Apprentice::
# 41 "data/maps/ParcelRiverBoatyard/scripts.pory"
	lock
# 42 "data/maps/ParcelRiverBoatyard/scripts.pory"
	faceplayer
# 43 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoatyard_Apprentice_2
# 48 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverBoatyard_Apprentice_5
# 53 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Apprentice_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Apprentice_2:
# 44 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Apprentice_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Apprentice_5:
# 49 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Apprentice_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end


ParcelRiverBoatyard_ReadBench::
# 59 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_ReadBench_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoatyard_ReadHulls::
# 64 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_ReadHulls_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoatyard_OrderBook::
# 71 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_OrderBook_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoatyard_Wright_Text_0:
# 8 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: Seasoned. Twelve years\n"
	.string "under the eaves; you can hear it when\l"
	.string "you knock. That's a keel.$"

ParcelRiverBoatyard_Wright_Text_1:
# 9 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: The hill man paid a deposit\n"
	.string "in coin. Old coin, from a jar. Here -- the\l"
	.string "first one out of the jar. Keep it on a\l"
	.string "partner and the next jar fills faster.\l"
	.string "That's a boatyard superstition. We have\l"
	.string "a lot of them.$"

ParcelRiverBoatyard_Wright_Text_2:
# 12 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: A boat built for water\n"
	.string "that hasn't arrived yet. My grandfather\l"
	.string "would have laughed. Then he'd have built\l"
	.string "it.$"

ParcelRiverBoatyard_Wright_Text_3:
# 16 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: The mill wood, west of the\n"
	.string "market. The sawyer. A keel plank,\l"
	.string "seasoned.$"

ParcelRiverBoatyard_Wright_Text_4:
# 21 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: HARLAND's boat was in the\n"
	.string "hearing transcript. His grandfather\l"
	.string "built it in this shed. I'm not saying I\l"
	.string "cried. The apprentice says I did.$"

ParcelRiverBoatyard_Wright_Text_5:
# 26 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: First new boat in two\n"
	.string "years, for a man off a hill. I'll build it\l"
	.string "right or not at all, and right means a\l"
	.string "seasoned plank for the keel, not the\l"
	.string "green stuff the depot sells.\p"
	.string "The sawyer in the mill wood seasons his\n"
	.string "own. He won't sell to the depot. He might\l"
	.string "hand one to you.\p"
	.string "Ask him for a keel plank. Say it's for a\n"
	.string "hill farmer who's never seen the water.\l"
	.string "He'll understand that better than I do.$"

ParcelRiverBoatyard_Wright_Text_6:
# 32 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: A man from HAUKFELL asked\n"
	.string "me to build him a boat. He's never lived\l"
	.string "near water. He said the water's coming\l"
	.string "to him, so he'll want one.\p"
	.string "I built HARLAND's boat for a river. I'm\n"
	.string "not sure what I'd build for a hill.$"

ParcelRiverBoatyard_Wright_Text_7:
# 36 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: I built HARLAND's boat. His\n"
	.string "grandfather built the one before it, in\l"
	.string "this shed.\p"
	.string "Now a coastal lender holds the paper on\n"
	.string "her. I built a boat and they bought a\l"
	.string "man. Funny old trade.$"

ParcelRiverBoatyard_Apprentice_Text_0:
# 44 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "APPRENTICE: Somebody ordered a boat. A\n"
	.string "whole boat. First in four years. The\l"
	.string "review grounded the big fleet and the\l"
	.string "small ones are worth building again. I'm\l"
	.string "learning the keel.$"

ParcelRiverBoatyard_Apprentice_Text_1:
# 49 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "APPRENTICE: First new order in two\n"
	.string "years and it's from a hill farmer who's\l"
	.string "never seen a boat. Master says build it\l"
	.string "anyway.\p"
	.string "He says people who order boats before\n"
	.string "they need them are the only customers\l"
	.string "worth having.$"

ParcelRiverBoatyard_Apprentice_Text_2:
# 53 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "APPRENTICE: Nobody orders boats. They\n"
	.string "order repairs. You don't need a new boat\l"
	.string "for four trout.$"

ParcelRiverBoatyard_ReadBench_Text_0:
# 59 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "A boat's rib clamped to the bench,\n"
	.string "steaming. The grandfather's tools hang\l"
	.string "above it, each on its own nail, each nail\l"
	.string "with a name scratched beside it.$"

ParcelRiverBoatyard_ReadHulls_Text_0:
# 64 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "Hulls on frames, waiting for repairs.\n"
	.string "Each has a tag with a name and a date.\l"
	.string "The dates are getting further apart.$"

ParcelRiverBoatyard_OrderBook_Text_0:
# 71 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "The order book. Hulls built, by year, in\n"
	.string "the grandfather's hand and then the\l"
	.string "father's and then this one's.\p"
	.string "The early pages are boats: a name, a\n"
	.string "length, a price, PAID. The middle pages\l"
	.string "are fewer boats and more names crossed\l"
	.string "through. The last page has no boats on\l"
	.string "it. It says REPAIRS ONLY and a date, and\l"
	.string "under that, in a hand that pressed\l"
	.string "hard: for now.$"
