ParcelFernwickMart_MapScripts::
	.byte 0


ParcelFernwickMart_Clerk::
# 5 "data/maps/ParcelFernwickMart/scripts.pory"
	lock
# 6 "data/maps/ParcelFernwickMart/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelFernwickMart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/ParcelFernwickMart/scripts.pory"
	waitmessage
# 9 "data/maps/ParcelFernwickMart/scripts.pory"
	pokemart ParcelFernwickMart_Items
# 10 "data/maps/ParcelFernwickMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 11 "data/maps/ParcelFernwickMart/scripts.pory"
	release
	end


# 15 "data/maps/ParcelFernwickMart/scripts.pory"

# 16 "data/maps/ParcelFernwickMart/scripts.pory"
	.align 2
# 17 "data/maps/ParcelFernwickMart/scripts.pory"
ParcelFernwickMart_Items::
# 18 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 27 "data/maps/ParcelFernwickMart/scripts.pory"
	.2byte ITEM_NONE

ParcelFernwickMart_Customer::
# 31 "data/maps/ParcelFernwickMart/scripts.pory"
	lock
# 32 "data/maps/ParcelFernwickMart/scripts.pory"
	faceplayer
# 33 "data/maps/ParcelFernwickMart/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickMart_Customer_2
# 38 "data/maps/ParcelFernwickMart/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickMart_Customer_5
# 43 "data/maps/ParcelFernwickMart/scripts.pory"
	msgbox ParcelFernwickMart_Customer_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFernwickMart/scripts.pory"
	release
	end

ParcelFernwickMart_Customer_2:
# 34 "data/maps/ParcelFernwickMart/scripts.pory"
	msgbox ParcelFernwickMart_Customer_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFernwickMart/scripts.pory"
	release
	end

ParcelFernwickMart_Customer_5:
# 39 "data/maps/ParcelFernwickMart/scripts.pory"
	msgbox ParcelFernwickMart_Customer_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFernwickMart/scripts.pory"
	release
	end


ParcelFernwickMart_ReadShelf::
# 49 "data/maps/ParcelFernwickMart/scripts.pory"
	msgbox ParcelFernwickMart_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelFernwickMart_ReadKit::
# 54 "data/maps/ParcelFernwickMart/scripts.pory"
	msgbox ParcelFernwickMart_ReadKit_Text_0, MSGBOX_SIGN
	end


ParcelFernwickMart_Customer_Text_0:
# 34 "data/maps/ParcelFernwickMart/scripts.pory"
	.string "YOUNGSTER: REPELS are still on sale.\n"
	.string "The marsh still has a lot of WOOPER.\l"
	.string "Some things the hearing didn't fix. The\l"
	.string "WOOPER are fine about it.$"

ParcelFernwickMart_Customer_Text_1:
# 39 "data/maps/ParcelFernwickMart/scripts.pory"
	.string "YOUNGSTER: REPELS are off sale. The\n"
	.string "marsh has fewer WOOPER than it did.\p"
	.string "That's good, right? The clerk says it's\n"
	.string "good. He said it like a question.$"

ParcelFernwickMart_Customer_Text_2:
# 43 "data/maps/ParcelFernwickMart/scripts.pory"
	.string "YOUNGSTER: REPELS are on sale. The\n"
	.string "marsh has a lot of WOOPER.\p"
	.string "A LOT.$"

ParcelFernwickMart_ReadShelf_Text_0:
# 49 "data/maps/ParcelFernwickMart/scripts.pory"
	.string "Top shelf: REPELS, by the crate. A\n"
	.string "handwritten sign: FOR THE MARSH. NO\l"
	.string "REFUNDS ON WOOPER.$"

ParcelFernwickMart_ReadKit_Text_0:
# 54 "data/maps/ParcelFernwickMart/scripts.pory"
	.string "The middle shelf is Corps field kit:\n"
	.string "vials, labels, a flow gauge with a\l"
	.string "cracked face marked AS SEEN.$"
