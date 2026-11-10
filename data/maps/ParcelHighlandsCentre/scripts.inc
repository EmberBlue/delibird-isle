ParcelHighlandsCentre_MapScripts::
	.byte 0


ParcelHighlandsCentre_Host::
# 6 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 7 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsCentre_Host_2
# 13 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Host_5
# 18 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlandsCentre_Host_8
# 23 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Host_2:
# 9 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Host_5:
# 14 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Host_8:
# 19 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_OldMan::
# 28 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 29 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 30 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsCentre_OldMan_2
# 35 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_OldMan_5
# 40 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_OldMan_8
# 45 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_OldMan_2:
# 31 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_OldMan_5:
# 36 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_OldMan_8:
# 41 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Woman::
# 50 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 51 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 52 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsCentre_Woman_2
# 57 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Woman_5
# 62 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_Woman_8
# 67 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_3, MSGBOX_DEFAULT
# 68 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Woman_2:
# 53 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Woman_5:
# 58 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Woman_8:
# 63 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_2, MSGBOX_DEFAULT
# 64 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Boy::
# 72 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 73 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 74 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsCentre_Boy_2
# 79 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Boy_5
# 84 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_Boy_8
# 89 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_3, MSGBOX_DEFAULT
# 90 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Boy_2:
# 75 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Boy_5:
# 80 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Boy_8:
# 85 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_2, MSGBOX_DEFAULT
# 86 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Man::
# 94 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 95 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 96 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsCentre_Man_2
# 101 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Man_5
# 106 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_Man_8
# 111 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_3, MSGBOX_DEFAULT
# 112 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Man_2:
# 97 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Man_5:
# 102 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Man_8:
# 107 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_2, MSGBOX_DEFAULT
# 108 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Board::
# 116 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Board_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsCentre_Dorsey::
# 122 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 123 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 124 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALD_DORSEY_HL, ParcelHighlandsCentre_Dorsey_2
# 129 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Dorsey_Text_1, MSGBOX_DEFAULT
# 130 "data/maps/ParcelHighlandsCentre/scripts.pory"
	setflag FLAG_SKALD_DORSEY_HL
# 131 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Dorsey_2:
# 125 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Dorsey_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Plaque::
# 138 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Plaque_Text_0, MSGBOX_SIGN
	return


ParcelHighlandsCentre_Box::
# 142 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Box_1
# 145 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Box_Text_1, MSGBOX_SIGN
	return

ParcelHighlandsCentre_Box_1:
# 143 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Box_Text_0, MSGBOX_SIGN
	return


ParcelHighlandsCentre_Host_Text_0:
# 9 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: The centre's funded by the review\n"
	.string "now. Same stove, different crest.\l"
	.string "SHIFTED is on the grant form, in print.\p"
	.string "I had to read it twice to believe\n"
	.string "someone had typed it.$"

ParcelHighlandsCentre_Host_Text_1:
# 14 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Your survey said SHIFTED. Ours\n"
	.string "said 'transitioning'. The grants were\l"
	.string "paid out of 'transitioning'. The hearing\l"
	.string "used your word. The grants are 'under\l"
	.string "review'. I've learnt a new word too.$"

ParcelHighlandsCentre_Host_Text_2:
# 19 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Your survey says SHIFTED. Ours\n"
	.string "says 'transitioning'. The grants are\l"
	.string "paid out of 'transitioning'. Think about\l"
	.string "that before you pick a word.$"

ParcelHighlandsCentre_Host_Text_3:
# 23 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Welcome to the Warming Centre.\n"
	.string "Beds through the back, soup at six, the\l"
	.string "relocation desk is me.\p"
	.string "Ms. AUNE opened us on Tuesday. She cut\n"
	.string "the ribbon herself and then she stayed\l"
	.string "to serve the soup. People don't forget\l"
	.string "that.$"

ParcelHighlandsCentre_OldMan_Text_0:
# 31 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: The well's not back. I'm not\n"
	.string "going back up. The soup's still good and\l"
	.string "I've a bunk and a window.\p"
	.string "Some things you stop waiting for, and it\n"
	.string "turns out that's a kind of rest.$"

ParcelHighlandsCentre_OldMan_Text_1:
# 36 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: Came down when the well went.\n"
	.string "Warm here, soup's good. The leases are\l"
	.string "enjoined. I'd go back up if the well came\l"
	.string "back. Wells don't read hearings.$"

ParcelHighlandsCentre_OldMan_Text_2:
# 41 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: A fisherman from the coast\n"
	.string "came up to the centre. Lost his boat to\l"
	.string "the lending company. Said the soup\l"
	.string "here's better than the quay's.\p"
	.string "Same crest on his bowl as mine. We didn't\n"
	.string "talk about it. We ate.$"

ParcelHighlandsCentre_OldMan_Text_3:
# 45 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: Came down from the north slope\n"
	.string "in the spring when the well went. Warm\l"
	.string "here. Soup's good.\p"
	.string "I'd go back up tomorrow if the ground\n"
	.string "would have me. It won't.$"

ParcelHighlandsCentre_Woman_Text_0:
# 53 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The house we left is 'under\n"
	.string "review'. The house we're in is warm. I've\l"
	.string "stopped asking which is ours. Both.\l"
	.string "Neither.\p"
	.string "The children call this one home. That\n"
	.string "decides it.$"

ParcelHighlandsCentre_Woman_Text_1:
# 58 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real, the house in\n"
	.string "the valley is real, and now the house we\l"
	.string "left is 'subject to review'. I don't know\l"
	.string "whose it is. I know it's not ours. That\l"
	.string "hasn't changed.$"

ParcelHighlandsCentre_Woman_Text_2:
# 63 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The valley house came with a\n"
	.string "letter from the coast office saying the\l"
	.string "FOUNDATION 'values our resilience'.\p"
	.string "A woman on the coast told the ranger\n"
	.string "the fish are all one size. I read that in\l"
	.string "a paper. I'm all one size too, now.\l"
	.string "Resilient.$"

ParcelHighlandsCentre_Woman_Text_3:
# 67 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real. The money came.\n"
	.string "The house we got in the valley is real\l"
	.string "too. It's just not ours. Nothing in it\l"
	.string "remembers us.$"

ParcelHighlandsCentre_Boy_Text_0:
# 75 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: HOLLIS came back. She brought\n"
	.string "cocoa. The good kind. She sat by the\l"
	.string "stove and Mum sat next to her and they\l"
	.string "didn't say anything for a long time.\p"
	.string "Then they both laughed. I don't know at\n"
	.string "what.$"

ParcelHighlandsCentre_Boy_Text_1:
# 80 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: The stove's still always on! HOLLIS\n"
	.string "came and sat by it. She didn't say\l"
	.string "anything. She drank the cocoa. Mum\l"
	.string "watched her the whole time.$"

ParcelHighlandsCentre_Boy_Text_2:
# 85 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: A boy from the coast says their\n"
	.string "beach is closed and the lifeguard just\l"
	.string "sits there. Our stove's always on and\l"
	.string "their beach is always shut.\p"
	.string "He says it's the same man's fault. I said\n"
	.string "the same man can't be everywhere. He\l"
	.string "said you'd be surprised.$"

ParcelHighlandsCentre_Boy_Text_3:
# 89 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: There's a stove! It's always on! At\n"
	.string "home the stove was only on at night. I\l"
	.string "like it here. Mum doesn't.$"

ParcelHighlandsCentre_Man_Text_0:
# 97 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Took the lanyard. Community\n"
	.string "liaison. I liaise. Mostly I tell the coast\l"
	.string "office what the soup line's saying, and\l"
	.string "they write it down.\p"
	.string "It's a job. It's not nothing.$"

ParcelHighlandsCentre_Man_Text_1:
# 102 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the form, get the grant. Don't\n"
	.string "sign, get soup. The old woman up the hill\l"
	.string "got soup for a year, and now she's got a\l"
	.string "page in a hearing. I signed. I've got a\l"
	.string "house. Hers is the page I'd rather have.$"

ParcelHighlandsCentre_Man_Text_2:
# 107 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Soup or grant. Now there's a third\n"
	.string "option: the coast office is hiring\l"
	.string "'community liaisons'. Sign the form, get\l"
	.string "a lanyard.\p"
	.string "The old woman up the hill got offered\n"
	.string "one. She asked if it came with soup.$"

ParcelHighlandsCentre_Man_Text_3:
# 111 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the relocation form, you get\n"
	.string "the grant. Don't sign, you get soup. The\l"
	.string "old woman up the hill gets soup\l"
	.string "delivered. Stubbornness has a menu.$"

ParcelHighlandsCentre_Board_Text_0:
# 116 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "RELOCATION NOTICE. Households on the\n"
	.string "north slope are eligible for the\l"
	.string "Haukfell Resilience Grant. Conditions:\l"
	.string "vacate by first snow; sign the\l"
	.string "geotechnical waiver; no claim against\l"
	.string "the Foundation's survey works.\p"
	.string "Thirty-one signatures. One line left\n"
	.string "blank, in a hand that pressed hard.$"

ParcelHighlandsCentre_Dorsey_Text_0:
# 125 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "DORSEY: Sit. Nobody's listening; they're\n"
	.string "at the soup.\p"
	.string "The old woman up the track won't sign.\n"
	.string "My mother wouldn't either. We carried\l"
	.string "her out in the end, my brother and I,\l"
	.string "with the roof already going.\p"
	.string "I'm quicker about it now. Quicker isn't\n"
	.string "kinder. I know the difference, RANGER.\l"
	.string "I've just stopped being able to afford\l"
	.string "it.$"

ParcelHighlandsCentre_Dorsey_Text_1:
# 129 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "DORSEY: --and the grant is yours the\n"
	.string "day you sign. The valley houses are\l"
	.string "warm, the school's a bus ride, and\l"
	.string "nobody winters on a slope that's\l"
	.string "moving.\p"
	.string "RANGER. You've come up as well. Good.\n"
	.string "Witness this one too: the FOUNDATION\l"
	.string "moving people before the mountain\l"
	.string "does.\p"
	.string "Write that word. 'Before.' It's the only\n"
	.string "one that matters up here.$"

ParcelHighlandsCentre_Plaque_Text_0:
# 138 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "The opening plaque, brass, polished by\n"
	.string "somebody who takes it as their job.\p"
	.string "HAUKFELL COMMUNITY CENTRE. Built with\n"
	.string "the support of the Mereholt Foundation\l"
	.string "for the people of the Highlands. Opened\l"
	.string "by Commissioner Dorsey.\p"
	.string "The date is two weeks before the\n"
	.string "Permafrost licence was first put\l"
	.string "before the Council. The centre has a\l"
	.string "hall, a kitchen, a room for the elderly in\l"
	.string "the cold months, and a notice board.\p"
	.string "It is a good building. People use it.\n"
	.string "That was the point, and also the other\l"
	.string "point.$"

ParcelHighlandsCentre_Box_Text_0:
# 143 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "The suggestion box, with its lid off and\n"
	.string "the slips pinned up beside it where\l"
	.string "everyone can read them. Someone\l"
	.string "decided that after the sitting.\p"
	.string "More chairs for the cold-months room.\n"
	.string "Fix the kitchen tap. Thank you for the\l"
	.string "centre.\p"
	.string "Ask the drill people what the gas column\n"
	.string "on their log means. Ask them in here,\l"
	.string "where we can hear.\p"
	.string "The slide took the top field. The Board\n"
	.string "says it is weather. The old man says it\l"
	.string "is the ground going soft under the\l"
	.string "drill. Who do we ask.\p"
	.string "The newest slip, in a child's capitals:\n"
	.string "THE RANGER READ THE STAKES OUT LOUD\l"
	.string "AND MUM CRIED.$"

ParcelHighlandsCentre_Box_Text_1:
# 145 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "A suggestion box, locked, with a slot. A\n"
	.string "few slips show through the slot where\l"
	.string "the box is full.\p"
	.string "More chairs for the cold-months room.\n"
	.string "Fix the kitchen tap. Thank you for the\l"
	.string "centre.\p"
	.string "One slip is folded so the writing shows:\n"
	.string "ask the drill people what the gas column\l"
	.string "on their log means.\p"
	.string "The box is emptied by the host once a\n"
	.string "month. Nobody knows where the slips go\l"
	.string "after that.$"
