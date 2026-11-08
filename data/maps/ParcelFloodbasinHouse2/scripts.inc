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
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinHouse2_Wife_5
# 17 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Wife_2:
# 8 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Wife_5:
# 13 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end


ParcelFloodbasinHouse2_Boy::
# 22 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	lock
# 23 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	faceplayer
# 24 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse2_Boy_2
# 29 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinHouse2_Boy_5
# 34 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Boy_2:
# 25 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Boy_5:
# 30 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
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
# 13 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: We signed the sheet. Then the\n"
	.string "river people stood up and didn't sign\l"
	.string "anything, and got their numbers read\l"
	.string "out instead.\p"
	.string "I've been thinking about which of us\n"
	.string "got the better deal. The water line's\l"
	.string "still a hand higher. The thinking's new.$"

ParcelFloodbasinHouse2_Wife_Text_2:
# 17 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: Third flood this one. The water\n"
	.string "line's on the wall there, see. Every year\l"
	.string "a hand higher.\p"
	.string "We signed the councilman's sheet. You\n"
	.string "sign the sheet, you get the vouchers.\l"
	.string "That's how it works now.$"

ParcelFloodbasinHouse2_Boy_Text_0:
# 25 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: The WOOPER with the wrong feet is\n"
	.string "famous now! A lady drew it! It still\l"
	.string "doesn't go anywhere.$"

ParcelFloodbasinHouse2_Boy_Text_1:
# 30 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: The WOOPER's still there! A ranger\n"
	.string "from the river drew a picture of its\l"
	.string "feet and said the word 'specimen'.\p"
	.string "I don't know what that is, but she said\n"
	.string "it like it was important. The WOOPER\l"
	.string "didn't mind.$"

ParcelFloodbasinHouse2_Boy_Text_2:
# 34 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: I found a WOOPER with the wrong\n"
	.string "feet! Gran made me put it back in the\l"
	.string "puddle. It's still there. It doesn't go\l"
	.string "anywhere.$"
