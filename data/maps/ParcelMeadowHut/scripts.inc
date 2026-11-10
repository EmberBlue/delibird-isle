ParcelMeadowHut_MapScripts::
	.byte 0


ParcelMeadowHut_Note::
# 7 "data/maps/ParcelMeadowHut/scripts.pory"
	msgbox ParcelMeadowHut_Note_Text_0, MSGBOX_SIGN
	end


ParcelMeadowHut_Register::
# 12 "data/maps/ParcelMeadowHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMeadowHut_Register_2
# 15 "data/maps/ParcelMeadowHut/scripts.pory"
	msgbox ParcelMeadowHut_Register_Text_1, MSGBOX_SIGN
ParcelMeadowHut_Register_1:
	end

ParcelMeadowHut_Register_2:
# 13 "data/maps/ParcelMeadowHut/scripts.pory"
	msgbox ParcelMeadowHut_Register_Text_0, MSGBOX_SIGN
	goto ParcelMeadowHut_Register_1


ParcelMeadowHut_KitList::
# 23 "data/maps/ParcelMeadowHut/scripts.pory"
	msgbox ParcelMeadowHut_KitList_Text_0, MSGBOX_SIGN
	end


ParcelMeadowHut_Note_Text_0:
# 7 "data/maps/ParcelMeadowHut/scripts.pory"
	.string "A feeding chart, in marker:\p"
	.string "DODUO -- anything. SHROOMISH -- don't.\n"
	.string "SEEDOT -- pretends it doesn't eat.\p"
	.string "LOTAD -- pool. CARVANHA -- POOL,\n"
	.string "CAREFULLY. NUMEL -- warm sand, will not\l"
	.string "move for food.\p"
	.string "ELECTRIKE -- catch it first.$"

ParcelMeadowHut_Register_Text_0:
# 13 "data/maps/ParcelMeadowHut/scripts.pory"
	.string "The meadow register, in RIN's hand. One\n"
	.string "line per animal: the day it came to the\l"
	.string "paddock, where from, who it chose, when.\l"
	.string "Most lines end in a dash.\p"
	.string "The seventh column was headed WAITING\n"
	.string "when the book was ruled. Someone has\l"
	.string "crossed the word out and written\l"
	.string "STAYING over it, in the same hand,\l"
	.string "recently. The ink is still a different\l"
	.string "black.$"

ParcelMeadowHut_Register_Text_1:
# 15 "data/maps/ParcelMeadowHut/scripts.pory"
	.string "The meadow register, in RIN's hand. One\n"
	.string "line per animal: the day it came to the\l"
	.string "paddock, where from, who it chose, when.\l"
	.string "Most lines end in a dash.\p"
	.string "The seventh column is headed WAITING.\n"
	.string "The dashes run down it for years. The\l"
	.string "book does not say how long a dash is\l"
	.string "allowed to be.$"

ParcelMeadowHut_KitList_Text_0:
# 23 "data/maps/ParcelMeadowHut/scripts.pory"
	.string "RIN's kit list, pinned by the door: what\n"
	.string "a ranger leaves with. Notebook. Pencil,\l"
	.string "two. A length of red cloth and a stake,\l"
	.string "for the first habitat you find that\l"
	.string "nobody has staked. Repels, for the\l"
	.string "walking. A partner, if one chooses you.\p"
	.string "At the bottom, added later: the Corps\n"
	.string "does not issue courage either. Bring\l"
	.string "your own.$"
