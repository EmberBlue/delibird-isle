ParcelMarshHut_MapScripts::
	.byte 0


ParcelMarshHut_Politoed::
# 5 "data/maps/ParcelMarshHut/scripts.pory"
	lock
# 6 "data/maps/ParcelMarshHut/scripts.pory"
	faceplayer
# 7 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Politoed_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/ParcelMarshHut/scripts.pory"
	release
	end


ParcelMarshHut_Tally::
# 12 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Tally_Text_0, MSGBOX_SIGN
	end


ParcelMarshHut_Shelf::
# 16 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Shelf_Text_0, MSGBOX_SIGN
	end


ParcelMarshHut_Sheet::
# 23 "data/maps/ParcelMarshHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMarshHut_Sheet_1
# 26 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Sheet_Text_1, MSGBOX_SIGN
	return

ParcelMarshHut_Sheet_1:
# 24 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Sheet_Text_0, MSGBOX_SIGN
	return


ParcelMarshHut_Politoed_Text_0:
# 7 "data/maps/ParcelMarshHut/scripts.pory"
	.string "POLITOED: It watches the door the way\n"
	.string "she watches the water. It is not going\l"
	.string "anywhere either.$"

ParcelMarshHut_Tally_Text_0:
# 12 "data/maps/ParcelMarshHut/scripts.pory"
	.string "Tally sheets, pinned in rows. One mark\n"
	.string "per POLIWAG per morning, in a hand you\l"
	.string "know from a hundred margins.\p"
	.string "The columns get shorter toward the\n"
	.string "right. The last sheet has a date on it\l"
	.string "and nothing else yet.$"

ParcelMarshHut_Shelf_Text_0:
# 16 "data/maps/ParcelMarshHut/scripts.pory"
	.string "A shelf: a lamp, a tin of tea, a folded\n"
	.string "letter addressed to the Corps station\l"
	.string "at FERNWICK. 'To be opened when the\l"
	.string "count reaches zero.' It is sealed.$"

ParcelMarshHut_Sheet_Text_0:
# 24 "data/maps/ParcelMarshHut/scripts.pory"
	.string "Her survey sheet, squared to the edge\n"
	.string "of the table the way she squared\l"
	.string "everything. The marsh, the keystone\l"
	.string "pool, the frogs by stage.\p"
	.string "Egg, tadpole, POLIWAG, POLIWHIRL,\n"
	.string "POLITOED. Each with a count and a date.\l"
	.string "The counts fall down the page in her\l"
	.string "hand, year by year, the same hand as the\l"
	.string "margins of your notebook, older and\l"
	.string "steadier.\p"
	.string "The last line in her hand is the day you\n"
	.string "came. The count is right. You were there\l"
	.string "for it.\p"
	.string "Under it, one more line in a different\n"
	.string "hand, dated after. The count again,\l"
	.string "lower by two. The hand is yours.\p"
	.string "There is room on the sheet for a long\n"
	.string "time yet.$"

ParcelMarshHut_Sheet_Text_1:
# 26 "data/maps/ParcelMarshHut/scripts.pory"
	.string "A survey sheet on the table, held flat\n"
	.string "with a stone from the shore. The marsh,\l"
	.string "the keystone pool, the frogs by stage.\p"
	.string "Egg, tadpole, POLIWAG, POLIWHIRL,\n"
	.string "POLITOED. A count and a date for each,\l"
	.string "in the hand from the margins of your\l"
	.string "notebook. The counts fall down the\l"
	.string "page, season by season, and the hand\l"
	.string "does not change.\p"
	.string "The current line is half written. The\n"
	.string "date is today's.$"
