ParcelWetlandsHarlandHouse_MapScripts::
	.byte 0


ParcelWetlandsHarlandHouse_Maren::
# 8 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHarlandHouse_Maren_2
# 15 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsHarlandHouse_Maren_5
# 20 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 21 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	setvar VAR_0x8004, 5
# 22 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 23 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlandsHarlandHouse_Maren_8
# 28 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_3, MSGBOX_DEFAULT
# 29 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Maren_2:
# 11 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Maren_5:
# 16 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_1, MSGBOX_DEFAULT
# 17 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Maren_8:
# 24 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_2, MSGBOX_DEFAULT
# 25 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end


ParcelWetlandsHarlandHouse_Kid::
# 35 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	lock
# 36 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHarlandHouse_Kid_2
# 42 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsHarlandHouse_Kid_5
# 47 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_2, MSGBOX_DEFAULT
# 48 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Kid_2:
# 38 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Kid_5:
# 43 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end


ParcelWetlandsHarlandHouse_Wooper::
# 53 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	lock
# 54 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	faceplayer
# 55 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Wooper_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end


ParcelWetlandsHarlandHouse_Maren_Text_0:
# 11 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: He won't say it, so I will. Thank\n"
	.string "you.\p"
	.string "He's been out on the water every\n"
	.string "morning since the radio. Not fishing.\l"
	.string "Just out on it.$"

ParcelWetlandsHarlandHouse_Maren_Text_1:
# 16 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: He came in last night and sat at\n"
	.string "that table for an hour without a word.\p"
	.string "That's HARLAND thinking. You don't see\n"
	.string "it often. Let him.$"

ParcelWetlandsHarlandHouse_Maren_Text_2:
# 24 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: Don't mind what he shouted at\n"
	.string "you. He shouts at the weather.\p"
	.string "The fish, though. We eat those fish. Our\n"
	.string "boy eats those fish.$"

ParcelWetlandsHarlandHouse_Maren_Text_3:
# 28 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: You're the new provisional.\n"
	.string "HARLAND said. Well, he said 'another\l"
	.string "one.'\p"
	.string "Sit if you want. There's tea. He'll be\n"
	.string "civil in here, it's my house.$"

ParcelWetlandsHarlandHouse_Maren_Text_4:
# 29 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: The councilman's been very good\n"
	.string "to us, you know. The boat loan. The\l"
	.string "office jobs.\p"
	.string "I don't know what the CORPS has ever\n"
	.string "done for the landing. That's not an\l"
	.string "accusation. I'm asking.$"

ParcelWetlandsHarlandHouse_Kid_Text_0:
# 38 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad went to the hearing. He came\n"
	.string "back and said you're all right. He said it\l"
	.string "like it didn't hurt this time.$"

ParcelWetlandsHarlandHouse_Kid_Text_1:
# 43 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad says you're all right. He said\n"
	.string "it like it hurt.$"

ParcelWetlandsHarlandHouse_Kid_Text_2:
# 47 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad says the CORPS counts the\n"
	.string "fish wrong. I counted them. There's\l"
	.string "four. Is four wrong?$"

ParcelWetlandsHarlandHouse_Wooper_Text_0:
# 55 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "WOOPER: Woop.$"
