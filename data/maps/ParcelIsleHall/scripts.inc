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
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Brenna_3
# 16 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Brenna_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Brenna_1:
# 18 "data/maps/ParcelIsleHall/scripts.pory"
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


ParcelIsleHall_Ivar::
# 23 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 24 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 25 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Ivar_2
# 27 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Ivar_3
# 30 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Ivar_1:
# 32 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Ivar_2:
# 26 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1

ParcelIsleHall_Ivar_3:
# 28 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Ivar_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Ivar_1


ParcelIsleHall_Jorunn::
# 37 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 38 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 39 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Jorunn_2
# 41 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Jorunn_3
# 44 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Jorunn_1:
# 46 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Jorunn_2:
# 40 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1

ParcelIsleHall_Jorunn_3:
# 42 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Jorunn_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Jorunn_1


ParcelIsleHall_Bard::
# 51 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 52 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 53 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Bard_2
# 55 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Bard_3
# 58 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_2, MSGBOX_DEFAULT
ParcelIsleHall_Bard_1:
# 60 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end

ParcelIsleHall_Bard_2:
# 54 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_0, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1

ParcelIsleHall_Bard_3:
# 56 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Bard_Text_1, MSGBOX_DEFAULT
	goto ParcelIsleHall_Bard_1


ParcelIsleHall_Kid::
# 65 "data/maps/ParcelIsleHall/scripts.pory"
	lock
# 66 "data/maps/ParcelIsleHall/scripts.pory"
	faceplayer
# 67 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Kid_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/ParcelIsleHall/scripts.pory"
	release
	end


ParcelIsleHall_Minutes::
# 73 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelIsleHall_Minutes_2
# 75 "data/maps/ParcelIsleHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelIsleHall_Minutes_3
# 78 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_2, MSGBOX_SIGN
ParcelIsleHall_Minutes_1:
	end

ParcelIsleHall_Minutes_2:
# 74 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_0, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1

ParcelIsleHall_Minutes_3:
# 76 "data/maps/ParcelIsleHall/scripts.pory"
	msgbox ParcelIsleHall_Minutes_Text_1, MSGBOX_SIGN
	goto ParcelIsleHall_Minutes_1


ParcelIsleHall_Brenna_Text_0:
# 12 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: We voted. Twelve to nine, to\n"
	.string "back your report at the hearing.\p"
	.string "Nine is a lot of nine in a town this size.\n"
	.string "I'll be buying nine people drinks for a\l"
	.string "year. That's what chairing is.$"

ParcelIsleHall_Brenna_Text_1:
# 14 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: A RANGER! Then you'll want the\n"
	.string "quota minutes. They're on the board.\p"
	.string "Read fast. The FOUNDATION reads them\n"
	.string "slower, but they read them first.$"

ParcelIsleHall_Brenna_Text_2:
# 16 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BRENNA: Members and guests. You're a\n"
	.string "guest. Sit anywhere the members aren't.\p"
	.string "We're between meetings. We're always\n"
	.string "between meetings. Nobody wants to be\l"
	.string "the one who calls the next one.$"

ParcelIsleHall_Ivar_Text_0:
# 26 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: My berth is 'pending'. PENDING!\n"
	.string "And she's over there counting votes\l"
	.string "like it's a catch.\p"
	.string "I'm not angry at you. I decided that.\n"
	.string "It's taking effort.$"

ParcelIsleHall_Ivar_Text_1:
# 28 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: RANGER! Good. Tell her the basin's\n"
	.string "fine. The Council says it's fine!\p"
	.string "She'll listen to you. You've got the\n"
	.string "knot.$"

ParcelIsleHall_Ivar_Text_2:
# 30 "data/maps/ParcelIsleHall/scripts.pory"
	.string "IVAR: The dredge widened the channel!\n"
	.string "More boats in, bigger boats!\p"
	.string "You don't fix a town by making it\n"
	.string "smaller. Tell her that.$"

ParcelIsleHall_Jorunn_Text_0:
# 40 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: I'm not smiling. I'm counting.\n"
	.string "Twelve to nine.\p"
	.string "He thinks I won. Nobody won. I'd rather\n"
	.string "have the herring than the vote.$"

ParcelIsleHall_Jorunn_Text_1:
# 42 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: Tell HIM the herring's thin. He\n"
	.string "was on the boat! He knows!\p"
	.string "He just wants somebody else to say it\n"
	.string "so it isn't him.$"

ParcelIsleHall_Jorunn_Text_2:
# 44 "data/maps/ParcelIsleHall/scripts.pory"
	.string "JORUNN: More boats, less fish. Do the\n"
	.string "math. He won't do the math.\p"
	.string "I did it on the back of the quota form.\n"
	.string "It doesn't come out.$"

ParcelIsleHall_Bard_Text_0:
# 54 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The notes from the night she sat\n"
	.string "with the ones who didn't clap. They were\l"
	.string "yours all along, in the margins.\p"
	.string "She was writing to you before she'd\n"
	.string "ever met you. I've lived long enough to\l"
	.string "see a thing like that. Not sure I wanted\l"
	.string "to.$"

ParcelIsleHall_Bard_Text_1:
# 56 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: After her talk she came back and\n"
	.string "sat with the ones who hadn't clapped.\l"
	.string "Me among them.\p"
	.string "She wrote down every complaint. I never\n"
	.string "saw the notes. I've always wondered who\l"
	.string "did.$"

ParcelIsleHall_Bard_Text_2:
# 58 "data/maps/ParcelIsleHall/scripts.pory"
	.string "BARD: The scientist gave a talk in here\n"
	.string "once. 'Resilience.' Big word for a small\l"
	.string "room.\p"
	.string "Half of us clapped. I remember which\n"
	.string "half.$"

ParcelIsleHall_Kid_Text_0:
# 67 "data/maps/ParcelIsleHall/scripts.pory"
	.string "Dad says the meeting's boring.\p"
	.string "Dad is AT the meeting. Every single time.$"

ParcelIsleHall_Minutes_Text_0:
# 74 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES (extraordinary)\p"
	.string "Motion: appear at the regional hearing\n"
	.string "in support of the filed record. CARRIED,\l"
	.string "12-9.\p"
	.string "Motion: write to the FOUNDATION\n"
	.string "regarding the roof grant. WITHDRAWN.\p"
	.string "Chair's note: nobody stayed for tea.$"

ParcelIsleHall_Minutes_Text_1:
# 76 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES\p"
	.string "Item 3: the quota. MEREHOLT COASTAL\n"
	.string "proposes a 'sustainable harvest' figure\l"
	.string "based on the resilience model. Chair\l"
	.string "asks whose model. No answer minuted.\p"
	.string "Item 4: the FOUNDATION renews the roof\n"
	.string "grant. Carried, with thanks.$"

ParcelIsleHall_Minutes_Text_2:
# 78 "data/maps/ParcelIsleHall/scripts.pory"
	.string "CO-OP MINUTES\p"
	.string "Item 1: the channel dredge is complete.\n"
	.string "Item 2: the FOUNDATION's storm-relief\l"
	.string "blankets have arrived and are in the\l"
	.string "loft.\p"
	.string "Item 3: the herring. Discussion. No\n"
	.string "motion.\n"
	.string "Item 4: the schedule board. Discussion.\l"
	.string "No motion.$"
