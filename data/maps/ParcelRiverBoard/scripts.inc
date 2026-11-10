ParcelRiverBoard_MapScripts::
	.byte 0


ParcelRiverBoard_Sluice::
# 10 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 11 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 12 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverBoard_Sluice_2
ParcelRiverBoard_Sluice_1:
# 15 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, ParcelRiverBoard_Sluice_5
# 25 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_2, MSGBOX_DEFAULT
# 26 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_3, MSGBOX_YESNO
# 27 "data/maps/ParcelRiverBoard/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiverBoard_Sluice_8
# 30 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_5, MSGBOX_DEFAULT
# 31 "data/maps/ParcelRiverBoard/scripts.pory"
	setflag FLAG_SKALD_EXAM_4
ParcelRiverBoard_Sluice_7:
# 33 "data/maps/ParcelRiverBoard/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM4, ParcelRiverBoard_Sluice_Text_6
# 34 "data/maps/ParcelRiverBoard/scripts.pory"
	setflag FLAG_BADGE04_GET
# 35 "data/maps/ParcelRiverBoard/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 36 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_7, MSGBOX_DEFAULT
# 37 "data/maps/ParcelRiverBoard/scripts.pory"
	giveitem ITEM_HM04
# 38 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_8, MSGBOX_DEFAULT
# 39 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_2:
# 13 "data/maps/ParcelRiverBoard/scripts.pory"
	goto ParcelRiverBoard_Sluice_Rematch
	goto ParcelRiverBoard_Sluice_1

ParcelRiverBoard_Sluice_5:
# 16 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiverBoard_Sluice_12
# 21 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_1, MSGBOX_DEFAULT
# 22 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_8:
# 28 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_4, MSGBOX_DEFAULT
	goto ParcelRiverBoard_Sluice_7

ParcelRiverBoard_Sluice_12:
# 17 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Clerk::
# 44 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 45 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 46 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverBoard_Clerk_2
# 51 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoard_Clerk_5
# 56 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverBoard_Clerk_8
# 61 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Clerk_2:
# 47 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Clerk_5:
# 52 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_1, MSGBOX_DEFAULT
# 53 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Clerk_8:
# 57 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Clerk_Text_2, MSGBOX_DEFAULT
# 58 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Ratepayer::
# 66 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 67 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 68 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverBoard_Ratepayer_2
# 73 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoard_Ratepayer_5
# 78 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverBoard_Ratepayer_8
# 83 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_3, MSGBOX_DEFAULT
# 84 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Ratepayer_2:
# 69 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Ratepayer_5:
# 74 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_1, MSGBOX_DEFAULT
# 75 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Ratepayer_8:
# 79 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ratepayer_Text_2, MSGBOX_DEFAULT
# 80 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Meterman::
# 88 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 89 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 90 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelRiverBoard_Meterman_2
# 95 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiverBoard_Meterman_5
# 100 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiverBoard_Meterman_8
# 105 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_3, MSGBOX_DEFAULT
# 106 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Meterman_2:
# 91 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Meterman_5:
# 96 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_1, MSGBOX_DEFAULT
# 97 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Meterman_8:
# 101 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Meterman_Text_2, MSGBOX_DEFAULT
# 102 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_Ledger::
# 110 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Ledger_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoard_Sluice_Rematch::
# 116 "data/maps/ParcelRiverBoard/scripts.pory"
	lock
# 117 "data/maps/ParcelRiverBoard/scripts.pory"
	faceplayer
# 118 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Rematch_Text_0, MSGBOX_YESNO
# 119 "data/maps/ParcelRiverBoard/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiverBoard_Sluice_Rematch_2
# 124 "data/maps/ParcelRiverBoard/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM4_R, ParcelRiverBoard_Sluice_Rematch_Text_2
# 125 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Rematch_Text_3, MSGBOX_DEFAULT
# 126 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end

ParcelRiverBoard_Sluice_Rematch_2:
# 120 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Sluice_Rematch_Text_1, MSGBOX_DEFAULT
# 121 "data/maps/ParcelRiverBoard/scripts.pory"
	release
	end


ParcelRiverBoard_GaugeBook::
# 133 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_GaugeBook_Text_0, MSGBOX_SIGN
# 134 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK, ParcelRiverBoard_GaugeBook_1
	return

ParcelRiverBoard_GaugeBook_1:
# 135 "data/maps/ParcelRiverBoard/scripts.pory"
	setflag FLAG_SKALD_Q_BOOK_FOUND
	return


ParcelRiverBoard_Allocations::
# 142 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Allocations_Text_0, MSGBOX_SIGN
# 143 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Allocations_Text_1, MSGBOX_SIGN
# 144 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Allocations_Text_2, MSGBOX_SIGN
	end


ParcelRiverBoard_FindDrawer::
# 151 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LABEL, ParcelRiverBoard_FindDrawer_4
ParcelRiverBoard_FindDrawer_3:
# 155 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_FindDrawer_Text_1, MSGBOX_SIGN
ParcelRiverBoard_FindDrawer_1:
	end

ParcelRiverBoard_FindDrawer_2:
# 152 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_FindDrawer_Text_0, MSGBOX_SIGN
# 153 "data/maps/ParcelRiverBoard/scripts.pory"
	setflag FLAG_SKALD_Q_LABEL_FOUND
	goto ParcelRiverBoard_FindDrawer_1

ParcelRiverBoard_FindDrawer_4:
# 151 "data/maps/ParcelRiverBoard/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_LABEL_FOUND, ParcelRiverBoard_FindDrawer_2
	goto ParcelRiverBoard_FindDrawer_3


ParcelRiverBoard_Notice::
# 163 "data/maps/ParcelRiverBoard/scripts.pory"
	msgbox ParcelRiverBoard_Notice_Text_0, MSGBOX_SIGN
	end


ParcelRiverBoard_Sluice_Text_0:
# 17 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: STRESSED. I read your filing.\n"
	.string "I'd have rated it the same, and I'd have\l"
	.string "been overruled.\p"
	.string "You weren't. Interesting.$"

ParcelRiverBoard_Sluice_Text_1:
# 21 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Mind the cut upstream. The\n"
	.string "Board rated it an improvement. I\l"
	.string "metered it. The water disagrees with\l"
	.string "the rating.$"

ParcelRiverBoard_Sluice_Text_2:
# 25 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Sluice Division. Every drop\n"
	.string "that crosses this spine is metered,\l"
	.string "rated, and accounted to someone.\p"
	.string "You want clearance to work this\n"
	.string "watershed? Show me you read a ledger as\l"
	.string "well as a current.$"

ParcelRiverBoard_Sluice_Text_3:
# 26 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: A ledger question first. The\n"
	.string "gauge at the ford reads NORMAL. Does\l"
	.string "that mean the river is normal?$"

ParcelRiverBoard_Sluice_Text_4:
# 28 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: The gauge is normal. The river\n"
	.string "is two hands under the gauge. They\l"
	.string "moved the mark to a new datum and kept\l"
	.string "the word.\p"
	.string "Read the book, not the stamp. The stamp\n"
	.string "is what they pay for.$"

ParcelRiverBoard_Sluice_Text_5:
# 30 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: No. The gauge is normal. The\n"
	.string "river is two hands under it. The mark\l"
	.string "moved and the water didn't.\p"
	.string "You read the book, not the stamp. Good.\n"
	.string "It's the only free reading in this\l"
	.string "office.$"

ParcelRiverBoard_Sluice_Text_6:
# 33 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: …Balanced. Down to the drop.\n"
	.string "The crossing's yours.$"

ParcelRiverBoard_Sluice_Text_7:
# 36 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: That's your Sluice clearance.\n"
	.string "Line item 04. It certifies you fit to\l"
	.string "move what the river leaves in the way.\l"
	.string "Signed, sealed, on the ledger.$"

ParcelRiverBoard_Sluice_Text_8:
# 38 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: STRENGTH. Shoulders a boulder\n"
	.string "out of a channel where it has no\l"
	.string "business sitting.\p"
	.string "The river drops plenty of those. So\n"
	.string "does the Board.$"

ParcelRiverBoard_Clerk_Text_0:
# 47 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations posted, names under\n"
	.string "them, objections open the first of\l"
	.string "every month. I keep the Phase 2 file on\l"
	.string "the counter now.\p"
	.string "Anyone can read it. Almost nobody does.\n"
	.string "The point is the almost.$"

ParcelRiverBoard_Clerk_Text_1:
# 52 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations reposted with six\n"
	.string "names under them. Objections reopened.\l"
	.string "The Phase 2 file came off the shelf and\l"
	.string "into the hearing. You can read it now.\l"
	.string "Everyone can. Nobody asks.$"

ParcelRiverBoard_Clerk_Text_2:
# 57 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations are posted. The\n"
	.string "Phase 2 file has gone to the coast\l"
	.string "office 'for review'. You still can't read\l"
	.string "it. Nobody can; it's on a truck.\p"
	.string "The HAUKFELL relocation forms are on\n"
	.string "the shelf where it was. Ratepayers only.\l"
	.string "There are fewer ratepayers.$"

ParcelRiverBoard_Clerk_Text_3:
# 61 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "CLERK: Allocations are posted.\n"
	.string "Objections are closed. The councilman's\l"
	.string "Phase 2 file is on the shelf and no, you\l"
	.string "can't read it. Ratepayers only. You're\l"
	.string "not a ratepayer.$"

ParcelRiverBoard_Ratepayer_Text_0:
# 69 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered. Cheaper. The\n"
	.string "bore crew's wife has moved to the\l"
	.string "valley.\p"
	.string "I pay for water off a hill nobody's\n"
	.string "drilling. It's the best bill I've had.$"

ParcelRiverBoard_Ratepayer_Text_1:
# 74 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered, still. The rate\n"
	.string "came down a page. I pay for water that\l"
	.string "used to be free and now it's cheaper.\l"
	.string "I'm told that's a win. I'm trying to feel\l"
	.string "it.$"

ParcelRiverBoard_Ratepayer_Text_2:
# 79 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered. And now the\n"
	.string "bore crew's wife is at the counter\l"
	.string "paying for water off a hill that's\l"
	.string "melting into the river.\p"
	.string "The FOUNDATION sells the meters and\n"
	.string "drills the hill. I'd admire it if I weren't\l"
	.string "paying for both.$"

ParcelRiverBoard_Ratepayer_Text_3:
# 83 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "MAN: Plot nine. Metered since spring. I\n"
	.string "pay for water that used to run past my\l"
	.string "gate for nothing.\p"
	.string "The FOUNDATION says the meters are\n"
	.string "fair. The FOUNDATION sells the meters.$"

ParcelRiverBoard_Meterman_Text_0:
# 91 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Fourteen plots, fourteen\n"
	.string "meters, and the readings go to SLUICE\l"
	.string "and then to the window. People read\l"
	.string "them.\p"
	.string "I used to think I was the only one who\n"
	.string "read a meter.$"

ParcelRiverBoard_Meterman_Text_1:
# 96 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Fourteen plots, fourteen\n"
	.string "meters, hourly, and the readings go to\l"
	.string "SLUICE first now, not the coast office.\l"
	.string "She reads them herself. She's a slow\l"
	.string "reader. Deliberately.$"

ParcelRiverBoard_Meterman_Text_2:
# 101 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Readings went up this\n"
	.string "month. All fourteen. SLUICE says it's\l"
	.string "meltwater off the high ground. The\l"
	.string "coast office says it's seasonal.\p"
	.string "The ledger doesn't say anything. It\n"
	.string "just balances, and it balanced higher.$"

ParcelRiverBoard_Meterman_Text_3:
# 105 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "METER READER: Fourteen plots, fourteen\n"
	.string "meters, hourly. The readings go to the\l"
	.string "coast office. SLUICE keeps a copy.\l"
	.string "She's not supposed to. Don't tell her I\l"
	.string "said.$"

ParcelRiverBoard_Ledger_Text_0:
# 110 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "THE ALLOCATION LEDGER. Plots 1-14,\n"
	.string "metered flow, rates. A column headed\l"
	.string "PHASE 2 -- UPSTREAM RESERVE. The\l"
	.string "reserve is the clean reach, allocated in\l"
	.string "full. To the Foundation.$"

ParcelRiverBoard_Sluice_Rematch_Text_0:
# 118 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: The hearing rated your filing. I\n"
	.string "metered it. For once the rating and the\l"
	.string "meter agree.\p"
	.string "I'd like a balance read at full flow. No\n"
	.string "clearance on the end of it. Will you?$"

ParcelRiverBoard_Sluice_Rematch_Text_1:
# 120 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Noted. The ledger keeps.$"

ParcelRiverBoard_Sluice_Rematch_Text_2:
# 124 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: …Balanced. Down to the drop,\n"
	.string "again.$"

ParcelRiverBoard_Sluice_Rematch_Text_3:
# 125 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "SLUICE: Come back when the gauge\n"
	.string "moves. It will.$"

ParcelRiverBoard_GaugeBook_Text_0:
# 133 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "The gauge book, open on the counter.\n"
	.string "One line a week, in different hands, for\l"
	.string "a long time.\p"
	.string "The early pages are wet. Spring\n"
	.string "readings over the top mark, the word\l"
	.string "FLOOD in the margin twice a year, a note\l"
	.string "that the ford was impassable from thaw\l"
	.string "to midsummer.\p"
	.string "The middle pages are the book the Board\n"
	.string "quotes. The gauge reads NORMAL for\l"
	.string "eleven years running. The hand is the\l"
	.string "same hand all the way through, neat,\l"
	.string "unhurried.\p"
	.string "The last pages are dry. Two hands below\n"
	.string "the mark. Three. A week with no reading\l"
	.string "and a note: gauge out of water, reset\l"
	.string "to new datum.\p"
	.string "NORMAL was never crossed out. They\n"
	.string "moved the mark.$"

ParcelRiverBoard_Allocations_Text_0:
# 142 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "The Board's ledger of allocations,\n"
	.string "chained to the shelf like the gauge\l"
	.string "book. Who may take how much from the\l"
	.string "Elvsund, by year, in the clerk's hand.\p"
	.string "The early pages are short. Mills: two.\n"
	.string "Farms: eleven, a rod each. The town:\l"
	.string "drinking and the wash-house. The river:\l"
	.string "the rest, unwritten, because nobody\l"
	.string "thought to write what was not taken.$"

ParcelRiverBoard_Allocations_Text_1:
# 143 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "The middle pages lengthen. Farms:\n"
	.string "thirty, and the rods become pipes.\l"
	.string "Mereholt Logistics, for the depot: a\l"
	.string "figure. Mereholt Coastal, for the cold\l"
	.string "store: a figure. Irrigation improvement\l"
	.string "scheme, Foundation grant: the largest\l"
	.string "figure on the page, in a different ink.\p"
	.string "The last pages are the sum. Allocations\n"
	.string "exceed the mean summer flow in seven of\l"
	.string "the last ten years. The clerk has\l"
	.string "written the gauge's figure beside the\l"
	.string "total and drawn no line between them.\l"
	.string "Nobody has asked the clerk to.$"

ParcelRiverBoard_Allocations_Text_2:
# 144 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "On the inside cover, newest, the Board's\n"
	.string "stamp and SLUICE's initial: When the\l"
	.string "sum is larger than the river, the river\l"
	.string "decides. It has started deciding.$"

ParcelRiverBoard_FindDrawer_Text_0:
# 152 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "The bottom drawer behind the Board's\n"
	.string "counter, a card in a brass holder:\l"
	.string "CORRESPONDENCE, PUBLIC, ANECDOTAL.\l"
	.string "Inside, a shoebox, and in the shoebox\l"
	.string "forty years of a fisherman's notes,\l"
	.string "dated, depths in a hand that got\l"
	.string "shakier and never got less exact.\p"
	.string "Someone has crossed out ANECDOTAL on\n"
	.string "the card in pencil and written nothing\l"
	.string "in its place yet.$"

ParcelRiverBoard_FindDrawer_Text_1:
# 155 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "The bottom drawer. CORRESPONDENCE,\n"
	.string "PUBLIC, and a word crossed out. The\l"
	.string "shoebox is still inside.$"

ParcelRiverBoard_Notice_Text_0:
# 163 "data/maps/ParcelRiverBoard/scripts.pory"
	.string "A notice on the Board's counter:\n"
	.string "OBJECTIONS ARE RECEIVED THE FIRST OF\l"
	.string "EACH MONTH.\p"
	.string "Under it, in the clerk's hand: and read.\n"
	.string "The second line is new. The clerk has\l"
	.string "initialled it, which clerks do not do.$"
