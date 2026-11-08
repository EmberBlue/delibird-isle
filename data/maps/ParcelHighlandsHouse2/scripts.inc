ParcelHighlandsHouse2_MapScripts::
	.byte 0


ParcelHighlandsHouse2_Woman::
# 7 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	lock
# 8 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse2_Woman_2
# 14 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Woman_2:
# 10 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end


ParcelHighlandsHouse2_Boy::
# 20 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	lock
# 21 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse2_Boy_2
# 27 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Boy_2:
# 23 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end


ParcelHighlandsHouse2_Woman_Text_0:
# 10 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: The bore's capped. He's on half\n"
	.string "wage pending survey. He sleeps at night\l"
	.string "now. I'll take the half.$"

ParcelHighlandsHouse2_Woman_Text_1:
# 14 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: Bore crew's wife. He's paid by\n"
	.string "MEREHOLT and fed by me, and I know\l"
	.string "which of us he'd keep.$"

ParcelHighlandsHouse2_Boy_Text_0:
# 23 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: The ranger found the tarn under\n"
	.string "the hill. Dad says he knew. I asked why\l"
	.string "he didn't say. He said that's the whole\l"
	.string "question, son.$"

ParcelHighlandsHouse2_Boy_Text_1:
# 27 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: Dad says the hill's full of water\n"
	.string "that's older than the town. I asked if\l"
	.string "it's older than Grandad. He said older\l"
	.string "than everything.$"
