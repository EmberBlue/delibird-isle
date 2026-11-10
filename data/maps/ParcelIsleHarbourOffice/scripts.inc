ParcelIsleHarbourOffice_MapScripts::
	.byte 0


ParcelIsleHarbourOffice_Dagny::
# 8 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleHarbourOffice_Dagny_2
# 15 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelIsleHarbourOffice_Dagny_5
# 17 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHarbourOffice_Dagny_6
# 19 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHarbourOffice_Dagny_7
# 22 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_4, MSGBOX_DEFAULT
ParcelIsleHarbourOffice_Dagny_4:
# 24 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end

ParcelIsleHarbourOffice_Dagny_2:
# 11 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end

ParcelIsleHarbourOffice_Dagny_5:
# 16 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Dagny_4

ParcelIsleHarbourOffice_Dagny_6:
# 18 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Dagny_4

ParcelIsleHarbourOffice_Dagny_7:
# 20 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Dagny_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Dagny_4


ParcelIsleHarbourOffice_Osk::
# 29 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	lock
# 30 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	faceplayer
# 31 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleHarbourOffice_Osk_2
# 36 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHarbourOffice_Osk_5
ParcelIsleHarbourOffice_Osk_4:
# 39 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHarbourOffice_Osk_8
# 44 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Osk_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end

ParcelIsleHarbourOffice_Osk_2:
# 32 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Osk_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end

ParcelIsleHarbourOffice_Osk_5:
# 37 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Osk_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHarbourOffice_Osk_4

ParcelIsleHarbourOffice_Osk_8:
# 40 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Osk_Text_2, MSGBOX_DEFAULT
# 41 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	release
	end


ParcelIsleHarbourOffice_ReadCounter::
# 51 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_ReadCounter_Text_0, MSGBOX_SIGN
	end


ParcelIsleHarbourOffice_ReadShelf::
# 56 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelIsleHarbourOffice_Log::
# 63 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	msgbox ParcelIsleHarbourOffice_Log_Text_0, MSGBOX_SIGN
	return


ParcelIsleHarbourOffice_Dagny_Text_0:
# 11 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: I'm allowed to talk to you now.\n"
	.string "In writing, even. The coffee's on.\p"
	.string "The manifests say what's in the crates.\n"
	.string "I never thought I'd find that exciting.$"

ParcelIsleHarbourOffice_Dagny_Text_1:
# 16 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: I've been asked, in writing, to\n"
	.string "say nothing to you. So here's what I'll\l"
	.string "say: the coffee's still on.\p"
	.string "We're a logistics office. We move\n"
	.string "whatever the region decides to move.\l"
	.string "That was never the problem, was it?$"

ParcelIsleHarbourOffice_Dagny_Text_2:
# 18 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: Every manifest since Tuesday\n"
	.string "has 'PENDING' on it. I had to order more\l"
	.string "of the stamp.\p"
	.string "I'm not joking. I ordered the stamp.\n"
	.string "That's my job now.$"

ParcelIsleHarbourOffice_Dagny_Text_3:
# 20 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: The new RANGER! Welcome. Your\n"
	.string "field kit came through this office.\l"
	.string "FOUNDATION grant, COASTAL freight,\l"
	.string "LOGISTICS handling. All one family.\p"
	.string "That's not a threat, it's an org chart.\n"
	.string "People confuse the two.$"

ParcelIsleHarbourOffice_Dagny_Text_4:
# 22 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "DAGNY: MEREHOLT LOGISTICS. Freight,\n"
	.string "fuel, ferry coordination. And the\l"
	.string "storm-relief blankets, if you're\l"
	.string "wondering who paid for those.\p"
	.string "We're the part of the company that's\n"
	.string "easy to like. Coffee?$"

ParcelIsleHarbourOffice_Osk_Text_0:
# 32 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "OSK: Four forms, still. The fourth one's\n"
	.string "got a column for what came back. I've\l"
	.string "filled it in twice.\p"
	.string "'Relief, returned, empty' and 'evidence,\n"
	.string "returned, read'.$"

ParcelIsleHarbourOffice_Osk_Text_1:
# 37 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "OSK: I filed the same three forms for\n"
	.string "six years. This week they sent me a\l"
	.string "fourth.\p"
	.string "It's called an 'impact acknowledgement'.\n"
	.string "Nobody can tell me what it\l"
	.string "acknowledges.$"

ParcelIsleHarbourOffice_Osk_Text_2:
# 40 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "OSK: Two manifests this month I've\n"
	.string "never written before. 'Evidence, three\l"
	.string "crates.' And 'relief, returned, empty.'\p"
	.string "If you want to know what a region's\n"
	.string "doing, don't ask the papers. Ask what\l"
	.string "moved.$"

ParcelIsleHarbourOffice_Osk_Text_3:
# 44 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "OSK: I do the manifests. Everything off\n"
	.string "the boat, everything onto it.\p"
	.string "If you want to know what a town runs\n"
	.string "on, don't ask the mayor. Ask the\l"
	.string "manifest.$"

ParcelIsleHarbourOffice_ReadCounter_Text_0:
# 51 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "Manifests on the counter, weighted\n"
	.string "with a shackle. Fuel, crates,\l"
	.string "passengers.\p"
	.string "Your name is on one of them: PASSENGER,\n"
	.string "ONE, ISLAND STOP.$"

ParcelIsleHarbourOffice_ReadShelf_Text_0:
# 56 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "A shelf of bound manifests, every month\n"
	.string "for thirty years. You could read the\l"
	.string "town's whole life off them. Osk already\l"
	.string "has.$"

ParcelIsleHarbourOffice_Log_Text_0:
# 63 "data/maps/ParcelIsleHarbourOffice/scripts.pory"
	.string "The harbour log, open at last month.\n"
	.string "Every hull in and out, with the hour and\l"
	.string "the master's initials.\p"
	.string "The ferry, twice a day, in the\n"
	.string "harbourmaster's hand. Fishing boats\l"
	.string "before light. A Mereholt Logistics\l"
	.string "coaster on the first of the month, as\l"
	.string "every month.\p"
	.string "One night entry, not in the\n"
	.string "harbourmaster's hand: LOGISTICS, VAN\l"
	.string "AND LAUNCH, 02:10, NO CARGO DECLARED.\l"
	.string "Initials you cannot read. The launch\l"
	.string "left at 04:40, riding low.\p"
	.string "The next morning's entry is the\n"
	.string "harbourmaster's again. It says: lab on\l"
	.string "the front cleared out overnight. Police\l"
	.string "informed. Nothing to do with the\l"
	.string "harbour.\p"
	.string "The two entries are three lines apart.\n"
	.string "Nobody has drawn a line between them.\l"
	.string "Nobody needed to.$"
