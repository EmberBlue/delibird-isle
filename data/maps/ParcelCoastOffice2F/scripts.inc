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
# 33 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastOffice2F_Hollis_5
# 38 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_7, MSGBOX_DEFAULT
# 39 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_8, MSGBOX_DEFAULT
# 40 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_9, MSGBOX_DEFAULT
# 41 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_10, MSGBOX_DEFAULT
# 42 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_11, MSGBOX_DEFAULT
# 43 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_12, MSGBOX_YESNO
# 44 "data/maps/ParcelCoastOffice2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoastOffice2F_Hollis_12
# 48 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_14, MSGBOX_DEFAULT
ParcelCoastOffice2F_Hollis_11:
# 50 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Hollis_2:
# 18 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALD_CH_HOLLIS_NAMED, ParcelCoastOffice2F_Hollis_8
# 22 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_2, MSGBOX_DEFAULT
# 23 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_3, MSGBOX_DEFAULT
ParcelCoastOffice2F_Hollis_7:
# 25 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALD_CH_TEA, ParcelCoastOffice2F_Hollis_16
# 28 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_5, MSGBOX_DEFAULT
ParcelCoastOffice2F_Hollis_15:
# 30 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Hollis_5:
# 34 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_6, MSGBOX_DEFAULT
# 35 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Hollis_8:
# 19 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_1, MSGBOX_DEFAULT
	goto ParcelCoastOffice2F_Hollis_7

ParcelCoastOffice2F_Hollis_12:
# 45 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_13, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCoastOffice2F/scripts.pory"
	setflag FLAG_SKALD_CH_TEA
	goto ParcelCoastOffice2F_Hollis_11

ParcelCoastOffice2F_Hollis_16:
# 26 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Hollis_Text_4, MSGBOX_DEFAULT
	goto ParcelCoastOffice2F_Hollis_15


ParcelCoastOffice2F_Secretary::
# 54 "data/maps/ParcelCoastOffice2F/scripts.pory"
	lock
# 55 "data/maps/ParcelCoastOffice2F/scripts.pory"
	faceplayer
# 56 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastOffice2F_Secretary_2
# 65 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastOffice2F_Secretary_5
# 70 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_3, MSGBOX_DEFAULT
# 71 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Secretary_2:
# 57 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALD_CH_TEA, ParcelCoastOffice2F_Secretary_8
# 60 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_1, MSGBOX_DEFAULT
ParcelCoastOffice2F_Secretary_7:
# 62 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Secretary_5:
# 66 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_2, MSGBOX_DEFAULT
# 67 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Secretary_8:
# 58 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Secretary_Text_0, MSGBOX_DEFAULT
	goto ParcelCoastOffice2F_Secretary_7


ParcelCoastOffice2F_Perrin::
# 76 "data/maps/ParcelCoastOffice2F/scripts.pory"
	lock
# 77 "data/maps/ParcelCoastOffice2F/scripts.pory"
	faceplayer
# 78 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastOffice2F_Perrin_2
ParcelCoastOffice2F_Perrin_1:
# 81 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Text_0, MSGBOX_DEFAULT
# 82 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Perrin_2:
# 79 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto ParcelCoastOffice2F_Perrin_Last
	goto ParcelCoastOffice2F_Perrin_1


ParcelCoastOffice2F_Perrin_Last::
# 89 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_7_DONE, ParcelCoastOffice2F_Perrin_Last_2
# 94 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_1, MSGBOX_YESNO
# 95 "data/maps/ParcelCoastOffice2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelCoastOffice2F_Perrin_Last_5
# 100 "data/maps/ParcelCoastOffice2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_7, ParcelCoastOffice2F_Perrin_Last_Text_3
# 101 "data/maps/ParcelCoastOffice2F/scripts.pory"
	setflag FLAG_SKALD_PERRIN_7_DONE
# 102 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_4, MSGBOX_DEFAULT
# 103 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Perrin_Last_2:
# 90 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_0, MSGBOX_DEFAULT
# 91 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end

ParcelCoastOffice2F_Perrin_Last_5:
# 96 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Perrin_Last_Text_2, MSGBOX_DEFAULT
# 97 "data/maps/ParcelCoastOffice2F/scripts.pory"
	release
	end


ParcelCoastOffice2F_ReadModel::
# 108 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_ReadModel_Text_0, MSGBOX_SIGN
	end


ParcelCoastOffice2F_ReadDesk::
# 113 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_ReadDesk_Text_0, MSGBOX_SIGN
	end


ParcelCoastOffice2F_ReadBoat::
# 118 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_ReadBoat_Text_0, MSGBOX_SIGN
	end


ParcelCoastOffice2F_GrantFile::
# 125 "data/maps/ParcelCoastOffice2F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastOffice2F_GrantFile_1
# 128 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_GrantFile_Text_1, MSGBOX_SIGN
	return

ParcelCoastOffice2F_GrantFile_1:
# 126 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_GrantFile_Text_0, MSGBOX_SIGN
	return


ParcelCoastOffice2F_Programme::
# 133 "data/maps/ParcelCoastOffice2F/scripts.pory"
	msgbox ParcelCoastOffice2F_Programme_Text_0, MSGBOX_SIGN
	return


ParcelCoastOffice2F_Hollis_Text_0:
# 19 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: My name was in it. Every\n"
	.string "renewal, every condition, in order. You\l"
	.string "were thorough. I said you would be.\p"
	.string "The conservation programme is being\n"
	.string "restructured. Her word. I typed the\l"
	.string "memo about myself. I still type well.$"

ParcelCoastOffice2F_Hollis_Text_1:
# 20 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: You'll want to know whether I'd\n"
	.string "have left you out, in your place. I've\l"
	.string "thought about it. I don't know. That is\l"
	.string "the most honest sentence I've said in\l"
	.string "this room.$"

ParcelCoastOffice2F_Hollis_Text_2:
# 22 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: My name wasn't in it. I read it\n"
	.string "twice to be sure. Every letter I signed\l"
	.string "is in the file and not one of them is in\l"
	.string "your record.\p"
	.string "I don't know whether to thank you or to\n"
	.string "ask why. I've started typing the fourth\l"
	.string "letter myself. Someone should.$"

ParcelCoastOffice2F_Hollis_Text_3:
# 23 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: You'll want to know whether I'd\n"
	.string "do it again. So do I, RANGER. So do I.$"

ParcelCoastOffice2F_Hollis_Text_4:
# 26 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: You drank the tea, that first\n"
	.string "day. I've thought about that more than\l"
	.string "I should.\p"
	.string "No tea today. There's nowhere left to\n"
	.string "put the kindness.$"

ParcelCoastOffice2F_Hollis_Text_5:
# 28 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: You never drank the tea. I've\n"
	.string "thought about that cup more than I\l"
	.string "should.\p"
	.string "No tea today. There's nowhere left to\n"
	.string "put the kindness.$"

ParcelCoastOffice2F_Hollis_Text_6:
# 34 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: The tea's still on, RANGER. The\n"
	.string "offer with it. Think about how you write\l"
	.string "it. That's all I ever ask.$"

ParcelCoastOffice2F_Hollis_Text_7:
# 38 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: RANGER. Sit. You've been\n"
	.string "thorough; the whole coast, I hear. Good.\l"
	.string "Thoroughness is rare. Two cups, I don't\l"
	.string "need to ask.$"

ParcelCoastOffice2F_Hollis_Text_8:
# 39 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: I'll be direct, since you've\n"
	.string "earned direct. Your survey will be read.\l"
	.string "By the Board, by the press, by the\l"
	.string "people who fund what recovery there is\l"
	.string "out there.\p"
	.string "And the model they trust, the one\n"
	.string "keeping this coast working at all, has\l"
	.string "one name on it.$"

ParcelCoastOffice2F_Hollis_Text_9:
# 40 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "{PLAYER}: …DR. HERON's.$"

ParcelCoastOffice2F_Hollis_Text_10:
# 41 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: I would hate for one\n"
	.string "unmeasured word from you to undo her\l"
	.string "life's work. For her to be remembered as\l"
	.string "the scientist whose model failed,\l"
	.string "instead of the one whose science is the\l"
	.string "only reason there's a fishery left to\l"
	.string "argue about.$"

ParcelCoastOffice2F_Hollis_Text_11:
# 42 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "HOLLIS: So think about how you write it.\n"
	.string "For her sake. That's the whole of what\l"
	.string "I'm asking.\p"
	.string "It's very good tea. Drink it while it's\n"
	.string "hot.$"

ParcelCoastOffice2F_Hollis_Text_12:
# 43 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "The cup is at your hand. Drink it?$"

ParcelCoastOffice2F_Hollis_Text_13:
# 45 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "You drink it. It is very good tea.\p"
	.string "She watches you drink it the way, you\n"
	.string "will understand later, she watched DR.\l"
	.string "HERON drink it for three years.$"

ParcelCoastOffice2F_Hollis_Text_14:
# 48 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "You leave the cup where it is.\p"
	.string "She notices. She says nothing. After a\n"
	.string "while she moves it an inch toward you,\l"
	.string "as if that were the whole of the\l"
	.string "argument.$"

ParcelCoastOffice2F_Secretary_Text_0:
# 58 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE still sees\n"
	.string "everyone. Fewer come. She remembers\l"
	.string "how each of them took their tea. She\l"
	.string "has started making it herself.$"

ParcelCoastOffice2F_Secretary_Text_1:
# 60 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE still sees\n"
	.string "everyone. Fewer come. She remembers\l"
	.string "how each of them took their tea, and\l"
	.string "that you didn't take yours.\p"
	.string "She has started making it herself. She\n"
	.string "still pours two.$"

ParcelCoastOffice2F_Secretary_Text_2:
# 66 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE remembers how\n"
	.string "everyone takes their tea. She\l"
	.string "remembered yours before you came up\l"
	.string "the stairs.\p"
	.string "She's had the coast survey on her desk\n"
	.string "since it was filed. She hasn't moved it.\l"
	.string "She moves everything.$"

ParcelCoastOffice2F_Secretary_Text_3:
# 70 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "SECRETARY: Ms. AUNE sees everyone.\n"
	.string "Fishers, mayors, RANGERS. She remembers\l"
	.string "how they take their tea. She remembers\l"
	.string "everything. It's why they sent her.$"

ParcelCoastOffice2F_Perrin_Text_0:
# 81 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: They gave me a desk. The one by\n"
	.string "the window. HOLLIS said I'd earned it.\p"
	.string "I read your filing. All of it. Twice. I\n"
	.string "typed the response. It's very good. It's\l"
	.string "the best thing I've ever written and it\l"
	.string "isn't true.$"

ParcelCoastOffice2F_Perrin_Text_1:
# 82 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: I'm not sorry. I'm not NOT sorry.\n"
	.string "Is that an answer?\p"
	.string "Go on. You've got a ferry. I've got a\n"
	.string "window.$"

ParcelCoastOffice2F_Perrin_Last_Text_0:
# 90 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: I'm staying. Someone should be\n"
	.string "in here who's read it. That's me, now.\p"
	.string "The window's good. You can see the\n"
	.string "ferry from it.$"

ParcelCoastOffice2F_Perrin_Last_Text_1:
# 94 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: WREN. They put the hearing on\n"
	.string "the office speaker. HOLLIS listened to\l"
	.string "all of it with her tea going cold.\p"
	.string "One more. Not for the ranking. For me.\n"
	.string "Please.$"

ParcelCoastOffice2F_Perrin_Last_Text_2:
# 96 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: Then later. I'll be at this desk.\n"
	.string "It's a good desk.$"

ParcelCoastOffice2F_Perrin_Last_Text_3:
# 100 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: …Okay. Okay. That one I'll keep.$"

ParcelCoastOffice2F_Perrin_Last_Text_4:
# 102 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "PERRIN: I'm staying. Someone should be\n"
	.string "in here who's read it. That's me, now.\p"
	.string "Go on. You've got a region. I've got a\n"
	.string "window.$"

ParcelCoastOffice2F_ReadModel_Text_0:
# 108 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "A model under glass: the harbour as the\n"
	.string "FOUNDATION plans it. Six berths, a cold\l"
	.string "store, a wind turbine where the union\l"
	.string "hall is.$"

ParcelCoastOffice2F_ReadDesk_Text_0:
# 113 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "A desk with nothing on it but a tea tray\n"
	.string "and your coast survey, squared to the\l"
	.string "edge. The tea is still warm.\p"
	.string "The survey has been read. The corners\n"
	.string "say so.$"

ParcelCoastOffice2F_ReadBoat_Text_0:
# 118 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "A model of a fishing boat, the old kind,\n"
	.string "high in the bow. The card: 'Traditional\l"
	.string "fleet, heritage display.'\p"
	.string "The real one is tied up at the quay,\n"
	.string "owned by a lender.$"

ParcelCoastOffice2F_GrantFile_Text_0:
# 126 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "The grant file, HERON, open on the\n"
	.string "cabinet. Three letters, one a year,\l"
	.string "signed H. Aune. And a fourth, unsigned,\l"
	.string "not sent.\p"
	.string "Year one. Dear Dr. H. Renewed, of course.\n"
	.string "The board asks only that the models be\l"
	.string "shared with the parent company's\l"
	.string "planners. I said you would not mind. Tea\l"
	.string "when I am next in the field.\p"
	.string "Year two. Dear Dr. H. Renewed. The board\n"
	.string "was glad of the models. They have asked\l"
	.string "about the older work, the Johto years,\l"
	.string "for completeness. I have told them it is\l"
	.string "of no interest. Please do not worry\l"
	.string "about it.\p"
	.string "Year three. Dr. Heron. The grant is\n"
	.string "renewed subject to the conditions\l"
	.string "enclosed. I would ask you to read them\l"
	.string "carefully. I am sorry about the tone. I\l"
	.string "did not write the conditions. I am\l"
	.string "sending them anyway.\p"
	.string "The fourth, this season, in a hand that\n"
	.string "has been pressing too hard. Dr. H. They\l"
	.string "have the same file on me. I have known\l"
	.string "for three years. I am going to say so at\l"
	.string "the sitting. I do not know if that is\l"
	.string "courage or only the end of the rope. I\l"
	.string "wanted you to hear it from me first.\p"
	.string "It was not sent. It did not need to be.$"

ParcelCoastOffice2F_GrantFile_Text_1:
# 128 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "The grant file, HERON, open on the\n"
	.string "cabinet. Three letters, one a year,\l"
	.string "signed H. Aune.\p"
	.string "Year one. Dear Dr. H. Renewed, of course.\n"
	.string "The board asks only that the models be\l"
	.string "shared with the parent company's\l"
	.string "planners. I said you would not mind. Tea\l"
	.string "when I am next in the field.\p"
	.string "Year two. Dear Dr. H. Renewed. The board\n"
	.string "was glad of the models. They have asked\l"
	.string "about the older work, the Johto years,\l"
	.string "for completeness. I have told them it is\l"
	.string "of no interest. Please do not worry\l"
	.string "about it.\p"
	.string "Year three. Dr. Heron. The grant is\n"
	.string "renewed subject to the conditions\l"
	.string "enclosed. I would ask you to read them\l"
	.string "carefully. I am sorry about the tone. I\l"
	.string "did not write the conditions. I am\l"
	.string "sending them anyway.\p"
	.string "Three letters. The first is warm. The\n"
	.string "third is a lever with a stamp on it. The\l"
	.string "hand is the same hand.$"

ParcelCoastOffice2F_Programme_Text_0:
# 133 "data/maps/ParcelCoastOffice2F/scripts.pory"
	.string "The programme ledger. Grants by\n"
	.string "recipient, this cycle.\p"
	.string "Skaldmere Climate Corps, two field\n"
	.string "stations: a large figure. Certification\l"
	.string "training: a large figure. Regional\l"
	.string "research: a figure with a note, released\l"
	.string "against delivery of the model.\p"
	.string "Wetland Resilience Programme, Dr.\n"
	.string "Heron: a figure, and beside it, in pencil,\l"
	.string "CONDITIONS.\p"
	.string "Delibird Isle Festival Committee:\n"
	.string "banners, blankets, a stage. A small\l"
	.string "figure. Someone has underlined it twice.\p"
	.string "Community Centre, Haukfell: a figure,\n"
	.string "and a date two weeks before the\l"
	.string "Permafrost licence was first tabled.\p"
	.string "At the foot, the total, and the line\n"
	.string "every ledger has: funds provided by\l"
	.string "Mereholt Resources Ltd. The Foundation\l"
	.string "does not have money. It has a parent.$"
