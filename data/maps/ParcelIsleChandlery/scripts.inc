ParcelIsleChandlery_MapScripts::
	.byte 0


ParcelIsleChandlery_Kit::
# 7 "data/maps/ParcelIsleChandlery/scripts.pory"
	lock
# 8 "data/maps/ParcelIsleChandlery/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleChandlery_Kit_2
# 11 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleChandlery_Kit_3
# 14 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_2, MSGBOX_YESNO
ParcelIsleChandlery_Kit_1:
# 16 "data/maps/ParcelIsleChandlery/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelIsleChandlery_Kit_8
ParcelIsleChandlery_Kit_7:
# 19 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_3, MSGBOX_DEFAULT
# 20 "data/maps/ParcelIsleChandlery/scripts.pory"
	release
	end

ParcelIsleChandlery_Kit_2:
# 10 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_0, MSGBOX_YESNO
	goto ParcelIsleChandlery_Kit_1

ParcelIsleChandlery_Kit_3:
# 12 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Kit_Text_1, MSGBOX_YESNO
	goto ParcelIsleChandlery_Kit_1

ParcelIsleChandlery_Kit_8:
# 17 "data/maps/ParcelIsleChandlery/scripts.pory"
	pokemart ParcelIsleChandlery_Items
	goto ParcelIsleChandlery_Kit_7


# 24 "data/maps/ParcelIsleChandlery/scripts.pory"

# 25 "data/maps/ParcelIsleChandlery/scripts.pory"
	.align 2
# 26 "data/maps/ParcelIsleChandlery/scripts.pory"
ParcelIsleChandlery_Items::
# 27 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_POKE_BALL
# 28 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_NET_BALL
# 29 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_POTION
# 30 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 31 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 32 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_REPEL
# 34 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 35 "data/maps/ParcelIsleChandlery/scripts.pory"
	.2byte ITEM_NONE

ParcelIsleChandlery_Hjalmar::
# 39 "data/maps/ParcelIsleChandlery/scripts.pory"
	lock
# 40 "data/maps/ParcelIsleChandlery/scripts.pory"
	faceplayer
# 41 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleChandlery_Hjalmar_2
# 46 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleChandlery_Hjalmar_5
ParcelIsleChandlery_Hjalmar_4:
# 49 "data/maps/ParcelIsleChandlery/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleChandlery_Hjalmar_8
# 54 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Hjalmar_Text_3, MSGBOX_DEFAULT
# 56 "data/maps/ParcelIsleChandlery/scripts.pory"
	release
	end

ParcelIsleChandlery_Hjalmar_2:
# 42 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Hjalmar_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/ParcelIsleChandlery/scripts.pory"
	release
	end

ParcelIsleChandlery_Hjalmar_5:
# 47 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Hjalmar_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleChandlery_Hjalmar_4

ParcelIsleChandlery_Hjalmar_8:
# 50 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Hjalmar_Text_2, MSGBOX_DEFAULT
# 51 "data/maps/ParcelIsleChandlery/scripts.pory"
	release
	end


ParcelIsleChandlery_ReadShelf::
# 61 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelIsleChandlery_ReadLamps::
# 66 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_ReadLamps_Text_0, MSGBOX_SIGN
	end


ParcelIsleChandlery_Credit::
# 73 "data/maps/ParcelIsleChandlery/scripts.pory"
	msgbox ParcelIsleChandlery_Credit_Text_0, MSGBOX_SIGN
	end


ParcelIsleChandlery_Kit_Text_0:
# 10 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "KIT: I've sold more rope this week than\n"
	.string "all winter. Everyone wants to tie\l"
	.string "something down before the hearings.\p"
	.string "The shelf's stocked. Need anything?$"

ParcelIsleChandlery_Kit_Text_1:
# 12 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "KIT: RANGER stock's in! The RANGERS pay\n"
	.string "on time, which is more than I can say for\l"
	.string "some people.\p"
	.string "Need anything?$"

ParcelIsleChandlery_Kit_Text_2:
# 14 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "KIT: Off the ferry? Then you'll want a\n"
	.string "lamp, and you'll want to not ask about\l"
	.string "the weather.\p"
	.string "The shelf's stocked, when the boat\n"
	.string "remembers us. Need anything?$"

ParcelIsleChandlery_Kit_Text_3:
# 19 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "KIT: Mind the fog out there!$"

ParcelIsleChandlery_Hjalmar_Text_0:
# 42 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "HJALMAR: Rope, lamp oil, and the\n"
	.string "review's notices. KIT pins them up.\p"
	.string "The third's free, and people stand and\n"
	.string "read it before they buy the first two.$"

ParcelIsleChandlery_Hjalmar_Text_1:
# 47 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "HJALMAR: Rope, lamp oil, and gossip. KIT\n"
	.string "sells two of those.\p"
	.string "The third is free now, and it's all\n"
	.string "anyone's buying.$"

ParcelIsleChandlery_Hjalmar_Text_2:
# 50 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "HJALMAR: Rope, lamp oil, and the river\n"
	.string "minutes. KIT sells two of those. The\l"
	.string "third she lends, and it comes back with\l"
	.string "thumbprints.\p"
	.string "I've stood here two hours today. Worth\n"
	.string "every minute.$"

ParcelIsleChandlery_Hjalmar_Text_3:
# 54 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "HJALMAR: Rope, lamp oil, and gossip. KIT\n"
	.string "sells two of those.\p"
	.string "The third you get by standing here long\n"
	.string "enough. I've been here an hour.$"

ParcelIsleChandlery_ReadShelf_Text_0:
# 61 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "Rope by the fathom, lamp oil by the gill,\n"
	.string "and a shelf of RANGER stock -- REPELS,\l"
	.string "POTIONS -- that KIT dusts more often\l"
	.string "than the rope.$"

ParcelIsleChandlery_ReadLamps_Text_0:
# 66 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "A crate of fog lamps. A card on it: THE\n"
	.string "BOAT REMEMBERS US WHEN IT REMEMBERS\l"
	.string "US.$"

ParcelIsleChandlery_Credit_Text_0:
# 73 "data/maps/ParcelIsleChandlery/scripts.pory"
	.string "The credit ledger, kept where the\n"
	.string "counter hides it. Who owes, for what,\l"
	.string "since when.\p"
	.string "The since-whens cluster in one year,\n"
	.string "the year the dredge started working\l"
	.string "the Shoals. Rope, oil, hooks, a lantern.\l"
	.string "The chandler has not charged interest\l"
	.string "on any of it and has written PAID\l"
	.string "against two lines in a different ink,\l"
	.string "recently.\p"
	.string "The two lines are the oysterman's.\n"
	.string "Nobody paid them. The chandler decided\l"
	.string "they were.$"
