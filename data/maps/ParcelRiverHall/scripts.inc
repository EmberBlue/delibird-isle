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
# 45 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_11, MSGBOX_DEFAULT
# 46 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_12, MSGBOX_DEFAULT
ParcelRiverHall_Meeting_9:
# 48 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Meeting_Text_13, MSGBOX_DEFAULT
# 49 "data/maps/ParcelRiverHall/scripts.pory"
	setflag FLAG_SKALD_RIV_MEETING_DONE
# 50 "data/maps/ParcelRiverHall/scripts.pory"
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
# 43 "data/maps/ParcelRiverHall/scripts.pory"
	setflag FLAG_SKALD_CH_SPOKE
	goto ParcelRiverHall_Meeting_9


ParcelRiverHall_Mayor::
# 55 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 56 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 57 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Mayor_2
# 62 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHall_Mayor_5
# 67 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALD_RIV_MEETING_DONE, ParcelRiverHall_Mayor_8
# 72 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_3, MSGBOX_DEFAULT
# 73 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Mayor_2:
# 58 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Mayor_5:
# 63 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Mayor_8:
# 68 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Mayor_Text_2, MSGBOX_DEFAULT
# 69 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Harland::
# 77 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 78 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Harland_2
# 84 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHall_Harland_5
# 89 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Harland_Text_2, MSGBOX_DEFAULT
# 90 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Harland_2:
# 80 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Harland_Text_0, MSGBOX_DEFAULT
# 81 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Harland_5:
# 85 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Harland_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Farmer::
# 94 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 95 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 96 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Farmer_2
# 101 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHall_Farmer_5
# 106 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Farmer_Text_2, MSGBOX_DEFAULT
# 107 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Farmer_2:
# 97 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Farmer_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Farmer_5:
# 102 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Farmer_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Dell::
# 111 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 112 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 113 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Dell_2
# 118 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHall_Dell_5
# 123 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dell_Text_2, MSGBOX_DEFAULT
# 124 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Dell_2:
# 114 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dell_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Dell_5:
# 119 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dell_Text_1, MSGBOX_DEFAULT
# 120 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Sluice::
# 128 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 129 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 130 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Sluice_2
# 135 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHall_Sluice_5
# 140 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Sluice_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Sluice_2:
# 131 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Sluice_Text_0, MSGBOX_DEFAULT
# 132 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Sluice_5:
# 136 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Sluice_Text_1, MSGBOX_DEFAULT
# 137 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Dorsey::
# 145 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 146 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Dorsey_2
# 152 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHall_Dorsey_5
# 157 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dorsey_Text_2, MSGBOX_DEFAULT
# 158 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Dorsey_2:
# 148 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dorsey_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Dorsey_5:
# 153 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Dorsey_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Ilex::
# 162 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 163 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 164 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Ilex_2
# 169 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverHall_Ilex_5
# 174 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Ilex_Text_2, MSGBOX_DEFAULT
# 175 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Ilex_2:
# 165 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Ilex_Text_0, MSGBOX_DEFAULT
# 166 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Ilex_5:
# 170 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Ilex_Text_1, MSGBOX_DEFAULT
# 171 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_Woman::
# 179 "data/maps/ParcelRiverHall/scripts.pory"
	lock
# 180 "data/maps/ParcelRiverHall/scripts.pory"
	faceplayer
# 181 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverHall_Woman_2
# 186 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverHall_Woman_5
# 191 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Woman_Text_2, MSGBOX_DEFAULT
# 192 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Woman_2:
# 182 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Woman_Text_0, MSGBOX_DEFAULT
# 183 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end

ParcelRiverHall_Woman_5:
# 187 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Woman_Text_1, MSGBOX_DEFAULT
# 188 "data/maps/ParcelRiverHall/scripts.pory"
	release
	end


ParcelRiverHall_CrateLabel::
# 197 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_set FLAG_SKALD_Q_CRATE, ParcelRiverHall_CrateLabel_3
ParcelRiverHall_CrateLabel_1:
# 202 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_CrateLabel_Text_1, MSGBOX_SIGN
	end

ParcelRiverHall_CrateLabel_2:
# 198 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_CrateLabel_Text_0, MSGBOX_SIGN
# 199 "data/maps/ParcelRiverHall/scripts.pory"
	setflag FLAG_SKALD_Q_CRATE_FOUND
	end

ParcelRiverHall_CrateLabel_3:
# 197 "data/maps/ParcelRiverHall/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_CRATE_FOUND, ParcelRiverHall_CrateLabel_2
	goto ParcelRiverHall_CrateLabel_1


ParcelRiverHall_Petition::
# 209 "data/maps/ParcelRiverHall/scripts.pory"
	msgbox ParcelRiverHall_Petition_Text_0, MSGBOX_SIGN
	return


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
# 45 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: Then I'll say it for the record.\n"
	.string "Relieve what's reversible. Refuse the\l"
	.string "straightened mile. The RANGER's survey\l"
	.string "will say the same; I've read the\l"
	.string "notebook.$"

ParcelRiverHall_Meeting_Text_12:
# 46 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: Noted.$"

ParcelRiverHall_Meeting_Text_13:
# 48 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Vote. Hands. …Carried, against.\n"
	.string "The Board will proceed. It always\l"
	.string "proceeds.\p"
	.string "Thank you all. Mind the step.$"

ParcelRiverHall_Mayor_Text_0:
# 58 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Carried, against, nine years, and\n"
	.string "the hearing counted every one of them.\l"
	.string "They read our minutes into the record.\l"
	.string "Nine years of minutes. The clerk's hand\l"
	.string "was shaking. Mine too.$"

ParcelRiverHall_Mayor_Text_1:
# 63 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Carried, against, and the Board\n"
	.string "didn't count it, and then HAUKFELL's\l"
	.string "ground let go and suddenly everyone's\l"
	.string "asking what 'flood control' means when\l"
	.string "the water's coming from above.\p"
	.string "It's in the minutes. Nine years, and this\n"
	.string "is the first year the minutes travelled.$"

ParcelRiverHall_Mayor_Text_2:
# 68 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Carried, against. Nine years I've\n"
	.string "been chairing votes the Board doesn't\l"
	.string "count.\p"
	.string "Still. It's in the minutes now. Your\n"
	.string "name's in the minutes.$"

ParcelRiverHall_Mayor_Text_3:
# 72 "data/maps/ParcelRiverHall/scripts.pory"
	.string "MAYOR: Water meeting at noon. Walk the\n"
	.string "bank first, RANGER. Everyone in this\l"
	.string "room has. Most of them twice.$"

ParcelRiverHall_Harland_Text_0:
# 80 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: The mayor asked me to speak\n"
	.string "at the hearing. I spoke. I'd still rather\l"
	.string "be on the water. There's a little more of\l"
	.string "it this year to be on.$"

ParcelRiverHall_Harland_Text_1:
# 85 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: The vote went against us and\n"
	.string "the Board's publishing both numbers\l"
	.string "anyway. Somebody read the room better\l"
	.string "than the room did.\p"
	.string "I'm going back to the water while\n"
	.string "there's a season of it. There's a little\l"
	.string "more this year. Don't tell me why; I'll\l"
	.string "find out.$"

ParcelRiverHall_Harland_Text_2:
# 89 "data/maps/ParcelRiverHall/scripts.pory"
	.string "HARLAND: I'm here because the mayor\n"
	.string "asked. I'd rather be on the water.\l"
	.string "There's less of it every year to be on.$"

ParcelRiverHall_Farmer_Text_0:
# 97 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Plot nine. Metered. The sign's\n"
	.string "still up. The number on it is lower.$"

ParcelRiverHall_Farmer_Text_1:
# 102 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Plot nine. Metered. The hill's\n"
	.string "melting into my allocation and I'm\l"
	.string "charged for it by the litre.$"

ParcelRiverHall_Farmer_Text_2:
# 106 "data/maps/ParcelRiverHall/scripts.pory"
	.string "FARMER: Plot nine. Metered. You've seen\n"
	.string "the sign.$"

ParcelRiverHall_Dell_Text_0:
# 114 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DELL: Forty years, and somebody wrote\n"
	.string "it down, and then somebody read it\l"
	.string "aloud. I've nothing left to say till\l"
	.string "somebody does something. Then I'll say\l"
	.string "more.$"

ParcelRiverHall_Dell_Text_1:
# 119 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DELL: Forty years, and somebody wrote\n"
	.string "it down. In a notebook, in my own words,\l"
	.string "with the date.\p"
	.string "I've started sleeping through the\n"
	.string "night. I don't trust it yet. Forty years\l"
	.string "of not sleeping is a habit, same as the\l"
	.string "other.$"

ParcelRiverHall_Dell_Text_2:
# 123 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DELL: Forty years. I'll say it till\n"
	.string "somebody writes it down.$"

ParcelRiverHall_Sluice_Text_0:
# 131 "data/maps/ParcelRiverHall/scripts.pory"
	.string "SLUICE: The ledger balanced in public\n"
	.string "for once. The councilman watched it\l"
	.string "balance. I'm told he didn't enjoy it. The\l"
	.string "ledger didn't care.$"

ParcelRiverHall_Sluice_Text_1:
# 136 "data/maps/ParcelRiverHall/scripts.pory"
	.string "SLUICE: The ledger balanced in front of\n"
	.string "forty-one people. That has never\l"
	.string "happened in this building.\p"
	.string "The councilman has asked for the ledger\n"
	.string "to be kept in his office for safety. I\l"
	.string "have declined. In writing. Once. That is\l"
	.string "the correct number of times.$"

ParcelRiverHall_Sluice_Text_2:
# 140 "data/maps/ParcelRiverHall/scripts.pory"
	.string "SLUICE: The ledger doesn't vote. It\n"
	.string "just balances. Someone should tell the\l"
	.string "councilman.$"

ParcelRiverHall_Dorsey_Text_0:
# 148 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: I lost an argument in public. I\n"
	.string "said I'd rather. I meant it. I still mean\l"
	.string "it. It's harder than I made it sound.$"

ParcelRiverHall_Dorsey_Text_1:
# 153 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: I lost the vote and won the\n"
	.string "argument, or the other way about. I've\l"
	.string "stopped being sure which I'd prefer.\p"
	.string "Phase 2 proceeds. The Board publishes\n"
	.string "two columns. Call it a draw that nobody\l"
	.string "drew.$"

ParcelRiverHall_Dorsey_Text_2:
# 157 "data/maps/ParcelRiverHall/scripts.pory"
	.string "DORSEY: I'd rather lose an argument in\n"
	.string "public than win one in a report. I say\l"
	.string "that a lot. I mean it every time.$"

ParcelRiverHall_Ilex_Text_0:
# 165 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: The bank above the town. I still\n"
	.string "go. The river has a name on it now. Yours\l"
	.string "and mine, and the hearing's stamp under\l"
	.string "both.$"

ParcelRiverHall_Ilex_Text_1:
# 170 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: Stressed, not shifted. I said it\n"
	.string "in this hall and the hall heard it, which\l"
	.string "is a different thing from being right.\p"
	.string "Go up the river. The mountain won't let\n"
	.string "you say stressed. I've measured it; it\l"
	.string "won't.$"

ParcelRiverHall_Ilex_Text_2:
# 174 "data/maps/ParcelRiverHall/scripts.pory"
	.string "ILEX: I'll be at the bank, above the\n"
	.string "town. Come put a name on the river when\l"
	.string "you've read all of it.$"

ParcelRiverHall_Woman_Text_0:
# 182 "data/maps/ParcelRiverHall/scripts.pory"
	.string "WOMAN: I came to every meeting and\n"
	.string "nothing changed, and then one meeting\l"
	.string "was read into a hearing and something\l"
	.string "did. I'm still coming. Now I know why.$"

ParcelRiverHall_Woman_Text_1:
# 187 "data/maps/ParcelRiverHall/scripts.pory"
	.string "WOMAN: I came to every meeting and\n"
	.string "nothing changed, and then one changed,\l"
	.string "and now there's a family from HAUKFELL\l"
	.string "in the back row who've never been to a\l"
	.string "meeting in their lives.\p"
	.string "I showed them where the tea is. That's\n"
	.string "the only thing I can think of to do. It's\l"
	.string "more than it was.$"

ParcelRiverHall_Woman_Text_2:
# 191 "data/maps/ParcelRiverHall/scripts.pory"
	.string "WOMAN: I come to every meeting. Nothing\n"
	.string "changes. I keep coming. That's the only\l"
	.string "thing I can think of to do.$"

ParcelRiverHall_CrateLabel_Text_0:
# 198 "data/maps/ParcelRiverHall/scripts.pory"
	.string "Under the edge of the trestle table, a\n"
	.string "crate label on a loop of string:\l"
	.string "SKALDMERE SURVEY -- SOIL CORES 1-40\l"
	.string "-- EVIDENCE. The writing is very neat.\p"
	.string "A boot has been on it. The ink held.$"

ParcelRiverHall_CrateLabel_Text_1:
# 202 "data/maps/ParcelRiverHall/scripts.pory"
	.string "Under the trestle table: dust, a chair\n"
	.string "leg mended with wire, and the marks\l"
	.string "where crates were stacked for the\l"
	.string "meeting.$"

ParcelRiverHall_Petition_Text_0:
# 209 "data/maps/ParcelRiverHall/scripts.pory"
	.string "The ratepayers' petition, on the side\n"
	.string "table where the hall keeps what it is\l"
	.string "not sure it is allowed to keep.\p"
	.string "WE, THE UNDERSIGNED, holders of water\n"
	.string "rights on the lower river, ask the Board\l"
	.string "to state in writing the year against\l"
	.string "which the gauge reads NORMAL.\p"
	.string "Forty-one signatures. Farmers, the\n"
	.string "boatyard, two mills, the chandler, a\l"
	.string "child who signed under a parent and was\l"
	.string "allowed to.\p"
	.string "The Board's reply is clipped to it, one\n"
	.string "paragraph. The gauge is calibrated to\l"
	.string "the standard datum. The Board does not\l"
	.string "comment on individual readings. Thank\l"
	.string "you for your interest in the river.\p"
	.string "Someone has written under the reply:\n"
	.string "which year. Three times. Each time\l"
	.string "larger.$"
