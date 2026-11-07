ParcelWetlandsOffice_MapScripts::
	.byte 0


ParcelWetlandsOffice_Clerk::
# 9 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 10 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelWetlandsOffice/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsOffice_Clerk_2
# 16 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_1, MSGBOX_DEFAULT
# 17 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Clerk_2:
# 12 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Clerk_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Tech::
# 22 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 23 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 24 "data/maps/ParcelWetlandsOffice/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 25 "data/maps/ParcelWetlandsOffice/scripts.pory"
	setvar VAR_0x8004, 5
# 26 "data/maps/ParcelWetlandsOffice/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 27 "data/maps/ParcelWetlandsOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlandsOffice_Tech_2
# 32 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end

ParcelWetlandsOffice_Tech_2:
# 28 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Tech_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Rep::
# 38 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 39 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 40 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Rep_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Local::
# 46 "data/maps/ParcelWetlandsOffice/scripts.pory"
	lock
# 47 "data/maps/ParcelWetlandsOffice/scripts.pory"
	faceplayer
# 48 "data/maps/ParcelWetlandsOffice/scripts.pory"
	msgbox ParcelWetlandsOffice_Local_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelWetlandsOffice/scripts.pory"
	release
	end


ParcelWetlandsOffice_Clerk_Text_0:
# 12 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: The councilman isn't here. The\n"
	.string "councilman isn't anywhere, apparently.\p"
	.string "I've been told to say the office is\n"
	.string "operating normally. The office is\l"
	.string "operating normally.$"

ParcelWetlandsOffice_Clerk_Text_1:
# 16 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "CLERK: Welcome to the TIDEWATER\n"
	.string "DIVISION. We gauge every channel on\l"
	.string "the backwater, hourly.\p"
	.string "Flow, depth, turbidity. It's all public.\n"
	.string "Well. It's all filed.$"

ParcelWetlandsOffice_Tech_Text_0:
# 28 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: The gauges didn't pick up\n"
	.string "anything. Nothing. A kill like that and\l"
	.string "the numbers are flat.\p"
	.string "Either the gauges are wrong or the\n"
	.string "gauges are where the water isn't.$"

ParcelWetlandsOffice_Tech_Text_1:
# 32 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "TECHNICIAN: Four gauges on the\n"
	.string "channels and one on the falls. Hourly.\l"
	.string "The readings go to the coast office.\p"
	.string "No, I don't see them after that.$"

ParcelWetlandsOffice_Rep_Text_0:
# 40 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "MEREHOLT REP: The FOUNDATION believes\n"
	.string "in partnership. Local hands, local jobs,\l"
	.string "local water.\p"
	.string "You'll find we have nothing to hide here,\n"
	.string "RANGER. Nothing at all. Do have a\l"
	.string "brochure.$"

ParcelWetlandsOffice_Local_Text_0:
# 48 "data/maps/ParcelWetlandsOffice/scripts.pory"
	.string "FISHER: I came to ask about the boat\n"
	.string "loan. Been waiting an hour.\p"
	.string "The councilman said to ask. The\n"
	.string "councilman isn't the one at the desk.$"
