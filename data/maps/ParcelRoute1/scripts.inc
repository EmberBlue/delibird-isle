ParcelRoute1_MapScripts::
# 20 "data/maps/ParcelRoute1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelRoute1_OnTransition
	.byte 0


ParcelRoute1_OnTransition::
# 24 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_3
# 25 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_4
# 26 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALD_ROUTE1_SCENE_DONE, ParcelRoute1_OnTransition_2
ParcelRoute1_OnTransition_1:
	end

ParcelRoute1_OnTransition_2:
# 27 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelRoute1_OnTransition_1


ParcelRoute1_BridgeScene::
# 36 "data/maps/ParcelRoute1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/ParcelRoute1/scripts.pory"
	goto_if_set FLAG_SKALD_ROUTE1_SCENE_DONE, ParcelRoute1_BridgeScene_2
# 40 "data/maps/ParcelRoute1/scripts.pory"
	lockall
# 41 "data/maps/ParcelRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_R1_PlayerOntoBridge
# 42 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 43 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 45 "data/maps/ParcelRoute1/scripts.pory"
	clearflag FLAG_TEMP_3
# 46 "data/maps/ParcelRoute1/scripts.pory"
	addobject 11
# 47 "data/maps/ParcelRoute1/scripts.pory"
	addobject 12
# 48 "data/maps/ParcelRoute1/scripts.pory"
	addobject 13
# 49 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 11, Movement_R1_PoacherIn
# 50 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 12, Movement_R1_Thug1In
# 51 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 13, Movement_R1_Thug2In
# 52 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 53 "data/maps/ParcelRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_R1_FaceLeft
# 54 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 55 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_2, MSGBOX_DEFAULT
# 57 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 59 "data/maps/ParcelRoute1/scripts.pory"
	delay 40
# 60 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_4, MSGBOX_DEFAULT
# 61 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 62 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 12, Movement_R1_Thug1ToPlayer
# 63 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 64 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_POACHER_A, ParcelRoute1_BridgeScene_Text_5
# 65 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_6, MSGBOX_DEFAULT
# 66 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 67 "data/maps/ParcelRoute1/scripts.pory"
	clearflag FLAG_TEMP_4
# 68 "data/maps/ParcelRoute1/scripts.pory"
	addobject 10
# 69 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 10, Movement_R1_HaleIn
# 70 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 71 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_7, MSGBOX_DEFAULT
# 72 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_8, MSGBOX_DEFAULT
# 73 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_9, MSGBOX_DEFAULT
# 74 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_10, MSGBOX_DEFAULT
# 75 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 76 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 12, Movement_R1_Thug1Out
# 77 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 11, Movement_R1_PoacherOut
# 78 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 13, Movement_R1_Thug2Out
# 79 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 80 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 11
# 81 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 12
# 82 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 13
# 83 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_3
# 84 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 10, Movement_R1_HaleToPlayer
# 85 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 86 "data/maps/ParcelRoute1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_R1_FaceRight
# 87 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 88 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_11, MSGBOX_DEFAULT
# 89 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_12, MSGBOX_DEFAULT
# 90 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 91 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 14, Movement_R1_PoliwagAway
# 92 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 16, Movement_R1_PoliwagAway
# 93 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 15, Movement_R1_PoliwagAwayLater
# 94 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 95 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 14
# 96 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 15
# 97 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 16
# 98 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_2
# 99 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_13, MSGBOX_DEFAULT
# 100 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_BridgeScene_Text_14, MSGBOX_DEFAULT
# 101 "data/maps/ParcelRoute1/scripts.pory"
	closemessage
# 102 "data/maps/ParcelRoute1/scripts.pory"
	applymovement 10, Movement_R1_HaleOut
# 103 "data/maps/ParcelRoute1/scripts.pory"
	waitmovement 0
# 104 "data/maps/ParcelRoute1/scripts.pory"
	removeobject 10
# 105 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_TEMP_4
# 106 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_SKALD_ROUTE1_SCENE_DONE
# 107 "data/maps/ParcelRoute1/scripts.pory"
	setflag FLAG_SKALDMERE_BRIDGE_SCENE
# 108 "data/maps/ParcelRoute1/scripts.pory"
	releaseall
	end

ParcelRoute1_BridgeScene_2:
	end


# 112 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PlayerOntoBridge:
# 113 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 114 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 115 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 116 "data/maps/ParcelRoute1/scripts.pory"
	face_down
# 117 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 120 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_FaceLeft:
# 121 "data/maps/ParcelRoute1/scripts.pory"
	face_left
# 122 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 125 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_FaceRight:
# 126 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 127 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 130 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoacherIn:
# 131 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 132 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 133 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 134 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 135 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 136 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 137 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 138 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 139 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 142 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug1In:
# 143 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 144 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 145 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 146 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 147 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 148 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 149 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 150 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 153 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug2In:
# 154 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 155 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 156 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 157 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 158 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 159 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 160 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 163 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug1ToPlayer:
# 164 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 165 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 166 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 167 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 168 "data/maps/ParcelRoute1/scripts.pory"
	face_right
# 169 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 172 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug1Out:
# 173 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 174 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 175 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 176 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 177 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 178 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 179 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 180 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 181 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 182 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 183 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 186 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoacherOut:
# 187 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 188 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 189 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 190 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 191 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 192 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 193 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 194 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 197 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_Thug2Out:
# 198 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 199 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 200 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 201 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 202 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 203 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 206 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_HaleIn:
# 207 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 208 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 209 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 210 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 211 "data/maps/ParcelRoute1/scripts.pory"
	face_left
# 212 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 215 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_HaleToPlayer:
# 216 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 217 "data/maps/ParcelRoute1/scripts.pory"
	walk_left
# 218 "data/maps/ParcelRoute1/scripts.pory"
	face_left
# 219 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 222 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_HaleOut:
# 223 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 224 "data/maps/ParcelRoute1/scripts.pory"
	walk_right
# 225 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 226 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 227 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 228 "data/maps/ParcelRoute1/scripts.pory"
	walk_up
# 229 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 232 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoliwagAway:
# 233 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 234 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 235 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 236 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 237 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 238 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 239 "data/maps/ParcelRoute1/scripts.pory"
	step_end

# 242 "data/maps/ParcelRoute1/scripts.pory"
Movement_R1_PoliwagAwayLater:
# 243 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 244 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 245 "data/maps/ParcelRoute1/scripts.pory"
	delay_16
# 246 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 247 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 248 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 249 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 250 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 251 "data/maps/ParcelRoute1/scripts.pory"
	walk_down
# 252 "data/maps/ParcelRoute1/scripts.pory"
	step_end

ParcelRoute1_Poliwag::
# 256 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 257 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Poliwag_Text_0, MSGBOX_DEFAULT
# 258 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_PoacherTalk::
# 263 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 264 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 265 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_PoacherTalk_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_Hale::
# 271 "data/maps/ParcelRoute1/scripts.pory"
	lock
# 272 "data/maps/ParcelRoute1/scripts.pory"
	faceplayer
# 273 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Hale_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/ParcelRoute1/scripts.pory"
	release
	end


ParcelRoute1_Youngster::
# 282 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_YOUNGSTER, ParcelRoute1_Youngster_Text_0, ParcelRoute1_Youngster_Text_1
# 285 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Youngster_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Lass::
# 290 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_LASS, ParcelRoute1_Lass_Text_0, ParcelRoute1_Lass_Text_1
# 293 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Birder::
# 298 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_BIRDER, ParcelRoute1_Birder_Text_0, ParcelRoute1_Birder_Text_1
# 301 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Birder_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Forager::
# 306 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_FORAGER, ParcelRoute1_Forager_Text_0, ParcelRoute1_Forager_Text_1
# 309 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Forager_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_Camper::
# 314 "data/maps/ParcelRoute1/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ROUTE1_CAMPER, ParcelRoute1_Camper_Text_0, ParcelRoute1_Camper_Text_1
# 317 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Camper_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelRoute1_ItemPokeBalls::
# 325 "data/maps/ParcelRoute1/scripts.pory"
	finditem ITEM_POKE_BALL, 3
	end


ParcelRoute1_ItemRareCandy::
# 330 "data/maps/ParcelRoute1/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelRoute1_ItemPotion::
# 335 "data/maps/ParcelRoute1/scripts.pory"
	finditem ITEM_POTION
	end


ParcelRoute1_Sign::
# 340 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_Sign_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_NoticeBoard::
# 345 "data/maps/ParcelRoute1/scripts.pory"
	msgbox ParcelRoute1_NoticeBoard_Text_0, MSGBOX_SIGN
	end


ParcelRoute1_BridgeScene_Text_0:
# 43 "data/maps/ParcelRoute1/scripts.pory"
	.string "A whole crowd of POLIWAG, jammed up\n"
	.string "against the bank right under the\l"
	.string "bridge.\p"
	.string "They're not going anywhere. They look\n"
	.string "stuck.$"

ParcelRoute1_BridgeScene_Text_1:
# 55 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: Perfect. They ran right into\n"
	.string "the shallows. Easy pickings.\p"
	.string "Hey! Kid! Don't touch anything. You'll\n"
	.string "spook the stock.$"

ParcelRoute1_BridgeScene_Text_2:
# 56 "data/maps/ParcelRoute1/scripts.pory"
	.string "{PLAYER}: Stock?$"

ParcelRoute1_BridgeScene_Text_3:
# 57 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: You heard me. Beat it.$"

ParcelRoute1_BridgeScene_Text_4:
# 60 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: ...No? Fine. RAT! Go teach the\n"
	.string "tourist some manners.$"

ParcelRoute1_BridgeScene_Text_5:
# 64 "data/maps/ParcelRoute1/scripts.pory"
	.string "RAT: Ow! OW! Boss, the kid's got a real\n"
	.string "one!$"

ParcelRoute1_BridgeScene_Text_6:
# 65 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: Tch. Useless. Whatever, the\n"
	.string "RANGERS will be along any minute\l"
	.string "anyway--$"

ParcelRoute1_BridgeScene_Text_7:
# 71 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: Step away from the water.$"

ParcelRoute1_BridgeScene_Text_8:
# 72 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: This isn't your jurisdiction,\n"
	.string "RANGER.$"

ParcelRoute1_BridgeScene_Text_9:
# 73 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: It's a living corridor. That's all\n"
	.string "the jurisdiction I need.$"

ParcelRoute1_BridgeScene_Text_10:
# 74 "data/maps/ParcelRoute1/scripts.pory"
	.string "POACHER: ...You think you're early,\n"
	.string "HALE? You're late.$"

ParcelRoute1_BridgeScene_Text_11:
# 88 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: You handled yourself. Most people\n"
	.string "would have just watched.$"

ParcelRoute1_BridgeScene_Text_12:
# 89 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: Now don't help them. The POLIWAG.\n"
	.string "Helping is how they got stuck in the\l"
	.string "first place. Give them room.$"

ParcelRoute1_BridgeScene_Text_13:
# 99 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: There they go. Good. Remember\n"
	.string "what that looked like. You'll see it\l"
	.string "again.$"

ParcelRoute1_BridgeScene_Text_14:
# 100 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: I'm HALE. Skaldmere Climate Corps.\n"
	.string "RIN said you'd come through.\p"
	.string "The station's on the far side of\n"
	.string "MISTWOOD. The woods are the quick way,\l"
	.string "if you don't mind the company.\p"
	.string "Come find me. You can learn to do more\n"
	.string "than stare.$"

ParcelRoute1_Poliwag_Text_0:
# 257 "data/maps/ParcelRoute1/scripts.pory"
	.string "The POLIWAG flinch, but they don't swim\n"
	.string "off. They can't. Something's wrong with\l"
	.string "the water upstream.$"

ParcelRoute1_PoacherTalk_Text_0:
# 265 "data/maps/ParcelRoute1/scripts.pory"
	.string "Don't touch anything, kid.$"

ParcelRoute1_Hale_Text_0:
# 273 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALE: The station's past the woods.\n"
	.string "When you're ready.$"

ParcelRoute1_Youngster_Text_0:
# 283 "data/maps/ParcelRoute1/scripts.pory"
	.string "BO: I've been standing here ALL DAY\n"
	.string "waiting for someone to battle!$"

ParcelRoute1_Youngster_Text_1:
# 284 "data/maps/ParcelRoute1/scripts.pory"
	.string "BO: Aw, man!$"

ParcelRoute1_Youngster_Text_2:
# 285 "data/maps/ParcelRoute1/scripts.pory"
	.string "BO: The tall grass has WOOPER in it.\n"
	.string "They just stare at you. It's creepy.$"

ParcelRoute1_Lass_Text_0:
# 291 "data/maps/ParcelRoute1/scripts.pory"
	.string "IDA: Hi! Are you headed for MISTWOOD?\n"
	.string "Battle me first!$"

ParcelRoute1_Lass_Text_1:
# 292 "data/maps/ParcelRoute1/scripts.pory"
	.string "IDA: You're pretty good!$"

ParcelRoute1_Lass_Text_2:
# 293 "data/maps/ParcelRoute1/scripts.pory"
	.string "IDA: The ledge is a shortcut back down.\n"
	.string "I use it when I'm late for tea.$"

ParcelRoute1_Birder_Text_0:
# 299 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALDEN: Look up. See that WINGULL? Now\n"
	.string "look at mine. Mine's better.$"

ParcelRoute1_Birder_Text_1:
# 300 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALDEN: Fine. Yours is better.$"

ParcelRoute1_Birder_Text_2:
# 301 "data/maps/ParcelRoute1/scripts.pory"
	.string "HALDEN: The gulls used to nest under\n"
	.string "the bridge. Not anymore. Nobody knows\l"
	.string "why.\p"
	.string "Well. Somebody knows why.$"

ParcelRoute1_Forager_Text_0:
# 307 "data/maps/ParcelRoute1/scripts.pory"
	.string "MERIT: I'm picking mushrooms. My\n"
	.string "SHROOMISH helps. Sort of.$"

ParcelRoute1_Forager_Text_1:
# 308 "data/maps/ParcelRoute1/scripts.pory"
	.string "MERIT: It ate half the basket anyway.$"

ParcelRoute1_Forager_Text_2:
# 309 "data/maps/ParcelRoute1/scripts.pory"
	.string "MERIT: The woods are full of kids who\n"
	.string "want to battle. Rangers-in-training,\l"
	.string "they call themselves.\p"
	.string "Same thing as kids who want to battle.$"

ParcelRoute1_Camper_Text_0:
# 315 "data/maps/ParcelRoute1/scripts.pory"
	.string "RUBEN: You've got the look of somebody\n"
	.string "who just got their first POKéMON.$"

ParcelRoute1_Camper_Text_1:
# 316 "data/maps/ParcelRoute1/scripts.pory"
	.string "RUBEN: Yep. Called it.$"

ParcelRoute1_Camper_Text_2:
# 317 "data/maps/ParcelRoute1/scripts.pory"
	.string "RUBEN: There's a footbridge at the\n"
	.string "river head. Don't hang around on it.\l"
	.string "Long story.$"

ParcelRoute1_Sign_Text_0:
# 340 "data/maps/ParcelRoute1/scripts.pory"
	.string "ROUTE 1\p"
	.string "SALTWICK -- south\n"
	.string "MISTWOOD -- north$"

ParcelRoute1_NoticeBoard_Text_0:
# 345 "data/maps/ParcelRoute1/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\p"
	.string "MISTWOOD: snares have been found on\n"
	.string "the north track. Do not touch them.\l"
	.string "Report them at the RANGER POST in the\l"
	.string "woods.\p"
	.string "Signed: SKELD, Warden.$"
