ParcelTownLodging_MapScripts::
	.byte 0


ParcelTownLodging_Keeper::
# 9 "data/maps/ParcelTownLodging/scripts.pory"
	lock
# 10 "data/maps/ParcelTownLodging/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_1, MSGBOX_YESNO
# 13 "data/maps/ParcelTownLodging/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelTownLodging_Keeper_2
# 20 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_3, MSGBOX_DEFAULT
ParcelTownLodging_Keeper_1:
# 22 "data/maps/ParcelTownLodging/scripts.pory"
	release
	end

ParcelTownLodging_Keeper_2:
# 14 "data/maps/ParcelTownLodging/scripts.pory"
	closemessage
# 15 "data/maps/ParcelTownLodging/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/ParcelTownLodging/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 17 "data/maps/ParcelTownLodging/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Keeper_Text_2, MSGBOX_DEFAULT
	goto ParcelTownLodging_Keeper_1


ParcelTownLodging_Letter::
# 30 "data/maps/ParcelTownLodging/scripts.pory"
	lock
# 31 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Letter_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Letter_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Letter_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Letter_Text_3, MSGBOX_DEFAULT
# 35 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_Letter_Text_4, MSGBOX_DEFAULT
# 36 "data/maps/ParcelTownLodging/scripts.pory"
	release
	end


ParcelTownLodging_ReadDresser::
# 41 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelTownLodging_FieldGuide::
# 48 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_0, MSGBOX_SIGN
# 49 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_1, MSGBOX_SIGN
# 50 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_2, MSGBOX_SIGN
# 51 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_3, MSGBOX_SIGN
# 52 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_4, MSGBOX_SIGN
# 53 "data/maps/ParcelTownLodging/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelTownLodging_FieldGuide_2
# 56 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_6, MSGBOX_SIGN
ParcelTownLodging_FieldGuide_1:
	end

ParcelTownLodging_FieldGuide_2:
# 54 "data/maps/ParcelTownLodging/scripts.pory"
	msgbox ParcelTownLodging_FieldGuide_Text_5, MSGBOX_SIGN
	goto ParcelTownLodging_FieldGuide_1


ParcelTownLodging_Keeper_Text_0:
# 11 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Keeper: The scientist's room is paid\n"
	.string "through the season.\p"
	.string "She insisted. Before.$"

ParcelTownLodging_Keeper_Text_1:
# 12 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Keeper: You look wrung out.\n"
	.string "Rest a while?$"

ParcelTownLodging_Keeper_Text_2:
# 18 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Morning comes gray and early.\p"
	.string "Your partner looks rested.\n"
	.string "So, almost, do you.$"

ParcelTownLodging_Keeper_Text_3:
# 20 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Keeper: The kettle's always on.$"

ParcelTownLodging_Letter_Text_0:
# 31 "data/maps/ParcelTownLodging/scripts.pory"
	.string "A letter lies on the desk, addressed in\n"
	.string "a careful field-hand you know from\l"
	.string "years of margins.$"

ParcelTownLodging_Letter_Text_1:
# 32 "data/maps/ParcelTownLodging/scripts.pory"
	.string "You don't need to be brilliant.\n"
	.string "You need to be honest.$"

ParcelTownLodging_Letter_Text_2:
# 33 "data/maps/ParcelTownLodging/scripts.pory"
	.string "If the data is real, people will try to\n"
	.string "bury it. Not because they're\l"
	.string "evil--because it threatens what\l"
	.string "they've built.$"

ParcelTownLodging_Letter_Text_3:
# 34 "data/maps/ParcelTownLodging/scripts.pory"
	.string "Meet me at the lab in the morning.\n"
	.string "Come early. Bring curiosity.\n"
	.string "Bring boots.$"

ParcelTownLodging_Letter_Text_4:
# 35 "data/maps/ParcelTownLodging/scripts.pory"
	.string "The letter is dated three weeks ago.$"

ParcelTownLodging_ReadDresser_Text_0:
# 41 "data/maps/ParcelTownLodging/scripts.pory"
	.string "A card with your name on it, in an\n"
	.string "innkeeper's hand, propped against the\l"
	.string "mirror. Three weeks old. Dusted around\l"
	.string "every week.$"

ParcelTownLodging_FieldGuide_Text_0:
# 48 "data/maps/ParcelTownLodging/scripts.pory"
	.string "On the shelf by the window, a book the\n"
	.string "lodging keeper says every room has: A\l"
	.string "FIELD GUIDE TO THE WETLAND BIRDS AND\l"
	.string "AMPHIBIANS OF SKALDMERE. The author's\l"
	.string "name is one word. The drawings are hers.\p"
	.string "FOREWORD. I have counted most of what\n"
	.string "is in this book by hand, in boots, over\l"
	.string "twenty years. Where I give a number it\l"
	.string "is a number I stood in the water for.\l"
	.string "Where I give an opinion I have tried to\l"
	.string "say so. The reader should hold me to\l"
	.string "both.$"

ParcelTownLodging_FieldGuide_Text_1:
# 49 "data/maps/ParcelTownLodging/scripts.pory"
	.string "WOOPER. The commonest thing in the\n"
	.string "lower marshes and the most useful. It\l"
	.string "will not tolerate a falling water table\l"
	.string "for more than a season, so a turf with\l"
	.string "WOOPER on it is a turf with water under\l"
	.string "it. Count them in the wet months, on the\l"
	.string "same morning each year. The count is\l"
	.string "the gauge. I have never found a better\l"
	.string "one, and I have tried several that cost\l"
	.string "more.\p"
	.string "Drawing: a WOOPER from above, the gills\n"
	.string "exact, the eyes slightly too kind.$"

ParcelTownLodging_FieldGuide_Text_2:
# 50 "data/maps/ParcelTownLodging/scripts.pory"
	.string "WINGULL. Pairs on the Fernwick pond:\n"
	.string "twenty-eight in my first spring,\l"
	.string "twenty-eight in my tenth. I give the\l"
	.string "number with a warning. A count that\l"
	.string "does not change while the water does is\l"
	.string "not a healthy count; it is a crowd. Read\l"
	.string "the water first and the birds second, or\l"
	.string "the birds will flatter you.\p"
	.string "Drawing: two WINGULL on a post, the\n"
	.string "post leaning.$"

ParcelTownLodging_FieldGuide_Text_3:
# 51 "data/maps/ParcelTownLodging/scripts.pory"
	.string "VOLBEAT and ILLUMISE. The dusk count\n"
	.string "at the Reedmere hide is the oldest\l"
	.string "count the Survey keeps and I would not\l"
	.string "change its method for anything. A\l"
	.string "person sits, and the lights come, and\l"
	.string "the person writes the number. No\l"
	.string "instrument improves it. The lights have\l"
	.string "been fewer every year I have sat there,\l"
	.string "and I have written the fewer number\l"
	.string "every year, and that is the whole of the\l"
	.string "method.\p"
	.string "Drawing: eleven small marks over a reed\n"
	.string "bed, one circled.$"

ParcelTownLodging_FieldGuide_Text_4:
# 52 "data/maps/ParcelTownLodging/scripts.pory"
	.string "DELIBIRD. Not a wetland bird and not\n"
	.string "mine to describe, but it is in this book\l"
	.string "because the islanders asked, and\l"
	.string "because the island is where the cold\l"
	.string "goes to be counted. They say it brings\l"
	.string "food through storms to the door that\l"
	.string "needs it. I have seen it do so. I record\l"
	.string "the behaviour and decline, for once, to\l"
	.string "explain it.\p"
	.string "Drawing: a DELIBIRD at a cabin door in\n"
	.string "snow, the sack half empty.$"

ParcelTownLodging_FieldGuide_Text_5:
# 54 "data/maps/ParcelTownLodging/scripts.pory"
	.string "POLIWAG, POLIWHIRL, POLITOED. The\n"
	.string "keystone of the freshwater marsh and\l"
	.string "the reason for half this book. I have\l"
	.string "recorded the Mahogany population's\l"
	.string "recovery elsewhere (see the appendix);\l"
	.string "the Skaldmere populations hold where\l"
	.string "the slack water holds, and nowhere else.\p"
	.string "In the margin of this page, in pencil\n"
	.string "newer than the print, in the hand from\l"
	.string "your notebook: No. 41. 41. 39. 40. The\l"
	.string "appendix is wrong. The frogs were not.\l"
	.string "H.\p"
	.string "The lodging keeper does not know when\n"
	.string "it was written. You do.$"

ParcelTownLodging_FieldGuide_Text_6:
# 56 "data/maps/ParcelTownLodging/scripts.pory"
	.string "POLIWAG, POLIWHIRL, POLITOED. The\n"
	.string "keystone of the freshwater marsh and\l"
	.string "the reason for half this book. I have\l"
	.string "recorded the Mahogany population's\l"
	.string "recovery elsewhere (see the appendix);\l"
	.string "the Skaldmere populations hold where\l"
	.string "the slack water holds, and nowhere else.\p"
	.string "Count them by stage, not in total.\n"
	.string "Totals hide the year the eggs failed.\p"
	.string "The appendix page has been read so\n"
	.string "often the corner is soft. Nobody has\l"
	.string "written anything on it.$"
