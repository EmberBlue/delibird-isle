ParcelRiverDepot_MapScripts::
	.byte 0


ParcelRiverDepot_Buyer::
# 6 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 7 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverDepot_Buyer_2
# 13 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Buyer_2:
# 9 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Farmer::
# 18 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 19 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 20 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverDepot_Farmer_2
# 25 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Farmer_2:
# 21 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Board::
# 30 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Board_Text_0, MSGBOX_SIGN
	end


ParcelRiverDepot_Buyer_Text_0:
# 9 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Produce by weight, same day, no\n"
	.string "haggling. The review put a floor under\l"
	.string "the price. I pay the floor. Head office\l"
	.string "hates the floor. I don't mind it. It's a\l"
	.string "floor.$"

ParcelRiverDepot_Buyer_Text_1:
# 13 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Produce by weight, paid same\n"
	.string "day, no haggling, no questions. That's\l"
	.string "the FOUNDATION offer. It's a good\l"
	.string "offer. Ask anyone who's taken it.\p"
	.string "Fertiliser's on the pallet. Credit\n"
	.string "available against next season.\l"
	.string "Everyone takes the credit.$"

ParcelRiverDepot_Farmer_Text_0:
# 21 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: The depot's every day and now\n"
	.string "it pays the floor. The market pays more\l"
	.string "again. I split between them. Having a\l"
	.string "choice is the thing. I'd forgotten the\l"
	.string "thing.$"

ParcelRiverDepot_Farmer_Text_1:
# 25 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: I sell here because the market\n"
	.string "pays less and the market's one day a\l"
	.string "week. The depot's every day. That's all.\l"
	.string "That's the whole reason. It's enough.$"

ParcelRiverDepot_Board_Text_0:
# 30 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "PRICES, POSTED. Trout: by weight,\n"
	.string "Foundation rate. Greens: Foundation\l"
	.string "rate. Eggs: Foundation rate.\p"
	.string "FERTILISER, FOUNDATION BLEND: credit\n"
	.string "terms available. The crest on the\l"
	.string "poster is the crest on the Board's\l"
	.string "notice.$"
