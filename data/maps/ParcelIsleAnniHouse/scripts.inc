ParcelIsleAnniHouse_MapScripts::
	.byte 0


ParcelIsleAnniHouse_Piet::
# 8 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleAnniHouse_Piet_3
ParcelIsleAnniHouse_Piet_1:
# 15 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleAnniHouse_Piet_7
# 17 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsleAnniHouse_Piet_8
# 20 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_3, MSGBOX_DEFAULT
ParcelIsleAnniHouse_Piet_6:
# 22 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	release
	end

ParcelIsleAnniHouse_Piet_2:
# 11 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	release
	end

ParcelIsleAnniHouse_Piet_3:
# 10 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsleAnniHouse_Piet_2
	goto ParcelIsleAnniHouse_Piet_1

ParcelIsleAnniHouse_Piet_7:
# 16 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleAnniHouse_Piet_6

ParcelIsleAnniHouse_Piet_8:
# 18 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleAnniHouse_Piet_6


ParcelIsleAnniHouse_ReadBed::
# 27 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_ReadBed_Text_0, MSGBOX_SIGN
	end


ParcelIsleAnniHouse_ReadShelf::
# 32 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelIsleAnniHouse_PaperPietsList::
# 39 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleAnniHouse_PaperPietsList_2
# 42 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_PaperPietsList_Text_1, MSGBOX_SIGN
ParcelIsleAnniHouse_PaperPietsList_1:
	end

ParcelIsleAnniHouse_PaperPietsList_2:
# 40 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_PaperPietsList_Text_0, MSGBOX_SIGN
	goto ParcelIsleAnniHouse_PaperPietsList_1


ParcelIsleAnniHouse_Piet_Text_0:
# 11 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "PIET: I'm better. I count the boats\n"
	.string "from the jetty now. Mom lets me.\l"
	.string "Fourteen today.\p"
	.string "ROLF says it was twenty when he\n"
	.string "started. I wrote both.$"

ParcelIsleAnniHouse_Piet_Text_1:
# 16 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "PIET: Mom read the frog part out loud.\n"
	.string "Twice for ROLF and once more for me.\p"
	.string "When I'm better I'm going to count\n"
	.string "something. Everything. I've got a list\l"
	.string "started.$"

ParcelIsleAnniHouse_Piet_Text_2:
# 18 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "PIET: You took the net down to TOBIN!\n"
	.string "Mom said you didn't even complain about\l"
	.string "the jetty.\p"
	.string "I'm not allowed on the jetty. 'When\n"
	.string "you're better.' That's what everyone\l"
	.string "says. When.$"

ParcelIsleAnniHouse_Piet_Text_3:
# 20 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "PIET: The fog gets in my chest. That's\n"
	.string "what the doctor says. He says it like\l"
	.string "it's the fog's fault.\p"
	.string "Mom says the fog's been here longer\n"
	.string "than the doctor.$"

ParcelIsleAnniHouse_ReadBed_Text_0:
# 27 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "A child's bed with the blanket turned\n"
	.string "back and a book face down on the pillow.\l"
	.string "The book is about boats. The pillow is\l"
	.string "damp.$"

ParcelIsleAnniHouse_ReadShelf_Text_0:
# 32 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "A shelf of medicines in a row, with the\n"
	.string "doctor's note weighted under the first\l"
	.string "bottle. 'Fog.'\p"
	.string "Underlined, by somebody else.$"

ParcelIsleAnniHouse_PaperPietsList_Text_0:
# 40 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "A list in a child's hand, taped to the\n"
	.string "bed frame: THINGS TO COUNT WHEN I'M\l"
	.string "BETTER. Boats, ticked. Gulls on the\l"
	.string "stack, ticked, with a number. Stairs to\l"
	.string "the jetty, ticked twice.\p"
	.string "The fog has a number after it now: days\n"
	.string "without. The number is seven. He wrote\l"
	.string "it very carefully.$"

ParcelIsleAnniHouse_PaperPietsList_Text_1:
# 42 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "A list in a child's hand, taped to the\n"
	.string "bed frame: THINGS TO COUNT WHEN I'M\l"
	.string "BETTER. Boats. Gulls on the stack.\l"
	.string "Stairs to the jetty. The fog.\p"
	.string "The fog has a question mark after it. He\n"
	.string "has not worked out how yet.$"
