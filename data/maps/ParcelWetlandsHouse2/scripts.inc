ParcelWetlandsHouse2_MapScripts::
	.byte 0


ParcelWetlandsHouse2_OldMan::
# 7 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 8 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_REED, ParcelWetlandsHouse2_OldMan_3
ParcelWetlandsHouse2_OldMan_1:
# 23 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_OldMan_7
# 28 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_REED_DONE, ParcelWetlandsHouse2_OldMan_13
# 34 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse2_OldMan_16
# 39 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_7, MSGBOX_DEFAULT
# 40 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_2:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_REED_FOUND, ParcelWetlandsHouse2_OldMan_10
# 19 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_3, MSGBOX_DEFAULT
# 20 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_3:
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_REED_DONE, ParcelWetlandsHouse2_OldMan_2
	goto ParcelWetlandsHouse2_OldMan_1

ParcelWetlandsHouse2_OldMan_7:
# 24 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_4, MSGBOX_DEFAULT
# 25 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_10:
# 11 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 14 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	setflag FLAG_SKALD_Q_REED_DONE
# 15 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_2, MSGBOX_DEFAULT
# 16 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_13:
# 29 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_5, MSGBOX_DEFAULT
# 30 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	setflag FLAG_SKALD_Q_REED
# 31 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_16:
# 35 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_6, MSGBOX_DEFAULT
# 36 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_Boy::
# 45 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 46 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 47 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_Boy_2
# 52 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse2_Boy_5
# 57 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 58 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_2:
# 48 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_5:
# 53 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_ReadDresser::
# 63 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse2_ReadDrawer::
# 68 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse2_PaperReedTally::
# 75 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_PaperReedTally_2
# 78 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_PaperReedTally_Text_1, MSGBOX_SIGN
ParcelWetlandsHouse2_PaperReedTally_1:
	end

ParcelWetlandsHouse2_PaperReedTally_2:
# 76 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_PaperReedTally_Text_0, MSGBOX_SIGN
	goto ParcelWetlandsHouse2_PaperReedTally_1


ParcelWetlandsHouse2_OldMan_Text_0:
# 11 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Nineteen. There were forty in\n"
	.string "that bed when I was your age. Fifty-one\l"
	.string "when my father cut it.\p"
	.string "Nineteen goes to the river hall in your\n"
	.string "writing, not mine. Yours gets read.$"

ParcelWetlandsHouse2_OldMan_Text_1:
# 12 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Take this. Found it in the beds\n"
	.string "years back; the heron that owned it was\l"
	.string "quicker than me. It'll be quicker than\l"
	.string "whatever you're facing, too.$"

ParcelWetlandsHouse2_OldMan_Text_2:
# 15 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Eight years to come back, and\n"
	.string "nineteen stands. Write both. One\l"
	.string "without the other is a lie by halves.$"

ParcelWetlandsHouse2_OldMan_Text_3:
# 19 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: West of the landing, the reed\n"
	.string "bed past the pond. Taller than you.\l"
	.string "Count them.$"

ParcelWetlandsHouse2_OldMan_Text_4:
# 24 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: GUNNAR's SURSKIT count went\n"
	.string "up this month. First time. He told\l"
	.string "everyone. He told me twice.$"

ParcelWetlandsHouse2_OldMan_Text_5:
# 29 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Twelve-year rounds, I told\n"
	.string "you. Eight, now. I've said eight to the\l"
	.string "river hall and the river hall wants it\l"
	.string "counted, not said.\p"
	.string "My knees won't do the beds any more. Go\n"
	.string "and count the stands still standing in\l"
	.string "the bed west of the landing, past the\l"
	.string "pond. Count the ones taller than you.\l"
	.string "That's the rule. Taller than a person is\l"
	.string "a stand.$"

ParcelWetlandsHouse2_OldMan_Text_6:
# 35 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: The reeds came back at eight\n"
	.string "years this time. Not twelve. I wrote\l"
	.string "eight down and sent it to the river hall,\l"
	.string "because somebody said they were\l"
	.string "collecting.\p"
	.string "Sixty years cutting reed and I've never\n"
	.string "sent a number anywhere. It felt like\l"
	.string "posting a letter to the weather.$"

ParcelWetlandsHouse2_OldMan_Text_7:
# 39 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: I cut reed for thatch.\n"
	.string "Twelve-year rounds, like the mill wood.\l"
	.string "The reeds don't come back on the twelve\l"
	.string "now. Eight, maybe.$"

ParcelWetlandsHouse2_Boy_Text_0:
# 48 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: Forty-nine! I'm the clicker now.\n"
	.string "GUNNAR says I'm 'very accurate'.$"

ParcelWetlandsHouse2_Boy_Text_1:
# 53 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: GUNNAR says the river people\n"
	.string "counted their frogs in front of\l"
	.string "everybody. With a clicker, like ours!\p"
	.string "Forty-four. I'm going to count again\n"
	.string "when the water's colder. GUNNAR says\l"
	.string "colder is when it matters.$"

ParcelWetlandsHouse2_Boy_Text_2:
# 57 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: I helped GUNNAR count. He let me\n"
	.string "hold the clicker. Forty-four!$"

ParcelWetlandsHouse2_ReadDresser_Text_0:
# 63 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "A reed knife on the dresser, and a\n"
	.string "notebook: TWELVE. Then EIGHT, with a\l"
	.string "line under it, and a river hall address\l"
	.string "on the facing page.$"

ParcelWetlandsHouse2_ReadDrawer_Text_0:
# 68 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "GUNNAR's spare clicker, in the drawer,\n"
	.string "on a ribbon. Forty-four, it still says.\l"
	.string "Nobody has pressed it since.$"

ParcelWetlandsHouse2_PaperReedTally_Text_0:
# 76 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "The reed-cutting tally, chalked inside\n"
	.string "the door. Under this year's nineteen\l"
	.string "the boy has chalked his first count,\l"
	.string "twenty-three, and his initials, and the\l"
	.string "date.\p"
	.string "The old man says twenty-three is not a\n"
	.string "trend. He says it the way a man does who\l"
	.string "has waited forty years to say it about\l"
	.string "an upward number.$"

ParcelWetlandsHouse2_PaperReedTally_Text_1:
# 78 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "The reed-cutting tally, chalked inside\n"
	.string "the door for three generations:\l"
	.string "bundles per bed per year. Fifty-one in\l"
	.string "the grandfather's hand. Forty in the\l"
	.string "father's. Nineteen in the old man's, this\l"
	.string "year, in a chalk that is nearly gone.\p"
	.string "The boy has drawn a heron at the\n"
	.string "bottom. The heron is bigger than the\l"
	.string "numbers.$"
