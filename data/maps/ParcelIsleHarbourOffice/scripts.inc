ParcelIsleHarbourOffice_MapScripts::
	.byte 0


ParcelIsleHarbourOffice_Dagny::
# 8 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelIsleHarbourOffice_Dagny_2
# 12 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHarbourOffice_Dagny_3
# 14 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHarbourOffice_Dagny_4
# 17 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_3, MSGBOX_DEFAULT
ParcelIsleHarbourOffice_Dagny_1:
# 19 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end

ParcelIsleHarbourOffice_Dagny_2:
# 11 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Dagny_1

ParcelIsleHarbourOffice_Dagny_3:
# 13 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Dagny_1

ParcelIsleHarbourOffice_Dagny_4:
# 15 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Dagny_1


ParcelIsleHarbourOffice_Osk::
# 24 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	lock
# 25 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	faceplayer
# 26 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHarbourOffice_Osk_2
# 29 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Osk_Text_1, MSGBOX_DEFAULT
ParcelIsleHarbourOffice_Osk_1:
# 31 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end

ParcelIsleHarbourOffice_Osk_2:
# 27 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Osk_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Osk_1


ParcelIsleHarbourOffice_Dagny_Text_0:
# 11 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: I've been asked, in writing, to\n"
	.string "say nothing to you. So here's what I'll\l"
	.string "say: the coffee's still on.\p"
	.string "We're a logistics office. We move\n"
	.string "whatever the region decides to move.\l"
	.string "That was never the problem, was it?$"

ParcelIsleHarbourOffice_Dagny_Text_1:
# 13 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: Every manifest since Tuesday\n"
	.string "has 'PENDING' on it. I had to order more\l"
	.string "of the stamp.\p"
	.string "I'm not joking. I ordered the stamp.\n"
	.string "That's my job now.$"

ParcelIsleHarbourOffice_Dagny_Text_2:
# 15 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: The new RANGER! Welcome. Your\n"
	.string "field kit came through this office.\l"
	.string "FOUNDATION grant, COASTAL freight,\l"
	.string "LOGISTICS handling. All one family.\p"
	.string "That's not a threat, it's an org chart.\n"
	.string "People confuse the two.$"

ParcelIsleHarbourOffice_Dagny_Text_3:
# 17 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: MEREHOLT LOGISTICS. Freight,\n"
	.string "fuel, ferry coordination. And the\l"
	.string "storm-relief blankets, if you're\l"
	.string "wondering who paid for those.\p"
	.string "We're the part of the company that's\n"
	.string "easy to like. Coffee?$"

ParcelIsleHarbourOffice_Osk_Text_0:
# 27 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "OSK: I filed the same three forms for\n"
	.string "six years. This week they sent me a\l"
	.string "fourth.\p"
	.string "It's called an 'impact acknowledgement'.\n"
	.string "Nobody can tell me what it\l"
	.string "acknowledges.$"

ParcelIsleHarbourOffice_Osk_Text_1:
# 29 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "OSK: I do the manifests. Everything off\n"
	.string "the boat, everything onto it.\p"
	.string "If you want to know what a town runs\n"
	.string "on, don't ask the mayor. Ask the\l"
	.string "manifest.$"
