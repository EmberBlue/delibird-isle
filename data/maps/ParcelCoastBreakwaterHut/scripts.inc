ParcelCoastBreakwaterHut_MapScripts::
	.byte 0


ParcelCoastBreakwaterHut_Lifeguard::
# 7 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	lock
# 8 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwaterHut_Lifeguard_2
# 14 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Lifeguard_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Lifeguard_2:
# 10 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Lifeguard_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end


ParcelCoastBreakwaterHut_Woman::
# 20 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	lock
# 21 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	faceplayer
# 22 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwaterHut_Woman_2
# 27 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Woman_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Woman_2:
# 23 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Woman_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end


ParcelCoastBreakwaterHut_Tuber::
# 33 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	lock
# 34 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	faceplayer
# 35 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastBreakwaterHut_Tuber_2
# 40 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Tuber_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end

ParcelCoastBreakwaterHut_Tuber_2:
# 36 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	msgbox ParcelCoastBreakwaterHut_Tuber_Text_0, MSGBOX_DEFAULT
# 37 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	release
	end


ParcelCoastBreakwaterHut_Lifeguard_Text_0:
# 10 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "LIFEGUARD: Closed 'pending review'. The\n"
	.string "review's running, so the sign stays, and\l"
	.string "so do I. It's good work, saying a true\l"
	.string "thing forty times a day.$"

ParcelCoastBreakwaterHut_Lifeguard_Text_1:
# 14 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "LIFEGUARD: Beach is closed to bathing.\n"
	.string "I'm paid to sit here and say so. I say so\l"
	.string "about forty times a day. You're\l"
	.string "forty-one.$"

ParcelCoastBreakwaterHut_Woman_Text_0:
# 23 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "WOMAN: The TUBERS came back when the\n"
	.string "review posted the readings. Mums read\l"
	.string "the readings. Mums are the whole\l"
	.string "economy of a beach.$"

ParcelCoastBreakwaterHut_Woman_Text_1:
# 27 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "WOMAN: I sold ices here for twenty\n"
	.string "summers. Now I sell them to the\l"
	.string "lifeguard. He's my only customer and\l"
	.string "he's on a diet.$"

ParcelCoastBreakwaterHut_Tuber_Text_0:
# 36 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "TUBER: The readings say it's fine on the\n"
	.string "breakwater side! Mum read them. I'm\l"
	.string "swimming. Properly. Watch.$"

ParcelCoastBreakwaterHut_Tuber_Text_1:
# 40 "data/maps/ParcelCoastBreakwaterHut/scripts.pory"
	.string "TUBER: I'm not swimming. I'm standing in\n"
	.string "the water. That's different. The sign\l"
	.string "says BATHING.$"
