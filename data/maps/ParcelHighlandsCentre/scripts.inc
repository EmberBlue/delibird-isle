ParcelHighlandsCentre_MapScripts::
	.byte 0


ParcelHighlandsCentre_Host::
# 6 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 7 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Host_2
# 13 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlandsCentre_Host_5
# 18 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelHighlandsCentre/scripts.pory"
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


ParcelHighlandsCentre_OldMan::
# 23 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 24 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_OldMan_2
# 30 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_OldMan_5
# 35 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_OldMan_2:
# 26 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_OldMan_5:
# 31 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Woman::
# 40 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 41 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Woman_2
# 47 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_Woman_5
# 52 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Woman_2:
# 43 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Woman_5:
# 48 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Boy::
# 57 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 58 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 59 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Boy_2
# 64 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_Boy_5
# 69 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_2, MSGBOX_DEFAULT
# 70 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Boy_2:
# 60 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Boy_5:
# 65 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_1, MSGBOX_DEFAULT
# 66 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Man::
# 74 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 75 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 76 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Man_2
# 81 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsCentre_Man_5
# 86 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_2, MSGBOX_DEFAULT
# 87 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Man_2:
# 77 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_0, MSGBOX_DEFAULT
# 78 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Man_5:
# 82 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Board::
# 91 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Board_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsCentre_Dorsey::
# 97 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 98 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 99 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALD_DORSEY_HL, ParcelHighlandsCentre_Dorsey_2
# 104 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Dorsey_Text_1, MSGBOX_DEFAULT
# 105 "data/maps/ParcelHighlandsCentre/scripts.pory"
	setflag FLAG_SKALD_DORSEY_HL
# 106 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Dorsey_2:
# 100 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Dorsey_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Plaque::
# 113 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Plaque_Text_0, MSGBOX_SIGN
	return


ParcelHighlandsCentre_Box::
# 117 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Box_1
# 120 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Box_Text_1, MSGBOX_SIGN
	return

ParcelHighlandsCentre_Box_1:
# 118 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Box_Text_0, MSGBOX_SIGN
	return


ParcelHighlandsCentre_Host_Text_0:
# 9 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Your survey said SHIFTED. Ours\n"
	.string "said 'transitioning'. The grants were\l"
	.string "paid out of 'transitioning'. The hearing\l"
	.string "used your word. The grants are 'under\l"
	.string "review'. I've learnt a new word too.$"

ParcelHighlandsCentre_Host_Text_1:
# 14 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Your survey says SHIFTED. Ours\n"
	.string "says 'transitioning'. The grants are\l"
	.string "paid out of 'transitioning'. Think about\l"
	.string "that before you pick a word.$"

ParcelHighlandsCentre_Host_Text_2:
# 18 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Welcome to the Warming Centre.\n"
	.string "Beds through the back, soup at six, the\l"
	.string "relocation desk is me.\p"
	.string "Ms. AUNE opened us on Tuesday. She cut\n"
	.string "the ribbon herself and then she stayed\l"
	.string "to serve the soup. People don't forget\l"
	.string "that.$"

ParcelHighlandsCentre_OldMan_Text_0:
# 26 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: Came down when the well went.\n"
	.string "Warm here, soup's good. The leases are\l"
	.string "enjoined. I'd go back up if the well came\l"
	.string "back. Wells don't read hearings.$"

ParcelHighlandsCentre_OldMan_Text_1:
# 31 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: A fisherman from the coast\n"
	.string "came up to the centre. Lost his boat to\l"
	.string "the lending company. Said the soup\l"
	.string "here's better than the quay's.\p"
	.string "Same crest on his bowl as mine. We didn't\n"
	.string "talk about it. We ate.$"

ParcelHighlandsCentre_OldMan_Text_2:
# 35 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: Came down from the north slope\n"
	.string "in the spring when the well went. Warm\l"
	.string "here. Soup's good.\p"
	.string "I'd go back up tomorrow if the ground\n"
	.string "would have me. It won't.$"

ParcelHighlandsCentre_Woman_Text_0:
# 43 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real, the house in\n"
	.string "the valley is real, and now the house we\l"
	.string "left is 'subject to review'. I don't know\l"
	.string "whose it is. I know it's not ours. That\l"
	.string "hasn't changed.$"

ParcelHighlandsCentre_Woman_Text_1:
# 48 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The valley house came with a\n"
	.string "letter from the coast office saying the\l"
	.string "FOUNDATION 'values our resilience'.\p"
	.string "A woman on the coast told the ranger\n"
	.string "the fish are all one size. I read that in\l"
	.string "a paper. I'm all one size too, now.\l"
	.string "Resilient.$"

ParcelHighlandsCentre_Woman_Text_2:
# 52 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real. The money came.\n"
	.string "The house we got in the valley is real\l"
	.string "too. It's just not ours. Nothing in it\l"
	.string "remembers us.$"

ParcelHighlandsCentre_Boy_Text_0:
# 60 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: The stove's still always on! HOLLIS\n"
	.string "came and sat by it. She didn't say\l"
	.string "anything. She drank the cocoa. Mum\l"
	.string "watched her the whole time.$"

ParcelHighlandsCentre_Boy_Text_1:
# 65 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: A boy from the coast says their\n"
	.string "beach is closed and the lifeguard just\l"
	.string "sits there. Our stove's always on and\l"
	.string "their beach is always shut.\p"
	.string "He says it's the same man's fault. I said\n"
	.string "the same man can't be everywhere. He\l"
	.string "said you'd be surprised.$"

ParcelHighlandsCentre_Boy_Text_2:
# 69 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: There's a stove! It's always on! At\n"
	.string "home the stove was only on at night. I\l"
	.string "like it here. Mum doesn't.$"

ParcelHighlandsCentre_Man_Text_0:
# 77 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the form, get the grant. Don't\n"
	.string "sign, get soup. The old woman up the hill\l"
	.string "got soup for a year, and now she's got a\l"
	.string "page in a hearing. I signed. I've got a\l"
	.string "house. Hers is the page I'd rather have.$"

ParcelHighlandsCentre_Man_Text_1:
# 82 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Soup or grant. Now there's a third\n"
	.string "option: the coast office is hiring\l"
	.string "'community liaisons'. Sign the form, get\l"
	.string "a lanyard.\p"
	.string "The old woman up the hill got offered\n"
	.string "one. She asked if it came with soup.$"

ParcelHighlandsCentre_Man_Text_2:
# 86 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the relocation form, you get\n"
	.string "the grant. Don't sign, you get soup. The\l"
	.string "old woman up the hill gets soup\l"
	.string "delivered. Stubbornness has a menu.$"

ParcelHighlandsCentre_Board_Text_0:
# 91 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "RELOCATION NOTICE. Households on the\n"
	.string "north slope are eligible for the\l"
	.string "Haukfell Resilience Grant. Conditions:\l"
	.string "vacate by first snow; sign the\l"
	.string "geotechnical waiver; no claim against\l"
	.string "the Foundation's survey works.\p"
	.string "Thirty-one signatures. One line left\n"
	.string "blank, in a hand that pressed hard.$"

ParcelHighlandsCentre_Dorsey_Text_0:
# 100 "data/maps/ParcelHighlandsCentre/scripts.pory"
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
# 104 "data/maps/ParcelHighlandsCentre/scripts.pory"
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
# 113 "data/maps/ParcelHighlandsCentre/scripts.pory"
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
# 118 "data/maps/ParcelHighlandsCentre/scripts.pory"
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
# 120 "data/maps/ParcelHighlandsCentre/scripts.pory"
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
