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
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverDepot_Buyer_5
# 18 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Buyer_2:
# 9 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Buyer_5:
# 14 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Farmer::
# 23 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 24 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverDepot_Farmer_2
# 30 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverDepot_Farmer_5
# 35 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Farmer_2:
# 26 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Farmer_5:
# 31 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Board::
# 40 "data/maps/ParcelRiverDepot/scripts.pory"
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
# 14 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Credit's extended to next\n"
	.string "season for everyone, no questions. The\l"
	.string "FOUNDATION's being generous. The\l"
	.string "FOUNDATION's always generous the\l"
	.string "season after a hard one.\p"
	.string "Fertiliser's on the pallet. The HAUKFELL\n"
	.string "grant forms are on the counter. Both\l"
	.string "good offers.$"

ParcelRiverDepot_Buyer_Text_2:
# 18 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Produce by weight, paid same\n"
	.string "day, no haggling, no questions. That's\l"
	.string "the FOUNDATION offer. It's a good\l"
	.string "offer. Ask anyone who's taken it.\p"
	.string "Fertiliser's on the pallet. Credit\n"
	.string "available against next season.\l"
	.string "Everyone takes the credit.$"

ParcelRiverDepot_Farmer_Text_0:
# 26 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: The depot's every day and now\n"
	.string "it pays the floor. The market pays more\l"
	.string "again. I split between them. Having a\l"
	.string "choice is the thing. I'd forgotten the\l"
	.string "thing.$"

ParcelRiverDepot_Farmer_Text_1:
# 31 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: Sold to the depot again. The\n"
	.string "market's one day a week, and the hill\l"
	.string "people are coming down to it with\l"
	.string "nothing to sell and no money to buy.\p"
	.string "I gave a sack away last week. First\n"
	.string "time. Felt like something. Don't know\l"
	.string "what.$"

ParcelRiverDepot_Farmer_Text_2:
# 35 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: I sell here because the market\n"
	.string "pays less and the market's one day a\l"
	.string "week. The depot's every day. That's all.\l"
	.string "That's the whole reason. It's enough.$"

ParcelRiverDepot_Board_Text_0:
# 40 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "PRICES, POSTED. Trout: by weight,\n"
	.string "Foundation rate. Greens: Foundation\l"
	.string "rate. Eggs: Foundation rate.\p"
	.string "FERTILISER, FOUNDATION BLEND: credit\n"
	.string "terms available. The crest on the\l"
	.string "poster is the crest on the Board's\l"
	.string "notice.$"
