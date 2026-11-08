ParcelCorridorHut_MapScripts::
	.byte 0


ParcelCorridorHut_Foreman::
# 8 "data/maps/ParcelCorridorHut/scripts.pory"
	lock
# 9 "data/maps/ParcelCorridorHut/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridorHut_Foreman_2
# 15 "data/maps/ParcelCorridorHut/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 16 "data/maps/ParcelCorridorHut/scripts.pory"
	setvar VAR_0x8004, 10
# 17 "data/maps/ParcelCorridorHut/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 18 "data/maps/ParcelCorridorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridorHut_Foreman_5
# 24 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_3, MSGBOX_DEFAULT
# 25 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_2:
# 11 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_5:
# 19 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end


ParcelCorridorHut_Clerk::
# 30 "data/maps/ParcelCorridorHut/scripts.pory"
	lock
# 31 "data/maps/ParcelCorridorHut/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN, ParcelCorridorHut_Clerk_3
ParcelCorridorHut_Clerk_1:
# 39 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridorHut_Clerk_7
# 44 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW_DONE, ParcelCorridorHut_Clerk_10
# 49 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW_FOUND, ParcelCorridorHut_Clerk_13
# 56 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW, ParcelCorridorHut_Clerk_16
# 61 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_5, MSGBOX_DEFAULT
# 62 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_6, MSGBOX_DEFAULT
# 63 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_FLOW
# 64 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_2:
# 33 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelCorridorHut/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 35 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_SIGN_DONE
# 36 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_3:
# 32 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SIGN_DONE, ParcelCorridorHut_Clerk_2
	goto ParcelCorridorHut_Clerk_1

ParcelCorridorHut_Clerk_7:
# 40 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_10:
# 45 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_2, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_13:
# 50 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_3, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCorridorHut/scripts.pory"
	giveitem ITEM_TM39
# 52 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_FLOW_DONE
# 53 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_16:
# 57 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_4, MSGBOX_DEFAULT
# 58 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end


ParcelCorridorHut_Plans::
# 69 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Plans_Text_0, MSGBOX_SIGN
	end


ParcelCorridorHut_Shelf::
# 74 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Shelf_Text_0, MSGBOX_SIGN
	end


ParcelCorridorHut_Foreman_Text_0:
# 11 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Pre-construction flow data.\n"
	.string "Turns out we do do it, now. Eleven pages\l"
	.string "of it, every month, to FERNWICK. One of\l"
	.string "my lads drew the chart. He's proud of it.\l"
	.string "I let him be.$"

ParcelCorridorHut_Foreman_Text_1:
# 19 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: One of my lads says a RANGER's\n"
	.string "been asking about flow data.\l"
	.string "Pre-construction.\p"
	.string "We don't do pre-construction. We do\n"
	.string "construction. Somebody else does the\l"
	.string "before.$"

ParcelCorridorHut_Foreman_Text_2:
# 20 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Here's what I'll tell you for\n"
	.string "free. The culvert's on the drawing at\l"
	.string "twice the width it got built. Twice.\p"
	.string "Somebody signed the change. It wasn't\n"
	.string "me.$"

ParcelCorridorHut_Foreman_Text_3:
# 24 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Crew hut. Mind the mud. If\n"
	.string "you're from MEREHOLT the invoices are\l"
	.string "on the shelf. If you're from the CORPS,\l"
	.string "the kettle's on.$"

ParcelCorridorHut_Clerk_Text_0:
# 33 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: The closure sign. 1998, CORPS\n"
	.string "stamp, the miner's name on the back.\l"
	.string "That goes in the Phase 2 file as exhibit\l"
	.string "one. Nobody can say the gallery wasn't\l"
	.string "closed now.\p"
	.string "Take these for the carrying. The\n"
	.string "foreman keeps them for the lads; the\l"
	.string "lads don't read either.$"

ParcelCorridorHut_Clerk_Text_1:
# 40 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: Eleven pages, filed where they\n"
	.string "couldn't be unfiled. They weren't. They\l"
	.string "were read. I didn't sign them. I'm\l"
	.string "thinking I should have.$"

ParcelCorridorHut_Clerk_Text_2:
# 45 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: Eleven pages, filed with the\n"
	.string "CORPS station at FERNWICK. Somewhere\l"
	.string "they can't be unfiled. I didn't sign the\l"
	.string "cover sheet. You did.$"

ParcelCorridorHut_Clerk_Text_3:
# 50 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: …Those are them. The flow\n"
	.string "survey. Pre-construction. The bore in\l"
	.string "the plan is twice what got built.\p"
	.string "I'll see they're filed. Take this; it was\n"
	.string "in the satchel's pocket and it isn't the\l"
	.string "company's.$"

ParcelCorridorHut_Clerk_Text_4:
# 57 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: The survey crew worked out of\n"
	.string "the old adit up the cut, before the\l"
	.string "FOUNDATION sealed it. If the pages are\l"
	.string "anywhere, they're in there. I never said\l"
	.string "that.$"

ParcelCorridorHut_Clerk_Text_5:
# 61 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: I keep the paperwork. Spec\n"
	.string "sheet, schedule, the grate order. All in\l"
	.string "order.\p"
	.string "The flow survey? That'd be county. Or\n"
	.string "the contractor. Everyone says that,\l"
	.string "don't they. It's always somewhere else.$"

ParcelCorridorHut_Clerk_Text_6:
# 62 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: The folder's empty because the\n"
	.string "pages went somewhere. The survey crew\l"
	.string "worked out of the old adit before the\l"
	.string "FOUNDATION sealed it.\p"
	.string "If a RANGER happened to find eleven\n"
	.string "pages in there, I never asked them to.$"

ParcelCorridorHut_Plans_Text_0:
# 69 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "HOLLOWBEND SPUR -- DRAINAGE WORKS.\n"
	.string "Spec sheet, revision C.\p"
	.string "Culvert: 1.2 m bore. A handwritten line\n"
	.string "through it. 0.6 m. Initialled. The\l"
	.string "initials are not the foreman's.$"

ParcelCorridorHut_Shelf_Text_0:
# 74 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "Invoices. Grate order, 12 units, due\n"
	.string "next month.\p"
	.string "A folder labelled FLOW SURVEY. It is\n"
	.string "empty.$"
