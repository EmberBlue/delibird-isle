ParcelFernwickHall_MapScripts::
	.byte 0


ParcelFernwickHall_Greeter::
# 9 "data/maps/ParcelFernwickHall/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickHall/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwickHall_Greeter_2
# 16 "data/maps/ParcelFernwickHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwickHall_Greeter_5
# 21 "data/maps/ParcelFernwickHall/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwickHall_Greeter_8
# 24 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Greeter_Text_3, MSGBOX_DEFAULT
ParcelFernwickHall_Greeter_7:
# 26 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end

ParcelFernwickHall_Greeter_2:
# 12 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Greeter_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end

ParcelFernwickHall_Greeter_5:
# 17 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Greeter_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end

ParcelFernwickHall_Greeter_8:
# 22 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Greeter_Text_2, MSGBOX_DEFAULT
	goto ParcelFernwickHall_Greeter_7


ParcelFernwickHall_CadetA::
# 31 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FERNWICK_CADET_A, ParcelFernwickHall_CadetA_Text_0, ParcelFernwickHall_CadetA_Text_1
# 34 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_CadetA_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwickHall_CadetB::
# 39 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FERNWICK_CADET_B, ParcelFernwickHall_CadetB_Text_0, ParcelFernwickHall_CadetB_Text_1
# 42 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_CadetB_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwickHall_Tarn::
# 47 "data/maps/ParcelFernwickHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwickHall_Tarn_2
ParcelFernwickHall_Tarn_1:
# 50 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM1, ParcelFernwickHall_Tarn_Text_0, ParcelFernwickHall_Tarn_Text_1, ParcelFernwickHall_Tarn_Defeated
# 54 "data/maps/ParcelFernwickHall/scripts.pory"
	lock
# 55 "data/maps/ParcelFernwickHall/scripts.pory"
	faceplayer
# 56 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Text_2, MSGBOX_DEFAULT
# 57 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end

ParcelFernwickHall_Tarn_2:
# 48 "data/maps/ParcelFernwickHall/scripts.pory"
	goto ParcelFernwickHall_Tarn_Rematch
	goto ParcelFernwickHall_Tarn_1


ParcelFernwickHall_Tarn_Defeated::
# 62 "data/maps/ParcelFernwickHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 63 "data/maps/ParcelFernwickHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 64 "data/maps/ParcelFernwickHall/scripts.pory"
	waitfanfare
# 65 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Defeated_Text_0, MSGBOX_DEFAULT
# 66 "data/maps/ParcelFernwickHall/scripts.pory"
	giveitem ITEM_TM03
# 67 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Defeated_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end


ParcelFernwickHall_Tarn_Rematch::
# 74 "data/maps/ParcelFernwickHall/scripts.pory"
	lock
# 75 "data/maps/ParcelFernwickHall/scripts.pory"
	faceplayer
# 76 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Rematch_Text_0, MSGBOX_YESNO
# 77 "data/maps/ParcelFernwickHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwickHall_Tarn_Rematch_2
# 82 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM1_R, ParcelFernwickHall_Tarn_Rematch_Text_2
# 83 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Rematch_Text_3, MSGBOX_DEFAULT
# 84 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end

ParcelFernwickHall_Tarn_Rematch_2:
# 78 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Rematch_Text_1, MSGBOX_DEFAULT
# 79 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end


ParcelFernwickHall_Register::
# 91 "data/maps/ParcelFernwickHall/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelFernwickHall_Register_1
# 94 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Register_Text_1, MSGBOX_SIGN
	return

ParcelFernwickHall_Register_1:
# 92 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Register_Text_0, MSGBOX_SIGN
	return


ParcelFernwickHall_Syllabus::
# 99 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Syllabus_Text_0, MSGBOX_SIGN
	return


ParcelFernwickHall_Greeter_Text_0:
# 12 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "GREETER: Nobody passes first time, and\n"
	.string "nobody's name gets read at a hearing.\l"
	.string "Both happened this year. TARN says it's\l"
	.string "a bad precedent. He's smiling when he\l"
	.string "says it.$"

ParcelFernwickHall_Greeter_Text_1:
# 17 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "GREETER: Two cadets failed this week\n"
	.string "and TARN passed one of them anyway. He\l"
	.string "said she'd read the river minutes\l"
	.string "without being told to.\p"
	.string "He's never passed anyone for reading.\n"
	.string "He's never passed anyone for anything.$"

ParcelFernwickHall_Greeter_Text_2:
# 22 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "GREETER: You passed! Nobody passes\n"
	.string "first time. Well, somebody just did. Go\l"
	.string "tell HALE before TARN changes his mind.$"

ParcelFernwickHall_Greeter_Text_3:
# 24 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "GREETER: The Certification Hall!\n"
	.string "Practical exams only. Two cadets, then\l"
	.string "TARN.\p"
	.string "You can't skip the cadets. I've tried.$"

ParcelFernwickHall_CadetA_Text_0:
# 32 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "SOLVI: Cadet exam, round one! Don't go\n"
	.string "easy on me. They dock points for that.$"

ParcelFernwickHall_CadetA_Text_1:
# 33 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "SOLVI: Points docked.$"

ParcelFernwickHall_CadetA_Text_2:
# 34 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "SOLVI: TARN's up the back. He talks\n"
	.string "slow. Don't mistake it for kindness.$"

ParcelFernwickHall_CadetB_Text_0:
# 40 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "EGIL: I've been a cadet for three\n"
	.string "years. THREE. Let me have this one.$"

ParcelFernwickHall_CadetB_Text_1:
# 41 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "EGIL: Four years, then.$"

ParcelFernwickHall_CadetB_Text_2:
# 42 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "EGIL: Go on. He's waiting. He's always\n"
	.string "waiting.$"

ParcelFernwickHall_Tarn_Text_0:
# 51 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Tidewater Division. I examine.\p"
	.string "You want the Forest Certification,\n"
	.string "provisional? Show me you can hold a line\l"
	.string "when the water's against you.$"

ParcelFernwickHall_Tarn_Text_1:
# 52 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Hm. The current's yours, then.$"

ParcelFernwickHall_Tarn_Text_2:
# 56 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Passed is passed. Go and see\n"
	.string "HALE. He signs; I only say whether you\l"
	.string "can fight.$"

ParcelFernwickHall_Tarn_Defeated_Text_0:
# 65 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Forest Certification, practical:\n"
	.string "passed. HALE signs the paper. I only say\l"
	.string "whether you can fight.\p"
	.string "You can.$"

ParcelFernwickHall_Tarn_Defeated_Text_1:
# 67 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: WATER PULSE. Teach it to\n"
	.string "something. The marsh is mostly water,\l"
	.string "and most of it's against you.$"

ParcelFernwickHall_Tarn_Rematch_Text_0:
# 76 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: The author of the record, in my\n"
	.string "hall. I read it.\p"
	.string "I examine; I don't sign. But I'd examine\n"
	.string "you once more, at full strength. The\l"
	.string "current's older than both of us. Yes?$"

ParcelFernwickHall_Tarn_Rematch_Text_1:
# 78 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Another day, then. The water\n"
	.string "keeps.$"

ParcelFernwickHall_Tarn_Rematch_Text_2:
# 82 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: …Still yours. The current, I mean.$"

ParcelFernwickHall_Tarn_Rematch_Text_3:
# 83 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Come back when you want the\n"
	.string "water against you again. It always is.$"

ParcelFernwickHall_Register_Text_0:
# 92 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "The register of certifications, a tall\n"
	.string "book with a ribbon in it.\p"
	.string "Each line: a name, a date, FOREST, and\n"
	.string "the leader who signed. The early pages\l"
	.string "are Tarn's own teacher signing for Tarn.\l"
	.string "Then Tarn, for twenty years of names.\p"
	.string "Some names carry a second and third\n"
	.string "line in other hands: WETLAND,\l"
	.string "WATERSHED, HIGHLAND. A few carry all of\l"
	.string "them. Hale's does. Rin's stops at three\l"
	.string "and has a note: field preference.\p"
	.string "The newest line is yours. The ink is still\n"
	.string "a different black from the rest.$"

ParcelFernwickHall_Register_Text_1:
# 94 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "The register of certifications, a tall\n"
	.string "book with a ribbon in it.\p"
	.string "Each line: a name, a date, FOREST, and\n"
	.string "the leader who signed. The early pages\l"
	.string "are Tarn's own teacher signing for Tarn.\l"
	.string "Then Tarn, for twenty years of names.\p"
	.string "Some names carry a second and third\n"
	.string "line in other hands: WETLAND,\l"
	.string "WATERSHED, HIGHLAND. A few carry all of\l"
	.string "them. Hale's does. Rin's stops at three\l"
	.string "and has a note: field preference.\p"
	.string "The next line is blank. The ribbon is in\n"
	.string "it.$"

ParcelFernwickHall_Syllabus_Text_0:
# 99 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "The syllabus, framed because somebody\n"
	.string "was proud of it once. Four\l"
	.string "competencies, four lines.\p"
	.string "SURVEY. Read the place before you\n"
	.string "touch it. Guilds, abundance, condition,\l"
	.string "signs. Against a baseline, or it is a\l"
	.string "guess.\p"
	.string "RESTRAINT. Knowing what not to do, and\n"
	.string "when. A deadfall over the only path we\l"
	.string "clear. A living corridor we leave.\p"
	.string "RESPONSE. The call comes at the wrong\n"
	.string "time or it would not be a call. Go anyway.\l"
	.string "Bring what the place needs, not what\l"
	.string "you wanted to bring.\p"
	.string "REMEDIATION. Put back what can be put\n"
	.string "back. Write down what cannot. The\l"
	.string "second half is the part people skip.\p"
	.string "In pencil below the frame, not in the\n"
	.string "hand that framed it: and send the\l"
	.string "writing somewhere it will be read.$"
