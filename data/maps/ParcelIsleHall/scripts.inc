ParcelIsleHall_MapScripts::
	.byte 0


ParcelIsleHall_Brenna::
# 9 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 10 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleHall_Brenna_2
# 16 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Brenna_5
# 18 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Brenna_6
# 20 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Brenna_7
# 23 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_4, MSGBOX_DEFAULT
ParcelIsleHall_Brenna_4:
# 25 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Brenna_2:
# 12 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Brenna_5:
# 17 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_4

ParcelIsleHall_Brenna_6:
# 19 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_4

ParcelIsleHall_Brenna_7:
# 21 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_4


ParcelIsleHall_Ivar::
# 30 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 31 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 32 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleHall_Ivar_2
# 37 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Ivar_5
# 39 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Ivar_6
# 41 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Ivar_7
# 44 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_4, MSGBOX_DEFAULT
ParcelIsleHall_Ivar_4:
# 46 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Ivar_2:
# 33 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Ivar_5:
# 38 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_4

ParcelIsleHall_Ivar_6:
# 40 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_4

ParcelIsleHall_Ivar_7:
# 42 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_4


ParcelIsleHall_Jorunn::
# 51 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 52 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 53 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleHall_Jorunn_2
# 58 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Jorunn_5
# 60 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Jorunn_6
# 62 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Jorunn_7
# 65 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_4, MSGBOX_DEFAULT
ParcelIsleHall_Jorunn_4:
# 67 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Jorunn_2:
# 54 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_0, MSGBOX_DEFAULT
# 55 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Jorunn_5:
# 59 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_4

ParcelIsleHall_Jorunn_6:
# 61 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_4

ParcelIsleHall_Jorunn_7:
# 63 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_4


ParcelIsleHall_Bard::
# 72 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 73 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 74 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelIsleHall_Bard_2
# 79 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Bard_5
# 81 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Bard_6
# 83 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Bard_7
# 86 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_4, MSGBOX_DEFAULT
ParcelIsleHall_Bard_4:
# 88 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Bard_2:
# 75 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Bard_5:
# 80 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_4

ParcelIsleHall_Bard_6:
# 82 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_4

ParcelIsleHall_Bard_7:
# 84 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_3, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_4


ParcelIsleHall_Kid::
# 93 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 94 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 95 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Kid_2
# 100 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Kid_5
# 105 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_2, MSGBOX_DEFAULT
# 106 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Kid_2:
# 96 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_0, MSGBOX_DEFAULT
# 97 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Kid_5:
# 101 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_1, MSGBOX_DEFAULT
# 102 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end


ParcelIsleHall_Minutes::
# 111 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Minutes_2
# 113 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Minutes_3
# 116 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_2, MSGBOX_SIGN
ParcelIsleHall_Minutes_1:
	end

ParcelIsleHall_Minutes_2:
# 112 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_0, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1

ParcelIsleHall_Minutes_3:
# 114 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_1, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1


ParcelIsleHall_Lease::
# 124 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Lease_Text_0, MSGBOX_SIGN
	return


ParcelIsleHall_Almanac::
# 130 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Almanac_Text_0, MSGBOX_SIGN
# 131 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Almanac_Text_1, MSGBOX_SIGN
	end


ParcelIsleHall_Brenna_Text_0:
# 12 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: Twelve to nine became sixteen\n"
	.string "to five at the next vote. The five are\l"
	.string "still five. I buy them a drink after\l"
	.string "anyway.\p"
	.string "You keep the nine close. You keep the\n"
	.string "five closer.$"

ParcelIsleHall_Brenna_Text_1:
# 17 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: We voted. Twelve to nine, to\n"
	.string "back your report at the hearing.\p"
	.string "Nine is a lot of nine in a town this size.\n"
	.string "I'll be buying nine people drinks for a\l"
	.string "year. That's what chairing is.$"

ParcelIsleHall_Brenna_Text_2:
# 19 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: We're calling the next meeting.\n"
	.string "Somebody had to, and the river shamed\l"
	.string "us into it.\p"
	.string "The FOUNDATION's asked to send a\n"
	.string "speaker. I've said yes. Members first.\l"
	.string "Guests after. They can be a guest.$"

ParcelIsleHall_Brenna_Text_3:
# 21 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: A RANGER! Then you'll want the\n"
	.string "quota minutes. They're on the board.\p"
	.string "Read fast. The FOUNDATION reads them\n"
	.string "slower, but they read them first.$"

ParcelIsleHall_Brenna_Text_4:
# 23 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: Members and guests. You're a\n"
	.string "guest. Sit anywhere the members aren't.\p"
	.string "We're between meetings. We're always\n"
	.string "between meetings. Nobody wants to be\l"
	.string "the one who calls the next one.$"

ParcelIsleHall_Ivar_Text_0:
# 33 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: Berth's not pending. Berth's mine,\n"
	.string "two days a week, by the review's rota.\p"
	.string "I'm not angry at you. I decided that\n"
	.string "twice. It took the second time.$"

ParcelIsleHall_Ivar_Text_1:
# 38 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: My berth is 'pending'. PENDING!\n"
	.string "And she's over there counting votes\l"
	.string "like it's a catch.\p"
	.string "I'm not angry at you. I decided that.\n"
	.string "It's taking effort.$"

ParcelIsleHall_Ivar_Text_2:
# 40 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: The river people stood up and the\n"
	.string "Board blinked, fine. Different river.\l"
	.string "Different Board.\p"
	.string "But I'll say this once, where JORUNN\n"
	.string "can't hear: I read the minutes twice.$"

ParcelIsleHall_Ivar_Text_3:
# 42 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: RANGER! Good. Tell her the basin's\n"
	.string "fine. The Council says it's fine!\p"
	.string "She'll listen to you. You've got the\n"
	.string "knot.$"

ParcelIsleHall_Ivar_Text_4:
# 44 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: The dredge widened the channel!\n"
	.string "More boats in, bigger boats!\p"
	.string "You don't fix a town by making it\n"
	.string "smaller. Tell her that.$"

ParcelIsleHall_Jorunn_Text_0:
# 54 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: Sixteen to five. I'm still not\n"
	.string "smiling. Herring's up a quarter in the\l"
	.string "inlet.\p"
	.string "That I'd smile at, if it holds. It won't\n"
	.string "hold by me smiling.$"

ParcelIsleHall_Jorunn_Text_1:
# 59 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: I'm not smiling. I'm counting.\n"
	.string "Twelve to nine.\p"
	.string "He thinks I won. Nobody won. I'd rather\n"
	.string "have the herring than the vote.$"

ParcelIsleHall_Jorunn_Text_2:
# 61 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: He read the minutes twice. I\n"
	.string "saw him. He thinks I didn't.\p"
	.string "Six fishers stood up and the numbers\n"
	.string "came out on paper, in public. Ours would\l"
	.string "too. He knows. That's why he's quiet.$"

ParcelIsleHall_Jorunn_Text_3:
# 63 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: Tell HIM the herring's thin. He\n"
	.string "was on the boat! He knows!\p"
	.string "He just wants somebody else to say it\n"
	.string "so it isn't him.$"

ParcelIsleHall_Jorunn_Text_4:
# 65 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: More boats, less fish. Do the\n"
	.string "math. He won't do the math.\p"
	.string "I did it on the back of the quota form.\n"
	.string "It doesn't come out.$"

ParcelIsleHall_Bard_Text_0:
# 75 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The notes from the night she sat\n"
	.string "with the ones who didn't clap are in the\l"
	.string "Survey archive now, in a box with your\l"
	.string "name on the lid.\p"
	.string "Small word on the lid. Big box.$"

ParcelIsleHall_Bard_Text_1:
# 80 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The notes from the night she sat\n"
	.string "with the ones who didn't clap. They were\l"
	.string "yours all along, in the margins.\p"
	.string "She was writing to you before she'd\n"
	.string "ever met you. I've lived long enough to\l"
	.string "see a thing like that. Not sure I wanted\l"
	.string "to.$"

ParcelIsleHall_Bard_Text_2:
# 82 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The scientist's talk was\n"
	.string "'Resilience.' The river meeting had a\l"
	.string "word in it too, they tell me. 'Allocation.'\l"
	.string "Smaller word. Does more.\p"
	.string "I've written it on the board under hers.\n"
	.string "Nobody's rubbed it out.$"

ParcelIsleHall_Bard_Text_3:
# 84 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: After her talk she came back and\n"
	.string "sat with the ones who hadn't clapped.\l"
	.string "Me among them.\p"
	.string "She wrote down every complaint. I never\n"
	.string "saw the notes. I've always wondered who\l"
	.string "did.$"

ParcelIsleHall_Bard_Text_4:
# 86 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The scientist gave a talk in here\n"
	.string "once. 'Resilience.' Big word for a small\l"
	.string "room.\p"
	.string "Half of us clapped. I remember which\n"
	.string "half.$"

ParcelIsleHall_Kid_Text_0:
# 96 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the hearing was boring.\p"
	.string "Dad listened to the whole thing on the\n"
	.string "wireless. Every single minute.$"

ParcelIsleHall_Kid_Text_1:
# 101 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the river people had a meeting\n"
	.string "where everyone talked and it was over\l"
	.string "by dark.\p"
	.string "Dad says that's impossible. Dad says it\n"
	.string "twice a day.$"

ParcelIsleHall_Kid_Text_2:
# 105 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the meeting's boring.\p"
	.string "Dad is AT the meeting. Every single time.$"

ParcelIsleHall_Minutes_Text_0:
# 112 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES (extraordinary)\p"
	.string "Motion: appear at the regional hearing\n"
	.string "in support of the filed record. CARRIED,\l"
	.string "12-9.\p"
	.string "Motion: write to the FOUNDATION\n"
	.string "regarding the roof grant. WITHDRAWN.\p"
	.string "Chair's note: nobody stayed for tea.$"

ParcelIsleHall_Minutes_Text_1:
# 114 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES\p"
	.string "Item 3: the quota. MEREHOLT COASTAL\n"
	.string "proposes a 'sustainable harvest' figure\l"
	.string "based on the resilience model. Chair\l"
	.string "asks whose model. No answer minuted.\p"
	.string "Item 4: the FOUNDATION renews the roof\n"
	.string "grant. Carried, with thanks.$"

ParcelIsleHall_Minutes_Text_2:
# 116 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES\p"
	.string "Item 1: the channel dredge is complete.\n"
	.string "Item 2: the FOUNDATION's storm-relief\l"
	.string "blankets have arrived and are in the\l"
	.string "loft.\p"
	.string "Item 3: the herring. Discussion. No\n"
	.string "motion.\n"
	.string "Item 4: the schedule board. Discussion.\l"
	.string "No motion.$"

ParcelIsleHall_Lease_Text_0:
# 124 "data/maps/ParcelIsleHall/scripts.pory"
	.string "A lease file in the hall's cabinet, the\n"
	.string "lid left up. THE FRONT, UNIT 3. The lab.\p"
	.string "Tenant: the Wetland Resilience\n"
	.string "Programme, Dr. Heron. Landlord: Saltwick\l"
	.string "Front Holdings, a company with a quay\l"
	.string "address and a parent you have seen the\l"
	.string "kerning of.\p"
	.string "Notice to quit, for redevelopment,\n"
	.string "dated nine days before the night the\l"
	.string "lab was emptied. Signed for the\l"
	.string "landlord. Not signed for the tenant.\l"
	.string "Served by hand, the note says.\p"
	.string "Stapled behind it, a second sheet:\n"
	.string "redevelopment plan, Unit 3. Proposed\l"
	.string "use: storage, Mereholt Logistics.\p"
	.string "The official who came to look at the\n"
	.string "broken lock had this file. He called it a\l"
	.string "burglary anyway. It was easier for\l"
	.string "everyone.$"

ParcelIsleHall_Almanac_Text_0:
# 130 "data/maps/ParcelIsleHall/scripts.pory"
	.string "The harbour almanac, chained to the\n"
	.string "shelf, the way the catch book is\l"
	.string "chained to the cannery desk. Saltwick's\l"
	.string "year, written down by whoever was\l"
	.string "harbourmaster.\p"
	.string "FIRST FROST, by year. A column that\n"
	.string "used to begin in the ninth month and\l"
	.string "now begins in the eleventh, with two\l"
	.string "blanks where there was no frost to\l"
	.string "write.\p"
	.string "LAST ICE IN THE HARBOUR. A column that\n"
	.string "stops. Not a blank: a line drawn under\l"
	.string "the last year, and under the line, in the\l"
	.string "harbourmaster's hand: see the\l"
	.string "Station's book. They keep the gaps.$"

ParcelIsleHall_Almanac_Text_1:
# 131 "data/maps/ParcelIsleHall/scripts.pory"
	.string "HERRING, FIRST SHOAL. The dates walk\n"
	.string "backwards up the calendar a week a\l"
	.string "decade, and the sizes beside them walk\l"
	.string "down.\p"
	.string "STORMS, by name. The old names are\n"
	.string "weather. The new names, the last nine\l"
	.string "years, are the names of the boats they\l"
	.string "took. The almanac does not comment. It\l"
	.string "is an almanac.\p"
	.string "The last page is this year's, half filled.\n"
	.string "The current harbourmaster writes the\l"
	.string "way the first one did: the date, the\l"
	.string "thing, nothing else. It is the most\l"
	.string "honest book in the town and nobody\l"
	.string "reads it, because it is only a list.$"
