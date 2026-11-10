ParcelCoastOffice1F_MapScripts::
	.byte 0


ParcelCoastOffice1F_Reception::
# 7 "data/maps/ParcelCoastOffice1F/scripts.pory"
	lock
# 8 "data/maps/ParcelCoastOffice1F/scripts.pory"
	faceplayer
# 9 "data/maps/ParcelCoastOffice1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastOffice1F_Reception_2
# 14 "data/maps/ParcelCoastOffice1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastOffice1F_Reception_5
# 19 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Reception_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end

ParcelCoastOffice1F_Reception_2:
# 10 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Reception_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end

ParcelCoastOffice1F_Reception_5:
# 15 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Reception_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end


ParcelCoastOffice1F_Visitor::
# 24 "data/maps/ParcelCoastOffice1F/scripts.pory"
	lock
# 25 "data/maps/ParcelCoastOffice1F/scripts.pory"
	faceplayer
# 26 "data/maps/ParcelCoastOffice1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastOffice1F_Visitor_2
# 31 "data/maps/ParcelCoastOffice1F/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastOffice1F_Visitor_5
# 36 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Visitor_Text_2, MSGBOX_DEFAULT
# 37 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end

ParcelCoastOffice1F_Visitor_2:
# 27 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Visitor_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end

ParcelCoastOffice1F_Visitor_5:
# 32 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Visitor_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end


ParcelCoastOffice1F_Plaque::
# 41 "data/maps/ParcelCoastOffice1F/scripts.pory"
	lock
# 42 "data/maps/ParcelCoastOffice1F/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH6_EVIDENCE
# 43 "data/maps/ParcelCoastOffice1F/scripts.pory"
	setvar VAR_0x8004, 4
# 44 "data/maps/ParcelCoastOffice1F/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 45 "data/maps/ParcelCoastOffice1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCoastOffice1F_Plaque_2
# 50 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Plaque_Text_1, MSGBOX_SIGN
# 51 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Plaque_Text_2, MSGBOX_SIGN
# 52 "data/maps/ParcelCoastOffice1F/scripts.pory"
	special SkaldmereCertTaskMark
# 53 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end

ParcelCoastOffice1F_Plaque_2:
# 46 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Plaque_Text_0, MSGBOX_SIGN
# 47 "data/maps/ParcelCoastOffice1F/scripts.pory"
	release
	end


ParcelCoastOffice1F_Model::
# 57 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Model_Text_0, MSGBOX_SIGN
	end


ParcelCoastOffice1F_Report::
# 64 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Report_Text_0, MSGBOX_SIGN
	return


ParcelCoastOffice1F_Leaflet::
# 68 "data/maps/ParcelCoastOffice1F/scripts.pory"
	msgbox ParcelCoastOffice1F_Leaflet_Text_0, MSGBOX_SIGN
	return


ParcelCoastOffice1F_Reception_Text_0:
# 10 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "RECEPTION: Welcome to the MEREHOLT\n"
	.string "FOUNDATION. The exhibit is closed for\l"
	.string "revision. Ms. AUNE is upstairs. She said\l"
	.string "if a RANGER came, to send you up, and to\l"
	.string "say nothing clever.$"

ParcelCoastOffice1F_Reception_Text_1:
# 15 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "RECEPTION: Welcome to the MEREHOLT\n"
	.string "FOUNDATION. The exhibit is closed for\l"
	.string "'updating'. Ms. AUNE is upstairs. The\l"
	.string "brochures are being reprinted.\p"
	.string "Do take the old one. It's a collector's\n"
	.string "item now, the way things are going.$"

ParcelCoastOffice1F_Reception_Text_2:
# 19 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "RECEPTION: Welcome to the MEREHOLT\n"
	.string "FOUNDATION. The exhibit is free. Ms.\l"
	.string "AUNE is upstairs; she's expecting a\l"
	.string "RANGER. Do take a brochure.$"

ParcelCoastOffice1F_Visitor_Text_0:
# 27 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "MAN: I come in for the warm. The model\n"
	.string "on the wall's been taken down. There's a\l"
	.string "lighter patch where it was. I\l"
	.string "understand the patch.$"

ParcelCoastOffice1F_Visitor_Text_1:
# 32 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "MAN: I come in for the warm. Today\n"
	.string "they're taking the model off the wall.\l"
	.string "'Updating.' I asked what was wrong with\l"
	.string "it. The young man said nothing's wrong\l"
	.string "with it.\p"
	.string "Fewer fish every year and the model's\n"
	.string "fine. I'll miss it. It was very clever.$"

ParcelCoastOffice1F_Visitor_Text_2:
# 36 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "MAN: I come in for the warm. They don't\n"
	.string "mind. The model on the wall's very\l"
	.string "clever. I don't understand a word of it\l"
	.string "and there's fewer fish every year, so I\l"
	.string "suppose it's working.$"

ParcelCoastOffice1F_Plaque_Text_0:
# 46 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "The plaque. In the notebook, with the\n"
	.string "name underlined twice.$"

ParcelCoastOffice1F_Plaque_Text_1:
# 50 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "SUSTAINABLE HARVEST FRAMEWORK --\n"
	.string "MEREHOLT COASTAL FISHERIES. Yield\l"
	.string "curves. Age-class diagrams. The\l"
	.string "recovery model that governs every\l"
	.string "quota on this coast.\p"
	.string "Small, at the bottom: after the methods\n"
	.string "of DR. E. HERON, with thanks.$"

ParcelCoastOffice1F_Plaque_Text_2:
# 51 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "The hand in the diagrams is the hand in\n"
	.string "the notebook's margins. The same\l"
	.string "abbreviations. The same way of drawing\l"
	.string "a food web with the keystone circled.\p"
	.string "She was never silenced. She is the\n"
	.string "citation. Written down.$"

ParcelCoastOffice1F_Model_Text_0:
# 57 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "A scale model of the harbour under\n"
	.string "glass. Tiny boats. A tiny cannery. The\l"
	.string "sea painted the blue it used to be. No\l"
	.string "urchins in the model.$"

ParcelCoastOffice1F_Report_Text_0:
# 64 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "STEWARDSHIP. The Foundation's annual\n"
	.string "report, on a stand, open at the chair's\l"
	.string "foreword. Heavy paper. A ranger on a\l"
	.string "ridge.\p"
	.string "It has been my privilege, after a career\n"
	.string "in the Corps, to see conservation from\l"
	.string "the other side of the table, where\l"
	.string "decisions are funded rather than\l"
	.string "wished for.\p"
	.string "This year the Foundation supported two\n"
	.string "field stations, forty-four\l"
	.string "certifications, the regional recovery\l"
	.string "model, and storm relief on Delibird Isle.\p"
	.string "The region's habitats are resilient. Our\n"
	.string "science shows it. Our partners prove it\l"
	.string "every day.\p"
	.string "The facing page is a chart. Forty years\n"
	.string "of curves, rising. There is no axis on\l"
	.string "the left. There is a logo where the axis\l"
	.string "would be.$"

ParcelCoastOffice1F_Leaflet_Text_0:
# 68 "data/maps/ParcelCoastOffice1F/scripts.pory"
	.string "A rack of leaflets, fanned. LEIRVIK\n"
	.string "WORKS: REMEDIATION UPDATE. The same\l"
	.string "leaflet, four printings, four years.\p"
	.string "The first: works to commence in the\n"
	.string "spring. The second: works rescheduled\l"
	.string "following a review of the hydrology. The\l"
	.string "third: phase one complete, phase two to\l"
	.string "follow. Phase one was a fence.\p"
	.string "The fourth: the Foundation continues\n"
	.string "to work closely with the community. A\l"
	.string "photograph of a booth, a banner, a child\l"
	.string "with a balloon.\p"
	.string "The plate in the basin says what is in\n"
	.string "the water. None of the four leaflets\l"
	.string "does.$"
