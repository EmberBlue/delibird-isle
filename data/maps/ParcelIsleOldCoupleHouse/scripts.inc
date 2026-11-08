ParcelIsleOldCoupleHouse_MapScripts::
	.byte 0


ParcelIsleOldCoupleHouse_Aud::
# 8 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleOldCoupleHouse_Aud_2
# 12 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleOldCoupleHouse_Aud_3
# 14 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleOldCoupleHouse_Aud_4
# 17 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_3, MSGBOX_DEFAULT
ParcelIsleOldCoupleHouse_Aud_1:
# 19 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Aud_2:
# 11 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Aud_1

ParcelIsleOldCoupleHouse_Aud_3:
# 13 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Aud_1

ParcelIsleOldCoupleHouse_Aud_4:
# 15 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Aud_1


ParcelIsleOldCoupleHouse_Sten::
# 24 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	lock
# 25 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	faceplayer
# 26 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleOldCoupleHouse_Sten_2
# 28 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleOldCoupleHouse_Sten_3
# 30 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleOldCoupleHouse_Sten_4
# 33 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_3, MSGBOX_DEFAULT
ParcelIsleOldCoupleHouse_Sten_1:
# 35 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Sten_2:
# 27 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_1

ParcelIsleOldCoupleHouse_Sten_3:
# 29 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_1

ParcelIsleOldCoupleHouse_Sten_4:
# 31 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_1


ParcelIsleOldCoupleHouse_ReadDresser::
# 40 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_ReadDresser_Text_0, MSGBOX_SIGN
	end


ParcelIsleOldCoupleHouse_ReadShelf::
# 45 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_ReadShelf_Text_0, MSGBOX_SIGN
	end


ParcelIsleOldCoupleHouse_Aud_Text_0:
# 11 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: She sat right where you're\n"
	.string "standing and read me your letters. Not\l"
	.string "the words, she'd never. Just that they'd\l"
	.string "come.\p"
	.string "I think you were the only person she\n"
	.string "was ever honest with. And you were a\l"
	.string "child, far away.$"

ParcelIsleOldCoupleHouse_Aud_Text_1:
# 13 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: The river village stood up to the\n"
	.string "Board. In a hall. With tea, they say. You\l"
	.string "can't stand up to anybody properly\l"
	.string "without tea.\p"
	.string "She'd have liked that. Thursdays. She\n"
	.string "never missed one until she did.$"

ParcelIsleOldCoupleHouse_Aud_Text_2:
# 15 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: She took tea here every Thursday\n"
	.string "for years. Never said a word about her\l"
	.string "work. Talked about the gulls.\p"
	.string "The last Thursday, she washed her own\n"
	.string "cup. She'd never done that.$"

ParcelIsleOldCoupleHouse_Aud_Text_3:
# 17 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "AUD: Sit down, you're letting the fog in!\n"
	.string "Oh, it's already in. It lives here.\p"
	.string "You're the young one from the letters.\n"
	.string "Don't look so surprised. Everyone\l"
	.string "knows. Nobody says.$"

ParcelIsleOldCoupleHouse_Sten_Text_0:
# 27 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: Thirty years on the RANGERS'\n"
	.string "boat. I rowed HALE out to his first\l"
	.string "survey. Rowed the old Director to his\l"
	.string "last, the day he took the FOUNDATION\l"
	.string "job.\p"
	.string "Same boat. Same oars. Never once asked\n"
	.string "either of them what they were counting.$"

ParcelIsleOldCoupleHouse_Sten_Text_1:
# 29 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: The currents are still wrong. But\n"
	.string "a river stood up to a Board, and that's a\l"
	.string "current too, of a kind.\p"
	.string "AUD says I'm being poetic. I'm being\n"
	.string "accurate. It's the same thing done\l"
	.string "slowly.$"

ParcelIsleOldCoupleHouse_Sten_Text_2:
# 31 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: They built the bridge the year\n"
	.string "the marsh road flooded. A temporary\l"
	.string "bridge. That was twenty-two years ago.\p"
	.string "Everything on this coast is temporary\n"
	.string "if you wait long enough.$"

ParcelIsleOldCoupleHouse_Sten_Text_3:
# 33 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "STEN: AUD will talk your ear off. Let\n"
	.string "her. I'm the quiet one. It's an\l"
	.string "arrangement.\p"
	.string "The currents are wrong, by the way.\n"
	.string "She'll say they're not. They're wrong.$"

ParcelIsleOldCoupleHouse_ReadDresser_Text_0:
# 40 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "A tea service for two, and a third cup,\n"
	.string "washed and put away at the back. It has\l"
	.string "not been used since a Thursday.$"

ParcelIsleOldCoupleHouse_ReadShelf_Text_0:
# 45 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Sten's tide notes, in a hand that does\n"
	.string "not waste ink. The last page says:\l"
	.string "currents wrong. AUD says not. Wrong.$"
