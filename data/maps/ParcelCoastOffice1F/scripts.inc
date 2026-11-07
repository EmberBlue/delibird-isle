ParcelCoastOffice1F_MapScripts::
	.byte 0


ParcelCoastOffice1F_Reception::
# 7 "data/maps/ParcelCoastOffice1F/scripts.pory"
	lock
# 8 "data/maps/ParcelCoastOffice1F/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Reception_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end


ParcelCoastOffice1F_Visitor::
# 14 "data/maps/ParcelCoastOffice1F/scripts.pory"
	lock
# 15 "data/maps/ParcelCoastOffice1F/scripts.pory"
	faceplayer
# 16 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Visitor_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end


ParcelCoastOffice1F_Plaque::
# 21 "data/maps/ParcelCoastOffice1F/scripts.pory"
	lock
# 22 "data/maps/ParcelCoastOffice1F/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 23 "data/maps/ParcelCoastOffice1F/scripts.pory"
	setvar VAR_0x8004, 4
# 24 "data/maps/ParcelCoastOffice1F/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 25 "data/maps/ParcelCoastOffice1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoastOffice1F_Plaque_2
# 30 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Plaque_Text_1, MSGBOX_SIGN
# 31 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Plaque_Text_2, MSGBOX_SIGN
# 32 "data/maps/ParcelCoastOffice1F/scripts.pory"
	special SkaldmereCertTaskMark
# 33 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end

ParcelCoastOffice1F_Plaque_2:
# 26 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Plaque_Text_0, MSGBOX_SIGN
# 27 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end


ParcelCoastOffice1F_Model::
# 37 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Model_Text_0, MSGBOX_SIGN
	end


ParcelCoastOffice1F_Reception_Text_0:
# 9 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "RECEPTION: Welcome to the MEREHOLT\n"
	.string "FOUNDATION. The exhibit is free. Ms.\l"
	.string "AUNE is upstairs; she's expecting a\l"
	.string "RANGER. Do take a brochure.$"

ParcelCoastOffice1F_Visitor_Text_0:
# 16 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "MAN: I come in for the warm. They don't\n"
	.string "mind. The model on the wall's very\l"
	.string "clever. I don't understand a word of it\l"
	.string "and there's fewer fish every year, so I\l"
	.string "suppose it's working.$"

ParcelCoastOffice1F_Plaque_Text_0:
# 26 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "The plaque. In the notebook, with the\n"
	.string "name underlined twice.$"

ParcelCoastOffice1F_Plaque_Text_1:
# 30 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "SUSTAINABLE HARVEST FRAMEWORK --\n"
	.string "MEREHOLT COASTAL FISHERIES. Yield\l"
	.string "curves. Age-class diagrams. The\l"
	.string "recovery model that governs every\l"
	.string "quota on this coast.\p"
	.string "Small, at the bottom: after the methods\n"
	.string "of DR. E. HERON, with thanks.$"

ParcelCoastOffice1F_Plaque_Text_2:
# 31 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "The hand in the diagrams is the hand in\n"
	.string "the notebook's margins. The same\l"
	.string "abbreviations. The same way of drawing\l"
	.string "a food web with the keystone circled.\p"
	.string "She was never silenced. She is the\n"
	.string "citation. Written down.$"

ParcelCoastOffice1F_Model_Text_0:
# 37 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "A scale model of the harbour under\n"
	.string "glass. Tiny boats. A tiny cannery. The\l"
	.string "sea painted the blue it used to be. No\l"
	.string "urchins in the model.$"
