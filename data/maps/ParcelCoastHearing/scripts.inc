ParcelCoastHearing_MapScripts::
	.byte 0


ParcelCoastHearing_Clerk::
# 6 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 7 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 8 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Clerk_2
# 13 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHearing_Clerk_5
# 18 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Clerk_2:
# 9 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Clerk_5:
# 14 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Clerk_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Waiter1::
# 23 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 24 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CARBON, ParcelCoastHearing_Waiter1_3
ParcelCoastHearing_Waiter1_1:
# 39 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Waiter1_7
# 44 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CARBON_DONE, ParcelCoastHearing_Waiter1_13
# 50 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHearing_Waiter1_16
# 55 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_7, MSGBOX_DEFAULT
# 56 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_2:
# 26 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CARBON_FOUND, ParcelCoastHearing_Waiter1_10
# 35 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_3, MSGBOX_DEFAULT
# 36 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_3:
# 25 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CARBON_DONE, ParcelCoastHearing_Waiter1_2
	goto ParcelCoastHearing_Waiter1_1

ParcelCoastHearing_Waiter1_7:
# 40 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_4, MSGBOX_DEFAULT
# 41 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_10:
# 27 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/ParcelCoastHearing/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 30 "data/maps/ParcelCoastHearing/scripts.pory"
	setflag FLAG_SKALD_Q_CARBON_DONE
# 31 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_2, MSGBOX_DEFAULT
# 32 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_13:
# 45 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_5, MSGBOX_DEFAULT
# 46 "data/maps/ParcelCoastHearing/scripts.pory"
	setflag FLAG_SKALD_Q_CARBON
# 47 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter1_16:
# 51 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter1_Text_6, MSGBOX_DEFAULT
# 52 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Waiter2::
# 60 "data/maps/ParcelCoastHearing/scripts.pory"
	lock
# 61 "data/maps/ParcelCoastHearing/scripts.pory"
	faceplayer
# 62 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Waiter2_2
# 67 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelCoastHearing_Waiter2_5
# 72 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_2, MSGBOX_DEFAULT
# 73 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter2_2:
# 63 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end

ParcelCoastHearing_Waiter2_5:
# 68 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Waiter2_Text_1, MSGBOX_DEFAULT
# 69 "data/maps/ParcelCoastHearing/scripts.pory"
	release
	end


ParcelCoastHearing_Notice::
# 77 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Notice_Text_0, MSGBOX_SIGN
	end


ParcelCoastHearing_Carbon::
# 82 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CARBON, ParcelCoastHearing_Carbon_3
ParcelCoastHearing_Carbon_1:
# 87 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Carbon_Text_1, MSGBOX_SIGN
	end

ParcelCoastHearing_Carbon_2:
# 83 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Carbon_Text_0, MSGBOX_SIGN
# 84 "data/maps/ParcelCoastHearing/scripts.pory"
	setflag FLAG_SKALD_Q_CARBON_FOUND
	end

ParcelCoastHearing_Carbon_3:
# 82 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CARBON_FOUND, ParcelCoastHearing_Carbon_2
	goto ParcelCoastHearing_Carbon_1


ParcelCoastHearing_Tray::
# 94 "data/maps/ParcelCoastHearing/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelCoastHearing_Tray_1
# 97 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Tray_Text_1, MSGBOX_SIGN
	return

ParcelCoastHearing_Tray_1:
# 95 "data/maps/ParcelCoastHearing/scripts.pory"
	msgbox ParcelCoastHearing_Tray_Text_0, MSGBOX_SIGN
	return


ParcelCoastHearing_Clerk_Text_0:
# 9 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: The hearing's in session. They\n"
	.string "read a CORPS filing into the record this\l"
	.string "morning. Parts of it twice.\p"
	.string "The review board wants the author. I\n"
	.string "told them the author was a RANGER. They\l"
	.string "said that's not a title. I said no, it\l"
	.string "isn't.$"

ParcelCoastHearing_Clerk_Text_1:
# 14 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: Objections in writing, to the\n"
	.string "Board. One came in today that wasn't an\l"
	.string "objection. It was a survey, with a card\l"
	.string "number on it.\p"
	.string "The Board reads everything. I've put\n"
	.string "yours on top. I'm not supposed to have\l"
	.string "a top.$"

ParcelCoastHearing_Clerk_Text_2:
# 18 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "CLERK: Quota hearings are seasonal.\n"
	.string "Next session after the harvest.\l"
	.string "Objections in writing, to the Board. The\l"
	.string "Board reads them. The Board's very good\l"
	.string "at reading.$"

ParcelCoastHearing_Waiter1_Text_0:
# 27 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: That's it. Year four. One\n"
	.string "sentence. I didn't know you were\l"
	.string "allowed more than one.$"

ParcelCoastHearing_Waiter1_Text_1:
# 28 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine again. Here -- my wife\n"
	.string "packs me a lunch for every hearing and\l"
	.string "I never eat it. Nerves. Take it; it keeps\l"
	.string "better than I do.$"

ParcelCoastHearing_Waiter1_Text_2:
# 31 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine carbons and a ranger's\n"
	.string "survey in the same tray. First time the\l"
	.string "tray's had company.$"

ParcelCoastHearing_Waiter1_Text_3:
# 35 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Blue carbon. 'OBJECTION' in\n"
	.string "capitals. Somewhere on this floor.$"

ParcelCoastHearing_Waiter1_Text_4:
# 40 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine objections, nine carbon\n"
	.string "copies, and the tenth one got read into\l"
	.string "the record. I've kept the chair warm\l"
	.string "nine years. It was worth the sitting.$"

ParcelCoastHearing_Waiter1_Text_5:
# 45 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine seasons, nine objections,\n"
	.string "nine carbons. Eight, this morning. The\l"
	.string "fourth year's gone. It was in the folder\l"
	.string "and now it isn't.\p"
	.string "It fell out in here somewhere. The\n"
	.string "benches, the clerk's table, under the\l"
	.string "chairs. A blue carbon, my handwriting,\l"
	.string "'OBJECTION' at the top in capitals,\l"
	.string "because I didn't know how to do it then.\p"
	.string "Find it for me? I can't lose a year. I've\n"
	.string "got too few of them in here as it is.$"

ParcelCoastHearing_Waiter1_Text_6:
# 51 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: Nine seasons, nine objections,\n"
	.string "nine carbons. Today a ranger's survey\l"
	.string "went in the same tray as mine.\p"
	.string "First time I've had company in the tray.\n"
	.string "I've started a tenth. Might as well have\l"
	.string "it ready.$"

ParcelCoastHearing_Waiter1_Text_7:
# 55 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "FISHER: I've sat in this chair every\n"
	.string "season for nine years. Nine objections.\l"
	.string "I keep the carbon copies. Nobody else\l"
	.string "has them.$"

ParcelCoastHearing_Waiter2_Text_0:
# 63 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: They changed the size rule back.\n"
	.string "Nobody told us when they changed it\l"
	.string "the first time. This time there was a\l"
	.string "notice, in the hall, in big letters.\l"
	.string "Progress is a notice.$"

ParcelCoastHearing_Waiter2_Text_1:
# 68 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: The size changed the week\n"
	.string "before and nobody told the fish. Your\l"
	.string "survey says the fish are all one size\l"
	.string "now, so maybe the fish told the size.\p"
	.string "My husband laughed when I said that.\n"
	.string "First time since the grounding.$"

ParcelCoastHearing_Waiter2_Text_2:
# 72 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "WOMAN: My husband's boat was grounded\n"
	.string "for an undersize catch. The size\l"
	.string "changed the week before. Nobody told\l"
	.string "the fish.$"

ParcelCoastHearing_Notice_Text_0:
# 77 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "QUOTA REVIEW BOARD -- members:\n"
	.string "MEREHOLT COASTAL HOLDINGS (3), the\l"
	.string "FOUNDATION (2), the Union (1), the\l"
	.string "Council (1). Quorum: four. The Union\l"
	.string "seat has been vacant for two years.$"

ParcelCoastHearing_Carbon_Text_0:
# 83 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "Behind the clerk's bench, folded small\n"
	.string "where a shoe pushed it: a blue carbon\l"
	.string "copy. OBJECTION, in capitals, pressed\l"
	.string "hard enough to tear.\p"
	.string "The objection is one sentence long. It\n"
	.string "is about the size of a fish.$"

ParcelCoastHearing_Carbon_Text_1:
# 87 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "The clerk's bench. Behind it, the floor\n"
	.string "where nine seasons of chairs have\l"
	.string "scraped the same two lines.$"

ParcelCoastHearing_Tray_Text_0:
# 95 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "The clerk's tray. The record of the\n"
	.string "sitting, typed, still warm from the\l"
	.string "carbon.\p"
	.string "ITEM 7. Objection, Mereholt Coastal\n"
	.string "dredging consent, renewal. Nine prior\l"
	.string "objections noted. The objector was\l"
	.string "heard.\p"
	.string "ITEM 8. Submission, Skaldmere Climate\n"
	.string "Corps, provisional ranger. A field\l"
	.string "survey in forty-one stakes, four\l"
	.string "baselines and one notebook. Entered in\l"
	.string "full.\p"
	.string "ITEM 9. Submission, the Skaldmere\n"
	.string "Survey. Red-cloth baselines, six zones,\l"
	.string "thirty-one years. Entered in full. The\l"
	.string "Commissioner asked whether the markers\l"
	.string "were official. The Surveyor said they\l"
	.string "were older than the office asking.\p"
	.string "ITEM 10. Statement read on behalf of\n"
	.string "Dr. Heron, in her absence, by the ranger.\l"
	.string "Four sentences. Entered. The room was\l"
	.string "silent for a time the clerk did not\l"
	.string "record.\p"
	.string "ITEM 11. The Mereholt Foundation\n"
	.string "recovery model, as tabled by the\l"
	.string "Commissioner in the spring. Withdrawn\l"
	.string "by the Foundation's officer before the\l"
	.string "vote, without comment.\p"
	.string "DISPOSITION. Dredging consent:\n"
	.string "suspended pending review. Permafrost\l"
	.string "exploratory licence: deferred. The\l"
	.string "keystone marsh: referred for listing.\l"
	.string "The chair thanked the room and\l"
	.string "adjourned.\p"
	.string "Someone has written in pencil along the\n"
	.string "bottom edge: nine years for one\l"
	.string "afternoon. Worth it.$"

ParcelCoastHearing_Tray_Text_1:
# 97 "data/maps/ParcelCoastHearing/scripts.pory"
	.string "The clerk's tray. The order of business\n"
	.string "for the next sitting, typed.\p"
	.string "ITEM 1. Minutes. ITEM 2. Apologies. ITEM\n"
	.string "3. The Commissioner's report on\l"
	.string "public-private partnership.\p"
	.string "ITEM 4. Mereholt Coastal, dredging\n"
	.string "consent, renewal. Recommended for\l"
	.string "approval, officer's report attached.\p"
	.string "ITEM 5. Mereholt Permafrost,\n"
	.string "exploratory licence, Haukfell.\l"
	.string "Recommended for approval, officer's\l"
	.string "report attached.\p"
	.string "ITEM 6. Recovery model, Mereholt\n"
	.string "Foundation, tabled for information. Not\l"
	.string "for debate.\p"
	.string "ITEM 7. Objection, from the floor, as in\n"
	.string "previous seasons. Noted.\p"
	.string "Item 7 is one line. It has been one line\n"
	.string "for nine years.$"
