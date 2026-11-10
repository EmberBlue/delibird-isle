Skald_EventScript_Courier::
# 4 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, Skald_EventScript_Courier_2
# 7 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, Skald_EventScript_Courier_3
# 10 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, Skald_EventScript_Courier_4
# 13 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, Skald_EventScript_Courier_5
# 16 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, Skald_EventScript_Courier_6
# 19 "data/scripts/skald_courier.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, Skald_EventScript_Courier_7
# 23 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_12, MSGBOX_SIGN
# 24 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_13, MSGBOX_SIGN
Skald_EventScript_Courier_1:
	end

Skald_EventScript_Courier_2:
# 5 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_0, MSGBOX_SIGN
# 6 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_1, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_3:
# 8 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_2, MSGBOX_SIGN
# 9 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_3, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_4:
# 11 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_4, MSGBOX_SIGN
# 12 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_5, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_5:
# 14 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_6, MSGBOX_SIGN
# 15 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_7, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_6:
# 17 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_8, MSGBOX_SIGN
# 18 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_9, MSGBOX_SIGN
	goto Skald_EventScript_Courier_1

Skald_EventScript_Courier_7:
# 20 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_10, MSGBOX_SIGN
# 21 "data/scripts/skald_courier.pory"
	msgbox Skald_EventScript_Courier_Text_11, MSGBOX_SIGN
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
# 6 "data/scripts/skald_courier.pory"
	.string "Page two. The Courier's own account of\n"
	.string "the afternoon, in order, with the times.\l"
	.string "Three forty, the survey entered. Four\l"
	.string "ten, the Survey's baselines, the clerk\l"
	.string "pronouncing every place name\l"
	.string "correctly. Four thirty-two, the\l"
	.string "statement, four sentences, and the\l"
	.string "silence after it, which the paper gives\l"
	.string "as a length of time because the clerk\l"
	.string "would not.\p"
	.string "Five o'clock, adjournment. Under it a\n"
	.string "photograph of the hearing room door,\l"
	.string "closed, and the caption: it opened.$"

Skald_EventScript_Courier_Text_2:
# 8 "data/scripts/skald_courier.pory"
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

Skald_EventScript_Courier_Text_3:
# 9 "data/scripts/skald_courier.pory"
	.string "Page two. A letter from a fisher's wife\n"
	.string "of Mereholt Coast, printed in full:\l"
	.string "forty jobs on a quay with no fish is\l"
	.string "forty people watching water. Beside it\l"
	.string "the Foundation's reply, also in full: the\l"
	.string "Foundation is proud to invest in the\l"
	.string "region's future.\p"
	.string "The paper has set the two in the same\n"
	.string "type size. INGER's note at the foot: we\l"
	.string "count letters here too.$"

Skald_EventScript_Courier_Text_4:
# 11 "data/scripts/skald_courier.pory"
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

Skald_EventScript_Courier_Text_5:
# 12 "data/scripts/skald_courier.pory"
	.string "Page two. A map of Haukfell with the\n"
	.string "three slide fields hatched and the bore\l"
	.string "marked with a cross, drawn by the paper\l"
	.string "from the Survey's stakes, because the\l"
	.string "Company's own map was not supplied.\p"
	.string "A note: the stakes are red cloth and\n"
	.string "were put in by hand. The cross is where\l"
	.string "a machine is. Readers may draw their own\l"
	.string "line between them. The paper has not.$"

Skald_EventScript_Courier_Text_6:
# 14 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. ELVSUND\n"
	.string "RATEPAYERS ASK THE BOARD: WHICH YEAR?\l"
	.string "Forty-one signatures and a reply of\l"
	.string "one paragraph, printed in full because\l"
	.string "it is one paragraph.\p"
	.string "A photograph of the meeting from the\n"
	.string "back of the hall. A ranger is in it,\l"
	.string "writing. The caption does not name the\l"
	.string "ranger. The caption says: the record.$"

Skald_EventScript_Courier_Text_7:
# 15 "data/scripts/skald_courier.pory"
	.string "Page two. The forty-one signatures,\n"
	.string "reproduced. Not typed: photographed,\l"
	.string "in the hands they were written in, the\l"
	.string "shaky ones and the children's. The\l"
	.string "Board's one paragraph is printed\l"
	.string "beneath them a third time, for\l"
	.string "comparison.\p"
	.string "Letters to the editor this week:\n"
	.string "forty-one. The paper has printed the\l"
	.string "first and the last and kept the rest.$"

Skald_EventScript_Courier_Text_8:
# 17 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. Page two:\n"
	.string "COMMISSIONER: NO EVIDENCE OF\l"
	.string "CONTAMINATION AT REEDMERE. Page four,\l"
	.string "under INGER's name: THE PIPE UNDER THE\l"
	.string "FALLS, and a photograph of a manifest,\l"
	.string "waterlogged, every line legible.\p"
	.string "The front page is a ribbon-cutting.\n"
	.string "That is the ratio, this week and every\l"
	.string "week.$"

Skald_EventScript_Courier_Text_9:
# 18 "data/scripts/skald_courier.pory"
	.string "Page four, the rest of it. The manifest\n"
	.string "in the photograph, transcribed line by\l"
	.string "line: drums, a count, a date, a\l"
	.string "destination that is the works, a\l"
	.string "signature that is a title and not a\l"
	.string "name.\p"
	.string "The paper has asked the Commissioner\n"
	.string "whether no evidence means no one\l"
	.string "looked. The reply was that the question\l"
	.string "was tendentious. The paper has printed\l"
	.string "the word, and looked it up for its\l"
	.string "readers in the margin.$"

Skald_EventScript_Courier_Text_10:
# 20 "data/scripts/skald_courier.pory"
	.string "THE SKALDMERE COURIER. FIRST FOREST\n"
	.string "CERTIFICATION OUT OF SALTWICK IN NINE\l"
	.string "YEARS. A provisional from Johto, the\l"
	.string "hall confirms; the name is not given.\p"
	.string "Below it, still: LAB ON THE FRONT\n"
	.string "CLEARED OVERNIGHT; POLICE SAY\l"
	.string "BURGLARY. The paper has used the word\l"
	.string "three weeks running and has started\l"
	.string "putting it in quotation marks.$"

Skald_EventScript_Courier_Text_11:
# 21 "data/scripts/skald_courier.pory"
	.string "Page two. The Corps hall's register of\n"
	.string "the season, copied: nine provisionals\l"
	.string "out, one certified, and the examiner's\l"
	.string "note on the one, two words long, which\l"
	.string "the paper has chosen not to print\l"
	.string "because it was not written for printing.\p"
	.string "Under it the ferry timetable, winter,\n"
	.string "reduced, and a note that the lab's\l"
	.string "windows on the front have been\l"
	.string "boarded.$"

Skald_EventScript_Courier_Text_12:
# 23 "data/scripts/skald_courier.pory"
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

Skald_EventScript_Courier_Text_13:
# 24 "data/scripts/skald_courier.pory"
	.string "Page two. A list of what a regional\n"
	.string "ecologist's annex would ordinarily hold,\l"
	.string "written by someone who had been inside\l"
	.string "one, and the police inventory of what\l"
	.string "was taken, which is shorter. The paper\l"
	.string "has set them side by side.\p"
	.string "Everything on the first list and not on\n"
	.string "the second is paper. The paper has\l"
	.string "underlined nothing.$"
