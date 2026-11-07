ParcelFloodbasinHouse1_MapScripts::
	.byte 0


ParcelFloodbasinHouse1_Hedda::
# 5 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	lock
# 6 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasinHouse1_Hedda_2
# 12 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end

ParcelFloodbasinHouse1_Hedda_2:
# 8 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Hedda_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end


ParcelFloodbasinHouse1_Karp::
# 18 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	lock
# 19 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	faceplayer
# 20 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Karp_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	release
	end


ParcelFloodbasinHouse1_Chart::
# 25 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	msgbox ParcelFloodbasinHouse1_Chart_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasinHouse1_Hedda_Text_0:
# 8 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The CORPS girl came through with\n"
	.string "her ledger. ILEX. She asked me what I\l"
	.string "used to catch. Nobody's asked me that\l"
	.string "in ten years.\p"
	.string "I told her. She wrote it all down. Every\n"
	.string "fish.$"

ParcelFloodbasinHouse1_Hedda_Text_1:
# 12 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: Sit, sit. PIPER's out in the\n"
	.string "puddles again, she'll be soaked.\p"
	.string "I fished the lower lake forty years.\n"
	.string "Stopped when the catch came up with\l"
	.string "sores. I still sell it. Don't look at me\l"
	.string "like that. What else is there?$"

ParcelFloodbasinHouse1_Hedda_Text_2:
# 13 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "HEDDA: The councilman sends vouchers.\n"
	.string "The FOUNDATION sends a boat. The CORPS\l"
	.string "sends children with notebooks. No\l"
	.string "offence.\p"
	.string "None of them send fish.$"

ParcelFloodbasinHouse1_Karp_Text_0:
# 20 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "The MAGIKARP in the washtub flops once\n"
	.string "and goes still. Its scales are the right\l"
	.string "colour. HEDDA checks them every\l"
	.string "morning.$"

ParcelFloodbasinHouse1_Chart_Text_0:
# 25 "data/maps/ParcelFloodbasinHouse1/scripts.pory"
	.string "A catch log, in pencil, going back\n"
	.string "decades. The columns thin out around\l"
	.string "twenty years ago and never fill back in.\p"
	.string "The last page: 'Sold 4. Ate 0.'$"
