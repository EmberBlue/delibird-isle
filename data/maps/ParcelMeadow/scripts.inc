ParcelMeadow_MapScripts::
# 16 "data/maps/ParcelMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelMeadow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/ParcelMeadow/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelMeadow_FirstEntry
	.2byte 0


ParcelMeadow_FirstEntry::
# 23 "data/maps/ParcelMeadow/scripts.pory"
	setvar VAR_TEMP_1, 1
# 24 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALD_MEADOW_INTRO, ParcelMeadow_FirstEntry_2
# 27 "data/maps/ParcelMeadow/scripts.pory"
	lockall
# 28 "data/maps/ParcelMeadow/scripts.pory"
	applymovement 1, Movement_RinToGate
# 29 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 30 "data/maps/ParcelMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFaceUp
# 31 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 32 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_FirstEntry_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_FirstEntry_Text_1, MSGBOX_DEFAULT
# 34 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_FirstEntry_Text_2, MSGBOX_DEFAULT
# 35 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 36 "data/maps/ParcelMeadow/scripts.pory"
	applymovement 1, Movement_RinBack
# 37 "data/maps/ParcelMeadow/scripts.pory"
	waitmovement 0
# 38 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_MEADOW_INTRO
# 39 "data/maps/ParcelMeadow/scripts.pory"
	releaseall
	end

ParcelMeadow_FirstEntry_2:
	end


# 43 "data/maps/ParcelMeadow/scripts.pory"
Movement_RinToGate:
# 44 "data/maps/ParcelMeadow/scripts.pory"
	walk_down
# 45 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 46 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 47 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 48 "data/maps/ParcelMeadow/scripts.pory"
	walk_left
# 49 "data/maps/ParcelMeadow/scripts.pory"
	face_down
# 50 "data/maps/ParcelMeadow/scripts.pory"
	step_end

# 53 "data/maps/ParcelMeadow/scripts.pory"
Movement_RinBack:
# 54 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 55 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 56 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 57 "data/maps/ParcelMeadow/scripts.pory"
	walk_right
# 58 "data/maps/ParcelMeadow/scripts.pory"
	walk_up
# 59 "data/maps/ParcelMeadow/scripts.pory"
	face_down
# 60 "data/maps/ParcelMeadow/scripts.pory"
	step_end

# 63 "data/maps/ParcelMeadow/scripts.pory"
Movement_PlayerFaceUp:
# 64 "data/maps/ParcelMeadow/scripts.pory"
	face_up
# 65 "data/maps/ParcelMeadow/scripts.pory"
	step_end

ParcelMeadow_Rin::
# 69 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 70 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 71 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelMeadow_Rin_2
# 73 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Rin_3
# 76 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_2, MSGBOX_DEFAULT
ParcelMeadow_Rin_1:
# 78 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Rin_2:
# 72 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_0, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_1

ParcelMeadow_Rin_3:
# 74 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Rin_Text_1, MSGBOX_DEFAULT
	goto ParcelMeadow_Rin_1


ParcelMeadow_Sign::
# 83 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Sign_Text_0, MSGBOX_SIGN
	end


ParcelMeadow_Doduo::
# 92 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 93 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 94 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Doduo_2
# 99 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_1, MSGBOX_YESNO
# 100 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Doduo_5
# 108 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Doduo_4:
# 110 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_2:
# 95 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_0, MSGBOX_DEFAULT
# 96 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Doduo_5:
# 101 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 102 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_DODUO, 5
# 103 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_DODUO
# 104 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 2
# 105 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Doduo_Text_2, MSGBOX_DEFAULT
# 106 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Doduo_4


ParcelMeadow_Shroomish::
# 115 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 116 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 117 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Shroomish_2
# 122 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_1, MSGBOX_YESNO
# 123 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Shroomish_5
# 131 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Shroomish_4:
# 133 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_2:
# 118 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_0, MSGBOX_DEFAULT
# 119 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Shroomish_5:
# 124 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 125 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_SHROOMISH, 5
# 126 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_SHROOMISH
# 127 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 3
# 128 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Shroomish_Text_2, MSGBOX_DEFAULT
# 129 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Shroomish_4


ParcelMeadow_Seedot::
# 138 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 139 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 140 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Seedot_2
# 145 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_1, MSGBOX_YESNO
# 146 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Seedot_5
# 154 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Seedot_4:
# 156 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_2:
# 141 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_0, MSGBOX_DEFAULT
# 142 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Seedot_5:
# 147 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 148 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_SEEDOT, 5
# 149 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_SEEDOT
# 150 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 4
# 151 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Seedot_Text_2, MSGBOX_DEFAULT
# 152 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Seedot_4


ParcelMeadow_Lotad::
# 161 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 162 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 163 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Lotad_2
# 168 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_1, MSGBOX_YESNO
# 169 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Lotad_5
# 177 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Lotad_4:
# 179 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_2:
# 164 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Lotad_5:
# 170 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 171 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_LOTAD, 5
# 172 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_LOTAD
# 173 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 5
# 174 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Lotad_Text_2, MSGBOX_DEFAULT
# 175 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Lotad_4


ParcelMeadow_Carvanha::
# 184 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 185 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 186 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Carvanha_2
# 191 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_1, MSGBOX_YESNO
# 192 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Carvanha_5
# 200 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Carvanha_4:
# 202 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_2:
# 187 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_0, MSGBOX_DEFAULT
# 188 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Carvanha_5:
# 193 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 194 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_CARVANHA, 5
# 195 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_CARVANHA
# 196 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 6
# 197 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Carvanha_Text_2, MSGBOX_DEFAULT
# 198 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Carvanha_4


ParcelMeadow_Numel::
# 207 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 208 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 209 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Numel_2
# 214 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_1, MSGBOX_YESNO
# 215 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Numel_5
# 223 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Numel_4:
# 225 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_2:
# 210 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_0, MSGBOX_DEFAULT
# 211 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Numel_5:
# 216 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 217 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_NUMEL, 5
# 218 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_NUMEL
# 219 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 7
# 220 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Numel_Text_2, MSGBOX_DEFAULT
# 221 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Numel_4


ParcelMeadow_Electrike::
# 230 "data/maps/ParcelMeadow/scripts.pory"
	lock
# 231 "data/maps/ParcelMeadow/scripts.pory"
	faceplayer
# 232 "data/maps/ParcelMeadow/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, ParcelMeadow_Electrike_2
# 237 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_1, MSGBOX_YESNO
# 238 "data/maps/ParcelMeadow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMeadow_Electrike_5
# 246 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_3, MSGBOX_DEFAULT
ParcelMeadow_Electrike_4:
# 248 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_2:
# 233 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_0, MSGBOX_DEFAULT
# 234 "data/maps/ParcelMeadow/scripts.pory"
	release
	end

ParcelMeadow_Electrike_5:
# 239 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_Recognition
# 240 "data/maps/ParcelMeadow/scripts.pory"
	givemon SPECIES_ELECTRIKE, 5
# 241 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SKALD_PARTNER_ELECTRIKE
# 242 "data/maps/ParcelMeadow/scripts.pory"
	removeobject 8
# 243 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Electrike_Text_2, MSGBOX_DEFAULT
# 244 "data/maps/ParcelMeadow/scripts.pory"
	call ParcelMeadow_AfterRecognition
	goto ParcelMeadow_Electrike_4


ParcelMeadow_Recognition::
# 254 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 255 "data/maps/ParcelMeadow/scripts.pory"
	delay 40
# 256 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_0, MSGBOX_DEFAULT
# 257 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_1, MSGBOX_DEFAULT
# 258 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 259 "data/maps/ParcelMeadow/scripts.pory"
	delay 40
# 260 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_2, MSGBOX_DEFAULT
# 261 "data/maps/ParcelMeadow/scripts.pory"
	closemessage
# 262 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_BALL_THROW
# 263 "data/maps/ParcelMeadow/scripts.pory"
	delay 30
# 264 "data/maps/ParcelMeadow/scripts.pory"
	playse SE_BALL
# 265 "data/maps/ParcelMeadow/scripts.pory"
	delay 30
# 266 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_Recognition_Text_3, MSGBOX_DEFAULT
# 267 "data/maps/ParcelMeadow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/ParcelMeadow/scripts.pory"
	waitfanfare
	return


ParcelMeadow_AfterRecognition::
# 273 "data/maps/ParcelMeadow/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 274 "data/maps/ParcelMeadow/scripts.pory"
	clearflag FLAG_SKALD_NO_PARTNER_YET
# 275 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_AfterRecognition_Text_0, MSGBOX_DEFAULT
# 276 "data/maps/ParcelMeadow/scripts.pory"
	msgbox ParcelMeadow_AfterRecognition_Text_1, MSGBOX_DEFAULT
	return


ParcelMeadow_FirstEntry_Text_0:
# 32 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Oh! You're WREN, right? HALE said\n"
	.string "you'd come up this way. I'm RIN. I look\l"
	.string "after the meadow.$"

ParcelMeadow_FirstEntry_Text_1:
# 33 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: House rules: everything in here\n"
	.string "got hurt somewhere and is waiting to go\l"
	.string "back out. So no chasing, no grabbing.\p"
	.string "If one of them comes to YOU, though...\n"
	.string "that's different.$"

ParcelMeadow_FirstEntry_Text_2:
# 34 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Go on, have a walk around. Say hi.\n"
	.string "Don't take it personally if they ignore\l"
	.string "you. Most of them ignore me.$"

ParcelMeadow_Rin_Text_0:
# 72 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Look at you, all certified. The\n"
	.string "meadow's quieter without your partner\l"
	.string "in it. Don't tell it I said that.$"

ParcelMeadow_Rin_Text_1:
# 74 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: HALE's at the station. Take the\n"
	.string "track north through MISTWOOD. It's a\l"
	.string "bit of a walk, and the woods are full of\l"
	.string "people who want to battle.\p"
	.string "That's a good thing, by the way. Your\n"
	.string "partner needs the practice.$"

ParcelMeadow_Rin_Text_2:
# 76 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Walk up to them. Stand still. That's\n"
	.string "the whole trick.\p"
	.string "The DODUO's been watching you since\n"
	.string "you came in, if you want a hint.$"

ParcelMeadow_Sign_Text_0:
# 83 "data/maps/ParcelMeadow/scripts.pory"
	.string "HOLDING MEADOW\n"
	.string "Skaldmere Climate Corps\p"
	.string "No chasing. No feeding. No taking.\p"
	.string "In pencil underneath: they pick YOU. --\n"
	.string "R.$"

ParcelMeadow_Doduo_Text_0:
# 95 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO looks at you with one head.\n"
	.string "The other one is watching the trees.$"

ParcelMeadow_Doduo_Text_1:
# 99 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO is watching you. One head,\n"
	.string "anyway.\p"
	.string "Stand still?$"

ParcelMeadow_Doduo_Text_2:
# 105 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received DODUO!$"

ParcelMeadow_Doduo_Text_3:
# 108 "data/maps/ParcelMeadow/scripts.pory"
	.string "The DODUO loses interest. Both heads.$"

ParcelMeadow_Shroomish_Text_0:
# 118 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH is asleep under the tree.\n"
	.string "Or pretending. Hard to tell with\l"
	.string "SHROOMISH.$"

ParcelMeadow_Shroomish_Text_1:
# 122 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH opens one eye. It\n"
	.string "doesn't move. It's very good at not\l"
	.string "moving.\p"
	.string "Stand still?$"

ParcelMeadow_Shroomish_Text_2:
# 128 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received SHROOMISH!$"

ParcelMeadow_Shroomish_Text_3:
# 131 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SHROOMISH closes the eye again.$"

ParcelMeadow_Seedot_Text_0:
# 141 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT is hanging from the branch\n"
	.string "by its stem, pretending to be an acorn.\l"
	.string "It's not fooling anyone.$"

ParcelMeadow_Seedot_Text_1:
# 145 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT drops off the branch and\n"
	.string "lands in front of you. Thunk.\p"
	.string "Stand still?$"

ParcelMeadow_Seedot_Text_2:
# 151 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received SEEDOT!$"

ParcelMeadow_Seedot_Text_3:
# 154 "data/maps/ParcelMeadow/scripts.pory"
	.string "The SEEDOT rolls back to its tree.$"

ParcelMeadow_Lotad_Text_0:
# 164 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD is sitting at the edge of the\n"
	.string "pool with its pad in the water. Living\l"
	.string "the dream.$"

ParcelMeadow_Lotad_Text_1:
# 168 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD paddles over to your side of\n"
	.string "the pool and looks up.\p"
	.string "Stand still?$"

ParcelMeadow_Lotad_Text_2:
# 174 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received LOTAD!$"

ParcelMeadow_Lotad_Text_3:
# 177 "data/maps/ParcelMeadow/scripts.pory"
	.string "The LOTAD paddles away again. Slowly.\n"
	.string "Everything LOTAD does is slowly.$"

ParcelMeadow_Carvanha_Text_0:
# 187 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA circles the pool. It has\n"
	.string "been circling the pool since you got\l"
	.string "here. It will circle the pool after you\l"
	.string "leave.$"

ParcelMeadow_Carvanha_Text_1:
# 191 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA stops circling and stares\n"
	.string "at you through the water. It has a LOT\l"
	.string "of teeth.\p"
	.string "Stand still?$"

ParcelMeadow_Carvanha_Text_2:
# 197 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received CARVANHA!$"

ParcelMeadow_Carvanha_Text_3:
# 200 "data/maps/ParcelMeadow/scripts.pory"
	.string "The CARVANHA goes back to circling.\n"
	.string "Probably for the best.$"

ParcelMeadow_Numel_Text_0:
# 210 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL is lying in the warm sand. It\n"
	.string "hasn't noticed you. It may not have\l"
	.string "noticed anything this week.$"

ParcelMeadow_Numel_Text_1:
# 214 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL lifts its head, very slowly,\n"
	.string "and blinks at you.\p"
	.string "Stand still?$"

ParcelMeadow_Numel_Text_2:
# 220 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received NUMEL!$"

ParcelMeadow_Numel_Text_3:
# 223 "data/maps/ParcelMeadow/scripts.pory"
	.string "The NUMEL puts its head back down. That\n"
	.string "was a lot of effort.$"

ParcelMeadow_Electrike_Text_0:
# 233 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE runs the fence line, back\n"
	.string "and forth, back and forth. Your hair\l"
	.string "stands up when it passes.$"

ParcelMeadow_Electrike_Text_1:
# 237 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE skids to a stop in front\n"
	.string "of you. Sparks are coming off its fur.\p"
	.string "Stand still?$"

ParcelMeadow_Electrike_Text_2:
# 243 "data/maps/ParcelMeadow/scripts.pory"
	.string "{PLAYER} received ELECTRIKE!$"

ParcelMeadow_Electrike_Text_3:
# 246 "data/maps/ParcelMeadow/scripts.pory"
	.string "The ELECTRIKE is off again before you\n"
	.string "can blink.$"

ParcelMeadow_Recognition_Text_0:
# 256 "data/maps/ParcelMeadow/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "It's coming over.$"

ParcelMeadow_Recognition_Text_1:
# 257 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Don't move! It's deciding!$"

ParcelMeadow_Recognition_Text_2:
# 260 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: ...Well. That's not how it usually\n"
	.string "goes.\p"
	.string "Here! Catch!$"

ParcelMeadow_Recognition_Text_3:
# 266 "data/maps/ParcelMeadow/scripts.pory"
	.string "It walked straight into the Ball. No\n"
	.string "shaking. No fuss.$"

ParcelMeadow_AfterRecognition_Text_0:
# 275 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Congratulations, I guess! Now it's\n"
	.string "your problem.\p"
	.string "HALE's at the station. Take the track\n"
	.string "north, through MISTWOOD. It'll follow\l"
	.string "you. They always do, once they've\l"
	.string "decided.$"

ParcelMeadow_AfterRecognition_Text_1:
# 276 "data/maps/ParcelMeadow/scripts.pory"
	.string "RIN: Oh, and there's grass out there.\n"
	.string "Real POKéMON, not meadow POKéMON.\l"
	.string "Yours will want to fight them. Let it.$"
