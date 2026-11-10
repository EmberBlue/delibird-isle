ParcelWetlandsOffice_MapScripts::
	.byte 0


ParcelWetlandsOffice_Clerk::
# 9 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 10 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Clerk_2
# 16 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsOffice_Clerk_5
# 21 "data/maps/ParcelWetlandsOffice/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsOffice_Clerk_8
# 26 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_3, MSGBOX_DEFAULT
# 27 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Clerk_2:
# 12 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Clerk_5:
# 17 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Clerk_8:
# 22 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Tech::
# 32 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 33 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 34 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Tech_2
# 39 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsOffice_Tech_5
# 44 "data/maps/ParcelWetlandsOffice/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 45 "data/maps/ParcelWetlandsOffice/scripts.pory"
	setvar VAR_0x8004, 5
# 46 "data/maps/ParcelWetlandsOffice/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 47 "data/maps/ParcelWetlandsOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlandsOffice_Tech_8
# 52 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_3, MSGBOX_DEFAULT
# 53 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Tech_2:
# 35 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Tech_5:
# 40 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Tech_8:
# 48 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_2, MSGBOX_DEFAULT
# 49 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Rep::
# 58 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 59 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 60 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Rep_2
# 65 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsOffice_Rep_5
# 70 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Rep_Text_2, MSGBOX_DEFAULT
# 71 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Rep_2:
# 61 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Rep_Text_0, MSGBOX_DEFAULT
# 62 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Rep_5:
# 66 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Rep_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Local::
# 76 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 77 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 78 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Local_2
# 83 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsOffice_Local_5
# 88 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Local_Text_2, MSGBOX_DEFAULT
# 89 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Local_2:
# 79 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Local_Text_0, MSGBOX_DEFAULT
# 80 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Local_5:
# 84 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Local_Text_1, MSGBOX_DEFAULT
# 85 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_ReadBinders::
# 94 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_ReadBinders_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsOffice_ReadTerminal::
# 99 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_ReadTerminal_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsOffice_ReadGaugeDesk::
# 104 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_ReadGaugeDesk_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsOffice_Programme::
# 111 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Programme_Text_0, MSGBOX_SIGN
	return


ParcelWetlandsOffice_Clerk_Text_0:
# 12 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: The councilman is here. He's in\n"
	.string "the back room with a man from the Board\l"
	.string "and a monitoring schedule. I've been\l"
	.string "told to say the office is open. It is.\l"
	.string "That's new.$"

ParcelWetlandsOffice_Clerk_Text_1:
# 17 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: The councilman is in the basin,\n"
	.string "I'm told. Then the river. Then the coast.\l"
	.string "He's everywhere except here.\p"
	.string "The office is operating normally. I've\n"
	.string "said that so often the words have\l"
	.string "stopped meaning anything. That's\l"
	.string "probably normal too.$"

ParcelWetlandsOffice_Clerk_Text_2:
# 22 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: The councilman isn't here. The\n"
	.string "councilman isn't anywhere, apparently.\p"
	.string "I've been told to say the office is\n"
	.string "operating normally. The office is\l"
	.string "operating normally.$"

ParcelWetlandsOffice_Clerk_Text_3:
# 26 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: Welcome to the TIDEWATER\n"
	.string "DIVISION. We gauge every channel on\l"
	.string "the backwater, hourly.\p"
	.string "Flow, depth, turbidity. It's all public.\n"
	.string "Well. It's all filed.$"

ParcelWetlandsOffice_Tech_Text_0:
# 35 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: The gauges picked it up\n"
	.string "this time. The new ones. The old ones\l"
	.string "were set to miss it; the hearing said so\l"
	.string "in better words. I've recalibrated. I\l"
	.string "sleep now.$"

ParcelWetlandsOffice_Tech_Text_1:
# 40 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: I pulled the gauge logs for\n"
	.string "the week of the kill. Flat. Then I pulled\l"
	.string "the river Board's logs, because they're\l"
	.string "public now, and theirs aren't flat.\p"
	.string "Same make of gauge. Different water, or\n"
	.string "different hands. I've put in for a\l"
	.string "transfer to find out which.$"

ParcelWetlandsOffice_Tech_Text_2:
# 48 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: The gauges didn't pick up\n"
	.string "anything. Nothing. A kill like that and\l"
	.string "the numbers are flat.\p"
	.string "Either the gauges are wrong or the\n"
	.string "gauges are where the water isn't.$"

ParcelWetlandsOffice_Tech_Text_3:
# 52 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: Four gauges on the\n"
	.string "channels and one on the falls. Hourly.\l"
	.string "The readings go to the coast office.\p"
	.string "No, I don't see them after that.$"

ParcelWetlandsOffice_Rep_Text_0:
# 61 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "MEREHOLT REP: The FOUNDATION believes\n"
	.string "in partnership. We've a new partnership\l"
	.string "page: local hands, local jobs, local\l"
	.string "water, and a local monitor who isn't\l"
	.string "ours. I'm reading it aloud to people.\l"
	.string "It's a start.$"

ParcelWetlandsOffice_Rep_Text_1:
# 66 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "MEREHOLT REP: The FOUNDATION welcomes\n"
	.string "the river community's engagement.\l"
	.string "Partnership is a process.\p"
	.string "We have revised the brochure. The new\n"
	.string "one has fewer numbers in it. Do take\l"
	.string "one.$"

ParcelWetlandsOffice_Rep_Text_2:
# 70 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "MEREHOLT REP: The FOUNDATION believes\n"
	.string "in partnership. Local hands, local jobs,\l"
	.string "local water.\p"
	.string "You'll find we have nothing to hide here,\n"
	.string "RANGER. Nothing at all. Do have a\l"
	.string "brochure.$"

ParcelWetlandsOffice_Local_Text_0:
# 79 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "FISHER: The boat loan came through.\n"
	.string "Not from the councilman. From a fund\l"
	.string "the review set up. I waited an hour for\l"
	.string "the wrong man for a year. The right one\l"
	.string "was a form.$"

ParcelWetlandsOffice_Local_Text_1:
# 84 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "FISHER: Still waiting on the boat loan.\n"
	.string "The councilman's at the river, they say,\l"
	.string "explaining a sheet of numbers to people\l"
	.string "who can read.\p"
	.string "I can read. I'm just not on the sheet.\n"
	.string "Yet.$"

ParcelWetlandsOffice_Local_Text_2:
# 88 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "FISHER: I came to ask about the boat\n"
	.string "loan. Been waiting an hour.\p"
	.string "The councilman said to ask. The\n"
	.string "councilman isn't the one at the desk.$"

ParcelWetlandsOffice_ReadBinders_Text_0:
# 94 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "Binders: CHANNEL GAUGE READINGS, by\n"
	.string "month. Every one the same thickness.\l"
	.string "Flat numbers take up as much room as\l"
	.string "the other kind.$"

ParcelWetlandsOffice_ReadTerminal_Text_0:
# 99 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "A terminal. Four channel gauges and one\n"
	.string "on the falls, all reading NORMAL.\p"
	.string "The fifth gauge is drawn on the screen\n"
	.string "in a place the falls are not.$"

ParcelWetlandsOffice_ReadGaugeDesk_Text_0:
# 104 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "The gauge desk. Under the blotter, the\n"
	.string "corner of a hand-drawn map: where the\l"
	.string "gauges are, and in red, where the water\l"
	.string "actually goes.$"

ParcelWetlandsOffice_Programme_Text_0:
# 111 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "The programme from the office's\n"
	.string "opening, framed. TIDEWATER MONITORING\l"
	.string "OFFICE, A COMMUNITY PARTNERSHIP.\p"
	.string "Ten o'clock, the ribbon. Commissioner\n"
	.string "Dorsey. Ten fifteen, remarks: the\l"
	.string "Foundation's programme officer. Ten\l"
	.string "thirty, the gauges explained: a\l"
	.string "technician. Eleven, refreshments,\l"
	.string "courtesy of Mereholt Coastal.\p"
	.string "A drawing of the five gauges on the\n"
	.string "back. Four of them stand where the\l"
	.string "gauges stand. The fifth is drawn at the\l"
	.string "falls.\p"
	.string "There are no falls on this river. There\n"
	.string "were, once, before the sluice. The\l"
	.string "artist worked from the Board's old map,\l"
	.string "and nobody at the ribbon noticed.$"
