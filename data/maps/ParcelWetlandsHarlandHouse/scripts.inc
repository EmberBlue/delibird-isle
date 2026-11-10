ParcelWetlandsHarlandHouse_MapScripts::
	.byte 0


ParcelWetlandsHarlandHouse_Maren::
# 8 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHarlandHouse_Maren_2
# 15 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHarlandHouse_Maren_5
# 20 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHarlandHouse_Maren_8
# 25 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsHarlandHouse_Maren_11
# 30 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 31 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	setvar VAR_0x8004, 5
# 32 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 33 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelWetlandsHarlandHouse_Maren_14
# 38 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_5, MSGBOX_DEFAULT
# 39 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_6, MSGBOX_DEFAULT
# 40 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
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
# 21 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Maren_11:
# 26 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_3, MSGBOX_DEFAULT
# 27 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Maren_14:
# 34 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Maren_Text_4, MSGBOX_DEFAULT
# 35 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end


ParcelWetlandsHarlandHouse_Kid::
# 45 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	lock
# 46 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	faceplayer
# 47 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHarlandHouse_Kid_2
# 52 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHarlandHouse_Kid_5
# 57 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHarlandHouse_Kid_8
# 62 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	checktrainerflag TRAINER_SKALD_ENFORCER
	goto_if 1, ParcelWetlandsHarlandHouse_Kid_11
# 67 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_4, MSGBOX_DEFAULT
# 68 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Kid_2:
# 48 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Kid_5:
# 53 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Kid_8:
# 58 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end

ParcelWetlandsHarlandHouse_Kid_11:
# 63 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Kid_Text_3, MSGBOX_DEFAULT
# 64 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end


ParcelWetlandsHarlandHouse_Wooper::
# 73 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	lock
# 74 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	faceplayer
# 75 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_Wooper_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	release
	end


ParcelWetlandsHarlandHouse_ReadDresser::
# 81 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHarlandHouse_ReadDrawer::
# 86 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	msgbox ParcelWetlandsHarlandHouse_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHarlandHouse_Maren_Text_0:
# 11 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: He's out every morning, fishing\n"
	.string "again, not just out. He brings back\l"
	.string "small ones and lets them go and brings\l"
	.string "back one for the pan.\p"
	.string "He hums. He never hummed.$"

ParcelWetlandsHarlandHouse_Maren_Text_1:
# 16 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: He won't say it, so I will. Thank\n"
	.string "you.\p"
	.string "He's been out on the water every\n"
	.string "morning since the radio. Not fishing.\l"
	.string "Just out on it.$"

ParcelWetlandsHarlandHouse_Maren_Text_2:
# 21 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: HARLAND went to the river\n"
	.string "meeting. Stood at the back. Didn't\l"
	.string "speak. Came home and said six people did\l"
	.string "it for him.\p"
	.string "He's still got the boat loan papers in\n"
	.string "the drawer. He hasn't signed them.\l"
	.string "That's new.$"

ParcelWetlandsHarlandHouse_Maren_Text_3:
# 26 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: He came in last night and sat at\n"
	.string "that table for an hour without a word.\p"
	.string "That's HARLAND thinking. You don't see\n"
	.string "it often. Let him.$"

ParcelWetlandsHarlandHouse_Maren_Text_4:
# 34 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: Don't mind what he shouted at\n"
	.string "you. He shouts at the weather.\p"
	.string "The fish, though. We eat those fish. Our\n"
	.string "boy eats those fish.$"

ParcelWetlandsHarlandHouse_Maren_Text_5:
# 38 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: You're the new provisional.\n"
	.string "HARLAND said. Well, he said 'another\l"
	.string "one.'\p"
	.string "Sit if you want. There's tea. He'll be\n"
	.string "civil in here, it's my house.$"

ParcelWetlandsHarlandHouse_Maren_Text_6:
# 39 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "MAREN: The councilman's been very good\n"
	.string "to us, you know. The boat loan. The\l"
	.string "office jobs.\p"
	.string "I don't know what the CORPS has ever\n"
	.string "done for the landing. That's not an\l"
	.string "accusation. I'm asking.$"

ParcelWetlandsHarlandHouse_Kid_Text_0:
# 48 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad counts the fish with me every\n"
	.string "week. Seven. He said seven's a number\l"
	.string "you can say twice.\p"
	.string "I said it twice.$"

ParcelWetlandsHarlandHouse_Kid_Text_1:
# 53 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad went to the hearing. He came\n"
	.string "back and said you're all right. He said it\l"
	.string "like it didn't hurt this time.$"

ParcelWetlandsHarlandHouse_Kid_Text_2:
# 58 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad went to the river for the\n"
	.string "meeting. He came back and counted the\l"
	.string "fish with me. Five.\p"
	.string "He said five is a number you can say out\n"
	.string "loud now. I don't know what that means.\l"
	.string "He seemed to.$"

ParcelWetlandsHarlandHouse_Kid_Text_3:
# 63 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad says you're all right. He said\n"
	.string "it like it hurt.$"

ParcelWetlandsHarlandHouse_Kid_Text_4:
# 67 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "BOY: Dad says the CORPS counts the\n"
	.string "fish wrong. I counted them. There's\l"
	.string "four. Is four wrong?$"

ParcelWetlandsHarlandHouse_Wooper_Text_0:
# 75 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "WOOPER: Woop.$"

ParcelWetlandsHarlandHouse_ReadDresser_Text_0:
# 81 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "The boat loan papers, in the dresser\n"
	.string "drawer that doesn't close. Unsigned.\l"
	.string "The pen is on top of them.$"

ParcelWetlandsHarlandHouse_ReadDrawer_Text_0:
# 86 "data/maps/ParcelWetlandsHarlandHouse/scripts.pory"
	.string "A WOOPER's water dish beside the\n"
	.string "drawers, and a child's chart taped\l"
	.string "above it: FISH. Four.\p"
	.string "Then, in a different pencil: five.$"
