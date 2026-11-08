ParcelCoastMart_MapScripts::
	.byte 0


ParcelCoastMart_Clerk::
# 4 "data/maps/ParcelCoastMart/scripts.pory"
	lock
# 5 "data/maps/ParcelCoastMart/scripts.pory"
	faceplayer
# 6 "data/maps/ParcelCoastMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/ParcelCoastMart/scripts.pory"
	waitmessage
# 8 "data/maps/ParcelCoastMart/scripts.pory"
	pokemart ParcelCoastMart_Items
# 9 "data/maps/ParcelCoastMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 10 "data/maps/ParcelCoastMart/scripts.pory"
	release
	end


# 13 "data/maps/ParcelCoastMart/scripts.pory"

# 14 "data/maps/ParcelCoastMart/scripts.pory"
	.align 2
# 15 "data/maps/ParcelCoastMart/scripts.pory"
ParcelCoastMart_Items::
# 16 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 17 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 20 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 23 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_REVIVE
# 24 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 25 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 26 "data/maps/ParcelCoastMart/scripts.pory"
	.2byte ITEM_NONE

ParcelCoastMart_Customer::
# 29 "data/maps/ParcelCoastMart/scripts.pory"
	lock
# 30 "data/maps/ParcelCoastMart/scripts.pory"
	faceplayer
# 31 "data/maps/ParcelCoastMart/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastMart_Customer_2
# 36 "data/maps/ParcelCoastMart/scripts.pory"
	msgbox ParcelCoastMart_Customer_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/ParcelCoastMart/scripts.pory"
	release
	end

ParcelCoastMart_Customer_2:
# 32 "data/maps/ParcelCoastMart/scripts.pory"
	msgbox ParcelCoastMart_Customer_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelCoastMart/scripts.pory"
	release
	end


ParcelCoastMart_Customer_Text_0:
# 32 "data/maps/ParcelCoastMart/scripts.pory"
	.string "SAILOR: DIVE BALLS. Bought one. The\n"
	.string "clerk asked what for. I said the review\l"
	.string "says there's a nursery on the bottom. I\l"
	.string "want to see a nursery.$"

ParcelCoastMart_Customer_Text_1:
# 36 "data/maps/ParcelCoastMart/scripts.pory"
	.string "SAILOR: DIVE BALLS. For what, I asked.\n"
	.string "The clerk said for the fish. I said\l"
	.string "there's no fish. She said that's not her\l"
	.string "department.$"
