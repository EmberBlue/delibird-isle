ParcelCoastCannery_MapScripts::
	.byte 0


ParcelCoastCannery_Foreman::
# 5 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 6 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCannery_Foreman_2
# 12 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastCannery_Foreman_5
# 17 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Foreman_Text_2, MSGBOX_DEFAULT
# 18 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Foreman_2:
# 8 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Foreman_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Foreman_5:
# 13 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Foreman_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Line::
# 22 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 23 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 24 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCannery_Line_2
# 29 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastCannery_Line_5
# 34 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Line_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Line_2:
# 25 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Line_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Line_5:
# 30 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Line_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Inspector::
# 39 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 40 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 41 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCannery_Inspector_2
# 46 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastCannery_Inspector_5
# 51 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_2, MSGBOX_DEFAULT
# 52 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_2:
# 42 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_5:
# 47 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Board::
# 56 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Board_Text_0, MSGBOX_SIGN
	end


ParcelCoastCannery_Foreman_Text_0:
# 8 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "FOREMAN: Half speed by order instead\n"
	.string "of by shortage. Same speed, different\l"
	.string "reason. The lads say it feels different.\l"
	.string "I say a line's a line. I'm wrong, I think.$"

ParcelCoastCannery_Foreman_Text_1:
# 13 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "FOREMAN: Half speed, and this morning\n"
	.string "head office said hold the line a day\l"
	.string "'pending the ranger's report'. Pending\l"
	.string "YOUR report. We've never been pending\l"
	.string "anything.\p"
	.string "The line's quiet. You can hear the water\n"
	.string "running in the pipes. It's not a nice\l"
	.string "sound.$"

ParcelCoastCannery_Foreman_Text_2:
# 17 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "FOREMAN: Mind the line. We're at half\n"
	.string "speed; there's not the fish to run it\l"
	.string "full. Head office says run it anyway. So\l"
	.string "we run it. Water's cheap.$"

ParcelCoastCannery_Line_Text_0:
# 25 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "WORKER: A big one came down the line\n"
	.string "yesterday. The whole line stopped to\l"
	.string "look. Then we went on. That's all we ever\l"
	.string "wanted. Something worth stopping for.$"

ParcelCoastCannery_Line_Text_1:
# 30 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "WORKER: Same size, same size, same size,\n"
	.string "and today the inspector stopped the\l"
	.string "line to look at one. First time in a year\l"
	.string "the line's stopped for a fish.\p"
	.string "It was the same size as the others. She\n"
	.string "looked anyway. She said that's what you\l"
	.string "did. Looked.$"

ParcelCoastCannery_Line_Text_2:
# 34 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "WORKER: Every fish I gut's the same\n"
	.string "size. Used to be you'd get a big one and\l"
	.string "the whole line would stop to look.\l"
	.string "Nobody's stopped in a year.$"

ParcelCoastCannery_Inspector_Text_0:
# 42 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Every landing weighed,\n"
	.string "every weight logged, every log to the\l"
	.string "review now, not the coast office. Same\l"
	.string "numbers. Different reader. That's the\l"
	.string "whole change. It's enough.$"

ParcelCoastCannery_Inspector_Text_1:
# 47 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Every landing weighed.\n"
	.string "Every weight logged. Every log to the\l"
	.string "coast office. The numbers are still\l"
	.string "perfect.\p"
	.string "I read your survey. I've started a\n"
	.string "second column. What the numbers add up\l"
	.string "to. It's not my department. It's a\l"
	.string "column.$"

ParcelCoastCannery_Inspector_Text_2:
# 51 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Quota compliance. Every\n"
	.string "landing weighed, every weight logged,\l"
	.string "every log to the coast office. The\l"
	.string "numbers are perfect. I check them\l"
	.string "myself.\p"
	.string "What the numbers add up to isn't my\n"
	.string "department.$"

ParcelCoastCannery_Board_Text_0:
# 56 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "QUOTA BOARD. This month: 41 tonnes\n"
	.string "landed, 40 tonnes permitted. Over by\l"
	.string "one. A note in red: ROUNDING. Last\l"
	.string "year's board, under it: 112 tonnes.$"
