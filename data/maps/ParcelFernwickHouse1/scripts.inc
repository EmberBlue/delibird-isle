ParcelFernwickHouse1_MapScripts::
	.byte 0


ParcelFernwickHouse1_Man::
# 5 "data/maps/ParcelFernwickHouse1/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse1_Man_2
# 12 "data/maps/ParcelFernwickHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse1_Man_5
# 17 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end

ParcelFernwickHouse1_Man_2:
# 8 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end

ParcelFernwickHouse1_Man_5:
# 13 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Man_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end


ParcelFernwickHouse1_ReadCounter::
# 23 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_ReadCounter_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse1_ReadFridge::
# 28 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_ReadFridge_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse1_ReadShelf::
# 33 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelFernwickHouse1_Sister::
# 38 "data/maps/ParcelFernwickHouse1/scripts.pory"
	lock
# 39 "data/maps/ParcelFernwickHouse1/scripts.pory"
	faceplayer
# 40 "data/maps/ParcelFernwickHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHouse1_Sister_2
# 42 "data/maps/ParcelFernwickHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHouse1_Sister_3
# 45 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Sister_Text_2, MSGBOX_DEFAULT
ParcelFernwickHouse1_Sister_1:
# 47 "data/maps/ParcelFernwickHouse1/scripts.pory"
	release
	end

ParcelFernwickHouse1_Sister_2:
# 41 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Sister_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwickHouse1_Sister_1

ParcelFernwickHouse1_Sister_3:
# 43 "data/maps/ParcelFernwickHouse1/scripts.pory"
	msgbox ParcelFernwickHouse1_Sister_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwickHouse1_Sister_1


ParcelFernwickHouse1_Man_Text_0:
# 8 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother's dredge is idle pending\n"
	.string "survey. My sister wrote the survey.\l"
	.string "Dinner at ours is louder now. That's\l"
	.string "better. I think it's better.$"

ParcelFernwickHouse1_Man_Text_1:
# 13 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother's crew got stood down.\n"
	.string "He came to dinner. He talked. First time\l"
	.string "in a year the table had three voices on\l"
	.string "it.\p"
	.string "He's angry at the wrong people still,\n"
	.string "but he's angry out loud, and that's a\l"
	.string "start.$"

ParcelFernwickHouse1_Man_Text_2:
# 17 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "MAN: My brother works the marsh dredge.\n"
	.string "My sister works for the Corps.\p"
	.string "Dinner at ours is very quiet.$"

ParcelFernwickHouse1_ReadCounter_Text_0:
# 23 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "Three plates set, three chairs, one\n"
	.string "radio. The radio is set to the weather,\l"
	.string "which is the only thing everyone in this\l"
	.string "house agrees to listen to.$"

ParcelFernwickHouse1_ReadFridge_Text_0:
# 28 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "A list on the fridge: DO NOT DISCUSS.\n"
	.string "The list is empty.\p"
	.string "Somebody wrote the heading, and nobody\n"
	.string "has dared add to it.$"

ParcelFernwickHouse1_ReadShelf_Text_0:
# 33 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "A shelf of Corps field guides and a\n"
	.string "shelf of dredging manuals, spine to\l"
	.string "spine. Neither side has been dusted.\l"
	.string "Both have been read.$"

ParcelFernwickHouse1_Sister_Text_0:
# 41 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "SISTER: I wrote the Reedmere survey.\n"
	.string "The pipe. He read it at the dinner table\l"
	.string "with the gravy going cold and didn't say\l"
	.string "a word till the end.\p"
	.string "Then he said: that's my shift you've\n"
	.string "written about. I said yes. He said: you\l"
	.string "spelled the foreman's name wrong. I had.\l"
	.string "He fixed it. That's us, now. He fixes my\l"
	.string "spelling.$"

ParcelFernwickHouse1_Sister_Text_1:
# 43 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "SISTER: Corps, provisional, two years.\n"
	.string "He's on the dredge. We don't talk about\l"
	.string "work, so we don't talk.\p"
	.string "The radio's on the weather because the\n"
	.string "weather's the one thing that happens\l"
	.string "to both of us the same. Sit down if you\l"
	.string "like. There's a third chair; it's been\l"
	.string "empty a while.$"

ParcelFernwickHouse1_Sister_Text_2:
# 45 "data/maps/ParcelFernwickHouse1/scripts.pory"
	.string "SISTER: Corps, provisional, two years.\n"
	.string "He's on the dredge. We don't talk about\l"
	.string "work, so we don't talk.\p"
	.string "The radio's on the weather because the\n"
	.string "weather's the one thing that happens\l"
	.string "to both of us the same.$"
