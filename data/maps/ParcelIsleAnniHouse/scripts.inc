ParcelIsleAnniHouse_MapScripts::
	.byte 0


ParcelIsleAnniHouse_Piet::
# 8 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	lock
# 9 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleAnniHouse_Piet_2
# 12 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ANNI_DONE, ParcelIsleAnniHouse_Piet_3
# 15 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_2, MSGBOX_DEFAULT
ParcelIsleAnniHouse_Piet_1:
# 17 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	release
	end

ParcelIsleAnniHouse_Piet_2:
# 11 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleAnniHouse_Piet_1

ParcelIsleAnniHouse_Piet_3:
# 13 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	msgbox ParcelIsleAnniHouse_Piet_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleAnniHouse_Piet_1


ParcelIsleAnniHouse_Piet_Text_0:
# 11 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "Piet: Mum read the frog part out loud.\n"
	.string "Twice, for Rolf, and once more for me.\p"
	.string "When I'm better I'm going to count\n"
	.string "something. Everything. I've got a list\l"
	.string "started.$"

ParcelIsleAnniHouse_Piet_Text_1:
# 13 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "Piet: You took the net down to Tobin.\n"
	.string "Mum said. She said you didn't complain\l"
	.string "about the jetty.\p"
	.string "I'm not allowed on the jetty. When I'm\n"
	.string "better. That's what everyone says.\l"
	.string "When.$"

ParcelIsleAnniHouse_Piet_Text_2:
# 15 "data/maps/ParcelIsleAnniHouse/scripts.pory"
	.string "Piet: The fog gets in my chest. That's\n"
	.string "what the doctor says. He says it like\l"
	.string "it's the fog's fault.\p"
	.string "Mum says the fog's been here longer\n"
	.string "than the doctor.$"
