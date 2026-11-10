ParcelFloodbasin_MapScripts::
# 32 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFloodbasin_OnTransition
# 33 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelFloodbasin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelFloodbasin_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 2, ParcelFloodbasin_Epilogue
	.2byte 0


ParcelFloodbasin_OnTransition::
# 42 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_OnTransition_2
# 45 "data/maps/ParcelFloodbasin/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelFloodbasin_OnTransition_1:
	end

ParcelFloodbasin_OnTransition_2:
# 43 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelFloodbasin_OnTransition_1


ParcelFloodbasin_FirstEntry::
# 52 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_1, 1
# 53 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFloodbasin_FirstEntry_2
# 56 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 57 "data/maps/ParcelFloodbasin/scripts.pory"
	bufferpartymonnick 0, 0
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_1, MSGBOX_DEFAULT
# 60 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_2, MSGBOX_DEFAULT
# 61 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_3, MSGBOX_DEFAULT
# 62 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALDMERE_FLOODBASIN_ARRIVAL
# 63 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_FirstEntry_2:
	end


ParcelFloodbasin_ReliefScene::
# 70 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_ReliefScene_2
# 70 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_ReliefScene_2
# 74 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 75 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_1, MSGBOX_DEFAULT
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 79 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyLookUp
# 80 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_3, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_4, MSGBOX_DEFAULT
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_5, MSGBOX_DEFAULT
# 84 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_6, MSGBOX_DEFAULT
# 85 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_7, MSGBOX_DEFAULT
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 87 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyFaceDown
# 88 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_8, MSGBOX_DEFAULT
# 90 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_9, MSGBOX_YESNO
# 91 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_ReliefScene_7
# 95 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_11, MSGBOX_DEFAULT
ParcelFloodbasin_ReliefScene_6:
# 97 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_FLD_RELIEF_DONE
# 98 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
# 99 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_ReliefScene_2:
# 71 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
	end

ParcelFloodbasin_ReliefScene_7:
# 92 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_10, MSGBOX_DEFAULT
# 93 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_CH_BLANKET
	goto ParcelFloodbasin_ReliefScene_6


# 103 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyLookUp:
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	delay_16
	step_end

# 104 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyFaceDown:
# 104 "data/maps/ParcelFloodbasin/scripts.pory"
	face_down
	step_end

ParcelFloodbasin_Dorsey::
# 107 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 108 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 109 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Dorsey_2
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 116 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 117 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Dorsey_5
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_2, MSGBOX_DEFAULT
# 123 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_2:
# 110 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_0, MSGBOX_DEFAULT
# 111 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_5:
# 118 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide1::
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 128 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide1_2
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Aide1_5
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_2, MSGBOX_DEFAULT
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_2:
# 130 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_0, MSGBOX_DEFAULT
# 131 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_5:
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_1, MSGBOX_DEFAULT
# 136 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide2::
# 144 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 145 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 146 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide2_2
# 151 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Aide2_5
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_2, MSGBOX_DEFAULT
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_2:
# 147 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_5:
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_1, MSGBOX_DEFAULT
# 153 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilOldWoman::
# 161 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 163 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasin_VilOldWoman_2
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_FOUND, ParcelFloodbasin_VilOldWoman_5
# 173 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF, ParcelFloodbasin_VilOldWoman_8
# 178 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_11
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilOldWoman_14
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_17
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_6, MSGBOX_DEFAULT
# 195 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_2:
# 164 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_0, MSGBOX_DEFAULT
# 165 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_5:
# 169 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_1, MSGBOX_DEFAULT
# 170 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_8:
# 174 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_2, MSGBOX_DEFAULT
# 175 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_11:
# 179 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_3, MSGBOX_DEFAULT
# 180 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF
# 181 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_14:
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_4, MSGBOX_DEFAULT
# 186 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_17:
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_5, MSGBOX_DEFAULT
# 191 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilMan::
# 199 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 200 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_VilMan_3
ParcelFloodbasin_VilMan_1:
# 224 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilMan_7
# 229 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_17
# 235 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_VilMan_23
# 240 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_10, MSGBOX_DEFAULT
# 241 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_2:
# 202 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_VilMan_12
ParcelFloodbasin_VilMan_9:
# 211 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_3, MSGBOX_DEFAULT
# 212 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_VilMan_20
ParcelFloodbasin_VilMan_19:
# 215 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_VilMan_26
ParcelFloodbasin_VilMan_25:
# 218 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_VilMan_29
ParcelFloodbasin_VilMan_28:
# 221 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_3:
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_2
	goto ParcelFloodbasin_VilMan_1

ParcelFloodbasin_VilMan_7:
# 225 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_7, MSGBOX_DEFAULT
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_10:
# 203 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_0, MSGBOX_DEFAULT
# 204 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_1, MSGBOX_DEFAULT
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_MAX_ELIXIR
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_DONE
# 207 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_2, MSGBOX_DEFAULT
# 208 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_11:
# 202 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_VilMan_10
	goto ParcelFloodbasin_VilMan_9

ParcelFloodbasin_VilMan_12:
# 202 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_VilMan_11
	goto ParcelFloodbasin_VilMan_9

ParcelFloodbasin_VilMan_17:
# 230 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_8, MSGBOX_DEFAULT
# 231 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN
# 232 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_20:
# 213 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_4, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_19

ParcelFloodbasin_VilMan_23:
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_9, MSGBOX_DEFAULT
# 237 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_26:
# 216 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_5, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_25

ParcelFloodbasin_VilMan_29:
# 219 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_6, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_28


ParcelFloodbasin_VilGirl::
# 245 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 246 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 247 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilGirl_2
# 252 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_VilGirl_5
# 257 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_2, MSGBOX_DEFAULT
# 258 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_2:
# 248 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_0, MSGBOX_DEFAULT
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_5:
# 253 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_1, MSGBOX_DEFAULT
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilFisher::
# 262 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 263 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE, ParcelFloodbasin_VilFisher_5
ParcelFloodbasin_VilFisher_4:
# 274 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_3
# 280 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilFisher_9
# 285 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_VilFisher_16
# 290 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_5, MSGBOX_DEFAULT
# 291 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_2:
# 265 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE_FOUND, ParcelFloodbasin_VilFisher_12
# 270 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_1, MSGBOX_DEFAULT
ParcelFloodbasin_VilFisher_11:
# 272 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_3:
# 275 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_2, MSGBOX_DEFAULT
# 276 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_5:
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_2
	goto ParcelFloodbasin_VilFisher_4

ParcelFloodbasin_VilFisher_9:
# 281 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_3, MSGBOX_DEFAULT
# 282 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_12:
# 266 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_0, MSGBOX_DEFAULT
# 267 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_ANTIDOTE, 3
# 268 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE_DONE
	goto ParcelFloodbasin_VilFisher_11

ParcelFloodbasin_VilFisher_16:
# 286 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_4, MSGBOX_DEFAULT
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Discharge::
# 297 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 298 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 306 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 307 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 308 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 302 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 303 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 312 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 313 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 314 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 315 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 323 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 318 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 327 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 328 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 329 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 330 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 331 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 332 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 333 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 344 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 345 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 346 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 347 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 348 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 349 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 353 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 354 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 355 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 358 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 369 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 370 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 372 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 373 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 374 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 379 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 380 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 381 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 382 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 383 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 384 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 386 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_8, MSGBOX_DEFAULT
# 387 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 388 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 389 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_9, MSGBOX_DEFAULT
# 390 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_10, ParcelFloodbasin_Remediator_Text_11
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_12, MSGBOX_DEFAULT
# 394 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 395 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 375 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 376 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1, ParcelFloodbasin_BasinKidTrainer_FirstWin
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_3
ParcelFloodbasin_BasinKidTrainer_1:
# 409 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_8
ParcelFloodbasin_BasinKidTrainer_6:
# 412 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_13
ParcelFloodbasin_BasinKidTrainer_11:
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_18
ParcelFloodbasin_BasinKidTrainer_16:
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_BasinKidTrainer_2:
# 407 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_3:
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R2
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_7:
# 410 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R3
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_8:
# 409 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R3
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_7
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_12:
# 413 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R4
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_13:
# 412 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R4
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_12
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_17:
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R5
	goto ParcelFloodbasin_BasinKidTrainer_16

ParcelFloodbasin_BasinKidTrainer_18:
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R5
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_17
	goto ParcelFloodbasin_BasinKidTrainer_16


ParcelFloodbasin_BasinKidTrainer_FirstWin::
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
# 423 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R2::
# 427 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 428 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 429 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_0, MSGBOX_YESNO
# 430 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R2_2
# 435 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R2, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 436 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_3, MSGBOX_DEFAULT
# 437 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R2_2:
# 431 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 432 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R3::
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 442 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 443 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_0, MSGBOX_YESNO
# 444 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R3_2
# 449 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R3, ParcelFloodbasin_BasinKidTrainer_R3_Text_1
# 450 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_2, MSGBOX_DEFAULT
# 451 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R3_2:
# 445 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R4::
# 455 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 456 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 457 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_0, MSGBOX_YESNO
# 458 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R4_2
# 463 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R4, ParcelFloodbasin_BasinKidTrainer_R4_Text_1
# 464 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_2, MSGBOX_DEFAULT
# 465 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R4_2:
# 459 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 460 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R5::
# 469 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 470 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 471 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_0, MSGBOX_YESNO
# 472 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R5_2
# 477 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R5, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 478 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_1, MSGBOX_DEFAULT
# 479 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R5_2:
# 473 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 474 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve::
# 483 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ARVE, ParcelFloodbasin_Arve_Text_0, ParcelFloodbasin_Arve_Text_1, ParcelFloodbasin_Arve_FirstWin
# 487 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 488 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Arve_3
ParcelFloodbasin_Arve_1:
# 491 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Arve_8
ParcelFloodbasin_Arve_6:
# 494 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Arve_13
ParcelFloodbasin_Arve_11:
# 497 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Arve_18
ParcelFloodbasin_Arve_16:
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Arve_2:
# 489 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_3:
# 488 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R2
	goto_if 0, ParcelFloodbasin_Arve_2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_7:
# 492 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R3
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_8:
# 491 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R3
	goto_if 0, ParcelFloodbasin_Arve_7
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_12:
# 495 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R4
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_13:
# 494 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R4
	goto_if 0, ParcelFloodbasin_Arve_12
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_17:
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R5
	goto ParcelFloodbasin_Arve_16

ParcelFloodbasin_Arve_18:
# 497 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R5
	goto_if 0, ParcelFloodbasin_Arve_17
	goto ParcelFloodbasin_Arve_16


ParcelFloodbasin_Arve_FirstWin::
# 504 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
# 505 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R2::
# 509 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 510 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 511 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_0, MSGBOX_YESNO
# 512 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R2_2
# 517 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R2, ParcelFloodbasin_Arve_R2_Text_2
# 518 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_3, MSGBOX_DEFAULT
# 519 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R2_2:
# 513 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R3::
# 523 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 524 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 525 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_0, MSGBOX_YESNO
# 526 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R3_2
# 531 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R3, ParcelFloodbasin_Arve_R3_Text_1
# 532 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_2, MSGBOX_DEFAULT
# 533 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R3_2:
# 527 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R4::
# 537 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 538 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 539 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_0, MSGBOX_YESNO
# 540 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R4_2
# 545 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R4, ParcelFloodbasin_Arve_R3_Text_1
# 546 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_1, MSGBOX_DEFAULT
# 547 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R4_2:
# 541 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 542 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R5::
# 551 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 552 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 553 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_0, MSGBOX_YESNO
# 554 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R5_2
# 559 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R5, ParcelFloodbasin_Arve_R5_Text_1
# 560 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_2, MSGBOX_DEFAULT
# 561 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R5_2:
# 555 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 556 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai::
# 565 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_KAI, ParcelFloodbasin_Kai_Text_0, ParcelFloodbasin_Kai_Text_1, ParcelFloodbasin_Kai_FirstWin
# 569 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 570 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Kai_3
ParcelFloodbasin_Kai_1:
# 573 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Kai_8
ParcelFloodbasin_Kai_6:
# 576 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Kai_13
ParcelFloodbasin_Kai_11:
# 579 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Kai_18
ParcelFloodbasin_Kai_16:
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Kai_2:
# 571 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_3:
# 570 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R2
	goto_if 0, ParcelFloodbasin_Kai_2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_7:
# 574 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R3
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_8:
# 573 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R3
	goto_if 0, ParcelFloodbasin_Kai_7
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_12:
# 577 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R4
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_13:
# 576 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R4
	goto_if 0, ParcelFloodbasin_Kai_12
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_17:
# 580 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R5
	goto ParcelFloodbasin_Kai_16

ParcelFloodbasin_Kai_18:
# 579 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R5
	goto_if 0, ParcelFloodbasin_Kai_17
	goto ParcelFloodbasin_Kai_16


ParcelFloodbasin_Kai_FirstWin::
# 586 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
# 587 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R2::
# 591 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 592 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 593 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_0, MSGBOX_YESNO
# 594 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R2_2
# 599 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R2, ParcelFloodbasin_Kai_R2_Text_2
# 600 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_3, MSGBOX_DEFAULT
# 601 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R2_2:
# 595 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R3::
# 605 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 606 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 607 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_0, MSGBOX_YESNO
# 608 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R3_2
# 613 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R3, ParcelFloodbasin_Kai_R3_Text_1
# 614 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_2, MSGBOX_DEFAULT
# 615 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R3_2:
# 609 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R4::
# 619 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 620 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 621 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_0, MSGBOX_YESNO
# 622 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R4_2
# 627 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R4, ParcelFloodbasin_Kai_R4_Text_1
# 628 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_2, MSGBOX_DEFAULT
# 629 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R4_2:
# 623 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 624 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R5::
# 633 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 634 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 635 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_0, MSGBOX_YESNO
# 636 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R5_2
# 641 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R5, ParcelFloodbasin_Kai_R5_Text_1
# 642 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_2, MSGBOX_DEFAULT
# 643 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R5_2:
# 637 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 638 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe::
# 647 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SIGNE, ParcelFloodbasin_Signe_Text_0, ParcelFloodbasin_Signe_Text_1, ParcelFloodbasin_Signe_FirstWin
# 651 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 652 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Signe_3
ParcelFloodbasin_Signe_1:
# 655 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Signe_8
ParcelFloodbasin_Signe_6:
# 658 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Signe_13
ParcelFloodbasin_Signe_11:
# 661 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Signe_18
ParcelFloodbasin_Signe_16:
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Signe_2:
# 653 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_3:
# 652 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R2
	goto_if 0, ParcelFloodbasin_Signe_2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_7:
# 656 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R3
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_8:
# 655 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R3
	goto_if 0, ParcelFloodbasin_Signe_7
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_12:
# 659 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R4
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_13:
# 658 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R4
	goto_if 0, ParcelFloodbasin_Signe_12
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_17:
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R5
	goto ParcelFloodbasin_Signe_16

ParcelFloodbasin_Signe_18:
# 661 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R5
	goto_if 0, ParcelFloodbasin_Signe_17
	goto ParcelFloodbasin_Signe_16


ParcelFloodbasin_Signe_FirstWin::
# 668 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
# 669 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R2::
# 673 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 674 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 675 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_0, MSGBOX_YESNO
# 676 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R2_2
# 681 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R2, ParcelFloodbasin_Signe_R2_Text_2
# 682 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_3, MSGBOX_DEFAULT
# 683 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R2_2:
# 677 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R3::
# 687 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 688 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 689 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_0, MSGBOX_YESNO
# 690 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R3_2
# 695 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R3, ParcelFloodbasin_Signe_R3_Text_1
# 696 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_2, MSGBOX_DEFAULT
# 697 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R3_2:
# 691 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R4::
# 701 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 702 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 703 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_0, MSGBOX_YESNO
# 704 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R4_2
# 709 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R4, ParcelFloodbasin_Signe_R3_Text_1
# 710 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_1, MSGBOX_DEFAULT
# 711 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R4_2:
# 705 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 706 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R5::
# 715 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 716 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 717 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_0, MSGBOX_YESNO
# 718 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R5_2
# 723 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R5, ParcelFloodbasin_Signe_R5_Text_1
# 724 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_2, MSGBOX_DEFAULT
# 725 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R5_2:
# 719 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 720 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif::
# 729 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_LEIF, ParcelFloodbasin_Leif_Text_0, ParcelFloodbasin_Leif_Text_1, ParcelFloodbasin_Leif_FirstWin
# 733 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 734 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Leif_3
ParcelFloodbasin_Leif_1:
# 737 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Leif_8
ParcelFloodbasin_Leif_6:
# 740 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Leif_13
ParcelFloodbasin_Leif_11:
# 743 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Leif_18
ParcelFloodbasin_Leif_16:
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Leif_2:
# 735 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_3:
# 734 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R2
	goto_if 0, ParcelFloodbasin_Leif_2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_7:
# 738 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R3
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_8:
# 737 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R3
	goto_if 0, ParcelFloodbasin_Leif_7
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_12:
# 741 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R4
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_13:
# 740 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R4
	goto_if 0, ParcelFloodbasin_Leif_12
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_17:
# 744 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R5
	goto ParcelFloodbasin_Leif_16

ParcelFloodbasin_Leif_18:
# 743 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R5
	goto_if 0, ParcelFloodbasin_Leif_17
	goto ParcelFloodbasin_Leif_16


ParcelFloodbasin_Leif_FirstWin::
# 750 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
# 751 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R2::
# 755 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 756 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 757 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_0, MSGBOX_YESNO
# 758 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R2_2
# 763 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R2, ParcelFloodbasin_Leif_R2_Text_2
# 764 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_3, MSGBOX_DEFAULT
# 765 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R2_2:
# 759 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R3::
# 769 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 770 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 771 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_0, MSGBOX_YESNO
# 772 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R3_2
# 777 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R3, ParcelFloodbasin_Leif_R3_Text_1
# 778 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_2, MSGBOX_DEFAULT
# 779 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R3_2:
# 773 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R4::
# 783 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 784 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 785 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_0, MSGBOX_YESNO
# 786 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R4_2
# 791 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R4, ParcelFloodbasin_Leif_R4_Text_1
# 792 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_2, MSGBOX_DEFAULT
# 793 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R4_2:
# 787 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 788 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R5::
# 797 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 798 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 799 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_0, MSGBOX_YESNO
# 800 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R5_2
# 805 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R5, ParcelFloodbasin_Leif_R3_Text_1
# 806 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_1, MSGBOX_DEFAULT
# 807 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R5_2:
# 801 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 802 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls::
# 811 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_TRULS, ParcelFloodbasin_Truls_Text_0, ParcelFloodbasin_Truls_Text_1, ParcelFloodbasin_Truls_FirstWin
# 815 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 816 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Truls_3
ParcelFloodbasin_Truls_1:
# 819 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Truls_8
ParcelFloodbasin_Truls_6:
# 822 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Truls_13
ParcelFloodbasin_Truls_11:
# 825 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Truls_18
ParcelFloodbasin_Truls_16:
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Truls_2:
# 817 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_3:
# 816 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R2
	goto_if 0, ParcelFloodbasin_Truls_2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_7:
# 820 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R3
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_8:
# 819 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R3
	goto_if 0, ParcelFloodbasin_Truls_7
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_12:
# 823 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R4
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_13:
# 822 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R4
	goto_if 0, ParcelFloodbasin_Truls_12
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_17:
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R5
	goto ParcelFloodbasin_Truls_16

ParcelFloodbasin_Truls_18:
# 825 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R5
	goto_if 0, ParcelFloodbasin_Truls_17
	goto ParcelFloodbasin_Truls_16


ParcelFloodbasin_Truls_FirstWin::
# 832 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
# 833 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R2::
# 837 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 838 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 839 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_0, MSGBOX_YESNO
# 840 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R2_2
# 845 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R2, ParcelFloodbasin_Truls_R2_Text_2
# 846 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_3, MSGBOX_DEFAULT
# 847 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R2_2:
# 841 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R3::
# 851 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 852 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 853 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_0, MSGBOX_YESNO
# 854 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R3_2
# 859 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R3, ParcelFloodbasin_Truls_R3_Text_1
# 860 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_2, MSGBOX_DEFAULT
# 861 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R3_2:
# 855 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R4::
# 865 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 866 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 867 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_0, MSGBOX_YESNO
# 868 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R4_2
# 873 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R4, ParcelFloodbasin_Truls_R4_Text_1
# 874 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_2, MSGBOX_DEFAULT
# 875 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R4_2:
# 869 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 870 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R5::
# 879 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 880 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 881 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_0, MSGBOX_YESNO
# 882 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R5_2
# 887 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R5, ParcelFloodbasin_Truls_R5_Text_1
# 888 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_2, MSGBOX_DEFAULT
# 889 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R5_2:
# 883 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 884 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor::
# 893 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_HALVOR, ParcelFloodbasin_Halvor_Text_0, ParcelFloodbasin_Halvor_Text_1, ParcelFloodbasin_Halvor_FirstWin
# 897 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 898 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Halvor_3
ParcelFloodbasin_Halvor_1:
# 901 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Halvor_8
ParcelFloodbasin_Halvor_6:
# 904 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Halvor_13
ParcelFloodbasin_Halvor_11:
# 907 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Halvor_18
ParcelFloodbasin_Halvor_16:
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Halvor_2:
# 899 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_3:
# 898 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R2
	goto_if 0, ParcelFloodbasin_Halvor_2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_7:
# 902 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R3
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_8:
# 901 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R3
	goto_if 0, ParcelFloodbasin_Halvor_7
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_12:
# 905 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R4
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_13:
# 904 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R4
	goto_if 0, ParcelFloodbasin_Halvor_12
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_17:
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R5
	goto ParcelFloodbasin_Halvor_16

ParcelFloodbasin_Halvor_18:
# 907 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R5
	goto_if 0, ParcelFloodbasin_Halvor_17
	goto ParcelFloodbasin_Halvor_16


ParcelFloodbasin_Halvor_FirstWin::
# 914 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
# 915 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R2::
# 919 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 920 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 921 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_0, MSGBOX_YESNO
# 922 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R2_2
# 927 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R2, ParcelFloodbasin_Halvor_R2_Text_2
# 928 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_3, MSGBOX_DEFAULT
# 929 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R2_2:
# 923 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R3::
# 933 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 934 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 935 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_0, MSGBOX_YESNO
# 936 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R3_2
# 941 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R3, ParcelFloodbasin_Halvor_R3_Text_1
# 942 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_2, MSGBOX_DEFAULT
# 943 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R3_2:
# 937 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R4::
# 947 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 948 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 949 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_0, MSGBOX_YESNO
# 950 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R4_2
# 955 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R4, ParcelFloodbasin_Halvor_R3_Text_1
# 956 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_1, MSGBOX_DEFAULT
# 957 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R4_2:
# 951 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 952 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R5::
# 961 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 962 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 963 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_0, MSGBOX_YESNO
# 964 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R5_2
# 969 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R5, ParcelFloodbasin_Halvor_R5_Text_1
# 970 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_2, MSGBOX_DEFAULT
# 971 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R5_2:
# 965 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 966 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja::
# 975 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_MAJA, ParcelFloodbasin_Maja_Text_0, ParcelFloodbasin_Maja_Text_1, ParcelFloodbasin_Maja_FirstWin
# 979 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 980 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Maja_3
ParcelFloodbasin_Maja_1:
# 983 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Maja_8
ParcelFloodbasin_Maja_6:
# 986 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Maja_13
ParcelFloodbasin_Maja_11:
# 989 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Maja_18
ParcelFloodbasin_Maja_16:
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Maja_2:
# 981 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_3:
# 980 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R2
	goto_if 0, ParcelFloodbasin_Maja_2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_7:
# 984 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R3
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_8:
# 983 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R3
	goto_if 0, ParcelFloodbasin_Maja_7
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_12:
# 987 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R4
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_13:
# 986 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R4
	goto_if 0, ParcelFloodbasin_Maja_12
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_17:
# 990 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R5
	goto ParcelFloodbasin_Maja_16

ParcelFloodbasin_Maja_18:
# 989 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R5
	goto_if 0, ParcelFloodbasin_Maja_17
	goto ParcelFloodbasin_Maja_16


ParcelFloodbasin_Maja_FirstWin::
# 996 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
# 997 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R2::
# 1001 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1002 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1003 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_0, MSGBOX_YESNO
# 1004 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R2_2
# 1009 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R2, ParcelFloodbasin_Maja_R2_Text_2
# 1010 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_3, MSGBOX_DEFAULT
# 1011 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R2_2:
# 1005 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R3::
# 1015 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1016 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1017 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_0, MSGBOX_YESNO
# 1018 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R3_2
# 1023 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R3, ParcelFloodbasin_Maja_R3_Text_1
# 1024 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_2, MSGBOX_DEFAULT
# 1025 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R3_2:
# 1019 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R4::
# 1029 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1030 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1031 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_0, MSGBOX_YESNO
# 1032 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R4_2
# 1037 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R4, ParcelFloodbasin_Maja_R4_Text_1
# 1038 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_2, MSGBOX_DEFAULT
# 1039 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R4_2:
# 1033 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1034 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R5::
# 1043 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1044 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1045 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_0, MSGBOX_YESNO
# 1046 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R5_2
# 1051 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R5, ParcelFloodbasin_Maja_R5_Text_1
# 1052 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_2, MSGBOX_DEFAULT
# 1053 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R5_2:
# 1047 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1048 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn::
# 1057 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_BJORN, ParcelFloodbasin_Bjorn_Text_0, ParcelFloodbasin_Bjorn_Text_1, ParcelFloodbasin_Bjorn_FirstWin
# 1061 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1062 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Bjorn_3
ParcelFloodbasin_Bjorn_1:
# 1065 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Bjorn_8
ParcelFloodbasin_Bjorn_6:
# 1068 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Bjorn_13
ParcelFloodbasin_Bjorn_11:
# 1071 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Bjorn_18
ParcelFloodbasin_Bjorn_16:
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Bjorn_2:
# 1063 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_3:
# 1062 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R2
	goto_if 0, ParcelFloodbasin_Bjorn_2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_7:
# 1066 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R3
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_8:
# 1065 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R3
	goto_if 0, ParcelFloodbasin_Bjorn_7
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_12:
# 1069 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R4
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_13:
# 1068 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R4
	goto_if 0, ParcelFloodbasin_Bjorn_12
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_17:
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R5
	goto ParcelFloodbasin_Bjorn_16

ParcelFloodbasin_Bjorn_18:
# 1071 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R5
	goto_if 0, ParcelFloodbasin_Bjorn_17
	goto ParcelFloodbasin_Bjorn_16


ParcelFloodbasin_Bjorn_FirstWin::
# 1078 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
# 1079 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R2::
# 1083 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1084 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1085 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_0, MSGBOX_YESNO
# 1086 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R2_2
# 1091 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R2, ParcelFloodbasin_Bjorn_R2_Text_2
# 1092 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_3, MSGBOX_DEFAULT
# 1093 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R2_2:
# 1087 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R3::
# 1097 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1098 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1099 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_0, MSGBOX_YESNO
# 1100 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R3_2
# 1105 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R3, ParcelFloodbasin_Bjorn_R3_Text_1
# 1106 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_2, MSGBOX_DEFAULT
# 1107 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R3_2:
# 1101 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R4::
# 1111 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1112 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1113 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_0, MSGBOX_YESNO
# 1114 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R4_2
# 1119 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R4, ParcelFloodbasin_Bjorn_R4_Text_1
# 1120 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_2, MSGBOX_DEFAULT
# 1121 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R4_2:
# 1115 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1116 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R5::
# 1125 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1126 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1127 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_0, MSGBOX_YESNO
# 1128 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R5_2
# 1133 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R5, ParcelFloodbasin_Bjorn_R2_Text_2
# 1134 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_1, MSGBOX_DEFAULT
# 1135 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R5_2:
# 1129 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1130 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig::
# 1139 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SOLVEIG, ParcelFloodbasin_Solveig_Text_0, ParcelFloodbasin_Solveig_Text_1, ParcelFloodbasin_Solveig_FirstWin
# 1143 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1144 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Solveig_3
ParcelFloodbasin_Solveig_1:
# 1147 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Solveig_8
ParcelFloodbasin_Solveig_6:
# 1150 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Solveig_13
ParcelFloodbasin_Solveig_11:
# 1153 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Solveig_18
ParcelFloodbasin_Solveig_16:
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Solveig_2:
# 1145 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_3:
# 1144 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R2
	goto_if 0, ParcelFloodbasin_Solveig_2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_7:
# 1148 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R3
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_8:
# 1147 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R3
	goto_if 0, ParcelFloodbasin_Solveig_7
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_12:
# 1151 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R4
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_13:
# 1150 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R4
	goto_if 0, ParcelFloodbasin_Solveig_12
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_17:
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R5
	goto ParcelFloodbasin_Solveig_16

ParcelFloodbasin_Solveig_18:
# 1153 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R5
	goto_if 0, ParcelFloodbasin_Solveig_17
	goto ParcelFloodbasin_Solveig_16


ParcelFloodbasin_Solveig_FirstWin::
# 1160 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
# 1161 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R2::
# 1165 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1166 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1167 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_0, MSGBOX_YESNO
# 1168 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R2_2
# 1173 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R2, ParcelFloodbasin_Solveig_R2_Text_2
# 1174 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 1175 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R2_2:
# 1169 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R3::
# 1179 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1180 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1181 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_0, MSGBOX_YESNO
# 1182 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R3_2
# 1187 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R3, ParcelFloodbasin_Solveig_R3_Text_1
# 1188 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_2, MSGBOX_DEFAULT
# 1189 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R3_2:
# 1183 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R4::
# 1193 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1194 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1195 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_0, MSGBOX_YESNO
# 1196 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R4_2
# 1201 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R4, ParcelFloodbasin_Solveig_R4_Text_1
# 1202 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 1203 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R4_2:
# 1197 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1198 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R5::
# 1207 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1208 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1209 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_0, MSGBOX_YESNO
# 1210 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R5_2
# 1215 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R5, ParcelFloodbasin_Solveig_R3_Text_1
# 1216 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_1, MSGBOX_DEFAULT
# 1217 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R5_2:
# 1211 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1212 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils::
# 1221 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_NILS, ParcelFloodbasin_Nils_Text_0, ParcelFloodbasin_Nils_Text_1, ParcelFloodbasin_Nils_FirstWin
# 1225 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1226 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Nils_3
ParcelFloodbasin_Nils_1:
# 1229 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Nils_8
ParcelFloodbasin_Nils_6:
# 1232 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Nils_13
ParcelFloodbasin_Nils_11:
# 1235 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Nils_18
ParcelFloodbasin_Nils_16:
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Nils_2:
# 1227 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_3:
# 1226 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R2
	goto_if 0, ParcelFloodbasin_Nils_2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_7:
# 1230 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R3
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_8:
# 1229 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R3
	goto_if 0, ParcelFloodbasin_Nils_7
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_12:
# 1233 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R4
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_13:
# 1232 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R4
	goto_if 0, ParcelFloodbasin_Nils_12
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_17:
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R5
	goto ParcelFloodbasin_Nils_16

ParcelFloodbasin_Nils_18:
# 1235 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R5
	goto_if 0, ParcelFloodbasin_Nils_17
	goto ParcelFloodbasin_Nils_16


ParcelFloodbasin_Nils_FirstWin::
# 1242 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
# 1243 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R2::
# 1247 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1248 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1249 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_0, MSGBOX_YESNO
# 1250 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R2_2
# 1255 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R2, ParcelFloodbasin_Nils_R2_Text_2
# 1256 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_3, MSGBOX_DEFAULT
# 1257 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R2_2:
# 1251 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R3::
# 1261 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1262 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1263 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_0, MSGBOX_YESNO
# 1264 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R3_2
# 1269 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R3, ParcelFloodbasin_Nils_R3_Text_1
# 1270 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_2, MSGBOX_DEFAULT
# 1271 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R3_2:
# 1265 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R4::
# 1275 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1276 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1277 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_0, MSGBOX_YESNO
# 1278 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R4_2
# 1283 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R4, ParcelFloodbasin_Nils_R2_Text_2
# 1284 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_1, MSGBOX_DEFAULT
# 1285 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R4_2:
# 1279 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1280 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R5::
# 1289 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1290 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1291 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_0, MSGBOX_YESNO
# 1292 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R5_2
# 1297 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R5, ParcelFloodbasin_Nils_R5_Text_1
# 1298 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_2, MSGBOX_DEFAULT
# 1299 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R5_2:
# 1293 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1294 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig::
# 1303 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_RANNVEIG, ParcelFloodbasin_Rannveig_Text_0, ParcelFloodbasin_Rannveig_Text_1, ParcelFloodbasin_Rannveig_FirstWin
# 1307 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1308 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Rannveig_3
ParcelFloodbasin_Rannveig_1:
# 1311 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Rannveig_8
ParcelFloodbasin_Rannveig_6:
# 1314 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Rannveig_13
ParcelFloodbasin_Rannveig_11:
# 1317 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Rannveig_18
ParcelFloodbasin_Rannveig_16:
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Rannveig_2:
# 1309 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_3:
# 1308 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R2
	goto_if 0, ParcelFloodbasin_Rannveig_2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_7:
# 1312 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R3
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_8:
# 1311 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R3
	goto_if 0, ParcelFloodbasin_Rannveig_7
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_12:
# 1315 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R4
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_13:
# 1314 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R4
	goto_if 0, ParcelFloodbasin_Rannveig_12
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_17:
# 1318 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R5
	goto ParcelFloodbasin_Rannveig_16

ParcelFloodbasin_Rannveig_18:
# 1317 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R5
	goto_if 0, ParcelFloodbasin_Rannveig_17
	goto ParcelFloodbasin_Rannveig_16


ParcelFloodbasin_Rannveig_FirstWin::
# 1324 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
# 1325 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R2::
# 1329 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1330 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1331 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_0, MSGBOX_YESNO
# 1332 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R2_2
# 1337 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R2, ParcelFloodbasin_Rannveig_R2_Text_2
# 1338 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_3, MSGBOX_DEFAULT
# 1339 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R2_2:
# 1333 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R3::
# 1343 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1344 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1345 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_0, MSGBOX_YESNO
# 1346 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R3_2
# 1351 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R3, ParcelFloodbasin_Rannveig_R3_Text_1
# 1352 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_2, MSGBOX_DEFAULT
# 1353 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R3_2:
# 1347 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R4::
# 1357 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1358 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1359 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_0, MSGBOX_YESNO
# 1360 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R4_2
# 1365 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R4, ParcelFloodbasin_Rannveig_R3_Text_1
# 1366 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_1, MSGBOX_DEFAULT
# 1367 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R4_2:
# 1361 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1362 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R5::
# 1371 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1372 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1373 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_0, MSGBOX_YESNO
# 1374 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R5_2
# 1379 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R5, ParcelFloodbasin_Rannveig_R5_Text_1
# 1380 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_2, MSGBOX_DEFAULT
# 1381 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R5_2:
# 1375 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1376 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar::
# 1385 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_EINAR, ParcelFloodbasin_Einar_Text_0, ParcelFloodbasin_Einar_Text_1, ParcelFloodbasin_Einar_FirstWin
# 1389 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1390 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Einar_3
ParcelFloodbasin_Einar_1:
# 1393 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Einar_8
ParcelFloodbasin_Einar_6:
# 1396 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Einar_13
ParcelFloodbasin_Einar_11:
# 1399 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Einar_18
ParcelFloodbasin_Einar_16:
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Einar_2:
# 1391 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_3:
# 1390 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R2
	goto_if 0, ParcelFloodbasin_Einar_2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_7:
# 1394 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R3
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_8:
# 1393 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R3
	goto_if 0, ParcelFloodbasin_Einar_7
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_12:
# 1397 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R4
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_13:
# 1396 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R4
	goto_if 0, ParcelFloodbasin_Einar_12
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_17:
# 1400 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R5
	goto ParcelFloodbasin_Einar_16

ParcelFloodbasin_Einar_18:
# 1399 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R5
	goto_if 0, ParcelFloodbasin_Einar_17
	goto ParcelFloodbasin_Einar_16


ParcelFloodbasin_Einar_FirstWin::
# 1406 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
# 1407 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R2::
# 1411 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1412 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1413 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_0, MSGBOX_YESNO
# 1414 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R2_2
# 1419 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R2, ParcelFloodbasin_Einar_R2_Text_2
# 1420 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_3, MSGBOX_DEFAULT
# 1421 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R2_2:
# 1415 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R3::
# 1425 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1426 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1427 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_0, MSGBOX_YESNO
# 1428 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R3_2
# 1433 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R3, ParcelFloodbasin_Einar_R2_Text_2
# 1434 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_1, MSGBOX_DEFAULT
# 1435 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R3_2:
# 1429 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R4::
# 1439 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1440 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1441 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_0, MSGBOX_YESNO
# 1442 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R4_2
# 1447 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R4, ParcelFloodbasin_Einar_R2_Text_2
# 1448 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_1, MSGBOX_DEFAULT
# 1449 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R4_2:
# 1443 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1444 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R5::
# 1453 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1454 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1455 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_0, MSGBOX_YESNO
# 1456 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R5_2
# 1461 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R5, ParcelFloodbasin_Einar_R5_Text_1
# 1462 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_2, MSGBOX_DEFAULT
# 1463 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R5_2:
# 1457 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1458 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla::
# 1467 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STURLA, ParcelFloodbasin_Sturla_Text_0, ParcelFloodbasin_Sturla_Text_1, ParcelFloodbasin_Sturla_FirstWin
# 1471 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1472 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Sturla_3
ParcelFloodbasin_Sturla_1:
# 1475 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Sturla_8
ParcelFloodbasin_Sturla_6:
# 1478 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Sturla_13
ParcelFloodbasin_Sturla_11:
# 1481 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Sturla_18
ParcelFloodbasin_Sturla_16:
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Sturla_2:
# 1473 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_3:
# 1472 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R2
	goto_if 0, ParcelFloodbasin_Sturla_2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_7:
# 1476 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R3
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_8:
# 1475 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R3
	goto_if 0, ParcelFloodbasin_Sturla_7
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_12:
# 1479 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R4
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_13:
# 1478 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R4
	goto_if 0, ParcelFloodbasin_Sturla_12
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_17:
# 1482 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R5
	goto ParcelFloodbasin_Sturla_16

ParcelFloodbasin_Sturla_18:
# 1481 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R5
	goto_if 0, ParcelFloodbasin_Sturla_17
	goto ParcelFloodbasin_Sturla_16


ParcelFloodbasin_Sturla_FirstWin::
# 1488 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
# 1489 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R2::
# 1493 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1494 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1495 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_0, MSGBOX_YESNO
# 1496 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R2_2
# 1501 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R2, ParcelFloodbasin_Sturla_R2_Text_2
# 1502 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_3, MSGBOX_DEFAULT
# 1503 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R2_2:
# 1497 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R3::
# 1507 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1508 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1509 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_0, MSGBOX_YESNO
# 1510 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R3_2
# 1515 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R3, ParcelFloodbasin_Sturla_R3_Text_1
# 1516 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_2, MSGBOX_DEFAULT
# 1517 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R3_2:
# 1511 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R4::
# 1521 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1522 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1523 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_0, MSGBOX_YESNO
# 1524 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R4_2
# 1529 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R4, ParcelFloodbasin_Sturla_R4_Text_1
# 1530 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_2, MSGBOX_DEFAULT
# 1531 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R4_2:
# 1525 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1526 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R5::
# 1535 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1536 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1537 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_0, MSGBOX_YESNO
# 1538 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R5_2
# 1543 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R5, ParcelFloodbasin_Sturla_R5_Text_1
# 1544 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_2, MSGBOX_DEFAULT
# 1545 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R5_2:
# 1539 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1540 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar::
# 1549 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_OSKAR, ParcelFloodbasin_Oskar_Text_0, ParcelFloodbasin_Oskar_Text_1, ParcelFloodbasin_Oskar_FirstWin
# 1553 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1554 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Oskar_3
ParcelFloodbasin_Oskar_1:
# 1557 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Oskar_8
ParcelFloodbasin_Oskar_6:
# 1560 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Oskar_13
ParcelFloodbasin_Oskar_11:
# 1563 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Oskar_18
ParcelFloodbasin_Oskar_16:
# 1566 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Oskar_2:
# 1555 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_3:
# 1554 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R2
	goto_if 0, ParcelFloodbasin_Oskar_2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_7:
# 1558 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R3
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_8:
# 1557 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R3
	goto_if 0, ParcelFloodbasin_Oskar_7
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_12:
# 1561 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R4
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_13:
# 1560 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R4
	goto_if 0, ParcelFloodbasin_Oskar_12
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_17:
# 1564 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R5
	goto ParcelFloodbasin_Oskar_16

ParcelFloodbasin_Oskar_18:
# 1563 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R5
	goto_if 0, ParcelFloodbasin_Oskar_17
	goto ParcelFloodbasin_Oskar_16


ParcelFloodbasin_Oskar_FirstWin::
# 1570 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
# 1571 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R2::
# 1575 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1576 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1577 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_0, MSGBOX_YESNO
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R2_2
# 1583 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R2, ParcelFloodbasin_Oskar_R2_Text_2
# 1584 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_3, MSGBOX_DEFAULT
# 1585 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R2_2:
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1580 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R3::
# 1589 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1590 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1591 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_0, MSGBOX_YESNO
# 1592 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R3_2
# 1597 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R3, ParcelFloodbasin_Oskar_R3_Text_1
# 1598 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_2, MSGBOX_DEFAULT
# 1599 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R3_2:
# 1593 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1594 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R4::
# 1603 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1604 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1605 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_0, MSGBOX_YESNO
# 1606 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R4_2
# 1611 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R4, ParcelFloodbasin_Oskar_R4_Text_1
# 1612 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_2, MSGBOX_DEFAULT
# 1613 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R4_2:
# 1607 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1608 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R5::
# 1617 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1618 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_0, MSGBOX_YESNO
# 1620 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R5_2
# 1625 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R5, ParcelFloodbasin_Oskar_R3_Text_1
# 1626 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_1, MSGBOX_DEFAULT
# 1627 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R5_2:
# 1621 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1622 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_ItemRevive::
# 1632 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_ItemSuperPotion::
# 1633 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFloodbasin_ItemGreatBall::
# 1634 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelFloodbasin_SignHamlet::
# 1637 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SignHamlet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Checkpoint::
# 1645 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_Checkpoint_2
# 1649 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1650 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_0, MSGBOX_DEFAULT
# 1651 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1652 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenApproach
# 1653 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1654 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FLD_FaceLeft
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_1, MSGBOX_DEFAULT
# 1657 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_2, MSGBOX_YESNO
# 1658 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Checkpoint_5
# 1661 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_4, MSGBOX_DEFAULT
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_EXAM_3
ParcelFloodbasin_Checkpoint_4:
# 1664 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3, ParcelFloodbasin_Checkpoint_Text_5
# 1665 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_BADGE03_GET
# 1666 "data/maps/ParcelFloodbasin/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1667 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_6, MSGBOX_DEFAULT
# 1668 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_HM06
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_7, MSGBOX_DEFAULT
# 1670 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1671 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenAside
# 1672 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1673 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1674 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_Checkpoint_2:
# 1646 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
	end

ParcelFloodbasin_Checkpoint_5:
# 1659 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Checkpoint_4


ParcelFloodbasin_GymBreen::
# 1678 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1679 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1680 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_GymBreen_2
ParcelFloodbasin_GymBreen_1:
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Text_0, MSGBOX_DEFAULT
# 1684 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_2:
# 1681 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_GymBreen_Rematch
	goto ParcelFloodbasin_GymBreen_1


# 1687 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenApproach:
# 1687 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
# 1687 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
	step_end

# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenAside:
# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_down
# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
	step_end

# 1689 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_FaceLeft:
# 1689 "data/maps/ParcelFloodbasin/scripts.pory"
	face_left
	step_end

ParcelFloodbasin_T_Anders::
# 1693 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ANDERS, ParcelFloodbasin_T_Anders_Text_0, ParcelFloodbasin_T_Anders_Text_1, ParcelFloodbasin_T_Anders_FirstWin
# 1697 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1698 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Anders_3
ParcelFloodbasin_T_Anders_1:
# 1701 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Anders_8
ParcelFloodbasin_T_Anders_6:
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Anders_13
ParcelFloodbasin_T_Anders_11:
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Anders_18
ParcelFloodbasin_T_Anders_16:
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Anders_2:
# 1699 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_3:
# 1698 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R2
	goto_if 0, ParcelFloodbasin_T_Anders_2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_7:
# 1702 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R3
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_8:
# 1701 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R3
	goto_if 0, ParcelFloodbasin_T_Anders_7
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_12:
# 1705 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R4
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_13:
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R4
	goto_if 0, ParcelFloodbasin_T_Anders_12
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_17:
# 1708 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R5
	goto ParcelFloodbasin_T_Anders_16

ParcelFloodbasin_T_Anders_18:
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R5
	goto_if 0, ParcelFloodbasin_T_Anders_17
	goto ParcelFloodbasin_T_Anders_16


ParcelFloodbasin_T_Anders_FirstWin::
# 1714 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
# 1715 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R2::
# 1719 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1720 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1721 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_0, MSGBOX_YESNO
# 1722 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R2_2
# 1727 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R2, ParcelFloodbasin_T_Anders_R2_Text_2
# 1728 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_3, MSGBOX_DEFAULT
# 1729 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R2_2:
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R3::
# 1733 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1734 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1735 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_0, MSGBOX_YESNO
# 1736 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R3_2
# 1741 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R3, ParcelFloodbasin_T_Anders_R3_Text_1
# 1742 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_2, MSGBOX_DEFAULT
# 1743 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R3_2:
# 1737 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1738 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R4::
# 1747 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1748 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1749 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_0, MSGBOX_YESNO
# 1750 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R4_2
# 1755 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R4, ParcelFloodbasin_T_Anders_R4_Text_1
# 1756 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_2, MSGBOX_DEFAULT
# 1757 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R4_2:
# 1751 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1752 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R5::
# 1761 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1762 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1763 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_0, MSGBOX_YESNO
# 1764 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R5_2
# 1769 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R5, ParcelFloodbasin_T_Anders_R4_Text_1
# 1770 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_1, MSGBOX_DEFAULT
# 1771 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R5_2:
# 1765 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1766 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald::
# 1775 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ROALD, ParcelFloodbasin_T_Roald_Text_0, ParcelFloodbasin_T_Roald_Text_1, ParcelFloodbasin_T_Roald_FirstWin
# 1779 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1780 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Roald_3
ParcelFloodbasin_T_Roald_1:
# 1783 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Roald_8
ParcelFloodbasin_T_Roald_6:
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Roald_13
ParcelFloodbasin_T_Roald_11:
# 1789 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Roald_18
ParcelFloodbasin_T_Roald_16:
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Roald_2:
# 1781 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_3:
# 1780 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R2
	goto_if 0, ParcelFloodbasin_T_Roald_2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_7:
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R3
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_8:
# 1783 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R3
	goto_if 0, ParcelFloodbasin_T_Roald_7
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_12:
# 1787 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R4
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_13:
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R4
	goto_if 0, ParcelFloodbasin_T_Roald_12
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_17:
# 1790 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R5
	goto ParcelFloodbasin_T_Roald_16

ParcelFloodbasin_T_Roald_18:
# 1789 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R5
	goto_if 0, ParcelFloodbasin_T_Roald_17
	goto ParcelFloodbasin_T_Roald_16


ParcelFloodbasin_T_Roald_FirstWin::
# 1796 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
# 1797 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R2::
# 1801 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1802 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1803 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_0, MSGBOX_YESNO
# 1804 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R2_2
# 1809 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R2, ParcelFloodbasin_T_Roald_R2_Text_2
# 1810 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_3, MSGBOX_DEFAULT
# 1811 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R2_2:
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R3::
# 1815 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1816 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1817 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_0, MSGBOX_YESNO
# 1818 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R3_2
# 1823 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R3, ParcelFloodbasin_T_Roald_R2_Text_2
# 1824 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_1, MSGBOX_DEFAULT
# 1825 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R3_2:
# 1819 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R4::
# 1829 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1830 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1831 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_0, MSGBOX_YESNO
# 1832 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R4_2
# 1837 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R4, ParcelFloodbasin_T_Roald_R4_Text_1
# 1838 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_2, MSGBOX_DEFAULT
# 1839 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R4_2:
# 1833 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1834 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R5::
# 1843 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1844 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1845 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_0, MSGBOX_YESNO
# 1846 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R5_2
# 1851 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R5, ParcelFloodbasin_T_Roald_R5_Text_1
# 1852 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_2, MSGBOX_DEFAULT
# 1853 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R5_2:
# 1847 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1848 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein::
# 1857 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STEIN, ParcelFloodbasin_T_Stein_Text_0, ParcelFloodbasin_T_Stein_Text_1, ParcelFloodbasin_T_Stein_FirstWin
# 1861 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Stein_3
ParcelFloodbasin_T_Stein_1:
# 1865 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Stein_8
ParcelFloodbasin_T_Stein_6:
# 1868 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Stein_13
ParcelFloodbasin_T_Stein_11:
# 1871 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Stein_18
ParcelFloodbasin_T_Stein_16:
# 1874 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Stein_2:
# 1863 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_3:
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R2
	goto_if 0, ParcelFloodbasin_T_Stein_2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_7:
# 1866 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R3
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_8:
# 1865 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R3
	goto_if 0, ParcelFloodbasin_T_Stein_7
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_12:
# 1869 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R4
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_13:
# 1868 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R4
	goto_if 0, ParcelFloodbasin_T_Stein_12
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_17:
# 1872 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R5
	goto ParcelFloodbasin_T_Stein_16

ParcelFloodbasin_T_Stein_18:
# 1871 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R5
	goto_if 0, ParcelFloodbasin_T_Stein_17
	goto ParcelFloodbasin_T_Stein_16


ParcelFloodbasin_T_Stein_FirstWin::
# 1878 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
# 1879 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R2::
# 1883 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1884 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1885 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_0, MSGBOX_YESNO
# 1886 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R2_2
# 1891 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R2, ParcelFloodbasin_T_Stein_R2_Text_2
# 1892 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_3, MSGBOX_DEFAULT
# 1893 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R2_2:
# 1887 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1888 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R3::
# 1897 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1898 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1899 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_0, MSGBOX_YESNO
# 1900 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R3_2
# 1905 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R3, ParcelFloodbasin_T_Stein_R3_Text_1
# 1906 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_2, MSGBOX_DEFAULT
# 1907 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R3_2:
# 1901 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1902 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R4::
# 1911 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1912 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1913 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_0, MSGBOX_YESNO
# 1914 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R4_2
# 1919 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R4, ParcelFloodbasin_T_Stein_R3_Text_1
# 1920 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_1, MSGBOX_DEFAULT
# 1921 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R4_2:
# 1915 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1916 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R5::
# 1925 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1926 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1927 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_0, MSGBOX_YESNO
# 1928 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R5_2
# 1933 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R5, ParcelFloodbasin_T_Stein_R5_Text_1
# 1934 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_2, MSGBOX_DEFAULT
# 1935 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R5_2:
# 1929 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1930 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Epilogue::
# 1941 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1942 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 20
# 1943 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_0, MSGBOX_DEFAULT
# 1944 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_1, MSGBOX_DEFAULT
# 1945 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1946 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 3
# 1947 "data/maps/ParcelFloodbasin/scripts.pory"
	warp MAP_PARCEL_RIVER, 16, 30
# 1948 "data/maps/ParcelFloodbasin/scripts.pory"
	waitstate
	end


ParcelFloodbasin_GymBreen_Rematch::
# 1954 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1955 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1956 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_0, MSGBOX_YESNO
# 1957 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_GymBreen_Rematch_2
# 1962 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3_R, ParcelFloodbasin_GymBreen_Rematch_Text_2
# 1963 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_3, MSGBOX_DEFAULT
# 1964 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_Rematch_2:
# 1958 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_1, MSGBOX_DEFAULT
# 1959 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_TarpRoof::
# 1969 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOF, ParcelFloodbasin_TarpRoof_2
# 1972 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_TarpRoof_Text_0, MSGBOX_SIGN
# 1973 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF_FOUND
	end

ParcelFloodbasin_TarpRoof_2:
	end


ParcelFloodbasin_MarkA::
# 1978 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkA_3
ParcelFloodbasin_MarkA_1:
# 1983 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkA_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkA_2:
# 1979 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkA_Text_0, MSGBOX_SIGN
# 1980 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_A
	end

ParcelFloodbasin_MarkA_3:
# 1978 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_MarkA_2
	goto ParcelFloodbasin_MarkA_1


ParcelFloodbasin_MarkB::
# 1988 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkB_3
ParcelFloodbasin_MarkB_1:
# 1993 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkB_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkB_2:
# 1989 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkB_Text_0, MSGBOX_SIGN
# 1990 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_B
	end

ParcelFloodbasin_MarkB_3:
# 1988 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_MarkB_2
	goto ParcelFloodbasin_MarkB_1


ParcelFloodbasin_MarkC::
# 1998 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkC_3
ParcelFloodbasin_MarkC_1:
# 2003 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkC_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkC_2:
# 1999 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkC_Text_0, MSGBOX_SIGN
# 2000 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_C
	end

ParcelFloodbasin_MarkC_3:
# 1998 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_MarkC_2
	goto ParcelFloodbasin_MarkC_1


ParcelFloodbasin_SurveyStake::
# 2009 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SurveyStake_Text_0, MSGBOX_SIGN
# 2010 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 2011 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldSurveyStake
# 2012 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 2013 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelFloodbasin_SurveyStake_3
ParcelFloodbasin_SurveyStake_1:
	end

ParcelFloodbasin_SurveyStake_2:
# 2014 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SurveyStake_Text_1, MSGBOX_SIGN
# 2015 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_SECOND_2
	goto ParcelFloodbasin_SurveyStake_1

ParcelFloodbasin_SurveyStake_3:
# 2013 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_2, ParcelFloodbasin_SurveyStake_2
	goto ParcelFloodbasin_SurveyStake_1


ParcelFloodbasin_PairBlankets::
# 2023 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2024 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBlankets_2
# 2029 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBlankets_3
# 2035 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_8, MSGBOX_DEFAULT
# 2036 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_9, MSGBOX_DEFAULT
# 2037 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_10, MSGBOX_DEFAULT
# 2038 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_11, MSGBOX_DEFAULT
ParcelFloodbasin_PairBlankets_1:
# 2040 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBlankets_2:
# 2025 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_0, MSGBOX_DEFAULT
# 2026 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_1, MSGBOX_DEFAULT
# 2027 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_2, MSGBOX_DEFAULT
# 2028 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBlankets_1

ParcelFloodbasin_PairBlankets_3:
# 2030 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_4, MSGBOX_DEFAULT
# 2031 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_5, MSGBOX_DEFAULT
# 2032 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_6, MSGBOX_DEFAULT
# 2033 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_7, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBlankets_1


ParcelFloodbasin_PairBoat::
# 2045 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2046 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBoat_2
# 2052 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBoat_3
# 2058 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_9, MSGBOX_DEFAULT
# 2059 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_10, MSGBOX_DEFAULT
# 2060 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_11, MSGBOX_DEFAULT
# 2061 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_12, MSGBOX_DEFAULT
# 2062 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_13, MSGBOX_DEFAULT
ParcelFloodbasin_PairBoat_1:
# 2064 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBoat_2:
# 2047 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_0, MSGBOX_DEFAULT
# 2048 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_1, MSGBOX_DEFAULT
# 2049 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_2, MSGBOX_DEFAULT
# 2050 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_3, MSGBOX_DEFAULT
# 2051 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_4, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBoat_1

ParcelFloodbasin_PairBoat_3:
# 2053 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_5, MSGBOX_DEFAULT
# 2054 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_6, MSGBOX_DEFAULT
# 2055 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_7, MSGBOX_DEFAULT
# 2056 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_8, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBoat_1


ParcelFloodbasin_Stringer::
# 2071 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2072 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2073 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Stringer_2
# 2075 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Stringer_3
# 2078 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_2, MSGBOX_DEFAULT
ParcelFloodbasin_Stringer_1:
# 2080 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Stringer_2:
# 2074 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Stringer_1

ParcelFloodbasin_Stringer_3:
# 2076 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Stringer_1


ParcelFloodbasin_WellWoman::
# 2087 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2088 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2089 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_DONE, ParcelFloodbasin_WellWoman_2
# 2091 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE, ParcelFloodbasin_WellWoman_3
# 2100 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_3, MSGBOX_DEFAULT
# 2101 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE
ParcelFloodbasin_WellWoman_1:
# 2103 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_WellWoman_2:
# 2090 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_0, MSGBOX_DEFAULT
	goto ParcelFloodbasin_WellWoman_1

ParcelFloodbasin_WellWoman_3:
# 2092 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_FOUND, ParcelFloodbasin_WellWoman_7
# 2097 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_2, MSGBOX_DEFAULT
	goto ParcelFloodbasin_WellWoman_1

ParcelFloodbasin_WellWoman_7:
# 2093 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_1, MSGBOX_DEFAULT
# 2094 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_FULL_HEAL, 2
# 2095 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE_DONE
	goto ParcelFloodbasin_WellWoman_1


ParcelFloodbasin_FindDeadline::
# 2110 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE, ParcelFloodbasin_FindDeadline_4
ParcelFloodbasin_FindDeadline_3:
# 2114 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindDeadline_Text_1, MSGBOX_SIGN
ParcelFloodbasin_FindDeadline_1:
	end

ParcelFloodbasin_FindDeadline_2:
# 2111 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindDeadline_Text_0, MSGBOX_SIGN
# 2112 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE_FOUND
	goto ParcelFloodbasin_FindDeadline_1

ParcelFloodbasin_FindDeadline_4:
# 2110 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_FOUND, ParcelFloodbasin_FindDeadline_2
	goto ParcelFloodbasin_FindDeadline_3


ParcelFloodbasin_PairBank::
# 2120 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2121 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBank_2
# 2125 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBank_3
# 2131 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_7, MSGBOX_DEFAULT
# 2132 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_8, MSGBOX_DEFAULT
# 2133 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_9, MSGBOX_DEFAULT
# 2134 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_10, MSGBOX_DEFAULT
ParcelFloodbasin_PairBank_1:
# 2136 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBank_2:
# 2122 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_0, MSGBOX_DEFAULT
# 2123 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_1, MSGBOX_DEFAULT
# 2124 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_2, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBank_1

ParcelFloodbasin_PairBank_3:
# 2126 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_3, MSGBOX_DEFAULT
# 2127 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_4, MSGBOX_DEFAULT
# 2128 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_5, MSGBOX_DEFAULT
# 2129 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_6, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBank_1


ParcelFloodbasin_Board1::
# 2143 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board1_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Board2::
# 2148 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board2_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_FirstEntry_Text_0:
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The trees open onto a low, wide basin.\n"
	.string "Rain ticks on the reeds.\p"
	.string "Something is wrong with the smell.$"

ParcelFloodbasin_FirstEntry_Text_1:
# 59 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{STR_VAR_1} walks on, but slower,\n"
	.string "and keeps to the middle of the path.$"

ParcelFloodbasin_FirstEntry_Text_2:
# 60 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALE's brief, on paper: LEGACY\n"
	.string "CONTAMINATION. OWNERSHIP\l"
	.string "UNCONTESTED. ACTIVE REMEDIATION\l"
	.string "CITED.\p"
	.string "Walk the upstream. Read it for yourself.$"

ParcelFloodbasin_FirstEntry_Text_3:
# 61 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Voices, off to the east. A lot of them.\n"
	.string "Somebody is giving a speech in the rain.$"

ParcelFloodbasin_ReliefScene_Text_0:
# 75 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: --and the Council hears you.\n"
	.string "Third flood in two years. You've been\l"
	.string "patient. Patience should be paid for.$"

ParcelFloodbasin_ReliefScene_Text_1:
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Fuel vouchers. Dry goods. The\n"
	.string "FOUNDATION's boat runs to FERNWICK\l"
	.string "twice a day until the road's clear.\l"
	.string "Nobody pays.\p"
	.string "MRS. ASKE. Your roof. I haven't\n"
	.string "forgotten. Thursday.$"

ParcelFloodbasin_ReliefScene_Text_2:
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Bless you, councilman. Bless\n"
	.string "you.$"

ParcelFloodbasin_ReliefScene_Text_3:
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: And there's our RANGER. Good.\n"
	.string "Come down, come down. Witness this.\l"
	.string "That's your job, isn't it? Witnessing.$"

ParcelFloodbasin_ReliefScene_Text_4:
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The CORPS sends a report. I\n"
	.string "send a boat.\p"
	.string "No, don't argue, I'm not blaming you. I'm\n"
	.string "telling you what people remember. They\l"
	.string "remember the boat.$"

ParcelFloodbasin_ReliefScene_Text_5:
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The water goes down by\n"
	.string "Thursday. It always does. Then the\l"
	.string "smell goes. Then they forget, until the\l"
	.string "next one.\p"
	.string "That's the basin. That's just the basin.$"

ParcelFloodbasin_ReliefScene_Text_6:
# 84 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: Mister DORSEY, is the water bad?\n"
	.string "Gran says don't touch it.$"

ParcelFloodbasin_ReliefScene_Text_7:
# 85 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Your gran's right, sweetheart.\n"
	.string "Not until it's gone down. Here. Take two,\l"
	.string "one for your brother.$"

ParcelFloodbasin_ReliefScene_Text_8:
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Walk the basin, RANGER. Read\n"
	.string "your stakes. When you're done, the\l"
	.string "booth by the bridge will have the\l"
	.string "remediation file ready for you. All of it.\l"
	.string "We've nothing to hide.$"

ParcelFloodbasin_ReliefScene_Text_9:
# 90 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: And take a blanket.\n"
	.string "FOUNDATION's. Everyone takes one; the\l"
	.string "nights are the nights whatever you\l"
	.string "think of the crest.\p"
	.string "Take one?$"

ParcelFloodbasin_ReliefScene_Text_10:
# 92 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "You take it. It is warm, and it says\n"
	.string "FOUNDATION in the corner, and both of\l"
	.string "those are true.\p"
	.string "DORSEY: Good. Warm first. Argue later.\n"
	.string "That's the only order it works in.$"

ParcelFloodbasin_ReliefScene_Text_11:
# 95 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "You leave it on the pile.\p"
	.string "DORSEY: No? …Your business. They write\n"
	.string "that down too, you know. Who didn't take\l"
	.string "one. Not me. Them.$"

ParcelFloodbasin_Dorsey_Text_0:
# 110 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: You'll write that the\n"
	.string "FOUNDATION's man was courteous after\l"
	.string "the hearing. I was. I am. Phase 2 goes\l"
	.string "ahead, RANGER. Dry sheds. You'd have\l"
	.string "built them too. You'd just have built\l"
	.string "them slower.$"

ParcelFloodbasin_Dorsey_Text_1:
# 118 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: I heard KOLE lost his temper.\n"
	.string "He's young. I'll have a word.\p"
	.string "You'll write that the FOUNDATION's man\n"
	.string "was uncooperative. Write also that the\l"
	.string "FOUNDATION's boat ran twice a day. Both\l"
	.string "are true.$"

ParcelFloodbasin_Dorsey_Text_2:
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Vouchers are for residents,\n"
	.string "RANGER. You've got a CORPS stipend. Try\l"
	.string "the booth by the bridge if you want\l"
	.string "paperwork.$"

ParcelFloodbasin_Aide1_Text_0:
# 130 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers are finished. The\n"
	.string "relief sheet went to the hearing as an\l"
	.string "exhibit. Forty-one signatures. The\l"
	.string "councilman's name was the\l"
	.string "forty-second. I'd not noticed that\l"
	.string "before.$"

ParcelFloodbasin_Aide1_Text_1:
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Vouchers are suspended pending\n"
	.string "the coast office's review. I'm to say\l"
	.string "'suspended', not 'stopped'.\p"
	.string "The sheet's still here. Nobody's come to\n"
	.string "sign it since the river hall voted.\l"
	.string "Nobody's come to collect it either.$"

ParcelFloodbasin_Aide1_Text_2:
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers on the left, dry\n"
	.string "goods on the right. Sign the sheet. Yes,\l"
	.string "the FOUNDATION keeps the sheet. For\l"
	.string "the records.$"

ParcelFloodbasin_Aide2_Text_0:
# 147 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. The\n"
	.string "hearing asked how many were consulted\l"
	.string "on Phase 2. I said forty-one signed.\l"
	.string "They said that wasn't the question. It\l"
	.string "wasn't.$"

ParcelFloodbasin_Aide2_Text_1:
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one signatures, and the\n"
	.string "councilman hasn't looked at the sheet\l"
	.string "once since he came back from the river.\p"
	.string "He looks at the bridge instead. I don't\n"
	.string "know what he sees there. Water, I\l"
	.string "expect.$"

ParcelFloodbasin_Aide2_Text_2:
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. Forty-one\n"
	.string "signatures. The councilman likes a full\l"
	.string "sheet.$"

ParcelFloodbasin_VilOldWoman_Text_0:
# 164 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: They came Tuesday. Not\n"
	.string "Thursday. Tuesday. Eleven years and it\l"
	.string "took a stranger looking at a tarp.$"

ParcelFloodbasin_VilOldWoman_Text_1:
# 169 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: You looked? Then go and tell\n"
	.string "the aide you looked. Say it like you\l"
	.string "mean to write it down. They move faster\l"
	.string "for the writing down.$"

ParcelFloodbasin_VilOldWoman_Text_2:
# 174 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: The house behind the third\n"
	.string "one, dear. Blue tarp. You can't miss it.\l"
	.string "Everyone misses it.$"

ParcelFloodbasin_VilOldWoman_Text_3:
# 179 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Thursday, he said. It's been\n"
	.string "four Thursdays. The tarp's on the house\l"
	.string "behind the third one.\p"
	.string "Go and look at it, dear. And then go and\n"
	.string "tell the aide you looked.$"

ParcelFloodbasin_VilOldWoman_Text_4:
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. He said it\n"
	.string "at the hearing, into a microphone, as an\l"
	.string "example of local partnership. Eleven\l"
	.string "years, and I was an example.$"

ParcelFloodbasin_VilOldWoman_Text_5:
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. Eleven\n"
	.string "years on the Council and he knows my\l"
	.string "name.\p"
	.string "The CORPS man before you didn't. I'm not\n"
	.string "saying that to be unkind.$"

ParcelFloodbasin_VilOldWoman_Text_6:
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Wait your turn, dear. We've\n"
	.string "all been flooded.$"

ParcelFloodbasin_VilMan_Text_0:
# 203 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three. You held them up to the\n"
	.string "light the way I would've if I'd had the\l"
	.string "vials.\p"
	.string "Brown's just mud. Mud don't shine. That\n"
	.string "shine's the thing nobody asks about,\l"
	.string "and now it's in three bottles with my\l"
	.string "name on the sheet as the one who asked.$"

ParcelFloodbasin_VilMan_Text_1:
# 204 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Here. Came up with the brown water\n"
	.string "the third flood and I've kept it dry\l"
	.string "since. Yours.$"

ParcelFloodbasin_VilMan_Text_2:
# 207 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Vouchers are for asking quietly.\n"
	.string "Bottles are for asking out loud.$"

ParcelFloodbasin_VilMan_Text_3:
# 211 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The marks. A scrape off each one.$"

ParcelFloodbasin_VilMan_Text_4:
# 213 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The first is on the house beside\n"
	.string "the relief tent.$"

ParcelFloodbasin_VilMan_Text_5:
# 216 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The second is on the hamlet wall,\n"
	.string "the house by the lane.$"

ParcelFloodbasin_VilMan_Text_6:
# 219 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The third is on the house with the\n"
	.string "tarp roof. Highest of the three.$"

ParcelFloodbasin_VilMan_Text_7:
# 225 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the water still comes up\l"
	.string "brown. Your paper says why. In the\l"
	.string "hearing they read the why aloud. The\l"
	.string "water didn't change colour. I did.$"

ParcelFloodbasin_VilMan_Text_8:
# 230 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The water comes up brown and\n"
	.string "nobody's asked why but me, and I got\l"
	.string "vouchers for asking. You've got vials.\l"
	.string "I've seen the belt.\p"
	.string "Three flood marks on the hamlet. Take a\n"
	.string "scrape off each one. If it's mud it's\l"
	.string "mud. If it's the other thing, somebody's\l"
	.string "going to have to say so.\p"
	.string "The marks are the brown lines on the\n"
	.string "walls. You can't miss them. Everybody\l"
	.string "misses them.$"

ParcelFloodbasin_VilMan_Text_9:
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the fourth time I asked\l"
	.string "why the water's brown, somebody up the\l"
	.string "river asked it for me. In a hall. With the\l"
	.string "Board sitting there.\p"
	.string "No vouchers for that. Better than\n"
	.string "vouchers.$"

ParcelFloodbasin_VilMan_Text_10:
# 240 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods. Three times the\n"
	.string "vouchers. Nobody's asked why the water\l"
	.string "comes up brown now.\p"
	.string "I asked. I got vouchers.$"

ParcelFloodbasin_VilGirl_Text_0:
# 248 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A CORPS lady came\l"
	.string "and drew it. She said it's in a report\l"
	.string "now. It doesn't know. It's a WOOPER.$"

ParcelFloodbasin_VilGirl_Text_1:
# 253 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A lady from the river\l"
	.string "came and drew it. Drew it! In a book!\p"
	.string "She said it's going in a report. I said\n"
	.string "it's going in a puddle. We were both\l"
	.string "right.$"

ParcelFloodbasin_VilGirl_Text_2:
# 257 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: My brother found a WOOPER with\n"
	.string "the wrong feet. Gran made him put it\l"
	.string "back. It didn't go anywhere. It just\l"
	.string "sat.$"

ParcelFloodbasin_VilFisher_Text_0:
# 266 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Past the big stone. It's never\n"
	.string "reached past the big stone. The works\l"
	.string "are further up than they say the water\l"
	.string "goes, then.\p"
	.string "Here. For the smell. There's no cure for\n"
	.string "the smell, but these are for the rest.$"

ParcelFloodbasin_VilFisher_Text_1:
# 270 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: The bank. The line of them. Find\n"
	.string "where it stops.$"

ParcelFloodbasin_VilFisher_Text_2:
# 275 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: After every pulse there's a\n"
	.string "line on the bank where the fish lie. The\l"
	.string "Board man says it's weather. I say it's a\l"
	.string "line, and lines have a top end.\p"
	.string "Go along the bank and find the top of\n"
	.string "it. Tell me how far up it reaches this\l"
	.string "year.$"

ParcelFloodbasin_VilFisher_Text_3:
# 281 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Does writing fix anything, I\n"
	.string "asked you. The vouchers are still\l"
	.string "stopped. The boat's still stopped. But a\l"
	.string "Board man came and measured the water\l"
	.string "instead of telling me about it. Writing\l"
	.string "did that.$"

ParcelFloodbasin_VilFisher_Text_4:
# 286 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Vouchers stopped. Boat\n"
	.string "stopped. Water's the same.\p"
	.string "Your lot wrote something down, I hear.\n"
	.string "Does writing it down dry anything out?$"

ParcelFloodbasin_VilFisher_Text_5:
# 290 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: I don't fish the lake anymore. I\n"
	.string "fish the top lake, past the bridge. The\l"
	.string "water's clearer up there.\p"
	.string "Clearer. Not clear.$"

ParcelFloodbasin_Discharge_Text_0:
# 302 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. In the notebook.$"

ParcelFloodbasin_Discharge_Text_1:
# 306 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe in the bank, mouth\n"
	.string "fouled with brown crust. Stamped:\l"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old. The\n"
	.string "crust is fresher than that. Written\l"
	.string "down.$"

ParcelFloodbasin_Sheen_Text_0:
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. In the notebook.$"

ParcelFloodbasin_Sheen_Text_1:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the lake,\n"
	.string "bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "carry the same stain at their bases.\l"
	.string "Written down.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 332 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the bank,\n"
	.string "straw-pale. The reeds above and below\l"
	.string "it are fine.\p"
	.string "The kill line is exactly the height of\n"
	.string "the flood six months ago. Written down.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 348 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A WOOPER, low in the puddle. Two left\n"
	.string "feet.\p"
	.string "It doesn't flinch. It has been like this\n"
	.string "since it hatched, and that was recent.\l"
	.string "Written down.$"

ParcelFloodbasin_SickKarp_Text_0:
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown MAGIKARP lists against the\n"
	.string "bridge piling, scales greying.\p"
	.string "It was never in the pipe. It was at the\n"
	.string "top of the food web. Poison climbs.\l"
	.string "Written down.$"

ParcelFloodbasin_BoothSign_Text_0:
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway. Please report\n"
	.string "concerns to your local representative.\p"
	.string "The paint is wet from the rain. The sign\n"
	.string "is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 375 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.$"

ParcelFloodbasin_Remediator_Text_1:
# 379 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Oh. RANGER! Welcome to the active\n"
	.string "remediation site.\p"
	.string "We've been at it… some time now. The\n"
	.string "FOUNDATION does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 380 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 381 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: …A quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 382 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: The councilman said you'd\n"
	.string "have the remediation file for me.$"

ParcelFloodbasin_Remediator_Text_5:
# 383 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Did he. Well. It's at the office.\n"
	.string "The coast office.$"

ParcelFloodbasin_Remediator_Text_6:
# 384 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_7:
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_8:
# 386 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The WOOPER has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_9:
# 389 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Move along, RANGER. This isn't\n"
	.string "your patch.$"

ParcelFloodbasin_Remediator_Text_10:
# 391 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_11:
# 392 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Hmph.$"

ParcelFloodbasin_Remediator_Text_12:
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.\p"
	.string "This basin ran sick before you got here.\n"
	.string "It'll run sick after.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 402 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 403 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: She doesn't eat what she\n"
	.string "catches anymore. Sells it to the people\l"
	.string "who don't ask.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_0:
# 429 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_1:
# 431 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Another time, then.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_2:
# 435 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's the one I wanted to see.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_3:
# 436 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_0:
# 443 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_1:
# 449 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Noted. Properly, this time.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_2:
# 450 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_0:
# 457 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_1:
# 463 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Still yours.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_2:
# 464 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_0:
# 471 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_1:
# 478 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Arve_Text_0:
# 484 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The DUSTOX here have spots in\n"
	.string "the wrong places. I've been drawing\l"
	.string "them. Battle first.$"

ParcelFloodbasin_Arve_Text_1:
# 485 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Drawn and beaten.$"

ParcelFloodbasin_Arve_Text_2:
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Wrong spots, extra spots, no\n"
	.string "spots. All in the same field. My teacher\l"
	.string "says that's just variety.$"

ParcelFloodbasin_Arve_R2_Text_0:
# 511 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Arve_R2_Text_1:
# 513 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: No hurry. The water keeps.$"

ParcelFloodbasin_Arve_R2_Text_2:
# 517 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's the one I wanted to see.$"

ParcelFloodbasin_Arve_R2_Text_3:
# 518 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Arve_R3_Text_0:
# 525 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Arve_R3_Text_1:
# 531 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Still yours.$"

ParcelFloodbasin_Arve_R3_Text_2:
# 532 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Arve_R4_Text_0:
# 539 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelFloodbasin_Arve_R4_Text_1:
# 546 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Arve_R5_Text_0:
# 553 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Arve_R5_Text_1:
# 559 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Noted. Properly, this time.$"

ParcelFloodbasin_Arve_R5_Text_2:
# 560 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Kai_Text_0:
# 566 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Nobody sees me in the tall grass.\n"
	.string "Nobody except you, apparently.$"

ParcelFloodbasin_Kai_Text_1:
# 567 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Seen and beaten.$"

ParcelFloodbasin_Kai_Text_2:
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: The grass by the top lake is the\n"
	.string "tallest. It's also the only grass that\l"
	.string "smells like that.$"

ParcelFloodbasin_Kai_R2_Text_0:
# 593 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelFloodbasin_Kai_R2_Text_1:
# 595 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Suit yourself. I'm here.$"

ParcelFloodbasin_Kai_R2_Text_2:
# 599 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: …Fair.$"

ParcelFloodbasin_Kai_R2_Text_3:
# 600 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Kai_R3_Text_0:
# 607 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Kai_R3_Text_1:
# 613 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Right. That's the whole of it.$"

ParcelFloodbasin_Kai_R3_Text_2:
# 614 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Kai_R4_Text_0:
# 621 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Kai_R4_Text_1:
# 627 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's the one I wanted to see.$"

ParcelFloodbasin_Kai_R4_Text_2:
# 628 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Kai_R5_Text_0:
# 635 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelFloodbasin_Kai_R5_Text_1:
# 641 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Still yours.$"

ParcelFloodbasin_Kai_R5_Text_2:
# 642 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Signe_Text_0:
# 648 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: A picnic in the rain is still a\n"
	.string "picnic. A battle in the rain is still a\l"
	.string "battle.$"

ParcelFloodbasin_Signe_Text_1:
# 649 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Soggy on both counts.$"

ParcelFloodbasin_Signe_Text_2:
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: I don't let my MARILL in the\n"
	.string "lower lake. It came out itchy once. Just\l"
	.string "once was enough.$"

ParcelFloodbasin_Signe_R2_Text_0:
# 675 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Signe_R2_Text_1:
# 677 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Signe_R2_Text_2:
# 681 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Noted. Properly, this time.$"

ParcelFloodbasin_Signe_R2_Text_3:
# 682 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Signe_R3_Text_0:
# 689 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Signe_R3_Text_1:
# 695 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: …Fair.$"

ParcelFloodbasin_Signe_R3_Text_2:
# 696 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Signe_R4_Text_0:
# 703 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Signe_R4_Text_1:
# 710 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Signe_R5_Text_0:
# 717 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Signe_R5_Text_1:
# 723 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Still yours.$"

ParcelFloodbasin_Signe_R5_Text_2:
# 724 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Leif_Text_0:
# 730 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I camp on the high ground. The low\n"
	.string "ground floods. Everybody knows.\l"
	.string "Battle?$"

ParcelFloodbasin_Leif_Text_1:
# 731 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Should've camped higher.$"

ParcelFloodbasin_Leif_Text_2:
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Every year the high ground's a bit\n"
	.string "higher. The water, I mean. Not the\l"
	.string "ground.$"

ParcelFloodbasin_Leif_R2_Text_0:
# 757 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Leif_R2_Text_1:
# 759 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Another time, then.$"

ParcelFloodbasin_Leif_R2_Text_2:
# 763 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Still yours.$"

ParcelFloodbasin_Leif_R2_Text_3:
# 764 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Leif_R3_Text_0:
# 771 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Leif_R3_Text_1:
# 777 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: …Again, then. Later.$"

ParcelFloodbasin_Leif_R3_Text_2:
# 778 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Leif_R4_Text_0:
# 785 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasin_Leif_R4_Text_1:
# 791 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Noted. Properly, this time.$"

ParcelFloodbasin_Leif_R4_Text_2:
# 792 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Leif_R5_Text_0:
# 799 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Leif_R5_Text_1:
# 806 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Truls_Text_0:
# 812 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: You walked right into my sight\n"
	.string "line. Rookie.$"

ParcelFloodbasin_Truls_Text_1:
# 813 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: …Not a rookie.$"

ParcelFloodbasin_Truls_Text_2:
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: The councilman's boat goes past\n"
	.string "twice a day. Nobody's ever asked what it\l"
	.string "brings back.$"

ParcelFloodbasin_Truls_R2_Text_0:
# 839 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Truls_R2_Text_1:
# 841 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Suit yourself. I'm here.$"

ParcelFloodbasin_Truls_R2_Text_2:
# 845 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Right. That's the whole of it.$"

ParcelFloodbasin_Truls_R2_Text_3:
# 846 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Truls_R3_Text_0:
# 853 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Truls_R3_Text_1:
# 859 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's the one I wanted to see.$"

ParcelFloodbasin_Truls_R3_Text_2:
# 860 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Truls_R4_Text_0:
# 867 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Truls_R4_Text_1:
# 873 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Still yours.$"

ParcelFloodbasin_Truls_R4_Text_2:
# 874 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Truls_R5_Text_0:
# 881 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Truls_R5_Text_1:
# 887 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Noted. Properly, this time.$"

ParcelFloodbasin_Truls_R5_Text_2:
# 888 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Halvor_Text_0:
# 894 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: The pond's got a boardwalk\n"
	.string "because the pond used to be a field.\l"
	.string "Think about that. Then battle me.$"

ParcelFloodbasin_Halvor_Text_1:
# 895 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Thought about it, did you.$"

ParcelFloodbasin_Halvor_Text_2:
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: My father planted this field. I\n"
	.string "fish it. That's the basin in one family.$"

ParcelFloodbasin_Halvor_R2_Text_0:
# 921 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Halvor_R2_Text_1:
# 923 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Fine. Same spot.$"

ParcelFloodbasin_Halvor_R2_Text_2:
# 927 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: …Again, then. Later.$"

ParcelFloodbasin_Halvor_R2_Text_3:
# 928 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Halvor_R3_Text_0:
# 935 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Halvor_R3_Text_1:
# 941 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's the one I wanted to see.$"

ParcelFloodbasin_Halvor_R3_Text_2:
# 942 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Halvor_R4_Text_0:
# 949 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Halvor_R4_Text_1:
# 956 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Halvor_R5_Text_0:
# 963 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Halvor_R5_Text_1:
# 969 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Still yours.$"

ParcelFloodbasin_Halvor_R5_Text_2:
# 970 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Maja_Text_0:
# 976 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles never dry out here\n"
	.string "anymore. My MARILL loves it. I don't.\l"
	.string "Battle!$"

ParcelFloodbasin_Maja_Text_1:
# 977 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: MARILL still loves it.$"

ParcelFloodbasin_Maja_Text_2:
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles have a shine on them\n"
	.string "in the morning. Rainbow colours. Gran\l"
	.string "says don't look at it too long.$"

ParcelFloodbasin_Maja_R2_Text_0:
# 1003 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Maja_R2_Text_1:
# 1005 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Fine. Same spot.$"

ParcelFloodbasin_Maja_R2_Text_2:
# 1009 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's the one I wanted to see.$"

ParcelFloodbasin_Maja_R2_Text_3:
# 1010 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Maja_R3_Text_0:
# 1017 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Maja_R3_Text_1:
# 1023 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Still yours.$"

ParcelFloodbasin_Maja_R3_Text_2:
# 1024 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Maja_R4_Text_0:
# 1031 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Maja_R4_Text_1:
# 1037 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Fair.$"

ParcelFloodbasin_Maja_R4_Text_2:
# 1038 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Maja_R5_Text_0:
# 1045 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Maja_R5_Text_1:
# 1051 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Again, then. Later.$"

ParcelFloodbasin_Maja_R5_Text_2:
# 1052 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Bjorn_Text_0:
# 1058 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: The pump house door's open\n"
	.string "again. I didn't open it. Did you? Battle\l"
	.string "me and we'll call it even.$"

ParcelFloodbasin_Bjorn_Text_1:
# 1059 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Even, then.$"

ParcelFloodbasin_Bjorn_Text_2:
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: MEREHOLT pumped this whole\n"
	.string "basin for twenty years. Then they\l"
	.string "stopped. Then the water came back.\l"
	.string "Then the smell.$"

ParcelFloodbasin_Bjorn_R2_Text_0:
# 1085 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Bjorn_R2_Text_1:
# 1087 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Another time, then.$"

ParcelFloodbasin_Bjorn_R2_Text_2:
# 1091 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: …Fair.$"

ParcelFloodbasin_Bjorn_R2_Text_3:
# 1092 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Bjorn_R3_Text_0:
# 1099 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Bjorn_R3_Text_1:
# 1105 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Noted. Properly, this time.$"

ParcelFloodbasin_Bjorn_R3_Text_2:
# 1106 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Bjorn_R4_Text_0:
# 1113 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Bjorn_R4_Text_1:
# 1119 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Right. That's the whole of it.$"

ParcelFloodbasin_Bjorn_R4_Text_2:
# 1120 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Bjorn_R5_Text_0:
# 1127 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Bjorn_R5_Text_1:
# 1134 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Solveig_Text_0:
# 1140 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Cadet SOLVEIG. HALE said a\n"
	.string "provisional would come through. Spar.\l"
	.string "Then I'll tell you where the stakes are.$"

ParcelFloodbasin_Solveig_Text_1:
# 1141 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Good. The stakes.$"

ParcelFloodbasin_Solveig_Text_2:
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Red cloth stakes are ours. The\n"
	.string "bare ones are the FOUNDATION's. They\l"
	.string "put theirs on the clean bank. We put\l"
	.string "ours where the water is.$"

ParcelFloodbasin_Solveig_R2_Text_0:
# 1167 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelFloodbasin_Solveig_R2_Text_1:
# 1169 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Fine. Same spot.$"

ParcelFloodbasin_Solveig_R2_Text_2:
# 1173 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Solveig_R2_Text_3:
# 1174 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelFloodbasin_Solveig_R3_Text_0:
# 1181 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFloodbasin_Solveig_R3_Text_1:
# 1187 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelFloodbasin_Solveig_R3_Text_2:
# 1188 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelFloodbasin_Solveig_R4_Text_0:
# 1195 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Solveig_R4_Text_1:
# 1201 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelFloodbasin_Solveig_R4_Text_2:
# 1202 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Solveig_R5_Text_0:
# 1209 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_Solveig_R5_Text_1:
# 1216 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Nils_Text_0:
# 1222 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The north meadow's the only dry\n"
	.string "bit. Everyone comes up here. Everyone\l"
	.string "battles.$"

ParcelFloodbasin_Nils_Text_1:
# 1223 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Everyone loses to you,\n"
	.string "apparently.$"

ParcelFloodbasin_Nils_Text_2:
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: My WURMPLE won't eat the reeds\n"
	.string "from the low ground. Only the high. I\l"
	.string "thought they ate anything.$"

ParcelFloodbasin_Nils_R2_Text_0:
# 1249 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Nils_R2_Text_1:
# 1251 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Another time, then.$"

ParcelFloodbasin_Nils_R2_Text_2:
# 1255 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: …Again, then. Later.$"

ParcelFloodbasin_Nils_R2_Text_3:
# 1256 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Nils_R3_Text_0:
# 1263 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Nils_R3_Text_1:
# 1269 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: That's the one I wanted to see.$"

ParcelFloodbasin_Nils_R3_Text_2:
# 1270 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Nils_R4_Text_0:
# 1277 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Nils_R4_Text_1:
# 1284 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Nils_R5_Text_0:
# 1291 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Nils_R5_Text_1:
# 1297 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Noted. Properly, this time.$"

ParcelFloodbasin_Nils_R5_Text_2:
# 1298 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Rannveig_Text_0:
# 1304 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: My GLOOM smells better than\n"
	.string "the basin does. That's a low bar.\l"
	.string "Battle?$"

ParcelFloodbasin_Rannveig_Text_1:
# 1305 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still smells better.$"

ParcelFloodbasin_Rannveig_Text_2:
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: The road north is a haul road.\n"
	.string "Trucks come down it at night. Nobody's\l"
	.string "told us what they haul.$"

ParcelFloodbasin_Rannveig_R2_Text_0:
# 1331 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Rannveig_R2_Text_1:
# 1333 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Fine. Same spot.$"

ParcelFloodbasin_Rannveig_R2_Text_2:
# 1337 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still yours.$"

ParcelFloodbasin_Rannveig_R2_Text_3:
# 1338 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Rannveig_R3_Text_0:
# 1345 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Rannveig_R3_Text_1:
# 1351 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's the one I wanted to\n"
	.string "see.$"

ParcelFloodbasin_Rannveig_R3_Text_2:
# 1352 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: One more in me. After the\n"
	.string "high ground.$"

ParcelFloodbasin_Rannveig_R4_Text_0:
# 1359 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Rannveig_R4_Text_1:
# 1366 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Rannveig_R5_Text_0:
# 1373 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelFloodbasin_Rannveig_R5_Text_1:
# 1379 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Rannveig_R5_Text_2:
# 1380 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Einar_Text_0:
# 1386 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: My MIGHTYENA's the strongest\n"
	.string "thing in the basin. Prove me wrong.$"

ParcelFloodbasin_Einar_Text_1:
# 1387 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Proved.$"

ParcelFloodbasin_Einar_Text_2:
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Strongest thing in the basin.\n"
	.string "Not saying much, these days.$"

ParcelFloodbasin_Einar_R2_Text_0:
# 1413 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Einar_R2_Text_1:
# 1415 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Suit yourself. I'm here.$"

ParcelFloodbasin_Einar_R2_Text_2:
# 1419 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Again, then. Later.$"

ParcelFloodbasin_Einar_R2_Text_3:
# 1420 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Einar_R3_Text_0:
# 1427 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Einar_R3_Text_1:
# 1434 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Einar_R4_Text_0:
# 1441 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Einar_R4_Text_1:
# 1448 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Einar_R5_Text_0:
# 1455 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Einar_R5_Text_1:
# 1461 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Noted. Properly, this time.$"

ParcelFloodbasin_Einar_R5_Text_2:
# 1462 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Sturla_Text_0:
# 1468 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I came for the NUZLEAF. Stayed\n"
	.string "for the rain. Nobody stays for the rain.\l"
	.string "Battle.$"

ParcelFloodbasin_Sturla_Text_1:
# 1469 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Should've left with the\n"
	.string "NUZLEAF.$"

ParcelFloodbasin_Sturla_Text_2:
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: It rains here more than it used\n"
	.string "to. Not more days. More water. Ask\l"
	.string "anyone with a roof.$"

ParcelFloodbasin_Sturla_R2_Text_0:
# 1495 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Sturla_R2_Text_1:
# 1497 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Another time, then.$"

ParcelFloodbasin_Sturla_R2_Text_2:
# 1501 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Still yours.$"

ParcelFloodbasin_Sturla_R2_Text_3:
# 1502 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Sturla_R3_Text_0:
# 1509 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Sturla_R3_Text_1:
# 1515 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Right. That's the whole of it.$"

ParcelFloodbasin_Sturla_R3_Text_2:
# 1516 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Sturla_R4_Text_0:
# 1523 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Sturla_R4_Text_1:
# 1529 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: That's the one I wanted to see.$"

ParcelFloodbasin_Sturla_R4_Text_2:
# 1530 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Sturla_R5_Text_0:
# 1537 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_Sturla_R5_Text_1:
# 1543 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: …Again, then. Later.$"

ParcelFloodbasin_Sturla_R5_Text_2:
# 1544 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Oskar_Text_0:
# 1550 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The puddle field used to be the\n"
	.string "best grazing in the district. Now it's\l"
	.string "the best puddles. Battle.$"

ParcelFloodbasin_Oskar_Text_1:
# 1551 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Best puddles. Worst battle.$"

ParcelFloodbasin_Oskar_Text_2:
# 1566 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The ground here doesn't drain\n"
	.string "anymore. Something underneath it is\l"
	.string "full.$"

ParcelFloodbasin_Oskar_R2_Text_0:
# 1577 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Oskar_R2_Text_1:
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Oskar_R2_Text_2:
# 1583 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: …Again, then. Later.$"

ParcelFloodbasin_Oskar_R2_Text_3:
# 1584 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Oskar_R3_Text_0:
# 1591 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Oskar_R3_Text_1:
# 1597 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Noted. Properly, this time.$"

ParcelFloodbasin_Oskar_R3_Text_2:
# 1598 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Oskar_R4_Text_0:
# 1605 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Oskar_R4_Text_1:
# 1611 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Still yours.$"

ParcelFloodbasin_Oskar_R4_Text_2:
# 1612 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Oskar_R5_Text_0:
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Oskar_R5_Text_1:
# 1626 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_SignHamlet_Text_0:
# 1637 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK\p"
	.string "Flood line marked on the chapel wall.\n"
	.string "Boat times posted at the relief store.$"

ParcelFloodbasin_Checkpoint_Text_0:
# 1650 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Stop there.$"

ParcelFloodbasin_Checkpoint_Text_1:
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Logistics. This is a haul road,\n"
	.string "not a hiking trail. Nobody moves up to\l"
	.string "the river neck on my road without\l"
	.string "clearing me first.\p"
	.string "MIRREN cleared you? MIRREN clears\n"
	.string "anyone who can read. I need people who\l"
	.string "can carry.$"

ParcelFloodbasin_Checkpoint_Text_2:
# 1657 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Though the stakes say you read.\n"
	.string "Prove it quick. The basin runs brown\l"
	.string "after a pulse.\p"
	.string "Brown's lake water stirred up, is it?$"

ParcelFloodbasin_Checkpoint_Text_3:
# 1659 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Lake water's grey. Brown is soil,\n"
	.string "off the banks they cut upstream. The\l"
	.string "lake gets the blame because the lake\l"
	.string "can't argue.\p"
	.string "Carry, then. Reading you'll learn on the\n"
	.string "road, same as the rest of us.$"

ParcelFloodbasin_Checkpoint_Text_4:
# 1661 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Soil. Upstream soil, off the cut\n"
	.string "banks. Lake water's grey. Hm. You did\l"
	.string "read the stakes.\p"
	.string "Now carry.$"

ParcelFloodbasin_Checkpoint_Text_5:
# 1664 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry weight.\n"
	.string "Move up.$"

ParcelFloodbasin_Checkpoint_Text_6:
# 1667 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Quarry clearance. Logs you fit\n"
	.string "to move earth on division ground. Tool's\l"
	.string "bonded to it.$"

ParcelFloodbasin_Checkpoint_Text_7:
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: ROCK SMASH. The slide past me's\n"
	.string "been there since spring. Nobody's\l"
	.string "cleared it because nobody's needed to\l"
	.string "go up.\p"
	.string "Mind the loads coming down. They don't\n"
	.string "stop for paperwork.$"

ParcelFloodbasin_GymBreen_Text_0:
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Cleared. The neck's open to you.\n"
	.string "Mind the loads coming down.$"

ParcelFloodbasin_T_Anders_Text_0:
# 1694 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The MASQUERAIN by the lake\n"
	.string "have wings like oil on water. Pretty.\l"
	.string "Battle!$"

ParcelFloodbasin_T_Anders_Text_1:
# 1695 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Pretty and useless.$"

ParcelFloodbasin_T_Anders_Text_2:
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Oil on water. I said it as a\n"
	.string "compliment. Then I saw the lake.$"

ParcelFloodbasin_T_Anders_R2_Text_0:
# 1721 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_T_Anders_R2_Text_1:
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Fine. Same spot.$"

ParcelFloodbasin_T_Anders_R2_Text_2:
# 1727 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Noted. Properly, this time.$"

ParcelFloodbasin_T_Anders_R2_Text_3:
# 1728 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_T_Anders_R3_Text_0:
# 1735 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelFloodbasin_T_Anders_R3_Text_1:
# 1741 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Right. That's the whole of it.$"

ParcelFloodbasin_T_Anders_R3_Text_2:
# 1742 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Anders_R4_Text_0:
# 1749 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_T_Anders_R4_Text_1:
# 1755 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Still yours.$"

ParcelFloodbasin_T_Anders_R4_Text_2:
# 1756 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Anders_R5_Text_0:
# 1763 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Anders_R5_Text_1:
# 1770 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Roald_Text_0:
# 1776 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Camped on the one dry rise in\n"
	.string "the puddle field. Room for one. Battle\l"
	.string "for it.$"

ParcelFloodbasin_T_Roald_Text_1:
# 1777 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Room for two, I suppose.$"

ParcelFloodbasin_T_Roald_Text_2:
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The puddles join up in spring.\n"
	.string "Then it's not a field. Then the\l"
	.string "councilman's boat comes. Then the\l"
	.string "puddles go. Then it's a field. It's a\l"
	.string "cycle, he says.$"

ParcelFloodbasin_T_Roald_R2_Text_0:
# 1803 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_T_Roald_R2_Text_1:
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Another time, then.$"

ParcelFloodbasin_T_Roald_R2_Text_2:
# 1809 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Fair.$"

ParcelFloodbasin_T_Roald_R2_Text_3:
# 1810 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Roald_R3_Text_0:
# 1817 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_T_Roald_R3_Text_1:
# 1824 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_T_Roald_R4_Text_0:
# 1831 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Roald_R4_Text_1:
# 1837 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Again, then. Later.$"

ParcelFloodbasin_T_Roald_R4_Text_2:
# 1838 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Roald_R5_Text_0:
# 1845 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Roald_R5_Text_1:
# 1851 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Noted. Properly, this time.$"

ParcelFloodbasin_T_Roald_R5_Text_2:
# 1852 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Stein_Text_0:
# 1858 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You swam out here? Into THIS?\n"
	.string "Battle. Then get out of the water,\l"
	.string "seriously.$"

ParcelFloodbasin_T_Stein_Text_1:
# 1859 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Seriously. Out.$"

ParcelFloodbasin_T_Stein_Text_2:
# 1874 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: I swim the lake for the\n"
	.string "FOUNDATION. Sampling. The samples go to\l"
	.string "the coast. The results don't come back.$"

ParcelFloodbasin_T_Stein_R2_Text_0:
# 1885 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_T_Stein_R2_Text_1:
# 1887 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: No hurry. The water keeps.$"

ParcelFloodbasin_T_Stein_R2_Text_2:
# 1891 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Still yours.$"

ParcelFloodbasin_T_Stein_R2_Text_3:
# 1892 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Stein_R3_Text_0:
# 1899 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_T_Stein_R3_Text_1:
# 1905 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Again, then. Later.$"

ParcelFloodbasin_T_Stein_R3_Text_2:
# 1906 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Stein_R4_Text_0:
# 1913 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Stein_R4_Text_1:
# 1920 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_T_Stein_R5_Text_0:
# 1927 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_T_Stein_R5_Text_1:
# 1933 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Fair.$"

ParcelFloodbasin_T_Stein_R5_Text_2:
# 1934 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Epilogue_Text_0:
# 1943 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK. The relief tent is gone. The\n"
	.string "sandbags are stacked where DORSEY's\l"
	.string "photographer stood.\p"
	.string "Phase 2 goes ahead. Dry sheds, like\n"
	.string "PERRIN said. The next pulse will come\l"
	.string "from somewhere, and now there's a page\l"
	.string "that says where.$"

ParcelFloodbasin_Epilogue_Text_1:
# 1944 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE's roof has a man on it.\n"
	.string "Thursday. He is not the FOUNDATION's\l"
	.string "and the ladder is his own.\p"
	.string "In the basin the water runs grey after\n"
	.string "a pulse now, not brown. It isn't clean.\l"
	.string "It's honest, which is further than it\l"
	.string "had got in twenty-two years.$"

ParcelFloodbasin_GymBreen_Rematch_Text_0:
# 1956 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Carry weight, you said. I'm\n"
	.string "asking again, heavier.\p"
	.string "Nothing to clear. Just me, the whole\n"
	.string "crew's worth. Yes?$"

ParcelFloodbasin_GymBreen_Rematch_Text_1:
# 1958 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Mind the loads, then.$"

ParcelFloodbasin_GymBreen_Rematch_Text_2:
# 1962 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry it.$"

ParcelFloodbasin_GymBreen_Rematch_Text_3:
# 1963 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Any time the loads are down. Mind\n"
	.string "them.$"

ParcelFloodbasin_TarpRoof_Text_0:
# 1972 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A blue tarp weighted with stones over\n"
	.string "half a roof. Four Thursdays of weather\l"
	.string "on it.\p"
	.string "The stones have shifted. Somebody\n"
	.string "re-stacks them every morning.$"

ParcelFloodbasin_MarkA_Text_0:
# 1979 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line a hand above the sill, on\n"
	.string "the house beside the relief tent. You\l"
	.string "scrape it into a vial. It smells of the\l"
	.string "lake, and of something that is not the\l"
	.string "lake.\p"
	.string "Sample one.$"

ParcelFloodbasin_MarkA_Text_1:
# 1983 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line on the wall, a hand above\n"
	.string "the sill. The flood's signature.$"

ParcelFloodbasin_MarkB_Text_0:
# 1989 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The second mark, on the hamlet wall,\n"
	.string "higher than the first. The scrape comes\l"
	.string "away greasy.\p"
	.string "Sample two.$"

ParcelFloodbasin_MarkB_Text_1:
# 1993 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line on the hamlet wall, higher\n"
	.string "than the one by the tent.$"

ParcelFloodbasin_MarkC_Text_0:
# 1999 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The third mark, on the house with the\n"
	.string "tarp roof, highest of all. Under the\l"
	.string "brown there is a sheen like the one on\l"
	.string "the water by the booth.\p"
	.string "Sample three.$"

ParcelFloodbasin_MarkC_Text_1:
# 2003 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line under the tarp roof's\n"
	.string "eaves, highest of the three.$"

ParcelFloodbasin_SurveyStake_Text_0:
# 2009 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A survey stake by the hamlet sign, red\n"
	.string "cloth at the top, the cloth gone pale on\l"
	.string "the side the floods come from.$"

ParcelFloodbasin_SurveyStake_Text_1:
# 2014 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Second reading. The works are fenced\n"
	.string "and a pump runs inside the fence. The\l"
	.string "basin runs grey after a pulse now, not\l"
	.string "brown.\p"
	.string "STRESSED, not COLLAPSING. The first\n"
	.string "time a word on this stake has moved the\l"
	.string "right way. You write it and do not\l"
	.string "underline it.$"

ParcelFloodbasin_PairBlankets_Text_0:
# 2025 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: Thursday. The roof. Nine\n"
	.string "years of Thursdays and this one a man\l"
	.string "came.$"

ParcelFloodbasin_PairBlankets_Text_1:
# 2026 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: Because the works are\n"
	.string "'under active remediation' now.\l"
	.string "Capitals. There's a sign.$"

ParcelFloodbasin_PairBlankets_Text_2:
# 2027 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: There was always a sign.$"

ParcelFloodbasin_PairBlankets_Text_3:
# 2028 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: There's a fence round the\n"
	.string "sign now, and a man inside the fence\l"
	.string "with a pump. Small things. I'll take small\l"
	.string "things.$"

ParcelFloodbasin_PairBlankets_Text_4:
# 2030 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: The ranger's stake by the\n"
	.string "hamlet sign. People stop at it now. Read\l"
	.string "what it says and go on.$"

ParcelFloodbasin_PairBlankets_Text_5:
# 2031 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: What does it say?$"

ParcelFloodbasin_PairBlankets_Text_6:
# 2032 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: It says what we've all said,\n"
	.string "in order, with the dates. That's all.\l"
	.string "Somehow that's the thing nobody had\l"
	.string "done.$"

ParcelFloodbasin_PairBlankets_Text_7:
# 2033 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: DORSEY read it. He read it\n"
	.string "twice and then he smiled at me. I didn't\l"
	.string "like the second smile.$"

ParcelFloodbasin_PairBlankets_Text_8:
# 2035 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: Third blanket in two years.\n"
	.string "I've a drawer of FOUNDATION blankets. I\l"
	.string "could open a shop.$"

ParcelFloodbasin_PairBlankets_Text_9:
# 2036 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: Don't say that where the\n"
	.string "aide can hear. He'll write down that\l"
	.string "you're grateful.$"

ParcelFloodbasin_PairBlankets_Text_10:
# 2037 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: I am grateful. For the\n"
	.string "blanket. It's a good blanket.$"

ParcelFloodbasin_PairBlankets_Text_11:
# 2038 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: It's the water I'd like a\n"
	.string "word about. Nobody's handing out any of\l"
	.string "that.$"

ParcelFloodbasin_PairBoat_Text_0:
# 2047 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Last run tonight. The\n"
	.string "FOUNDATION's pulled the boat. 'Needs\l"
	.string "have been reassessed.'$"

ParcelFloodbasin_PairBoat_Text_1:
# 2048 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: The road's clear. We don't need the\n"
	.string "boat.$"

ParcelFloodbasin_PairBoat_Text_2:
# 2049 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: We never needed the boat. We\n"
	.string "needed the road clear. Took nine years\l"
	.string "and a hearing to say it in that order.$"

ParcelFloodbasin_PairBoat_Text_3:
# 2050 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: What'll you do?$"

ParcelFloodbasin_PairBoat_Text_4:
# 2051 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Row. I did before. The river's\n"
	.string "still there, whoever's paying.$"

ParcelFloodbasin_PairBoat_Text_5:
# 2053 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: The ranger wouldn't take the free\n"
	.string "boat. Walked the road both ways with\l"
	.string "the water up to the knee.$"

ParcelFloodbasin_PairBoat_Text_6:
# 2054 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Rangers are paid to be\n"
	.string "difficult.$"

ParcelFloodbasin_PairBoat_Text_7:
# 2055 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: A third of them by the FOUNDATION,\n"
	.string "the poster says.$"

ParcelFloodbasin_PairBoat_Text_8:
# 2056 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: You've been reading posters.\n"
	.string "That's how it starts. Get in the boat.$"

ParcelFloodbasin_PairBoat_Text_9:
# 2058 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: FOUNDATION's boat. Twice a\n"
	.string "day to FERNWICK. Nobody pays.$"

ParcelFloodbasin_PairBoat_Text_10:
# 2059 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: Then who pays you?$"

ParcelFloodbasin_PairBoat_Text_11:
# 2060 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: The FOUNDATION. I just said.$"

ParcelFloodbasin_PairBoat_Text_12:
# 2061 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: And who pays the FOUNDATION?$"

ParcelFloodbasin_PairBoat_Text_13:
# 2062 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: …Get in the boat.$"

ParcelFloodbasin_Stringer_Text_0:
# 2074 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: The works are fenced and\n"
	.string "there's a man inside the fence with a\l"
	.string "pump. I ran a photograph of the pump.\p"
	.string "A pump is not a story. In Leirvik, after\n"
	.string "twenty-two years, a pump is the story.\l"
	.string "The editor didn't argue. He's from here.$"

ParcelFloodbasin_Stringer_Text_1:
# 2076 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: Your stake by the hamlet sign\n"
	.string "made the paper. Not the words -- the\l"
	.string "photograph. People standing in a row\l"
	.string "reading a stick.\p"
	.string "It did better than the Commissioner\n"
	.string "with the blanket. He noticed. He asked\l"
	.string "me which photographer. I said the same\l"
	.string "one as always. He didn't like that\l"
	.string "either.$"

ParcelFloodbasin_Stringer_Text_2:
# 2078 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: Third flood, third relief line,\n"
	.string "third photograph of the Commissioner\l"
	.string "handing a child a blanket. I've got a\l"
	.string "drawer of them.\p"
	.string "Different child each time. Same blanket.\n"
	.string "I've never been allowed to print that\l"
	.string "sentence. I'm saying it to you so it\l"
	.string "exists somewhere.$"

ParcelFloodbasin_WellWoman_Text_0:
# 2090 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. I say it to\n"
	.string "myself when the aide comes round with\l"
	.string "the blankets. It helps, a little.$"

ParcelFloodbasin_WellWoman_Text_1:
# 2093 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. Where did\n"
	.string "you think it went.\p"
	.string "That's what he wouldn't say. I'd like to\n"
	.string "hit something. Here; I've no use for\l"
	.string "these now.$"

ParcelFloodbasin_WellWoman_Text_2:
# 2097 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: The pump house plate. Up at the\n"
	.string "works, on the wall. Brass, I'm told.$"

ParcelFloodbasin_WellWoman_Text_3:
# 2100 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: The works up the basin. There's a\n"
	.string "plate on the pump house. My husband\l"
	.string "read it once and came home and wouldn't\l"
	.string "say what it said.\p"
	.string "You read things for a living. Read me\n"
	.string "the plate.$"

ParcelFloodbasin_FindDeadline_Text_0:
# 2111 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The top of the line. MAGIKARP, mostly,\n"
	.string "pale, lying where the pulse left them,\l"
	.string "and the last one is past the big stone\l"
	.string "that nobody has ever had to use as a\l"
	.string "marker before.\p"
	.string "You put a stake of reed in the mud\n"
	.string "beside it, because there is no cloth,\l"
	.string "and because somebody should.$"

ParcelFloodbasin_FindDeadline_Text_1:
# 2114 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A reed stake in the mud beside a big\n"
	.string "stone. The line reached here this year.\l"
	.string "The reed is bending already.$"

ParcelFloodbasin_PairBank_Text_0:
# 2122 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Grey, not brown. The sheets.\n"
	.string "It's not clean. It's honest.$"

ParcelFloodbasin_PairBank_Text_1:
# 2123 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: You sound like the ranger.$"

ParcelFloodbasin_PairBank_Text_2:
# 2124 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: The ranger sounds like my\n"
	.string "washing book. We've all been saying the\l"
	.string "same thing for twenty years in\l"
	.string "different places. Now it's in one place.$"

ParcelFloodbasin_PairBank_Text_3:
# 2126 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: The ranger's stake by the\n"
	.string "sign has the dates of every pulse on it.\l"
	.string "Every one. I've been on this water\l"
	.string "twenty years and I couldn't have told\l"
	.string "you the dates.$"

ParcelFloodbasin_PairBank_Text_4:
# 2127 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: I could. They're in my\n"
	.string "washing book.$"

ParcelFloodbasin_PairBank_Text_5:
# 2128 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: You never said.$"

ParcelFloodbasin_PairBank_Text_6:
# 2129 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Nobody asked the\n"
	.string "laundress. The ranger did.$"

ParcelFloodbasin_PairBank_Text_7:
# 2131 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Third wash this month and\n"
	.string "the sheets come up brown.$"

ParcelFloodbasin_PairBank_Text_8:
# 2132 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: Hang them in the hall. The\n"
	.string "Commissioner's photographer won't want\l"
	.string "brown sheets behind the blankets.$"

ParcelFloodbasin_PairBank_Text_9:
# 2133 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: That's exactly where I'm\n"
	.string "hanging them.$"

ParcelFloodbasin_PairBank_Text_10:
# 2134 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: …Good.$"

ParcelFloodbasin_Board1_Text_0:
# 2143 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD at the basin edge. THE\n"
	.string "FLOODBASIN. The marsh filters the\l"
	.string "water for everything downstream; that\l"
	.string "is its work and the reason it is here.\p"
	.string "The CROAGUNK carry two poisons, their\n"
	.string "own and the one they drink. The Survey\l"
	.string "tests the CROAGUNK to test the water.\l"
	.string "The result is one word a year. Six words.\l"
	.string "None of them is clean.$"

ParcelFloodbasin_Board2_Text_0:
# 2148 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD by the relief tents.\n"
	.string "Deformity count, POLIWAG, spring sample\l"
	.string "of one hundred, in a column down the\l"
	.string "board: 0, 0, 1, 0, 3, 4, 7, 9.\p"
	.string "A sign beside the board says the site is\n"
	.string "being remediated. The board does not\l"
	.string "argue with the sign. It is a column of\l"
	.string "numbers.$"
