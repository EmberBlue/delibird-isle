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


ParcelMarshHut_Notebook::
# 33 "data/maps/ParcelMarshHut/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_HERON_MET, ParcelMarshHut_Notebook_2
# 37 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Notebook_Text_1, MSGBOX_SIGN
# 38 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Notebook_Text_2, MSGBOX_SIGN
# 39 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Notebook_Text_3, MSGBOX_SIGN
# 40 "data/maps/ParcelMarshHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMarshHut_Notebook_5
ParcelMarshHut_Notebook_4:
	end

ParcelMarshHut_Notebook_2:
# 34 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Notebook_Text_0, MSGBOX_SIGN
	end

ParcelMarshHut_Notebook_5:
# 41 "data/maps/ParcelMarshHut/scripts.pory"
	msgbox ParcelMarshHut_Notebook_Text_4, MSGBOX_SIGN
	goto ParcelMarshHut_Notebook_4


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

ParcelMarshHut_Notebook_Text_0:
# 34 "data/maps/ParcelMarshHut/scripts.pory"
	.string "A notebook on the table, closed,\n"
	.string "squared to the edge. You do not open\l"
	.string "another surveyor's notebook. Not until\l"
	.string "she has opened it to you.$"

ParcelMarshHut_Notebook_Text_1:
# 37 "data/maps/ParcelMarshHut/scripts.pory"
	.string "Her marsh notebook, open where she left\n"
	.string "it. The hand from your margins, smaller\l"
	.string "now, as if the paper were rationed.\p"
	.string "SPRING. Keystone pool. Egg masses: 6.\n"
	.string "Last spring 9. The spring before, 11. I\l"
	.string "write the real number first and then I\l"
	.string "sit with it. The sitting is the work I\l"
	.string "owe.\p"
	.string "I have modelled this curve twice in my\n"
	.string "life. Once to save a marsh and once to\l"
	.string "tell the truth. The second curve is\l"
	.string "lower than the first and it is the only\l"
	.string "one I will sign again.$"

ParcelMarshHut_Notebook_Text_2:
# 38 "data/maps/ParcelMarshHut/scripts.pory"
	.string "SUMMER. POLIWAG: 40. POLIWHIRL: 7.\n"
	.string "POLITOED: 1, calling, at dusk, from the\l"
	.string "far hummock. One is a number. One is also\l"
	.string "a sentence with nobody at the other\l"
	.string "end.\p"
	.string "The pool is a hand lower than the red\n"
	.string "cloth. I did not drive that cloth. ILEX\l"
	.string "did, the year I was busy being right. I\l"
	.string "have been measuring against her ever\l"
	.string "since. It is the only baseline I trust,\l"
	.string "including mine.$"

ParcelMarshHut_Notebook_Text_3:
# 39 "data/maps/ParcelMarshHut/scripts.pory"
	.string "AUTUMN. The road crew's flags are at the\n"
	.string "edge of the alder. They are not here for\l"
	.string "the marsh. They are here because the\l"
	.string "marsh is in the way of something. That\l"
	.string "is the whole history of this region in a\l"
	.string "sentence and I have spent thirty years\l"
	.string "writing it longer.\p"
	.string "WINTER. No count. Ice. I walked the edge\n"
	.string "and found the cloth and read the stake\l"
	.string "and wrote: present. A stake present is\l"
	.string "a reading. HOLLIS taught me that, or I\l"
	.string "taught her. We have stopped being able\l"
	.string "to tell.$"

ParcelMarshHut_Notebook_Text_4:
# 41 "data/maps/ParcelMarshHut/scripts.pory"
	.string "The last page is newer, the ink darker.\p"
	.string "It is in the record now, all of it, in the\n"
	.string "real numbers. I thought I would feel\l"
	.string "lighter. I feel accurate. That will do.\l"
	.string "Mind the frogs.$"
