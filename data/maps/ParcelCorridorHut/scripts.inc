ParcelCorridorHut_MapScripts::
	.byte 0


ParcelCorridorHut_Foreman::
# 8 "data/maps/ParcelCorridorHut/scripts.pory"
	lock
# 9 "data/maps/ParcelCorridorHut/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelCorridorHut/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 11 "data/maps/ParcelCorridorHut/scripts.pory"
	setvar VAR_0x8004, 10
# 12 "data/maps/ParcelCorridorHut/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 13 "data/maps/ParcelCorridorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridorHut_Foreman_2
# 19 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_2:
# 14 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end


ParcelCorridorHut_Clerk::
# 25 "data/maps/ParcelCorridorHut/scripts.pory"
	lock
# 26 "data/maps/ParcelCorridorHut/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end


ParcelCorridorHut_Plans::
# 33 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Plans_Text_0, MSGBOX_SIGN
	end


ParcelCorridorHut_Shelf::
# 38 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Shelf_Text_0, MSGBOX_SIGN
	end


ParcelCorridorHut_Foreman_Text_0:
# 14 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: One of my lads says a RANGER's\n"
	.string "been asking about flow data.\l"
	.string "Pre-construction.\p"
	.string "We don't do pre-construction. We do\n"
	.string "construction. Somebody else does the\l"
	.string "before.$"

ParcelCorridorHut_Foreman_Text_1:
# 15 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Here's what I'll tell you for\n"
	.string "free. The culvert's on the drawing at\l"
	.string "twice the width it got built. Twice.\p"
	.string "Somebody signed the change. It wasn't\n"
	.string "me.$"

ParcelCorridorHut_Foreman_Text_2:
# 19 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Crew hut. Mind the mud. If\n"
	.string "you're from MEREHOLT the invoices are\l"
	.string "on the shelf. If you're from the CORPS,\l"
	.string "the kettle's on.$"

ParcelCorridorHut_Clerk_Text_0:
# 27 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: I keep the paperwork. Spec\n"
	.string "sheet, schedule, the grate order. All in\l"
	.string "order.\p"
	.string "The flow survey? That'd be county. Or\n"
	.string "the contractor. Everyone says that,\l"
	.string "don't they. It's always somewhere else.$"

ParcelCorridorHut_Plans_Text_0:
# 33 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "HOLLOWBEND SPUR -- DRAINAGE WORKS.\n"
	.string "Spec sheet, revision C.\p"
	.string "Culvert: 1.2 m bore. A handwritten line\n"
	.string "through it. 0.6 m. Initialled. The\l"
	.string "initials are not the foreman's.$"

ParcelCorridorHut_Shelf_Text_0:
# 38 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "Invoices. Grate order, 12 units, due\n"
	.string "next month.\p"
	.string "A folder labelled FLOW SURVEY. It is\n"
	.string "empty.$"
