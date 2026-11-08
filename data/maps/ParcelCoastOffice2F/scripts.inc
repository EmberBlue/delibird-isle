ParcelCoastOffice2F_MapScripts::
# 3 "data/maps/ParcelCoastOffice2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelCoastOffice2F_OnTransition
	.byte 0


ParcelCoastOffice2F_OnTransition::
# 7 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastOffice2F_OnTransition_2
# 10 "data/maps/ParcelCoastOffice2F/scripts.pory"
	setflag FLAG_SKALD_PERRIN_DESK
ParcelCoastOffice2F_OnTransition_1:
	end

ParcelCoastOffice2F_OnTransition_2:
# 8 "data/maps/ParcelCoastOffice2F/scripts.pory"
	clearflag FLAG_SKALD_PERRIN_DESK
	goto ParcelCoastOffice2F_OnTransition_1


ParcelCoastOffice2F_Hollis::
# 15 "data/maps/ParcelCoastOffice2F/scripts.pory"
	lock
# 16 "data/maps/ParcelCoastOffice2F/scripts.pory"
	faceplayer
# 17 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORDELIA_DONE, ParcelCoastOffice2F_Hollis_2
# 23 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastOffice2F_Hollis_5
# 28 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_3, MSGBOX_DEFAULT
# 29 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_5, MSGBOX_DEFAULT
# 31 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_6, MSGBOX_DEFAULT
# 32 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_7, MSGBOX_DEFAULT
# 33 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Hollis_2:
# 18 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Hollis_5:
# 24 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_2, MSGBOX_DEFAULT
# 25 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end


ParcelCoastOffice2F_Secretary::
# 37 "data/maps/ParcelCoastOffice2F/scripts.pory"
	lock
# 38 "data/maps/ParcelCoastOffice2F/scripts.pory"
	faceplayer
# 39 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastOffice2F_Secretary_2
# 44 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastOffice2F_Secretary_5
# 49 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Secretary_2:
# 40 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Secretary_5:
# 45 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_1, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end


ParcelCoastOffice2F_Perrin::
# 55 "data/maps/ParcelCoastOffice2F/scripts.pory"
	lock
# 56 "data/maps/ParcelCoastOffice2F/scripts.pory"
	faceplayer
# 57 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastOffice2F_Perrin_2
ParcelCoastOffice2F_Perrin_1:
# 60 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Perrin_2:
# 58 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto ParcelCoastOffice2F_Perrin_Last
	goto ParcelCoastOffice2F_Perrin_1


ParcelCoastOffice2F_Perrin_Last::
# 68 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_7_DONE, ParcelCoastOffice2F_Perrin_Last_2
# 73 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_1, MSGBOX_YESNO
# 74 "data/maps/ParcelCoastOffice2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastOffice2F_Perrin_Last_5
# 79 "data/maps/ParcelCoastOffice2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_7, ParcelCoastOffice2F_Perrin_Last_Text_3
# 80 "data/maps/ParcelCoastOffice2F/scripts.pory"
	setflag FLAG_SKALD_PERRIN_7_DONE
# 81 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_4, MSGBOX_DEFAULT
# 82 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Perrin_Last_2:
# 69 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Perrin_Last_5:
# 75 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_2, MSGBOX_DEFAULT
# 76 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end


ParcelCoastOffice2F_Hollis_Text_0:
# 18 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: The conservation programme is\n"
	.string "being restructured. Her word. I typed\l"
	.string "the memo myself. I still type well.\p"
	.string "You'll want to know whether I'd do it\n"
	.string "again. So do I, RANGER. So do I.$"

ParcelCoastOffice2F_Hollis_Text_1:
# 19 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: No tea today. There's nowhere\n"
	.string "left to put the kindness.$"

ParcelCoastOffice2F_Hollis_Text_2:
# 24 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: The tea's still on, RANGER. The\n"
	.string "offer with it. Think about how you write\l"
	.string "it. That's all I ever ask.$"

ParcelCoastOffice2F_Hollis_Text_3:
# 28 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: RANGER. Sit. You've been\n"
	.string "thorough; the whole coast, I hear. Good.\l"
	.string "Thoroughness is rare. Two cups, I don't\l"
	.string "need to ask.$"

ParcelCoastOffice2F_Hollis_Text_4:
# 29 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: I'll be direct, since you've\n"
	.string "earned direct. Your survey will be read.\l"
	.string "By the Board, by the press, by the\l"
	.string "people who fund what recovery there is\l"
	.string "out there.\p"
	.string "And the model they trust, the one\n"
	.string "keeping this coast working at all, has\l"
	.string "one name on it.$"

ParcelCoastOffice2F_Hollis_Text_5:
# 30 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "{PLAYER}: …DR. HERON's.$"

ParcelCoastOffice2F_Hollis_Text_6:
# 31 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: I would hate for one\n"
	.string "unmeasured word from you to undo her\l"
	.string "life's work. For her to be remembered as\l"
	.string "the scientist whose model failed,\l"
	.string "instead of the one whose science is the\l"
	.string "only reason there's a fishery left to\l"
	.string "argue about.$"

ParcelCoastOffice2F_Hollis_Text_7:
# 32 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: So think about how you write it.\n"
	.string "For her sake. That's the whole of what\l"
	.string "I'm asking.\p"
	.string "It's very good tea. Drink it while it's\n"
	.string "hot.$"

ParcelCoastOffice2F_Secretary_Text_0:
# 40 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE still sees\n"
	.string "everyone. Fewer come. She remembers\l"
	.string "how each of them took their tea. She\l"
	.string "has started making it herself.$"

ParcelCoastOffice2F_Secretary_Text_1:
# 45 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE remembers how\n"
	.string "everyone takes their tea. She\l"
	.string "remembered yours before you came up\l"
	.string "the stairs.\p"
	.string "She's had the coast survey on her desk\n"
	.string "since it was filed. She hasn't moved it.\l"
	.string "She moves everything.$"

ParcelCoastOffice2F_Secretary_Text_2:
# 49 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE sees everyone.\n"
	.string "Fishers, mayors, RANGERS. She remembers\l"
	.string "how they take their tea. She remembers\l"
	.string "everything. It's why they sent her.$"

ParcelCoastOffice2F_Perrin_Text_0:
# 60 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: They gave me a desk. The one by\n"
	.string "the window. HOLLIS said I'd earned it.\p"
	.string "I read your filing. All of it. Twice. I\n"
	.string "typed the response. It's very good. It's\l"
	.string "the best thing I've ever written and it\l"
	.string "isn't true.$"

ParcelCoastOffice2F_Perrin_Text_1:
# 61 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: I'm not sorry. I'm not NOT sorry.\n"
	.string "Is that an answer?\p"
	.string "Go on. You've got a ferry. I've got a\n"
	.string "window.$"

ParcelCoastOffice2F_Perrin_Last_Text_0:
# 69 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: I'm staying. Someone should be\n"
	.string "in here who's read it. That's me, now.\p"
	.string "The window's good. You can see the\n"
	.string "ferry from it.$"

ParcelCoastOffice2F_Perrin_Last_Text_1:
# 73 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: WREN. They put the hearing on\n"
	.string "the office speaker. HOLLIS listened to\l"
	.string "all of it with her tea going cold.\p"
	.string "One more. Not for the ranking. For me.\n"
	.string "Please.$"

ParcelCoastOffice2F_Perrin_Last_Text_2:
# 75 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: Then later. I'll be at this desk.\n"
	.string "It's a good desk.$"

ParcelCoastOffice2F_Perrin_Last_Text_3:
# 79 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: …Okay. Okay. That one I'll keep.$"

ParcelCoastOffice2F_Perrin_Last_Text_4:
# 81 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: I'm staying. Someone should be\n"
	.string "in here who's read it. That's me, now.\p"
	.string "Go on. You've got a region. I've got a\n"
	.string "window.$"
