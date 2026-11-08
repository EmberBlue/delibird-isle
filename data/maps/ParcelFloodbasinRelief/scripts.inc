ParcelFloodbasinRelief_MapScripts::
	.byte 0


ParcelFloodbasinRelief_Aide::
# 6 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	lock
# 7 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinRelief_Aide_2
# 13 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasinRelief_Aide_5
# 18 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Aide_2:
# 9 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Aide_5:
# 14 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end


ParcelFloodbasinRelief_Woman::
# 23 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	lock
# 24 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinRelief_Woman_2
# 30 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Woman_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Woman_2:
# 26 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Woman_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end


ParcelFloodbasinRelief_Sheet::
# 35 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Sheet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinRelief_Aide_Text_0:
# 9 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: The store's closed. The sheet's\n"
	.string "an exhibit. The councilman says the\l"
	.string "basin's recovering nicely. The hearing\l"
	.string "said 'recovering' is not a measurement.\l"
	.string "I liked that. I shouldn't have.$"

ParcelFloodbasinRelief_Aide_Text_1:
# 14 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: The store's closing. Relief\n"
	.string "period's over. The councilman says the\l"
	.string "basin's recovering nicely.\p"
	.string "The sheet goes to the coast office.\n"
	.string "Forty-one signatures. They like a full\l"
	.string "sheet.$"

ParcelFloodbasinRelief_Aide_Text_2:
# 18 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: Residents only, RANGER. Fuel on\n"
	.string "the left, dry goods on the right. Sign\l"
	.string "the sheet.\p"
	.string "What's the sheet for? Records. The\n"
	.string "FOUNDATION believes in records.$"

ParcelFloodbasinRelief_Woman_Text_0:
# 26 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "WOMAN: I signed. My neighbour didn't.\n"
	.string "Her roof's still got the tarp on, and now\l"
	.string "the Board's paying for a new one\l"
	.string "because she didn't sign. I'm not bitter.\l"
	.string "I'm confused. Same thing, round here.$"

ParcelFloodbasinRelief_Woman_Text_1:
# 30 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "WOMAN: I signed. Everyone signs. My\n"
	.string "neighbour wouldn't, and her roof's still\l"
	.string "got the tarp on.$"

ParcelFloodbasinRelief_Sheet_Text_0:
# 35 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "RELIEF REGISTER -- LEIRVIK. Forty-one\n"
	.string "names. Beside each, a box ticked: 'I\l"
	.string "confirm that the Foundation's\l"
	.string "remediation of the basin is proceeding\l"
	.string "to my satisfaction.'\p"
	.string "The box is ticked in the same pen on\n"
	.string "every line.$"
