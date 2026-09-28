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
	msgbox ParcelFernwickMart_Customer_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwickMart/scripts.pory"
	release
	end


ParcelFernwickMart_Customer_Text_0:
# 33 "data/maps/ParcelFernwickMart/scripts.pory"
	.string "YOUNGSTER: REPELS are on sale. The\n"
	.string "marsh has a lot of WOOPER.\p"
	.string "A LOT.$"
