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
	goto_if_set FLAG_SKALD_Q_COPY, ParcelCoastCannery_Inspector_5
ParcelCoastCannery_Inspector_4:
# 51 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_COPY_DONE, ParcelCoastCannery_Inspector_3
# 57 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastCannery_Inspector_9
# 62 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastCannery_Inspector_16
# 67 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_5, MSGBOX_DEFAULT
# 68 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_2:
# 42 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_set FLAG_SKALD_Q_COPY_FOUND, ParcelCoastCannery_Inspector_12
# 47 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_1, MSGBOX_DEFAULT
ParcelCoastCannery_Inspector_11:
# 49 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_3:
# 52 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelCoastCannery/scripts.pory"
	setflag FLAG_SKALD_Q_COPY
# 54 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_5:
# 41 "data/maps/ParcelCoastCannery/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_COPY_DONE, ParcelCoastCannery_Inspector_2
	goto ParcelCoastCannery_Inspector_4

ParcelCoastCannery_Inspector_9:
# 58 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end

ParcelCoastCannery_Inspector_12:
# 43 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelCoastCannery/scripts.pory"
	giveitem ITEM_PP_UP, 1
# 45 "data/maps/ParcelCoastCannery/scripts.pory"
	setflag FLAG_SKALD_Q_COPY_DONE
	goto ParcelCoastCannery_Inspector_11

ParcelCoastCannery_Inspector_16:
# 63 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Inspector_Text_4, MSGBOX_DEFAULT
# 64 "data/maps/ParcelCoastCannery/scripts.pory"
	release
	end


ParcelCoastCannery_Board::
# 72 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Board_Text_0, MSGBOX_SIGN
	end


ParcelCoastCannery_CatchBook::
# 79 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_CatchBook_Text_0, MSGBOX_SIGN
	return


ParcelCoastCannery_Grading::
# 83 "data/maps/ParcelCoastCannery/scripts.pory"
	msgbox ParcelCoastCannery_Grading_Text_0, MSGBOX_SIGN
	return


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
# 43 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Under the tray. RECEIVED,\n"
	.string "not filed. Of course.\p"
	.string "You put it back on top? Good. That's all\n"
	.string "I ever asked of it. Here. I've no fish to\l"
	.string "give you, and I wouldn't give you those.$"

ParcelCoastCannery_Inspector_Text_1:
# 47 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: The hearing room. Under\n"
	.string "something, I expect. That's where my\l"
	.string "letters go.$"

ParcelCoastCannery_Inspector_Text_2:
# 52 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: My copy to the Council\n"
	.string "clerk. The one about the minimum size.\l"
	.string "It went up the street in my own hand\l"
	.string "and never reached the tray.\p"
	.string "Somewhere between here and the hearing\n"
	.string "room. If you find it, I'd like it back in\l"
	.string "the tray, on top, where the next sitting\l"
	.string "has to move it.$"

ParcelCoastCannery_Inspector_Text_3:
# 58 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Every landing weighed,\n"
	.string "every weight logged, every log to the\l"
	.string "review now, not the coast office. Same\l"
	.string "numbers. Different reader. That's the\l"
	.string "whole change. It's enough.$"

ParcelCoastCannery_Inspector_Text_4:
# 63 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Every landing weighed.\n"
	.string "Every weight logged. Every log to the\l"
	.string "coast office. The numbers are still\l"
	.string "perfect.\p"
	.string "I read your survey. I've started a\n"
	.string "second column. What the numbers add up\l"
	.string "to. It's not my department. It's a\l"
	.string "column.$"

ParcelCoastCannery_Inspector_Text_5:
# 67 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "INSPECTOR: Quota compliance. Every\n"
	.string "landing weighed, every weight logged,\l"
	.string "every log to the coast office. The\l"
	.string "numbers are perfect. I check them\l"
	.string "myself.\p"
	.string "What the numbers add up to isn't my\n"
	.string "department.$"

ParcelCoastCannery_Board_Text_0:
# 72 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "QUOTA BOARD. This month: 41 tonnes\n"
	.string "landed, 40 tonnes permitted. Over by\l"
	.string "one. A note in red: ROUNDING. Last\l"
	.string "year's board, under it: 112 tonnes.$"

ParcelCoastCannery_CatchBook_Text_0:
# 79 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "The catch book, chained to the desk.\n"
	.string "Landings by season, by boat, by kind.\l"
	.string "Anyone may read it. Nobody does.\p"
	.string "The early seasons: four columns, full.\n"
	.string "Flatfish, round fish, shell, the rest.\l"
	.string "The totals climb for years. A new line\l"
	.string "appears: dredge landings, counted\l"
	.string "separately, larger than all the boats\l"
	.string "together.\p"
	.string "The middle seasons: the boats' columns\n"
	.string "thin. UNDERSIZE gets its own column and\l"
	.string "grows. Shell goes to nothing in two\l"
	.string "seasons and is not printed again.\p"
	.string "The late seasons: the dredge column\n"
	.string "holds. The boats' columns are mostly\l"
	.string "dashes. Someone has started writing\l"
	.string "the names of the fish that come up\l"
	.string "where other fish used to, warm-water\l"
	.string "names, in the margin, in pencil, with\l"
	.string "question marks.\p"
	.string "The totals at the bottom of every page\n"
	.string "are about the same. That is what the\l"
	.string "Foundation's chart shows. The totals.$"

ParcelCoastCannery_Grading_Text_0:
# 83 "data/maps/ParcelCoastCannery/scripts.pory"
	.string "The inspector's grading sheets on a\n"
	.string "clip. This week's landings, by grade.\p"
	.string "GRADE ONE: a short column. GRADE TWO:\n"
	.string "longer. UNDERSIZE, RETURNED: the\l"
	.string "longest column, which is to say not\l"
	.string "returned, which is to say in the cans\l"
	.string "with a different label.\p"
	.string "A note in the inspector's hand at the\n"
	.string "foot of each sheet, the same note\l"
	.string "every week for a year: minimum size not\l"
	.string "met, see management. Then, this week, a\l"
	.string "different note: see management, again,\l"
	.string "in writing, copy to the clerk of the\l"
	.string "Council.\p"
	.string "The copy is not on the clip. It went\n"
	.string "somewhere.$"
