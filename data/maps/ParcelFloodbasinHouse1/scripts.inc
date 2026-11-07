ParcelFloodbasinHouse1_MapScripts::
	.byte 0


ParcelFloodbasinHouse1_Hedda::
# 5 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	lock
# 6 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEDDA_DONE, ParcelFloodbasinHouse1_Hedda_2
# 12 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEDDA, ParcelFloodbasinHouse1_Hedda_5
# 28 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasinHouse1_Hedda_8
# 33 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_6, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_7, MSGBOX_DEFAULT
# 36 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_HEDDA
# 37 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_2:
# 8 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_5:
# 13 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 14 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setvar VAR_0x8004, 17
# 15 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 16 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ParcelFloodbasinHouse1_Hedda_11
# 24 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_8:
# 29 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_11:
# 17 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 20 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	setflag FLAG_SKALD_Q_HEDDA_DONE
# 21 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end


ParcelFloodbasinHouse1_Karp::
# 41 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	lock
# 42 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	faceplayer
# 43 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Karp_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end


ParcelFloodbasinHouse1_Chart::
# 48 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Chart_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinHouse1_Hedda_Text_0:
# 8 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Forty years I didn't ask. You\n"
	.string "asked in an afternoon. That's not a\l"
	.string "compliment, child. It's a confession.$"

ParcelFloodbasinHouse1_Hedda_Text_1:
# 17 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Greying scales at the piling.\n"
	.string "DISCHARGE LICENSED on the pipe.\l"
	.string "Licensed. By someone.\p"
	.string "I sold those fish for forty years and\n"
	.string "never once walked up to read a pipe.$"

ParcelFloodbasinHouse1_Hedda_Text_2:
# 18 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Take this. My husband's. It\n"
	.string "shares what it's given with the ones\l"
	.string "that didn't earn it. Nobody else in this\l"
	.string "basin does.$"

ParcelFloodbasinHouse1_Hedda_Text_3:
# 24 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The fish at the bridge piling.\n"
	.string "The plate on the old pump house, past\l"
	.string "the puddle field. Read both. Then tell\l"
	.string "me what they say. Plainly.$"

ParcelFloodbasinHouse1_Hedda_Text_4:
# 29 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The CORPS girl came through with\n"
	.string "her ledger. ILEX. She asked me what I\l"
	.string "used to catch. Nobody's asked me that\l"
	.string "in ten years.\p"
	.string "I told her. She wrote it all down. Every\n"
	.string "fish.$"

ParcelFloodbasinHouse1_Hedda_Text_5:
# 33 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Sit, sit. PIPER's out in the\n"
	.string "puddles again, she'll be soaked.\p"
	.string "I fished the lower lake forty years.\n"
	.string "Stopped when the catch came up with\l"
	.string "sores. I still sell it. Don't look at me\l"
	.string "like that. What else is there?$"

ParcelFloodbasinHouse1_Hedda_Text_6:
# 34 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The councilman sends vouchers.\n"
	.string "The FOUNDATION sends a boat. The CORPS\l"
	.string "sends children with notebooks. No\l"
	.string "offence. None of them send fish.$"

ParcelFloodbasinHouse1_Hedda_Text_7:
# 35 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Do an old woman a kindness,\n"
	.string "since you've got a notebook. The fish\l"
	.string "at the bridge piling, and the plate on\l"
	.string "the old pump house. Look at both. Then\l"
	.string "come and tell me what they say.$"

ParcelFloodbasinHouse1_Karp_Text_0:
# 43 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "The MAGIKARP in the washtub flops once\n"
	.string "and goes still. Its scales are the right\l"
	.string "colour. HEDDA checks them every\l"
	.string "morning.$"

ParcelFloodbasinHouse1_Chart_Text_0:
# 48 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "A catch log, in pencil, going back\n"
	.string "decades. The columns thin out around\l"
	.string "twenty years ago and never fill back in.\p"
	.string "The last page: 'Sold 4. Ate 0.'$"
