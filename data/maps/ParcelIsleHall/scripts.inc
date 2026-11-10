ParcelIsleHall_MapScripts::
	.byte 0


ParcelIsleHall_Brenna::
# 9 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 10 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Brenna_2
# 13 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Brenna_3
# 15 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Brenna_4
# 18 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_3, MSGBOX_DEFAULT
ParcelIsleHall_Brenna_1:
# 20 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Brenna_2:
# 12 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_1

ParcelIsleHall_Brenna_3:
# 14 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_1

ParcelIsleHall_Brenna_4:
# 16 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Brenna_1


ParcelIsleHall_Ivar::
# 25 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 26 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Ivar_2
# 29 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Ivar_3
# 31 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Ivar_4
# 34 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_3, MSGBOX_DEFAULT
ParcelIsleHall_Ivar_1:
# 36 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Ivar_2:
# 28 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1

ParcelIsleHall_Ivar_3:
# 30 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1

ParcelIsleHall_Ivar_4:
# 32 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1


ParcelIsleHall_Jorunn::
# 41 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 42 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 43 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Jorunn_2
# 45 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Jorunn_3
# 47 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Jorunn_4
# 50 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_3, MSGBOX_DEFAULT
ParcelIsleHall_Jorunn_1:
# 52 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Jorunn_2:
# 44 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1

ParcelIsleHall_Jorunn_3:
# 46 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1

ParcelIsleHall_Jorunn_4:
# 48 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1


ParcelIsleHall_Bard::
# 57 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 58 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 59 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Bard_2
# 61 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Bard_3
# 63 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Bard_4
# 66 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_3, MSGBOX_DEFAULT
ParcelIsleHall_Bard_1:
# 68 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Bard_2:
# 60 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1

ParcelIsleHall_Bard_3:
# 62 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1

ParcelIsleHall_Bard_4:
# 64 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_2, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1


ParcelIsleHall_Kid::
# 73 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 74 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 75 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Kid_2
# 80 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelIsleHall_Kid_5
# 85 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_2, MSGBOX_DEFAULT
# 86 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Kid_2:
# 76 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Kid_5:
# 81 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end


ParcelIsleHall_Minutes::
# 91 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Minutes_2
# 93 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Minutes_3
# 96 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_2, MSGBOX_SIGN
ParcelIsleHall_Minutes_1:
	end

ParcelIsleHall_Minutes_2:
# 92 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_0, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1

ParcelIsleHall_Minutes_3:
# 94 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_1, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1


ParcelIsleHall_Lease::
# 104 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Lease_Text_0, MSGBOX_SIGN
	return


ParcelIsleHall_Brenna_Text_0:
# 12 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: We voted. Twelve to nine, to\n"
	.string "back your report at the hearing.\p"
	.string "Nine is a lot of nine in a town this size.\n"
	.string "I'll be buying nine people drinks for a\l"
	.string "year. That's what chairing is.$"

ParcelIsleHall_Brenna_Text_1:
# 14 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: We're calling the next meeting.\n"
	.string "Somebody had to, and the river shamed\l"
	.string "us into it.\p"
	.string "The FOUNDATION's asked to send a\n"
	.string "speaker. I've said yes. Members first.\l"
	.string "Guests after. They can be a guest.$"

ParcelIsleHall_Brenna_Text_2:
# 16 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: A RANGER! Then you'll want the\n"
	.string "quota minutes. They're on the board.\p"
	.string "Read fast. The FOUNDATION reads them\n"
	.string "slower, but they read them first.$"

ParcelIsleHall_Brenna_Text_3:
# 18 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: Members and guests. You're a\n"
	.string "guest. Sit anywhere the members aren't.\p"
	.string "We're between meetings. We're always\n"
	.string "between meetings. Nobody wants to be\l"
	.string "the one who calls the next one.$"

ParcelIsleHall_Ivar_Text_0:
# 28 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: My berth is 'pending'. PENDING!\n"
	.string "And she's over there counting votes\l"
	.string "like it's a catch.\p"
	.string "I'm not angry at you. I decided that.\n"
	.string "It's taking effort.$"

ParcelIsleHall_Ivar_Text_1:
# 30 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: The river people stood up and the\n"
	.string "Board blinked, fine. Different river.\l"
	.string "Different Board.\p"
	.string "But I'll say this once, where JORUNN\n"
	.string "can't hear: I read the minutes twice.$"

ParcelIsleHall_Ivar_Text_2:
# 32 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: RANGER! Good. Tell her the basin's\n"
	.string "fine. The Council says it's fine!\p"
	.string "She'll listen to you. You've got the\n"
	.string "knot.$"

ParcelIsleHall_Ivar_Text_3:
# 34 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: The dredge widened the channel!\n"
	.string "More boats in, bigger boats!\p"
	.string "You don't fix a town by making it\n"
	.string "smaller. Tell her that.$"

ParcelIsleHall_Jorunn_Text_0:
# 44 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: I'm not smiling. I'm counting.\n"
	.string "Twelve to nine.\p"
	.string "He thinks I won. Nobody won. I'd rather\n"
	.string "have the herring than the vote.$"

ParcelIsleHall_Jorunn_Text_1:
# 46 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: He read the minutes twice. I\n"
	.string "saw him. He thinks I didn't.\p"
	.string "Six fishers stood up and the numbers\n"
	.string "came out on paper, in public. Ours would\l"
	.string "too. He knows. That's why he's quiet.$"

ParcelIsleHall_Jorunn_Text_2:
# 48 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: Tell HIM the herring's thin. He\n"
	.string "was on the boat! He knows!\p"
	.string "He just wants somebody else to say it\n"
	.string "so it isn't him.$"

ParcelIsleHall_Jorunn_Text_3:
# 50 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: More boats, less fish. Do the\n"
	.string "math. He won't do the math.\p"
	.string "I did it on the back of the quota form.\n"
	.string "It doesn't come out.$"

ParcelIsleHall_Bard_Text_0:
# 60 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The notes from the night she sat\n"
	.string "with the ones who didn't clap. They were\l"
	.string "yours all along, in the margins.\p"
	.string "She was writing to you before she'd\n"
	.string "ever met you. I've lived long enough to\l"
	.string "see a thing like that. Not sure I wanted\l"
	.string "to.$"

ParcelIsleHall_Bard_Text_1:
# 62 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The scientist's talk was\n"
	.string "'Resilience.' The river meeting had a\l"
	.string "word in it too, they tell me. 'Allocation.'\l"
	.string "Smaller word. Does more.\p"
	.string "I've written it on the board under hers.\n"
	.string "Nobody's rubbed it out.$"

ParcelIsleHall_Bard_Text_2:
# 64 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: After her talk she came back and\n"
	.string "sat with the ones who hadn't clapped.\l"
	.string "Me among them.\p"
	.string "She wrote down every complaint. I never\n"
	.string "saw the notes. I've always wondered who\l"
	.string "did.$"

ParcelIsleHall_Bard_Text_3:
# 66 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The scientist gave a talk in here\n"
	.string "once. 'Resilience.' Big word for a small\l"
	.string "room.\p"
	.string "Half of us clapped. I remember which\n"
	.string "half.$"

ParcelIsleHall_Kid_Text_0:
# 76 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the hearing was boring.\p"
	.string "Dad listened to the whole thing on the\n"
	.string "wireless. Every single minute.$"

ParcelIsleHall_Kid_Text_1:
# 81 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the river people had a meeting\n"
	.string "where everyone talked and it was over\l"
	.string "by dark.\p"
	.string "Dad says that's impossible. Dad says it\n"
	.string "twice a day.$"

ParcelIsleHall_Kid_Text_2:
# 85 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the meeting's boring.\p"
	.string "Dad is AT the meeting. Every single time.$"

ParcelIsleHall_Minutes_Text_0:
# 92 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES (extraordinary)\p"
	.string "Motion: appear at the regional hearing\n"
	.string "in support of the filed record. CARRIED,\l"
	.string "12-9.\p"
	.string "Motion: write to the FOUNDATION\n"
	.string "regarding the roof grant. WITHDRAWN.\p"
	.string "Chair's note: nobody stayed for tea.$"

ParcelIsleHall_Minutes_Text_1:
# 94 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES\p"
	.string "Item 3: the quota. MEREHOLT COASTAL\n"
	.string "proposes a 'sustainable harvest' figure\l"
	.string "based on the resilience model. Chair\l"
	.string "asks whose model. No answer minuted.\p"
	.string "Item 4: the FOUNDATION renews the roof\n"
	.string "grant. Carried, with thanks.$"

ParcelIsleHall_Minutes_Text_2:
# 96 "data/maps/ParcelIsleHall/scripts.pory"
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
# 104 "data/maps/ParcelIsleHall/scripts.pory"
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
