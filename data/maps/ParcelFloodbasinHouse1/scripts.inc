ParcelFloodbasinHouse1_MapScripts::
	.byte 0


ParcelFloodbasinHouse1_Hedda::
# 5 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	lock
# 6 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasinHouse1_Hedda_3
ParcelFloodbasinHouse1_Hedda_1:
# 12 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse1_Hedda_7
# 17 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEDDA_DONE, ParcelFloodbasinHouse1_Hedda_10
# 22 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEDDA, ParcelFloodbasinHouse1_Hedda_13
# 38 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasinHouse1_Hedda_16
# 43 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_7, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_8, MSGBOX_DEFAULT
# 45 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_9, MSGBOX_DEFAULT
# 46 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_HEDDA
# 47 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_2:
# 8 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_3:
# 7 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEDDA_DONE, ParcelFloodbasinHouse1_Hedda_2
	goto ParcelFloodbasinHouse1_Hedda_1

ParcelFloodbasinHouse1_Hedda_7:
# 13 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_10:
# 18 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_13:
# 23 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 24 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setvar VAR_0x8004, 17
# 25 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 26 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ParcelFloodbasinHouse1_Hedda_19
# 34 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_5, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_16:
# 39 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_6, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_19:
# 27 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_4, MSGBOX_DEFAULT
# 29 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 30 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_HEDDA_DONE
# 31 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end


ParcelFloodbasinHouse1_Karp::
# 51 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	lock
# 52 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	faceplayer
# 53 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Karp_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end


ParcelFloodbasinHouse1_Chart::
# 58 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Chart_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinHouse1_ReadDresser::
# 63 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinHouse1_PaperScaleChart::
# 70 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasinHouse1_PaperScaleChart_2
# 73 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_PaperScaleChart_Text_1, MSGBOX_SIGN
ParcelFloodbasinHouse1_PaperScaleChart_1:
	end

ParcelFloodbasinHouse1_PaperScaleChart_2:
# 71 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_PaperScaleChart_Text_0, MSGBOX_SIGN
	goto ParcelFloodbasinHouse1_PaperScaleChart_1


ParcelFloodbasinHouse1_Hedda_Text_0:
# 8 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The Board man comes Tuesdays\n"
	.string "and I ask him a question each time. He's\l"
	.string "started bringing answers.\p"
	.string "Forty years of not asking, and it's the\n"
	.string "asking that's hard to stop.$"

ParcelFloodbasinHouse1_Hedda_Text_1:
# 13 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Forty years I didn't ask. You\n"
	.string "asked, and then a hearing asked, and\l"
	.string "now a man from the Board asks every\l"
	.string "Tuesday. I liked it better when nobody\l"
	.string "asked. That's a confession too.$"

ParcelFloodbasinHouse1_Hedda_Text_2:
# 18 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Forty years I didn't ask. You\n"
	.string "asked in an afternoon. That's not a\l"
	.string "compliment, child. It's a confession.$"

ParcelFloodbasinHouse1_Hedda_Text_3:
# 27 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Greying scales at the piling.\n"
	.string "DISCHARGE LICENSED on the pipe.\l"
	.string "Licensed. By someone.\p"
	.string "I sold those fish for forty years and\n"
	.string "never once walked up to read a pipe.$"

ParcelFloodbasinHouse1_Hedda_Text_4:
# 28 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Take this. My husband's. It\n"
	.string "shares what it's given with the ones\l"
	.string "that didn't earn it. Nobody else in this\l"
	.string "basin does.$"

ParcelFloodbasinHouse1_Hedda_Text_5:
# 34 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The fish at the bridge piling.\n"
	.string "The plate on the old pump house, past\l"
	.string "the puddle field. Read both. Then tell\l"
	.string "me what they say. Plainly.$"

ParcelFloodbasinHouse1_Hedda_Text_6:
# 39 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The CORPS girl came through with\n"
	.string "her ledger. ILEX. She asked me what I\l"
	.string "used to catch. Nobody's asked me that\l"
	.string "in ten years.\p"
	.string "I told her. She wrote it all down. Every\n"
	.string "fish.$"

ParcelFloodbasinHouse1_Hedda_Text_7:
# 43 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Sit, sit. PIPER's out in the\n"
	.string "puddles again, she'll be soaked.\p"
	.string "I fished the lower lake forty years.\n"
	.string "Stopped when the catch came up with\l"
	.string "sores. I still sell it. Don't look at me\l"
	.string "like that. What else is there?$"

ParcelFloodbasinHouse1_Hedda_Text_8:
# 44 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The councilman sends vouchers.\n"
	.string "The FOUNDATION sends a boat. The CORPS\l"
	.string "sends children with notebooks. No\l"
	.string "offence. None of them send fish.$"

ParcelFloodbasinHouse1_Hedda_Text_9:
# 45 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Do an old woman a kindness,\n"
	.string "since you've got a notebook. The fish\l"
	.string "at the bridge piling, and the plate on\l"
	.string "the old pump house. Look at both. Then\l"
	.string "come and tell me what they say.$"

ParcelFloodbasinHouse1_Karp_Text_0:
# 53 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "The MAGIKARP in the washtub flops once\n"
	.string "and goes still. Its scales are the right\l"
	.string "colour. HEDDA checks them every\l"
	.string "morning.$"

ParcelFloodbasinHouse1_Chart_Text_0:
# 58 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "A catch log, in pencil, going back\n"
	.string "decades. The columns thin out around\l"
	.string "twenty years ago and never fill back in.\p"
	.string "The last page: 'Sold 4. Ate 0.'$"

ParcelFloodbasinHouse1_ReadDresser_Text_0:
# 63 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "A fishwife's scales on the dresser,\n"
	.string "brass, polished. Forty years of selling\l"
	.string "fish, and she never once weighed the\l"
	.string "water.$"

ParcelFloodbasinHouse1_PaperScaleChart_Text_0:
# 71 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA's chart. The line has climbed back\n"
	.string "to DULL and held there for a season,\l"
	.string "which on this chart is a recovery.\p"
	.string "She has added a fifth square to the\n"
	.string "painted card, above GOOD, and left it\l"
	.string "blank. She says she will paint it when\l"
	.string "she sees the colour.$"

ParcelFloodbasinHouse1_PaperScaleChart_Text_1:
# 73 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA's chart for the MAGIKARP in the\n"
	.string "washtub. Scale colour by week, against\l"
	.string "a strip of painted card: GOOD, DULL,\l"
	.string "PALE, WRONG.\p"
	.string "The line wanders between DULL and PALE\n"
	.string "for a year and touches WRONG twice,\l"
	.string "both times the week after a pulse down\l"
	.string "the basin.$"
