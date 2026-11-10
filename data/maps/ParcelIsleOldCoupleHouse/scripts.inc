ParcelIsleOldCoupleHouse_MapScripts::
	.byte 0


ParcelIsleOldCoupleHouse_Aud::
# 8 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleOldCoupleHouse_Aud_2
# 15 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleOldCoupleHouse_Aud_5
# 17 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleOldCoupleHouse_Aud_6
# 19 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleOldCoupleHouse_Aud_7
# 22 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_4, MSGBOX_DEFAULT
ParcelIsleOldCoupleHouse_Aud_4:
# 24 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Aud_2:
# 11 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Aud_5:
# 16 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Aud_4

ParcelIsleOldCoupleHouse_Aud_6:
# 18 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Aud_4

ParcelIsleOldCoupleHouse_Aud_7:
# 20 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Aud_4


ParcelIsleOldCoupleHouse_Sten::
# 29 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	lock
# 30 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	faceplayer
# 31 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleOldCoupleHouse_Sten_2
# 36 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleOldCoupleHouse_Sten_5
# 38 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleOldCoupleHouse_Sten_6
# 40 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleOldCoupleHouse_Sten_7
# 43 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_4, MSGBOX_DEFAULT
ParcelIsleOldCoupleHouse_Sten_4:
# 45 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Sten_2:
# 32 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Sten_5:
# 37 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_4

ParcelIsleOldCoupleHouse_Sten_6:
# 39 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_4

ParcelIsleOldCoupleHouse_Sten_7:
# 41 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_4


ParcelIsleOldCoupleHouse_ReadDresser::
# 50 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelIsleOldCoupleHouse_ReadShelf::
# 55 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelIsleOldCoupleHouse_PaperEnvelopes::
# 62 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleOldCoupleHouse_PaperEnvelopes_2
# 65 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_PaperEnvelopes_Text_1, MSGBOX_SIGN
ParcelIsleOldCoupleHouse_PaperEnvelopes_1:
	end

ParcelIsleOldCoupleHouse_PaperEnvelopes_2:
# 63 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_PaperEnvelopes_Text_0, MSGBOX_SIGN
	goto ParcelIsleOldCoupleHouse_PaperEnvelopes_1


ParcelIsleOldCoupleHouse_Aud_Text_0:
# 11 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: She comes by still, the Survey girl,\n"
	.string "and reads me the counts. Not the\l"
	.string "numbers, she'd never. That they're being\l"
	.string "kept.\p"
	.string "STEN pretends not to listen.$"

ParcelIsleOldCoupleHouse_Aud_Text_1:
# 16 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: She sat right where you're\n"
	.string "standing and read me your letters. Not\l"
	.string "the words, she'd never. Just that they'd\l"
	.string "come.\p"
	.string "I think you were the only person she\n"
	.string "was ever honest with. And you were a\l"
	.string "child, far away.$"

ParcelIsleOldCoupleHouse_Aud_Text_2:
# 18 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: The river village stood up to the\n"
	.string "Board. In a hall. With tea, they say. You\l"
	.string "can't stand up to anybody properly\l"
	.string "without tea.\p"
	.string "She'd have liked that. Thursdays. She\n"
	.string "never missed one until she did.$"

ParcelIsleOldCoupleHouse_Aud_Text_3:
# 20 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: She took tea here every Thursday\n"
	.string "for years. Never said a word about her\l"
	.string "work. Talked about the gulls.\p"
	.string "The last Thursday, she washed her own\n"
	.string "cup. She'd never done that.$"

ParcelIsleOldCoupleHouse_Aud_Text_4:
# 22 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: Sit down, you're letting the fog in!\n"
	.string "Oh, it's already in. It lives here.\p"
	.string "You're the young one from the letters.\n"
	.string "Don't look so surprised. Everyone\l"
	.string "knows. Nobody says.$"

ParcelIsleOldCoupleHouse_Sten_Text_0:
# 32 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: Rowed the Survey girl out to her\n"
	.string "first stake this spring. Thirty-one\l"
	.string "years since I rowed the Director to his.\p"
	.string "The currents are still wrong. The boat's\n"
	.string "still right.$"

ParcelIsleOldCoupleHouse_Sten_Text_1:
# 37 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: Thirty years on the RANGERS'\n"
	.string "boat. I rowed HALE out to his first\l"
	.string "survey. Rowed the old Director to his\l"
	.string "last, the day he took the FOUNDATION\l"
	.string "job.\p"
	.string "Same boat. Same oars. Never once asked\n"
	.string "either of them what they were counting.$"

ParcelIsleOldCoupleHouse_Sten_Text_2:
# 39 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: The currents are still wrong. But\n"
	.string "a river stood up to a Board, and that's a\l"
	.string "current too, of a kind.\p"
	.string "AUD says I'm being poetic. I'm being\n"
	.string "accurate. It's the same thing done\l"
	.string "slowly.$"

ParcelIsleOldCoupleHouse_Sten_Text_3:
# 41 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: They built the bridge the year\n"
	.string "the marsh road flooded. A temporary\l"
	.string "bridge. That was twenty-two years ago.\p"
	.string "Everything on this coast is temporary\n"
	.string "if you wait long enough.$"

ParcelIsleOldCoupleHouse_Sten_Text_4:
# 43 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: AUD will talk your ear off. Let\n"
	.string "her. I'm the quiet one. It's an\l"
	.string "arrangement.\p"
	.string "The currents are wrong, by the way.\n"
	.string "She'll say they're not. They're wrong.$"

ParcelIsleOldCoupleHouse_ReadDresser_Text_0:
# 50 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "A tea service for two, and a third cup,\n"
	.string "washed and put away at the back. It has\l"
	.string "not been used since a Thursday.$"

ParcelIsleOldCoupleHouse_ReadShelf_Text_0:
# 55 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Sten's tide notes, in a hand that does\n"
	.string "not waste ink. The last page says:\l"
	.string "currents wrong. AUD says not. Wrong.$"

ParcelIsleOldCoupleHouse_PaperEnvelopes_Text_0:
# 63 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "A bundle of envelopes tied with string,\n"
	.string "and one more now, loose, on top. It is\l"
	.string "addressed to the ranger, care of this\l"
	.string "house, in a hand AUD does not know.\p"
	.string "She has not opened it. She says letters\n"
	.string "to this house have been opened by the\l"
	.string "wrong person before and she will not be\l"
	.string "the one to start again.$"

ParcelIsleOldCoupleHouse_PaperEnvelopes_Text_1:
# 65 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "A bundle of envelopes tied with string,\n"
	.string "all addressed in the same careful hand\l"
	.string "to this house. AUD kept them after the\l"
	.string "letters themselves went back to the\l"
	.string "reader they were meant for.\p"
	.string "The postmarks are a line up the region\n"
	.string "and back: the mainland, the Coast, here.\l"
	.string "The last is three weeks before the lab\l"
	.string "was cleared.$"
