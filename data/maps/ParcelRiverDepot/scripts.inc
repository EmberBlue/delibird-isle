ParcelRiverDepot_MapScripts::
	.byte 0


ParcelRiverDepot_Buyer::
# 6 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 7 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverDepot_Buyer_2
# 13 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverDepot_Buyer_5
# 18 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverDepot_Buyer_8
# 23 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/ParcelRiverDepot/scripts.pory"
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

ParcelRiverDepot_Buyer_8:
# 19 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Buyer_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Farmer::
# 28 "data/maps/ParcelRiverDepot/scripts.pory"
	lock
# 29 "data/maps/ParcelRiverDepot/scripts.pory"
	faceplayer
# 30 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverDepot_Farmer_2
# 35 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverDepot_Farmer_5
# 40 "data/maps/ParcelRiverDepot/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverDepot_Farmer_8
# 45 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Farmer_2:
# 31 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Farmer_5:
# 36 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end

ParcelRiverDepot_Farmer_8:
# 41 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Farmer_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/ParcelRiverDepot/scripts.pory"
	release
	end


ParcelRiverDepot_Board::
# 50 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_Board_Text_0, MSGBOX_SIGN
	end


ParcelRiverDepot_WeighBook::
# 57 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_WeighBook_Text_0, MSGBOX_SIGN
	end


ParcelRiverDepot_GradingCard::
# 64 "data/maps/ParcelRiverDepot/scripts.pory"
	msgbox ParcelRiverDepot_GradingCard_Text_0, MSGBOX_SIGN
	end


ParcelRiverDepot_Buyer_Text_0:
# 9 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Floor price, same day, and the\n"
	.string "market pays more on Fridays. Head\l"
	.string "office has stopped asking why the\l"
	.string "farmers split.\p"
	.string "I know why. Having a choice is the\n"
	.string "product.$"

ParcelRiverDepot_Buyer_Text_1:
# 14 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Produce by weight, same day, no\n"
	.string "haggling. The review put a floor under\l"
	.string "the price. I pay the floor. Head office\l"
	.string "hates the floor. I don't mind it. It's a\l"
	.string "floor.$"

ParcelRiverDepot_Buyer_Text_2:
# 19 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Credit's extended to next\n"
	.string "season for everyone, no questions. The\l"
	.string "FOUNDATION's being generous. The\l"
	.string "FOUNDATION's always generous the\l"
	.string "season after a hard one.\p"
	.string "Fertiliser's on the pallet. The HAUKFELL\n"
	.string "grant forms are on the counter. Both\l"
	.string "good offers.$"

ParcelRiverDepot_Buyer_Text_3:
# 23 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "BUYER: Produce by weight, paid same\n"
	.string "day, no haggling, no questions. That's\l"
	.string "the FOUNDATION offer. It's a good\l"
	.string "offer. Ask anyone who's taken it.\p"
	.string "Fertiliser's on the pallet. Credit\n"
	.string "available against next season.\l"
	.string "Everyone takes the credit.$"

ParcelRiverDepot_Farmer_Text_0:
# 31 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: Depot on weekdays, market on\n"
	.string "Fridays, the hill people with something\l"
	.string "on the table now. Potatoes. Theirs.\l"
	.string "Grown in the valley plots.\p"
	.string "I bought some. Good potatoes.$"

ParcelRiverDepot_Farmer_Text_1:
# 36 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: The depot's every day and now\n"
	.string "it pays the floor. The market pays more\l"
	.string "again. I split between them. Having a\l"
	.string "choice is the thing. I'd forgotten the\l"
	.string "thing.$"

ParcelRiverDepot_Farmer_Text_2:
# 41 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: Sold to the depot again. The\n"
	.string "market's one day a week, and the hill\l"
	.string "people are coming down to it with\l"
	.string "nothing to sell and no money to buy.\p"
	.string "I gave a sack away last week. First\n"
	.string "time. Felt like something. Don't know\l"
	.string "what.$"

ParcelRiverDepot_Farmer_Text_3:
# 45 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "FARMER: I sell here because the market\n"
	.string "pays less and the market's one day a\l"
	.string "week. The depot's every day. That's all.\l"
	.string "That's the whole reason. It's enough.$"

ParcelRiverDepot_Board_Text_0:
# 50 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "PRICES, POSTED. Trout: by weight,\n"
	.string "Foundation rate. Greens: Foundation\l"
	.string "rate. Eggs: Foundation rate.\p"
	.string "FERTILISER, FOUNDATION BLEND: credit\n"
	.string "terms available. The crest on the\l"
	.string "poster is the crest on the Board's\l"
	.string "notice.$"

ParcelRiverDepot_WeighBook_Text_0:
# 57 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "The buyer's weigh book, open on the\n"
	.string "counter. Trout, by the basket, by the\l"
	.string "week.\p"
	.string "The weights go down the page the way\n"
	.string "the river's gauge goes down the ford: a\l"
	.string "little, then a little, then a line where\l"
	.string "the buyer started weighing in halves\l"
	.string "because wholes looked too bare.\p"
	.string "The FOUNDATION RATE column never\n"
	.string "moves. It is the only straight line in\l"
	.string "the book, and the farmers are paid off\l"
	.string "it, and they know.$"

ParcelRiverDepot_GradingCard_Text_0:
# 64 "data/maps/ParcelRiverDepot/scripts.pory"
	.string "The depot's grading card, nailed to the\n"
	.string "post: produce by class, price by class,\l"
	.string "the FOUNDATION crest at the top. Class\l"
	.string "one, class two, and a third class added\l"
	.string "in pen: hill.\p"
	.string "Hill is what the Haukfell families bring\n"
	.string "down. It is priced below two. Someone\l"
	.string "has written beside it: they grew it in\l"
	.string "the snow. Pay two.$"
