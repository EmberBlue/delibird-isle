ParcelCoastCannery_MapScripts::
	.byte 0


ParcelCoastCannery_Foreman::
# 5 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 6 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Foreman_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Line::
# 12 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 13 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 14 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Line_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Inspector::
# 19 "data/maps/ParcelCoastCannery/scripts.pory"
	lock
# 20 "data/maps/ParcelCoastCannery/scripts.pory"
	faceplayer
# 21 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Board::
# 26 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Board_Text_0, MSGBOX_SIGN
	end


ParcelCoastCannery_Foreman_Text_0:
# 7 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "FOREMAN: Mind the line. We're at half\n"
	.string "speed; there's not the fish to run it\l"
	.string "full. Head office says run it anyway. So\l"
	.string "we run it. Water's cheap.$"

ParcelCoastCannery_Line_Text_0:
# 14 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "WORKER: Every fish I gut's the same\n"
	.string "size. Used to be you'd get a big one and\l"
	.string "the whole line would stop to look.\l"
	.string "Nobody's stopped in a year.$"

ParcelCoastCannery_Inspector_Text_0:
# 21 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Quota compliance. Every\n"
	.string "landing weighed, every weight logged,\l"
	.string "every log to the coast office. The\l"
	.string "numbers are perfect. I check them\l"
	.string "myself.\p"
	.string "What the numbers add up to isn't my\n"
	.string "department.$"

ParcelCoastCannery_Board_Text_0:
# 26 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "QUOTA BOARD. This month: 41 tonnes\n"
	.string "landed, 40 tonnes permitted. Over by\l"
	.string "one. A note in red: ROUNDING. Last\l"
	.string "year's board, under it: 112 tonnes.$"
