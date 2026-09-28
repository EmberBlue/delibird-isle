ParcelFernwickHall_MapScripts::
	.byte 0


ParcelFernwickHall_Greeter::
# 9 "data/maps/ParcelFernwickHall/scripts.pory"
	lock
# 10 "data/maps/ParcelFernwickHall/scripts.pory"
	faceplayer
# 11 "data/maps/ParcelFernwickHall/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwickHall_Greeter_2
# 14 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Greeter_Text_1, MSGBOX_DEFAULT
ParcelFernwickHall_Greeter_1:
# 16 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end

ParcelFernwickHall_Greeter_2:
# 12 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Greeter_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwickHall_Greeter_1


ParcelFernwickHall_CadetA::
# 21 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FERNWICK_CADET_A, ParcelFernwickHall_CadetA_Text_0, ParcelFernwickHall_CadetA_Text_1
# 24 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_CadetA_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwickHall_CadetB::
# 29 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FERNWICK_CADET_B, ParcelFernwickHall_CadetB_Text_0, ParcelFernwickHall_CadetB_Text_1
# 32 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_CadetB_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwickHall_Tarn::
# 37 "data/maps/ParcelFernwickHall/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM1, ParcelFernwickHall_Tarn_Text_0, ParcelFernwickHall_Tarn_Text_1, ParcelFernwickHall_Tarn_Defeated
# 41 "data/maps/ParcelFernwickHall/scripts.pory"
	lock
# 42 "data/maps/ParcelFernwickHall/scripts.pory"
	faceplayer
# 43 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end


ParcelFernwickHall_Tarn_Defeated::
# 49 "data/maps/ParcelFernwickHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 50 "data/maps/ParcelFernwickHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 51 "data/maps/ParcelFernwickHall/scripts.pory"
	waitfanfare
# 52 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Defeated_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/ParcelFernwickHall/scripts.pory"
	giveitem ITEM_TM03
# 54 "data/maps/ParcelFernwickHall/scripts.pory"
	msgbox ParcelFernwickHall_Tarn_Defeated_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/ParcelFernwickHall/scripts.pory"
	release
	end


ParcelFernwickHall_Greeter_Text_0:
# 12 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "GREETER: You passed! Nobody passes\n"
	.string "first time. Well, somebody just did. Go\l"
	.string "tell HALE before TARN changes his mind.$"

ParcelFernwickHall_Greeter_Text_1:
# 14 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "GREETER: The Certification Hall!\n"
	.string "Practical exams only. Two cadets, then\l"
	.string "TARN.\p"
	.string "You can't skip the cadets. I've tried.$"

ParcelFernwickHall_CadetA_Text_0:
# 22 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "SOLVI: Cadet exam, round one! Don't go\n"
	.string "easy on me. They dock points for that.$"

ParcelFernwickHall_CadetA_Text_1:
# 23 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "SOLVI: Points docked.$"

ParcelFernwickHall_CadetA_Text_2:
# 24 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "SOLVI: TARN's up the back. He talks\n"
	.string "slow. Don't mistake it for kindness.$"

ParcelFernwickHall_CadetB_Text_0:
# 30 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "EGIL: I've been a cadet for three\n"
	.string "years. THREE. Let me have this one.$"

ParcelFernwickHall_CadetB_Text_1:
# 31 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "EGIL: Four years, then.$"

ParcelFernwickHall_CadetB_Text_2:
# 32 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "EGIL: Go on. He's waiting. He's always\n"
	.string "waiting.$"

ParcelFernwickHall_Tarn_Text_0:
# 38 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Tidewater Division. I examine.\p"
	.string "You want the Forest Certification,\n"
	.string "provisional? Show me you can hold a line\l"
	.string "when the water's against you.$"

ParcelFernwickHall_Tarn_Text_1:
# 39 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Hm. The current's yours, then.$"

ParcelFernwickHall_Tarn_Text_2:
# 43 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Passed is passed. Go and see\n"
	.string "HALE. He signs; I only say whether you\l"
	.string "can fight.$"

ParcelFernwickHall_Tarn_Defeated_Text_0:
# 52 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: Forest Certification, practical:\n"
	.string "passed. HALE signs the paper. I only say\l"
	.string "whether you can fight.\p"
	.string "You can.$"

ParcelFernwickHall_Tarn_Defeated_Text_1:
# 54 "data/maps/ParcelFernwickHall/scripts.pory"
	.string "TARN: WATER PULSE. Teach it to\n"
	.string "something. The marsh is mostly water,\l"
	.string "and most of it's against you.$"
