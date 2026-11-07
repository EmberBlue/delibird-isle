ParcelRiverDepot_MapScripts::
	.byte 0


ParcelRiverDepot_Buyer::
# 6 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 7 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Farmer::
# 13 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 14 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 15 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Board::
# 20 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Board_Text_0, MSGBOX_SIGN
	end


ParcelRiverDepot_Buyer_Text_0:
# 8 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Produce by weight, paid same\n"
	.string "day, no haggling, no questions. That's\l"
	.string "the FOUNDATION offer. It's a good\l"
	.string "offer. Ask anyone who's taken it.\p"
	.string "Fertiliser's on the pallet. Credit\n"
	.string "available against next season.\l"
	.string "Everyone takes the credit.$"

ParcelRiverDepot_Farmer_Text_0:
# 15 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: I sell here because the market\n"
	.string "pays less and the market's one day a\l"
	.string "week. The depot's every day. That's all.\l"
	.string "That's the whole reason. It's enough.$"

ParcelRiverDepot_Board_Text_0:
# 20 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "PRICES, POSTED. Trout: by weight,\n"
	.string "Foundation rate. Greens: Foundation\l"
	.string "rate. Eggs: Foundation rate.\p"
	.string "FERTILISER, FOUNDATION BLEND: credit\n"
	.string "terms available. The crest on the\l"
	.string "poster is the crest on the Board's\l"
	.string "notice.$"
