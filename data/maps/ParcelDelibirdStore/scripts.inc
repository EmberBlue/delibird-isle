ParcelDelibirdStore_MapScripts::
	.byte 0


ParcelDelibirdStore_Clerk::
# 7 "data/maps/ParcelDelibirdStore/scripts.pory"
	lock
# 8 "data/maps/ParcelDelibirdStore/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelDelibirdStore/scripts.pory"
	message gText_HowMayIServeYou
# 10 "data/maps/ParcelDelibirdStore/scripts.pory"
	waitmessage
# 11 "data/maps/ParcelDelibirdStore/scripts.pory"
	pokemart ParcelDelibirdStore_Items
# 12 "data/maps/ParcelDelibirdStore/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/ParcelDelibirdStore/scripts.pory"
	release
	end


# 16 "data/maps/ParcelDelibirdStore/scripts.pory"

# 17 "data/maps/ParcelDelibirdStore/scripts.pory"
	.align 2
# 18 "data/maps/ParcelDelibirdStore/scripts.pory"
ParcelDelibirdStore_Items::
# 19 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 21 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_REVIVE
# 24 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 25 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 26 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 27 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/ParcelDelibirdStore/scripts.pory"
	.2byte ITEM_NONE

ParcelDelibirdStore_Customer::
# 32 "data/maps/ParcelDelibirdStore/scripts.pory"
	lock
# 33 "data/maps/ParcelDelibirdStore/scripts.pory"
	faceplayer
# 34 "data/maps/ParcelDelibirdStore/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelDelibirdStore_Customer_2
# 37 "data/maps/ParcelDelibirdStore/scripts.pory"
	msgbox ParcelDelibirdStore_Customer_Text_1, MSGBOX_DEFAULT
ParcelDelibirdStore_Customer_1:
# 39 "data/maps/ParcelDelibirdStore/scripts.pory"
	release
	end

ParcelDelibirdStore_Customer_2:
# 35 "data/maps/ParcelDelibirdStore/scripts.pory"
	msgbox ParcelDelibirdStore_Customer_Text_0, MSGBOX_DEFAULT
	goto ParcelDelibirdStore_Customer_1


ParcelDelibirdStore_Girl::
# 44 "data/maps/ParcelDelibirdStore/scripts.pory"
	lock
# 45 "data/maps/ParcelDelibirdStore/scripts.pory"
	faceplayer
# 46 "data/maps/ParcelDelibirdStore/scripts.pory"
	msgbox ParcelDelibirdStore_Girl_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/ParcelDelibirdStore/scripts.pory"
	release
	end


ParcelDelibirdStore_Shelf::
# 52 "data/maps/ParcelDelibirdStore/scripts.pory"
	msgbox ParcelDelibirdStore_Shelf_Text_0, MSGBOX_SIGN
	end


ParcelDelibirdStore_Customer_Text_0:
# 35 "data/maps/ParcelDelibirdStore/scripts.pory"
	.string "FISHER: The boat brought newspapers.\n"
	.string "Your hearing is on the second page.\p"
	.string "The first page is the weather. Fair\n"
	.string "enough. Up here it always is.$"

ParcelDelibirdStore_Customer_Text_1:
# 37 "data/maps/ParcelDelibirdStore/scripts.pory"
	.string "FISHER: The store is the one place on\n"
	.string "the island that keeps accounts. Has to.\l"
	.string "The mainland sends a bill.\p"
	.string "But you'll notice nothing on the bottom\n"
	.string "shelf has a price. That's the shelf for\l"
	.string "when you can't.$"

ParcelDelibirdStore_Girl_Text_0:
# 46 "data/maps/ParcelDelibirdStore/scripts.pory"
	.string "GIRL: I'm allowed one thing. I've been\n"
	.string "choosing since the boat came in.\p"
	.string "It's between the red string and the\n"
	.string "liquorice. The string lasts longer. The\l"
	.string "liquorice is liquorice.$"

ParcelDelibirdStore_Shelf_Text_0:
# 52 "data/maps/ParcelDelibirdStore/scripts.pory"
	.string "ICE HEAL, a full row, dusty. A card:\n"
	.string "REDUCED.\p"
	.string "Nobody on the island has needed one in\n"
	.string "three winters.$"
