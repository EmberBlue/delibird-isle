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
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHouse2_Woman_5
# 19 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Woman_2:
# 10 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Woman_5:
# 15 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end


ParcelHighlandsHouse2_Boy::
# 25 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	lock
# 26 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse2_Boy_2
# 32 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHouse2_Boy_5
# 37 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Boy_2:
# 28 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Boy_5:
# 33 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end


ParcelHighlandsHouse2_Woman_Text_0:
# 10 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: The bore's capped. He's on half\n"
	.string "wage pending survey. He sleeps at night\l"
	.string "now. I'll take the half.$"

ParcelHighlandsHouse2_Woman_Text_1:
# 15 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: He's been sent to the coast for\n"
	.string "a month. 'Marine survey.' Same crew, same\l"
	.string "drill, different water.\p"
	.string "I know which of us he'd keep. I'm less\n"
	.string "sure which of us is keeping him.$"

ParcelHighlandsHouse2_Woman_Text_2:
# 19 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: Bore crew's wife. He's paid by\n"
	.string "MEREHOLT and fed by me, and I know\l"
	.string "which of us he'd keep.$"

ParcelHighlandsHouse2_Boy_Text_0:
# 28 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: The ranger found the tarn under\n"
	.string "the hill. Dad says he knew. I asked why\l"
	.string "he didn't say. He said that's the whole\l"
	.string "question, son.$"

ParcelHighlandsHouse2_Boy_Text_1:
# 33 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: Dad's drilling the sea now! He says\n"
	.string "the water under the sea is older than\l"
	.string "the water under the hill.\p"
	.string "I asked if it's older than Grandad. He\n"
	.string "said everything is. Grandad didn't laugh\l"
	.string "that time.$"

ParcelHighlandsHouse2_Boy_Text_2:
# 37 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: Dad says the hill's full of water\n"
	.string "that's older than the town. I asked if\l"
	.string "it's older than Grandad. He said older\l"
	.string "than everything.$"
