ParcelHighlandsCentre_MapScripts::
	.byte 0


ParcelHighlandsCentre_Host::
# 6 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 7 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelHighlandsCentre/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlandsCentre_Host_2
# 13 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end

ParcelHighlandsCentre_Host_2:
# 9 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Host_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_OldMan::
# 18 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 19 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 20 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_OldMan_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Woman::
# 25 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 26 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Woman_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Boy::
# 32 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 33 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 34 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Boy_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Man::
# 39 "data/maps/ParcelHighlandsCentre/scripts.pory"
	lock
# 40 "data/maps/ParcelHighlandsCentre/scripts.pory"
	faceplayer
# 41 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Man_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/ParcelHighlandsCentre/scripts.pory"
	release
	end


ParcelHighlandsCentre_Board::
# 46 "data/maps/ParcelHighlandsCentre/scripts.pory"
	msgbox ParcelHighlandsCentre_Board_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsCentre_Host_Text_0:
# 9 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Your survey says SHIFTED. Ours\n"
	.string "says 'transitioning'. The grants are\l"
	.string "paid out of 'transitioning'. Think about\l"
	.string "that before you pick a word.$"

ParcelHighlandsCentre_Host_Text_1:
# 13 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "HOST: Welcome to the Warming Centre.\n"
	.string "Beds through the back, soup at six, the\l"
	.string "relocation desk is me.\p"
	.string "Ms. AUNE opened us on Tuesday. She cut\n"
	.string "the ribbon herself and then she stayed\l"
	.string "to serve the soup. People don't forget\l"
	.string "that.$"

ParcelHighlandsCentre_OldMan_Text_0:
# 20 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "OLD MAN: Came down from the north slope\n"
	.string "in the spring when the well went. Warm\l"
	.string "here. Soup's good.\p"
	.string "I'd go back up tomorrow if the ground\n"
	.string "would have me. It won't.$"

ParcelHighlandsCentre_Woman_Text_0:
# 27 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "WOMAN: The grant's real. The money came.\n"
	.string "The house we got in the valley is real\l"
	.string "too. It's just not ours. Nothing in it\l"
	.string "remembers us.$"

ParcelHighlandsCentre_Boy_Text_0:
# 34 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "BOY: There's a stove! It's always on! At\n"
	.string "home the stove was only on at night. I\l"
	.string "like it here. Mum doesn't.$"

ParcelHighlandsCentre_Man_Text_0:
# 41 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "MAN: Sign the relocation form, you get\n"
	.string "the grant. Don't sign, you get soup. The\l"
	.string "old woman up the hill gets soup\l"
	.string "delivered. Stubbornness has a menu.$"

ParcelHighlandsCentre_Board_Text_0:
# 46 "data/maps/ParcelHighlandsCentre/scripts.pory"
	.string "RELOCATION NOTICE. Households on the\n"
	.string "north slope are eligible for the\l"
	.string "Haukfell Resilience Grant. Conditions:\l"
	.string "vacate by first snow; sign the\l"
	.string "geotechnical waiver; no claim against\l"
	.string "the Foundation's survey works.\p"
	.string "Thirty-one signatures. One line left\n"
	.string "blank, in a hand that pressed hard.$"
