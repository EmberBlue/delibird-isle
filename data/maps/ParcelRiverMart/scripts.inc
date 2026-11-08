ParcelRiverMart_MapScripts::
	.byte 0


ParcelRiverMart_Clerk::
# 4 "data/maps/ParcelRiverMart/scripts.pory"
	lock
# 5 "data/maps/ParcelRiverMart/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelRiverMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/ParcelRiverMart/scripts.pory"
	waitmessage
# 8 "data/maps/ParcelRiverMart/scripts.pory"
	pokemart ParcelRiverMart_Items
# 9 "data/maps/ParcelRiverMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/ParcelRiverMart/scripts.pory"
	release
	end


# 13 "data/maps/ParcelRiverMart/scripts.pory"

# 14 "data/maps/ParcelRiverMart/scripts.pory"
	.align 2
# 15 "data/maps/ParcelRiverMart/scripts.pory"
ParcelRiverMart_Items::
# 16 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 17 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 24 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 25 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 27 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/ParcelRiverMart/scripts.pory"
	.2byte ITEM_NONE

ParcelRiverMart_Customer::
# 31 "data/maps/ParcelRiverMart/scripts.pory"
	lock
# 32 "data/maps/ParcelRiverMart/scripts.pory"
	faceplayer
# 33 "data/maps/ParcelRiverMart/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverMart_Customer_2
# 38 "data/maps/ParcelRiverMart/scripts.pory"
	msgbox ParcelRiverMart_Customer_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/ParcelRiverMart/scripts.pory"
	release
	end

ParcelRiverMart_Customer_2:
# 34 "data/maps/ParcelRiverMart/scripts.pory"
	msgbox ParcelRiverMart_Customer_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelRiverMart/scripts.pory"
	release
	end


ParcelRiverMart_Customer_Text_0:
# 34 "data/maps/ParcelRiverMart/scripts.pory"
	.string "WOMAN: NET BALLS are still in. The\n"
	.string "river's full of things you'd want to\l"
	.string "catch before they're gone. Fewer of\l"
	.string "them going now, the clerk says. She says\l"
	.string "it like a question.$"

ParcelRiverMart_Customer_Text_1:
# 38 "data/maps/ParcelRiverMart/scripts.pory"
	.string "WOMAN: NET BALLS are in. The river's full\n"
	.string "of things you'd want to catch before\l"
	.string "they're gone.$"
