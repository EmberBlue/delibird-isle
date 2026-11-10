ParcelHighlandsHouse2_MapScripts::
	.byte 0


ParcelHighlandsHouse2_Woman::
# 7 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	lock
# 8 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsHouse2_Woman_2
# 14 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse2_Woman_5
# 19 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHouse2_Woman_8
# 24 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelHighlandsHouse2/scripts.pory"
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

ParcelHighlandsHouse2_Woman_8:
# 20 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Woman_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end


ParcelHighlandsHouse2_Boy::
# 30 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	lock
# 31 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlandsHouse2_Boy_2
# 37 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlandsHouse2_Boy_5
# 42 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlandsHouse2_Boy_8
# 47 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Boy_2:
# 33 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Boy_5:
# 38 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end

ParcelHighlandsHouse2_Boy_8:
# 43 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_Boy_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	release
	end


ParcelHighlandsHouse2_ReadDresser::
# 53 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse2_ReadShelf::
# 58 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse2_ReadPantry::
# 63 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	msgbox ParcelHighlandsHouse2_ReadPantry_Text_0, MSGBOX_SIGN
	end


ParcelHighlandsHouse2_Woman_Text_0:
# 10 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: He's on the cap crew. Full wage,\n"
	.string "reading a gauge that says nothing. He\l"
	.string "sleeps.\p"
	.string "I'd pay for that out of my own wage if\n"
	.string "they stopped.$"

ParcelHighlandsHouse2_Woman_Text_1:
# 15 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: The bore's capped. He's on half\n"
	.string "wage pending survey. He sleeps at night\l"
	.string "now. I'll take the half.$"

ParcelHighlandsHouse2_Woman_Text_2:
# 20 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: He's been sent to the coast for\n"
	.string "a month. 'Marine survey.' Same crew, same\l"
	.string "drill, different water.\p"
	.string "I know which of us he'd keep. I'm less\n"
	.string "sure which of us is keeping him.$"

ParcelHighlandsHouse2_Woman_Text_3:
# 24 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "WOMAN: Bore crew's wife. He's paid by\n"
	.string "MEREHOLT and fed by me, and I know\l"
	.string "which of us he'd keep.$"

ParcelHighlandsHouse2_Boy_Text_0:
# 33 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: Dad reads the cap now. He says the\n"
	.string "hill under it says nothing, and nothing\l"
	.string "is what you want a hill to say.\p"
	.string "I asked what the sea said. He said:\n"
	.string "later.$"

ParcelHighlandsHouse2_Boy_Text_1:
# 38 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: The ranger found the tarn under\n"
	.string "the hill. Dad says he knew. I asked why\l"
	.string "he didn't say. He said that's the whole\l"
	.string "question, son.$"

ParcelHighlandsHouse2_Boy_Text_2:
# 43 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: Dad's drilling the sea now! He says\n"
	.string "the water under the sea is older than\l"
	.string "the water under the hill.\p"
	.string "I asked if it's older than Grandad. He\n"
	.string "said everything is. Grandad didn't laugh\l"
	.string "that time.$"

ParcelHighlandsHouse2_Boy_Text_3:
# 47 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "BOY: Dad says the hill's full of water\n"
	.string "that's older than the town. I asked if\l"
	.string "it's older than Grandad. He said older\l"
	.string "than everything.$"

ParcelHighlandsHouse2_ReadDresser_Text_0:
# 53 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "A bore crew payslip on the dresser, and\n"
	.string "under it a bill for the same amount from\l"
	.string "the valley store. The two have been laid\l"
	.string "together on purpose.$"

ParcelHighlandsHouse2_ReadShelf_Text_0:
# 58 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "A geology primer with a child's bookmark\n"
	.string "in it: a strip of core-sample tape. The\l"
	.string "page is about ice.$"

ParcelHighlandsHouse2_ReadPantry_Text_0:
# 63 "data/maps/ParcelHighlandsHouse2/scripts.pory"
	.string "Jars of preserved bilberries, dated. The\n"
	.string "dates stop two summers ago. The slope\l"
	.string "where they grew is in the valley now.$"
