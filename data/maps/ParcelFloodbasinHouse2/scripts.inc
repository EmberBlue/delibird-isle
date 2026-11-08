ParcelFloodbasinHouse2_MapScripts::
	.byte 0


ParcelFloodbasinHouse2_Wife::
# 5 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	lock
# 6 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse2_Wife_2
# 12 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Wife_2:
# 8 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end


ParcelFloodbasinHouse2_Boy::
# 17 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	lock
# 18 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse2_Boy_2
# 24 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Boy_2:
# 20 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end


ParcelFloodbasinHouse2_Wife_Text_0:
# 8 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: Third flood, and the Board man\n"
	.string "says the fourth comes slower with the\l"
	.string "sluice. The water line's on the wall. I'm\l"
	.string "leaving it. If the fourth comes, I want\l"
	.string "to measure him against it.$"

ParcelFloodbasinHouse2_Wife_Text_1:
# 12 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: Third flood this one. The water\n"
	.string "line's on the wall there, see. Every year\l"
	.string "a hand higher.\p"
	.string "We signed the councilman's sheet. You\n"
	.string "sign the sheet, you get the vouchers.\l"
	.string "That's how it works now.$"

ParcelFloodbasinHouse2_Boy_Text_0:
# 20 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: The WOOPER with the wrong feet is\n"
	.string "famous now! A lady drew it! It still\l"
	.string "doesn't go anywhere.$"

ParcelFloodbasinHouse2_Boy_Text_1:
# 24 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: I found a WOOPER with the wrong\n"
	.string "feet! Gran made me put it back in the\l"
	.string "puddle. It's still there. It doesn't go\l"
	.string "anywhere.$"
