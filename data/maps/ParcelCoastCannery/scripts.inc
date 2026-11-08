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
	msgbox ParcelCoastCannery_Foreman_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Foreman_2:
# 8 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Foreman_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Line::
# 17 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 18 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 19 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCannery_Line_2
# 24 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Line_Text_1, MSGBOX_DEFAULT
# 25 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Line_2:
# 20 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Line_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Inspector::
# 29 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 30 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 31 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCannery_Inspector_2
# 36 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_2:
# 32 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Board::
# 41 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Board_Text_0, MSGBOX_SIGN
	end


ParcelCoastCannery_Foreman_Text_0:
# 8 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "FOREMAN: Half speed by order instead\n"
	.string "of by shortage. Same speed, different\l"
	.string "reason. The lads say it feels different.\l"
	.string "I say a line's a line. I'm wrong, I think.$"

ParcelCoastCannery_Foreman_Text_1:
# 12 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "FOREMAN: Mind the line. We're at half\n"
	.string "speed; there's not the fish to run it\l"
	.string "full. Head office says run it anyway. So\l"
	.string "we run it. Water's cheap.$"

ParcelCoastCannery_Line_Text_0:
# 20 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "WORKER: A big one came down the line\n"
	.string "yesterday. The whole line stopped to\l"
	.string "look. Then we went on. That's all we ever\l"
	.string "wanted. Something worth stopping for.$"

ParcelCoastCannery_Line_Text_1:
# 24 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "WORKER: Every fish I gut's the same\n"
	.string "size. Used to be you'd get a big one and\l"
	.string "the whole line would stop to look.\l"
	.string "Nobody's stopped in a year.$"

ParcelCoastCannery_Inspector_Text_0:
# 32 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Every landing weighed,\n"
	.string "every weight logged, every log to the\l"
	.string "review now, not the coast office. Same\l"
	.string "numbers. Different reader. That's the\l"
	.string "whole change. It's enough.$"

ParcelCoastCannery_Inspector_Text_1:
# 36 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Quota compliance. Every\n"
	.string "landing weighed, every weight logged,\l"
	.string "every log to the coast office. The\l"
	.string "numbers are perfect. I check them\l"
	.string "myself.\p"
	.string "What the numbers add up to isn't my\n"
	.string "department.$"

ParcelCoastCannery_Board_Text_0:
# 41 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "QUOTA BOARD. This month: 41 tonnes\n"
	.string "landed, 40 tonnes permitted. Over by\l"
	.string "one. A note in red: ROUNDING. Last\l"
	.string "year's board, under it: 112 tonnes.$"
