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
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_Dorsey_2
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Dorsey_5
# 119 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 120 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Dorsey_8
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_3, MSGBOX_DEFAULT
# 128 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_2:
# 110 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_0, MSGBOX_DEFAULT
# 111 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_5:
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_1, MSGBOX_DEFAULT
# 116 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_8:
# 123 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_2, MSGBOX_DEFAULT
# 124 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide1::
# 132 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_Aide1_2
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide1_5
# 144 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Aide1_8
# 149 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_3, MSGBOX_DEFAULT
# 150 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_2:
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_0, MSGBOX_DEFAULT
# 136 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_5:
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_1, MSGBOX_DEFAULT
# 141 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_8:
# 145 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_2, MSGBOX_DEFAULT
# 146 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide2::
# 154 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 155 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_Aide2_2
# 161 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide2_5
# 166 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Aide2_8
# 171 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_3, MSGBOX_DEFAULT
# 172 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_2:
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_5:
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_1, MSGBOX_DEFAULT
# 163 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_8:
# 167 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_2, MSGBOX_DEFAULT
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilOldWoman::
# 176 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 177 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 178 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilOldWoman_3
ParcelFloodbasin_VilOldWoman_1:
# 183 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasin_VilOldWoman_7
# 188 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_FOUND, ParcelFloodbasin_VilOldWoman_10
# 193 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF, ParcelFloodbasin_VilOldWoman_13
# 198 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_16
# 204 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilOldWoman_19
# 209 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_22
# 214 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_7, MSGBOX_DEFAULT
# 215 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_2:
# 179 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_0, MSGBOX_DEFAULT
# 180 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_3:
# 178 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasin_VilOldWoman_2
	goto ParcelFloodbasin_VilOldWoman_1

ParcelFloodbasin_VilOldWoman_7:
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_1, MSGBOX_DEFAULT
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_10:
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_2, MSGBOX_DEFAULT
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_13:
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_3, MSGBOX_DEFAULT
# 195 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_16:
# 199 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_4, MSGBOX_DEFAULT
# 200 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_19:
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_5, MSGBOX_DEFAULT
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_22:
# 210 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_6, MSGBOX_DEFAULT
# 211 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilMan::
# 219 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 220 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 221 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilMan_3
ParcelFloodbasin_VilMan_1:
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_VilMan_8
ParcelFloodbasin_VilMan_6:
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilMan_12
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_22
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_VilMan_28
# 265 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_11, MSGBOX_DEFAULT
# 266 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_2:
# 222 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_0, MSGBOX_DEFAULT
# 223 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_3:
# 221 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_2
	goto ParcelFloodbasin_VilMan_1

ParcelFloodbasin_VilMan_7:
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_VilMan_17
ParcelFloodbasin_VilMan_14:
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_4, MSGBOX_DEFAULT
# 237 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_VilMan_25
ParcelFloodbasin_VilMan_24:
# 240 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_VilMan_31
ParcelFloodbasin_VilMan_30:
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_VilMan_34
ParcelFloodbasin_VilMan_33:
# 246 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_8:
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_7
	goto ParcelFloodbasin_VilMan_6

ParcelFloodbasin_VilMan_12:
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_8, MSGBOX_DEFAULT
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_15:
# 228 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_1, MSGBOX_DEFAULT
# 229 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_2, MSGBOX_DEFAULT
# 230 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_MAX_ELIXIR
# 231 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_DONE
# 232 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_3, MSGBOX_DEFAULT
# 233 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_16:
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_VilMan_15
	goto ParcelFloodbasin_VilMan_14

ParcelFloodbasin_VilMan_17:
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_VilMan_16
	goto ParcelFloodbasin_VilMan_14

ParcelFloodbasin_VilMan_22:
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_9, MSGBOX_DEFAULT
# 256 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN
# 257 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_25:
# 238 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_5, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_24

ParcelFloodbasin_VilMan_28:
# 261 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_10, MSGBOX_DEFAULT
# 262 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_31:
# 241 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_6, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_30

ParcelFloodbasin_VilMan_34:
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_7, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_33


ParcelFloodbasin_VilGirl::
# 270 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 271 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 272 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilGirl_2
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilGirl_5
# 282 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_VilGirl_8
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_3, MSGBOX_DEFAULT
# 288 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_2:
# 273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_5:
# 278 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_8:
# 283 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_2, MSGBOX_DEFAULT
# 284 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilFisher::
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 293 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 294 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilFisher_3
ParcelFloodbasin_VilFisher_1:
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE, ParcelFloodbasin_VilFisher_10
ParcelFloodbasin_VilFisher_9:
# 309 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_8
# 315 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilFisher_14
# 320 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_VilFisher_21
# 325 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_6, MSGBOX_DEFAULT
# 326 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_2:
# 295 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_0, MSGBOX_DEFAULT
# 296 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_3:
# 294 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_2
	goto ParcelFloodbasin_VilFisher_1

ParcelFloodbasin_VilFisher_7:
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE_FOUND, ParcelFloodbasin_VilFisher_17
# 305 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_2, MSGBOX_DEFAULT
ParcelFloodbasin_VilFisher_16:
# 307 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_8:
# 310 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_3, MSGBOX_DEFAULT
# 311 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE
# 312 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_10:
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_7
	goto ParcelFloodbasin_VilFisher_9

ParcelFloodbasin_VilFisher_14:
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_4, MSGBOX_DEFAULT
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_17:
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_1, MSGBOX_DEFAULT
# 302 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_ANTIDOTE, 3
# 303 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE_DONE
	goto ParcelFloodbasin_VilFisher_16

ParcelFloodbasin_VilFisher_21:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_5, MSGBOX_DEFAULT
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Discharge::
# 332 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 333 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 334 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 335 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 341 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 342 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 347 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 348 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 349 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 350 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 351 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 358 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 352 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 353 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 362 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 365 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 366 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 372 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 373 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 367 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 368 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 379 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 380 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 381 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 382 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 383 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 384 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 388 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 389 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 390 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 391 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 392 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 399 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 404 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 407 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 408 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 409 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 414 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 417 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 419 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 420 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_8, MSGBOX_DEFAULT
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 423 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 424 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_9, MSGBOX_DEFAULT
# 425 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_10, ParcelFloodbasin_Remediator_Text_11
# 428 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_12, MSGBOX_DEFAULT
# 429 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 430 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 410 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 411 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 436 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1, ParcelFloodbasin_BasinKidTrainer_FirstWin
# 440 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_3
ParcelFloodbasin_BasinKidTrainer_1:
# 444 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_8
ParcelFloodbasin_BasinKidTrainer_6:
# 447 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_13
ParcelFloodbasin_BasinKidTrainer_11:
# 450 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_18
ParcelFloodbasin_BasinKidTrainer_16:
# 453 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_BasinKidTrainer_2:
# 442 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_3:
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R2
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_7:
# 445 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R3
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_8:
# 444 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R3
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_7
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_12:
# 448 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R4
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_13:
# 447 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R4
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_12
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_17:
# 451 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R5
	goto ParcelFloodbasin_BasinKidTrainer_16

ParcelFloodbasin_BasinKidTrainer_18:
# 450 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R5
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_17
	goto ParcelFloodbasin_BasinKidTrainer_16


ParcelFloodbasin_BasinKidTrainer_FirstWin::
# 457 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
# 458 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R2::
# 462 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 463 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 464 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_0, MSGBOX_YESNO
# 465 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R2_2
# 470 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R2, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 471 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_3, MSGBOX_DEFAULT
# 472 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R2_2:
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 467 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R3::
# 476 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 477 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 478 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_0, MSGBOX_YESNO
# 479 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R3_2
# 484 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R3, ParcelFloodbasin_BasinKidTrainer_R3_Text_1
# 485 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_2, MSGBOX_DEFAULT
# 486 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R3_2:
# 480 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 481 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R4::
# 490 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 491 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 492 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_0, MSGBOX_YESNO
# 493 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R4_2
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R4, ParcelFloodbasin_BasinKidTrainer_R4_Text_1
# 499 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_2, MSGBOX_DEFAULT
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R4_2:
# 494 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 495 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R5::
# 504 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 505 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 506 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_0, MSGBOX_YESNO
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R5_2
# 512 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R5, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 513 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_1, MSGBOX_DEFAULT
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R5_2:
# 508 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 509 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve::
# 518 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ARVE, ParcelFloodbasin_Arve_Text_0, ParcelFloodbasin_Arve_Text_1, ParcelFloodbasin_Arve_FirstWin
# 522 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 523 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Arve_3
ParcelFloodbasin_Arve_1:
# 526 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Arve_8
ParcelFloodbasin_Arve_6:
# 529 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Arve_13
ParcelFloodbasin_Arve_11:
# 532 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Arve_18
ParcelFloodbasin_Arve_16:
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Arve_2:
# 524 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_3:
# 523 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R2
	goto_if 0, ParcelFloodbasin_Arve_2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_7:
# 527 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R3
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_8:
# 526 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R3
	goto_if 0, ParcelFloodbasin_Arve_7
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_12:
# 530 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R4
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_13:
# 529 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R4
	goto_if 0, ParcelFloodbasin_Arve_12
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_17:
# 533 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R5
	goto ParcelFloodbasin_Arve_16

ParcelFloodbasin_Arve_18:
# 532 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R5
	goto_if 0, ParcelFloodbasin_Arve_17
	goto ParcelFloodbasin_Arve_16


ParcelFloodbasin_Arve_FirstWin::
# 539 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
# 540 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R2::
# 544 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 545 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 546 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_0, MSGBOX_YESNO
# 547 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R2_2
# 552 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R2, ParcelFloodbasin_Arve_R2_Text_2
# 553 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_3, MSGBOX_DEFAULT
# 554 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R2_2:
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 549 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R3::
# 558 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 559 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 560 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_0, MSGBOX_YESNO
# 561 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R3_2
# 566 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R3, ParcelFloodbasin_Arve_R3_Text_1
# 567 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_2, MSGBOX_DEFAULT
# 568 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R3_2:
# 562 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 563 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R4::
# 572 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 573 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 574 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_0, MSGBOX_YESNO
# 575 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R4_2
# 580 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R4, ParcelFloodbasin_Arve_R3_Text_1
# 581 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_1, MSGBOX_DEFAULT
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R4_2:
# 576 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 577 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R5::
# 586 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 587 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 588 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_0, MSGBOX_YESNO
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R5_2
# 594 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R5, ParcelFloodbasin_Arve_R5_Text_1
# 595 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_2, MSGBOX_DEFAULT
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R5_2:
# 590 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 591 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai::
# 600 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_KAI, ParcelFloodbasin_Kai_Text_0, ParcelFloodbasin_Kai_Text_1, ParcelFloodbasin_Kai_FirstWin
# 604 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 605 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Kai_3
ParcelFloodbasin_Kai_1:
# 608 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Kai_8
ParcelFloodbasin_Kai_6:
# 611 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Kai_13
ParcelFloodbasin_Kai_11:
# 614 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Kai_18
ParcelFloodbasin_Kai_16:
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Kai_2:
# 606 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_3:
# 605 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R2
	goto_if 0, ParcelFloodbasin_Kai_2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_7:
# 609 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R3
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_8:
# 608 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R3
	goto_if 0, ParcelFloodbasin_Kai_7
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_12:
# 612 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R4
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_13:
# 611 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R4
	goto_if 0, ParcelFloodbasin_Kai_12
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_17:
# 615 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R5
	goto ParcelFloodbasin_Kai_16

ParcelFloodbasin_Kai_18:
# 614 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R5
	goto_if 0, ParcelFloodbasin_Kai_17
	goto ParcelFloodbasin_Kai_16


ParcelFloodbasin_Kai_FirstWin::
# 621 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
# 622 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R2::
# 626 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 627 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 628 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_0, MSGBOX_YESNO
# 629 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R2_2
# 634 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R2, ParcelFloodbasin_Kai_R2_Text_2
# 635 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_3, MSGBOX_DEFAULT
# 636 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R2_2:
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 631 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R3::
# 640 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 641 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 642 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_0, MSGBOX_YESNO
# 643 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R3_2
# 648 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R3, ParcelFloodbasin_Kai_R3_Text_1
# 649 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_2, MSGBOX_DEFAULT
# 650 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R3_2:
# 644 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 645 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R4::
# 654 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 655 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 656 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_0, MSGBOX_YESNO
# 657 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R4_2
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R4, ParcelFloodbasin_Kai_R4_Text_1
# 663 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_2, MSGBOX_DEFAULT
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R4_2:
# 658 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 659 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R5::
# 668 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 669 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 670 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_0, MSGBOX_YESNO
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R5_2
# 676 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R5, ParcelFloodbasin_Kai_R5_Text_1
# 677 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_2, MSGBOX_DEFAULT
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R5_2:
# 672 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 673 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe::
# 682 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SIGNE, ParcelFloodbasin_Signe_Text_0, ParcelFloodbasin_Signe_Text_1, ParcelFloodbasin_Signe_FirstWin
# 686 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 687 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Signe_3
ParcelFloodbasin_Signe_1:
# 690 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Signe_8
ParcelFloodbasin_Signe_6:
# 693 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Signe_13
ParcelFloodbasin_Signe_11:
# 696 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Signe_18
ParcelFloodbasin_Signe_16:
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Signe_2:
# 688 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_3:
# 687 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R2
	goto_if 0, ParcelFloodbasin_Signe_2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_7:
# 691 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R3
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_8:
# 690 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R3
	goto_if 0, ParcelFloodbasin_Signe_7
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_12:
# 694 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R4
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_13:
# 693 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R4
	goto_if 0, ParcelFloodbasin_Signe_12
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_17:
# 697 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R5
	goto ParcelFloodbasin_Signe_16

ParcelFloodbasin_Signe_18:
# 696 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R5
	goto_if 0, ParcelFloodbasin_Signe_17
	goto ParcelFloodbasin_Signe_16


ParcelFloodbasin_Signe_FirstWin::
# 703 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
# 704 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R2::
# 708 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 709 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 710 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_0, MSGBOX_YESNO
# 711 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R2_2
# 716 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R2, ParcelFloodbasin_Signe_R2_Text_2
# 717 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_3, MSGBOX_DEFAULT
# 718 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R2_2:
# 712 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 713 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R3::
# 722 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 723 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 724 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_0, MSGBOX_YESNO
# 725 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R3_2
# 730 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R3, ParcelFloodbasin_Signe_R3_Text_1
# 731 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_2, MSGBOX_DEFAULT
# 732 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R3_2:
# 726 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 727 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R4::
# 736 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 737 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 738 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_0, MSGBOX_YESNO
# 739 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R4_2
# 744 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R4, ParcelFloodbasin_Signe_R3_Text_1
# 745 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_1, MSGBOX_DEFAULT
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R4_2:
# 740 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 741 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R5::
# 750 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 751 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 752 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_0, MSGBOX_YESNO
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R5_2
# 758 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R5, ParcelFloodbasin_Signe_R5_Text_1
# 759 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_2, MSGBOX_DEFAULT
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R5_2:
# 754 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 755 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif::
# 764 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_LEIF, ParcelFloodbasin_Leif_Text_0, ParcelFloodbasin_Leif_Text_1, ParcelFloodbasin_Leif_FirstWin
# 768 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 769 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Leif_3
ParcelFloodbasin_Leif_1:
# 772 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Leif_8
ParcelFloodbasin_Leif_6:
# 775 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Leif_13
ParcelFloodbasin_Leif_11:
# 778 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Leif_18
ParcelFloodbasin_Leif_16:
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Leif_2:
# 770 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_3:
# 769 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R2
	goto_if 0, ParcelFloodbasin_Leif_2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_7:
# 773 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R3
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_8:
# 772 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R3
	goto_if 0, ParcelFloodbasin_Leif_7
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_12:
# 776 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R4
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_13:
# 775 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R4
	goto_if 0, ParcelFloodbasin_Leif_12
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_17:
# 779 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R5
	goto ParcelFloodbasin_Leif_16

ParcelFloodbasin_Leif_18:
# 778 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R5
	goto_if 0, ParcelFloodbasin_Leif_17
	goto ParcelFloodbasin_Leif_16


ParcelFloodbasin_Leif_FirstWin::
# 785 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
# 786 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R2::
# 790 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 791 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 792 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_0, MSGBOX_YESNO
# 793 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R2_2
# 798 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R2, ParcelFloodbasin_Leif_R2_Text_2
# 799 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_3, MSGBOX_DEFAULT
# 800 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R2_2:
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 795 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R3::
# 804 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 805 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 806 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_0, MSGBOX_YESNO
# 807 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R3_2
# 812 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R3, ParcelFloodbasin_Leif_R3_Text_1
# 813 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_2, MSGBOX_DEFAULT
# 814 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R3_2:
# 808 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 809 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R4::
# 818 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 819 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 820 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_0, MSGBOX_YESNO
# 821 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R4_2
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R4, ParcelFloodbasin_Leif_R4_Text_1
# 827 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_2, MSGBOX_DEFAULT
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R4_2:
# 822 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 823 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R5::
# 832 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 833 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 834 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_0, MSGBOX_YESNO
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R5_2
# 840 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R5, ParcelFloodbasin_Leif_R3_Text_1
# 841 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_1, MSGBOX_DEFAULT
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R5_2:
# 836 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 837 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls::
# 846 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_TRULS, ParcelFloodbasin_Truls_Text_0, ParcelFloodbasin_Truls_Text_1, ParcelFloodbasin_Truls_FirstWin
# 850 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 851 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Truls_3
ParcelFloodbasin_Truls_1:
# 854 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Truls_8
ParcelFloodbasin_Truls_6:
# 857 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Truls_13
ParcelFloodbasin_Truls_11:
# 860 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Truls_18
ParcelFloodbasin_Truls_16:
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Truls_2:
# 852 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_3:
# 851 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R2
	goto_if 0, ParcelFloodbasin_Truls_2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_7:
# 855 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R3
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_8:
# 854 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R3
	goto_if 0, ParcelFloodbasin_Truls_7
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_12:
# 858 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R4
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_13:
# 857 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R4
	goto_if 0, ParcelFloodbasin_Truls_12
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_17:
# 861 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R5
	goto ParcelFloodbasin_Truls_16

ParcelFloodbasin_Truls_18:
# 860 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R5
	goto_if 0, ParcelFloodbasin_Truls_17
	goto ParcelFloodbasin_Truls_16


ParcelFloodbasin_Truls_FirstWin::
# 867 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
# 868 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R2::
# 872 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 873 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 874 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_0, MSGBOX_YESNO
# 875 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R2_2
# 880 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R2, ParcelFloodbasin_Truls_R2_Text_2
# 881 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_3, MSGBOX_DEFAULT
# 882 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R2_2:
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 877 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R3::
# 886 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 887 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 888 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_0, MSGBOX_YESNO
# 889 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R3_2
# 894 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R3, ParcelFloodbasin_Truls_R3_Text_1
# 895 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_2, MSGBOX_DEFAULT
# 896 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R3_2:
# 890 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 891 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R4::
# 900 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 901 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 902 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_0, MSGBOX_YESNO
# 903 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R4_2
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R4, ParcelFloodbasin_Truls_R4_Text_1
# 909 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_2, MSGBOX_DEFAULT
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R4_2:
# 904 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 905 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R5::
# 914 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 915 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 916 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_0, MSGBOX_YESNO
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R5_2
# 922 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R5, ParcelFloodbasin_Truls_R5_Text_1
# 923 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_2, MSGBOX_DEFAULT
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R5_2:
# 918 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 919 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor::
# 928 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_HALVOR, ParcelFloodbasin_Halvor_Text_0, ParcelFloodbasin_Halvor_Text_1, ParcelFloodbasin_Halvor_FirstWin
# 932 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 933 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Halvor_3
ParcelFloodbasin_Halvor_1:
# 936 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Halvor_8
ParcelFloodbasin_Halvor_6:
# 939 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Halvor_13
ParcelFloodbasin_Halvor_11:
# 942 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Halvor_18
ParcelFloodbasin_Halvor_16:
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Halvor_2:
# 934 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_3:
# 933 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R2
	goto_if 0, ParcelFloodbasin_Halvor_2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_7:
# 937 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R3
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_8:
# 936 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R3
	goto_if 0, ParcelFloodbasin_Halvor_7
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_12:
# 940 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R4
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_13:
# 939 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R4
	goto_if 0, ParcelFloodbasin_Halvor_12
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_17:
# 943 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R5
	goto ParcelFloodbasin_Halvor_16

ParcelFloodbasin_Halvor_18:
# 942 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R5
	goto_if 0, ParcelFloodbasin_Halvor_17
	goto ParcelFloodbasin_Halvor_16


ParcelFloodbasin_Halvor_FirstWin::
# 949 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
# 950 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R2::
# 954 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 955 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 956 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_0, MSGBOX_YESNO
# 957 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R2_2
# 962 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R2, ParcelFloodbasin_Halvor_R2_Text_2
# 963 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_3, MSGBOX_DEFAULT
# 964 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R2_2:
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 959 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R3::
# 968 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 969 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 970 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_0, MSGBOX_YESNO
# 971 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R3_2
# 976 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R3, ParcelFloodbasin_Halvor_R3_Text_1
# 977 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_2, MSGBOX_DEFAULT
# 978 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R3_2:
# 972 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 973 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R4::
# 982 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 983 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 984 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_0, MSGBOX_YESNO
# 985 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R4_2
# 990 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R4, ParcelFloodbasin_Halvor_R3_Text_1
# 991 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_1, MSGBOX_DEFAULT
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R4_2:
# 986 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 987 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R5::
# 996 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 997 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 998 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_0, MSGBOX_YESNO
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R5_2
# 1004 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R5, ParcelFloodbasin_Halvor_R5_Text_1
# 1005 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_2, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R5_2:
# 1000 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 1001 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja::
# 1010 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_MAJA, ParcelFloodbasin_Maja_Text_0, ParcelFloodbasin_Maja_Text_1, ParcelFloodbasin_Maja_FirstWin
# 1014 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1015 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Maja_3
ParcelFloodbasin_Maja_1:
# 1018 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Maja_8
ParcelFloodbasin_Maja_6:
# 1021 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Maja_13
ParcelFloodbasin_Maja_11:
# 1024 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Maja_18
ParcelFloodbasin_Maja_16:
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Maja_2:
# 1016 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_3:
# 1015 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R2
	goto_if 0, ParcelFloodbasin_Maja_2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_7:
# 1019 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R3
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_8:
# 1018 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R3
	goto_if 0, ParcelFloodbasin_Maja_7
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_12:
# 1022 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R4
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_13:
# 1021 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R4
	goto_if 0, ParcelFloodbasin_Maja_12
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_17:
# 1025 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R5
	goto ParcelFloodbasin_Maja_16

ParcelFloodbasin_Maja_18:
# 1024 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R5
	goto_if 0, ParcelFloodbasin_Maja_17
	goto ParcelFloodbasin_Maja_16


ParcelFloodbasin_Maja_FirstWin::
# 1031 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
# 1032 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R2::
# 1036 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1037 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1038 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_0, MSGBOX_YESNO
# 1039 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R2_2
# 1044 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R2, ParcelFloodbasin_Maja_R2_Text_2
# 1045 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_3, MSGBOX_DEFAULT
# 1046 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R2_2:
# 1040 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1041 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R3::
# 1050 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1051 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1052 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_0, MSGBOX_YESNO
# 1053 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R3_2
# 1058 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R3, ParcelFloodbasin_Maja_R3_Text_1
# 1059 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_2, MSGBOX_DEFAULT
# 1060 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R3_2:
# 1054 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1055 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R4::
# 1064 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1065 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1066 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_0, MSGBOX_YESNO
# 1067 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R4_2
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R4, ParcelFloodbasin_Maja_R4_Text_1
# 1073 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_2, MSGBOX_DEFAULT
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R4_2:
# 1068 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1069 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R5::
# 1078 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1079 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1080 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_0, MSGBOX_YESNO
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R5_2
# 1086 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R5, ParcelFloodbasin_Maja_R5_Text_1
# 1087 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_2, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R5_2:
# 1082 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1083 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn::
# 1092 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_BJORN, ParcelFloodbasin_Bjorn_Text_0, ParcelFloodbasin_Bjorn_Text_1, ParcelFloodbasin_Bjorn_FirstWin
# 1096 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1097 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Bjorn_3
ParcelFloodbasin_Bjorn_1:
# 1100 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Bjorn_8
ParcelFloodbasin_Bjorn_6:
# 1103 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Bjorn_13
ParcelFloodbasin_Bjorn_11:
# 1106 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Bjorn_18
ParcelFloodbasin_Bjorn_16:
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Bjorn_2:
# 1098 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_3:
# 1097 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R2
	goto_if 0, ParcelFloodbasin_Bjorn_2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_7:
# 1101 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R3
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_8:
# 1100 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R3
	goto_if 0, ParcelFloodbasin_Bjorn_7
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_12:
# 1104 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R4
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_13:
# 1103 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R4
	goto_if 0, ParcelFloodbasin_Bjorn_12
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_17:
# 1107 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R5
	goto ParcelFloodbasin_Bjorn_16

ParcelFloodbasin_Bjorn_18:
# 1106 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R5
	goto_if 0, ParcelFloodbasin_Bjorn_17
	goto ParcelFloodbasin_Bjorn_16


ParcelFloodbasin_Bjorn_FirstWin::
# 1113 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
# 1114 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R2::
# 1118 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1119 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1120 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_0, MSGBOX_YESNO
# 1121 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R2_2
# 1126 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R2, ParcelFloodbasin_Bjorn_R2_Text_2
# 1127 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_3, MSGBOX_DEFAULT
# 1128 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R2_2:
# 1122 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1123 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R3::
# 1132 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1133 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1134 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_0, MSGBOX_YESNO
# 1135 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R3_2
# 1140 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R3, ParcelFloodbasin_Bjorn_R3_Text_1
# 1141 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_2, MSGBOX_DEFAULT
# 1142 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R3_2:
# 1136 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1137 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R4::
# 1146 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1147 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1148 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_0, MSGBOX_YESNO
# 1149 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R4_2
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R4, ParcelFloodbasin_Bjorn_R4_Text_1
# 1155 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_2, MSGBOX_DEFAULT
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R4_2:
# 1150 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1151 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R5::
# 1160 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1161 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1162 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_0, MSGBOX_YESNO
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R5_2
# 1168 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R5, ParcelFloodbasin_Bjorn_R2_Text_2
# 1169 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_1, MSGBOX_DEFAULT
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R5_2:
# 1164 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1165 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig::
# 1174 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SOLVEIG, ParcelFloodbasin_Solveig_Text_0, ParcelFloodbasin_Solveig_Text_1, ParcelFloodbasin_Solveig_FirstWin
# 1178 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1179 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Solveig_3
ParcelFloodbasin_Solveig_1:
# 1182 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Solveig_8
ParcelFloodbasin_Solveig_6:
# 1185 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Solveig_13
ParcelFloodbasin_Solveig_11:
# 1188 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Solveig_18
ParcelFloodbasin_Solveig_16:
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Solveig_2:
# 1180 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_3:
# 1179 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R2
	goto_if 0, ParcelFloodbasin_Solveig_2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_7:
# 1183 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R3
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_8:
# 1182 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R3
	goto_if 0, ParcelFloodbasin_Solveig_7
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_12:
# 1186 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R4
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_13:
# 1185 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R4
	goto_if 0, ParcelFloodbasin_Solveig_12
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_17:
# 1189 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R5
	goto ParcelFloodbasin_Solveig_16

ParcelFloodbasin_Solveig_18:
# 1188 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R5
	goto_if 0, ParcelFloodbasin_Solveig_17
	goto ParcelFloodbasin_Solveig_16


ParcelFloodbasin_Solveig_FirstWin::
# 1195 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
# 1196 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R2::
# 1200 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1201 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1202 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_0, MSGBOX_YESNO
# 1203 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R2_2
# 1208 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R2, ParcelFloodbasin_Solveig_R2_Text_2
# 1209 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 1210 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R2_2:
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1205 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R3::
# 1214 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1215 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1216 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_0, MSGBOX_YESNO
# 1217 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R3_2
# 1222 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R3, ParcelFloodbasin_Solveig_R3_Text_1
# 1223 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_2, MSGBOX_DEFAULT
# 1224 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R3_2:
# 1218 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1219 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R4::
# 1228 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1229 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1230 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_0, MSGBOX_YESNO
# 1231 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R4_2
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R4, ParcelFloodbasin_Solveig_R4_Text_1
# 1237 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R4_2:
# 1232 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1233 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R5::
# 1242 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1243 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1244 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_0, MSGBOX_YESNO
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R5_2
# 1250 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R5, ParcelFloodbasin_Solveig_R3_Text_1
# 1251 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_1, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R5_2:
# 1246 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1247 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils::
# 1256 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_NILS, ParcelFloodbasin_Nils_Text_0, ParcelFloodbasin_Nils_Text_1, ParcelFloodbasin_Nils_FirstWin
# 1260 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1261 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Nils_3
ParcelFloodbasin_Nils_1:
# 1264 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Nils_8
ParcelFloodbasin_Nils_6:
# 1267 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Nils_13
ParcelFloodbasin_Nils_11:
# 1270 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Nils_18
ParcelFloodbasin_Nils_16:
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Nils_2:
# 1262 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_3:
# 1261 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R2
	goto_if 0, ParcelFloodbasin_Nils_2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_7:
# 1265 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R3
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_8:
# 1264 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R3
	goto_if 0, ParcelFloodbasin_Nils_7
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_12:
# 1268 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R4
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_13:
# 1267 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R4
	goto_if 0, ParcelFloodbasin_Nils_12
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_17:
# 1271 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R5
	goto ParcelFloodbasin_Nils_16

ParcelFloodbasin_Nils_18:
# 1270 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R5
	goto_if 0, ParcelFloodbasin_Nils_17
	goto ParcelFloodbasin_Nils_16


ParcelFloodbasin_Nils_FirstWin::
# 1277 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
# 1278 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R2::
# 1282 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1283 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1284 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_0, MSGBOX_YESNO
# 1285 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R2_2
# 1290 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R2, ParcelFloodbasin_Nils_R2_Text_2
# 1291 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_3, MSGBOX_DEFAULT
# 1292 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R2_2:
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1287 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R3::
# 1296 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1297 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1298 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_0, MSGBOX_YESNO
# 1299 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R3_2
# 1304 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R3, ParcelFloodbasin_Nils_R3_Text_1
# 1305 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_2, MSGBOX_DEFAULT
# 1306 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R3_2:
# 1300 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1301 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R4::
# 1310 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1311 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1312 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_0, MSGBOX_YESNO
# 1313 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R4_2
# 1318 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R4, ParcelFloodbasin_Nils_R2_Text_2
# 1319 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_1, MSGBOX_DEFAULT
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R4_2:
# 1314 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1315 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R5::
# 1324 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1325 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1326 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_0, MSGBOX_YESNO
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R5_2
# 1332 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R5, ParcelFloodbasin_Nils_R5_Text_1
# 1333 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_2, MSGBOX_DEFAULT
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R5_2:
# 1328 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1329 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig::
# 1338 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_RANNVEIG, ParcelFloodbasin_Rannveig_Text_0, ParcelFloodbasin_Rannveig_Text_1, ParcelFloodbasin_Rannveig_FirstWin
# 1342 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1343 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Rannveig_3
ParcelFloodbasin_Rannveig_1:
# 1346 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Rannveig_8
ParcelFloodbasin_Rannveig_6:
# 1349 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Rannveig_13
ParcelFloodbasin_Rannveig_11:
# 1352 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Rannveig_18
ParcelFloodbasin_Rannveig_16:
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Rannveig_2:
# 1344 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_3:
# 1343 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R2
	goto_if 0, ParcelFloodbasin_Rannveig_2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_7:
# 1347 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R3
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_8:
# 1346 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R3
	goto_if 0, ParcelFloodbasin_Rannveig_7
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_12:
# 1350 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R4
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_13:
# 1349 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R4
	goto_if 0, ParcelFloodbasin_Rannveig_12
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_17:
# 1353 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R5
	goto ParcelFloodbasin_Rannveig_16

ParcelFloodbasin_Rannveig_18:
# 1352 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R5
	goto_if 0, ParcelFloodbasin_Rannveig_17
	goto ParcelFloodbasin_Rannveig_16


ParcelFloodbasin_Rannveig_FirstWin::
# 1359 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
# 1360 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R2::
# 1364 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1365 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1366 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_0, MSGBOX_YESNO
# 1367 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R2_2
# 1372 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R2, ParcelFloodbasin_Rannveig_R2_Text_2
# 1373 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_3, MSGBOX_DEFAULT
# 1374 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R2_2:
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1369 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R3::
# 1378 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1379 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1380 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_0, MSGBOX_YESNO
# 1381 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R3_2
# 1386 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R3, ParcelFloodbasin_Rannveig_R3_Text_1
# 1387 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_2, MSGBOX_DEFAULT
# 1388 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R3_2:
# 1382 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1383 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R4::
# 1392 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1393 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1394 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_0, MSGBOX_YESNO
# 1395 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R4_2
# 1400 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R4, ParcelFloodbasin_Rannveig_R3_Text_1
# 1401 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_1, MSGBOX_DEFAULT
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R4_2:
# 1396 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1397 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R5::
# 1406 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1407 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1408 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_0, MSGBOX_YESNO
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R5_2
# 1414 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R5, ParcelFloodbasin_Rannveig_R5_Text_1
# 1415 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_2, MSGBOX_DEFAULT
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R5_2:
# 1410 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1411 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar::
# 1420 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_EINAR, ParcelFloodbasin_Einar_Text_0, ParcelFloodbasin_Einar_Text_1, ParcelFloodbasin_Einar_FirstWin
# 1424 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1425 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Einar_3
ParcelFloodbasin_Einar_1:
# 1428 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Einar_8
ParcelFloodbasin_Einar_6:
# 1431 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Einar_13
ParcelFloodbasin_Einar_11:
# 1434 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Einar_18
ParcelFloodbasin_Einar_16:
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Einar_2:
# 1426 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_3:
# 1425 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R2
	goto_if 0, ParcelFloodbasin_Einar_2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_7:
# 1429 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R3
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_8:
# 1428 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R3
	goto_if 0, ParcelFloodbasin_Einar_7
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_12:
# 1432 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R4
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_13:
# 1431 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R4
	goto_if 0, ParcelFloodbasin_Einar_12
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_17:
# 1435 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R5
	goto ParcelFloodbasin_Einar_16

ParcelFloodbasin_Einar_18:
# 1434 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R5
	goto_if 0, ParcelFloodbasin_Einar_17
	goto ParcelFloodbasin_Einar_16


ParcelFloodbasin_Einar_FirstWin::
# 1441 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
# 1442 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R2::
# 1446 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1447 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1448 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_0, MSGBOX_YESNO
# 1449 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R2_2
# 1454 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R2, ParcelFloodbasin_Einar_R2_Text_2
# 1455 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_3, MSGBOX_DEFAULT
# 1456 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R2_2:
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1451 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R3::
# 1460 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1461 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1462 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_0, MSGBOX_YESNO
# 1463 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R3_2
# 1468 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R3, ParcelFloodbasin_Einar_R2_Text_2
# 1469 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_1, MSGBOX_DEFAULT
# 1470 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R3_2:
# 1464 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1465 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R4::
# 1474 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1475 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1476 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_0, MSGBOX_YESNO
# 1477 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R4_2
# 1482 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R4, ParcelFloodbasin_Einar_R2_Text_2
# 1483 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_1, MSGBOX_DEFAULT
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R4_2:
# 1478 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1479 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R5::
# 1488 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1489 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1490 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_0, MSGBOX_YESNO
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R5_2
# 1496 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R5, ParcelFloodbasin_Einar_R5_Text_1
# 1497 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_2, MSGBOX_DEFAULT
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R5_2:
# 1492 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1493 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla::
# 1502 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STURLA, ParcelFloodbasin_Sturla_Text_0, ParcelFloodbasin_Sturla_Text_1, ParcelFloodbasin_Sturla_FirstWin
# 1506 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1507 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Sturla_3
ParcelFloodbasin_Sturla_1:
# 1510 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Sturla_8
ParcelFloodbasin_Sturla_6:
# 1513 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Sturla_13
ParcelFloodbasin_Sturla_11:
# 1516 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Sturla_18
ParcelFloodbasin_Sturla_16:
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Sturla_2:
# 1508 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_3:
# 1507 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R2
	goto_if 0, ParcelFloodbasin_Sturla_2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_7:
# 1511 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R3
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_8:
# 1510 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R3
	goto_if 0, ParcelFloodbasin_Sturla_7
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_12:
# 1514 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R4
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_13:
# 1513 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R4
	goto_if 0, ParcelFloodbasin_Sturla_12
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_17:
# 1517 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R5
	goto ParcelFloodbasin_Sturla_16

ParcelFloodbasin_Sturla_18:
# 1516 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R5
	goto_if 0, ParcelFloodbasin_Sturla_17
	goto ParcelFloodbasin_Sturla_16


ParcelFloodbasin_Sturla_FirstWin::
# 1523 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
# 1524 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R2::
# 1528 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1529 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1530 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_0, MSGBOX_YESNO
# 1531 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R2_2
# 1536 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R2, ParcelFloodbasin_Sturla_R2_Text_2
# 1537 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_3, MSGBOX_DEFAULT
# 1538 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R2_2:
# 1532 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1533 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R3::
# 1542 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1543 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1544 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_0, MSGBOX_YESNO
# 1545 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R3_2
# 1550 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R3, ParcelFloodbasin_Sturla_R3_Text_1
# 1551 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_2, MSGBOX_DEFAULT
# 1552 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R3_2:
# 1546 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1547 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R4::
# 1556 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1557 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1558 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_0, MSGBOX_YESNO
# 1559 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R4_2
# 1564 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R4, ParcelFloodbasin_Sturla_R4_Text_1
# 1565 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_2, MSGBOX_DEFAULT
# 1566 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R4_2:
# 1560 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1561 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R5::
# 1570 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1571 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1572 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_0, MSGBOX_YESNO
# 1573 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R5_2
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R5, ParcelFloodbasin_Sturla_R5_Text_1
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_2, MSGBOX_DEFAULT
# 1580 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R5_2:
# 1574 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1575 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar::
# 1584 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_OSKAR, ParcelFloodbasin_Oskar_Text_0, ParcelFloodbasin_Oskar_Text_1, ParcelFloodbasin_Oskar_FirstWin
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1589 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Oskar_3
ParcelFloodbasin_Oskar_1:
# 1592 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Oskar_8
ParcelFloodbasin_Oskar_6:
# 1595 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Oskar_13
ParcelFloodbasin_Oskar_11:
# 1598 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Oskar_18
ParcelFloodbasin_Oskar_16:
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Oskar_2:
# 1590 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_3:
# 1589 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R2
	goto_if 0, ParcelFloodbasin_Oskar_2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_7:
# 1593 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R3
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_8:
# 1592 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R3
	goto_if 0, ParcelFloodbasin_Oskar_7
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_12:
# 1596 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R4
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_13:
# 1595 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R4
	goto_if 0, ParcelFloodbasin_Oskar_12
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_17:
# 1599 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R5
	goto ParcelFloodbasin_Oskar_16

ParcelFloodbasin_Oskar_18:
# 1598 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R5
	goto_if 0, ParcelFloodbasin_Oskar_17
	goto ParcelFloodbasin_Oskar_16


ParcelFloodbasin_Oskar_FirstWin::
# 1605 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
# 1606 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R2::
# 1610 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1611 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1612 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_0, MSGBOX_YESNO
# 1613 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R2_2
# 1618 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R2, ParcelFloodbasin_Oskar_R2_Text_2
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_3, MSGBOX_DEFAULT
# 1620 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R2_2:
# 1614 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1615 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R3::
# 1624 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1625 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1626 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_0, MSGBOX_YESNO
# 1627 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R3_2
# 1632 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R3, ParcelFloodbasin_Oskar_R3_Text_1
# 1633 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_2, MSGBOX_DEFAULT
# 1634 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R3_2:
# 1628 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1629 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R4::
# 1638 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1639 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1640 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_0, MSGBOX_YESNO
# 1641 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R4_2
# 1646 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R4, ParcelFloodbasin_Oskar_R4_Text_1
# 1647 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_2, MSGBOX_DEFAULT
# 1648 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R4_2:
# 1642 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1643 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R5::
# 1652 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1653 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1654 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_0, MSGBOX_YESNO
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R5_2
# 1660 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R5, ParcelFloodbasin_Oskar_R3_Text_1
# 1661 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_1, MSGBOX_DEFAULT
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R5_2:
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1657 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_ItemRevive::
# 1667 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_ItemSuperPotion::
# 1668 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFloodbasin_ItemGreatBall::
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelFloodbasin_SignHamlet::
# 1672 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SignHamlet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Checkpoint::
# 1680 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_Checkpoint_2
# 1684 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1685 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_0, MSGBOX_DEFAULT
# 1686 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1687 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenApproach
# 1688 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1689 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FLD_FaceLeft
# 1690 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1691 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_1, MSGBOX_DEFAULT
# 1692 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_2, MSGBOX_YESNO
# 1693 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Checkpoint_5
# 1696 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_4, MSGBOX_DEFAULT
# 1697 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_EXAM_3
ParcelFloodbasin_Checkpoint_4:
# 1699 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3, ParcelFloodbasin_Checkpoint_Text_5
# 1700 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_BADGE03_GET
# 1701 "data/maps/ParcelFloodbasin/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1702 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_6, MSGBOX_DEFAULT
# 1703 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_HM06
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_7, MSGBOX_DEFAULT
# 1705 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1706 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenAside
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1708 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1709 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_Checkpoint_2:
# 1681 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
	end

ParcelFloodbasin_Checkpoint_5:
# 1694 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Checkpoint_4


ParcelFloodbasin_GymBreen::
# 1713 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1714 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1715 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_GymBreen_2
ParcelFloodbasin_GymBreen_1:
# 1718 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Text_0, MSGBOX_DEFAULT
# 1719 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_2:
# 1716 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_GymBreen_Rematch
	goto ParcelFloodbasin_GymBreen_1


# 1722 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenApproach:
# 1722 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
# 1722 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
	step_end

# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenAside:
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_down
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
	step_end

# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_FaceLeft:
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	face_left
	step_end

ParcelFloodbasin_T_Anders::
# 1728 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ANDERS, ParcelFloodbasin_T_Anders_Text_0, ParcelFloodbasin_T_Anders_Text_1, ParcelFloodbasin_T_Anders_FirstWin
# 1732 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1733 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Anders_3
ParcelFloodbasin_T_Anders_1:
# 1736 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Anders_8
ParcelFloodbasin_T_Anders_6:
# 1739 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Anders_13
ParcelFloodbasin_T_Anders_11:
# 1742 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Anders_18
ParcelFloodbasin_T_Anders_16:
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Anders_2:
# 1734 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_3:
# 1733 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R2
	goto_if 0, ParcelFloodbasin_T_Anders_2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_7:
# 1737 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R3
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_8:
# 1736 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R3
	goto_if 0, ParcelFloodbasin_T_Anders_7
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_12:
# 1740 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R4
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_13:
# 1739 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R4
	goto_if 0, ParcelFloodbasin_T_Anders_12
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_17:
# 1743 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R5
	goto ParcelFloodbasin_T_Anders_16

ParcelFloodbasin_T_Anders_18:
# 1742 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R5
	goto_if 0, ParcelFloodbasin_T_Anders_17
	goto ParcelFloodbasin_T_Anders_16


ParcelFloodbasin_T_Anders_FirstWin::
# 1749 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
# 1750 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R2::
# 1754 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1755 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1756 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_0, MSGBOX_YESNO
# 1757 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R2_2
# 1762 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R2, ParcelFloodbasin_T_Anders_R2_Text_2
# 1763 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_3, MSGBOX_DEFAULT
# 1764 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R2_2:
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1759 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R3::
# 1768 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1769 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1770 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_0, MSGBOX_YESNO
# 1771 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R3_2
# 1776 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R3, ParcelFloodbasin_T_Anders_R3_Text_1
# 1777 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_2, MSGBOX_DEFAULT
# 1778 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R3_2:
# 1772 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1773 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R4::
# 1782 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1783 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_0, MSGBOX_YESNO
# 1785 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R4_2
# 1790 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R4, ParcelFloodbasin_T_Anders_R4_Text_1
# 1791 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_2, MSGBOX_DEFAULT
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R4_2:
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1787 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R5::
# 1796 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1797 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1798 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_0, MSGBOX_YESNO
# 1799 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R5_2
# 1804 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R5, ParcelFloodbasin_T_Anders_R4_Text_1
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_1, MSGBOX_DEFAULT
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R5_2:
# 1800 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1801 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald::
# 1810 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ROALD, ParcelFloodbasin_T_Roald_Text_0, ParcelFloodbasin_T_Roald_Text_1, ParcelFloodbasin_T_Roald_FirstWin
# 1814 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1815 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Roald_3
ParcelFloodbasin_T_Roald_1:
# 1818 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Roald_8
ParcelFloodbasin_T_Roald_6:
# 1821 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Roald_13
ParcelFloodbasin_T_Roald_11:
# 1824 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Roald_18
ParcelFloodbasin_T_Roald_16:
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Roald_2:
# 1816 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_3:
# 1815 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R2
	goto_if 0, ParcelFloodbasin_T_Roald_2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_7:
# 1819 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R3
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_8:
# 1818 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R3
	goto_if 0, ParcelFloodbasin_T_Roald_7
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_12:
# 1822 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R4
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_13:
# 1821 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R4
	goto_if 0, ParcelFloodbasin_T_Roald_12
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_17:
# 1825 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R5
	goto ParcelFloodbasin_T_Roald_16

ParcelFloodbasin_T_Roald_18:
# 1824 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R5
	goto_if 0, ParcelFloodbasin_T_Roald_17
	goto ParcelFloodbasin_T_Roald_16


ParcelFloodbasin_T_Roald_FirstWin::
# 1831 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
# 1832 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R2::
# 1836 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1837 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1838 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_0, MSGBOX_YESNO
# 1839 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R2_2
# 1844 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R2, ParcelFloodbasin_T_Roald_R2_Text_2
# 1845 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_3, MSGBOX_DEFAULT
# 1846 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R2_2:
# 1840 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1841 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R3::
# 1850 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1851 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1852 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_0, MSGBOX_YESNO
# 1853 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R3_2
# 1858 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R3, ParcelFloodbasin_T_Roald_R2_Text_2
# 1859 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_1, MSGBOX_DEFAULT
# 1860 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R3_2:
# 1854 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1855 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R4::
# 1864 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1865 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1866 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_0, MSGBOX_YESNO
# 1867 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R4_2
# 1872 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R4, ParcelFloodbasin_T_Roald_R4_Text_1
# 1873 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_2, MSGBOX_DEFAULT
# 1874 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R4_2:
# 1868 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1869 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R5::
# 1878 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1879 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1880 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_0, MSGBOX_YESNO
# 1881 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R5_2
# 1886 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R5, ParcelFloodbasin_T_Roald_R5_Text_1
# 1887 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_2, MSGBOX_DEFAULT
# 1888 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R5_2:
# 1882 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1883 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein::
# 1892 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STEIN, ParcelFloodbasin_T_Stein_Text_0, ParcelFloodbasin_T_Stein_Text_1, ParcelFloodbasin_T_Stein_FirstWin
# 1896 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1897 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Stein_3
ParcelFloodbasin_T_Stein_1:
# 1900 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Stein_8
ParcelFloodbasin_T_Stein_6:
# 1903 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Stein_13
ParcelFloodbasin_T_Stein_11:
# 1906 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Stein_18
ParcelFloodbasin_T_Stein_16:
# 1909 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Stein_2:
# 1898 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_3:
# 1897 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R2
	goto_if 0, ParcelFloodbasin_T_Stein_2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_7:
# 1901 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R3
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_8:
# 1900 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R3
	goto_if 0, ParcelFloodbasin_T_Stein_7
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_12:
# 1904 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R4
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_13:
# 1903 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R4
	goto_if 0, ParcelFloodbasin_T_Stein_12
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_17:
# 1907 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R5
	goto ParcelFloodbasin_T_Stein_16

ParcelFloodbasin_T_Stein_18:
# 1906 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R5
	goto_if 0, ParcelFloodbasin_T_Stein_17
	goto ParcelFloodbasin_T_Stein_16


ParcelFloodbasin_T_Stein_FirstWin::
# 1913 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
# 1914 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R2::
# 1918 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1919 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1920 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_0, MSGBOX_YESNO
# 1921 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R2_2
# 1926 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R2, ParcelFloodbasin_T_Stein_R2_Text_2
# 1927 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_3, MSGBOX_DEFAULT
# 1928 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R2_2:
# 1922 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1923 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R3::
# 1932 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1933 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1934 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_0, MSGBOX_YESNO
# 1935 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R3_2
# 1940 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R3, ParcelFloodbasin_T_Stein_R3_Text_1
# 1941 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_2, MSGBOX_DEFAULT
# 1942 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R3_2:
# 1936 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1937 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R4::
# 1946 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1947 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1948 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_0, MSGBOX_YESNO
# 1949 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R4_2
# 1954 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R4, ParcelFloodbasin_T_Stein_R3_Text_1
# 1955 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_1, MSGBOX_DEFAULT
# 1956 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R4_2:
# 1950 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1951 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R5::
# 1960 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1961 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1962 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_0, MSGBOX_YESNO
# 1963 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R5_2
# 1968 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R5, ParcelFloodbasin_T_Stein_R5_Text_1
# 1969 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_2, MSGBOX_DEFAULT
# 1970 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R5_2:
# 1964 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1965 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Epilogue::
# 1976 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1977 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 20
# 1978 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_0, MSGBOX_DEFAULT
# 1979 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_1, MSGBOX_DEFAULT
# 1980 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1981 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 3
# 1982 "data/maps/ParcelFloodbasin/scripts.pory"
	warp MAP_PARCEL_RIVER, 16, 30
# 1983 "data/maps/ParcelFloodbasin/scripts.pory"
	waitstate
	end


ParcelFloodbasin_GymBreen_Rematch::
# 1989 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1990 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1991 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_0, MSGBOX_YESNO
# 1992 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_GymBreen_Rematch_2
# 1997 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3_R, ParcelFloodbasin_GymBreen_Rematch_Text_2
# 1998 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_3, MSGBOX_DEFAULT
# 1999 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_Rematch_2:
# 1993 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_1, MSGBOX_DEFAULT
# 1994 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_TarpRoof::
# 2004 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOF, ParcelFloodbasin_TarpRoof_2
# 2007 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_TarpRoof_Text_0, MSGBOX_SIGN
# 2008 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF_FOUND
	end

ParcelFloodbasin_TarpRoof_2:
	end


ParcelFloodbasin_MarkA::
# 2013 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkA_3
ParcelFloodbasin_MarkA_1:
# 2018 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkA_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkA_2:
# 2014 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkA_Text_0, MSGBOX_SIGN
# 2015 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_A
	end

ParcelFloodbasin_MarkA_3:
# 2013 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_MarkA_2
	goto ParcelFloodbasin_MarkA_1


ParcelFloodbasin_MarkB::
# 2023 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkB_3
ParcelFloodbasin_MarkB_1:
# 2028 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkB_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkB_2:
# 2024 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkB_Text_0, MSGBOX_SIGN
# 2025 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_B
	end

ParcelFloodbasin_MarkB_3:
# 2023 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_MarkB_2
	goto ParcelFloodbasin_MarkB_1


ParcelFloodbasin_MarkC::
# 2033 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkC_3
ParcelFloodbasin_MarkC_1:
# 2038 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkC_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkC_2:
# 2034 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkC_Text_0, MSGBOX_SIGN
# 2035 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_C
	end

ParcelFloodbasin_MarkC_3:
# 2033 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_MarkC_2
	goto ParcelFloodbasin_MarkC_1


ParcelFloodbasin_SurveyStake::
# 2044 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SurveyStake_Text_0, MSGBOX_SIGN
# 2045 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 2046 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldSurveyStake
# 2047 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 2048 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelFloodbasin_SurveyStake_3
ParcelFloodbasin_SurveyStake_1:
	end

ParcelFloodbasin_SurveyStake_2:
# 2049 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SurveyStake_Text_1, MSGBOX_SIGN
# 2050 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_SECOND_2
	goto ParcelFloodbasin_SurveyStake_1

ParcelFloodbasin_SurveyStake_3:
# 2048 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_2, ParcelFloodbasin_SurveyStake_2
	goto ParcelFloodbasin_SurveyStake_1


ParcelFloodbasin_PairBlankets::
# 2058 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2059 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBlankets_2
# 2064 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBlankets_3
# 2070 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_8, MSGBOX_DEFAULT
# 2071 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_9, MSGBOX_DEFAULT
# 2072 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_10, MSGBOX_DEFAULT
# 2073 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_11, MSGBOX_DEFAULT
ParcelFloodbasin_PairBlankets_1:
# 2075 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBlankets_2:
# 2060 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_0, MSGBOX_DEFAULT
# 2061 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_1, MSGBOX_DEFAULT
# 2062 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_2, MSGBOX_DEFAULT
# 2063 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBlankets_1

ParcelFloodbasin_PairBlankets_3:
# 2065 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_4, MSGBOX_DEFAULT
# 2066 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_5, MSGBOX_DEFAULT
# 2067 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_6, MSGBOX_DEFAULT
# 2068 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_7, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBlankets_1


ParcelFloodbasin_PairBoat::
# 2080 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2081 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBoat_2
# 2087 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBoat_3
# 2093 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_9, MSGBOX_DEFAULT
# 2094 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_10, MSGBOX_DEFAULT
# 2095 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_11, MSGBOX_DEFAULT
# 2096 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_12, MSGBOX_DEFAULT
# 2097 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_13, MSGBOX_DEFAULT
ParcelFloodbasin_PairBoat_1:
# 2099 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBoat_2:
# 2082 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_0, MSGBOX_DEFAULT
# 2083 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_1, MSGBOX_DEFAULT
# 2084 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_2, MSGBOX_DEFAULT
# 2085 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_3, MSGBOX_DEFAULT
# 2086 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_4, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBoat_1

ParcelFloodbasin_PairBoat_3:
# 2088 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_5, MSGBOX_DEFAULT
# 2089 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_6, MSGBOX_DEFAULT
# 2090 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_7, MSGBOX_DEFAULT
# 2091 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_8, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBoat_1


ParcelFloodbasin_Stringer::
# 2106 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2107 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2108 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Stringer_2
# 2110 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Stringer_3
# 2113 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_2, MSGBOX_DEFAULT
ParcelFloodbasin_Stringer_1:
# 2115 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Stringer_2:
# 2109 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Stringer_1

ParcelFloodbasin_Stringer_3:
# 2111 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Stringer_1


ParcelFloodbasin_WellWoman::
# 2122 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2123 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2124 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_WellWoman_3
ParcelFloodbasin_WellWoman_1:
# 2129 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_DONE, ParcelFloodbasin_WellWoman_7
# 2131 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE, ParcelFloodbasin_WellWoman_8
# 2140 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_4, MSGBOX_DEFAULT
# 2141 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE
ParcelFloodbasin_WellWoman_6:
# 2143 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_WellWoman_2:
# 2125 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_0, MSGBOX_DEFAULT
# 2126 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_WellWoman_3:
# 2124 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_DONE, ParcelFloodbasin_WellWoman_2
	goto ParcelFloodbasin_WellWoman_1

ParcelFloodbasin_WellWoman_7:
# 2130 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_1, MSGBOX_DEFAULT
	goto ParcelFloodbasin_WellWoman_6

ParcelFloodbasin_WellWoman_8:
# 2132 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_FOUND, ParcelFloodbasin_WellWoman_12
# 2137 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_WellWoman_6

ParcelFloodbasin_WellWoman_12:
# 2133 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_2, MSGBOX_DEFAULT
# 2134 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_FULL_HEAL, 2
# 2135 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE_DONE
	goto ParcelFloodbasin_WellWoman_6


ParcelFloodbasin_FindDeadline::
# 2150 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE, ParcelFloodbasin_FindDeadline_4
ParcelFloodbasin_FindDeadline_3:
# 2154 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindDeadline_Text_1, MSGBOX_SIGN
ParcelFloodbasin_FindDeadline_1:
	end

ParcelFloodbasin_FindDeadline_2:
# 2151 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindDeadline_Text_0, MSGBOX_SIGN
# 2152 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE_FOUND
	goto ParcelFloodbasin_FindDeadline_1

ParcelFloodbasin_FindDeadline_4:
# 2150 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_FOUND, ParcelFloodbasin_FindDeadline_2
	goto ParcelFloodbasin_FindDeadline_3


ParcelFloodbasin_PairBank::
# 2160 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2161 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBank_2
# 2165 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBank_3
# 2171 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_7, MSGBOX_DEFAULT
# 2172 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_8, MSGBOX_DEFAULT
# 2173 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_9, MSGBOX_DEFAULT
# 2174 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_10, MSGBOX_DEFAULT
ParcelFloodbasin_PairBank_1:
# 2176 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBank_2:
# 2162 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_0, MSGBOX_DEFAULT
# 2163 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_1, MSGBOX_DEFAULT
# 2164 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_2, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBank_1

ParcelFloodbasin_PairBank_3:
# 2166 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_3, MSGBOX_DEFAULT
# 2167 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_4, MSGBOX_DEFAULT
# 2168 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_5, MSGBOX_DEFAULT
# 2169 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_6, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBank_1


ParcelFloodbasin_Board1::
# 2183 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board1_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Board2::
# 2188 "data/maps/ParcelFloodbasin/scripts.pory"
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
	.string "DORSEY: Phase 2 is a dry shed and a\n"
	.string "pump that works. I'd have liked more.\l"
	.string "I've stopped writing what I'd have\l"
	.string "liked.\p"
	.string "The FOUNDATION's man was courteous,\n"
	.string "RANGER. Put that down. It's true, and\l"
	.string "it's the least of it.$"

ParcelFloodbasin_Dorsey_Text_1:
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: You'll write that the\n"
	.string "FOUNDATION's man was courteous after\l"
	.string "the hearing. I was. I am. Phase 2 goes\l"
	.string "ahead, RANGER. Dry sheds. You'd have\l"
	.string "built them too. You'd just have built\l"
	.string "them slower.$"

ParcelFloodbasin_Dorsey_Text_2:
# 123 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: I heard KOLE lost his temper.\n"
	.string "He's young. I'll have a word.\p"
	.string "You'll write that the FOUNDATION's man\n"
	.string "was uncooperative. Write also that the\l"
	.string "FOUNDATION's boat ran twice a day. Both\l"
	.string "are true.$"

ParcelFloodbasin_Dorsey_Text_3:
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Vouchers are for residents,\n"
	.string "RANGER. You've got a CORPS stipend. Try\l"
	.string "the booth by the bridge if you want\l"
	.string "paperwork.$"

ParcelFloodbasin_Aide1_Text_0:
# 135 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Vouchers are back, from a\n"
	.string "different fund, with a different crest.\l"
	.string "Same sheet. I kept the sheet.\p"
	.string "Forty-one names, and I know every one\n"
	.string "of them now.$"

ParcelFloodbasin_Aide1_Text_1:
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers are finished. The\n"
	.string "relief sheet went to the hearing as an\l"
	.string "exhibit. Forty-one signatures. The\l"
	.string "councilman's name was the\l"
	.string "forty-second. I'd not noticed that\l"
	.string "before.$"

ParcelFloodbasin_Aide1_Text_2:
# 145 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Vouchers are suspended pending\n"
	.string "the coast office's review. I'm to say\l"
	.string "'suspended', not 'stopped'.\p"
	.string "The sheet's still here. Nobody's come to\n"
	.string "sign it since the river hall voted.\l"
	.string "Nobody's come to collect it either.$"

ParcelFloodbasin_Aide1_Text_3:
# 149 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers on the left, dry\n"
	.string "goods on the right. Sign the sheet. Yes,\l"
	.string "the FOUNDATION keeps the sheet. For\l"
	.string "the records.$"

ParcelFloodbasin_Aide2_Text_0:
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Consulted, this time, means\n"
	.string "asked. I asked all forty-one. Eleven\l"
	.string "said no to the shed.\p"
	.string "Eleven is in the minutes. I typed it\n"
	.string "myself.$"

ParcelFloodbasin_Aide2_Text_1:
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. The\n"
	.string "hearing asked how many were consulted\l"
	.string "on Phase 2. I said forty-one signed.\l"
	.string "They said that wasn't the question. It\l"
	.string "wasn't.$"

ParcelFloodbasin_Aide2_Text_2:
# 167 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one signatures, and the\n"
	.string "councilman hasn't looked at the sheet\l"
	.string "once since he came back from the river.\p"
	.string "He looks at the bridge instead. I don't\n"
	.string "know what he sees there. Water, I\l"
	.string "expect.$"

ParcelFloodbasin_Aide2_Text_3:
# 171 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. Forty-one\n"
	.string "signatures. The councilman likes a full\l"
	.string "sheet.$"

ParcelFloodbasin_VilOldWoman_Text_0:
# 179 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: The roof's held two storms.\n"
	.string "Tuesdays, they come now, for anyone.\p"
	.string "I make tea on Tuesdays. I never\n"
	.string "thought I'd have a day.$"

ParcelFloodbasin_VilOldWoman_Text_1:
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: They came Tuesday. Not\n"
	.string "Thursday. Tuesday. Eleven years and it\l"
	.string "took a stranger looking at a tarp.$"

ParcelFloodbasin_VilOldWoman_Text_2:
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: You looked? Then go and tell\n"
	.string "the aide you looked. Say it like you\l"
	.string "mean to write it down. They move faster\l"
	.string "for the writing down.$"

ParcelFloodbasin_VilOldWoman_Text_3:
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: The house behind the third\n"
	.string "one, dear. Blue tarp. You can't miss it.\l"
	.string "Everyone misses it.$"

ParcelFloodbasin_VilOldWoman_Text_4:
# 199 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Thursday, he said. It's been\n"
	.string "four Thursdays. The tarp's on the house\l"
	.string "behind the third one.\p"
	.string "Go and look at it, dear. And then go and\n"
	.string "tell the aide you looked.$"

ParcelFloodbasin_VilOldWoman_Text_5:
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. He said it\n"
	.string "at the hearing, into a microphone, as an\l"
	.string "example of local partnership. Eleven\l"
	.string "years, and I was an example.$"

ParcelFloodbasin_VilOldWoman_Text_6:
# 210 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. Eleven\n"
	.string "years on the Council and he knows my\l"
	.string "name.\p"
	.string "The CORPS man before you didn't. I'm not\n"
	.string "saying that to be unkind.$"

ParcelFloodbasin_VilOldWoman_Text_7:
# 214 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Wait your turn, dear. We've\n"
	.string "all been flooded.$"

ParcelFloodbasin_VilMan_Text_0:
# 222 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The vials went to the review. They\n"
	.string "came back with a number on each. Shine's\l"
	.string "got a name now.\p"
	.string "I'd rather it had stayed mud.$"

ParcelFloodbasin_VilMan_Text_1:
# 228 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three. You held them up to the\n"
	.string "light the way I would've if I'd had the\l"
	.string "vials.\p"
	.string "Brown's just mud. Mud don't shine. That\n"
	.string "shine's the thing nobody asks about,\l"
	.string "and now it's in three bottles with my\l"
	.string "name on the sheet as the one who asked.$"

ParcelFloodbasin_VilMan_Text_2:
# 229 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Here. Came up with the brown water\n"
	.string "the third flood and I've kept it dry\l"
	.string "since. Yours.$"

ParcelFloodbasin_VilMan_Text_3:
# 232 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Vouchers are for asking quietly.\n"
	.string "Bottles are for asking out loud.$"

ParcelFloodbasin_VilMan_Text_4:
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The marks. A scrape off each one.$"

ParcelFloodbasin_VilMan_Text_5:
# 238 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The first is on the house beside\n"
	.string "the relief tent.$"

ParcelFloodbasin_VilMan_Text_6:
# 241 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The second is on the hamlet wall,\n"
	.string "the house by the lane.$"

ParcelFloodbasin_VilMan_Text_7:
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The third is on the house with the\n"
	.string "tarp roof. Highest of the three.$"

ParcelFloodbasin_VilMan_Text_8:
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the water still comes up\l"
	.string "brown. Your paper says why. In the\l"
	.string "hearing they read the why aloud. The\l"
	.string "water didn't change colour. I did.$"

ParcelFloodbasin_VilMan_Text_9:
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
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

ParcelFloodbasin_VilMan_Text_10:
# 261 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the fourth time I asked\l"
	.string "why the water's brown, somebody up the\l"
	.string "river asked it for me. In a hall. With the\l"
	.string "Board sitting there.\p"
	.string "No vouchers for that. Better than\n"
	.string "vouchers.$"

ParcelFloodbasin_VilMan_Text_11:
# 265 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods. Three times the\n"
	.string "vouchers. Nobody's asked why the water\l"
	.string "comes up brown now.\p"
	.string "I asked. I got vouchers.$"

ParcelFloodbasin_VilGirl_Text_0:
# 273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet\n"
	.string "had babies. Their feet are right. The\l"
	.string "CORPS lady came back and drew those\l"
	.string "too.\p"
	.string "She cried a bit. She said it was the cold.$"

ParcelFloodbasin_VilGirl_Text_1:
# 278 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A CORPS lady came\l"
	.string "and drew it. She said it's in a report\l"
	.string "now. It doesn't know. It's a WOOPER.$"

ParcelFloodbasin_VilGirl_Text_2:
# 283 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A lady from the river\l"
	.string "came and drew it. Drew it! In a book!\p"
	.string "She said it's going in a report. I said\n"
	.string "it's going in a puddle. We were both\l"
	.string "right.$"

ParcelFloodbasin_VilGirl_Text_3:
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: My brother found a WOOPER with\n"
	.string "the wrong feet. Gran made him put it\l"
	.string "back. It didn't go anywhere. It just\l"
	.string "sat.$"

ParcelFloodbasin_VilFisher_Text_0:
# 295 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: The water's never reached past\n"
	.string "the big stone, and this spring it didn't\l"
	.string "reach the stone before it. First time.\p"
	.string "I put a stick where it stopped. You've\n"
	.string "made a man of sticks out of me.$"

ParcelFloodbasin_VilFisher_Text_1:
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Past the big stone. It's never\n"
	.string "reached past the big stone. The works\l"
	.string "are further up than they say the water\l"
	.string "goes, then.\p"
	.string "Here. For the smell. There's no cure for\n"
	.string "the smell, but these are for the rest.$"

ParcelFloodbasin_VilFisher_Text_2:
# 305 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: The bank. The line of them. Find\n"
	.string "where it stops.$"

ParcelFloodbasin_VilFisher_Text_3:
# 310 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: After every pulse there's a\n"
	.string "line on the bank where the fish lie. The\l"
	.string "Board man says it's weather. I say it's a\l"
	.string "line, and lines have a top end.\p"
	.string "Go along the bank and find the top of\n"
	.string "it. Tell me how far up it reaches this\l"
	.string "year.$"

ParcelFloodbasin_VilFisher_Text_4:
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Does writing fix anything, I\n"
	.string "asked you. The vouchers are still\l"
	.string "stopped. The boat's still stopped. But a\l"
	.string "Board man came and measured the water\l"
	.string "instead of telling me about it. Writing\l"
	.string "did that.$"

ParcelFloodbasin_VilFisher_Text_5:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Vouchers stopped. Boat\n"
	.string "stopped. Water's the same.\p"
	.string "Your lot wrote something down, I hear.\n"
	.string "Does writing it down dry anything out?$"

ParcelFloodbasin_VilFisher_Text_6:
# 325 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: I don't fish the lake anymore. I\n"
	.string "fish the top lake, past the bridge. The\l"
	.string "water's clearer up there.\p"
	.string "Clearer. Not clear.$"

ParcelFloodbasin_Discharge_Text_0:
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. In the notebook.$"

ParcelFloodbasin_Discharge_Text_1:
# 341 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe in the bank, mouth\n"
	.string "fouled with brown crust. Stamped:\l"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old. The\n"
	.string "crust is fresher than that. Written\l"
	.string "down.$"

ParcelFloodbasin_Sheen_Text_0:
# 352 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. In the notebook.$"

ParcelFloodbasin_Sheen_Text_1:
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the lake,\n"
	.string "bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "carry the same stain at their bases.\l"
	.string "Written down.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 367 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the bank,\n"
	.string "straw-pale. The reeds above and below\l"
	.string "it are fine.\p"
	.string "The kill line is exactly the height of\n"
	.string "the flood six months ago. Written down.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 383 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A WOOPER, low in the puddle. Two left\n"
	.string "feet.\p"
	.string "It doesn't flinch. It has been like this\n"
	.string "since it hatched, and that was recent.\l"
	.string "Written down.$"

ParcelFloodbasin_SickKarp_Text_0:
# 392 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown MAGIKARP lists against the\n"
	.string "bridge piling, scales greying.\p"
	.string "It was never in the pipe. It was at the\n"
	.string "top of the food web. Poison climbs.\l"
	.string "Written down.$"

ParcelFloodbasin_BoothSign_Text_0:
# 399 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway. Please report\n"
	.string "concerns to your local representative.\p"
	.string "The paint is wet from the rain. The sign\n"
	.string "is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 410 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.$"

ParcelFloodbasin_Remediator_Text_1:
# 414 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Oh. RANGER! Welcome to the active\n"
	.string "remediation site.\p"
	.string "We've been at it… some time now. The\n"
	.string "FOUNDATION does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: …A quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 417 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: The councilman said you'd\n"
	.string "have the remediation file for me.$"

ParcelFloodbasin_Remediator_Text_5:
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Did he. Well. It's at the office.\n"
	.string "The coast office.$"

ParcelFloodbasin_Remediator_Text_6:
# 419 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_7:
# 420 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_8:
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The WOOPER has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_9:
# 424 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Move along, RANGER. This isn't\n"
	.string "your patch.$"

ParcelFloodbasin_Remediator_Text_10:
# 426 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_11:
# 427 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Hmph.$"

ParcelFloodbasin_Remediator_Text_12:
# 428 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.\p"
	.string "This basin ran sick before you got here.\n"
	.string "It'll run sick after.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 437 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 438 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 453 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: She doesn't eat what she\n"
	.string "catches anymore. Sells it to the people\l"
	.string "who don't ask.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_0:
# 464 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_1:
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Another time, then.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_2:
# 470 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's the one I wanted to see.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_3:
# 471 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_0:
# 478 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_1:
# 484 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Noted. Properly, this time.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_2:
# 485 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_0:
# 492 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_1:
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Still yours.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_2:
# 499 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_0:
# 506 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_1:
# 513 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Arve_Text_0:
# 519 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The DUSTOX here have spots in\n"
	.string "the wrong places. I've been drawing\l"
	.string "them. Battle first.$"

ParcelFloodbasin_Arve_Text_1:
# 520 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Drawn and beaten.$"

ParcelFloodbasin_Arve_Text_2:
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Wrong spots, extra spots, no\n"
	.string "spots. All in the same field. My teacher\l"
	.string "says that's just variety.$"

ParcelFloodbasin_Arve_R2_Text_0:
# 546 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Arve_R2_Text_1:
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: No hurry. The water keeps.$"

ParcelFloodbasin_Arve_R2_Text_2:
# 552 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's the one I wanted to see.$"

ParcelFloodbasin_Arve_R2_Text_3:
# 553 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Arve_R3_Text_0:
# 560 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Arve_R3_Text_1:
# 566 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Still yours.$"

ParcelFloodbasin_Arve_R3_Text_2:
# 567 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Arve_R4_Text_0:
# 574 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelFloodbasin_Arve_R4_Text_1:
# 581 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Arve_R5_Text_0:
# 588 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Arve_R5_Text_1:
# 594 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Noted. Properly, this time.$"

ParcelFloodbasin_Arve_R5_Text_2:
# 595 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Kai_Text_0:
# 601 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Nobody sees me in the tall grass.\n"
	.string "Nobody except you, apparently.$"

ParcelFloodbasin_Kai_Text_1:
# 602 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Seen and beaten.$"

ParcelFloodbasin_Kai_Text_2:
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: The grass by the top lake is the\n"
	.string "tallest. It's also the only grass that\l"
	.string "smells like that.$"

ParcelFloodbasin_Kai_R2_Text_0:
# 628 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelFloodbasin_Kai_R2_Text_1:
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Suit yourself. I'm here.$"

ParcelFloodbasin_Kai_R2_Text_2:
# 634 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: …Fair.$"

ParcelFloodbasin_Kai_R2_Text_3:
# 635 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Kai_R3_Text_0:
# 642 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Kai_R3_Text_1:
# 648 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Right. That's the whole of it.$"

ParcelFloodbasin_Kai_R3_Text_2:
# 649 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Kai_R4_Text_0:
# 656 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Kai_R4_Text_1:
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's the one I wanted to see.$"

ParcelFloodbasin_Kai_R4_Text_2:
# 663 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Kai_R5_Text_0:
# 670 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelFloodbasin_Kai_R5_Text_1:
# 676 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Still yours.$"

ParcelFloodbasin_Kai_R5_Text_2:
# 677 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Signe_Text_0:
# 683 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: A picnic in the rain is still a\n"
	.string "picnic. A battle in the rain is still a\l"
	.string "battle.$"

ParcelFloodbasin_Signe_Text_1:
# 684 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Soggy on both counts.$"

ParcelFloodbasin_Signe_Text_2:
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: I don't let my MARILL in the\n"
	.string "lower lake. It came out itchy once. Just\l"
	.string "once was enough.$"

ParcelFloodbasin_Signe_R2_Text_0:
# 710 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Signe_R2_Text_1:
# 712 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Signe_R2_Text_2:
# 716 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Noted. Properly, this time.$"

ParcelFloodbasin_Signe_R2_Text_3:
# 717 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Signe_R3_Text_0:
# 724 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Signe_R3_Text_1:
# 730 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: …Fair.$"

ParcelFloodbasin_Signe_R3_Text_2:
# 731 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Signe_R4_Text_0:
# 738 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Signe_R4_Text_1:
# 745 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Signe_R5_Text_0:
# 752 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Signe_R5_Text_1:
# 758 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Still yours.$"

ParcelFloodbasin_Signe_R5_Text_2:
# 759 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Leif_Text_0:
# 765 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I camp on the high ground. The low\n"
	.string "ground floods. Everybody knows.\l"
	.string "Battle?$"

ParcelFloodbasin_Leif_Text_1:
# 766 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Should've camped higher.$"

ParcelFloodbasin_Leif_Text_2:
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Every year the high ground's a bit\n"
	.string "higher. The water, I mean. Not the\l"
	.string "ground.$"

ParcelFloodbasin_Leif_R2_Text_0:
# 792 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Leif_R2_Text_1:
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Another time, then.$"

ParcelFloodbasin_Leif_R2_Text_2:
# 798 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Still yours.$"

ParcelFloodbasin_Leif_R2_Text_3:
# 799 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Leif_R3_Text_0:
# 806 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Leif_R3_Text_1:
# 812 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: …Again, then. Later.$"

ParcelFloodbasin_Leif_R3_Text_2:
# 813 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Leif_R4_Text_0:
# 820 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasin_Leif_R4_Text_1:
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Noted. Properly, this time.$"

ParcelFloodbasin_Leif_R4_Text_2:
# 827 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Leif_R5_Text_0:
# 834 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Leif_R5_Text_1:
# 841 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Truls_Text_0:
# 847 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: You walked right into my sight\n"
	.string "line. Rookie.$"

ParcelFloodbasin_Truls_Text_1:
# 848 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: …Not a rookie.$"

ParcelFloodbasin_Truls_Text_2:
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: The councilman's boat goes past\n"
	.string "twice a day. Nobody's ever asked what it\l"
	.string "brings back.$"

ParcelFloodbasin_Truls_R2_Text_0:
# 874 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Truls_R2_Text_1:
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Suit yourself. I'm here.$"

ParcelFloodbasin_Truls_R2_Text_2:
# 880 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Right. That's the whole of it.$"

ParcelFloodbasin_Truls_R2_Text_3:
# 881 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Truls_R3_Text_0:
# 888 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Truls_R3_Text_1:
# 894 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's the one I wanted to see.$"

ParcelFloodbasin_Truls_R3_Text_2:
# 895 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Truls_R4_Text_0:
# 902 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Truls_R4_Text_1:
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Still yours.$"

ParcelFloodbasin_Truls_R4_Text_2:
# 909 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Truls_R5_Text_0:
# 916 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Truls_R5_Text_1:
# 922 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Noted. Properly, this time.$"

ParcelFloodbasin_Truls_R5_Text_2:
# 923 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Halvor_Text_0:
# 929 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: The pond's got a boardwalk\n"
	.string "because the pond used to be a field.\l"
	.string "Think about that. Then battle me.$"

ParcelFloodbasin_Halvor_Text_1:
# 930 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Thought about it, did you.$"

ParcelFloodbasin_Halvor_Text_2:
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: My father planted this field. I\n"
	.string "fish it. That's the basin in one family.$"

ParcelFloodbasin_Halvor_R2_Text_0:
# 956 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Halvor_R2_Text_1:
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Fine. Same spot.$"

ParcelFloodbasin_Halvor_R2_Text_2:
# 962 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: …Again, then. Later.$"

ParcelFloodbasin_Halvor_R2_Text_3:
# 963 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Halvor_R3_Text_0:
# 970 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Halvor_R3_Text_1:
# 976 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's the one I wanted to see.$"

ParcelFloodbasin_Halvor_R3_Text_2:
# 977 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Halvor_R4_Text_0:
# 984 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Halvor_R4_Text_1:
# 991 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Halvor_R5_Text_0:
# 998 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Halvor_R5_Text_1:
# 1004 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Still yours.$"

ParcelFloodbasin_Halvor_R5_Text_2:
# 1005 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Maja_Text_0:
# 1011 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles never dry out here\n"
	.string "anymore. My MARILL loves it. I don't.\l"
	.string "Battle!$"

ParcelFloodbasin_Maja_Text_1:
# 1012 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: MARILL still loves it.$"

ParcelFloodbasin_Maja_Text_2:
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles have a shine on them\n"
	.string "in the morning. Rainbow colours. Gran\l"
	.string "says don't look at it too long.$"

ParcelFloodbasin_Maja_R2_Text_0:
# 1038 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Maja_R2_Text_1:
# 1040 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Fine. Same spot.$"

ParcelFloodbasin_Maja_R2_Text_2:
# 1044 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's the one I wanted to see.$"

ParcelFloodbasin_Maja_R2_Text_3:
# 1045 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Maja_R3_Text_0:
# 1052 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Maja_R3_Text_1:
# 1058 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Still yours.$"

ParcelFloodbasin_Maja_R3_Text_2:
# 1059 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Maja_R4_Text_0:
# 1066 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Maja_R4_Text_1:
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Fair.$"

ParcelFloodbasin_Maja_R4_Text_2:
# 1073 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Maja_R5_Text_0:
# 1080 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Maja_R5_Text_1:
# 1086 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Again, then. Later.$"

ParcelFloodbasin_Maja_R5_Text_2:
# 1087 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Bjorn_Text_0:
# 1093 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: The pump house door's open\n"
	.string "again. I didn't open it. Did you? Battle\l"
	.string "me and we'll call it even.$"

ParcelFloodbasin_Bjorn_Text_1:
# 1094 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Even, then.$"

ParcelFloodbasin_Bjorn_Text_2:
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: MEREHOLT pumped this whole\n"
	.string "basin for twenty years. Then they\l"
	.string "stopped. Then the water came back.\l"
	.string "Then the smell.$"

ParcelFloodbasin_Bjorn_R2_Text_0:
# 1120 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Bjorn_R2_Text_1:
# 1122 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Another time, then.$"

ParcelFloodbasin_Bjorn_R2_Text_2:
# 1126 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: …Fair.$"

ParcelFloodbasin_Bjorn_R2_Text_3:
# 1127 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Bjorn_R3_Text_0:
# 1134 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Bjorn_R3_Text_1:
# 1140 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Noted. Properly, this time.$"

ParcelFloodbasin_Bjorn_R3_Text_2:
# 1141 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Bjorn_R4_Text_0:
# 1148 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Bjorn_R4_Text_1:
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Right. That's the whole of it.$"

ParcelFloodbasin_Bjorn_R4_Text_2:
# 1155 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Bjorn_R5_Text_0:
# 1162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Bjorn_R5_Text_1:
# 1169 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Solveig_Text_0:
# 1175 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Cadet SOLVEIG. HALE said a\n"
	.string "provisional would come through. Spar.\l"
	.string "Then I'll tell you where the stakes are.$"

ParcelFloodbasin_Solveig_Text_1:
# 1176 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Good. The stakes.$"

ParcelFloodbasin_Solveig_Text_2:
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Red cloth stakes are ours. The\n"
	.string "bare ones are the FOUNDATION's. They\l"
	.string "put theirs on the clean bank. We put\l"
	.string "ours where the water is.$"

ParcelFloodbasin_Solveig_R2_Text_0:
# 1202 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelFloodbasin_Solveig_R2_Text_1:
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Fine. Same spot.$"

ParcelFloodbasin_Solveig_R2_Text_2:
# 1208 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Solveig_R2_Text_3:
# 1209 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelFloodbasin_Solveig_R3_Text_0:
# 1216 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFloodbasin_Solveig_R3_Text_1:
# 1222 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelFloodbasin_Solveig_R3_Text_2:
# 1223 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelFloodbasin_Solveig_R4_Text_0:
# 1230 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Solveig_R4_Text_1:
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelFloodbasin_Solveig_R4_Text_2:
# 1237 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Solveig_R5_Text_0:
# 1244 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_Solveig_R5_Text_1:
# 1251 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Nils_Text_0:
# 1257 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The north meadow's the only dry\n"
	.string "bit. Everyone comes up here. Everyone\l"
	.string "battles.$"

ParcelFloodbasin_Nils_Text_1:
# 1258 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Everyone loses to you,\n"
	.string "apparently.$"

ParcelFloodbasin_Nils_Text_2:
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: My WURMPLE won't eat the reeds\n"
	.string "from the low ground. Only the high. I\l"
	.string "thought they ate anything.$"

ParcelFloodbasin_Nils_R2_Text_0:
# 1284 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Nils_R2_Text_1:
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Another time, then.$"

ParcelFloodbasin_Nils_R2_Text_2:
# 1290 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: …Again, then. Later.$"

ParcelFloodbasin_Nils_R2_Text_3:
# 1291 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Nils_R3_Text_0:
# 1298 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Nils_R3_Text_1:
# 1304 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: That's the one I wanted to see.$"

ParcelFloodbasin_Nils_R3_Text_2:
# 1305 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Nils_R4_Text_0:
# 1312 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Nils_R4_Text_1:
# 1319 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Nils_R5_Text_0:
# 1326 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Nils_R5_Text_1:
# 1332 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Noted. Properly, this time.$"

ParcelFloodbasin_Nils_R5_Text_2:
# 1333 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Rannveig_Text_0:
# 1339 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: My GLOOM smells better than\n"
	.string "the basin does. That's a low bar.\l"
	.string "Battle?$"

ParcelFloodbasin_Rannveig_Text_1:
# 1340 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still smells better.$"

ParcelFloodbasin_Rannveig_Text_2:
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: The road north is a haul road.\n"
	.string "Trucks come down it at night. Nobody's\l"
	.string "told us what they haul.$"

ParcelFloodbasin_Rannveig_R2_Text_0:
# 1366 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Rannveig_R2_Text_1:
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Fine. Same spot.$"

ParcelFloodbasin_Rannveig_R2_Text_2:
# 1372 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still yours.$"

ParcelFloodbasin_Rannveig_R2_Text_3:
# 1373 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Rannveig_R3_Text_0:
# 1380 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Rannveig_R3_Text_1:
# 1386 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's the one I wanted to\n"
	.string "see.$"

ParcelFloodbasin_Rannveig_R3_Text_2:
# 1387 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: One more in me. After the\n"
	.string "high ground.$"

ParcelFloodbasin_Rannveig_R4_Text_0:
# 1394 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Rannveig_R4_Text_1:
# 1401 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Rannveig_R5_Text_0:
# 1408 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelFloodbasin_Rannveig_R5_Text_1:
# 1414 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Rannveig_R5_Text_2:
# 1415 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Einar_Text_0:
# 1421 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: My MIGHTYENA's the strongest\n"
	.string "thing in the basin. Prove me wrong.$"

ParcelFloodbasin_Einar_Text_1:
# 1422 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Proved.$"

ParcelFloodbasin_Einar_Text_2:
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Strongest thing in the basin.\n"
	.string "Not saying much, these days.$"

ParcelFloodbasin_Einar_R2_Text_0:
# 1448 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Einar_R2_Text_1:
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Suit yourself. I'm here.$"

ParcelFloodbasin_Einar_R2_Text_2:
# 1454 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Again, then. Later.$"

ParcelFloodbasin_Einar_R2_Text_3:
# 1455 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Einar_R3_Text_0:
# 1462 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Einar_R3_Text_1:
# 1469 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Einar_R4_Text_0:
# 1476 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Einar_R4_Text_1:
# 1483 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Einar_R5_Text_0:
# 1490 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Einar_R5_Text_1:
# 1496 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Noted. Properly, this time.$"

ParcelFloodbasin_Einar_R5_Text_2:
# 1497 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Sturla_Text_0:
# 1503 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I came for the NUZLEAF. Stayed\n"
	.string "for the rain. Nobody stays for the rain.\l"
	.string "Battle.$"

ParcelFloodbasin_Sturla_Text_1:
# 1504 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Should've left with the\n"
	.string "NUZLEAF.$"

ParcelFloodbasin_Sturla_Text_2:
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: It rains here more than it used\n"
	.string "to. Not more days. More water. Ask\l"
	.string "anyone with a roof.$"

ParcelFloodbasin_Sturla_R2_Text_0:
# 1530 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Sturla_R2_Text_1:
# 1532 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Another time, then.$"

ParcelFloodbasin_Sturla_R2_Text_2:
# 1536 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Still yours.$"

ParcelFloodbasin_Sturla_R2_Text_3:
# 1537 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Sturla_R3_Text_0:
# 1544 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Sturla_R3_Text_1:
# 1550 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Right. That's the whole of it.$"

ParcelFloodbasin_Sturla_R3_Text_2:
# 1551 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Sturla_R4_Text_0:
# 1558 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Sturla_R4_Text_1:
# 1564 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: That's the one I wanted to see.$"

ParcelFloodbasin_Sturla_R4_Text_2:
# 1565 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Sturla_R5_Text_0:
# 1572 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_Sturla_R5_Text_1:
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: …Again, then. Later.$"

ParcelFloodbasin_Sturla_R5_Text_2:
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Oskar_Text_0:
# 1585 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The puddle field used to be the\n"
	.string "best grazing in the district. Now it's\l"
	.string "the best puddles. Battle.$"

ParcelFloodbasin_Oskar_Text_1:
# 1586 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Best puddles. Worst battle.$"

ParcelFloodbasin_Oskar_Text_2:
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The ground here doesn't drain\n"
	.string "anymore. Something underneath it is\l"
	.string "full.$"

ParcelFloodbasin_Oskar_R2_Text_0:
# 1612 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Oskar_R2_Text_1:
# 1614 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Oskar_R2_Text_2:
# 1618 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: …Again, then. Later.$"

ParcelFloodbasin_Oskar_R2_Text_3:
# 1619 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Oskar_R3_Text_0:
# 1626 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Oskar_R3_Text_1:
# 1632 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Noted. Properly, this time.$"

ParcelFloodbasin_Oskar_R3_Text_2:
# 1633 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Oskar_R4_Text_0:
# 1640 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Oskar_R4_Text_1:
# 1646 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Still yours.$"

ParcelFloodbasin_Oskar_R4_Text_2:
# 1647 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Oskar_R5_Text_0:
# 1654 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Oskar_R5_Text_1:
# 1661 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_SignHamlet_Text_0:
# 1672 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK\p"
	.string "Flood line marked on the chapel wall.\n"
	.string "Boat times posted at the relief store.$"

ParcelFloodbasin_Checkpoint_Text_0:
# 1685 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Stop there.$"

ParcelFloodbasin_Checkpoint_Text_1:
# 1691 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Logistics. This is a haul road,\n"
	.string "not a hiking trail. Nobody moves up to\l"
	.string "the river neck on my road without\l"
	.string "clearing me first.\p"
	.string "MIRREN cleared you? MIRREN clears\n"
	.string "anyone who can read. I need people who\l"
	.string "can carry.$"

ParcelFloodbasin_Checkpoint_Text_2:
# 1692 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Though the stakes say you read.\n"
	.string "Prove it quick. The basin runs brown\l"
	.string "after a pulse.\p"
	.string "Brown's lake water stirred up, is it?$"

ParcelFloodbasin_Checkpoint_Text_3:
# 1694 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Lake water's grey. Brown is soil,\n"
	.string "off the banks they cut upstream. The\l"
	.string "lake gets the blame because the lake\l"
	.string "can't argue.\p"
	.string "Carry, then. Reading you'll learn on the\n"
	.string "road, same as the rest of us.$"

ParcelFloodbasin_Checkpoint_Text_4:
# 1696 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Soil. Upstream soil, off the cut\n"
	.string "banks. Lake water's grey. Hm. You did\l"
	.string "read the stakes.\p"
	.string "Now carry.$"

ParcelFloodbasin_Checkpoint_Text_5:
# 1699 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry weight.\n"
	.string "Move up.$"

ParcelFloodbasin_Checkpoint_Text_6:
# 1702 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Quarry clearance. Logs you fit\n"
	.string "to move earth on division ground. Tool's\l"
	.string "bonded to it.$"

ParcelFloodbasin_Checkpoint_Text_7:
# 1704 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: ROCK SMASH. The slide past me's\n"
	.string "been there since spring. Nobody's\l"
	.string "cleared it because nobody's needed to\l"
	.string "go up.\p"
	.string "Mind the loads coming down. They don't\n"
	.string "stop for paperwork.$"

ParcelFloodbasin_GymBreen_Text_0:
# 1718 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Cleared. The neck's open to you.\n"
	.string "Mind the loads coming down.$"

ParcelFloodbasin_T_Anders_Text_0:
# 1729 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The MASQUERAIN by the lake\n"
	.string "have wings like oil on water. Pretty.\l"
	.string "Battle!$"

ParcelFloodbasin_T_Anders_Text_1:
# 1730 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Pretty and useless.$"

ParcelFloodbasin_T_Anders_Text_2:
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Oil on water. I said it as a\n"
	.string "compliment. Then I saw the lake.$"

ParcelFloodbasin_T_Anders_R2_Text_0:
# 1756 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_T_Anders_R2_Text_1:
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Fine. Same spot.$"

ParcelFloodbasin_T_Anders_R2_Text_2:
# 1762 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Noted. Properly, this time.$"

ParcelFloodbasin_T_Anders_R2_Text_3:
# 1763 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_T_Anders_R3_Text_0:
# 1770 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelFloodbasin_T_Anders_R3_Text_1:
# 1776 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Right. That's the whole of it.$"

ParcelFloodbasin_T_Anders_R3_Text_2:
# 1777 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Anders_R4_Text_0:
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_T_Anders_R4_Text_1:
# 1790 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Still yours.$"

ParcelFloodbasin_T_Anders_R4_Text_2:
# 1791 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Anders_R5_Text_0:
# 1798 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Anders_R5_Text_1:
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Roald_Text_0:
# 1811 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Camped on the one dry rise in\n"
	.string "the puddle field. Room for one. Battle\l"
	.string "for it.$"

ParcelFloodbasin_T_Roald_Text_1:
# 1812 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Room for two, I suppose.$"

ParcelFloodbasin_T_Roald_Text_2:
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The puddles join up in spring.\n"
	.string "Then it's not a field. Then the\l"
	.string "councilman's boat comes. Then the\l"
	.string "puddles go. Then it's a field. It's a\l"
	.string "cycle, he says.$"

ParcelFloodbasin_T_Roald_R2_Text_0:
# 1838 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_T_Roald_R2_Text_1:
# 1840 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Another time, then.$"

ParcelFloodbasin_T_Roald_R2_Text_2:
# 1844 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Fair.$"

ParcelFloodbasin_T_Roald_R2_Text_3:
# 1845 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Roald_R3_Text_0:
# 1852 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_T_Roald_R3_Text_1:
# 1859 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_T_Roald_R4_Text_0:
# 1866 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Roald_R4_Text_1:
# 1872 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Again, then. Later.$"

ParcelFloodbasin_T_Roald_R4_Text_2:
# 1873 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Roald_R5_Text_0:
# 1880 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Roald_R5_Text_1:
# 1886 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Noted. Properly, this time.$"

ParcelFloodbasin_T_Roald_R5_Text_2:
# 1887 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Stein_Text_0:
# 1893 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You swam out here? Into THIS?\n"
	.string "Battle. Then get out of the water,\l"
	.string "seriously.$"

ParcelFloodbasin_T_Stein_Text_1:
# 1894 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Seriously. Out.$"

ParcelFloodbasin_T_Stein_Text_2:
# 1909 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: I swim the lake for the\n"
	.string "FOUNDATION. Sampling. The samples go to\l"
	.string "the coast. The results don't come back.$"

ParcelFloodbasin_T_Stein_R2_Text_0:
# 1920 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_T_Stein_R2_Text_1:
# 1922 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: No hurry. The water keeps.$"

ParcelFloodbasin_T_Stein_R2_Text_2:
# 1926 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Still yours.$"

ParcelFloodbasin_T_Stein_R2_Text_3:
# 1927 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Stein_R3_Text_0:
# 1934 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_T_Stein_R3_Text_1:
# 1940 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Again, then. Later.$"

ParcelFloodbasin_T_Stein_R3_Text_2:
# 1941 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Stein_R4_Text_0:
# 1948 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Stein_R4_Text_1:
# 1955 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_T_Stein_R5_Text_0:
# 1962 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_T_Stein_R5_Text_1:
# 1968 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Fair.$"

ParcelFloodbasin_T_Stein_R5_Text_2:
# 1969 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Epilogue_Text_0:
# 1978 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK. The relief tent is gone. The\n"
	.string "sandbags are stacked where DORSEY's\l"
	.string "photographer stood.\p"
	.string "Phase 2 goes ahead. Dry sheds, like\n"
	.string "PERRIN said. The next pulse will come\l"
	.string "from somewhere, and now there's a page\l"
	.string "that says where.$"

ParcelFloodbasin_Epilogue_Text_1:
# 1979 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE's roof has a man on it.\n"
	.string "Thursday. He is not the FOUNDATION's\l"
	.string "and the ladder is his own.\p"
	.string "In the basin the water runs grey after\n"
	.string "a pulse now, not brown. It isn't clean.\l"
	.string "It's honest, which is further than it\l"
	.string "had got in twenty-two years.$"

ParcelFloodbasin_GymBreen_Rematch_Text_0:
# 1991 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Carry weight, you said. I'm\n"
	.string "asking again, heavier.\p"
	.string "Nothing to clear. Just me, the whole\n"
	.string "crew's worth. Yes?$"

ParcelFloodbasin_GymBreen_Rematch_Text_1:
# 1993 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Mind the loads, then.$"

ParcelFloodbasin_GymBreen_Rematch_Text_2:
# 1997 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry it.$"

ParcelFloodbasin_GymBreen_Rematch_Text_3:
# 1998 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Any time the loads are down. Mind\n"
	.string "them.$"

ParcelFloodbasin_TarpRoof_Text_0:
# 2007 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A blue tarp weighted with stones over\n"
	.string "half a roof. Four Thursdays of weather\l"
	.string "on it.\p"
	.string "The stones have shifted. Somebody\n"
	.string "re-stacks them every morning.$"

ParcelFloodbasin_MarkA_Text_0:
# 2014 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line a hand above the sill, on\n"
	.string "the house beside the relief tent. You\l"
	.string "scrape it into a vial. It smells of the\l"
	.string "lake, and of something that is not the\l"
	.string "lake.\p"
	.string "Sample one.$"

ParcelFloodbasin_MarkA_Text_1:
# 2018 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line on the wall, a hand above\n"
	.string "the sill. The flood's signature.$"

ParcelFloodbasin_MarkB_Text_0:
# 2024 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The second mark, on the hamlet wall,\n"
	.string "higher than the first. The scrape comes\l"
	.string "away greasy.\p"
	.string "Sample two.$"

ParcelFloodbasin_MarkB_Text_1:
# 2028 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line on the hamlet wall, higher\n"
	.string "than the one by the tent.$"

ParcelFloodbasin_MarkC_Text_0:
# 2034 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The third mark, on the house with the\n"
	.string "tarp roof, highest of all. Under the\l"
	.string "brown there is a sheen like the one on\l"
	.string "the water by the booth.\p"
	.string "Sample three.$"

ParcelFloodbasin_MarkC_Text_1:
# 2038 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line under the tarp roof's\n"
	.string "eaves, highest of the three.$"

ParcelFloodbasin_SurveyStake_Text_0:
# 2044 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A survey stake by the hamlet sign, red\n"
	.string "cloth at the top, the cloth gone pale on\l"
	.string "the side the floods come from.$"

ParcelFloodbasin_SurveyStake_Text_1:
# 2049 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Second reading. The works are fenced\n"
	.string "and a pump runs inside the fence. The\l"
	.string "basin runs grey after a pulse now, not\l"
	.string "brown.\p"
	.string "STRESSED, not COLLAPSING. The first\n"
	.string "time a word on this stake has moved the\l"
	.string "right way. You write it and do not\l"
	.string "underline it.$"

ParcelFloodbasin_PairBlankets_Text_0:
# 2060 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: Thursday. The roof. Nine\n"
	.string "years of Thursdays and this one a man\l"
	.string "came.$"

ParcelFloodbasin_PairBlankets_Text_1:
# 2061 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: Because the works are\n"
	.string "'under active remediation' now.\l"
	.string "Capitals. There's a sign.$"

ParcelFloodbasin_PairBlankets_Text_2:
# 2062 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: There was always a sign.$"

ParcelFloodbasin_PairBlankets_Text_3:
# 2063 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: There's a fence round the\n"
	.string "sign now, and a man inside the fence\l"
	.string "with a pump. Small things. I'll take small\l"
	.string "things.$"

ParcelFloodbasin_PairBlankets_Text_4:
# 2065 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: The ranger's stake by the\n"
	.string "hamlet sign. People stop at it now. Read\l"
	.string "what it says and go on.$"

ParcelFloodbasin_PairBlankets_Text_5:
# 2066 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: What does it say?$"

ParcelFloodbasin_PairBlankets_Text_6:
# 2067 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: It says what we've all said,\n"
	.string "in order, with the dates. That's all.\l"
	.string "Somehow that's the thing nobody had\l"
	.string "done.$"

ParcelFloodbasin_PairBlankets_Text_7:
# 2068 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: DORSEY read it. He read it\n"
	.string "twice and then he smiled at me. I didn't\l"
	.string "like the second smile.$"

ParcelFloodbasin_PairBlankets_Text_8:
# 2070 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: Third blanket in two years.\n"
	.string "I've a drawer of FOUNDATION blankets. I\l"
	.string "could open a shop.$"

ParcelFloodbasin_PairBlankets_Text_9:
# 2071 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: Don't say that where the\n"
	.string "aide can hear. He'll write down that\l"
	.string "you're grateful.$"

ParcelFloodbasin_PairBlankets_Text_10:
# 2072 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: I am grateful. For the\n"
	.string "blanket. It's a good blanket.$"

ParcelFloodbasin_PairBlankets_Text_11:
# 2073 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: It's the water I'd like a\n"
	.string "word about. Nobody's handing out any of\l"
	.string "that.$"

ParcelFloodbasin_PairBoat_Text_0:
# 2082 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Last run tonight. The\n"
	.string "FOUNDATION's pulled the boat. 'Needs\l"
	.string "have been reassessed.'$"

ParcelFloodbasin_PairBoat_Text_1:
# 2083 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: The road's clear. We don't need the\n"
	.string "boat.$"

ParcelFloodbasin_PairBoat_Text_2:
# 2084 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: We never needed the boat. We\n"
	.string "needed the road clear. Took nine years\l"
	.string "and a hearing to say it in that order.$"

ParcelFloodbasin_PairBoat_Text_3:
# 2085 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: What'll you do?$"

ParcelFloodbasin_PairBoat_Text_4:
# 2086 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Row. I did before. The river's\n"
	.string "still there, whoever's paying.$"

ParcelFloodbasin_PairBoat_Text_5:
# 2088 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: The ranger wouldn't take the free\n"
	.string "boat. Walked the road both ways with\l"
	.string "the water up to the knee.$"

ParcelFloodbasin_PairBoat_Text_6:
# 2089 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Rangers are paid to be\n"
	.string "difficult.$"

ParcelFloodbasin_PairBoat_Text_7:
# 2090 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: A third of them by the FOUNDATION,\n"
	.string "the poster says.$"

ParcelFloodbasin_PairBoat_Text_8:
# 2091 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: You've been reading posters.\n"
	.string "That's how it starts. Get in the boat.$"

ParcelFloodbasin_PairBoat_Text_9:
# 2093 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: FOUNDATION's boat. Twice a\n"
	.string "day to FERNWICK. Nobody pays.$"

ParcelFloodbasin_PairBoat_Text_10:
# 2094 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: Then who pays you?$"

ParcelFloodbasin_PairBoat_Text_11:
# 2095 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: The FOUNDATION. I just said.$"

ParcelFloodbasin_PairBoat_Text_12:
# 2096 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: And who pays the FOUNDATION?$"

ParcelFloodbasin_PairBoat_Text_13:
# 2097 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: …Get in the boat.$"

ParcelFloodbasin_Stringer_Text_0:
# 2109 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: The works are fenced and\n"
	.string "there's a man inside the fence with a\l"
	.string "pump. I ran a photograph of the pump.\p"
	.string "A pump is not a story. In Leirvik, after\n"
	.string "twenty-two years, a pump is the story.\l"
	.string "The editor didn't argue. He's from here.$"

ParcelFloodbasin_Stringer_Text_1:
# 2111 "data/maps/ParcelFloodbasin/scripts.pory"
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
# 2113 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: Third flood, third relief line,\n"
	.string "third photograph of the Commissioner\l"
	.string "handing a child a blanket. I've got a\l"
	.string "drawer of them.\p"
	.string "Different child each time. Same blanket.\n"
	.string "I've never been allowed to print that\l"
	.string "sentence. I'm saying it to you so it\l"
	.string "exists somewhere.$"

ParcelFloodbasin_WellWoman_Text_0:
# 2125 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. The licence\n"
	.string "is suspended. I say that to myself now,\l"
	.string "at the pump.\p"
	.string "It helps more than the first thing did.$"

ParcelFloodbasin_WellWoman_Text_1:
# 2130 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. I say it to\n"
	.string "myself when the aide comes round with\l"
	.string "the blankets. It helps, a little.$"

ParcelFloodbasin_WellWoman_Text_2:
# 2133 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. Where did\n"
	.string "you think it went.\p"
	.string "That's what he wouldn't say. I'd like to\n"
	.string "hit something. Here; I've no use for\l"
	.string "these now.$"

ParcelFloodbasin_WellWoman_Text_3:
# 2137 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: The pump house plate. Up at the\n"
	.string "works, on the wall. Brass, I'm told.$"

ParcelFloodbasin_WellWoman_Text_4:
# 2140 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: The works up the basin. There's a\n"
	.string "plate on the pump house. My husband\l"
	.string "read it once and came home and wouldn't\l"
	.string "say what it said.\p"
	.string "You read things for a living. Read me\n"
	.string "the plate.$"

ParcelFloodbasin_FindDeadline_Text_0:
# 2151 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The top of the line. MAGIKARP, mostly,\n"
	.string "pale, lying where the pulse left them,\l"
	.string "and the last one is past the big stone\l"
	.string "that nobody has ever had to use as a\l"
	.string "marker before.\p"
	.string "You put a stake of reed in the mud\n"
	.string "beside it, because there is no cloth,\l"
	.string "and because somebody should.$"

ParcelFloodbasin_FindDeadline_Text_1:
# 2154 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A reed stake in the mud beside a big\n"
	.string "stone. The line reached here this year.\l"
	.string "The reed is bending already.$"

ParcelFloodbasin_PairBank_Text_0:
# 2162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Grey, not brown. The sheets.\n"
	.string "It's not clean. It's honest.$"

ParcelFloodbasin_PairBank_Text_1:
# 2163 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: You sound like the ranger.$"

ParcelFloodbasin_PairBank_Text_2:
# 2164 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: The ranger sounds like my\n"
	.string "washing book. We've all been saying the\l"
	.string "same thing for twenty years in\l"
	.string "different places. Now it's in one place.$"

ParcelFloodbasin_PairBank_Text_3:
# 2166 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: The ranger's stake by the\n"
	.string "sign has the dates of every pulse on it.\l"
	.string "Every one. I've been on this water\l"
	.string "twenty years and I couldn't have told\l"
	.string "you the dates.$"

ParcelFloodbasin_PairBank_Text_4:
# 2167 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: I could. They're in my\n"
	.string "washing book.$"

ParcelFloodbasin_PairBank_Text_5:
# 2168 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: You never said.$"

ParcelFloodbasin_PairBank_Text_6:
# 2169 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Nobody asked the\n"
	.string "laundress. The ranger did.$"

ParcelFloodbasin_PairBank_Text_7:
# 2171 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Third wash this month and\n"
	.string "the sheets come up brown.$"

ParcelFloodbasin_PairBank_Text_8:
# 2172 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: Hang them in the hall. The\n"
	.string "Commissioner's photographer won't want\l"
	.string "brown sheets behind the blankets.$"

ParcelFloodbasin_PairBank_Text_9:
# 2173 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: That's exactly where I'm\n"
	.string "hanging them.$"

ParcelFloodbasin_PairBank_Text_10:
# 2174 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: …Good.$"

ParcelFloodbasin_Board1_Text_0:
# 2183 "data/maps/ParcelFloodbasin/scripts.pory"
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
# 2188 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD by the relief tents.\n"
	.string "Deformity count, POLIWAG, spring sample\l"
	.string "of one hundred, in a column down the\l"
	.string "board: 0, 0, 1, 0, 3, 4, 7, 9.\p"
	.string "A sign beside the board says the site is\n"
	.string "being remediated. The board does not\l"
	.string "argue with the sign. It is a column of\l"
	.string "numbers.$"
