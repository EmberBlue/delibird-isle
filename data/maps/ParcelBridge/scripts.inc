ParcelBridge_MapScripts::
# 20 "data/maps/ParcelBridge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelBridge_OnTransition
	.byte 0


ParcelBridge_OnTransition::
# 26 "data/maps/ParcelBridge/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelBridge_OnTransition_2
# 31 "data/maps/ParcelBridge/scripts.pory"
	clearflag FLAG_TEMP_2
# 32 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_TEMP_3
# 33 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_TEMP_4
ParcelBridge_OnTransition_1:
	end

ParcelBridge_OnTransition_2:
# 27 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_TEMP_3
# 29 "data/maps/ParcelBridge/scripts.pory"
	clearflag FLAG_TEMP_4
	goto ParcelBridge_OnTransition_1


ParcelBridge_SceneTrigger::
# 40 "data/maps/ParcelBridge/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/ParcelBridge/scripts.pory"
	goto_if_set FLAG_SKALDMERE_BRIDGE_SCENE, ParcelBridge_SceneTrigger_2
# 44 "data/maps/ParcelBridge/scripts.pory"
	lockall
# 47 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_0, MSGBOX_DEFAULT
# 48 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_2, MSGBOX_DEFAULT
# 50 "data/maps/ParcelBridge/scripts.pory"
	closemessage
# 53 "data/maps/ParcelBridge/scripts.pory"
	clearflag FLAG_TEMP_3
# 54 "data/maps/ParcelBridge/scripts.pory"
	addobject 4
# 55 "data/maps/ParcelBridge/scripts.pory"
	addobject 5
# 56 "data/maps/ParcelBridge/scripts.pory"
	addobject 6
# 57 "data/maps/ParcelBridge/scripts.pory"
	playse SE_PIN
# 58 "data/maps/ParcelBridge/scripts.pory"
	applymovement 4, Movement_PoacherIn
# 59 "data/maps/ParcelBridge/scripts.pory"
	applymovement 5, Movement_Thug1In
# 60 "data/maps/ParcelBridge/scripts.pory"
	applymovement 6, Movement_Thug2In
# 61 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 62 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_3, MSGBOX_DEFAULT
# 63 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_4, MSGBOX_DEFAULT
# 64 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_5, MSGBOX_DEFAULT
# 65 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_6, MSGBOX_DEFAULT
# 66 "data/maps/ParcelBridge/scripts.pory"
	closemessage
# 69 "data/maps/ParcelBridge/scripts.pory"
	playse SE_PIN
# 70 "data/maps/ParcelBridge/scripts.pory"
	delay 30
# 71 "data/maps/ParcelBridge/scripts.pory"
	clearflag FLAG_TEMP_4
# 72 "data/maps/ParcelBridge/scripts.pory"
	addobject 7
# 73 "data/maps/ParcelBridge/scripts.pory"
	applymovement 7, Movement_HaleIn
# 74 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 75 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_7, MSGBOX_DEFAULT
# 76 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_8, MSGBOX_DEFAULT
# 77 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_9, MSGBOX_DEFAULT
# 78 "data/maps/ParcelBridge/scripts.pory"
	closemessage
# 81 "data/maps/ParcelBridge/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/ParcelBridge/scripts.pory"
	playse SE_BALL_THROW
# 83 "data/maps/ParcelBridge/scripts.pory"
	delay 40
# 84 "data/maps/ParcelBridge/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 85 "data/maps/ParcelBridge/scripts.pory"
	delay 40
# 86 "data/maps/ParcelBridge/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_10, MSGBOX_DEFAULT
# 88 "data/maps/ParcelBridge/scripts.pory"
	applymovement 4, Movement_PoacherReel
# 89 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 90 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_11, MSGBOX_DEFAULT
# 91 "data/maps/ParcelBridge/scripts.pory"
	closemessage
# 92 "data/maps/ParcelBridge/scripts.pory"
	applymovement 4, Movement_PoacherOut
# 93 "data/maps/ParcelBridge/scripts.pory"
	applymovement 5, Movement_Thug1Out
# 94 "data/maps/ParcelBridge/scripts.pory"
	applymovement 6, Movement_Thug2Out
# 95 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 96 "data/maps/ParcelBridge/scripts.pory"
	removeobject 4
# 97 "data/maps/ParcelBridge/scripts.pory"
	removeobject 5
# 98 "data/maps/ParcelBridge/scripts.pory"
	removeobject 6
# 99 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_TEMP_3
# 102 "data/maps/ParcelBridge/scripts.pory"
	applymovement 7, Movement_HaleToRail
# 103 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 104 "data/maps/ParcelBridge/scripts.pory"
	applymovement 1, Movement_PoliwagAway
# 105 "data/maps/ParcelBridge/scripts.pory"
	applymovement 2, Movement_PoliwagAway
# 106 "data/maps/ParcelBridge/scripts.pory"
	applymovement 3, Movement_PoliwagAway
# 107 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 108 "data/maps/ParcelBridge/scripts.pory"
	removeobject 1
# 109 "data/maps/ParcelBridge/scripts.pory"
	removeobject 2
# 110 "data/maps/ParcelBridge/scripts.pory"
	removeobject 3
# 111 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_TEMP_2
# 112 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_12, MSGBOX_DEFAULT
# 115 "data/maps/ParcelBridge/scripts.pory"
	applymovement 7, Movement_HaleFacePlayer
# 116 "data/maps/ParcelBridge/scripts.pory"
	waitmovement 0
# 117 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_13, MSGBOX_DEFAULT
# 118 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_SceneTrigger_Text_14, MSGBOX_DEFAULT
# 119 "data/maps/ParcelBridge/scripts.pory"
	closemessage
# 121 "data/maps/ParcelBridge/scripts.pory"
	setflag FLAG_SKALDMERE_BRIDGE_SCENE
# 122 "data/maps/ParcelBridge/scripts.pory"
	releaseall
	end

ParcelBridge_SceneTrigger_2:
	end


ParcelBridge_PoliwagCluster::
# 128 "data/maps/ParcelBridge/scripts.pory"
	lock
# 129 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_PoliwagCluster_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/ParcelBridge/scripts.pory"
	release
	end


ParcelBridge_PoacherTalk::
# 136 "data/maps/ParcelBridge/scripts.pory"
	lock
# 137 "data/maps/ParcelBridge/scripts.pory"
	faceplayer
# 138 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_PoacherTalk_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/ParcelBridge/scripts.pory"
	release
	end


ParcelBridge_Hale::
# 145 "data/maps/ParcelBridge/scripts.pory"
	lock
# 146 "data/maps/ParcelBridge/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_Hale_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/ParcelBridge/scripts.pory"
	release
	end


ParcelBridge_Sign::
# 153 "data/maps/ParcelBridge/scripts.pory"
	msgbox ParcelBridge_Sign_Text_0, MSGBOX_SIGN
	end


# 157 "data/maps/ParcelBridge/scripts.pory"
Movement_PoacherIn:
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 158 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 159 "data/maps/ParcelBridge/scripts.pory"
	face_right
# 160 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 162 "data/maps/ParcelBridge/scripts.pory"
Movement_Thug1In:
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 163 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 164 "data/maps/ParcelBridge/scripts.pory"
	face_right
# 165 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 167 "data/maps/ParcelBridge/scripts.pory"
Movement_Thug2In:
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 168 "data/maps/ParcelBridge/scripts.pory"
	walk_right
# 169 "data/maps/ParcelBridge/scripts.pory"
	face_right
# 170 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 172 "data/maps/ParcelBridge/scripts.pory"
Movement_PoacherReel:
# 173 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 174 "data/maps/ParcelBridge/scripts.pory"
	face_right
# 175 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 177 "data/maps/ParcelBridge/scripts.pory"
Movement_PoacherOut:
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 178 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 179 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 181 "data/maps/ParcelBridge/scripts.pory"
Movement_Thug1Out:
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 182 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 183 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 185 "data/maps/ParcelBridge/scripts.pory"
Movement_Thug2Out:
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 186 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 187 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 189 "data/maps/ParcelBridge/scripts.pory"
Movement_HaleIn:
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 190 "data/maps/ParcelBridge/scripts.pory"
	walk_left
# 191 "data/maps/ParcelBridge/scripts.pory"
	face_left
# 192 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 194 "data/maps/ParcelBridge/scripts.pory"
Movement_HaleToRail:
# 195 "data/maps/ParcelBridge/scripts.pory"
	walk_down
# 196 "data/maps/ParcelBridge/scripts.pory"
	face_down
# 197 "data/maps/ParcelBridge/scripts.pory"
	delay_16
# 198 "data/maps/ParcelBridge/scripts.pory"
	delay_16
# 199 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 201 "data/maps/ParcelBridge/scripts.pory"
Movement_HaleFacePlayer:
# 202 "data/maps/ParcelBridge/scripts.pory"
	walk_up
# 203 "data/maps/ParcelBridge/scripts.pory"
	face_left
# 204 "data/maps/ParcelBridge/scripts.pory"
	step_end

# 206 "data/maps/ParcelBridge/scripts.pory"
Movement_PoliwagAway:
# 207 "data/maps/ParcelBridge/scripts.pory"
	walk_up
# 208 "data/maps/ParcelBridge/scripts.pory"
	walk_up
# 209 "data/maps/ParcelBridge/scripts.pory"
	walk_up
# 210 "data/maps/ParcelBridge/scripts.pory"
	step_end

ParcelBridge_SceneTrigger_Text_0:
# 47 "data/maps/ParcelBridge/scripts.pory"
	.string "Wind over the rail. Water surging\n"
	.string "beneath the boards.$"

ParcelBridge_SceneTrigger_Text_1:
# 48 "data/maps/ParcelBridge/scripts.pory"
	.string "Below, at the stream mouth--a cluster\n"
	.string "of Poliwag crowds the embankment.\p"
	.string "Panicked. Not blocking the way.\n"
	.string "Stuck.$"

ParcelBridge_SceneTrigger_Text_2:
# 49 "data/maps/ParcelBridge/scripts.pory"
	.string "They flinch as your shadow crosses\n"
	.string "them, but they don't flee. Their eyes\l"
	.string "are wide.\p"
	.string "Something upstream drove them here.$"

ParcelBridge_SceneTrigger_Text_3:
# 62 "data/maps/ParcelBridge/scripts.pory"
	.string "Poacher: Perfect. They ran right where\n"
	.string "we need them.\p"
	.string "Don't touch anything, kid.\n"
	.string "You'll spook the stock.$"

ParcelBridge_SceneTrigger_Text_4:
# 63 "data/maps/ParcelBridge/scripts.pory"
	.string "{PLAYER}: …Stock?$"

ParcelBridge_SceneTrigger_Text_5:
# 64 "data/maps/ParcelBridge/scripts.pory"
	.string "Poacher: You heard me.$"

ParcelBridge_SceneTrigger_Text_6:
# 65 "data/maps/ParcelBridge/scripts.pory"
	.string "The Poacher unslings a net. Below, the\n"
	.string "Poliwag scatter helplessly.\p"
	.string "You have no Pokémon.\n"
	.string "Nothing in your hands but a notebook.$"

ParcelBridge_SceneTrigger_Text_7:
# 75 "data/maps/ParcelBridge/scripts.pory"
	.string "Hale: Step away from the water.$"

ParcelBridge_SceneTrigger_Text_8:
# 76 "data/maps/ParcelBridge/scripts.pory"
	.string "Poacher: This isn't your jurisdiction.$"

ParcelBridge_SceneTrigger_Text_9:
# 77 "data/maps/ParcelBridge/scripts.pory"
	.string "Hale: It's a living corridor.\n"
	.string "That's enough.$"

ParcelBridge_SceneTrigger_Text_10:
# 87 "data/maps/ParcelBridge/scripts.pory"
	.string "It isn't much of a fight.\p"
	.string "Hale's movements are practiced and\n"
	.string "minimal. No wasted motion. No speech.$"

ParcelBridge_SceneTrigger_Text_11:
# 90 "data/maps/ParcelBridge/scripts.pory"
	.string "Poacher: You think you're early?\n"
	.string "You're late.$"

ParcelBridge_SceneTrigger_Text_12:
# 112 "data/maps/ParcelBridge/scripts.pory"
	.string "The Poliwag slip upstream in a tight,\n"
	.string "trembling group.\p"
	.string "Hale watches them go before he looks at\n"
	.string "you.$"

ParcelBridge_SceneTrigger_Text_13:
# 117 "data/maps/ParcelBridge/scripts.pory"
	.string "Hale: This region doesn't need heroes.\n"
	.string "It needs witnesses.$"

ParcelBridge_SceneTrigger_Text_14:
# 118 "data/maps/ParcelBridge/scripts.pory"
	.string "Hale: If you want answers, there's a\n"
	.string "station across the bridge.\p"
	.string "You can learn to do more than stare.$"

ParcelBridge_PoliwagCluster_Text_0:
# 129 "data/maps/ParcelBridge/scripts.pory"
	.string "The Poliwag flinch, but they don't flee.\p"
	.string "Their eyes are wide.$"

ParcelBridge_PoacherTalk_Text_0:
# 138 "data/maps/ParcelBridge/scripts.pory"
	.string "Don't touch anything, kid.$"

ParcelBridge_Hale_Text_0:
# 147 "data/maps/ParcelBridge/scripts.pory"
	.string "Hale: The station's past the trees.\n"
	.string "When you're ready.\p"
	.string "Get attached to results, not praise.$"

ParcelBridge_Sign_Text_0:
# 153 "data/maps/ParcelBridge/scripts.pory"
	.string "THE LONG BRIDGE\p"
	.string "Wind advisory in effect.\n"
	.string "Mind the rail.$"
