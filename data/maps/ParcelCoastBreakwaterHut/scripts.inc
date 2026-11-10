ParcelCoastBreakwaterHut_MapScripts::
	.byte 0


ParcelCoastBreakwaterHut_Lifeguard::
# 7 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	lock
# 8 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastBreakwaterHut_Lifeguard_2
# 14 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwaterHut_Lifeguard_5
# 19 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwaterHut_Lifeguard_8
# 24 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Lifeguard_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Lifeguard_2:
# 10 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Lifeguard_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Lifeguard_5:
# 15 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Lifeguard_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Lifeguard_8:
# 20 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Lifeguard_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end


ParcelCoastBreakwaterHut_Woman::
# 30 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	lock
# 31 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastBreakwaterHut_Woman_2
# 37 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwaterHut_Woman_5
# 42 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwaterHut_Woman_8
# 47 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Woman_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Woman_2:
# 33 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Woman_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Woman_5:
# 38 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Woman_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Woman_8:
# 43 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Woman_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end


ParcelCoastBreakwaterHut_Tuber::
# 53 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	lock
# 54 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	faceplayer
# 55 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCoastBreakwaterHut_Tuber_2
# 60 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwaterHut_Tuber_5
# 65 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastBreakwaterHut_Tuber_8
# 70 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Tuber_Text_3, MSGBOX_DEFAULT
# 71 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Tuber_2:
# 56 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Tuber_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Tuber_5:
# 61 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Tuber_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Tuber_8:
# 66 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Tuber_Text_2, MSGBOX_DEFAULT
# 67 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end


ParcelCoastBreakwaterHut_ReadCounter::
# 76 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_ReadCounter_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwaterHut_ReadRings::
# 81 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_ReadRings_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwaterHut_ReadBench::
# 86 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_ReadBench_Text_0, MSGBOX_SIGN
	end


ParcelCoastBreakwaterHut_Lifeguard_Text_0:
# 10 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "LIFEGUARD: Open, breakwater side, by\n"
	.string "the readings. Closed the far side, by\l"
	.string "the readings. Same sign, two arrows.\p"
	.string "It's the truest sign on this coast, and\n"
	.string "I painted it.$"

ParcelCoastBreakwaterHut_Lifeguard_Text_1:
# 15 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "LIFEGUARD: Closed 'pending review'. The\n"
	.string "review's running, so the sign stays, and\l"
	.string "so do I. It's good work, saying a true\l"
	.string "thing forty times a day.$"

ParcelCoastBreakwaterHut_Lifeguard_Text_2:
# 20 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "LIFEGUARD: Beach is closed to bathing.\n"
	.string "You're the first one today who already\l"
	.string "knew why.\p"
	.string "The coast office sent a new sign. Same\n"
	.string "words, bigger letters. I'm paid to sit by\l"
	.string "the bigger letters now.$"

ParcelCoastBreakwaterHut_Lifeguard_Text_3:
# 24 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "LIFEGUARD: Beach is closed to bathing.\n"
	.string "I'm paid to sit here and say so. I say so\l"
	.string "about forty times a day. You're\l"
	.string "forty-one.$"

ParcelCoastBreakwaterHut_Woman_Text_0:
# 33 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "WOMAN: Twenty-one summers of ices. The\n"
	.string "mums read the readings every morning\l"
	.string "before they buy.\p"
	.string "I put the readings up myself now.\n"
	.string "Beside the prices.$"

ParcelCoastBreakwaterHut_Woman_Text_1:
# 38 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "WOMAN: The TUBERS came back when the\n"
	.string "review posted the readings. Mums read\l"
	.string "the readings. Mums are the whole\l"
	.string "economy of a beach.$"

ParcelCoastBreakwaterHut_Woman_Text_2:
# 43 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "WOMAN: Twenty summers of ices, and this\n"
	.string "is the first week a stranger's asked me\l"
	.string "what the beach was like before.\p"
	.string "I told him. He wrote it down. Not you --\n"
	.string "a man with a crest. I don't know what\l"
	.string "he's going to do with my twenty summers.$"

ParcelCoastBreakwaterHut_Woman_Text_3:
# 47 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "WOMAN: I sold ices here for twenty\n"
	.string "summers. Now I sell them to the\l"
	.string "lifeguard. He's my only customer and\l"
	.string "he's on a diet.$"

ParcelCoastBreakwaterHut_Tuber_Text_0:
# 56 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "TUBER: I swam to the first post and\n"
	.string "back. Properly. The lifeguard clapped.\p"
	.string "Mum didn't watch. She read the readings,\n"
	.string "and then she watched.$"

ParcelCoastBreakwaterHut_Tuber_Text_1:
# 61 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "TUBER: The readings say it's fine on the\n"
	.string "breakwater side! Mum read them. I'm\l"
	.string "swimming. Properly. Watch.$"

ParcelCoastBreakwaterHut_Tuber_Text_2:
# 66 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "TUBER: I'm standing in the water. Still\n"
	.string "not swimming. A ranger wrote down that\l"
	.string "the water's sick and the lifeguard says\l"
	.string "that's why.\p"
	.string "I asked if standing counts. He said\n"
	.string "standing's fine. Standing's always fine.\l"
	.string "That's the problem, he said.$"

ParcelCoastBreakwaterHut_Tuber_Text_3:
# 70 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "TUBER: I'm not swimming. I'm standing in\n"
	.string "the water. That's different. The sign\l"
	.string "says BATHING.$"

ParcelCoastBreakwaterHut_ReadCounter_Text_0:
# 76 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "The ices counter. Twenty flavours on\n"
	.string "the board, three in the freezer. The\l"
	.string "lifeguard's diet is written on a card\l"
	.string "and pinned where he can see it from his\l"
	.string "chair.$"

ParcelCoastBreakwaterHut_ReadRings_Text_0:
# 81 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "A rack of life rings with the\n"
	.string "FOUNDATION crest. New. The old ones,\l"
	.string "cork and canvas, are in a heap behind,\l"
	.string "still good.$"

ParcelCoastBreakwaterHut_ReadBench_Text_0:
# 86 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "A bench facing the sea. Initials cut\n"
	.string "into it, and dates, twenty summers deep.\l"
	.string "The last date is six years old.$"
