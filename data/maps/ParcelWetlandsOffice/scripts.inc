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
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsOffice_Clerk_5
# 21 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelWetlandsOffice/scripts.pory"
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


ParcelWetlandsOffice_Tech::
# 27 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 28 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Tech_2
# 34 "data/maps/ParcelWetlandsOffice/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 35 "data/maps/ParcelWetlandsOffice/scripts.pory"
	setvar VAR_0x8004, 5
# 36 "data/maps/ParcelWetlandsOffice/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 37 "data/maps/ParcelWetlandsOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlandsOffice_Tech_5
# 42 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Tech_2:
# 30 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Tech_5:
# 38 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Rep::
# 48 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 49 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 50 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Rep_2
# 55 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Rep_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Rep_2:
# 51 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Rep_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Local::
# 61 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 62 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 63 "data/maps/ParcelWetlandsOffice/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsOffice_Local_2
# 68 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Local_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Local_2:
# 64 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Local_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Clerk_Text_0:
# 12 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: The councilman is here. He's in\n"
	.string "the back room with a man from the Board\l"
	.string "and a monitoring schedule. I've been\l"
	.string "told to say the office is open. It is.\l"
	.string "That's new.$"

ParcelWetlandsOffice_Clerk_Text_1:
# 17 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: The councilman isn't here. The\n"
	.string "councilman isn't anywhere, apparently.\p"
	.string "I've been told to say the office is\n"
	.string "operating normally. The office is\l"
	.string "operating normally.$"

ParcelWetlandsOffice_Clerk_Text_2:
# 21 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: Welcome to the TIDEWATER\n"
	.string "DIVISION. We gauge every channel on\l"
	.string "the backwater, hourly.\p"
	.string "Flow, depth, turbidity. It's all public.\n"
	.string "Well. It's all filed.$"

ParcelWetlandsOffice_Tech_Text_0:
# 30 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: The gauges picked it up\n"
	.string "this time. The new ones. The old ones\l"
	.string "were set to miss it; the hearing said so\l"
	.string "in better words. I've recalibrated. I\l"
	.string "sleep now.$"

ParcelWetlandsOffice_Tech_Text_1:
# 38 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: The gauges didn't pick up\n"
	.string "anything. Nothing. A kill like that and\l"
	.string "the numbers are flat.\p"
	.string "Either the gauges are wrong or the\n"
	.string "gauges are where the water isn't.$"

ParcelWetlandsOffice_Tech_Text_2:
# 42 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: Four gauges on the\n"
	.string "channels and one on the falls. Hourly.\l"
	.string "The readings go to the coast office.\p"
	.string "No, I don't see them after that.$"

ParcelWetlandsOffice_Rep_Text_0:
# 51 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "MEREHOLT REP: The FOUNDATION believes\n"
	.string "in partnership. We've a new partnership\l"
	.string "page: local hands, local jobs, local\l"
	.string "water, and a local monitor who isn't\l"
	.string "ours. I'm reading it aloud to people.\l"
	.string "It's a start.$"

ParcelWetlandsOffice_Rep_Text_1:
# 55 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "MEREHOLT REP: The FOUNDATION believes\n"
	.string "in partnership. Local hands, local jobs,\l"
	.string "local water.\p"
	.string "You'll find we have nothing to hide here,\n"
	.string "RANGER. Nothing at all. Do have a\l"
	.string "brochure.$"

ParcelWetlandsOffice_Local_Text_0:
# 64 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "FISHER: The boat loan came through.\n"
	.string "Not from the councilman. From a fund\l"
	.string "the review set up. I waited an hour for\l"
	.string "the wrong man for a year. The right one\l"
	.string "was a form.$"

ParcelWetlandsOffice_Local_Text_1:
# 68 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "FISHER: I came to ask about the boat\n"
	.string "loan. Been waiting an hour.\p"
	.string "The councilman said to ask. The\n"
	.string "councilman isn't the one at the desk.$"
