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
	.string "Dagny: I've been asked to say nothing\n"
	.string "to you, and I've been asked in writing,\l"
	.string "so I'll say this: the coffee's still on.\p"
	.string "We're a logistics office. We'll move\n"
	.string "whatever the region decides to move. We\l"
	.string "always have. That was never the\l"
	.string "problem, was it.$"

ParcelIsleHarbourOffice_Dagny_Text_1:
# 13 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "Dagny: Every manifest since Tuesday\n"
	.string "has the word 'pending' on it. I've had to\l"
	.string "order more of the stamp.\p"
	.string "I'm not being funny. I ordered the\n"
	.string "stamp. That's my job now.$"

ParcelIsleHarbourOffice_Dagny_Text_2:
# 15 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "Dagny: The Corps' provisional. Welcome.\n"
	.string "Your field kit came through this office\l"
	.string "-- Foundation grant, Coastal freight,\l"
	.string "Logistics handling. All one family.\p"
	.string "That's not a threat. It's an org chart.\n"
	.string "People confuse the two.$"

ParcelIsleHarbourOffice_Dagny_Text_3:
# 17 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "Dagny: Mereholt Logistics. Freight,\n"
	.string "fuel, ferry co-ordination, and the\l"
	.string "storm-relief blankets, if you're\l"
	.string "wondering who paid for those.\p"
	.string "We're the part of the company that's\n"
	.string "easy to like. Coffee?$"

ParcelIsleHarbourOffice_Osk_Text_0:
# 27 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "Osk: I filed the same three forms for\n"
	.string "six years. This week they sent me a\l"
	.string "fourth.\p"
	.string "It's called an 'impact acknowledgement'.\n"
	.string "Nobody can tell me what it\l"
	.string "acknowledges.$"

ParcelIsleHarbourOffice_Osk_Text_1:
# 29 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "Osk: I do the manifests. Everything\n"
	.string "that comes off the boat, everything\l"
	.string "that goes on.\p"
	.string "If you want to know what a town runs\n"
	.string "on, don't ask the mayor. Ask the\l"
	.string "manifest.$"
