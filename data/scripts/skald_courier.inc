Skald_EventScript_Courier::
# 4 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, Skald_EventScript_Courier_2
# 6 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, Skald_EventScript_Courier_3
# 8 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, Skald_EventScript_Courier_4
# 10 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, Skald_EventScript_Courier_5
# 12 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, Skald_EventScript_Courier_6
# 14 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, Skald_EventScript_Courier_7
# 17 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_6, MSGBOX_SIGN
Skald_EventScript_Courier_1:
	end

Skald_EventScript_Courier_2:
# 5 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_0, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_3:
# 7 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_1, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_4:
# 9 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_2, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_5:
# 11 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_3, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_6:
# 13 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_4, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_7:
# 15 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_5, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1


Skald_EventScript_Courier_Text_0:
# 5 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. Above the fold,\n"
	.string "under INGER's name: ITEM SEVEN TOOK\l"
	.string "THE AFTERNOON.\p"
	.string "A ranger's survey, the Survey's\n"
	.string "thirty-one years of baselines and a\l"
	.string "statement read for Dr. Heron in her\l"
	.string "absence were entered in full at\l"
	.string "Tuesday's sitting. The Foundation's\l"
	.string "recovery model was withdrawn before\l"
	.string "the vote. Dredging consent suspended\l"
	.string "pending review; the Permafrost licence\l"
	.string "deferred; the keystone marsh referred\l"
	.string "for listing.\p"
	.string "Below the fold, the Commissioner's\n"
	.string "reply, two paragraphs, headlined\l"
	.string "DEVELOPMENT THAT LISTENS. The\l"
	.string "quotation marks around LISTENS are the\l"
	.string "paper's.$"

Skald_EventScript_Courier_Text_1:
# 7 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. FORTY JOBS:\n"
	.string "QUAY EXPANSION APPROVED IN PRINCIPLE.\l"
	.string "The Commissioner, photographed beside\l"
	.string "the model: six berths, a cold store, a\l"
	.string "turbine where the union hall stands.\p"
	.string "Page four, under INGER's name:\n"
	.string "THIRTY-ONE. A count of the jobs on the\l"
	.string "quay, by name, with a note that nine are\l"
	.string "described by the Foundation as in the\l"
	.string "pipeline. The paper has asked which\l"
	.string "pipeline. The question is printed. The\l"
	.string "answer is not.$"

Skald_EventScript_Courier_Text_2:
# 9 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. HAUKFELL SLIDE\n"
	.string "A WEATHER EVENT, SAYS BOARD. Three\l"
	.string "fields in two years; the Highland\l"
	.string "Operations officer declines to comment\l"
	.string "on the exploratory bore.\p"
	.string "The facing column: FOUNDATION OPENS\n"
	.string "WARMING CENTRE. A photograph of a\l"
	.string "ribbon. The two stories are separated\l"
	.string "by a rule and a date, two weeks apart.\l"
	.string "Nobody at the paper put them side by\l"
	.string "side. Everybody at the paper put them\l"
	.string "on the same page.$"

Skald_EventScript_Courier_Text_3:
# 11 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. ELVSUND\n"
	.string "RATEPAYERS ASK THE BOARD: WHICH YEAR?\l"
	.string "Forty-one signatures and a reply of\l"
	.string "one paragraph, printed in full because\l"
	.string "it is one paragraph.\p"
	.string "A photograph of the meeting from the\n"
	.string "back of the hall. A ranger is in it,\l"
	.string "writing. The caption does not name the\l"
	.string "ranger. The caption says: the record.$"

Skald_EventScript_Courier_Text_4:
# 13 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. Page two:\n"
	.string "COMMISSIONER: NO EVIDENCE OF\l"
	.string "CONTAMINATION AT REEDMERE. Page four,\l"
	.string "under INGER's name: THE PIPE UNDER THE\l"
	.string "FALLS, and a photograph of a manifest,\l"
	.string "waterlogged, every line legible.\p"
	.string "The front page is a ribbon-cutting.\n"
	.string "That is the ratio, this week and every\l"
	.string "week.$"

Skald_EventScript_Courier_Text_5:
# 15 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. FIRST FOREST\n"
	.string "CERTIFICATION OUT OF SALTWICK IN NINE\l"
	.string "YEARS. A provisional from Johto, the\l"
	.string "hall confirms; the name is not given.\p"
	.string "Below it, still: LAB ON THE FRONT\n"
	.string "CLEARED OVERNIGHT; POLICE SAY\l"
	.string "BURGLARY. The paper has used the word\l"
	.string "three weeks running and has started\l"
	.string "putting it in quotation marks.$"

Skald_EventScript_Courier_Text_6:
# 17 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. LAB ON THE\n"
	.string "FRONT CLEARED OVERNIGHT. Police say\l"
	.string "burglary. The tenant, a regional\l"
	.string "ecologist, could not be reached. A\l"
	.string "Mereholt Logistics spokesman said the\l"
	.string "company had no comment and had not\l"
	.string "been asked for one.\p"
	.string "Under it, smaller: FERRY TIMETABLE\n"
	.string "REDUCED FOR WINTER. Everything else on\l"
	.string "the page is weather.$"
