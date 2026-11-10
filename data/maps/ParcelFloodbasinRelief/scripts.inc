ParcelFloodbasinRelief_MapScripts::
	.byte 0


ParcelFloodbasinRelief_Aide::
# 6 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	lock
# 7 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_FOUND, ParcelFloodbasinRelief_Aide_3
ParcelFloodbasinRelief_Aide_1:
# 15 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinRelief_Aide_7
# 20 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasinRelief_Aide_10
# 25 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Aide_2:
# 9 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 11 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF_DONE
# 12 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Aide_3:
# 8 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasinRelief_Aide_2
	goto ParcelFloodbasinRelief_Aide_1

ParcelFloodbasinRelief_Aide_7:
# 16 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_1, MSGBOX_DEFAULT
# 17 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Aide_10:
# 21 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Aide_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end


ParcelFloodbasinRelief_Woman::
# 30 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	lock
# 31 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinRelief_Woman_2
# 37 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasinRelief_Woman_5
# 42 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Woman_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Woman_2:
# 33 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Woman_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end

ParcelFloodbasinRelief_Woman_5:
# 38 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Woman_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	release
	end


ParcelFloodbasinRelief_Sheet::
# 47 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Sheet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinRelief_ReadDresser::
# 52 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinRelief_Ledger::
# 59 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	msgbox ParcelFloodbasinRelief_Ledger_Text_0, MSGBOX_SIGN
	return


ParcelFloodbasinRelief_Aide_Text_0:
# 9 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: MRS. ASKE's roof. It's on the\n"
	.string "sheet. It's been on the sheet for four\l"
	.string "weeks.\p"
	.string "I'll put it at the top. I'm not supposed\n"
	.string "to re-order the sheet. Take this and\l"
	.string "don't tell the councilman I can read.$"

ParcelFloodbasinRelief_Aide_Text_1:
# 16 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: The store's closed. The sheet's\n"
	.string "an exhibit. The councilman says the\l"
	.string "basin's recovering nicely. The hearing\l"
	.string "said 'recovering' is not a measurement.\l"
	.string "I liked that. I shouldn't have.$"

ParcelFloodbasinRelief_Aide_Text_2:
# 21 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: The store's closing. Relief\n"
	.string "period's over. The councilman says the\l"
	.string "basin's recovering nicely.\p"
	.string "The sheet goes to the coast office.\n"
	.string "Forty-one signatures. They like a full\l"
	.string "sheet.$"

ParcelFloodbasinRelief_Aide_Text_3:
# 25 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "AIDE: Residents only, RANGER. Fuel on\n"
	.string "the left, dry goods on the right. Sign\l"
	.string "the sheet.\p"
	.string "What's the sheet for? Records. The\n"
	.string "FOUNDATION believes in records.$"

ParcelFloodbasinRelief_Woman_Text_0:
# 33 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "WOMAN: I signed. My neighbour didn't.\n"
	.string "Her roof's still got the tarp on, and now\l"
	.string "the Board's paying for a new one\l"
	.string "because she didn't sign. I'm not bitter.\l"
	.string "I'm confused. Same thing, round here.$"

ParcelFloodbasinRelief_Woman_Text_1:
# 38 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "WOMAN: My neighbour still won't sign,\n"
	.string "and her roof's still got the tarp, and\l"
	.string "now she's got a letter from the river\l"
	.string "hall thanking her for 'standing'.\p"
	.string "She didn't stand anywhere. She sat\n"
	.string "under a tarp. She's framed the letter.$"

ParcelFloodbasinRelief_Woman_Text_2:
# 42 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "WOMAN: I signed. Everyone signs. My\n"
	.string "neighbour wouldn't, and her roof's still\l"
	.string "got the tarp on.$"

ParcelFloodbasinRelief_Sheet_Text_0:
# 47 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "RELIEF REGISTER -- LEIRVIK. Forty-one\n"
	.string "names. Beside each, a box ticked: 'I\l"
	.string "confirm that the Foundation's\l"
	.string "remediation of the basin is proceeding\l"
	.string "to my satisfaction.'\p"
	.string "The box is ticked in the same pen on\n"
	.string "every line.$"

ParcelFloodbasinRelief_ReadDresser_Text_0:
# 52 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "A stack of blankets with the crest. The\n"
	.string "top one has been unfolded and refolded\l"
	.string "badly by someone who wanted to see if\l"
	.string "they were real.\p"
	.string "They are.$"

ParcelFloodbasinRelief_Ledger_Text_0:
# 59 "data/maps/ParcelFloodbasinRelief/scripts.pory"
	.string "The relief ledger. Who came, what they\n"
	.string "were given, what they signed.\p"
	.string "Blankets, two per household,\n"
	.string "FOUNDATION stamped in the corner. Lamp\l"
	.string "oil. Dried fish, from the Coast, in\l"
	.string "cannery cartons. A voucher for the\l"
	.string "ferry, one way.\p"
	.string "Each line signed by the household and\n"
	.string "countersigned by the Commissioner's\l"
	.string "aide. At the foot of each page: relief\l"
	.string "provided by the Mereholt Foundation in\l"
	.string "partnership with the Regional Council.\p"
	.string "A column headed CAUSE OF NEED. It says\n"
	.string "FLOOD on every line. In one place, in\l"
	.string "another hand, under FLOOD: the works.\l"
	.string "It has been crossed out and FLOOD\l"
	.string "written again above it, firmly.\p"
	.string "The ledger is honest about what was\n"
	.string "given. It is careful about why.$"
