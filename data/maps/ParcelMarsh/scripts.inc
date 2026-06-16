ParcelMarsh_MapScripts::
# 22 "data/maps/ParcelMarsh/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelMarsh_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelMarsh_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/ParcelMarsh/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelMarsh_SetMapVar
	.2byte 0


ParcelMarsh_SetMapVar::
# 28 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelMarsh_FirstEntry::
# 33 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORRIDOR_ARRIVAL, ParcelMarsh_FirstEntry_2
# 37 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 38 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_FirstEntry_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_FirstEntry_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_FirstEntry_Text_2, MSGBOX_DEFAULT
# 41 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_CORRIDOR_ARRIVAL
# 42 "data/maps/ParcelMarsh/scripts.pory"
	releaseall
	end

ParcelMarsh_FirstEntry_2:
	end


ParcelMarsh_DryChannel::
# 49 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 50 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 51 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 0
# 52 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 53 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_DryChannel_2
# 58 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DryChannel_Text_1, MSGBOX_SIGN
# 59 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 60 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_DryChannel_2:
# 54 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DryChannel_Text_0, MSGBOX_SIGN
# 55 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_DeadReeds::
# 66 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 67 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 68 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 1
# 69 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 70 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_DeadReeds_2
# 75 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DeadReeds_Text_1, MSGBOX_SIGN
# 76 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 77 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_DeadReeds_2:
# 71 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DeadReeds_Text_0, MSGBOX_SIGN
# 72 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Edge::
# 83 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 84 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 85 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 2
# 86 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 87 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_Edge_2
# 92 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Edge_Text_1, MSGBOX_SIGN
# 93 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 94 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Edge_2:
# 88 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Edge_Text_0, MSGBOX_SIGN
# 89 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Poliwag::
# 100 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 101 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 102 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 3
# 103 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 104 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Poliwag_Text_0, MSGBOX_DEFAULT
# 105 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Poliwag_Text_1, MSGBOX_DEFAULT
# 106 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Heron::
# 112 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 113 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 114 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMarsh_Heron_2
# 119 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 120 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 15
# 121 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 122 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ParcelMarsh_Heron_5
# 137 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_6, MSGBOX_DEFAULT
# 138 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_7, MSGBOX_DEFAULT
# 139 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_8, MSGBOX_DEFAULT
# 140 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_9, MSGBOX_DEFAULT
# 141 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_10, MSGBOX_DEFAULT
# 142 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_11, MSGBOX_DEFAULT
# 143 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_12, MSGBOX_DEFAULT
# 144 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_13, MSGBOX_DEFAULT
# 145 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_14, MSGBOX_DEFAULT
# 147 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_15, MSGBOX_DEFAULT
# 148 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HERON, ParcelMarsh_Heron_Text_16, ParcelMarsh_Heron_Text_17
# 151 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_18, MSGBOX_DEFAULT
# 152 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_19, MSGBOX_DEFAULT
# 153 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_20, MSGBOX_DEFAULT
# 154 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_21, MSGBOX_DEFAULT
# 155 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_22, MSGBOX_DEFAULT
# 157 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 158 "data/maps/ParcelMarsh/scripts.pory"
	delay 30
# 159 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_23, MSGBOX_DEFAULT
# 160 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCorridor
# 161 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_24, MSGBOX_DEFAULT
# 163 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_25, MSGBOX_DEFAULT
# 164 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_26, MSGBOX_DEFAULT
# 165 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_27, MSGBOX_DEFAULT
# 166 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_28, MSGBOX_DEFAULT
# 167 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_FINALE_DONE
# 168 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_2:
# 115 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_5:
# 123 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HERON_MET, ParcelMarsh_Heron_8
# 128 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_2, MSGBOX_DEFAULT
# 129 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_3, MSGBOX_DEFAULT
# 130 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_4, MSGBOX_DEFAULT
# 131 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_5, MSGBOX_DEFAULT
# 132 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_HERON_MET
# 133 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_8:
# 124 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_1, MSGBOX_DEFAULT
# 125 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_PoliwagWatch::
# 174 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 175 "data/maps/ParcelMarsh/scripts.pory"
	call ParcelMarsh_Poliwag
# 176 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Item::
# 181 "data/maps/ParcelMarsh/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelMarsh_Leave::
# 187 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 188 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Leave_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 190 "data/maps/ParcelMarsh/scripts.pory"
	warp MAP_PARCEL_STATION, 15, 16
# 191 "data/maps/ParcelMarsh/scripts.pory"
	waitstate
	end


ParcelMarsh_FirstEntry_Text_0:
# 38 "data/maps/ParcelMarsh/scripts.pory"
	.string "The trees close behind you and the\n"
	.string "wilderness opens into a marsh -- small,\l"
	.string "soft, unfenced. No crest on anything.\l"
	.string "No road but the one biting in from the\l"
	.string "east.\p"
	.string "It is the first place since the meadow\n"
	.string "that nobody has come to sell.$"

ParcelMarsh_FirstEntry_Text_1:
# 39 "data/maps/ParcelMarsh/scripts.pory"
	.string "You have stood somewhere like this\n"
	.string "before. You try not to think about\l"
	.string "where. The notebook is heavy against\l"
	.string "your side.\p"
	.string "You carry it because your partner can\n"
	.string "no longer draw. Every page since has\l"
	.string "been Sketch's eye, kept open by hand.$"

ParcelMarsh_FirstEntry_Text_2:
# 40 "data/maps/ParcelMarsh/scripts.pory"
	.string "Doduo goes still. At the stream mouth\n"
	.string "ahead, a knot of Poliwag huddle against\l"
	.string "the bank -- panicked, stuck, exactly\l"
	.string "the way the first ones were, on the\l"
	.string "bridge, the day you understood nothing\l"
	.string "yet.\p"
	.string "You understand now. Read it. Then find\n"
	.string "her.$"

ParcelMarsh_DryChannel_Text_0:
# 54 "data/maps/ParcelMarsh/scripts.pory"
	.string "The dry channel. Logged.$"

ParcelMarsh_DryChannel_Text_1:
# 58 "data/maps/ParcelMarsh/scripts.pory"
	.string "A channel that should run cold and full\n"
	.string "runs to cracked grey mud instead. The\l"
	.string "marsh is losing its water from the top\l"
	.string "-- a little less every season, from\l"
	.string "everything upstream that you have\l"
	.string "spent this whole journey writing down.\p"
	.string "No single wound. A thousand small ones,\n"
	.string "draining a place to death.$"

ParcelMarsh_DeadReeds_Text_0:
# 71 "data/maps/ParcelMarsh/scripts.pory"
	.string "The dead reeds. Noted.$"

ParcelMarsh_DeadReeds_Text_1:
# 75 "data/maps/ParcelMarsh/scripts.pory"
	.string "A band of reeds gone straw-pale and\n"
	.string "brittle, the fine sedges that need\l"
	.string "their feet wet the year round. They are\l"
	.string "the first to feel a marsh begin to\l"
	.string "leave.\p"
	.string "You have learned to read the small\n"
	.string "things first. The big things only\l"
	.string "confirm what the small ones already\l"
	.string "said.$"

ParcelMarsh_Edge_Text_0:
# 88 "data/maps/ParcelMarsh/scripts.pory"
	.string "The graded edge. Measured.$"

ParcelMarsh_Edge_Text_1:
# 92 "data/maps/ParcelMarsh/scripts.pory"
	.string "On the east side the wild stops in a\n"
	.string "straight line. Graded ground, a survey\l"
	.string "flag, the start of a road to nothing\l"
	.string "yet.\p"
	.string "Nobody has taken this marsh. Someone\n"
	.string "has simply begun to stand at its edge\l"
	.string "and wait. That is all it takes now. The\l"
	.string "frontier closes by leaning on a place\l"
	.string "until it gives.$"

ParcelMarsh_Poliwag_Text_0:
# 104 "data/maps/ParcelMarsh/scripts.pory"
	.string "The Poliwag press together where the\n"
	.string "stream still runs, fewer than the bank\l"
	.string "was worn for. They flinch as you kneel,\l"
	.string "and hold their ground, because there is\l"
	.string "no ground left behind them to take.\p"
	.string "The keystone. The indicator. The first\n"
	.string "creatures you ever saw in trouble,\l"
	.string "before you had the word for it.$"

ParcelMarsh_Poliwag_Text_1:
# 105 "data/maps/ParcelMarsh/scripts.pory"
	.string "You had it backwards on the bridge. You\n"
	.string "thought something was chasing them\l"
	.string "upstream.\p"
	.string "Nothing was chasing them. The water in\n"
	.string "front of them was simply running out. It\l"
	.string "has been running out their whole lives,\l"
	.string "and yours.$"

ParcelMarsh_Heron_Text_0:
# 115 "data/maps/ParcelMarsh/scripts.pory"
	.string "Dr. Heron has gone back to her counting.\n"
	.string "The tally grows, one careful mark at a\l"
	.string "time.\p"
	.string "She does not look up again. There is\n"
	.string "nothing left to say that the notebook\l"
	.string "does not already hold -- in her hand,\l"
	.string "and now in yours.$"

ParcelMarsh_Heron_Text_1:
# 124 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: Not yet. The drying channel. The\n"
	.string "dead reeds. The edge they have cut. And\l"
	.string "them -- the frogs, last of all.\p"
	.string "Read the whole place. Then we'll talk\n"
	.string "about the part of it that's me.$"

ParcelMarsh_Heron_Text_2:
# 128 "data/maps/ParcelMarsh/scripts.pory"
	.string "An old woman kneels at the waterline, a\n"
	.string "wading-bird stillness to her, marking a\l"
	.string "tally on a damp page. She is counting\l"
	.string "Poliwag, under her breath, the way you\l"
	.string "count something you do not want to\l"
	.string "finish counting.$"

ParcelMarsh_Heron_Text_3:
# 129 "data/maps/ParcelMarsh/scripts.pory"
	.string "She does not startle.\p"
	.string "Heron: You found me. Of course you did.\p"
	.string "I taught you how to find the things\n"
	.string "that don't want finding.$"

ParcelMarsh_Heron_Text_4:
# 130 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: …Dr. Heron.$"

ParcelMarsh_Heron_Text_5:
# 131 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: Don't. Not yet.\p"
	.string "You came to read a place, not a person.\n"
	.string "So read the place first -- all of it, the\l"
	.string "way I taught you. Then come back to me.\l"
	.string "I'm not going anywhere. I've seen to\l"
	.string "that.$"

ParcelMarsh_Heron_Text_6:
# 137 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron sets the tally down and looks at\n"
	.string "you properly -- the first time, you\l"
	.string "realize, that she has looked AT you and\l"
	.string "not past you to the water.\p"
	.string "Heron: COLLAPSING. You don't have to\n"
	.string "say it; I can see you've already written\l"
	.string "it. The keystone failing, the web\l"
	.string "letting go from the bottom. The frogs\l"
	.string "hanging on last, because they always\l"
	.string "do.$"

ParcelMarsh_Heron_Text_7:
# 138 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: I should know how long they can\n"
	.string "hang on. I built half my name on the\l"
	.string "number.$"

ParcelMarsh_Heron_Text_8:
# 139 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: The recovery model on the\n"
	.string "coast. The curves. They're yours.$"

ParcelMarsh_Heron_Text_9:
# 140 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: They're mine.\p"
	.string "Forty years ago. A marsh like this one,\n"
	.string "north of Mahogany. The Poliwag were\l"
	.string "going under and the law would not lift a\l"
	.string "finger for a number that small. So I\l"
	.string "made the number bigger. I wrote down a\l"
	.string "recovery that had not happened, and I\l"
	.string "swore to it under my own name.$"

ParcelMarsh_Heron_Text_10:
# 141 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: It worked. The preserve was\n"
	.string "protected. The frogs held on -- barely,\l"
	.string "but they held. And for thirty years I\l"
	.string "told myself a lie with a good heart and\l"
	.string "good results was near enough to the\l"
	.string "truth.$"

ParcelMarsh_Heron_Text_11:
# 142 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: Then the concern read my\n"
	.string "beautiful lie and saw the shape of a\l"
	.string "key. If one marsh bounces back, they all\l"
	.string "do. If they all do, then nothing you\l"
	.string "take can't be given back later.\p"
	.string "My little mercy became their permission.\n"
	.string "For everything. For the dredge, the cut,\l"
	.string "the thaw. For this.$"

ParcelMarsh_Heron_Text_12:
# 143 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: You could have said.\n"
	.string "Somewhere, sometime, you could have\l"
	.string "said --$"

ParcelMarsh_Heron_Text_13:
# 144 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: Said what, to whom, on whose\n"
	.string "coin? The same hand that funds the lab\l"
	.string "holds the lie. The day I tell the truth,\l"
	.string "the work dies, the name dies, and the\l"
	.string "whole movement I gave my life to dies\l"
	.string "discredited by its own founder.\p"
	.string "The woman who signs my funding was my\n"
	.string "student. She visits. She calls me Dr. H.\l"
	.string "She has been very kind about all of it.$"

ParcelMarsh_Heron_Text_14:
# 145 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: That is how it's done now,\n"
	.string "{PLAYER}. No villains in a tower. Just\l"
	.string "people you love, standing in the door,\l"
	.string "very sorry, not moving.$"

ParcelMarsh_Heron_Text_15:
# 147 "data/maps/ParcelMarsh/scripts.pory"
	.string "She stands. Out of the reeds her\n"
	.string "Pokémon rise around her -- old,\l"
	.string "field-worn, well-kept. The Politoed last\l"
	.string "of all, the one she could never quite let\l"
	.string "go of. The one the lie was for.\p"
	.string "Heron: You came to read me too. Then\n"
	.string "read me all the way down. I won't make it\l"
	.string "easy. I never made anything easy. That\l"
	.string "was the good part of me.$"

ParcelMarsh_Heron_Text_16:
# 149 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: Patient, now. Wait for the thing\n"
	.string "to show itself.\n"
	.string "The way I taught you.$"

ParcelMarsh_Heron_Text_17:
# 150 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: …There. All of me, in the open.\n"
	.string "The good years and the bought ones\l"
	.string "both.$"

ParcelMarsh_Heron_Text_18:
# 151 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron lowers herself back to the\n"
	.string "waterline, slower than before. The\l"
	.string "Politoed settles against her knee.$"

ParcelMarsh_Heron_Text_19:
# 152 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: I can't give you the rest. Some\n"
	.string "of it I cannot say aloud even now.\p"
	.string "But it's in the notebook. The margins.\n"
	.string "You can read them at last -- you\l"
	.string "couldn't, when I sent it ahead. That was\l"
	.string "the whole point of sending it ahead. I\l"
	.string "wrote it to the person you were going\l"
	.string "to become.$"

ParcelMarsh_Heron_Text_20:
# 153 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: I came here to do the one honest\n"
	.string "thing I had left. Count them. Truly, this\l"
	.string "time. Write down how many, and the day\l"
	.string "the last one goes.\p"
	.string "I'm not leaving this marsh. Don't spend\n"
	.string "your breath on it; I've made my\l"
	.string "arrangements, the same as I make\l"
	.string "everything -- carefully, and alone.$"

ParcelMarsh_Heron_Text_21:
# 154 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: So finish it. Take the record --\n"
	.string "mine, and Ilex's long cloth, and yours --\l"
	.string "and put it somewhere it cannot be\l"
	.string "unsaid.\p"
	.string "It will cost you. It will cost the\n"
	.string "Mahogany frogs the protection my lie\l"
	.string "bought them. It will cost me the last\l"
	.string "thing I have. Do it anyway.$"

ParcelMarsh_Heron_Text_22:
# 155 "data/maps/ParcelMarsh/scripts.pory"
	.string "Heron: That is the whole of what I have\n"
	.string "left to teach. Honesty is not free. Pay\l"
	.string "for it anyway, and keep the receipt.$"

ParcelMarsh_Heron_Text_23:
# 159 "data/maps/ParcelMarsh/scripts.pory"
	.string "So you do the work. The last survey,\n"
	.string "with the woman who taught you the verb\l"
	.string "watching you do it, and Doduo quiet at\l"
	.string "your shoulder.\p"
	.string "You kneel where she kneels. You read\n"
	.string "the marsh the way six broken places\l"
	.string "taught you to read -- the failing\l"
	.string "keystone, the thinning web, the edge\l"
	.string "leaning in -- and you write it down true.$"

ParcelMarsh_Heron_Text_24:
# 161 "data/maps/ParcelMarsh/scripts.pory"
	.string "No certification this time. No red cloth\n"
	.string "from anyone's hand. You tie the last\l"
	.string "strip to your own pack yourself, and\l"
	.string "nobody signs it.\p"
	.string "The notebook was your teacher's eye,\n"
	.string "and your lost partner's. The first words\l"
	.string "in your own hand go in under cold grey\l"
	.string "light. They are the truest thing you\l"
	.string "have ever written. They end someone\l"
	.string "you love.$"

ParcelMarsh_Heron_Text_25:
# 163 "data/maps/ParcelMarsh/scripts.pory"
	.string "Back at the treeline Hale waits where\n"
	.string "he said he would, not one step nearer.\p"
	.string "Hale: Is it done?\p"
	.string "{PLAYER}: …It's true.\p"
	.string "Hale: That's the only done there is.$"

ParcelMarsh_Heron_Text_26:
# 164 "data/maps/ParcelMarsh/scripts.pory"
	.string "Hale: They'll bury it -- some of them.\n"
	.string "And some of them will read it. And a few\l"
	.string "of those will be standing where you are\l"
	.string "standing now, one day, with a notebook\l"
	.string "of their own.\p"
	.string "That is the work. Not the winning. The\n"
	.string "witnessing -- and the handing on.$"

ParcelMarsh_Heron_Text_27:
# 165 "data/maps/ParcelMarsh/scripts.pory"
	.string "The expansion will slow. It will not\n"
	.string "stop. The mentor is gone, or going. Some\l"
	.string "of what you recorded had already\l"
	.string "crossed over before your pen touched\l"
	.string "it, and will not come back.\p"
	.string "And the record exists now, honest, in\n"
	.string "your hand. It is not nothing. On the\l"
	.string "worst days it is the only thing there is.$"

ParcelMarsh_Heron_Text_28:
# 166 "data/maps/ParcelMarsh/scripts.pory"
	.string "Behind you, in the last of the running\n"
	.string "water, a single Poliwag slips upstream\l"
	.string "in a tight, exhausted line -- the way\l"
	.string "they did at the bridge, the first\l"
	.string "morning, before you had the word for\l"
	.string "what you were seeing.\p"
	.string "You have the word now. You wrote it\n"
	.string "down. You begin the long walk out.$"

ParcelMarsh_Leave_Text_0:
# 188 "data/maps/ParcelMarsh/scripts.pory"
	.string "The trail south leads back out of the\n"
	.string "wilderness, toward the station, and\l"
	.string "whatever the record does next.$"
