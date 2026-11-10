ParcelIsleMooreHouse_MapScripts::
	.byte 0


ParcelIsleMooreHouse_Runa::
# 7 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	lock
# 8 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleMooreHouse_Runa_2
# 14 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleMooreHouse_Runa_5
# 16 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleMooreHouse_Runa_6
# 18 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_GATE_ISLE, ParcelIsleMooreHouse_Runa_7
# 21 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_4, MSGBOX_DEFAULT
ParcelIsleMooreHouse_Runa_4:
# 23 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	release
	end

ParcelIsleMooreHouse_Runa_2:
# 10 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	release
	end

ParcelIsleMooreHouse_Runa_5:
# 15 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleMooreHouse_Runa_4

ParcelIsleMooreHouse_Runa_6:
# 17 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleMooreHouse_Runa_4

ParcelIsleMooreHouse_Runa_7:
# 19 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleMooreHouse_Runa_4


ParcelIsleMooreHouse_ReadDresser::
# 28 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelIsleMooreHouse_ReadShelf::
# 33 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelIsleMooreHouse_PaperTimetable::
# 40 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleMooreHouse_PaperTimetable_2
# 43 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_PaperTimetable_Text_1, MSGBOX_SIGN
ParcelIsleMooreHouse_PaperTimetable_1:
	end

ParcelIsleMooreHouse_PaperTimetable_2:
# 41 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_PaperTimetable_Text_0, MSGBOX_SIGN
	goto ParcelIsleMooreHouse_PaperTimetable_1


ParcelIsleMooreHouse_Runa_Text_0:
# 10 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: He logs the ferry and writes a\n"
	.string "line under it now. Weather, catch, who\l"
	.string "got off.\p"
	.string "He says a log's a story if you let it be.\n"
	.string "He never used to let it.$"

ParcelIsleMooreHouse_Runa_Text_1:
# 15 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: He came home last night and sat\n"
	.string "in the dark for an hour. Couldn't decide\l"
	.string "what to write in the log.\p"
	.string "He wrote your name in the end. Then the\n"
	.string "date. 'That's all a log is,' he says.$"

ParcelIsleMooreHouse_Runa_Text_2:
# 17 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: My brother logged a mainland\n"
	.string "ferry. First in a year. Full of reporters,\l"
	.string "going north to look at a river.\p"
	.string "He wrote it in the good ink. Then he sat\n"
	.string "with the book open a while.$"

ParcelIsleMooreHouse_Runa_Text_3:
# 19 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: You beat him on the lane? He won't\n"
	.string "say it, so I will: he was pleased.\p"
	.string "He logs the ones who beat him in a\n"
	.string "different ink.$"

ParcelIsleMooreHouse_Runa_Text_4:
# 21 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: My brother's the harbour-master.\n"
	.string "Every hull, every hand. He'll tell you\l"
	.string "himself, he tells everyone.\p"
	.string "He hasn't logged a mainland ferry in a\n"
	.string "year. He still opens the book every\l"
	.string "morning.$"

ParcelIsleMooreHouse_ReadDresser_Text_0:
# 28 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "The harbour-master's spare cap on the\n"
	.string "dresser, the badge polished to nothing.\l"
	.string "Runa polishes it. He wouldn't.$"

ParcelIsleMooreHouse_ReadShelf_Text_0:
# 33 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "Harbour logs, bound by year. The thin\n"
	.string "ones are recent. A new one has been\l"
	.string "started this month. It is thicker\l"
	.string "already.$"

ParcelIsleMooreHouse_PaperTimetable_Text_0:
# 41 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "The ferry timetable, with a new sheet\n"
	.string "pinned over it: a mainland sailing\l"
	.string "restored, twice weekly, for the review's\l"
	.string "witnesses.\p"
	.string "He has not circled it. He has written\n"
	.string "beside it, in the good ink: logged. RUNA\l"
	.string "says that is as close as he comes to a\l"
	.string "celebration.$"

ParcelIsleMooreHouse_PaperTimetable_Text_1:
# 43 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "The ferry timetable, pinned by the\n"
	.string "harbourmaster's sister where he will\l"
	.string "see it from the door. The mainland\l"
	.string "sailings are crossed out one by one, in\l"
	.string "his pencil, as the year goes on.\p"
	.string "The island sailing is not crossed out.\n"
	.string "It is circled. He circles it every\l"
	.string "morning before he opens the log.$"
