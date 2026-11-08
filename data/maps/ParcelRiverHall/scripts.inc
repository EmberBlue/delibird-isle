ParcelRiverHall_MapScripts::
# 14 "data/maps/ParcelRiverHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelRiverHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelRiverHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/ParcelRiverHall/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelRiverHall_Meeting
	.2byte 0


ParcelRiverHall_Meeting::
# 20 "data/maps/ParcelRiverHall/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALD_RIV_MEETING_DONE, ParcelRiverHall_Meeting_2
# 21 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHall_Meeting_2
# 24 "data/maps/ParcelRiverHall/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 25 "data/maps/ParcelRiverHall/scripts.pory"
	setvar VAR_0x8004, 15
# 26 "data/maps/ParcelRiverHall/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 27 "data/maps/ParcelRiverHall/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ne ParcelRiverHall_Meeting_7
# 30 "data/maps/ParcelRiverHall/scripts.pory"
	lockall
# 31 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_3, MSGBOX_DEFAULT
# 35 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_4, MSGBOX_DEFAULT
# 36 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_5, MSGBOX_DEFAULT
# 37 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_6, MSGBOX_DEFAULT
# 38 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_7, MSGBOX_YESNO
# 39 "data/maps/ParcelRiverHall/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiverHall_Meeting_10
# 44 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_11, MSGBOX_DEFAULT
# 45 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_12, MSGBOX_DEFAULT
ParcelRiverHall_Meeting_9:
# 47 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_13, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiverHall/scripts.pory"
	setflag FLAG_SKALD_RIV_MEETING_DONE
# 49 "data/maps/ParcelRiverHall/scripts.pory"
	releaseall
	end

ParcelRiverHall_Meeting_2:
	end

ParcelRiverHall_Meeting_7:
	end

ParcelRiverHall_Meeting_10:
# 40 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_8, MSGBOX_DEFAULT
# 41 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_9, MSGBOX_DEFAULT
# 42 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_10, MSGBOX_DEFAULT
	goto ParcelRiverHall_Meeting_9


ParcelRiverHall_Mayor::
# 54 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 55 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 56 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Mayor_2
# 61 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHall_Mayor_5
# 66 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALD_RIV_MEETING_DONE, ParcelRiverHall_Mayor_8
# 71 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Mayor_2:
# 57 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Mayor_5:
# 62 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_1, MSGBOX_DEFAULT
# 63 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Mayor_8:
# 67 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_2, MSGBOX_DEFAULT
# 68 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Harland::
# 76 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 77 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 78 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Harland_2
# 83 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Harland_Text_1, MSGBOX_DEFAULT
# 84 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Harland_2:
# 79 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Harland_Text_0, MSGBOX_DEFAULT
# 80 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Farmer::
# 88 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 89 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 90 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Farmer_2
# 95 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHall_Farmer_5
# 100 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Farmer_Text_2, MSGBOX_DEFAULT
# 101 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Farmer_2:
# 91 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Farmer_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Farmer_5:
# 96 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Farmer_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Dell::
# 105 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 106 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 107 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Dell_2
# 112 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dell_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Dell_2:
# 108 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dell_Text_0, MSGBOX_DEFAULT
# 109 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Sluice::
# 117 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 118 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Sluice_2
# 124 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Sluice_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Sluice_2:
# 120 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Sluice_Text_0, MSGBOX_DEFAULT
# 121 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Dorsey::
# 129 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 130 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 131 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Dorsey_2
# 136 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dorsey_Text_1, MSGBOX_DEFAULT
# 137 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Dorsey_2:
# 132 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dorsey_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Ilex::
# 141 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 142 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 143 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Ilex_2
# 148 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Ilex_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Ilex_2:
# 144 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Ilex_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Woman::
# 153 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 154 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 155 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Woman_2
# 160 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHall_Woman_5
# 165 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Woman_Text_2, MSGBOX_DEFAULT
# 166 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Woman_2:
# 156 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Woman_Text_0, MSGBOX_DEFAULT
# 157 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Woman_5:
# 161 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Woman_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Meeting_Text_0:
# 31 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: --order. Order. The RANGER's\n"
	.string "here. Good. Sit anywhere, there's\l"
	.string "nowhere to sit.\p"
	.string "One item. The Board's Phase 2. Upstream\n"
	.string "works. Everyone gets a say and then we\l"
	.string "vote and then the Board does what it\l"
	.string "was going to do anyway. FARMER.$"

ParcelRiverHall_Meeting_Text_1:
# 32 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Fourteen plots metered since\n"
	.string "spring. Water that ran past my gate for\l"
	.string "nothing, I now pay for. Phase 2 puts a\l"
	.string "reserve on the clean reach. Whose\l"
	.string "reserve? Not mine.$"

ParcelRiverHall_Meeting_Text_2:
# 33 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: The cut took the pools. No\n"
	.string "pools, no fish. The Board says Phase 2\l"
	.string "stops the floods. My gear's in the river\l"
	.string "every spring. I don't need a plan. I need\l"
	.string "the floods to stop.$"

ParcelRiverHall_Meeting_Text_3:
# 34 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DELL: Forty years. SEAKING by the\n"
	.string "armful. There's one left and OTTAR's got\l"
	.string "it. You can meter what you like, there's\l"
	.string "nothing left to meter.$"

ParcelRiverHall_Meeting_Text_4:
# 35 "data/maps/ParcelRiverHall/scripts.pory"
	.string "SLUICE: Every drop is accounted. Phase\n"
	.string "2 is a straightened mile and a reserve.\l"
	.string "The reserve is accounted to the\l"
	.string "FOUNDATION. That's not an opinion. It's\l"
	.string "the ledger.$"

ParcelRiverHall_Meeting_Text_5:
# 36 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: Six farms lost gear last spring.\n"
	.string "Six. Phase 2 is flood control. I'm not\l"
	.string "here to argue ledgers, SLUICE. I'm here\l"
	.string "because when the water comes up,\l"
	.string "somebody has to have done something.$"

ParcelRiverHall_Meeting_Text_6:
# 37 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: The reach above the town is the\n"
	.string "last clean water on this river. Phase 2\l"
	.string "cuts a straight channel through it.\l"
	.string "Flood control that finishes the slack\l"
	.string "water isn't relief. It's the end,\l"
	.string "scheduled.$"

ParcelRiverHall_Meeting_Text_7:
# 38 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: RANGER. You've walked the bank,\n"
	.string "I'm told. Say your piece?$"

ParcelRiverHall_Meeting_Text_8:
# 40 "data/maps/ParcelRiverHall/scripts.pory"
	.string "{PLAYER}: The clean reach is the\n"
	.string "baseline. It's what the whole river was.\l"
	.string "Phase 2 removes it.\p"
	.string "Relieve what's reversible. The buffer\n"
	.string "strip. The bloom. Fish passage. Refuse\l"
	.string "the straightened mile. That's the\l"
	.string "survey. That's what I'll file.$"

ParcelRiverHall_Meeting_Text_9:
# 41 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: …Noted. Loudly.$"

ParcelRiverHall_Meeting_Text_10:
# 42 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: Write it so somebody with a\n"
	.string "pen believes it.$"

ParcelRiverHall_Meeting_Text_11:
# 44 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: Then I'll say it for the record.\n"
	.string "Relieve what's reversible. Refuse the\l"
	.string "straightened mile. The RANGER's survey\l"
	.string "will say the same; I've read the\l"
	.string "notebook.$"

ParcelRiverHall_Meeting_Text_12:
# 45 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: Noted.$"

ParcelRiverHall_Meeting_Text_13:
# 47 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Vote. Hands. …Carried, against.\n"
	.string "The Board will proceed. It always\l"
	.string "proceeds.\p"
	.string "Thank you all. Mind the step.$"

ParcelRiverHall_Mayor_Text_0:
# 57 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Carried, against, nine years, and\n"
	.string "the hearing counted every one of them.\l"
	.string "They read our minutes into the record.\l"
	.string "Nine years of minutes. The clerk's hand\l"
	.string "was shaking. Mine too.$"

ParcelRiverHall_Mayor_Text_1:
# 62 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Carried, against, and the Board\n"
	.string "didn't count it, and then HAUKFELL's\l"
	.string "ground let go and suddenly everyone's\l"
	.string "asking what 'flood control' means when\l"
	.string "the water's coming from above.\p"
	.string "It's in the minutes. Nine years, and this\n"
	.string "is the first year the minutes travelled.$"

ParcelRiverHall_Mayor_Text_2:
# 67 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Carried, against. Nine years I've\n"
	.string "been chairing votes the Board doesn't\l"
	.string "count.\p"
	.string "Still. It's in the minutes now. Your\n"
	.string "name's in the minutes.$"

ParcelRiverHall_Mayor_Text_3:
# 71 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Water meeting at noon. Walk the\n"
	.string "bank first, RANGER. Everyone in this\l"
	.string "room has. Most of them twice.$"

ParcelRiverHall_Harland_Text_0:
# 79 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: The mayor asked me to speak\n"
	.string "at the hearing. I spoke. I'd still rather\l"
	.string "be on the water. There's a little more of\l"
	.string "it this year to be on.$"

ParcelRiverHall_Harland_Text_1:
# 83 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: I'm here because the mayor\n"
	.string "asked. I'd rather be on the water.\l"
	.string "There's less of it every year to be on.$"

ParcelRiverHall_Farmer_Text_0:
# 91 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Plot nine. Metered. The sign's\n"
	.string "still up. The number on it is lower.$"

ParcelRiverHall_Farmer_Text_1:
# 96 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Plot nine. Metered. The hill's\n"
	.string "melting into my allocation and I'm\l"
	.string "charged for it by the litre.$"

ParcelRiverHall_Farmer_Text_2:
# 100 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Plot nine. Metered. You've seen\n"
	.string "the sign.$"

ParcelRiverHall_Dell_Text_0:
# 108 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DELL: Forty years, and somebody wrote\n"
	.string "it down, and then somebody read it\l"
	.string "aloud. I've nothing left to say till\l"
	.string "somebody does something. Then I'll say\l"
	.string "more.$"

ParcelRiverHall_Dell_Text_1:
# 112 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DELL: Forty years. I'll say it till\n"
	.string "somebody writes it down.$"

ParcelRiverHall_Sluice_Text_0:
# 120 "data/maps/ParcelRiverHall/scripts.pory"
	.string "SLUICE: The ledger balanced in public\n"
	.string "for once. The councilman watched it\l"
	.string "balance. I'm told he didn't enjoy it. The\l"
	.string "ledger didn't care.$"

ParcelRiverHall_Sluice_Text_1:
# 124 "data/maps/ParcelRiverHall/scripts.pory"
	.string "SLUICE: The ledger doesn't vote. It\n"
	.string "just balances. Someone should tell the\l"
	.string "councilman.$"

ParcelRiverHall_Dorsey_Text_0:
# 132 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: I lost an argument in public. I\n"
	.string "said I'd rather. I meant it. I still mean\l"
	.string "it. It's harder than I made it sound.$"

ParcelRiverHall_Dorsey_Text_1:
# 136 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: I'd rather lose an argument in\n"
	.string "public than win one in a report. I say\l"
	.string "that a lot. I mean it every time.$"

ParcelRiverHall_Ilex_Text_0:
# 144 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: The bank above the town. I still\n"
	.string "go. The river has a name on it now. Yours\l"
	.string "and mine, and the hearing's stamp under\l"
	.string "both.$"

ParcelRiverHall_Ilex_Text_1:
# 148 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: I'll be at the bank, above the\n"
	.string "town. Come put a name on the river when\l"
	.string "you've read all of it.$"

ParcelRiverHall_Woman_Text_0:
# 156 "data/maps/ParcelRiverHall/scripts.pory"
	.string "WOMAN: I came to every meeting and\n"
	.string "nothing changed, and then one meeting\l"
	.string "was read into a hearing and something\l"
	.string "did. I'm still coming. Now I know why.$"

ParcelRiverHall_Woman_Text_1:
# 161 "data/maps/ParcelRiverHall/scripts.pory"
	.string "WOMAN: I came to every meeting and\n"
	.string "nothing changed, and then one changed,\l"
	.string "and now there's a family from HAUKFELL\l"
	.string "in the back row who've never been to a\l"
	.string "meeting in their lives.\p"
	.string "I showed them where the tea is. That's\n"
	.string "the only thing I can think of to do. It's\l"
	.string "more than it was.$"

ParcelRiverHall_Woman_Text_2:
# 165 "data/maps/ParcelRiverHall/scripts.pory"
	.string "WOMAN: I come to every meeting. Nothing\n"
	.string "changes. I keep coming. That's the only\l"
	.string "thing I can think of to do.$"
