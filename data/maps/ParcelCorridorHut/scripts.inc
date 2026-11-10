ParcelCorridorHut_MapScripts::
	.byte 0


ParcelCorridorHut_Foreman::
# 8 "data/maps/ParcelCorridorHut/scripts.pory"
	lock
# 9 "data/maps/ParcelCorridorHut/scripts.pory"
	faceplayer
# 10 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEADWALL, ParcelCorridorHut_Foreman_5
ParcelCorridorHut_Foreman_4:
# 20 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HEADWALL_DONE, ParcelCorridorHut_Foreman_3
# 26 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCorridorHut_Foreman_9
# 31 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridorHut_Foreman_16
# 36 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelCorridorHut_Foreman_19
# 41 "data/maps/ParcelCorridorHut/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH1_EVIDENCE
# 42 "data/maps/ParcelCorridorHut/scripts.pory"
	setvar VAR_0x8004, 10
# 43 "data/maps/ParcelCorridorHut/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 44 "data/maps/ParcelCorridorHut/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelCorridorHut_Foreman_22
# 50 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_8, MSGBOX_DEFAULT
# 51 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_2:
# 11 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HEADWALL_FOUND, ParcelCorridorHut_Foreman_12
# 16 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_1, MSGBOX_DEFAULT
ParcelCorridorHut_Foreman_11:
# 18 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_3:
# 21 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_HEADWALL
# 23 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_5:
# 10 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HEADWALL_DONE, ParcelCorridorHut_Foreman_2
	goto ParcelCorridorHut_Foreman_4

ParcelCorridorHut_Foreman_9:
# 27 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_12:
# 12 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelCorridorHut/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE, 2
# 14 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_HEADWALL_DONE
	goto ParcelCorridorHut_Foreman_11

ParcelCorridorHut_Foreman_16:
# 32 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_4, MSGBOX_DEFAULT
# 33 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_19:
# 37 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_5, MSGBOX_DEFAULT
# 38 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Foreman_22:
# 45 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_6, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Foreman_Text_7, MSGBOX_DEFAULT
# 47 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end


ParcelCorridorHut_Clerk::
# 56 "data/maps/ParcelCorridorHut/scripts.pory"
	lock
# 57 "data/maps/ParcelCorridorHut/scripts.pory"
	faceplayer
# 58 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelCorridorHut_Clerk_4
ParcelCorridorHut_Clerk_1:
# 63 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN, ParcelCorridorHut_Clerk_10
ParcelCorridorHut_Clerk_8:
# 70 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCorridorHut_Clerk_14
# 75 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW_DONE, ParcelCorridorHut_Clerk_17
# 80 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW_FOUND, ParcelCorridorHut_Clerk_20
# 87 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW, ParcelCorridorHut_Clerk_23
# 92 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_6, MSGBOX_DEFAULT
# 93 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_7, MSGBOX_DEFAULT
# 94 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_FLOW
# 95 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_2:
# 59 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_3:
# 58 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_SIGN_DONE, ParcelCorridorHut_Clerk_2
	goto ParcelCorridorHut_Clerk_1

ParcelCorridorHut_Clerk_4:
# 58 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FLOW_DONE, ParcelCorridorHut_Clerk_3
	goto ParcelCorridorHut_Clerk_1

ParcelCorridorHut_Clerk_9:
# 64 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/ParcelCorridorHut/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 66 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_SIGN_DONE
# 67 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_10:
# 63 "data/maps/ParcelCorridorHut/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_SIGN_DONE, ParcelCorridorHut_Clerk_9
	goto ParcelCorridorHut_Clerk_8

ParcelCorridorHut_Clerk_14:
# 71 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_2, MSGBOX_DEFAULT
# 72 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_17:
# 76 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_3, MSGBOX_DEFAULT
# 77 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_20:
# 81 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_4, MSGBOX_DEFAULT
# 82 "data/maps/ParcelCorridorHut/scripts.pory"
	giveitem ITEM_TM39
# 83 "data/maps/ParcelCorridorHut/scripts.pory"
	setflag FLAG_SKALD_Q_FLOW_DONE
# 84 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end

ParcelCorridorHut_Clerk_23:
# 88 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Clerk_Text_5, MSGBOX_DEFAULT
# 89 "data/maps/ParcelCorridorHut/scripts.pory"
	release
	end


ParcelCorridorHut_Plans::
# 100 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Plans_Text_0, MSGBOX_SIGN
	end


ParcelCorridorHut_Shelf::
# 105 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Shelf_Text_0, MSGBOX_SIGN
	end


ParcelCorridorHut_Order::
# 112 "data/maps/ParcelCorridorHut/scripts.pory"
	msgbox ParcelCorridorHut_Order_Text_0, MSGBOX_SIGN
	return


ParcelCorridorHut_Foreman_Text_0:
# 12 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Three hands above the pipe.\n"
	.string "The stream used to run three hands\l"
	.string "higher than the top of the pipe we gave\l"
	.string "it.\p"
	.string "I've put that on the drawing for the\n"
	.string "second pipe. In red. Here; the crew hut's\l"
	.string "spare. You'll need light in that pipe one\l"
	.string "day.$"

ParcelCorridorHut_Foreman_Text_1:
# 16 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: The headwall above the\n"
	.string "culvert mouth. Red lead. The height.$"

ParcelCorridorHut_Foreman_Text_2:
# 21 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Before the culvert went in,\n"
	.string "the Survey painted a flow mark on the\l"
	.string "old headwall. Red lead. The crew were\l"
	.string "told to pour over it. One of my lads says\l"
	.string "they didn't, quite.\p"
	.string "Go and look at the headwall above the\n"
	.string "pipe. If the mark's there, read me the\l"
	.string "height. I'd like to know what we buried.$"

ParcelCorridorHut_Foreman_Text_3:
# 27 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Flow data every month to\n"
	.string "FERNWICK and now to the window too. The\l"
	.string "lads read it. The culvert's getting a\l"
	.string "second pipe.\p"
	.string "Not an upgrade. A correction. I said the\n"
	.string "word myself.$"

ParcelCorridorHut_Foreman_Text_4:
# 32 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Pre-construction flow data.\n"
	.string "Turns out we do do it, now. Eleven pages\l"
	.string "of it, every month, to FERNWICK. One of\l"
	.string "my lads drew the chart. He's proud of it.\l"
	.string "I let him be.$"

ParcelCorridorHut_Foreman_Text_5:
# 37 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: The lads say the river Board\n"
	.string "got made to read its own figures out.\l"
	.string "Good. Somebody should make ours read\l"
	.string "the culvert drawing.\p"
	.string "Twice the width on paper. I've said it to\n"
	.string "you. I'd say it to a hall.$"

ParcelCorridorHut_Foreman_Text_6:
# 45 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: One of my lads says a RANGER's\n"
	.string "been asking about flow data.\l"
	.string "Pre-construction.\p"
	.string "We don't do pre-construction. We do\n"
	.string "construction. Somebody else does the\l"
	.string "before.$"

ParcelCorridorHut_Foreman_Text_7:
# 46 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Here's what I'll tell you for\n"
	.string "free. The culvert's on the drawing at\l"
	.string "twice the width it got built. Twice.\p"
	.string "Somebody signed the change. It wasn't\n"
	.string "me.$"

ParcelCorridorHut_Foreman_Text_8:
# 50 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "FOREMAN: Crew hut. Mind the mud. If\n"
	.string "you're from MEREHOLT the invoices are\l"
	.string "on the shelf. If you're from the CORPS,\l"
	.string "the kettle's on.$"

ParcelCorridorHut_Clerk_Text_0:
# 59 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: Exhibit one's in a glass case in\n"
	.string "the hall. The miner comes to look at it.\p"
	.string "I've signed the last three flow reports.\n"
	.string "My name. Small, but there.$"

ParcelCorridorHut_Clerk_Text_1:
# 64 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: The closure sign. 1998, CORPS\n"
	.string "stamp, the miner's name on the back.\l"
	.string "That goes in the Phase 2 file as exhibit\l"
	.string "one. Nobody can say the gallery wasn't\l"
	.string "closed now.\p"
	.string "Take these for the carrying. The\n"
	.string "foreman keeps them for the lads; the\l"
	.string "lads don't read either.$"

ParcelCorridorHut_Clerk_Text_2:
# 71 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: Eleven pages, filed where they\n"
	.string "couldn't be unfiled. They weren't. They\l"
	.string "were read. I didn't sign them. I'm\l"
	.string "thinking I should have.$"

ParcelCorridorHut_Clerk_Text_3:
# 76 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: Eleven pages, filed with the\n"
	.string "CORPS station at FERNWICK. Somewhere\l"
	.string "they can't be unfiled. I didn't sign the\l"
	.string "cover sheet. You did.$"

ParcelCorridorHut_Clerk_Text_4:
# 81 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: …Those are them. The flow\n"
	.string "survey. Pre-construction. The bore in\l"
	.string "the plan is twice what got built.\p"
	.string "I'll see they're filed. Take this; it was\n"
	.string "in the satchel's pocket and it isn't the\l"
	.string "company's.$"

ParcelCorridorHut_Clerk_Text_5:
# 88 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: The survey crew worked out of\n"
	.string "the old adit up the cut, before the\l"
	.string "FOUNDATION sealed it. If the pages are\l"
	.string "anywhere, they're in there. I never said\l"
	.string "that.$"

ParcelCorridorHut_Clerk_Text_6:
# 92 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: I keep the paperwork. Spec\n"
	.string "sheet, schedule, the grate order. All in\l"
	.string "order.\p"
	.string "The flow survey? That'd be county. Or\n"
	.string "the contractor. Everyone says that,\l"
	.string "don't they. It's always somewhere else.$"

ParcelCorridorHut_Clerk_Text_7:
# 93 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "CLERK: The folder's empty because the\n"
	.string "pages went somewhere. The survey crew\l"
	.string "worked out of the old adit before the\l"
	.string "FOUNDATION sealed it.\p"
	.string "If a RANGER happened to find eleven\n"
	.string "pages in there, I never asked them to.$"

ParcelCorridorHut_Plans_Text_0:
# 100 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "HOLLOWBEND SPUR -- DRAINAGE WORKS.\n"
	.string "Spec sheet, revision C.\p"
	.string "Culvert: 1.2 m bore. A handwritten line\n"
	.string "through it. 0.6 m. Initialled. The\l"
	.string "initials are not the foreman's.$"

ParcelCorridorHut_Shelf_Text_0:
# 105 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "Invoices. Grate order, 12 units, due\n"
	.string "next month.\p"
	.string "A folder labelled FLOW SURVEY. It is\n"
	.string "empty.$"

ParcelCorridorHut_Order_Text_0:
# 112 "data/maps/ParcelCorridorHut/scripts.pory"
	.string "An order form in triplicate on the\n"
	.string "foreman's table, the top copy soft from\l"
	.string "handling.\p"
	.string "GRATES, CULVERT TYPE, FOUR. For the\n"
	.string "Hollowbend crossing. Requested by the\l"
	.string "site foreman. Priority: ROUTINE.\l"
	.string "Expected: next month.\p"
	.string "The form has been re-dated five times.\n"
	.string "Each new date is next month from the\l"
	.string "date before it. Each is initialled by\l"
	.string "someone at the depot who did not come\l"
	.string "out to look.\p"
	.string "On the back, in the foreman's hand, a\n"
	.string "tally of what has gone down the culvert\l"
	.string "in the meantime. It is a long tally for a\l"
	.string "routine form.$"
