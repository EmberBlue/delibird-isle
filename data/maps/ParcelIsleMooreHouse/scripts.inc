ParcelIsleMooreHouse_MapScripts::
	.byte 0


ParcelIsleMooreHouse_Runa::
# 7 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	lock
# 8 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleMooreHouse_Runa_2
# 11 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_GATE_ISLE, ParcelIsleMooreHouse_Runa_3
# 14 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_2, MSGBOX_DEFAULT
ParcelIsleMooreHouse_Runa_1:
# 16 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	release
	end

ParcelIsleMooreHouse_Runa_2:
# 10 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleMooreHouse_Runa_1

ParcelIsleMooreHouse_Runa_3:
# 12 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	msgbox ParcelIsleMooreHouse_Runa_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleMooreHouse_Runa_1


ParcelIsleMooreHouse_Runa_Text_0:
# 10 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: He came home last night and sat\n"
	.string "in the dark for an hour. Couldn't decide\l"
	.string "what to write in the log.\p"
	.string "He wrote your name in the end. Then the\n"
	.string "date. 'That's all a log is,' he says.$"

ParcelIsleMooreHouse_Runa_Text_1:
# 12 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: You beat him on the lane? He won't\n"
	.string "say it, so I will: he was pleased.\p"
	.string "He logs the ones who beat him in a\n"
	.string "different ink.$"

ParcelIsleMooreHouse_Runa_Text_2:
# 14 "data/maps/ParcelIsleMooreHouse/scripts.pory"
	.string "RUNA: My brother's the harbour-master.\n"
	.string "Every hull, every hand. He'll tell you\l"
	.string "himself, he tells everyone.\p"
	.string "He hasn't logged a mainland ferry in a\n"
	.string "year. He still opens the book every\l"
	.string "morning.$"
