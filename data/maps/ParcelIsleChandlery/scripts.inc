ParcelIsleChandlery_MapScripts::
	.byte 0


ParcelIsleChandlery_Kit::
# 8 "data/maps/ParcelIsleChandlery/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleChandlery/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleChandlery_Kit_2
# 12 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleChandlery_Kit_3
# 15 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_2, MSGBOX_YESNO
ParcelIsleChandlery_Kit_1:
# 17 "data/maps/ParcelIsleChandlery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsleChandlery_Kit_8
ParcelIsleChandlery_Kit_7:
# 20 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_3, MSGBOX_DEFAULT
# 21 "data/maps/ParcelIsleChandlery/scripts.pory"
	release
	end

ParcelIsleChandlery_Kit_2:
# 11 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_0, MSGBOX_YESNO
	goto ParcelIsleChandlery_Kit_1

ParcelIsleChandlery_Kit_3:
# 13 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_1, MSGBOX_YESNO
	goto ParcelIsleChandlery_Kit_1

ParcelIsleChandlery_Kit_8:
# 18 "data/maps/ParcelIsleChandlery/scripts.pory"
	pokemart ParcelIsleChandlery_Items
	goto ParcelIsleChandlery_Kit_7


# 25 "data/maps/ParcelIsleChandlery/scripts.pory"

# 26 "data/maps/ParcelIsleChandlery/scripts.pory"
	.align 2
# 27 "data/maps/ParcelIsleChandlery/scripts.pory"
ParcelIsleChandlery_Items::
# 28 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_POKE_BALL
# 29 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_NET_BALL
# 30 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_POTION
# 31 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 32 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 34 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_REPEL
# 35 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 36 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_NONE

ParcelIsleChandlery_Hjalmar::
# 40 "data/maps/ParcelIsleChandlery/scripts.pory"
	lock
# 41 "data/maps/ParcelIsleChandlery/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleChandlery_Hjalmar_2
# 45 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Hjalmar_Text_1, MSGBOX_DEFAULT
ParcelIsleChandlery_Hjalmar_1:
# 47 "data/maps/ParcelIsleChandlery/scripts.pory"
	release
	end

ParcelIsleChandlery_Hjalmar_2:
# 43 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Hjalmar_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleChandlery_Hjalmar_1


ParcelIsleChandlery_Kit_Text_0:
# 11 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Kit: Sold more rope this week than all\n"
	.string "winter. Everybody's tying something\l"
	.string "down before the hearings.\p"
	.string "Shelf's stocked. The boat remembered\n"
	.string "us, for once. Need anything?$"

ParcelIsleChandlery_Kit_Text_1:
# 13 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Kit: Ranger stock's in -- the Corps\n"
	.string "pays on time, which is more than I can\l"
	.string "say for the fleet.\p"
	.string "Don't tell Ossian I said fleet. Need\n"
	.string "anything?$"

ParcelIsleChandlery_Kit_Text_2:
# 15 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Kit: Off the ferry? Then you'll want a\n"
	.string "lamp and you'll want to not ask about\l"
	.string "the weather.\p"
	.string "The shelf's stocked, when the boat\n"
	.string "remembers us. Need supplies?$"

ParcelIsleChandlery_Kit_Text_3:
# 20 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Kit: Mind the fog out there.$"

ParcelIsleChandlery_Hjalmar_Text_0:
# 43 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Hjalmar: Rope, lamp oil, and news. Kit\n"
	.string "sells two of those. The third's free now,\l"
	.string "and it's all anyone's buying.$"

ParcelIsleChandlery_Hjalmar_Text_1:
# 45 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Hjalmar: Rope, lamp oil, and news. Kit\n"
	.string "sells two of those.\p"
	.string "The third you get for free by standing\n"
	.string "here long enough. I've been here an\l"
	.string "hour.$"
