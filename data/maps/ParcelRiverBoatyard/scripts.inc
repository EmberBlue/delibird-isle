ParcelRiverBoatyard_MapScripts::
	.byte 0


ParcelRiverBoatyard_Wright::
# 4 "data/maps/ParcelRiverBoatyard/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverBoatyard/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoatyard_Wright_2
# 11 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Wright_2:
# 7 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Wright_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end


ParcelRiverBoatyard_Apprentice::
# 16 "data/maps/ParcelRiverBoatyard/scripts.pory"
	lock
# 17 "data/maps/ParcelRiverBoatyard/scripts.pory"
	faceplayer
# 18 "data/maps/ParcelRiverBoatyard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoatyard_Apprentice_2
# 23 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Apprentice_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end

ParcelRiverBoatyard_Apprentice_2:
# 19 "data/maps/ParcelRiverBoatyard/scripts.pory"
	msgbox ParcelRiverBoatyard_Apprentice_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelRiverBoatyard/scripts.pory"
	release
	end


ParcelRiverBoatyard_Wright_Text_0:
# 7 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: HARLAND's boat was in the\n"
	.string "hearing transcript. His grandfather\l"
	.string "built it in this shed. I'm not saying I\l"
	.string "cried. The apprentice says I did.$"

ParcelRiverBoatyard_Wright_Text_1:
# 11 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "BOATWRIGHT: I built HARLAND's boat. His\n"
	.string "grandfather built the one before it, in\l"
	.string "this shed.\p"
	.string "Now a coastal lender holds the paper on\n"
	.string "her. I built a boat and they bought a\l"
	.string "man. Funny old trade.$"

ParcelRiverBoatyard_Apprentice_Text_0:
# 19 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "APPRENTICE: Somebody ordered a boat. A\n"
	.string "whole boat. First in four years. The\l"
	.string "review grounded the big fleet and the\l"
	.string "small ones are worth building again. I'm\l"
	.string "learning the keel.$"

ParcelRiverBoatyard_Apprentice_Text_1:
# 23 "data/maps/ParcelRiverBoatyard/scripts.pory"
	.string "APPRENTICE: Nobody orders boats. They\n"
	.string "order repairs. You don't need a new boat\l"
	.string "for four trout.$"
