ParcelLab_MapScripts::
# 10 "data/maps/ParcelLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/ParcelLab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelLab_FirstEntry
	.2byte 0


ParcelLab_FirstEntry::
# 16 "data/maps/ParcelLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_LAB_SEEN, ParcelLab_FirstEntry_2
# 20 "data/maps/ParcelLab/scripts.pory"
	lockall
# 21 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_FirstEntry_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_FirstEntry_Text_1, MSGBOX_DEFAULT
# 23 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_FirstEntry_Text_2, MSGBOX_DEFAULT
# 24 "data/maps/ParcelLab/scripts.pory"
	setflag FLAG_SKALDMERE_LAB_SEEN
# 25 "data/maps/ParcelLab/scripts.pory"
	releaseall
	end

ParcelLab_FirstEntry_2:
	end


ParcelLab_Official::
# 31 "data/maps/ParcelLab/scripts.pory"
	lock
# 32 "data/maps/ParcelLab/scripts.pory"
	faceplayer
# 33 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelLab_Official_2
# 38 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Official_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Official_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/ParcelLab/scripts.pory"
	release
	end

ParcelLab_Official_2:
# 34 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Official_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelLab/scripts.pory"
	release
	end


ParcelLab_Resident::
# 45 "data/maps/ParcelLab/scripts.pory"
	lock
# 46 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelLab_Resident_2
# 51 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Resident_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/ParcelLab/scripts.pory"
	release
	end

ParcelLab_Resident_2:
# 47 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Resident_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelLab/scripts.pory"
	release
	end


ParcelLab_Shelves::
# 58 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelLab_Shelves_2
# 62 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Shelves_Text_1, MSGBOX_SIGN
	end

ParcelLab_Shelves_2:
# 59 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Shelves_Text_0, MSGBOX_SIGN
	end


ParcelLab_Desk::
# 66 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelLab_Desk_2
# 70 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Desk_Text_1, MSGBOX_SIGN
	end

ParcelLab_Desk_2:
# 67 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_Desk_Text_0, MSGBOX_SIGN
	end


ParcelLab_SampleRack::
# 74 "data/maps/ParcelLab/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelLab_SampleRack_2
# 78 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_SampleRack_Text_1, MSGBOX_SIGN
	end

ParcelLab_SampleRack_2:
# 75 "data/maps/ParcelLab/scripts.pory"
	msgbox ParcelLab_SampleRack_Text_0, MSGBOX_SIGN
	end


ParcelLab_FirstEntry_Text_0:
# 21 "data/maps/ParcelLab/scripts.pory"
	.string "The door was damaged--but not blown\n"
	.string "open.\p"
	.string "Inside: shelves emptied. Drives\n"
	.string "removed. Sample jars gone.\n"
	.string "A desk lamp on its side.$"

ParcelLab_FirstEntry_Text_1:
# 22 "data/maps/ParcelLab/scripts.pory"
	.string "Whoever did this took what mattered,\n"
	.string "carefully--\p"
	.string "then staged the mess.$"

ParcelLab_FirstEntry_Text_2:
# 23 "data/maps/ParcelLab/scripts.pory"
	.string "Not a burglary.\n"
	.string "An erasure.$"

ParcelLab_Official_Text_0:
# 34 "data/maps/ParcelLab/scripts.pory"
	.string "Official: The file's been reopened. Not\n"
	.string "by me. By the review, who wanted to know\l"
	.string "why a burglary had a company van in the\l"
	.string "harbour log.\p"
	.string "I wrote vandalism because vandalism is\n"
	.string "what you write. I've written something\l"
	.string "else now. It took one word and nine\l"
	.string "years.$"

ParcelLab_Official_Text_1:
# 38 "data/maps/ParcelLab/scripts.pory"
	.string "Official: No signs of forced entry\n"
	.string "beyond the latch. Could be vandalism.\p"
	.string "We've filed it.\n"
	.string "Not much else we can do.$"

ParcelLab_Official_Text_2:
# 39 "data/maps/ParcelLab/scripts.pory"
	.string "He says it the way a man reads a bus\n"
	.string "schedule.\p"
	.string "He has said it before.$"

ParcelLab_Resident_Text_0:
# 47 "data/maps/ParcelLab/scripts.pory"
	.string "She meets your eyes this time.\p"
	.string "RESIDENT: It was the company's van. I\n"
	.string "saw the crest from my window and I said\l"
	.string "nothing for a year, because the town is\l"
	.string "small and words carry over water.\p"
	.string "Then a ranger put it in a record, and I\n"
	.string "didn't have to carry it any more. That's\l"
	.string "what a record is for, isn't it. So the\l"
	.string "rest of us can put it down.$"

ParcelLab_Resident_Text_1:
# 51 "data/maps/ParcelLab/scripts.pory"
	.string "She doesn't meet your eyes.\p"
	.string "As you pass, barely a breath:\n"
	.string "Don't make noise about it.$"

ParcelLab_Shelves_Text_0:
# 59 "data/maps/ParcelLab/scripts.pory"
	.string "The shelves are full again, with boxes.\n"
	.string "RED CLOTH, by zone, in the Surveyor's\l"
	.string "hand: REEDMERE, HOLLOWBEND, LEIRVIK,\l"
	.string "ELVSUND, HAUKFELL, THE QUAY, THE MARSH.\l"
	.string "Thirty-one years in cardboard.\p"
	.string "The bookends are the same bookends.\n"
	.string "Nobody moved them. They have held two\l"
	.string "different histories now and look\l"
	.string "exactly the same.$"

ParcelLab_Shelves_Text_1:
# 62 "data/maps/ParcelLab/scripts.pory"
	.string "The shelves are empty--but not swept.\n"
	.string "Every binder gone; the bookends still\l"
	.string "standing.\p"
	.string "Someone took these one at a time.$"

ParcelLab_Desk_Text_0:
# 67 "data/maps/ParcelLab/scripts.pory"
	.string "The desk has a new blotter and the same\n"
	.string "lamp, standing. The drive bay is still\l"
	.string "empty; the Survey keeps its records on\l"
	.string "paper, on purpose, and the clerk says so\l"
	.string "to anyone who asks.\p"
	.string "In the top drawer, under the pens, the\n"
	.string "coiled cable. Someone kept it. Evidence\l"
	.string "of care is still evidence.$"

ParcelLab_Desk_Text_1:
# 70 "data/maps/ParcelLab/scripts.pory"
	.string "The desk drawers hang open, contents\n"
	.string "intact: pens, tape, a tin of nails.\p"
	.string "Only the drive bay beneath is empty, its\n"
	.string "cable coiled neatly on the blotter.\p"
	.string "Vandals don't coil cables.$"

ParcelLab_SampleRack_Text_0:
# 75 "data/maps/ParcelLab/scripts.pory"
	.string "The sample rack holds jars again. Not\n"
	.string "hers: marsh water from the Corps\l"
	.string "monitor at Reedmere, one a week, dated,\l"
	.string "the colour going from brown to grey\l"
	.string "along the row.\p"
	.string "The last jar is nearly clear. It is\n"
	.string "labelled, in a clerk's hand: not clean.\l"
	.string "Honest.$"

ParcelLab_SampleRack_Text_1:
# 78 "data/maps/ParcelLab/scripts.pory"
	.string "A sample rack, every slot bare. No\n"
	.string "broken glass anywhere.\p"
	.string "On the floor, one paper label,\n"
	.string "machine-printed:\n"
	.string "POLIWAG -- MARSH 7 -- WK 41.$"
