ParcelWeatherInstitute1F_MapScripts::
	.byte 0


ParcelWeatherInstitute1F_Reception::
# 5 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 6 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWeatherInstitute1F_Reception_2
# 12 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Reception_5
# 17 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeatherInstitute1F_Reception_8
# 22 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_3, MSGBOX_DEFAULT
# 23 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Reception_2:
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Reception_5:
# 13 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Reception_8:
# 18 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Reception_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech1::
# 27 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 28 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWeatherInstitute1F_Tech1_2
# 34 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech1_5
# 39 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeatherInstitute1F_Tech1_8
# 44 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_3, MSGBOX_DEFAULT
# 45 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech1_2:
# 30 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech1_5:
# 35 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech1_8:
# 40 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech1_Text_2, MSGBOX_DEFAULT
# 41 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Tech2::
# 49 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 50 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	faceplayer
# 51 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelWeatherInstitute1F_Tech2_3
ParcelWeatherInstitute1F_Tech2_1:
# 56 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM_DONE, ParcelWeatherInstitute1F_Tech2_7
# 61 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM_FOUND, ParcelWeatherInstitute1F_Tech2_10
# 68 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM, ParcelWeatherInstitute1F_Tech2_13
# 73 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeatherInstitute1F_Tech2_16
# 79 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeatherInstitute1F_Tech2_19
# 84 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_6, MSGBOX_DEFAULT
# 85 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_2:
# 52 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_3:
# 51 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CASTFORM_DONE, ParcelWeatherInstitute1F_Tech2_2
	goto ParcelWeatherInstitute1F_Tech2_1

ParcelWeatherInstitute1F_Tech2_7:
# 57 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_10:
# 62 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_2, MSGBOX_DEFAULT
# 63 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 64 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM_DONE
# 65 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_13:
# 69 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_3, MSGBOX_DEFAULT
# 70 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_16:
# 74 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_4, MSGBOX_DEFAULT
# 75 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_CASTFORM
# 76 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Tech2_19:
# 80 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Tech2_Text_5, MSGBOX_DEFAULT
# 81 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end


ParcelWeatherInstitute1F_Board::
# 89 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	lock
# 90 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_0, MSGBOX_SIGN
# 91 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER, ParcelWeatherInstitute1F_Board_3
ParcelWeatherInstitute1F_Board_1:
# 95 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	release
	end

ParcelWeatherInstitute1F_Board_2:
# 92 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Board_Text_1, MSGBOX_SIGN
# 93 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_SEEN
	goto ParcelWeatherInstitute1F_Board_1

ParcelWeatherInstitute1F_Board_3:
# 91 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeatherInstitute1F_Board_2
	goto ParcelWeatherInstitute1F_Board_1


ParcelWeatherInstitute1F_Scenarios::
# 102 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Scenarios_Text_0, MSGBOX_SIGN
	end


ParcelWeatherInstitute1F_Register::
# 109 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Register_Text_0, MSGBOX_SIGN
# 110 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Register_Text_1, MSGBOX_SIGN
# 111 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	msgbox ParcelWeatherInstitute1F_Register_Text_2, MSGBOX_SIGN
	end


ParcelWeatherInstitute1F_Reception_Text_0:
# 8 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director sees anyone,\n"
	.string "any day. He's taken down the sign that\l"
	.string "said otherwise.\p"
	.string "He kept it. It's in his office, face to\n"
	.string "the wall.$"

ParcelWeatherInstitute1F_Reception_Text_1:
# 13 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone now. He says the four\l"
	.string "divisions were the easy part. Go up.$"

ParcelWeatherInstitute1F_Reception_Text_2:
# 18 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: You've beaten the four and\n"
	.string "the director. He's asked me to stop\l"
	.string "saying 'the rules'.\p"
	.string "He says there was only ever one rule,\n"
	.string "and it was his, and he isn't sure about\l"
	.string "it any more. I've never heard him say\l"
	.string "isn't sure. I wrote it down.$"

ParcelWeatherInstitute1F_Reception_Text_3:
# 22 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "RECEPTION: The director is upstairs. He\n"
	.string "sees anyone who's beaten the four\l"
	.string "divisions, and nobody who hasn't. Those\l"
	.string "are his rules. They're the only rules\l"
	.string "here he made himself.$"

ParcelWeatherInstitute1F_Tech1_Text_0:
# 30 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Over-the-fence data,\n"
	.string "monthly, beside the roof data. The two\l"
	.string "lines have started to agree.\p"
	.string "The director says that's the dish\n"
	.string "catching up. I say it's the fence.$"

ParcelWeatherInstitute1F_Tech1_Text_1:
# 35 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: The drawer's open. The\n"
	.string "over-the-fence data went to the\l"
	.string "review in three boxes. We publish it\l"
	.string "monthly now, next to the plot data. The\l"
	.string "drawer's for sandwiches.$"

ParcelWeatherInstitute1F_Tech1_Text_2:
# 40 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: The director took the\n"
	.string "drawer upstairs after your battle. All\l"
	.string "twelve months of the over-the-fence\l"
	.string "log.\p"
	.string "He said he wanted to read what the sky\n"
	.string "did while he was modelling it. He hasn't\l"
	.string "come down. We've started sending the\l"
	.string "sandwiches up.$"

ParcelWeatherInstitute1F_Tech1_Text_3:
# 44 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: We publish the plot data\n"
	.string "monthly. The over-the-fence data goes\l"
	.string "in a drawer. The drawer is very full.$"

ParcelWeatherInstitute1F_Tech2_Text_0:
# 52 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Still rain form. It has\n"
	.string "rained very gently on my desk for a\l"
	.string "year.\p"
	.string "I've stopped moving the in-tray. The\n"
	.string "paper dries.$"

ParcelWeatherInstitute1F_Tech2_Text_1:
# 57 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Back at its desk. Rain\n"
	.string "form, still. It rains very gently on my\l"
	.string "in-tray now. I've moved the in-tray.$"

ParcelWeatherInstitute1F_Tech2_Text_2:
# 62 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Under the director's desk.\n"
	.string "Of course. Rain form. Of course.\p"
	.string "Take this. Management sends them for\n"
	.string "'morale'. This is the most morale I've\l"
	.string "had all year.$"

ParcelWeatherInstitute1F_Tech2_Text_3:
# 69 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Upstairs. It went up the\n"
	.string "back stair during the storm drill. Look\l"
	.string "under things. It likes under things.$"

ParcelWeatherInstitute1F_Tech2_Text_4:
# 74 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: Ours is missing. The\n"
	.string "CASTFORM. It went up the back stair\l"
	.string "during the storm drill and nobody's seen\l"
	.string "it since.\p"
	.string "If you're going up to the director\n"
	.string "anyway. Look under things.$"

ParcelWeatherInstitute1F_Tech2_Text_5:
# 80 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office, still. 'Adaptive thinking.' One of\l"
	.string "them changed form during the hearing\l"
	.string "broadcast. Rain. Nobody's explained it.\l"
	.string "Nobody wants to.$"

ParcelWeatherInstitute1F_Tech2_Text_6:
# 84 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "TECHNICIAN: A CASTFORM in every\n"
	.string "office. Management's idea. 'Adaptive\l"
	.string "thinking.' They mostly sleep.$"

ParcelWeatherInstitute1F_Board_Text_0:
# 90 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "STATION MISSION. 'To demonstrate that\n"
	.string "regional climate outcomes are\l"
	.string "manageable through targeted\l"
	.string "intervention.' Somebody has underlined\l"
	.string "'demonstrate' in pencil and written: to\l"
	.string "whom?$"

ParcelWeatherInstitute1F_Board_Text_1:
# 92 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "Under the board, a drawer. Inside: the\n"
	.string "over-the-fence log. Twelve months of\l"
	.string "the real sky, in pencil.\p"
	.string "Rain up a third. Frost days down by half.\n"
	.string "Nobody signed it. Written down, with the\l"
	.string "date.$"

ParcelWeatherInstitute1F_Scenarios_Text_0:
# 102 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "The model, pinned to the wall in three\n"
	.string "sheets. SCENARIO A: TARGETED\l"
	.string "INTERVENTION. SCENARIO B: ENHANCED\l"
	.string "INTERVENTION. SCENARIO C: FULL\l"
	.string "MANAGEMENT.\p"
	.string "Every curve on every sheet ends in the\n"
	.string "same word: MANAGEABLE. Someone has\l"
	.string "pencilled a fourth sheet on the back of\l"
	.string "a requisition form and pinned it under\l"
	.string "the three. SCENARIO D: WHAT HAPPENED.\l"
	.string "The curve is the over-the-fence log,\l"
	.string "copied out. It does not end in a word. It\l"
	.string "ends at this month, because that is\l"
	.string "where the pencil stopped.$"

ParcelWeatherInstitute1F_Register_Text_0:
# 109 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "The Station's register, open on the\n"
	.string "stand under the roof dish's cable.\l"
	.string "Forty years of the same page: first\l"
	.string "frost, last frost, ice-out on the tarn,\l"
	.string "the first storm named.\p"
	.string "FIRST FROST. The dates walk down the\n"
	.string "column a day or two a year, with the odd\l"
	.string "year that walks back and gets a tick\l"
	.string "from somebody relieved. The ticks stop\l"
	.string "twenty years in.\p"
	.string "ICE-OUT. The tarn used to go in a week\n"
	.string "in late spring. The column has it going\l"
	.string "in a fortnight, then a month, then, in\l"
	.string "the last three years, not going at all,\l"
	.string "because it did not fully come.$"

ParcelWeatherInstitute1F_Register_Text_1:
# 110 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "STORMS NAMED. Four a year, then six,\n"
	.string "then the year with eleven, when the\l"
	.string "Director's hand gets smaller to fit them\l"
	.string "in.\p"
	.string "In the margin of the last page, the\n"
	.string "Director's initials beside a note not\l"
	.string "meant for the page: The dish measures.\l"
	.string "The register remembers. I was hired for\l"
	.string "the first and I have ended up keeping\l"
	.string "the second. I do not know which the\l"
	.string "Council wants.\p"
	.string "Under it, the Survey's initial and one\n"
	.string "line: Both. Keep both.$"

ParcelWeatherInstitute1F_Register_Text_2:
# 111 "data/maps/ParcelWeatherInstitute1F/scripts.pory"
	.string "A loose sheet is tucked in the back:\n"
	.string "the Survey's dusk counts from the\l"
	.string "Reedmere hide, copied by hand into the\l"
	.string "Station's own columns, year by year, so\l"
	.string "that the frost and the lights can be\l"
	.string "read together. Nobody at the Station\l"
	.string "admits to doing it.$"
