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
