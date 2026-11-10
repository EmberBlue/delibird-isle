ParcelFloodbasinHouse2_MapScripts::
	.byte 0


ParcelFloodbasinHouse2_Wife::
# 5 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	lock
# 6 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasinHouse2_Wife_2
# 12 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse2_Wife_5
# 17 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinHouse2_Wife_8
# 22 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_3, MSGBOX_DEFAULT
# 23 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
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

ParcelFloodbasinHouse2_Wife_8:
# 18 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Wife_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end


ParcelFloodbasinHouse2_Boy::
# 27 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	lock
# 28 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasinHouse2_Boy_2
# 34 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse2_Boy_5
# 39 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinHouse2_Boy_8
# 44 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Boy_2:
# 30 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Boy_5:
# 35 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end

ParcelFloodbasinHouse2_Boy_8:
# 40 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 41 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	release
	end


ParcelFloodbasinHouse2_ReadDresser::
# 50 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinHouse2_ReadDrawer::
# 55 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinHouse2_PaperReliefSheet::
# 62 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse2_PaperReliefSheet_2
# 65 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_PaperReliefSheet_Text_1, MSGBOX_SIGN
ParcelFloodbasinHouse2_PaperReliefSheet_1:
	end

ParcelFloodbasinHouse2_PaperReliefSheet_2:
# 63 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	msgbox ParcelFloodbasinHouse2_PaperReliefSheet_Text_0, MSGBOX_SIGN
	goto ParcelFloodbasinHouse2_PaperReliefSheet_1


ParcelFloodbasinHouse2_Wife_Text_0:
# 8 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: Fourth flood came slower. A hand\n"
	.string "lower than the third line. I didn't paint\l"
	.string "a fourth line.\p"
	.string "A hand lower doesn't get a line. That's\n"
	.string "the rule I made.$"

ParcelFloodbasinHouse2_Wife_Text_1:
# 13 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: Third flood, and the Board man\n"
	.string "says the fourth comes slower with the\l"
	.string "sluice. The water line's on the wall. I'm\l"
	.string "leaving it. If the fourth comes, I want\l"
	.string "to measure him against it.$"

ParcelFloodbasinHouse2_Wife_Text_2:
# 18 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: We signed the sheet. Then the\n"
	.string "river people stood up and didn't sign\l"
	.string "anything, and got their numbers read\l"
	.string "out instead.\p"
	.string "I've been thinking about which of us\n"
	.string "got the better deal. The water line's\l"
	.string "still a hand higher. The thinking's new.$"

ParcelFloodbasinHouse2_Wife_Text_3:
# 22 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "WOMAN: Third flood this one. The water\n"
	.string "line's on the wall there, see. Every year\l"
	.string "a hand higher.\p"
	.string "We signed the councilman's sheet. You\n"
	.string "sign the sheet, you get the vouchers.\l"
	.string "That's how it works now.$"

ParcelFloodbasinHouse2_Boy_Text_0:
# 30 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: The WOOPER with the wrong feet\n"
	.string "moved! To the next puddle! The CORPS\l"
	.string "lady said that's the first thing it's\l"
	.string "done in two years.\p"
	.string "I did a drawing. She kept it.$"

ParcelFloodbasinHouse2_Boy_Text_1:
# 35 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: The WOOPER with the wrong feet is\n"
	.string "famous now! A lady drew it! It still\l"
	.string "doesn't go anywhere.$"

ParcelFloodbasinHouse2_Boy_Text_2:
# 40 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: The WOOPER's still there! A ranger\n"
	.string "from the river drew a picture of its\l"
	.string "feet and said the word 'specimen'.\p"
	.string "I don't know what that is, but she said\n"
	.string "it like it was important. The WOOPER\l"
	.string "didn't mind.$"

ParcelFloodbasinHouse2_Boy_Text_3:
# 44 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "BOY: I found a WOOPER with the wrong\n"
	.string "feet! Gran made me put it back in the\l"
	.string "puddle. It's still there. It doesn't go\l"
	.string "anywhere.$"

ParcelFloodbasinHouse2_ReadDresser_Text_0:
# 50 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "The water line on the wall runs behind\n"
	.string "the dresser. Somebody has written the\l"
	.string "year beside each line in pencil. Three\l"
	.string "lines.\p"
	.string "The pencil is kept on the dresser.$"

ParcelFloodbasinHouse2_ReadDrawer_Text_0:
# 55 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "A drawer of relief vouchers, unspent, in\n"
	.string "rubber bands.\p"
	.string "Signing gets you the vouchers. Nobody\n"
	.string "said you had to use them.$"

ParcelFloodbasinHouse2_PaperReliefSheet_Text_0:
# 63 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "A carbon of the relief sheet, and under\n"
	.string "it now a second carbon, of the river\l"
	.string "people's petition, with forty-one names\l"
	.string "she has read so often she knows them in\l"
	.string "order.\p"
	.string "She did not sign the petition. She has\n"
	.string "written on the back of her copy: next\l"
	.string "time.$"

ParcelFloodbasinHouse2_PaperReliefSheet_Text_1:
# 65 "data/maps/ParcelFloodbasinHouse2/scripts.pory"
	.string "A carbon of the relief sheet they\n"
	.string "signed, kept flat under the bread\l"
	.string "board. Blankets, two. Oil, one. Vouchers,\l"
	.string "two. CAUSE OF NEED: FLOOD. Signed,\l"
	.string "countersigned, stamped.\p"
	.string "The woman keeps it because she was\n"
	.string "told to keep it. She does not know what\l"
	.string "for. Neither did the aide.$"
