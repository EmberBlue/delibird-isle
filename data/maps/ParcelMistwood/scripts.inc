ParcelMistwood_MapScripts::
	.byte 0


ParcelMistwood_Sanna::
# 15 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_SANNA, ParcelMistwood_Sanna_Text_0, ParcelMistwood_Sanna_Text_1
# 18 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Sanna_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Pim::
# 23 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_PIM, ParcelMistwood_Pim_Text_0, ParcelMistwood_Pim_Text_1
# 26 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Pim_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Freya::
# 31 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_FREYA, ParcelMistwood_Freya_Text_0, ParcelMistwood_Freya_Text_1
# 34 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Freya_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Arvid::
# 39 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_ARVID, ParcelMistwood_Arvid_Text_0, ParcelMistwood_Arvid_Text_1
# 42 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Arvid_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Tove::
# 47 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_TOVE, ParcelMistwood_Tove_Text_0, ParcelMistwood_Tove_Text_1
# 50 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Tove_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_Ole::
# 55 "data/maps/ParcelMistwood/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MISTWOOD_OLE, ParcelMistwood_Ole_Text_0, ParcelMistwood_Ole_Text_1
# 58 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Ole_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelMistwood_SnareZigzagoon::
# 64 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 65 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 66 "data/maps/ParcelMistwood/scripts.pory"
	waitse
# 67 "data/maps/ParcelMistwood/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
# 68 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareZigzagoon_Text_0, MSGBOX_YESNO
# 69 "data/maps/ParcelMistwood/scripts.pory"
	waitmoncry
# 70 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMistwood_SnareZigzagoon_2
# 76 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareZigzagoon_Text_2, MSGBOX_DEFAULT
ParcelMistwood_SnareZigzagoon_1:
# 78 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_SnareZigzagoon_2:
# 71 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareZigzagoon_Text_1, MSGBOX_DEFAULT
# 72 "data/maps/ParcelMistwood/scripts.pory"
	closemessage
# 73 "data/maps/ParcelMistwood/scripts.pory"
	setflag FLAG_SKALD_SNARE_FREED_1
# 74 "data/maps/ParcelMistwood/scripts.pory"
	removeobject 10
	goto ParcelMistwood_SnareZigzagoon_1


ParcelMistwood_SnareHoothoot::
# 83 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 84 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 85 "data/maps/ParcelMistwood/scripts.pory"
	waitse
# 86 "data/maps/ParcelMistwood/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_ENCOUNTER
# 87 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareHoothoot_Text_0, MSGBOX_YESNO
# 88 "data/maps/ParcelMistwood/scripts.pory"
	waitmoncry
# 89 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMistwood_SnareHoothoot_2
# 95 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareHoothoot_Text_2, MSGBOX_DEFAULT
ParcelMistwood_SnareHoothoot_1:
# 97 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_SnareHoothoot_2:
# 90 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareHoothoot_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/ParcelMistwood/scripts.pory"
	closemessage
# 92 "data/maps/ParcelMistwood/scripts.pory"
	setflag FLAG_SKALD_SNARE_FREED_2
# 93 "data/maps/ParcelMistwood/scripts.pory"
	removeobject 11
	goto ParcelMistwood_SnareHoothoot_1


ParcelMistwood_SnareSeedot::
# 102 "data/maps/ParcelMistwood/scripts.pory"
	lock
# 103 "data/maps/ParcelMistwood/scripts.pory"
	faceplayer
# 104 "data/maps/ParcelMistwood/scripts.pory"
	waitse
# 105 "data/maps/ParcelMistwood/scripts.pory"
	playmoncry SPECIES_SEEDOT, CRY_MODE_ENCOUNTER
# 106 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareSeedot_Text_0, MSGBOX_YESNO
# 107 "data/maps/ParcelMistwood/scripts.pory"
	waitmoncry
# 108 "data/maps/ParcelMistwood/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMistwood_SnareSeedot_2
# 114 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareSeedot_Text_2, MSGBOX_DEFAULT
ParcelMistwood_SnareSeedot_1:
# 116 "data/maps/ParcelMistwood/scripts.pory"
	release
	end

ParcelMistwood_SnareSeedot_2:
# 109 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_SnareSeedot_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/ParcelMistwood/scripts.pory"
	closemessage
# 111 "data/maps/ParcelMistwood/scripts.pory"
	setflag FLAG_SKALD_SNARE_FREED_3
# 112 "data/maps/ParcelMistwood/scripts.pory"
	removeobject 12
	goto ParcelMistwood_SnareSeedot_1


ParcelMistwood_ItemPokeBall::
# 122 "data/maps/ParcelMistwood/scripts.pory"
	finditem ITEM_POKE_BALL, 2
	end


ParcelMistwood_ItemPotion::
# 127 "data/maps/ParcelMistwood/scripts.pory"
	finditem ITEM_POTION
	end


ParcelMistwood_ItemAntidote::
# 132 "data/maps/ParcelMistwood/scripts.pory"
	finditem ITEM_ANTIDOTE
	end


ParcelMistwood_Sign::
# 137 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Sign_Text_0, MSGBOX_SIGN
	end


ParcelMistwood_Board::
# 142 "data/maps/ParcelMistwood/scripts.pory"
	goto_if_set FLAG_SKALD_MISTWOOD_CUT_GIVEN, ParcelMistwood_Board_2
# 145 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board_Text_1, MSGBOX_SIGN
ParcelMistwood_Board_1:
	end

ParcelMistwood_Board_2:
# 143 "data/maps/ParcelMistwood/scripts.pory"
	msgbox ParcelMistwood_Board_Text_0, MSGBOX_SIGN
	goto ParcelMistwood_Board_1


ParcelMistwood_Sanna_Text_0:
# 16 "data/maps/ParcelMistwood/scripts.pory"
	.string "SANNA: I've got two WURMPLE. Two! You\n"
	.string "can't beat two!$"

ParcelMistwood_Sanna_Text_1:
# 17 "data/maps/ParcelMistwood/scripts.pory"
	.string "SANNA: Two wasn't enough...$"

ParcelMistwood_Sanna_Text_2:
# 18 "data/maps/ParcelMistwood/scripts.pory"
	.string "SANNA: The warden says don't touch the\n"
	.string "snares. But he also says report them.\l"
	.string "How do you report a thing you can't\l"
	.string "touch?$"

ParcelMistwood_Pim_Text_0:
# 24 "data/maps/ParcelMistwood/scripts.pory"
	.string "PIM: Nobody gets past this corridor\n"
	.string "without battling PIM! That's me.$"

ParcelMistwood_Pim_Text_1:
# 25 "data/maps/ParcelMistwood/scripts.pory"
	.string "PIM: Okay, one person gets past.$"

ParcelMistwood_Pim_Text_2:
# 26 "data/maps/ParcelMistwood/scripts.pory"
	.string "PIM: There's a ZIGZAGOON stuck in a\n"
	.string "snare by the west wall. I'm not allowed\l"
	.string "to touch it. It's been there since\l"
	.string "yesterday.$"

ParcelMistwood_Freya_Text_0:
# 32 "data/maps/ParcelMistwood/scripts.pory"
	.string "FREYA: My HOOTHOOT sleeps all day.\n"
	.string "Let's see if yours can wake it up!$"

ParcelMistwood_Freya_Text_1:
# 33 "data/maps/ParcelMistwood/scripts.pory"
	.string "FREYA: Well, it's awake now.$"

ParcelMistwood_Freya_Text_2:
# 34 "data/maps/ParcelMistwood/scripts.pory"
	.string "FREYA: The ranger post is in the\n"
	.string "clearing up ahead. The warden's grumpy,\l"
	.string "but he's got a map.$"

ParcelMistwood_Arvid_Text_0:
# 40 "data/maps/ParcelMistwood/scripts.pory"
	.string "ARVID: I'm training to be a RANGER. Step\n"
	.string "one: beat everyone in the woods!$"

ParcelMistwood_Arvid_Text_1:
# 41 "data/maps/ParcelMistwood/scripts.pory"
	.string "ARVID: Step one is harder than it\n"
	.string "sounds.$"

ParcelMistwood_Arvid_Text_2:
# 42 "data/maps/ParcelMistwood/scripts.pory"
	.string "ARVID: Step two is the snares, I think.\n"
	.string "The warden won't tell me step two until\l"
	.string "I finish step one.$"

ParcelMistwood_Tove_Text_0:
# 48 "data/maps/ParcelMistwood/scripts.pory"
	.string "TOVE: Shh! You'll scare the SEEDOT!\n"
	.string "...Too late. Battle!$"

ParcelMistwood_Tove_Text_1:
# 49 "data/maps/ParcelMistwood/scripts.pory"
	.string "TOVE: The SEEDOT are all gone now.\n"
	.string "Thanks.$"

ParcelMistwood_Tove_Text_2:
# 50 "data/maps/ParcelMistwood/scripts.pory"
	.string "TOVE: The north exit's blocked. A whole\n"
	.string "tree came down in the storm. You'd need\l"
	.string "CUT to get through, and nobody out here\l"
	.string "has it.$"

ParcelMistwood_Ole_Text_0:
# 56 "data/maps/ParcelMistwood/scripts.pory"
	.string "OLE: Camping in the woods builds\n"
	.string "character! And POKéMON! Let's go!$"

ParcelMistwood_Ole_Text_1:
# 57 "data/maps/ParcelMistwood/scripts.pory"
	.string "OLE: My character needs more building.$"

ParcelMistwood_Ole_Text_2:
# 58 "data/maps/ParcelMistwood/scripts.pory"
	.string "OLE: I found a snare by the east wall\n"
	.string "with a HOOTHOOT in it, up past the\l"
	.string "clearing. I didn't know what to do so I\l"
	.string "did nothing. That's what the sign said.$"

ParcelMistwood_SnareZigzagoon_Text_0:
# 68 "data/maps/ParcelMistwood/scripts.pory"
	.string "A ZIGZAGOON is caught in a wire snare!\n"
	.string "It's pulling, and the wire's pulling back.\p"
	.string "Loosen the wire?$"

ParcelMistwood_SnareZigzagoon_Text_1:
# 71 "data/maps/ParcelMistwood/scripts.pory"
	.string "You work the wire loose, one loop at a\n"
	.string "time.\p"
	.string "The ZIGZAGOON bolts into the trees\n"
	.string "without looking back.$"

ParcelMistwood_SnareZigzagoon_Text_2:
# 76 "data/maps/ParcelMistwood/scripts.pory"
	.string "The ZIGZAGOON stops pulling and stares\n"
	.string "at you.$"

ParcelMistwood_SnareHoothoot_Text_0:
# 87 "data/maps/ParcelMistwood/scripts.pory"
	.string "A HOOTHOOT has one foot in a snare. It's\n"
	.string "standing on the other one, very calmly,\l"
	.string "like this is fine.\p"
	.string "Loosen the wire?$"

ParcelMistwood_SnareHoothoot_Text_1:
# 90 "data/maps/ParcelMistwood/scripts.pory"
	.string "You slip the loop off its foot.\p"
	.string "The HOOTHOOT looks at you, hops once,\n"
	.string "and flies straight up.$"

ParcelMistwood_SnareHoothoot_Text_2:
# 95 "data/maps/ParcelMistwood/scripts.pory"
	.string "The HOOTHOOT blinks. Slowly. It can\n"
	.string "wait.$"

ParcelMistwood_SnareSeedot_Text_0:
# 106 "data/maps/ParcelMistwood/scripts.pory"
	.string "A SEEDOT is dangling from a snare by its\n"
	.string "stem. It's pretending to be an acorn. It\l"
	.string "is not a very convincing acorn.\p"
	.string "Loosen the wire?$"

ParcelMistwood_SnareSeedot_Text_1:
# 109 "data/maps/ParcelMistwood/scripts.pory"
	.string "You untwist the wire. The SEEDOT drops,\n"
	.string "rolls, and vanishes under a root.$"

ParcelMistwood_SnareSeedot_Text_2:
# 114 "data/maps/ParcelMistwood/scripts.pory"
	.string "The SEEDOT keeps pretending.$"

ParcelMistwood_Sign_Text_0:
# 137 "data/maps/ParcelMistwood/scripts.pory"
	.string "MISTWOOD\n"
	.string "Skaldmere Climate Corps managed\l"
	.string "woodland\p"
	.string "Stay on the track. Report snares at the\n"
	.string "RANGER POST. Do not touch them.$"

ParcelMistwood_Board_Text_0:
# 143 "data/maps/ParcelMistwood/scripts.pory"
	.string "RANGER POST\p"
	.string "Snares found this week: 3\n"
	.string "Snares cleared: 3\p"
	.string "In different handwriting: by a tourist.\n"
	.string "-- S.$"

ParcelMistwood_Board_Text_1:
# 145 "data/maps/ParcelMistwood/scripts.pory"
	.string "RANGER POST\p"
	.string "Snares found this week: 3\n"
	.string "Snares cleared: 0\p"
	.string "The warden is inside. He is not in a good\n"
	.string "mood.$"
