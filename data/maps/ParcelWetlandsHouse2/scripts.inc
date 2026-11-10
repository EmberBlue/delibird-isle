ParcelWetlandsHouse2_MapScripts::
	.byte 0


ParcelWetlandsHouse2_OldMan::
# 7 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 8 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHouse2_OldMan_4
ParcelWetlandsHouse2_OldMan_1:
# 14 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_NEST, ParcelWetlandsHouse2_OldMan_12
ParcelWetlandsHouse2_OldMan_11:
# 24 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_NEST_DONE, ParcelWetlandsHouse2_OldMan_10
# 30 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_REED, ParcelWetlandsHouse2_OldMan_17
ParcelWetlandsHouse2_OldMan_15:
# 44 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_OldMan_25
# 49 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_REED_DONE, ParcelWetlandsHouse2_OldMan_31
# 55 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse2_OldMan_34
# 60 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_11, MSGBOX_DEFAULT
# 61 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_2:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_3:
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_REED_DONE, ParcelWetlandsHouse2_OldMan_2
	goto ParcelWetlandsHouse2_OldMan_1

ParcelWetlandsHouse2_OldMan_4:
# 9 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_NEST_DONE, ParcelWetlandsHouse2_OldMan_3
	goto ParcelWetlandsHouse2_OldMan_1

ParcelWetlandsHouse2_OldMan_9:
# 15 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_NEST_FOUND, ParcelWetlandsHouse2_OldMan_21
# 20 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_2, MSGBOX_DEFAULT
ParcelWetlandsHouse2_OldMan_20:
# 22 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_10:
# 25 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	setflag FLAG_SKALD_Q_NEST
# 27 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_12:
# 14 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_NEST_DONE, ParcelWetlandsHouse2_OldMan_9
	goto ParcelWetlandsHouse2_OldMan_11

ParcelWetlandsHouse2_OldMan_16:
# 31 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALD_Q_REED_FOUND, ParcelWetlandsHouse2_OldMan_28
# 40 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_7, MSGBOX_DEFAULT
# 41 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_17:
# 30 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_REED_DONE, ParcelWetlandsHouse2_OldMan_16
	goto ParcelWetlandsHouse2_OldMan_15

ParcelWetlandsHouse2_OldMan_21:
# 16 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_1, MSGBOX_DEFAULT
# 17 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	giveitem ITEM_ELIXIR, 1
# 18 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	setflag FLAG_SKALD_Q_NEST_DONE
	goto ParcelWetlandsHouse2_OldMan_20

ParcelWetlandsHouse2_OldMan_25:
# 45 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_8, MSGBOX_DEFAULT
# 46 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_28:
# 32 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_4, MSGBOX_DEFAULT
# 33 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 35 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	setflag FLAG_SKALD_Q_REED_DONE
# 36 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_6, MSGBOX_DEFAULT
# 37 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_31:
# 50 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_9, MSGBOX_DEFAULT
# 51 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	setflag FLAG_SKALD_Q_REED
# 52 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_OldMan_34:
# 56 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_OldMan_Text_10, MSGBOX_DEFAULT
# 57 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_Boy::
# 66 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	lock
# 67 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	faceplayer
# 68 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWetlandsHouse2_Boy_2
# 73 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_Boy_5
# 78 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelWetlandsHouse2_Boy_8
# 83 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_3, MSGBOX_DEFAULT
# 84 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_2:
# 69 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_5:
# 74 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 75 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end

ParcelWetlandsHouse2_Boy_8:
# 79 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 80 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	release
	end


ParcelWetlandsHouse2_ReadDresser::
# 89 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse2_ReadDrawer::
# 94 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_ReadDrawer_Text_0, MSGBOX_SIGN
	end


ParcelWetlandsHouse2_PaperReedTally::
# 101 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWetlandsHouse2_PaperReedTally_2
# 104 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_PaperReedTally_Text_1, MSGBOX_SIGN
ParcelWetlandsHouse2_PaperReedTally_1:
	end

ParcelWetlandsHouse2_PaperReedTally_2:
# 102 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	msgbox ParcelWetlandsHouse2_PaperReedTally_Text_0, MSGBOX_SIGN
	goto ParcelWetlandsHouse2_PaperReedTally_1


ParcelWetlandsHouse2_OldMan_Text_0:
# 10 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Two herons on the north bed\n"
	.string "this spring. Two. A heron tells you the\l"
	.string "water's worth standing in.\p"
	.string "Two tell you it's worth staying for.$"

ParcelWetlandsHouse2_OldMan_Text_1:
# 16 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Sat. …Sat. Then there's\n"
	.string "something left in that water worth\l"
	.string "standing in all day for. A heron knows. A\l"
	.string "heron doesn't stand anywhere for the\l"
	.string "view.\p"
	.string "Here. For the walking out. I'd give you\n"
	.string "more for the walking back with that.$"

ParcelWetlandsHouse2_OldMan_Text_2:
# 20 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: The north bed, out past the\n"
	.string "landing. The nest. Sat or empty.$"

ParcelWetlandsHouse2_OldMan_Text_3:
# 25 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: There's a heron's nest in the\n"
	.string "north bed. There's been a heron's nest\l"
	.string "in the north bed since my father cut\l"
	.string "reeds, and I've not been able to walk\l"
	.string "out to it in three years.\p"
	.string "Go and look. Tell me if it's sat this\n"
	.string "year. I'd rather know than wonder.$"

ParcelWetlandsHouse2_OldMan_Text_4:
# 32 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Nineteen. There were forty in\n"
	.string "that bed when I was your age. Fifty-one\l"
	.string "when my father cut it.\p"
	.string "Nineteen goes to the river hall in your\n"
	.string "writing, not mine. Yours gets read.$"

ParcelWetlandsHouse2_OldMan_Text_5:
# 33 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Take this. Found it in the beds\n"
	.string "years back; the heron that owned it was\l"
	.string "quicker than me. It'll be quicker than\l"
	.string "whatever you're facing, too.$"

ParcelWetlandsHouse2_OldMan_Text_6:
# 36 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: Eight years to come back, and\n"
	.string "nineteen stands. Write both. One\l"
	.string "without the other is a lie by halves.$"

ParcelWetlandsHouse2_OldMan_Text_7:
# 40 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: West of the landing, the reed\n"
	.string "bed past the pond. Taller than you.\l"
	.string "Count them.$"

ParcelWetlandsHouse2_OldMan_Text_8:
# 45 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: GUNNAR's SURSKIT count went\n"
	.string "up this month. First time. He told\l"
	.string "everyone. He told me twice.$"

ParcelWetlandsHouse2_OldMan_Text_9:
# 50 "data/maps/ParcelWetlandsHouse2/scripts.pory"
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

ParcelWetlandsHouse2_OldMan_Text_10:
# 56 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: The reeds came back at eight\n"
	.string "years this time. Not twelve. I wrote\l"
	.string "eight down and sent it to the river hall,\l"
	.string "because somebody said they were\l"
	.string "collecting.\p"
	.string "Sixty years cutting reed and I've never\n"
	.string "sent a number anywhere. It felt like\l"
	.string "posting a letter to the weather.$"

ParcelWetlandsHouse2_OldMan_Text_11:
# 60 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "OLD MAN: I cut reed for thatch.\n"
	.string "Twelve-year rounds, like the mill wood.\l"
	.string "The reeds don't come back on the twelve\l"
	.string "now. Eight, maybe.$"

ParcelWetlandsHouse2_Boy_Text_0:
# 69 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: Fifty-three! The clicker's mine for\n"
	.string "good. GUNNAR says I'm the count now. I'm\l"
	.string "nine.\p"
	.string "He says the count doesn't care how old\n"
	.string "you are.$"

ParcelWetlandsHouse2_Boy_Text_1:
# 74 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: Forty-nine! I'm the clicker now.\n"
	.string "GUNNAR says I'm 'very accurate'.$"

ParcelWetlandsHouse2_Boy_Text_2:
# 79 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: GUNNAR says the river people\n"
	.string "counted their frogs in front of\l"
	.string "everybody. With a clicker, like ours!\p"
	.string "Forty-four. I'm going to count again\n"
	.string "when the water's colder. GUNNAR says\l"
	.string "colder is when it matters.$"

ParcelWetlandsHouse2_Boy_Text_3:
# 83 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "BOY: I helped GUNNAR count. He let me\n"
	.string "hold the clicker. Forty-four!$"

ParcelWetlandsHouse2_ReadDresser_Text_0:
# 89 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "A reed knife on the dresser, and a\n"
	.string "notebook: TWELVE. Then EIGHT, with a\l"
	.string "line under it, and a river hall address\l"
	.string "on the facing page.$"

ParcelWetlandsHouse2_ReadDrawer_Text_0:
# 94 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "GUNNAR's spare clicker, in the drawer,\n"
	.string "on a ribbon. Forty-four, it still says.\l"
	.string "Nobody has pressed it since.$"

ParcelWetlandsHouse2_PaperReedTally_Text_0:
# 102 "data/maps/ParcelWetlandsHouse2/scripts.pory"
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
# 104 "data/maps/ParcelWetlandsHouse2/scripts.pory"
	.string "The reed-cutting tally, chalked inside\n"
	.string "the door for three generations:\l"
	.string "bundles per bed per year. Fifty-one in\l"
	.string "the grandfather's hand. Forty in the\l"
	.string "father's. Nineteen in the old man's, this\l"
	.string "year, in a chalk that is nearly gone.\p"
	.string "The boy has drawn a heron at the\n"
	.string "bottom. The heron is bigger than the\l"
	.string "numbers.$"
