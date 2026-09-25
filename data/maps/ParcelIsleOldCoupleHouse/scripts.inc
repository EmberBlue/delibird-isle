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
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleOldCoupleHouse_Aud_3
# 15 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Aud_Text_2, MSGBOX_DEFAULT
ParcelIsleOldCoupleHouse_Aud_1:
# 17 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
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


ParcelIsleOldCoupleHouse_Sten::
# 22 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	lock
# 23 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	faceplayer
# 24 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleOldCoupleHouse_Sten_2
# 26 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleOldCoupleHouse_Sten_3
# 29 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_2, MSGBOX_DEFAULT
ParcelIsleOldCoupleHouse_Sten_1:
# 31 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	release
	end

ParcelIsleOldCoupleHouse_Sten_2:
# 25 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_1

ParcelIsleOldCoupleHouse_Sten_3:
# 27 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	msgbox ParcelIsleOldCoupleHouse_Sten_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleOldCoupleHouse_Sten_1


ParcelIsleOldCoupleHouse_Aud_Text_0:
# 11 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Aud: She sat where you're standing and\n"
	.string "read me your letters. Not the words --\l"
	.string "she'd never. Just that they'd come, and\l"
	.string "what the weather was where you were.\p"
	.string "I think you were the only person she\n"
	.string "was ever honest with, and you were a\l"
	.string "child, and far away.$"

ParcelIsleOldCoupleHouse_Aud_Text_1:
# 13 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Aud: She took tea here. Every Thursday,\n"
	.string "for years. Sat in that chair and said\l"
	.string "nothing about her work and everything\l"
	.string "about the gulls.\p"
	.string "The last Thursday she washed her own\n"
	.string "cup. She'd never done that.$"

ParcelIsleOldCoupleHouse_Aud_Text_2:
# 15 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Aud: Sit down, you're letting the fog in.\n"
	.string "No, you're not, the fog's already in; it\l"
	.string "lives here.\p"
	.string "You'll be the young one from the\n"
	.string "letters. Don't look surprised. Everyone\l"
	.string "knows. Nobody says.$"

ParcelIsleOldCoupleHouse_Sten_Text_0:
# 25 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Sten: Thirty years on the Corps boat. I\n"
	.string "rowed Hale out to his first survey.\l"
	.string "Rowed the Director out to his last, the\l"
	.string "day he took the Foundation job.\p"
	.string "Same boat. Same oars. I never once\n"
	.string "asked either of them what they were\l"
	.string "counting.$"

ParcelIsleOldCoupleHouse_Sten_Text_1:
# 27 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Sten: The bridge. They built it the year\n"
	.string "the marsh road flooded. It was a\l"
	.string "temporary bridge. That was twenty-two\l"
	.string "years ago.\p"
	.string "Everything on this coast is temporary\n"
	.string "if you wait long enough for it to be\l"
	.string "permanent.$"

ParcelIsleOldCoupleHouse_Sten_Text_2:
# 29 "data/maps/ParcelIsleOldCoupleHouse/scripts.pory"
	.string "Sten: Aud'll talk your ear off. Let her.\n"
	.string "I'm the quiet one; it's an arrangement.\p"
	.string "…The currents are wrong. She'll tell you\n"
	.string "they're not. They're wrong.$"
