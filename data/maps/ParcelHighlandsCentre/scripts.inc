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
	msgbox ParcelHighlandsCentre_OldMan_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_OldMan_2:
# 26 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Woman::
# 35 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 36 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 37 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Woman_2
# 42 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Woman_2:
# 38 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Boy::
# 47 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 48 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 49 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Boy_2
# 54 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Boy_2:
# 50 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Man::
# 59 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 60 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 61 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsCentre_Man_2
# 66 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_1, MSGBOX_DEFAULT
# 67 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Man_2:
# 62 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_0, MSGBOX_DEFAULT
# 63 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Board::
# 71 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Board_Text_0, MSGBOX_SIGN
	end


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
# 30 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: Came down from the north slope\n"
	.string "in the spring when the well went. Warm\l"
	.string "here. Soup's good.\p"
	.string "I'd go back up tomorrow if the ground\n"
	.string "would have me. It won't.$"

ParcelHighlandsCentre_Woman_Text_0:
# 38 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real, the house in\n"
	.string "the valley is real, and now the house we\l"
	.string "left is 'subject to review'. I don't know\l"
	.string "whose it is. I know it's not ours. That\l"
	.string "hasn't changed.$"

ParcelHighlandsCentre_Woman_Text_1:
# 42 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real. The money came.\n"
	.string "The house we got in the valley is real\l"
	.string "too. It's just not ours. Nothing in it\l"
	.string "remembers us.$"

ParcelHighlandsCentre_Boy_Text_0:
# 50 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: The stove's still always on! HOLLIS\n"
	.string "came and sat by it. She didn't say\l"
	.string "anything. She drank the cocoa. Mum\l"
	.string "watched her the whole time.$"

ParcelHighlandsCentre_Boy_Text_1:
# 54 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: There's a stove! It's always on! At\n"
	.string "home the stove was only on at night. I\l"
	.string "like it here. Mum doesn't.$"

ParcelHighlandsCentre_Man_Text_0:
# 62 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the form, get the grant. Don't\n"
	.string "sign, get soup. The old woman up the hill\l"
	.string "got soup for a year, and now she's got a\l"
	.string "page in a hearing. I signed. I've got a\l"
	.string "house. Hers is the page I'd rather have.$"

ParcelHighlandsCentre_Man_Text_1:
# 66 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the relocation form, you get\n"
	.string "the grant. Don't sign, you get soup. The\l"
	.string "old woman up the hill gets soup\l"
	.string "delivered. Stubbornness has a menu.$"

ParcelHighlandsCentre_Board_Text_0:
# 71 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "RELOCATION NOTICE. Households on the\n"
	.string "north slope are eligible for the\l"
	.string "Haukfell Resilience Grant. Conditions:\l"
	.string "vacate by first snow; sign the\l"
	.string "geotechnical waiver; no claim against\l"
	.string "the Foundation's survey works.\p"
	.string "Thirty-one signatures. One line left\n"
	.string "blank, in a hand that pressed hard.$"
