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
# 49 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_OnTransition_6
ParcelFloodbasin_OnTransition_5:
	end

ParcelFloodbasin_OnTransition_2:
# 43 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelFloodbasin_OnTransition_1

ParcelFloodbasin_OnTransition_6:
# 50 "data/maps/ParcelFloodbasin/scripts.pory"
	setobjectxyperm 6, 15, 2
# 51 "data/maps/ParcelFloodbasin/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
	goto ParcelFloodbasin_OnTransition_5


ParcelFloodbasin_FirstEntry::
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_1, 1
# 59 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFloodbasin_FirstEntry_2
# 62 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 63 "data/maps/ParcelFloodbasin/scripts.pory"
	bufferpartymonnick 0, 0
# 64 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_1, MSGBOX_DEFAULT
# 66 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_2, MSGBOX_DEFAULT
# 67 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_3, MSGBOX_DEFAULT
# 68 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALDMERE_FLOODBASIN_ARRIVAL
# 69 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_FirstEntry_2:
	end


ParcelFloodbasin_ReliefScene::
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_ReliefScene_2
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_ReliefScene_2
# 80 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_0, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_1, MSGBOX_DEFAULT
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_2, MSGBOX_DEFAULT
# 84 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 85 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyLookUp
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 87 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_3, MSGBOX_DEFAULT
# 88 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_4, MSGBOX_DEFAULT
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_5, MSGBOX_DEFAULT
# 90 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_6, MSGBOX_DEFAULT
# 91 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_7, MSGBOX_DEFAULT
# 92 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 93 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyFaceDown
# 94 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 95 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_8, MSGBOX_DEFAULT
# 96 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_9, MSGBOX_YESNO
# 97 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_ReliefScene_7
# 101 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_11, MSGBOX_DEFAULT
ParcelFloodbasin_ReliefScene_6:
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_FLD_RELIEF_DONE
# 104 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
# 105 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_ReliefScene_2:
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
	end

ParcelFloodbasin_ReliefScene_7:
# 98 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_10, MSGBOX_DEFAULT
# 99 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_CH_BLANKET
	goto ParcelFloodbasin_ReliefScene_6


# 109 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyLookUp:
# 109 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
# 109 "data/maps/ParcelFloodbasin/scripts.pory"
	delay_16
	step_end

# 110 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyFaceDown:
# 110 "data/maps/ParcelFloodbasin/scripts.pory"
	face_down
	step_end

ParcelFloodbasin_Dorsey::
# 113 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_Dorsey_2
# 120 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Dorsey_5
# 125 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 126 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 128 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Dorsey_8
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_3, MSGBOX_DEFAULT
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_2:
# 116 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_0, MSGBOX_DEFAULT
# 117 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_5:
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_1, MSGBOX_DEFAULT
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_8:
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_2, MSGBOX_DEFAULT
# 130 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide1::
# 138 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_VOUCHER, ParcelFloodbasin_Aide1_5
ParcelFloodbasin_Aide1_4:
# 150 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_VOUCHER_DONE, ParcelFloodbasin_Aide1_3
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_Aide1_9
# 161 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide1_16
# 166 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Aide1_19
# 171 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_6, MSGBOX_DEFAULT
# 172 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_2:
# 141 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_VOUCHER_FOUND, ParcelFloodbasin_Aide1_12
# 146 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_1, MSGBOX_DEFAULT
ParcelFloodbasin_Aide1_11:
# 148 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_3:
# 151 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_2, MSGBOX_DEFAULT
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_VOUCHER
# 153 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_5:
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_VOUCHER_DONE, ParcelFloodbasin_Aide1_2
	goto ParcelFloodbasin_Aide1_4

ParcelFloodbasin_Aide1_9:
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_3, MSGBOX_DEFAULT
# 158 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_12:
# 142 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_0, MSGBOX_DEFAULT
# 143 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_SUPER_POTION, 3
# 144 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_VOUCHER_DONE
	goto ParcelFloodbasin_Aide1_11

ParcelFloodbasin_Aide1_16:
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_4, MSGBOX_DEFAULT
# 163 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide1_19:
# 167 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_5, MSGBOX_DEFAULT
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide2::
# 176 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 177 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 178 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_Aide2_2
# 183 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Aide2_5
# 188 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Aide2_8
# 193 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_3, MSGBOX_DEFAULT
# 194 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_2:
# 179 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_0, MSGBOX_DEFAULT
# 180 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_5:
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_1, MSGBOX_DEFAULT
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Aide2_8:
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_2, MSGBOX_DEFAULT
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilOldWoman::
# 198 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 199 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 200 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilOldWoman_3
ParcelFloodbasin_VilOldWoman_1:
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasin_VilOldWoman_7
# 210 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_FOUND, ParcelFloodbasin_VilOldWoman_10
# 215 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF, ParcelFloodbasin_VilOldWoman_13
# 220 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_16
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilOldWoman_19
# 231 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_22
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_7, MSGBOX_DEFAULT
# 237 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_2:
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_3:
# 200 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_ROOF_DONE, ParcelFloodbasin_VilOldWoman_2
	goto ParcelFloodbasin_VilOldWoman_1

ParcelFloodbasin_VilOldWoman_7:
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_1, MSGBOX_DEFAULT
# 207 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_10:
# 211 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_2, MSGBOX_DEFAULT
# 212 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_13:
# 216 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_3, MSGBOX_DEFAULT
# 217 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_16:
# 221 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_4, MSGBOX_DEFAULT
# 222 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF
# 223 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_19:
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_5, MSGBOX_DEFAULT
# 228 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_22:
# 232 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_6, MSGBOX_DEFAULT
# 233 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilMan::
# 241 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 242 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilMan_3
ParcelFloodbasin_VilMan_1:
# 248 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_VilMan_8
ParcelFloodbasin_VilMan_6:
# 271 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilMan_12
# 276 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_22
# 282 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_VilMan_28
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_11, MSGBOX_DEFAULT
# 288 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_2:
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_3:
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_2
	goto ParcelFloodbasin_VilMan_1

ParcelFloodbasin_VilMan_7:
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_VilMan_17
ParcelFloodbasin_VilMan_14:
# 258 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_4, MSGBOX_DEFAULT
# 259 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_VilMan_25
ParcelFloodbasin_VilMan_24:
# 262 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_VilMan_31
ParcelFloodbasin_VilMan_30:
# 265 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_VilMan_34
ParcelFloodbasin_VilMan_33:
# 268 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_8:
# 248 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_DONE, ParcelFloodbasin_VilMan_7
	goto ParcelFloodbasin_VilMan_6

ParcelFloodbasin_VilMan_12:
# 272 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_8, MSGBOX_DEFAULT
# 273 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_15:
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_2, MSGBOX_DEFAULT
# 252 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_MAX_ELIXIR
# 253 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_DONE
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_3, MSGBOX_DEFAULT
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_16:
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_VilMan_15
	goto ParcelFloodbasin_VilMan_14

ParcelFloodbasin_VilMan_17:
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_VilMan_16
	goto ParcelFloodbasin_VilMan_14

ParcelFloodbasin_VilMan_22:
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_9, MSGBOX_DEFAULT
# 278 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN
# 279 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_25:
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_5, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_24

ParcelFloodbasin_VilMan_28:
# 283 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_10, MSGBOX_DEFAULT
# 284 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilMan_31:
# 263 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_6, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_30

ParcelFloodbasin_VilMan_34:
# 266 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_7, MSGBOX_DEFAULT
	goto ParcelFloodbasin_VilMan_33


ParcelFloodbasin_VilGirl::
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 293 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 294 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilGirl_2
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilGirl_5
# 304 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_VilGirl_8
# 309 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_3, MSGBOX_DEFAULT
# 310 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_2:
# 295 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_0, MSGBOX_DEFAULT
# 296 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_5:
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_1, MSGBOX_DEFAULT
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilGirl_8:
# 305 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_2, MSGBOX_DEFAULT
# 306 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilFisher::
# 314 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 315 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_VilFisher_3
ParcelFloodbasin_VilFisher_1:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE, ParcelFloodbasin_VilFisher_10
ParcelFloodbasin_VilFisher_9:
# 331 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_8
# 337 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_VilFisher_14
# 342 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_VilFisher_21
# 347 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_6, MSGBOX_DEFAULT
# 348 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_2:
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_0, MSGBOX_DEFAULT
# 318 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_3:
# 316 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_2
	goto ParcelFloodbasin_VilFisher_1

ParcelFloodbasin_VilFisher_7:
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE_FOUND, ParcelFloodbasin_VilFisher_17
# 327 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_2, MSGBOX_DEFAULT
ParcelFloodbasin_VilFisher_16:
# 329 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_8:
# 332 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_3, MSGBOX_DEFAULT
# 333 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE
# 334 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_10:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_DONE, ParcelFloodbasin_VilFisher_7
	goto ParcelFloodbasin_VilFisher_9

ParcelFloodbasin_VilFisher_14:
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_4, MSGBOX_DEFAULT
# 339 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_17:
# 323 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_1, MSGBOX_DEFAULT
# 324 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_ANTIDOTE, 3
# 325 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE_DONE
	goto ParcelFloodbasin_VilFisher_16

ParcelFloodbasin_VilFisher_21:
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_5, MSGBOX_DEFAULT
# 344 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Discharge::
# 354 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 355 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 358 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 365 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 359 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 360 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 369 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 370 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 372 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 373 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 379 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 380 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 374 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 375 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 384 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 385 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 386 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 387 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 388 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 394 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 395 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 389 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 390 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 402 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 403 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 404 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 410 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 411 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 412 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 413 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 414 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 426 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 427 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 428 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 429 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 430 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 431 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 436 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 437 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 438 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 439 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 440 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 442 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 443 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_8, MSGBOX_DEFAULT
# 444 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 445 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_9, MSGBOX_DEFAULT
# 447 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_10, ParcelFloodbasin_Remediator_Text_11
# 450 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_12, MSGBOX_DEFAULT
# 451 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 452 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 432 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 433 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 458 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1, ParcelFloodbasin_BasinKidTrainer_FirstWin
# 462 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 463 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_3
ParcelFloodbasin_BasinKidTrainer_1:
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_8
ParcelFloodbasin_BasinKidTrainer_6:
# 469 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_13
ParcelFloodbasin_BasinKidTrainer_11:
# 472 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_BasinKidTrainer_18
ParcelFloodbasin_BasinKidTrainer_16:
# 475 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_BasinKidTrainer_2:
# 464 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_3:
# 463 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R2
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_2
	goto ParcelFloodbasin_BasinKidTrainer_1

ParcelFloodbasin_BasinKidTrainer_7:
# 467 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R3
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_8:
# 466 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R3
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_7
	goto ParcelFloodbasin_BasinKidTrainer_6

ParcelFloodbasin_BasinKidTrainer_12:
# 470 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R4
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_13:
# 469 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R4
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_12
	goto ParcelFloodbasin_BasinKidTrainer_11

ParcelFloodbasin_BasinKidTrainer_17:
# 473 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_BasinKidTrainer_R5
	goto ParcelFloodbasin_BasinKidTrainer_16

ParcelFloodbasin_BasinKidTrainer_18:
# 472 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_BASIN_KID_R5
	goto_if 0, ParcelFloodbasin_BasinKidTrainer_17
	goto ParcelFloodbasin_BasinKidTrainer_16


ParcelFloodbasin_BasinKidTrainer_FirstWin::
# 479 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
# 480 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R2::
# 484 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 485 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 486 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_0, MSGBOX_YESNO
# 487 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R2_2
# 492 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R2, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 493 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_3, MSGBOX_DEFAULT
# 494 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R2_2:
# 488 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 489 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R3::
# 498 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 499 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_0, MSGBOX_YESNO
# 501 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R3_2
# 506 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R3, ParcelFloodbasin_BasinKidTrainer_R3_Text_1
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R3_Text_2, MSGBOX_DEFAULT
# 508 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R3_2:
# 502 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 503 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R4::
# 512 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 513 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_0, MSGBOX_YESNO
# 515 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R4_2
# 520 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R4, ParcelFloodbasin_BasinKidTrainer_R4_Text_1
# 521 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R4_Text_2, MSGBOX_DEFAULT
# 522 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R4_2:
# 516 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 517 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer_R5::
# 526 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 527 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_0, MSGBOX_YESNO
# 529 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_BasinKidTrainer_R5_2
# 534 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_BASIN_KID_R5, ParcelFloodbasin_BasinKidTrainer_R2_Text_2
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R5_Text_1, MSGBOX_DEFAULT
# 536 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_BasinKidTrainer_R5_2:
# 530 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_R2_Text_1, MSGBOX_DEFAULT
# 531 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve::
# 540 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ARVE, ParcelFloodbasin_Arve_Text_0, ParcelFloodbasin_Arve_Text_1, ParcelFloodbasin_Arve_FirstWin
# 544 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 545 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Arve_3
ParcelFloodbasin_Arve_1:
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Arve_8
ParcelFloodbasin_Arve_6:
# 551 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Arve_13
ParcelFloodbasin_Arve_11:
# 554 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Arve_18
ParcelFloodbasin_Arve_16:
# 557 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Arve_2:
# 546 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_3:
# 545 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R2
	goto_if 0, ParcelFloodbasin_Arve_2
	goto ParcelFloodbasin_Arve_1

ParcelFloodbasin_Arve_7:
# 549 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R3
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_8:
# 548 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R3
	goto_if 0, ParcelFloodbasin_Arve_7
	goto ParcelFloodbasin_Arve_6

ParcelFloodbasin_Arve_12:
# 552 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R4
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_13:
# 551 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R4
	goto_if 0, ParcelFloodbasin_Arve_12
	goto ParcelFloodbasin_Arve_11

ParcelFloodbasin_Arve_17:
# 555 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Arve_R5
	goto ParcelFloodbasin_Arve_16

ParcelFloodbasin_Arve_18:
# 554 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ARVE_R5
	goto_if 0, ParcelFloodbasin_Arve_17
	goto ParcelFloodbasin_Arve_16


ParcelFloodbasin_Arve_FirstWin::
# 561 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
# 562 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R2::
# 566 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 567 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 568 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_0, MSGBOX_YESNO
# 569 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R2_2
# 574 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R2, ParcelFloodbasin_Arve_R2_Text_2
# 575 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_3, MSGBOX_DEFAULT
# 576 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R2_2:
# 570 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 571 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R3::
# 580 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 581 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_0, MSGBOX_YESNO
# 583 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R3_2
# 588 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R3, ParcelFloodbasin_Arve_R3_Text_1
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R3_Text_2, MSGBOX_DEFAULT
# 590 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R3_2:
# 584 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 585 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R4::
# 594 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 595 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_0, MSGBOX_YESNO
# 597 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R4_2
# 602 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R4, ParcelFloodbasin_Arve_R3_Text_1
# 603 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R4_Text_1, MSGBOX_DEFAULT
# 604 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R4_2:
# 598 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 599 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Arve_R5::
# 608 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 609 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_0, MSGBOX_YESNO
# 611 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Arve_R5_2
# 616 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ARVE_R5, ParcelFloodbasin_Arve_R5_Text_1
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R5_Text_2, MSGBOX_DEFAULT
# 618 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Arve_R5_2:
# 612 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_R2_Text_1, MSGBOX_DEFAULT
# 613 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai::
# 622 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_KAI, ParcelFloodbasin_Kai_Text_0, ParcelFloodbasin_Kai_Text_1, ParcelFloodbasin_Kai_FirstWin
# 626 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 627 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Kai_3
ParcelFloodbasin_Kai_1:
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Kai_8
ParcelFloodbasin_Kai_6:
# 633 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Kai_13
ParcelFloodbasin_Kai_11:
# 636 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Kai_18
ParcelFloodbasin_Kai_16:
# 639 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Kai_2:
# 628 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_3:
# 627 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R2
	goto_if 0, ParcelFloodbasin_Kai_2
	goto ParcelFloodbasin_Kai_1

ParcelFloodbasin_Kai_7:
# 631 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R3
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_8:
# 630 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R3
	goto_if 0, ParcelFloodbasin_Kai_7
	goto ParcelFloodbasin_Kai_6

ParcelFloodbasin_Kai_12:
# 634 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R4
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_13:
# 633 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R4
	goto_if 0, ParcelFloodbasin_Kai_12
	goto ParcelFloodbasin_Kai_11

ParcelFloodbasin_Kai_17:
# 637 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Kai_R5
	goto ParcelFloodbasin_Kai_16

ParcelFloodbasin_Kai_18:
# 636 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_KAI_R5
	goto_if 0, ParcelFloodbasin_Kai_17
	goto ParcelFloodbasin_Kai_16


ParcelFloodbasin_Kai_FirstWin::
# 643 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
# 644 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R2::
# 648 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 649 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 650 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_0, MSGBOX_YESNO
# 651 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R2_2
# 656 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R2, ParcelFloodbasin_Kai_R2_Text_2
# 657 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_3, MSGBOX_DEFAULT
# 658 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R2_2:
# 652 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 653 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R3::
# 662 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 663 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_0, MSGBOX_YESNO
# 665 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R3_2
# 670 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R3, ParcelFloodbasin_Kai_R3_Text_1
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R3_Text_2, MSGBOX_DEFAULT
# 672 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R3_2:
# 666 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 667 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R4::
# 676 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 677 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_0, MSGBOX_YESNO
# 679 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R4_2
# 684 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R4, ParcelFloodbasin_Kai_R4_Text_1
# 685 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R4_Text_2, MSGBOX_DEFAULT
# 686 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R4_2:
# 680 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 681 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Kai_R5::
# 690 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 691 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_0, MSGBOX_YESNO
# 693 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Kai_R5_2
# 698 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_KAI_R5, ParcelFloodbasin_Kai_R5_Text_1
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R5_Text_2, MSGBOX_DEFAULT
# 700 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Kai_R5_2:
# 694 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_R2_Text_1, MSGBOX_DEFAULT
# 695 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe::
# 704 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SIGNE, ParcelFloodbasin_Signe_Text_0, ParcelFloodbasin_Signe_Text_1, ParcelFloodbasin_Signe_FirstWin
# 708 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 709 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Signe_3
ParcelFloodbasin_Signe_1:
# 712 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Signe_8
ParcelFloodbasin_Signe_6:
# 715 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Signe_13
ParcelFloodbasin_Signe_11:
# 718 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Signe_18
ParcelFloodbasin_Signe_16:
# 721 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Signe_2:
# 710 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_3:
# 709 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R2
	goto_if 0, ParcelFloodbasin_Signe_2
	goto ParcelFloodbasin_Signe_1

ParcelFloodbasin_Signe_7:
# 713 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R3
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_8:
# 712 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R3
	goto_if 0, ParcelFloodbasin_Signe_7
	goto ParcelFloodbasin_Signe_6

ParcelFloodbasin_Signe_12:
# 716 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R4
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_13:
# 715 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R4
	goto_if 0, ParcelFloodbasin_Signe_12
	goto ParcelFloodbasin_Signe_11

ParcelFloodbasin_Signe_17:
# 719 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Signe_R5
	goto ParcelFloodbasin_Signe_16

ParcelFloodbasin_Signe_18:
# 718 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SIGNE_R5
	goto_if 0, ParcelFloodbasin_Signe_17
	goto ParcelFloodbasin_Signe_16


ParcelFloodbasin_Signe_FirstWin::
# 725 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
# 726 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R2::
# 730 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 731 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 732 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_0, MSGBOX_YESNO
# 733 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R2_2
# 738 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R2, ParcelFloodbasin_Signe_R2_Text_2
# 739 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_3, MSGBOX_DEFAULT
# 740 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R2_2:
# 734 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 735 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R3::
# 744 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 745 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_0, MSGBOX_YESNO
# 747 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R3_2
# 752 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R3, ParcelFloodbasin_Signe_R3_Text_1
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R3_Text_2, MSGBOX_DEFAULT
# 754 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R3_2:
# 748 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 749 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R4::
# 758 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 759 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_0, MSGBOX_YESNO
# 761 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R4_2
# 766 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R4, ParcelFloodbasin_Signe_R3_Text_1
# 767 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R4_Text_1, MSGBOX_DEFAULT
# 768 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R4_2:
# 762 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 763 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Signe_R5::
# 772 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 773 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_0, MSGBOX_YESNO
# 775 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Signe_R5_2
# 780 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SIGNE_R5, ParcelFloodbasin_Signe_R5_Text_1
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R5_Text_2, MSGBOX_DEFAULT
# 782 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Signe_R5_2:
# 776 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_R2_Text_1, MSGBOX_DEFAULT
# 777 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif::
# 786 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_LEIF, ParcelFloodbasin_Leif_Text_0, ParcelFloodbasin_Leif_Text_1, ParcelFloodbasin_Leif_FirstWin
# 790 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 791 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Leif_3
ParcelFloodbasin_Leif_1:
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Leif_8
ParcelFloodbasin_Leif_6:
# 797 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Leif_13
ParcelFloodbasin_Leif_11:
# 800 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Leif_18
ParcelFloodbasin_Leif_16:
# 803 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Leif_2:
# 792 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_3:
# 791 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R2
	goto_if 0, ParcelFloodbasin_Leif_2
	goto ParcelFloodbasin_Leif_1

ParcelFloodbasin_Leif_7:
# 795 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R3
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_8:
# 794 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R3
	goto_if 0, ParcelFloodbasin_Leif_7
	goto ParcelFloodbasin_Leif_6

ParcelFloodbasin_Leif_12:
# 798 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R4
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_13:
# 797 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R4
	goto_if 0, ParcelFloodbasin_Leif_12
	goto ParcelFloodbasin_Leif_11

ParcelFloodbasin_Leif_17:
# 801 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Leif_R5
	goto ParcelFloodbasin_Leif_16

ParcelFloodbasin_Leif_18:
# 800 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_LEIF_R5
	goto_if 0, ParcelFloodbasin_Leif_17
	goto ParcelFloodbasin_Leif_16


ParcelFloodbasin_Leif_FirstWin::
# 807 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
# 808 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R2::
# 812 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 813 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 814 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_0, MSGBOX_YESNO
# 815 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R2_2
# 820 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R2, ParcelFloodbasin_Leif_R2_Text_2
# 821 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_3, MSGBOX_DEFAULT
# 822 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R2_2:
# 816 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 817 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R3::
# 826 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 827 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_0, MSGBOX_YESNO
# 829 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R3_2
# 834 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R3, ParcelFloodbasin_Leif_R3_Text_1
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R3_Text_2, MSGBOX_DEFAULT
# 836 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R3_2:
# 830 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 831 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R4::
# 840 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 841 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_0, MSGBOX_YESNO
# 843 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R4_2
# 848 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R4, ParcelFloodbasin_Leif_R4_Text_1
# 849 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R4_Text_2, MSGBOX_DEFAULT
# 850 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R4_2:
# 844 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 845 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Leif_R5::
# 854 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 855 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_0, MSGBOX_YESNO
# 857 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Leif_R5_2
# 862 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_LEIF_R5, ParcelFloodbasin_Leif_R3_Text_1
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R5_Text_1, MSGBOX_DEFAULT
# 864 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Leif_R5_2:
# 858 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_R2_Text_1, MSGBOX_DEFAULT
# 859 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls::
# 868 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_TRULS, ParcelFloodbasin_Truls_Text_0, ParcelFloodbasin_Truls_Text_1, ParcelFloodbasin_Truls_FirstWin
# 872 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 873 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Truls_3
ParcelFloodbasin_Truls_1:
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Truls_8
ParcelFloodbasin_Truls_6:
# 879 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Truls_13
ParcelFloodbasin_Truls_11:
# 882 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Truls_18
ParcelFloodbasin_Truls_16:
# 885 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Truls_2:
# 874 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_3:
# 873 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R2
	goto_if 0, ParcelFloodbasin_Truls_2
	goto ParcelFloodbasin_Truls_1

ParcelFloodbasin_Truls_7:
# 877 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R3
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_8:
# 876 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R3
	goto_if 0, ParcelFloodbasin_Truls_7
	goto ParcelFloodbasin_Truls_6

ParcelFloodbasin_Truls_12:
# 880 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R4
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_13:
# 879 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R4
	goto_if 0, ParcelFloodbasin_Truls_12
	goto ParcelFloodbasin_Truls_11

ParcelFloodbasin_Truls_17:
# 883 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Truls_R5
	goto ParcelFloodbasin_Truls_16

ParcelFloodbasin_Truls_18:
# 882 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_TRULS_R5
	goto_if 0, ParcelFloodbasin_Truls_17
	goto ParcelFloodbasin_Truls_16


ParcelFloodbasin_Truls_FirstWin::
# 889 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
# 890 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R2::
# 894 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 895 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 896 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_0, MSGBOX_YESNO
# 897 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R2_2
# 902 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R2, ParcelFloodbasin_Truls_R2_Text_2
# 903 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_3, MSGBOX_DEFAULT
# 904 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R2_2:
# 898 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 899 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R3::
# 908 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 909 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_0, MSGBOX_YESNO
# 911 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R3_2
# 916 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R3, ParcelFloodbasin_Truls_R3_Text_1
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R3_Text_2, MSGBOX_DEFAULT
# 918 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R3_2:
# 912 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 913 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R4::
# 922 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 923 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_0, MSGBOX_YESNO
# 925 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R4_2
# 930 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R4, ParcelFloodbasin_Truls_R4_Text_1
# 931 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R4_Text_2, MSGBOX_DEFAULT
# 932 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R4_2:
# 926 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 927 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Truls_R5::
# 936 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 937 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_0, MSGBOX_YESNO
# 939 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Truls_R5_2
# 944 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_TRULS_R5, ParcelFloodbasin_Truls_R5_Text_1
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R5_Text_2, MSGBOX_DEFAULT
# 946 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Truls_R5_2:
# 940 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_R2_Text_1, MSGBOX_DEFAULT
# 941 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor::
# 950 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_HALVOR, ParcelFloodbasin_Halvor_Text_0, ParcelFloodbasin_Halvor_Text_1, ParcelFloodbasin_Halvor_FirstWin
# 954 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 955 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Halvor_3
ParcelFloodbasin_Halvor_1:
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Halvor_8
ParcelFloodbasin_Halvor_6:
# 961 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Halvor_13
ParcelFloodbasin_Halvor_11:
# 964 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Halvor_18
ParcelFloodbasin_Halvor_16:
# 967 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Halvor_2:
# 956 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_3:
# 955 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R2
	goto_if 0, ParcelFloodbasin_Halvor_2
	goto ParcelFloodbasin_Halvor_1

ParcelFloodbasin_Halvor_7:
# 959 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R3
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_8:
# 958 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R3
	goto_if 0, ParcelFloodbasin_Halvor_7
	goto ParcelFloodbasin_Halvor_6

ParcelFloodbasin_Halvor_12:
# 962 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R4
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_13:
# 961 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R4
	goto_if 0, ParcelFloodbasin_Halvor_12
	goto ParcelFloodbasin_Halvor_11

ParcelFloodbasin_Halvor_17:
# 965 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Halvor_R5
	goto ParcelFloodbasin_Halvor_16

ParcelFloodbasin_Halvor_18:
# 964 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_HALVOR_R5
	goto_if 0, ParcelFloodbasin_Halvor_17
	goto ParcelFloodbasin_Halvor_16


ParcelFloodbasin_Halvor_FirstWin::
# 971 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
# 972 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R2::
# 976 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 977 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 978 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_0, MSGBOX_YESNO
# 979 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R2_2
# 984 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R2, ParcelFloodbasin_Halvor_R2_Text_2
# 985 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_3, MSGBOX_DEFAULT
# 986 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R2_2:
# 980 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 981 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R3::
# 990 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 991 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_0, MSGBOX_YESNO
# 993 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R3_2
# 998 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R3, ParcelFloodbasin_Halvor_R3_Text_1
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R3_Text_2, MSGBOX_DEFAULT
# 1000 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R3_2:
# 994 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 995 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R4::
# 1004 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1005 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_0, MSGBOX_YESNO
# 1007 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R4_2
# 1012 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R4, ParcelFloodbasin_Halvor_R3_Text_1
# 1013 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R4_Text_1, MSGBOX_DEFAULT
# 1014 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R4_2:
# 1008 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 1009 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Halvor_R5::
# 1018 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1019 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_0, MSGBOX_YESNO
# 1021 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Halvor_R5_2
# 1026 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_HALVOR_R5, ParcelFloodbasin_Halvor_R5_Text_1
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R5_Text_2, MSGBOX_DEFAULT
# 1028 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Halvor_R5_2:
# 1022 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_R2_Text_1, MSGBOX_DEFAULT
# 1023 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja::
# 1032 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_MAJA, ParcelFloodbasin_Maja_Text_0, ParcelFloodbasin_Maja_Text_1, ParcelFloodbasin_Maja_FirstWin
# 1036 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1037 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Maja_3
ParcelFloodbasin_Maja_1:
# 1040 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Maja_8
ParcelFloodbasin_Maja_6:
# 1043 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Maja_13
ParcelFloodbasin_Maja_11:
# 1046 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Maja_18
ParcelFloodbasin_Maja_16:
# 1049 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Maja_2:
# 1038 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_3:
# 1037 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R2
	goto_if 0, ParcelFloodbasin_Maja_2
	goto ParcelFloodbasin_Maja_1

ParcelFloodbasin_Maja_7:
# 1041 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R3
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_8:
# 1040 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R3
	goto_if 0, ParcelFloodbasin_Maja_7
	goto ParcelFloodbasin_Maja_6

ParcelFloodbasin_Maja_12:
# 1044 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R4
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_13:
# 1043 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R4
	goto_if 0, ParcelFloodbasin_Maja_12
	goto ParcelFloodbasin_Maja_11

ParcelFloodbasin_Maja_17:
# 1047 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Maja_R5
	goto ParcelFloodbasin_Maja_16

ParcelFloodbasin_Maja_18:
# 1046 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_MAJA_R5
	goto_if 0, ParcelFloodbasin_Maja_17
	goto ParcelFloodbasin_Maja_16


ParcelFloodbasin_Maja_FirstWin::
# 1053 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
# 1054 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R2::
# 1058 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1059 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1060 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_0, MSGBOX_YESNO
# 1061 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R2_2
# 1066 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R2, ParcelFloodbasin_Maja_R2_Text_2
# 1067 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_3, MSGBOX_DEFAULT
# 1068 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R2_2:
# 1062 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1063 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R3::
# 1072 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1073 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_0, MSGBOX_YESNO
# 1075 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R3_2
# 1080 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R3, ParcelFloodbasin_Maja_R3_Text_1
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R3_Text_2, MSGBOX_DEFAULT
# 1082 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R3_2:
# 1076 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1077 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R4::
# 1086 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1087 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_0, MSGBOX_YESNO
# 1089 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R4_2
# 1094 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R4, ParcelFloodbasin_Maja_R4_Text_1
# 1095 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R4_Text_2, MSGBOX_DEFAULT
# 1096 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R4_2:
# 1090 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1091 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Maja_R5::
# 1100 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1101 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_0, MSGBOX_YESNO
# 1103 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Maja_R5_2
# 1108 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_MAJA_R5, ParcelFloodbasin_Maja_R5_Text_1
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R5_Text_2, MSGBOX_DEFAULT
# 1110 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Maja_R5_2:
# 1104 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_R2_Text_1, MSGBOX_DEFAULT
# 1105 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn::
# 1114 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_BJORN, ParcelFloodbasin_Bjorn_Text_0, ParcelFloodbasin_Bjorn_Text_1, ParcelFloodbasin_Bjorn_FirstWin
# 1118 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1119 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Bjorn_3
ParcelFloodbasin_Bjorn_1:
# 1122 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Bjorn_8
ParcelFloodbasin_Bjorn_6:
# 1125 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Bjorn_13
ParcelFloodbasin_Bjorn_11:
# 1128 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Bjorn_18
ParcelFloodbasin_Bjorn_16:
# 1131 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Bjorn_2:
# 1120 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_3:
# 1119 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R2
	goto_if 0, ParcelFloodbasin_Bjorn_2
	goto ParcelFloodbasin_Bjorn_1

ParcelFloodbasin_Bjorn_7:
# 1123 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R3
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_8:
# 1122 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R3
	goto_if 0, ParcelFloodbasin_Bjorn_7
	goto ParcelFloodbasin_Bjorn_6

ParcelFloodbasin_Bjorn_12:
# 1126 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R4
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_13:
# 1125 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R4
	goto_if 0, ParcelFloodbasin_Bjorn_12
	goto ParcelFloodbasin_Bjorn_11

ParcelFloodbasin_Bjorn_17:
# 1129 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Bjorn_R5
	goto ParcelFloodbasin_Bjorn_16

ParcelFloodbasin_Bjorn_18:
# 1128 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_BJORN_R5
	goto_if 0, ParcelFloodbasin_Bjorn_17
	goto ParcelFloodbasin_Bjorn_16


ParcelFloodbasin_Bjorn_FirstWin::
# 1135 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
# 1136 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R2::
# 1140 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1141 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1142 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_0, MSGBOX_YESNO
# 1143 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R2_2
# 1148 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R2, ParcelFloodbasin_Bjorn_R2_Text_2
# 1149 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_3, MSGBOX_DEFAULT
# 1150 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R2_2:
# 1144 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1145 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R3::
# 1154 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1155 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_0, MSGBOX_YESNO
# 1157 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R3_2
# 1162 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R3, ParcelFloodbasin_Bjorn_R3_Text_1
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R3_Text_2, MSGBOX_DEFAULT
# 1164 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R3_2:
# 1158 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1159 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R4::
# 1168 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1169 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_0, MSGBOX_YESNO
# 1171 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R4_2
# 1176 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R4, ParcelFloodbasin_Bjorn_R4_Text_1
# 1177 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R4_Text_2, MSGBOX_DEFAULT
# 1178 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R4_2:
# 1172 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1173 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Bjorn_R5::
# 1182 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1183 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_0, MSGBOX_YESNO
# 1185 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Bjorn_R5_2
# 1190 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_BJORN_R5, ParcelFloodbasin_Bjorn_R2_Text_2
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R5_Text_1, MSGBOX_DEFAULT
# 1192 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Bjorn_R5_2:
# 1186 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_R2_Text_1, MSGBOX_DEFAULT
# 1187 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig::
# 1196 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SOLVEIG, ParcelFloodbasin_Solveig_Text_0, ParcelFloodbasin_Solveig_Text_1, ParcelFloodbasin_Solveig_FirstWin
# 1200 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1201 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Solveig_3
ParcelFloodbasin_Solveig_1:
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Solveig_8
ParcelFloodbasin_Solveig_6:
# 1207 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Solveig_13
ParcelFloodbasin_Solveig_11:
# 1210 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Solveig_18
ParcelFloodbasin_Solveig_16:
# 1213 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Solveig_2:
# 1202 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_3:
# 1201 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R2
	goto_if 0, ParcelFloodbasin_Solveig_2
	goto ParcelFloodbasin_Solveig_1

ParcelFloodbasin_Solveig_7:
# 1205 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R3
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_8:
# 1204 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R3
	goto_if 0, ParcelFloodbasin_Solveig_7
	goto ParcelFloodbasin_Solveig_6

ParcelFloodbasin_Solveig_12:
# 1208 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R4
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_13:
# 1207 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R4
	goto_if 0, ParcelFloodbasin_Solveig_12
	goto ParcelFloodbasin_Solveig_11

ParcelFloodbasin_Solveig_17:
# 1211 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Solveig_R5
	goto ParcelFloodbasin_Solveig_16

ParcelFloodbasin_Solveig_18:
# 1210 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_SOLVEIG_R5
	goto_if 0, ParcelFloodbasin_Solveig_17
	goto ParcelFloodbasin_Solveig_16


ParcelFloodbasin_Solveig_FirstWin::
# 1217 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
# 1218 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R2::
# 1222 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1223 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1224 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_0, MSGBOX_YESNO
# 1225 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R2_2
# 1230 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R2, ParcelFloodbasin_Solveig_R2_Text_2
# 1231 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_3, MSGBOX_DEFAULT
# 1232 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R2_2:
# 1226 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1227 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R3::
# 1236 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1237 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_0, MSGBOX_YESNO
# 1239 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R3_2
# 1244 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R3, ParcelFloodbasin_Solveig_R3_Text_1
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R3_Text_2, MSGBOX_DEFAULT
# 1246 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R3_2:
# 1240 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1241 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R4::
# 1250 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1251 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_0, MSGBOX_YESNO
# 1253 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R4_2
# 1258 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R4, ParcelFloodbasin_Solveig_R4_Text_1
# 1259 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R4_Text_2, MSGBOX_DEFAULT
# 1260 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R4_2:
# 1254 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1255 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Solveig_R5::
# 1264 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1265 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_0, MSGBOX_YESNO
# 1267 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Solveig_R5_2
# 1272 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_SOLVEIG_R5, ParcelFloodbasin_Solveig_R3_Text_1
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R5_Text_1, MSGBOX_DEFAULT
# 1274 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Solveig_R5_2:
# 1268 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_R2_Text_1, MSGBOX_DEFAULT
# 1269 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils::
# 1278 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_NILS, ParcelFloodbasin_Nils_Text_0, ParcelFloodbasin_Nils_Text_1, ParcelFloodbasin_Nils_FirstWin
# 1282 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1283 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Nils_3
ParcelFloodbasin_Nils_1:
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Nils_8
ParcelFloodbasin_Nils_6:
# 1289 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Nils_13
ParcelFloodbasin_Nils_11:
# 1292 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Nils_18
ParcelFloodbasin_Nils_16:
# 1295 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Nils_2:
# 1284 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_3:
# 1283 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R2
	goto_if 0, ParcelFloodbasin_Nils_2
	goto ParcelFloodbasin_Nils_1

ParcelFloodbasin_Nils_7:
# 1287 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R3
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_8:
# 1286 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R3
	goto_if 0, ParcelFloodbasin_Nils_7
	goto ParcelFloodbasin_Nils_6

ParcelFloodbasin_Nils_12:
# 1290 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R4
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_13:
# 1289 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R4
	goto_if 0, ParcelFloodbasin_Nils_12
	goto ParcelFloodbasin_Nils_11

ParcelFloodbasin_Nils_17:
# 1293 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Nils_R5
	goto ParcelFloodbasin_Nils_16

ParcelFloodbasin_Nils_18:
# 1292 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_NILS_R5
	goto_if 0, ParcelFloodbasin_Nils_17
	goto ParcelFloodbasin_Nils_16


ParcelFloodbasin_Nils_FirstWin::
# 1299 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
# 1300 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R2::
# 1304 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1305 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1306 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_0, MSGBOX_YESNO
# 1307 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R2_2
# 1312 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R2, ParcelFloodbasin_Nils_R2_Text_2
# 1313 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_3, MSGBOX_DEFAULT
# 1314 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R2_2:
# 1308 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1309 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R3::
# 1318 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1319 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_0, MSGBOX_YESNO
# 1321 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R3_2
# 1326 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R3, ParcelFloodbasin_Nils_R3_Text_1
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R3_Text_2, MSGBOX_DEFAULT
# 1328 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R3_2:
# 1322 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1323 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R4::
# 1332 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1333 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_0, MSGBOX_YESNO
# 1335 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R4_2
# 1340 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R4, ParcelFloodbasin_Nils_R2_Text_2
# 1341 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R4_Text_1, MSGBOX_DEFAULT
# 1342 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R4_2:
# 1336 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1337 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Nils_R5::
# 1346 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1347 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_0, MSGBOX_YESNO
# 1349 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Nils_R5_2
# 1354 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_NILS_R5, ParcelFloodbasin_Nils_R5_Text_1
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R5_Text_2, MSGBOX_DEFAULT
# 1356 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Nils_R5_2:
# 1350 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_R2_Text_1, MSGBOX_DEFAULT
# 1351 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig::
# 1360 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_RANNVEIG, ParcelFloodbasin_Rannveig_Text_0, ParcelFloodbasin_Rannveig_Text_1, ParcelFloodbasin_Rannveig_FirstWin
# 1364 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1365 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Rannveig_3
ParcelFloodbasin_Rannveig_1:
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Rannveig_8
ParcelFloodbasin_Rannveig_6:
# 1371 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Rannveig_13
ParcelFloodbasin_Rannveig_11:
# 1374 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Rannveig_18
ParcelFloodbasin_Rannveig_16:
# 1377 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Rannveig_2:
# 1366 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_3:
# 1365 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R2
	goto_if 0, ParcelFloodbasin_Rannveig_2
	goto ParcelFloodbasin_Rannveig_1

ParcelFloodbasin_Rannveig_7:
# 1369 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R3
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_8:
# 1368 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R3
	goto_if 0, ParcelFloodbasin_Rannveig_7
	goto ParcelFloodbasin_Rannveig_6

ParcelFloodbasin_Rannveig_12:
# 1372 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R4
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_13:
# 1371 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R4
	goto_if 0, ParcelFloodbasin_Rannveig_12
	goto ParcelFloodbasin_Rannveig_11

ParcelFloodbasin_Rannveig_17:
# 1375 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Rannveig_R5
	goto ParcelFloodbasin_Rannveig_16

ParcelFloodbasin_Rannveig_18:
# 1374 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_RANNVEIG_R5
	goto_if 0, ParcelFloodbasin_Rannveig_17
	goto ParcelFloodbasin_Rannveig_16


ParcelFloodbasin_Rannveig_FirstWin::
# 1381 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
# 1382 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R2::
# 1386 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1387 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1388 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_0, MSGBOX_YESNO
# 1389 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R2_2
# 1394 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R2, ParcelFloodbasin_Rannveig_R2_Text_2
# 1395 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_3, MSGBOX_DEFAULT
# 1396 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R2_2:
# 1390 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1391 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R3::
# 1400 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1401 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_0, MSGBOX_YESNO
# 1403 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R3_2
# 1408 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R3, ParcelFloodbasin_Rannveig_R3_Text_1
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R3_Text_2, MSGBOX_DEFAULT
# 1410 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R3_2:
# 1404 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1405 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R4::
# 1414 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1415 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_0, MSGBOX_YESNO
# 1417 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R4_2
# 1422 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R4, ParcelFloodbasin_Rannveig_R3_Text_1
# 1423 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R4_Text_1, MSGBOX_DEFAULT
# 1424 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R4_2:
# 1418 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1419 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Rannveig_R5::
# 1428 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1429 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_0, MSGBOX_YESNO
# 1431 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Rannveig_R5_2
# 1436 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_RANNVEIG_R5, ParcelFloodbasin_Rannveig_R5_Text_1
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R5_Text_2, MSGBOX_DEFAULT
# 1438 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Rannveig_R5_2:
# 1432 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_R2_Text_1, MSGBOX_DEFAULT
# 1433 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar::
# 1442 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_EINAR, ParcelFloodbasin_Einar_Text_0, ParcelFloodbasin_Einar_Text_1, ParcelFloodbasin_Einar_FirstWin
# 1446 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1447 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Einar_3
ParcelFloodbasin_Einar_1:
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Einar_8
ParcelFloodbasin_Einar_6:
# 1453 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Einar_13
ParcelFloodbasin_Einar_11:
# 1456 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Einar_18
ParcelFloodbasin_Einar_16:
# 1459 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Einar_2:
# 1448 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_3:
# 1447 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R2
	goto_if 0, ParcelFloodbasin_Einar_2
	goto ParcelFloodbasin_Einar_1

ParcelFloodbasin_Einar_7:
# 1451 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R3
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_8:
# 1450 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R3
	goto_if 0, ParcelFloodbasin_Einar_7
	goto ParcelFloodbasin_Einar_6

ParcelFloodbasin_Einar_12:
# 1454 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R4
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_13:
# 1453 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R4
	goto_if 0, ParcelFloodbasin_Einar_12
	goto ParcelFloodbasin_Einar_11

ParcelFloodbasin_Einar_17:
# 1457 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Einar_R5
	goto ParcelFloodbasin_Einar_16

ParcelFloodbasin_Einar_18:
# 1456 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_EINAR_R5
	goto_if 0, ParcelFloodbasin_Einar_17
	goto ParcelFloodbasin_Einar_16


ParcelFloodbasin_Einar_FirstWin::
# 1463 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
# 1464 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R2::
# 1468 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1469 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1470 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_0, MSGBOX_YESNO
# 1471 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R2_2
# 1476 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R2, ParcelFloodbasin_Einar_R2_Text_2
# 1477 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_3, MSGBOX_DEFAULT
# 1478 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R2_2:
# 1472 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1473 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R3::
# 1482 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1483 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_0, MSGBOX_YESNO
# 1485 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R3_2
# 1490 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R3, ParcelFloodbasin_Einar_R2_Text_2
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R3_Text_1, MSGBOX_DEFAULT
# 1492 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R3_2:
# 1486 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1487 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R4::
# 1496 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1497 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_0, MSGBOX_YESNO
# 1499 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R4_2
# 1504 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R4, ParcelFloodbasin_Einar_R2_Text_2
# 1505 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R4_Text_1, MSGBOX_DEFAULT
# 1506 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R4_2:
# 1500 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1501 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Einar_R5::
# 1510 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1511 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_0, MSGBOX_YESNO
# 1513 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Einar_R5_2
# 1518 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_EINAR_R5, ParcelFloodbasin_Einar_R5_Text_1
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R5_Text_2, MSGBOX_DEFAULT
# 1520 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Einar_R5_2:
# 1514 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_R2_Text_1, MSGBOX_DEFAULT
# 1515 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla::
# 1524 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STURLA, ParcelFloodbasin_Sturla_Text_0, ParcelFloodbasin_Sturla_Text_1, ParcelFloodbasin_Sturla_FirstWin
# 1528 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1529 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Sturla_3
ParcelFloodbasin_Sturla_1:
# 1532 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Sturla_8
ParcelFloodbasin_Sturla_6:
# 1535 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Sturla_13
ParcelFloodbasin_Sturla_11:
# 1538 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Sturla_18
ParcelFloodbasin_Sturla_16:
# 1541 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Sturla_2:
# 1530 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_3:
# 1529 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R2
	goto_if 0, ParcelFloodbasin_Sturla_2
	goto ParcelFloodbasin_Sturla_1

ParcelFloodbasin_Sturla_7:
# 1533 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R3
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_8:
# 1532 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R3
	goto_if 0, ParcelFloodbasin_Sturla_7
	goto ParcelFloodbasin_Sturla_6

ParcelFloodbasin_Sturla_12:
# 1536 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R4
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_13:
# 1535 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R4
	goto_if 0, ParcelFloodbasin_Sturla_12
	goto ParcelFloodbasin_Sturla_11

ParcelFloodbasin_Sturla_17:
# 1539 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Sturla_R5
	goto ParcelFloodbasin_Sturla_16

ParcelFloodbasin_Sturla_18:
# 1538 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STURLA_R5
	goto_if 0, ParcelFloodbasin_Sturla_17
	goto ParcelFloodbasin_Sturla_16


ParcelFloodbasin_Sturla_FirstWin::
# 1545 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
# 1546 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R2::
# 1550 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1551 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1552 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_0, MSGBOX_YESNO
# 1553 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R2_2
# 1558 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R2, ParcelFloodbasin_Sturla_R2_Text_2
# 1559 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_3, MSGBOX_DEFAULT
# 1560 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R2_2:
# 1554 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1555 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R3::
# 1564 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1565 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1566 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_0, MSGBOX_YESNO
# 1567 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R3_2
# 1572 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R3, ParcelFloodbasin_Sturla_R3_Text_1
# 1573 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R3_Text_2, MSGBOX_DEFAULT
# 1574 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R3_2:
# 1568 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1569 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R4::
# 1578 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1579 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1580 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_0, MSGBOX_YESNO
# 1581 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R4_2
# 1586 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R4, ParcelFloodbasin_Sturla_R4_Text_1
# 1587 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R4_Text_2, MSGBOX_DEFAULT
# 1588 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R4_2:
# 1582 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1583 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sturla_R5::
# 1592 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1593 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1594 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_0, MSGBOX_YESNO
# 1595 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Sturla_R5_2
# 1600 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STURLA_R5, ParcelFloodbasin_Sturla_R5_Text_1
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R5_Text_2, MSGBOX_DEFAULT
# 1602 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sturla_R5_2:
# 1596 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_R2_Text_1, MSGBOX_DEFAULT
# 1597 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar::
# 1606 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_OSKAR, ParcelFloodbasin_Oskar_Text_0, ParcelFloodbasin_Oskar_Text_1, ParcelFloodbasin_Oskar_FirstWin
# 1610 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1611 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_Oskar_3
ParcelFloodbasin_Oskar_1:
# 1614 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_Oskar_8
ParcelFloodbasin_Oskar_6:
# 1617 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_Oskar_13
ParcelFloodbasin_Oskar_11:
# 1620 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_Oskar_18
ParcelFloodbasin_Oskar_16:
# 1623 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_Oskar_2:
# 1612 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_3:
# 1611 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R2
	goto_if 0, ParcelFloodbasin_Oskar_2
	goto ParcelFloodbasin_Oskar_1

ParcelFloodbasin_Oskar_7:
# 1615 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R3
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_8:
# 1614 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R3
	goto_if 0, ParcelFloodbasin_Oskar_7
	goto ParcelFloodbasin_Oskar_6

ParcelFloodbasin_Oskar_12:
# 1618 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R4
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_13:
# 1617 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R4
	goto_if 0, ParcelFloodbasin_Oskar_12
	goto ParcelFloodbasin_Oskar_11

ParcelFloodbasin_Oskar_17:
# 1621 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_Oskar_R5
	goto ParcelFloodbasin_Oskar_16

ParcelFloodbasin_Oskar_18:
# 1620 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_OSKAR_R5
	goto_if 0, ParcelFloodbasin_Oskar_17
	goto ParcelFloodbasin_Oskar_16


ParcelFloodbasin_Oskar_FirstWin::
# 1627 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
# 1628 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R2::
# 1632 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1633 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1634 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_0, MSGBOX_YESNO
# 1635 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R2_2
# 1640 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R2, ParcelFloodbasin_Oskar_R2_Text_2
# 1641 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_3, MSGBOX_DEFAULT
# 1642 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R2_2:
# 1636 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1637 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R3::
# 1646 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1647 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1648 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_0, MSGBOX_YESNO
# 1649 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R3_2
# 1654 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R3, ParcelFloodbasin_Oskar_R3_Text_1
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R3_Text_2, MSGBOX_DEFAULT
# 1656 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R3_2:
# 1650 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1651 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R4::
# 1660 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1661 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_0, MSGBOX_YESNO
# 1663 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R4_2
# 1668 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R4, ParcelFloodbasin_Oskar_R4_Text_1
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R4_Text_2, MSGBOX_DEFAULT
# 1670 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R4_2:
# 1664 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1665 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Oskar_R5::
# 1674 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1675 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1676 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_0, MSGBOX_YESNO
# 1677 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_Oskar_R5_2
# 1682 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_OSKAR_R5, ParcelFloodbasin_Oskar_R3_Text_1
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R5_Text_1, MSGBOX_DEFAULT
# 1684 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Oskar_R5_2:
# 1678 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_R2_Text_1, MSGBOX_DEFAULT
# 1679 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_ItemRevive::
# 1689 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_ItemSuperPotion::
# 1690 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFloodbasin_ItemGreatBall::
# 1691 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelFloodbasin_SignHamlet::
# 1694 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SignHamlet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Checkpoint::
# 1702 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_Checkpoint_2
# 1706 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_0, MSGBOX_DEFAULT
# 1708 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1709 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenApproach
# 1710 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1711 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FLD_FaceLeft
# 1712 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1713 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_1, MSGBOX_DEFAULT
# 1714 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_2, MSGBOX_YESNO
# 1715 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Checkpoint_5
# 1718 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_4, MSGBOX_DEFAULT
# 1719 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_EXAM_3
ParcelFloodbasin_Checkpoint_4:
# 1721 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3, ParcelFloodbasin_Checkpoint_Text_5
# 1722 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_BADGE03_GET
# 1723 "data/maps/ParcelFloodbasin/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_6, MSGBOX_DEFAULT
# 1725 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_HM06
# 1726 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_7, MSGBOX_DEFAULT
# 1727 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 1728 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenAside
# 1729 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 1730 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
# 1731 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_Checkpoint_2:
# 1703 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
	end

ParcelFloodbasin_Checkpoint_5:
# 1716 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Checkpoint_4


ParcelFloodbasin_GymBreen::
# 1735 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1736 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1737 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_GymBreen_2
ParcelFloodbasin_GymBreen_1:
# 1740 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Text_0, MSGBOX_DEFAULT
# 1741 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_2:
# 1738 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_GymBreen_Rematch
	goto ParcelFloodbasin_GymBreen_1


# 1744 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenApproach:
# 1744 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
# 1744 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
	step_end

# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenAside:
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_down
# 1745 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
	step_end

# 1746 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_FaceLeft:
# 1746 "data/maps/ParcelFloodbasin/scripts.pory"
	face_left
	step_end

ParcelFloodbasin_T_Anders::
# 1750 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ANDERS, ParcelFloodbasin_T_Anders_Text_0, ParcelFloodbasin_T_Anders_Text_1, ParcelFloodbasin_T_Anders_FirstWin
# 1754 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1755 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Anders_3
ParcelFloodbasin_T_Anders_1:
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Anders_8
ParcelFloodbasin_T_Anders_6:
# 1761 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Anders_13
ParcelFloodbasin_T_Anders_11:
# 1764 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Anders_18
ParcelFloodbasin_T_Anders_16:
# 1767 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Anders_2:
# 1756 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_3:
# 1755 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R2
	goto_if 0, ParcelFloodbasin_T_Anders_2
	goto ParcelFloodbasin_T_Anders_1

ParcelFloodbasin_T_Anders_7:
# 1759 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R3
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_8:
# 1758 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R3
	goto_if 0, ParcelFloodbasin_T_Anders_7
	goto ParcelFloodbasin_T_Anders_6

ParcelFloodbasin_T_Anders_12:
# 1762 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R4
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_13:
# 1761 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R4
	goto_if 0, ParcelFloodbasin_T_Anders_12
	goto ParcelFloodbasin_T_Anders_11

ParcelFloodbasin_T_Anders_17:
# 1765 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Anders_R5
	goto ParcelFloodbasin_T_Anders_16

ParcelFloodbasin_T_Anders_18:
# 1764 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ANDERS_R5
	goto_if 0, ParcelFloodbasin_T_Anders_17
	goto ParcelFloodbasin_T_Anders_16


ParcelFloodbasin_T_Anders_FirstWin::
# 1771 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_Text_2, MSGBOX_DEFAULT
# 1772 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R2::
# 1776 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1777 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1778 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_0, MSGBOX_YESNO
# 1779 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R2_2
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R2, ParcelFloodbasin_T_Anders_R2_Text_2
# 1785 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_3, MSGBOX_DEFAULT
# 1786 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R2_2:
# 1780 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1781 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R3::
# 1790 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1791 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_0, MSGBOX_YESNO
# 1793 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R3_2
# 1798 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R3, ParcelFloodbasin_T_Anders_R3_Text_1
# 1799 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R3_Text_2, MSGBOX_DEFAULT
# 1800 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R3_2:
# 1794 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1795 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R4::
# 1804 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1805 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_0, MSGBOX_YESNO
# 1807 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R4_2
# 1812 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R4, ParcelFloodbasin_T_Anders_R4_Text_1
# 1813 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R4_Text_2, MSGBOX_DEFAULT
# 1814 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R4_2:
# 1808 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1809 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Anders_R5::
# 1818 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1819 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_0, MSGBOX_YESNO
# 1821 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Anders_R5_2
# 1826 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ANDERS_R5, ParcelFloodbasin_T_Anders_R4_Text_1
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R5_Text_1, MSGBOX_DEFAULT
# 1828 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Anders_R5_2:
# 1822 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Anders_R2_Text_1, MSGBOX_DEFAULT
# 1823 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald::
# 1832 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ROALD, ParcelFloodbasin_T_Roald_Text_0, ParcelFloodbasin_T_Roald_Text_1, ParcelFloodbasin_T_Roald_FirstWin
# 1836 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1837 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Roald_3
ParcelFloodbasin_T_Roald_1:
# 1840 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Roald_8
ParcelFloodbasin_T_Roald_6:
# 1843 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Roald_13
ParcelFloodbasin_T_Roald_11:
# 1846 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Roald_18
ParcelFloodbasin_T_Roald_16:
# 1849 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Roald_2:
# 1838 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_3:
# 1837 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R2
	goto_if 0, ParcelFloodbasin_T_Roald_2
	goto ParcelFloodbasin_T_Roald_1

ParcelFloodbasin_T_Roald_7:
# 1841 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R3
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_8:
# 1840 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R3
	goto_if 0, ParcelFloodbasin_T_Roald_7
	goto ParcelFloodbasin_T_Roald_6

ParcelFloodbasin_T_Roald_12:
# 1844 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R4
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_13:
# 1843 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R4
	goto_if 0, ParcelFloodbasin_T_Roald_12
	goto ParcelFloodbasin_T_Roald_11

ParcelFloodbasin_T_Roald_17:
# 1847 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Roald_R5
	goto ParcelFloodbasin_T_Roald_16

ParcelFloodbasin_T_Roald_18:
# 1846 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_ROALD_R5
	goto_if 0, ParcelFloodbasin_T_Roald_17
	goto ParcelFloodbasin_T_Roald_16


ParcelFloodbasin_T_Roald_FirstWin::
# 1853 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_Text_2, MSGBOX_DEFAULT
# 1854 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R2::
# 1858 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1859 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1860 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_0, MSGBOX_YESNO
# 1861 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R2_2
# 1866 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R2, ParcelFloodbasin_T_Roald_R2_Text_2
# 1867 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_3, MSGBOX_DEFAULT
# 1868 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R2_2:
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1863 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R3::
# 1872 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1873 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1874 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_0, MSGBOX_YESNO
# 1875 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R3_2
# 1880 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R3, ParcelFloodbasin_T_Roald_R2_Text_2
# 1881 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R3_Text_1, MSGBOX_DEFAULT
# 1882 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R3_2:
# 1876 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1877 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R4::
# 1886 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1887 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1888 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_0, MSGBOX_YESNO
# 1889 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R4_2
# 1894 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R4, ParcelFloodbasin_T_Roald_R4_Text_1
# 1895 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R4_Text_2, MSGBOX_DEFAULT
# 1896 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R4_2:
# 1890 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1891 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Roald_R5::
# 1900 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1901 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1902 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_0, MSGBOX_YESNO
# 1903 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Roald_R5_2
# 1908 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_ROALD_R5, ParcelFloodbasin_T_Roald_R5_Text_1
# 1909 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R5_Text_2, MSGBOX_DEFAULT
# 1910 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Roald_R5_2:
# 1904 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Roald_R2_Text_1, MSGBOX_DEFAULT
# 1905 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein::
# 1914 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STEIN, ParcelFloodbasin_T_Stein_Text_0, ParcelFloodbasin_T_Stein_Text_1, ParcelFloodbasin_T_Stein_FirstWin
# 1918 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1919 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFloodbasin_T_Stein_3
ParcelFloodbasin_T_Stein_1:
# 1922 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFloodbasin_T_Stein_8
ParcelFloodbasin_T_Stein_6:
# 1925 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFloodbasin_T_Stein_13
ParcelFloodbasin_T_Stein_11:
# 1928 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFloodbasin_T_Stein_18
ParcelFloodbasin_T_Stein_16:
# 1931 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
	end

ParcelFloodbasin_T_Stein_2:
# 1920 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_3:
# 1919 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R2
	goto_if 0, ParcelFloodbasin_T_Stein_2
	goto ParcelFloodbasin_T_Stein_1

ParcelFloodbasin_T_Stein_7:
# 1923 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R3
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_8:
# 1922 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R3
	goto_if 0, ParcelFloodbasin_T_Stein_7
	goto ParcelFloodbasin_T_Stein_6

ParcelFloodbasin_T_Stein_12:
# 1926 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R4
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_13:
# 1925 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R4
	goto_if 0, ParcelFloodbasin_T_Stein_12
	goto ParcelFloodbasin_T_Stein_11

ParcelFloodbasin_T_Stein_17:
# 1929 "data/maps/ParcelFloodbasin/scripts.pory"
	goto ParcelFloodbasin_T_Stein_R5
	goto ParcelFloodbasin_T_Stein_16

ParcelFloodbasin_T_Stein_18:
# 1928 "data/maps/ParcelFloodbasin/scripts.pory"
	checktrainerflag TRAINER_SKALD_FLD_STEIN_R5
	goto_if 0, ParcelFloodbasin_T_Stein_17
	goto ParcelFloodbasin_T_Stein_16


ParcelFloodbasin_T_Stein_FirstWin::
# 1935 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_Text_2, MSGBOX_DEFAULT
# 1936 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R2::
# 1940 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1941 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1942 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_0, MSGBOX_YESNO
# 1943 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R2_2
# 1948 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R2, ParcelFloodbasin_T_Stein_R2_Text_2
# 1949 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_3, MSGBOX_DEFAULT
# 1950 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R2_2:
# 1944 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1945 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R3::
# 1954 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1955 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1956 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_0, MSGBOX_YESNO
# 1957 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R3_2
# 1962 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R3, ParcelFloodbasin_T_Stein_R3_Text_1
# 1963 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R3_Text_2, MSGBOX_DEFAULT
# 1964 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R3_2:
# 1958 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1959 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R4::
# 1968 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1969 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1970 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_0, MSGBOX_YESNO
# 1971 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R4_2
# 1976 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R4, ParcelFloodbasin_T_Stein_R3_Text_1
# 1977 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R4_Text_1, MSGBOX_DEFAULT
# 1978 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R4_2:
# 1972 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1973 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_T_Stein_R5::
# 1982 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 1983 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 1984 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_0, MSGBOX_YESNO
# 1985 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_T_Stein_R5_2
# 1990 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FLD_STEIN_R5, ParcelFloodbasin_T_Stein_R5_Text_1
# 1991 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R5_Text_2, MSGBOX_DEFAULT
# 1992 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_T_Stein_R5_2:
# 1986 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_T_Stein_R2_Text_1, MSGBOX_DEFAULT
# 1987 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Epilogue::
# 1998 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 1999 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 20
# 2000 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_0, MSGBOX_DEFAULT
# 2001 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Epilogue_Text_1, MSGBOX_DEFAULT
# 2002 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 2003 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 3
# 2004 "data/maps/ParcelFloodbasin/scripts.pory"
	warp MAP_PARCEL_RIVER, 16, 30
# 2005 "data/maps/ParcelFloodbasin/scripts.pory"
	waitstate
	end


ParcelFloodbasin_GymBreen_Rematch::
# 2011 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2012 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2013 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_0, MSGBOX_YESNO
# 2014 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFloodbasin_GymBreen_Rematch_2
# 2019 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3_R, ParcelFloodbasin_GymBreen_Rematch_Text_2
# 2020 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_3, MSGBOX_DEFAULT
# 2021 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_GymBreen_Rematch_2:
# 2015 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Rematch_Text_1, MSGBOX_DEFAULT
# 2016 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_TarpRoof::
# 2026 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_ROOF, ParcelFloodbasin_TarpRoof_2
# 2029 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_TarpRoof_Text_0, MSGBOX_SIGN
# 2030 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_ROOF_FOUND
	end

ParcelFloodbasin_TarpRoof_2:
	end


ParcelFloodbasin_MarkA::
# 2035 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkA_3
ParcelFloodbasin_MarkA_1:
# 2040 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkA_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkA_2:
# 2036 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkA_Text_0, MSGBOX_SIGN
# 2037 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_A
	end

ParcelFloodbasin_MarkA_3:
# 2035 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_A, ParcelFloodbasin_MarkA_2
	goto ParcelFloodbasin_MarkA_1


ParcelFloodbasin_MarkB::
# 2045 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkB_3
ParcelFloodbasin_MarkB_1:
# 2050 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkB_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkB_2:
# 2046 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkB_Text_0, MSGBOX_SIGN
# 2047 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_B
	end

ParcelFloodbasin_MarkB_3:
# 2045 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_B, ParcelFloodbasin_MarkB_2
	goto ParcelFloodbasin_MarkB_1


ParcelFloodbasin_MarkC::
# 2055 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BROWN, ParcelFloodbasin_MarkC_3
ParcelFloodbasin_MarkC_1:
# 2060 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkC_Text_1, MSGBOX_SIGN
	end

ParcelFloodbasin_MarkC_2:
# 2056 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_MarkC_Text_0, MSGBOX_SIGN
# 2057 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_BROWN_C
	end

ParcelFloodbasin_MarkC_3:
# 2055 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BROWN_C, ParcelFloodbasin_MarkC_2
	goto ParcelFloodbasin_MarkC_1


ParcelFloodbasin_SurveyStake::
# 2066 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SurveyStake_Text_0, MSGBOX_SIGN
# 2067 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 2068 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldSurveyStake
# 2069 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 2070 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelFloodbasin_SurveyStake_3
ParcelFloodbasin_SurveyStake_1:
	end

ParcelFloodbasin_SurveyStake_2:
# 2071 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SurveyStake_Text_1, MSGBOX_SIGN
# 2072 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_SECOND_2
	goto ParcelFloodbasin_SurveyStake_1

ParcelFloodbasin_SurveyStake_3:
# 2070 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_2, ParcelFloodbasin_SurveyStake_2
	goto ParcelFloodbasin_SurveyStake_1


ParcelFloodbasin_PairBlankets::
# 2080 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2081 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBlankets_2
# 2086 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBlankets_3
# 2092 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_8, MSGBOX_DEFAULT
# 2093 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_9, MSGBOX_DEFAULT
# 2094 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_10, MSGBOX_DEFAULT
# 2095 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_11, MSGBOX_DEFAULT
ParcelFloodbasin_PairBlankets_1:
# 2097 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBlankets_2:
# 2082 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_0, MSGBOX_DEFAULT
# 2083 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_1, MSGBOX_DEFAULT
# 2084 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_2, MSGBOX_DEFAULT
# 2085 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBlankets_1

ParcelFloodbasin_PairBlankets_3:
# 2087 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_4, MSGBOX_DEFAULT
# 2088 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_5, MSGBOX_DEFAULT
# 2089 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_6, MSGBOX_DEFAULT
# 2090 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBlankets_Text_7, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBlankets_1


ParcelFloodbasin_PairBoat::
# 2102 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2103 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBoat_2
# 2109 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBoat_3
# 2115 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_9, MSGBOX_DEFAULT
# 2116 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_10, MSGBOX_DEFAULT
# 2117 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_11, MSGBOX_DEFAULT
# 2118 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_12, MSGBOX_DEFAULT
# 2119 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_13, MSGBOX_DEFAULT
ParcelFloodbasin_PairBoat_1:
# 2121 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBoat_2:
# 2104 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_0, MSGBOX_DEFAULT
# 2105 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_1, MSGBOX_DEFAULT
# 2106 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_2, MSGBOX_DEFAULT
# 2107 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_3, MSGBOX_DEFAULT
# 2108 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_4, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBoat_1

ParcelFloodbasin_PairBoat_3:
# 2110 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_5, MSGBOX_DEFAULT
# 2111 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_6, MSGBOX_DEFAULT
# 2112 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_7, MSGBOX_DEFAULT
# 2113 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBoat_Text_8, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBoat_1


ParcelFloodbasin_Stringer::
# 2128 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2129 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2130 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_Stringer_2
# 2132 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_Stringer_3
# 2135 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_2, MSGBOX_DEFAULT
ParcelFloodbasin_Stringer_1:
# 2137 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Stringer_2:
# 2131 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Stringer_1

ParcelFloodbasin_Stringer_3:
# 2133 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelFloodbasin_Stringer_1


ParcelFloodbasin_WellWoman::
# 2144 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2145 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 2146 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFloodbasin_WellWoman_3
ParcelFloodbasin_WellWoman_1:
# 2151 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_DONE, ParcelFloodbasin_WellWoman_7
# 2153 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE, ParcelFloodbasin_WellWoman_8
# 2162 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_4, MSGBOX_DEFAULT
# 2163 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE
ParcelFloodbasin_WellWoman_6:
# 2165 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_WellWoman_2:
# 2147 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_0, MSGBOX_DEFAULT
# 2148 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_WellWoman_3:
# 2146 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_DONE, ParcelFloodbasin_WellWoman_2
	goto ParcelFloodbasin_WellWoman_1

ParcelFloodbasin_WellWoman_7:
# 2152 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_1, MSGBOX_DEFAULT
	goto ParcelFloodbasin_WellWoman_6

ParcelFloodbasin_WellWoman_8:
# 2154 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_PLATE_FOUND, ParcelFloodbasin_WellWoman_12
# 2159 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_3, MSGBOX_DEFAULT
	goto ParcelFloodbasin_WellWoman_6

ParcelFloodbasin_WellWoman_12:
# 2155 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_WellWoman_Text_2, MSGBOX_DEFAULT
# 2156 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_FULL_HEAL, 2
# 2157 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_PLATE_DONE
	goto ParcelFloodbasin_WellWoman_6


ParcelFloodbasin_FindDeadline::
# 2172 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEADLINE, ParcelFloodbasin_FindDeadline_4
ParcelFloodbasin_FindDeadline_3:
# 2176 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindDeadline_Text_1, MSGBOX_SIGN
ParcelFloodbasin_FindDeadline_1:
	end

ParcelFloodbasin_FindDeadline_2:
# 2173 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindDeadline_Text_0, MSGBOX_SIGN
# 2174 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_DEADLINE_FOUND
	goto ParcelFloodbasin_FindDeadline_1

ParcelFloodbasin_FindDeadline_4:
# 2172 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEADLINE_FOUND, ParcelFloodbasin_FindDeadline_2
	goto ParcelFloodbasin_FindDeadline_3


ParcelFloodbasin_PairBank::
# 2182 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2183 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairBank_2
# 2187 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairBank_3
# 2193 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_7, MSGBOX_DEFAULT
# 2194 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_8, MSGBOX_DEFAULT
# 2195 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_9, MSGBOX_DEFAULT
# 2196 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_10, MSGBOX_DEFAULT
ParcelFloodbasin_PairBank_1:
# 2198 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairBank_2:
# 2184 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_0, MSGBOX_DEFAULT
# 2185 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_1, MSGBOX_DEFAULT
# 2186 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_2, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBank_1

ParcelFloodbasin_PairBank_3:
# 2188 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_3, MSGBOX_DEFAULT
# 2189 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_4, MSGBOX_DEFAULT
# 2190 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_5, MSGBOX_DEFAULT
# 2191 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairBank_Text_6, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairBank_1


ParcelFloodbasin_Board1::
# 2205 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board1_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Board2::
# 2210 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board2_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_FindVoucher::
# 2217 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_Q_VOUCHER, ParcelFloodbasin_FindVoucher_4
ParcelFloodbasin_FindVoucher_3:
# 2221 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindVoucher_Text_1, MSGBOX_SIGN
ParcelFloodbasin_FindVoucher_1:
	end

ParcelFloodbasin_FindVoucher_2:
# 2218 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FindVoucher_Text_0, MSGBOX_SIGN
# 2219 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_Q_VOUCHER_FOUND
	goto ParcelFloodbasin_FindVoucher_1

ParcelFloodbasin_FindVoucher_4:
# 2217 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_VOUCHER_FOUND, ParcelFloodbasin_FindVoucher_2
	goto ParcelFloodbasin_FindVoucher_3


ParcelFloodbasin_Board3::
# 2229 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board3_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Board4::
# 2236 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board4_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_PairLevee::
# 2243 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2244 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairLevee_2
# 2248 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairLevee_3
# 2253 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_6, MSGBOX_DEFAULT
# 2254 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_7, MSGBOX_DEFAULT
# 2255 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_8, MSGBOX_DEFAULT
ParcelFloodbasin_PairLevee_1:
# 2257 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairLevee_2:
# 2245 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_0, MSGBOX_DEFAULT
# 2246 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_1, MSGBOX_DEFAULT
# 2247 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_2, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairLevee_1

ParcelFloodbasin_PairLevee_3:
# 2249 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_3, MSGBOX_DEFAULT
# 2250 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_4, MSGBOX_DEFAULT
# 2251 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairLevee_Text_5, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairLevee_1


ParcelFloodbasin_Board10::
# 2264 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board10_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_PairTents::
# 2271 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 2272 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFloodbasin_PairTents_2
# 2279 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFloodbasin_PairTents_3
# 2285 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_10, MSGBOX_DEFAULT
# 2286 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_11, MSGBOX_DEFAULT
# 2287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_12, MSGBOX_DEFAULT
# 2288 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_3, MSGBOX_DEFAULT
# 2289 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_13, MSGBOX_DEFAULT
ParcelFloodbasin_PairTents_1:
# 2291 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_PairTents_2:
# 2273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_0, MSGBOX_DEFAULT
# 2274 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_1, MSGBOX_DEFAULT
# 2275 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_2, MSGBOX_DEFAULT
# 2276 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_3, MSGBOX_DEFAULT
# 2277 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_4, MSGBOX_DEFAULT
# 2278 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_5, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairTents_1

ParcelFloodbasin_PairTents_3:
# 2280 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_6, MSGBOX_DEFAULT
# 2281 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_7, MSGBOX_DEFAULT
# 2282 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_8, MSGBOX_DEFAULT
# 2283 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_PairTents_Text_9, MSGBOX_DEFAULT
	goto ParcelFloodbasin_PairTents_1


ParcelFloodbasin_Board11::
# 2298 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Board11_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_FirstEntry_Text_0:
# 64 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The trees open onto a low, wide basin.\n"
	.string "Rain ticks on the reeds.\p"
	.string "Something is wrong with the smell.$"

ParcelFloodbasin_FirstEntry_Text_1:
# 65 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{STR_VAR_1} walks on, but slower,\n"
	.string "and keeps to the middle of the path.$"

ParcelFloodbasin_FirstEntry_Text_2:
# 66 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALE's brief, on paper: LEGACY\n"
	.string "CONTAMINATION. OWNERSHIP\l"
	.string "UNCONTESTED. ACTIVE REMEDIATION\l"
	.string "CITED.\p"
	.string "Walk the upstream. Read it for yourself.$"

ParcelFloodbasin_FirstEntry_Text_3:
# 67 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Voices, off to the east. A lot of them.\n"
	.string "Somebody is giving a speech in the rain.$"

ParcelFloodbasin_ReliefScene_Text_0:
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: --and the Council hears you.\n"
	.string "Third flood in two years. You've been\l"
	.string "patient. Patience should be paid for.$"

ParcelFloodbasin_ReliefScene_Text_1:
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Fuel vouchers. Dry goods. The\n"
	.string "FOUNDATION's boat runs to FERNWICK\l"
	.string "twice a day until the road's clear.\l"
	.string "Nobody pays.\p"
	.string "MRS. ASKE. Your roof. I haven't\n"
	.string "forgotten. Thursday.$"

ParcelFloodbasin_ReliefScene_Text_2:
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Bless you, councilman. Bless\n"
	.string "you.$"

ParcelFloodbasin_ReliefScene_Text_3:
# 87 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: And there's our RANGER. Good.\n"
	.string "Come down, come down. Witness this.\l"
	.string "That's your job, isn't it? Witnessing.$"

ParcelFloodbasin_ReliefScene_Text_4:
# 88 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The CORPS sends a report. I\n"
	.string "send a boat.\p"
	.string "No, don't argue, I'm not blaming you. I'm\n"
	.string "telling you what people remember. They\l"
	.string "remember the boat.$"

ParcelFloodbasin_ReliefScene_Text_5:
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The water goes down by\n"
	.string "Thursday. It always does. Then the\l"
	.string "smell goes. Then they forget, until the\l"
	.string "next one.\p"
	.string "That's the basin. That's just the basin.$"

ParcelFloodbasin_ReliefScene_Text_6:
# 90 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: Mister DORSEY, is the water bad?\n"
	.string "Gran says don't touch it.$"

ParcelFloodbasin_ReliefScene_Text_7:
# 91 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Your gran's right, sweetheart.\n"
	.string "Not until it's gone down. Here. Take two,\l"
	.string "one for your brother.$"

ParcelFloodbasin_ReliefScene_Text_8:
# 95 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Walk the basin, RANGER. Read\n"
	.string "your stakes. When you're done, the\l"
	.string "booth by the bridge will have the\l"
	.string "remediation file ready for you. All of it.\l"
	.string "We've nothing to hide.$"

ParcelFloodbasin_ReliefScene_Text_9:
# 96 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: And take a blanket.\n"
	.string "FOUNDATION's. Everyone takes one; the\l"
	.string "nights are the nights whatever you\l"
	.string "think of the crest.\p"
	.string "Take one?$"

ParcelFloodbasin_ReliefScene_Text_10:
# 98 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "You take it. It is warm, and it says\n"
	.string "FOUNDATION in the corner, and both of\l"
	.string "those are true.\p"
	.string "DORSEY: Good. Warm first. Argue later.\n"
	.string "That's the only order it works in.$"

ParcelFloodbasin_ReliefScene_Text_11:
# 101 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "You leave it on the pile.\p"
	.string "DORSEY: No? …Your business. They write\n"
	.string "that down too, you know. Who didn't take\l"
	.string "one. Not me. Them.$"

ParcelFloodbasin_Dorsey_Text_0:
# 116 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Phase 2 is a dry shed and a\n"
	.string "pump that works. I'd have liked more.\l"
	.string "I've stopped writing what I'd have\l"
	.string "liked.\p"
	.string "The FOUNDATION's man was courteous,\n"
	.string "RANGER. Put that down. It's true, and\l"
	.string "it's the least of it.$"

ParcelFloodbasin_Dorsey_Text_1:
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: You'll write that the\n"
	.string "FOUNDATION's man was courteous after\l"
	.string "the hearing. I was. I am. Phase 2 goes\l"
	.string "ahead, RANGER. Dry sheds. You'd have\l"
	.string "built them too. You'd just have built\l"
	.string "them slower.$"

ParcelFloodbasin_Dorsey_Text_2:
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: I heard KOLE lost his temper.\n"
	.string "He's young. I'll have a word.\p"
	.string "You'll write that the FOUNDATION's man\n"
	.string "was uncooperative. Write also that the\l"
	.string "FOUNDATION's boat ran twice a day. Both\l"
	.string "are true.$"

ParcelFloodbasin_Dorsey_Text_3:
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Vouchers are for residents,\n"
	.string "RANGER. You've got a CORPS stipend. Try\l"
	.string "the booth by the bridge if you want\l"
	.string "paperwork.$"

ParcelFloodbasin_Aide1_Text_0:
# 142 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Two hundred and twelve.\n"
	.string "Forty-one households. That's five\l"
	.string "vouchers a household, a winter. Five.\p"
	.string "That's the number I'll give the hearing\n"
	.string "if they ask what relief looked like.\l"
	.string "Here. The last of the box that wasn't\l"
	.string "paper.$"

ParcelFloodbasin_Aide1_Text_1:
# 146 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Behind the tents. The voucher\n"
	.string "box. Count the counterfoils.$"

ParcelFloodbasin_Aide1_Text_2:
# 151 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: The empty voucher box from last\n"
	.string "winter is still behind the tents. We were\l"
	.string "told to burn it. I didn't. The\l"
	.string "counterfoils are in it, every voucher we\l"
	.string "ever gave, with a name on each.\p"
	.string "Go and count the counterfoils for me. I\n"
	.string "want the number before someone else\l"
	.string "wants the box.$"

ParcelFloodbasin_Aide1_Text_3:
# 157 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Vouchers are back, from a\n"
	.string "different fund, with a different crest.\l"
	.string "Same sheet. I kept the sheet.\p"
	.string "Forty-one names, and I know every one\n"
	.string "of them now.$"

ParcelFloodbasin_Aide1_Text_4:
# 162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers are finished. The\n"
	.string "relief sheet went to the hearing as an\l"
	.string "exhibit. Forty-one signatures. The\l"
	.string "councilman's name was the\l"
	.string "forty-second. I'd not noticed that\l"
	.string "before.$"

ParcelFloodbasin_Aide1_Text_5:
# 167 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Vouchers are suspended pending\n"
	.string "the coast office's review. I'm to say\l"
	.string "'suspended', not 'stopped'.\p"
	.string "The sheet's still here. Nobody's come to\n"
	.string "sign it since the river hall voted.\l"
	.string "Nobody's come to collect it either.$"

ParcelFloodbasin_Aide1_Text_6:
# 171 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers on the left, dry\n"
	.string "goods on the right. Sign the sheet. Yes,\l"
	.string "the FOUNDATION keeps the sheet. For\l"
	.string "the records.$"

ParcelFloodbasin_Aide2_Text_0:
# 179 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Consulted, this time, means\n"
	.string "asked. I asked all forty-one. Eleven\l"
	.string "said no to the shed.\p"
	.string "Eleven is in the minutes. I typed it\n"
	.string "myself.$"

ParcelFloodbasin_Aide2_Text_1:
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. The\n"
	.string "hearing asked how many were consulted\l"
	.string "on Phase 2. I said forty-one signed.\l"
	.string "They said that wasn't the question. It\l"
	.string "wasn't.$"

ParcelFloodbasin_Aide2_Text_2:
# 189 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one signatures, and the\n"
	.string "councilman hasn't looked at the sheet\l"
	.string "once since he came back from the river.\p"
	.string "He looks at the bridge instead. I don't\n"
	.string "know what he sees there. Water, I\l"
	.string "expect.$"

ParcelFloodbasin_Aide2_Text_3:
# 193 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. Forty-one\n"
	.string "signatures. The councilman likes a full\l"
	.string "sheet.$"

ParcelFloodbasin_VilOldWoman_Text_0:
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: The roof's held two storms.\n"
	.string "Tuesdays, they come now, for anyone.\p"
	.string "I make tea on Tuesdays. I never\n"
	.string "thought I'd have a day.$"

ParcelFloodbasin_VilOldWoman_Text_1:
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: They came Tuesday. Not\n"
	.string "Thursday. Tuesday. Eleven years and it\l"
	.string "took a stranger looking at a tarp.$"

ParcelFloodbasin_VilOldWoman_Text_2:
# 211 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: You looked? Then go and tell\n"
	.string "the aide you looked. Say it like you\l"
	.string "mean to write it down. They move faster\l"
	.string "for the writing down.$"

ParcelFloodbasin_VilOldWoman_Text_3:
# 216 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: The house behind the third\n"
	.string "one, dear. Blue tarp. You can't miss it.\l"
	.string "Everyone misses it.$"

ParcelFloodbasin_VilOldWoman_Text_4:
# 221 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Thursday, he said. It's been\n"
	.string "four Thursdays. The tarp's on the house\l"
	.string "behind the third one.\p"
	.string "Go and look at it, dear. And then go and\n"
	.string "tell the aide you looked.$"

ParcelFloodbasin_VilOldWoman_Text_5:
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. He said it\n"
	.string "at the hearing, into a microphone, as an\l"
	.string "example of local partnership. Eleven\l"
	.string "years, and I was an example.$"

ParcelFloodbasin_VilOldWoman_Text_6:
# 232 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. Eleven\n"
	.string "years on the Council and he knows my\l"
	.string "name.\p"
	.string "The CORPS man before you didn't. I'm not\n"
	.string "saying that to be unkind.$"

ParcelFloodbasin_VilOldWoman_Text_7:
# 236 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Wait your turn, dear. We've\n"
	.string "all been flooded.$"

ParcelFloodbasin_VilMan_Text_0:
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The vials went to the review. They\n"
	.string "came back with a number on each. Shine's\l"
	.string "got a name now.\p"
	.string "I'd rather it had stayed mud.$"

ParcelFloodbasin_VilMan_Text_1:
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three. You held them up to the\n"
	.string "light the way I would've if I'd had the\l"
	.string "vials.\p"
	.string "Brown's just mud. Mud don't shine. That\n"
	.string "shine's the thing nobody asks about,\l"
	.string "and now it's in three bottles with my\l"
	.string "name on the sheet as the one who asked.$"

ParcelFloodbasin_VilMan_Text_2:
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Here. Came up with the brown water\n"
	.string "the third flood and I've kept it dry\l"
	.string "since. Yours.$"

ParcelFloodbasin_VilMan_Text_3:
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Vouchers are for asking quietly.\n"
	.string "Bottles are for asking out loud.$"

ParcelFloodbasin_VilMan_Text_4:
# 258 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The marks. A scrape off each one.$"

ParcelFloodbasin_VilMan_Text_5:
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The first is on the house beside\n"
	.string "the relief tent.$"

ParcelFloodbasin_VilMan_Text_6:
# 263 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The second is on the hamlet wall,\n"
	.string "the house by the lane.$"

ParcelFloodbasin_VilMan_Text_7:
# 266 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The third is on the house with the\n"
	.string "tarp roof. Highest of the three.$"

ParcelFloodbasin_VilMan_Text_8:
# 272 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the water still comes up\l"
	.string "brown. Your paper says why. In the\l"
	.string "hearing they read the why aloud. The\l"
	.string "water didn't change colour. I did.$"

ParcelFloodbasin_VilMan_Text_9:
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
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
# 283 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods, three times the\n"
	.string "vouchers, and the fourth time I asked\l"
	.string "why the water's brown, somebody up the\l"
	.string "river asked it for me. In a hall. With the\l"
	.string "Board sitting there.\p"
	.string "No vouchers for that. Better than\n"
	.string "vouchers.$"

ParcelFloodbasin_VilMan_Text_11:
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods. Three times the\n"
	.string "vouchers. Nobody's asked why the water\l"
	.string "comes up brown now.\p"
	.string "I asked. I got vouchers.$"

ParcelFloodbasin_VilGirl_Text_0:
# 295 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet\n"
	.string "had babies. Their feet are right. The\l"
	.string "CORPS lady came back and drew those\l"
	.string "too.\p"
	.string "She cried a bit. She said it was the cold.$"

ParcelFloodbasin_VilGirl_Text_1:
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A CORPS lady came\l"
	.string "and drew it. She said it's in a report\l"
	.string "now. It doesn't know. It's a WOOPER.$"

ParcelFloodbasin_VilGirl_Text_2:
# 305 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: The WOOPER with the wrong feet is\n"
	.string "still in the puddle. A lady from the river\l"
	.string "came and drew it. Drew it! In a book!\p"
	.string "She said it's going in a report. I said\n"
	.string "it's going in a puddle. We were both\l"
	.string "right.$"

ParcelFloodbasin_VilGirl_Text_3:
# 309 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: My brother found a WOOPER with\n"
	.string "the wrong feet. Gran made him put it\l"
	.string "back. It didn't go anywhere. It just\l"
	.string "sat.$"

ParcelFloodbasin_VilFisher_Text_0:
# 317 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: The water's never reached past\n"
	.string "the big stone, and this spring it didn't\l"
	.string "reach the stone before it. First time.\p"
	.string "I put a stick where it stopped. You've\n"
	.string "made a man of sticks out of me.$"

ParcelFloodbasin_VilFisher_Text_1:
# 323 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Past the big stone. It's never\n"
	.string "reached past the big stone. The works\l"
	.string "are further up than they say the water\l"
	.string "goes, then.\p"
	.string "Here. For the smell. There's no cure for\n"
	.string "the smell, but these are for the rest.$"

ParcelFloodbasin_VilFisher_Text_2:
# 327 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: The bank. The line of them. Find\n"
	.string "where it stops.$"

ParcelFloodbasin_VilFisher_Text_3:
# 332 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: After every pulse there's a\n"
	.string "line on the bank where the fish lie. The\l"
	.string "Board man says it's weather. I say it's a\l"
	.string "line, and lines have a top end.\p"
	.string "Go along the bank and find the top of\n"
	.string "it. Tell me how far up it reaches this\l"
	.string "year.$"

ParcelFloodbasin_VilFisher_Text_4:
# 338 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Does writing fix anything, I\n"
	.string "asked you. The vouchers are still\l"
	.string "stopped. The boat's still stopped. But a\l"
	.string "Board man came and measured the water\l"
	.string "instead of telling me about it. Writing\l"
	.string "did that.$"

ParcelFloodbasin_VilFisher_Text_5:
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Vouchers stopped. Boat\n"
	.string "stopped. Water's the same.\p"
	.string "Your lot wrote something down, I hear.\n"
	.string "Does writing it down dry anything out?$"

ParcelFloodbasin_VilFisher_Text_6:
# 347 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: I don't fish the lake anymore. I\n"
	.string "fish the top lake, past the bridge. The\l"
	.string "water's clearer up there.\p"
	.string "Clearer. Not clear.$"

ParcelFloodbasin_Discharge_Text_0:
# 359 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. In the notebook.$"

ParcelFloodbasin_Discharge_Text_1:
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe in the bank, mouth\n"
	.string "fouled with brown crust. Stamped:\l"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old. The\n"
	.string "crust is fresher than that. Written\l"
	.string "down.$"

ParcelFloodbasin_Sheen_Text_0:
# 374 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. In the notebook.$"

ParcelFloodbasin_Sheen_Text_1:
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the lake,\n"
	.string "bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "carry the same stain at their bases.\l"
	.string "Written down.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 389 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the bank,\n"
	.string "straw-pale. The reeds above and below\l"
	.string "it are fine.\p"
	.string "The kill line is exactly the height of\n"
	.string "the flood six months ago. Written down.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A WOOPER, low in the puddle. Two left\n"
	.string "feet.\p"
	.string "It doesn't flinch. It has been like this\n"
	.string "since it hatched, and that was recent.\l"
	.string "Written down.$"

ParcelFloodbasin_SickKarp_Text_0:
# 414 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown MAGIKARP lists against the\n"
	.string "bridge piling, scales greying.\p"
	.string "It was never in the pipe. It was at the\n"
	.string "top of the food web. Poison climbs.\l"
	.string "Written down.$"

ParcelFloodbasin_BoothSign_Text_0:
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway. Please report\n"
	.string "concerns to your local representative.\p"
	.string "The paint is wet from the rain. The sign\n"
	.string "is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 432 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.$"

ParcelFloodbasin_Remediator_Text_1:
# 436 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Oh. RANGER! Welcome to the active\n"
	.string "remediation site.\p"
	.string "We've been at it… some time now. The\n"
	.string "FOUNDATION does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 437 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 438 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: …A quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 439 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: The councilman said you'd\n"
	.string "have the remediation file for me.$"

ParcelFloodbasin_Remediator_Text_5:
# 440 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Did he. Well. It's at the office.\n"
	.string "The coast office.$"

ParcelFloodbasin_Remediator_Text_6:
# 441 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_7:
# 442 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_8:
# 443 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The WOOPER has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_9:
# 446 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Move along, RANGER. This isn't\n"
	.string "your patch.$"

ParcelFloodbasin_Remediator_Text_10:
# 448 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_11:
# 449 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Hmph.$"

ParcelFloodbasin_Remediator_Text_12:
# 450 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.\p"
	.string "This basin ran sick before you got here.\n"
	.string "It'll run sick after.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 459 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 460 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 475 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: She doesn't eat what she\n"
	.string "catches anymore. Sells it to the people\l"
	.string "who don't ask.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_0:
# 486 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_1:
# 488 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Another time, then.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_2:
# 492 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's the one I wanted to see.$"

ParcelFloodbasin_BasinKidTrainer_R2_Text_3:
# 493 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_0:
# 500 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_1:
# 506 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Noted. Properly, this time.$"

ParcelFloodbasin_BasinKidTrainer_R3_Text_2:
# 507 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_0:
# 514 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_1:
# 520 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Still yours.$"

ParcelFloodbasin_BasinKidTrainer_R4_Text_2:
# 521 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_0:
# 528 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_BasinKidTrainer_R5_Text_1:
# 535 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Arve_Text_0:
# 541 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The DUSTOX here have spots in\n"
	.string "the wrong places. I've been drawing\l"
	.string "them. Battle first.$"

ParcelFloodbasin_Arve_Text_1:
# 542 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Drawn and beaten.$"

ParcelFloodbasin_Arve_Text_2:
# 557 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Wrong spots, extra spots, no\n"
	.string "spots. All in the same field. My teacher\l"
	.string "says that's just variety.$"

ParcelFloodbasin_Arve_R2_Text_0:
# 568 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Arve_R2_Text_1:
# 570 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: No hurry. The water keeps.$"

ParcelFloodbasin_Arve_R2_Text_2:
# 574 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's the one I wanted to see.$"

ParcelFloodbasin_Arve_R2_Text_3:
# 575 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Arve_R3_Text_0:
# 582 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Arve_R3_Text_1:
# 588 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Still yours.$"

ParcelFloodbasin_Arve_R3_Text_2:
# 589 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Arve_R4_Text_0:
# 596 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelFloodbasin_Arve_R4_Text_1:
# 603 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Arve_R5_Text_0:
# 610 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Arve_R5_Text_1:
# 616 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Noted. Properly, this time.$"

ParcelFloodbasin_Arve_R5_Text_2:
# 617 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Kai_Text_0:
# 623 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Nobody sees me in the tall grass.\n"
	.string "Nobody except you, apparently.$"

ParcelFloodbasin_Kai_Text_1:
# 624 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Seen and beaten.$"

ParcelFloodbasin_Kai_Text_2:
# 639 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: The grass by the top lake is the\n"
	.string "tallest. It's also the only grass that\l"
	.string "smells like that.$"

ParcelFloodbasin_Kai_R2_Text_0:
# 650 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelFloodbasin_Kai_R2_Text_1:
# 652 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Suit yourself. I'm here.$"

ParcelFloodbasin_Kai_R2_Text_2:
# 656 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: …Fair.$"

ParcelFloodbasin_Kai_R2_Text_3:
# 657 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Kai_R3_Text_0:
# 664 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Kai_R3_Text_1:
# 670 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Right. That's the whole of it.$"

ParcelFloodbasin_Kai_R3_Text_2:
# 671 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Kai_R4_Text_0:
# 678 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Kai_R4_Text_1:
# 684 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's the one I wanted to see.$"

ParcelFloodbasin_Kai_R4_Text_2:
# 685 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Kai_R5_Text_0:
# 692 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Last one. I've put everything I've\n"
	.string "got into this team. Go?$"

ParcelFloodbasin_Kai_R5_Text_1:
# 698 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Still yours.$"

ParcelFloodbasin_Kai_R5_Text_2:
# 699 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFloodbasin_Signe_Text_0:
# 705 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: A picnic in the rain is still a\n"
	.string "picnic. A battle in the rain is still a\l"
	.string "battle.$"

ParcelFloodbasin_Signe_Text_1:
# 706 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Soggy on both counts.$"

ParcelFloodbasin_Signe_Text_2:
# 721 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: I don't let my MARILL in the\n"
	.string "lower lake. It came out itchy once. Just\l"
	.string "once was enough.$"

ParcelFloodbasin_Signe_R2_Text_0:
# 732 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Signe_R2_Text_1:
# 734 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Signe_R2_Text_2:
# 738 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Noted. Properly, this time.$"

ParcelFloodbasin_Signe_R2_Text_3:
# 739 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Signe_R3_Text_0:
# 746 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Signe_R3_Text_1:
# 752 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: …Fair.$"

ParcelFloodbasin_Signe_R3_Text_2:
# 753 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Signe_R4_Text_0:
# 760 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Signe_R4_Text_1:
# 767 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Signe_R5_Text_0:
# 774 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Signe_R5_Text_1:
# 780 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Still yours.$"

ParcelFloodbasin_Signe_R5_Text_2:
# 781 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Leif_Text_0:
# 787 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I camp on the high ground. The low\n"
	.string "ground floods. Everybody knows.\l"
	.string "Battle?$"

ParcelFloodbasin_Leif_Text_1:
# 788 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Should've camped higher.$"

ParcelFloodbasin_Leif_Text_2:
# 803 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Every year the high ground's a bit\n"
	.string "higher. The water, I mean. Not the\l"
	.string "ground.$"

ParcelFloodbasin_Leif_R2_Text_0:
# 814 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Leif_R2_Text_1:
# 816 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Another time, then.$"

ParcelFloodbasin_Leif_R2_Text_2:
# 820 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Still yours.$"

ParcelFloodbasin_Leif_R2_Text_3:
# 821 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Leif_R3_Text_0:
# 828 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Leif_R3_Text_1:
# 834 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: …Again, then. Later.$"

ParcelFloodbasin_Leif_R3_Text_2:
# 835 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Leif_R4_Text_0:
# 842 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFloodbasin_Leif_R4_Text_1:
# 848 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Noted. Properly, this time.$"

ParcelFloodbasin_Leif_R4_Text_2:
# 849 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Leif_R5_Text_0:
# 856 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_Leif_R5_Text_1:
# 863 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Truls_Text_0:
# 869 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: You walked right into my sight\n"
	.string "line. Rookie.$"

ParcelFloodbasin_Truls_Text_1:
# 870 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: …Not a rookie.$"

ParcelFloodbasin_Truls_Text_2:
# 885 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: The councilman's boat goes past\n"
	.string "twice a day. Nobody's ever asked what it\l"
	.string "brings back.$"

ParcelFloodbasin_Truls_R2_Text_0:
# 896 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Truls_R2_Text_1:
# 898 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Suit yourself. I'm here.$"

ParcelFloodbasin_Truls_R2_Text_2:
# 902 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Right. That's the whole of it.$"

ParcelFloodbasin_Truls_R2_Text_3:
# 903 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Truls_R3_Text_0:
# 910 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Truls_R3_Text_1:
# 916 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's the one I wanted to see.$"

ParcelFloodbasin_Truls_R3_Text_2:
# 917 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Truls_R4_Text_0:
# 924 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Truls_R4_Text_1:
# 930 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Still yours.$"

ParcelFloodbasin_Truls_R4_Text_2:
# 931 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Truls_R5_Text_0:
# 938 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Truls_R5_Text_1:
# 944 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: Noted. Properly, this time.$"

ParcelFloodbasin_Truls_R5_Text_2:
# 945 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Halvor_Text_0:
# 951 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: The pond's got a boardwalk\n"
	.string "because the pond used to be a field.\l"
	.string "Think about that. Then battle me.$"

ParcelFloodbasin_Halvor_Text_1:
# 952 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Thought about it, did you.$"

ParcelFloodbasin_Halvor_Text_2:
# 967 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: My father planted this field. I\n"
	.string "fish it. That's the basin in one family.$"

ParcelFloodbasin_Halvor_R2_Text_0:
# 978 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Halvor_R2_Text_1:
# 980 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Fine. Same spot.$"

ParcelFloodbasin_Halvor_R2_Text_2:
# 984 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: …Again, then. Later.$"

ParcelFloodbasin_Halvor_R2_Text_3:
# 985 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Halvor_R3_Text_0:
# 992 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelFloodbasin_Halvor_R3_Text_1:
# 998 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's the one I wanted to see.$"

ParcelFloodbasin_Halvor_R3_Text_2:
# 999 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Halvor_R4_Text_0:
# 1006 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Halvor_R4_Text_1:
# 1013 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Halvor_R5_Text_0:
# 1020 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Halvor_R5_Text_1:
# 1026 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Still yours.$"

ParcelFloodbasin_Halvor_R5_Text_2:
# 1027 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Maja_Text_0:
# 1033 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles never dry out here\n"
	.string "anymore. My MARILL loves it. I don't.\l"
	.string "Battle!$"

ParcelFloodbasin_Maja_Text_1:
# 1034 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: MARILL still loves it.$"

ParcelFloodbasin_Maja_Text_2:
# 1049 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles have a shine on them\n"
	.string "in the morning. Rainbow colours. Gran\l"
	.string "says don't look at it too long.$"

ParcelFloodbasin_Maja_R2_Text_0:
# 1060 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Maja_R2_Text_1:
# 1062 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Fine. Same spot.$"

ParcelFloodbasin_Maja_R2_Text_2:
# 1066 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's the one I wanted to see.$"

ParcelFloodbasin_Maja_R2_Text_3:
# 1067 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_Maja_R3_Text_0:
# 1074 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_Maja_R3_Text_1:
# 1080 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Still yours.$"

ParcelFloodbasin_Maja_R3_Text_2:
# 1081 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Maja_R4_Text_0:
# 1088 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFloodbasin_Maja_R4_Text_1:
# 1094 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Fair.$"

ParcelFloodbasin_Maja_R4_Text_2:
# 1095 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Maja_R5_Text_0:
# 1102 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Maja_R5_Text_1:
# 1108 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: …Again, then. Later.$"

ParcelFloodbasin_Maja_R5_Text_2:
# 1109 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Bjorn_Text_0:
# 1115 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: The pump house door's open\n"
	.string "again. I didn't open it. Did you? Battle\l"
	.string "me and we'll call it even.$"

ParcelFloodbasin_Bjorn_Text_1:
# 1116 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Even, then.$"

ParcelFloodbasin_Bjorn_Text_2:
# 1131 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: MEREHOLT pumped this whole\n"
	.string "basin for twenty years. Then they\l"
	.string "stopped. Then the water came back.\l"
	.string "Then the smell.$"

ParcelFloodbasin_Bjorn_R2_Text_0:
# 1142 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_Bjorn_R2_Text_1:
# 1144 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Another time, then.$"

ParcelFloodbasin_Bjorn_R2_Text_2:
# 1148 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: …Fair.$"

ParcelFloodbasin_Bjorn_R2_Text_3:
# 1149 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Bjorn_R3_Text_0:
# 1156 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Bjorn_R3_Text_1:
# 1162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Noted. Properly, this time.$"

ParcelFloodbasin_Bjorn_R3_Text_2:
# 1163 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Bjorn_R4_Text_0:
# 1170 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Bjorn_R4_Text_1:
# 1176 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Right. That's the whole of it.$"

ParcelFloodbasin_Bjorn_R4_Text_2:
# 1177 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Bjorn_R5_Text_0:
# 1184 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Bjorn_R5_Text_1:
# 1191 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Solveig_Text_0:
# 1197 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Cadet SOLVEIG. HALE said a\n"
	.string "provisional would come through. Spar.\l"
	.string "Then I'll tell you where the stakes are.$"

ParcelFloodbasin_Solveig_Text_1:
# 1198 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Good. The stakes.$"

ParcelFloodbasin_Solveig_Text_2:
# 1213 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Red cloth stakes are ours. The\n"
	.string "bare ones are the FOUNDATION's. They\l"
	.string "put theirs on the clean bank. We put\l"
	.string "ours where the water is.$"

ParcelFloodbasin_Solveig_R2_Text_0:
# 1224 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelFloodbasin_Solveig_R2_Text_1:
# 1226 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Fine. Same spot.$"

ParcelFloodbasin_Solveig_R2_Text_2:
# 1230 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Solveig_R2_Text_3:
# 1231 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelFloodbasin_Solveig_R3_Text_0:
# 1238 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFloodbasin_Solveig_R3_Text_1:
# 1244 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Again, then. Later.$"

ParcelFloodbasin_Solveig_R3_Text_2:
# 1245 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelFloodbasin_Solveig_R4_Text_0:
# 1252 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Solveig_R4_Text_1:
# 1258 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: …Fair.$"

ParcelFloodbasin_Solveig_R4_Text_2:
# 1259 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Solveig_R5_Text_0:
# 1266 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_Solveig_R5_Text_1:
# 1273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Nils_Text_0:
# 1279 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The north meadow's the only dry\n"
	.string "bit. Everyone comes up here. Everyone\l"
	.string "battles.$"

ParcelFloodbasin_Nils_Text_1:
# 1280 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Everyone loses to you,\n"
	.string "apparently.$"

ParcelFloodbasin_Nils_Text_2:
# 1295 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: My WURMPLE won't eat the reeds\n"
	.string "from the low ground. Only the high. I\l"
	.string "thought they ate anything.$"

ParcelFloodbasin_Nils_R2_Text_0:
# 1306 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Nils_R2_Text_1:
# 1308 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Another time, then.$"

ParcelFloodbasin_Nils_R2_Text_2:
# 1312 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: …Again, then. Later.$"

ParcelFloodbasin_Nils_R2_Text_3:
# 1313 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Nils_R3_Text_0:
# 1320 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Nils_R3_Text_1:
# 1326 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: That's the one I wanted to see.$"

ParcelFloodbasin_Nils_R3_Text_2:
# 1327 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Nils_R4_Text_0:
# 1334 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Nils_R4_Text_1:
# 1341 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Nils_R5_Text_0:
# 1348 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFloodbasin_Nils_R5_Text_1:
# 1354 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Noted. Properly, this time.$"

ParcelFloodbasin_Nils_R5_Text_2:
# 1355 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelFloodbasin_Rannveig_Text_0:
# 1361 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: My GLOOM smells better than\n"
	.string "the basin does. That's a low bar.\l"
	.string "Battle?$"

ParcelFloodbasin_Rannveig_Text_1:
# 1362 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still smells better.$"

ParcelFloodbasin_Rannveig_Text_2:
# 1377 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: The road north is a haul road.\n"
	.string "Trucks come down it at night. Nobody's\l"
	.string "told us what they haul.$"

ParcelFloodbasin_Rannveig_R2_Text_0:
# 1388 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_Rannveig_R2_Text_1:
# 1390 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Fine. Same spot.$"

ParcelFloodbasin_Rannveig_R2_Text_2:
# 1394 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still yours.$"

ParcelFloodbasin_Rannveig_R2_Text_3:
# 1395 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Rannveig_R3_Text_0:
# 1402 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFloodbasin_Rannveig_R3_Text_1:
# 1408 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's the one I wanted to\n"
	.string "see.$"

ParcelFloodbasin_Rannveig_R3_Text_2:
# 1409 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: One more in me. After the\n"
	.string "high ground.$"

ParcelFloodbasin_Rannveig_R4_Text_0:
# 1416 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelFloodbasin_Rannveig_R4_Text_1:
# 1423 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Rannveig_R5_Text_0:
# 1430 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelFloodbasin_Rannveig_R5_Text_1:
# 1436 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Noted. Properly, this time.$"

ParcelFloodbasin_Rannveig_R5_Text_2:
# 1437 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Einar_Text_0:
# 1443 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: My MIGHTYENA's the strongest\n"
	.string "thing in the basin. Prove me wrong.$"

ParcelFloodbasin_Einar_Text_1:
# 1444 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Proved.$"

ParcelFloodbasin_Einar_Text_2:
# 1459 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Strongest thing in the basin.\n"
	.string "Not saying much, these days.$"

ParcelFloodbasin_Einar_R2_Text_0:
# 1470 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_Einar_R2_Text_1:
# 1472 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Suit yourself. I'm here.$"

ParcelFloodbasin_Einar_R2_Text_2:
# 1476 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Again, then. Later.$"

ParcelFloodbasin_Einar_R2_Text_3:
# 1477 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Einar_R3_Text_0:
# 1484 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelFloodbasin_Einar_R3_Text_1:
# 1491 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_Einar_R4_Text_0:
# 1498 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFloodbasin_Einar_R4_Text_1:
# 1505 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_Einar_R5_Text_0:
# 1512 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFloodbasin_Einar_R5_Text_1:
# 1518 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Noted. Properly, this time.$"

ParcelFloodbasin_Einar_R5_Text_2:
# 1519 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFloodbasin_Sturla_Text_0:
# 1525 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I came for the NUZLEAF. Stayed\n"
	.string "for the rain. Nobody stays for the rain.\l"
	.string "Battle.$"

ParcelFloodbasin_Sturla_Text_1:
# 1526 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Should've left with the\n"
	.string "NUZLEAF.$"

ParcelFloodbasin_Sturla_Text_2:
# 1541 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: It rains here more than it used\n"
	.string "to. Not more days. More water. Ask\l"
	.string "anyone with a roof.$"

ParcelFloodbasin_Sturla_R2_Text_0:
# 1552 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelFloodbasin_Sturla_R2_Text_1:
# 1554 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Another time, then.$"

ParcelFloodbasin_Sturla_R2_Text_2:
# 1558 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Still yours.$"

ParcelFloodbasin_Sturla_R2_Text_3:
# 1559 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFloodbasin_Sturla_R3_Text_0:
# 1566 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Sturla_R3_Text_1:
# 1572 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Right. That's the whole of it.$"

ParcelFloodbasin_Sturla_R3_Text_2:
# 1573 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Sturla_R4_Text_0:
# 1580 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFloodbasin_Sturla_R4_Text_1:
# 1586 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: That's the one I wanted to see.$"

ParcelFloodbasin_Sturla_R4_Text_2:
# 1587 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFloodbasin_Sturla_R5_Text_0:
# 1594 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelFloodbasin_Sturla_R5_Text_1:
# 1600 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: …Again, then. Later.$"

ParcelFloodbasin_Sturla_R5_Text_2:
# 1601 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Oskar_Text_0:
# 1607 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The puddle field used to be the\n"
	.string "best grazing in the district. Now it's\l"
	.string "the best puddles. Battle.$"

ParcelFloodbasin_Oskar_Text_1:
# 1608 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Best puddles. Worst battle.$"

ParcelFloodbasin_Oskar_Text_2:
# 1623 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The ground here doesn't drain\n"
	.string "anymore. Something underneath it is\l"
	.string "full.$"

ParcelFloodbasin_Oskar_R2_Text_0:
# 1634 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelFloodbasin_Oskar_R2_Text_1:
# 1636 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFloodbasin_Oskar_R2_Text_2:
# 1640 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: …Again, then. Later.$"

ParcelFloodbasin_Oskar_R2_Text_3:
# 1641 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_Oskar_R3_Text_0:
# 1648 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_Oskar_R3_Text_1:
# 1654 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Noted. Properly, this time.$"

ParcelFloodbasin_Oskar_R3_Text_2:
# 1655 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_Oskar_R4_Text_0:
# 1662 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_Oskar_R4_Text_1:
# 1668 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Still yours.$"

ParcelFloodbasin_Oskar_R4_Text_2:
# 1669 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_Oskar_R5_Text_0:
# 1676 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFloodbasin_Oskar_R5_Text_1:
# 1683 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_SignHamlet_Text_0:
# 1694 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK\p"
	.string "Flood line marked on the chapel wall.\n"
	.string "Boat times posted at the relief store.$"

ParcelFloodbasin_Checkpoint_Text_0:
# 1707 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Stop there.$"

ParcelFloodbasin_Checkpoint_Text_1:
# 1713 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Logistics. This is a haul road,\n"
	.string "not a hiking trail. Nobody moves up to\l"
	.string "the river neck on my road without\l"
	.string "clearing me first.\p"
	.string "MIRREN cleared you? MIRREN clears\n"
	.string "anyone who can read. I need people who\l"
	.string "can carry.$"

ParcelFloodbasin_Checkpoint_Text_2:
# 1714 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Though the stakes say you read.\n"
	.string "Prove it quick. The basin runs brown\l"
	.string "after a pulse.\p"
	.string "Brown's lake water stirred up, is it?$"

ParcelFloodbasin_Checkpoint_Text_3:
# 1716 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Lake water's grey. Brown is soil,\n"
	.string "off the banks they cut upstream. The\l"
	.string "lake gets the blame because the lake\l"
	.string "can't argue.\p"
	.string "Carry, then. Reading you'll learn on the\n"
	.string "road, same as the rest of us.$"

ParcelFloodbasin_Checkpoint_Text_4:
# 1718 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Soil. Upstream soil, off the cut\n"
	.string "banks. Lake water's grey. Hm. You did\l"
	.string "read the stakes.\p"
	.string "Now carry.$"

ParcelFloodbasin_Checkpoint_Text_5:
# 1721 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry weight.\n"
	.string "Move up.$"

ParcelFloodbasin_Checkpoint_Text_6:
# 1724 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Quarry clearance. Logs you fit\n"
	.string "to move earth on division ground. Tool's\l"
	.string "bonded to it.$"

ParcelFloodbasin_Checkpoint_Text_7:
# 1726 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: ROCK SMASH. The slide past me's\n"
	.string "been there since spring. Nobody's\l"
	.string "cleared it because nobody's needed to\l"
	.string "go up.\p"
	.string "Mind the loads coming down. They don't\n"
	.string "stop for paperwork.$"

ParcelFloodbasin_GymBreen_Text_0:
# 1740 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Cleared. The neck's open to you.\n"
	.string "Mind the loads coming down.$"

ParcelFloodbasin_T_Anders_Text_0:
# 1751 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The MASQUERAIN by the lake\n"
	.string "have wings like oil on water. Pretty.\l"
	.string "Battle!$"

ParcelFloodbasin_T_Anders_Text_1:
# 1752 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Pretty and useless.$"

ParcelFloodbasin_T_Anders_Text_2:
# 1767 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Oil on water. I said it as a\n"
	.string "compliment. Then I saw the lake.$"

ParcelFloodbasin_T_Anders_R2_Text_0:
# 1778 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I kept the team up for this.\n"
	.string "Again?$"

ParcelFloodbasin_T_Anders_R2_Text_1:
# 1780 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Fine. Same spot.$"

ParcelFloodbasin_T_Anders_R2_Text_2:
# 1784 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Noted. Properly, this time.$"

ParcelFloodbasin_T_Anders_R2_Text_3:
# 1785 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFloodbasin_T_Anders_R3_Text_0:
# 1792 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelFloodbasin_T_Anders_R3_Text_1:
# 1798 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Right. That's the whole of it.$"

ParcelFloodbasin_T_Anders_R3_Text_2:
# 1799 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Anders_R4_Text_0:
# 1806 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFloodbasin_T_Anders_R4_Text_1:
# 1812 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Still yours.$"

ParcelFloodbasin_T_Anders_R4_Text_2:
# 1813 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Anders_R5_Text_0:
# 1820 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Anders_R5_Text_1:
# 1827 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ANDERS: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Roald_Text_0:
# 1833 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Camped on the one dry rise in\n"
	.string "the puddle field. Room for one. Battle\l"
	.string "for it.$"

ParcelFloodbasin_T_Roald_Text_1:
# 1834 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Room for two, I suppose.$"

ParcelFloodbasin_T_Roald_Text_2:
# 1849 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The puddles join up in spring.\n"
	.string "Then it's not a field. Then the\l"
	.string "councilman's boat comes. Then the\l"
	.string "puddles go. Then it's a field. It's a\l"
	.string "cycle, he says.$"

ParcelFloodbasin_T_Roald_R2_Text_0:
# 1860 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFloodbasin_T_Roald_R2_Text_1:
# 1862 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Another time, then.$"

ParcelFloodbasin_T_Roald_R2_Text_2:
# 1866 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Fair.$"

ParcelFloodbasin_T_Roald_R2_Text_3:
# 1867 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Roald_R3_Text_0:
# 1874 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFloodbasin_T_Roald_R3_Text_1:
# 1881 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: One more in me. After the high\n"
	.string "ground.$"

ParcelFloodbasin_T_Roald_R4_Text_0:
# 1888 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Roald_R4_Text_1:
# 1894 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: …Again, then. Later.$"

ParcelFloodbasin_T_Roald_R4_Text_2:
# 1895 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFloodbasin_T_Roald_R5_Text_0:
# 1902 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelFloodbasin_T_Roald_R5_Text_1:
# 1908 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Noted. Properly, this time.$"

ParcelFloodbasin_T_Roald_R5_Text_2:
# 1909 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ROALD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_T_Stein_Text_0:
# 1915 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You swam out here? Into THIS?\n"
	.string "Battle. Then get out of the water,\l"
	.string "seriously.$"

ParcelFloodbasin_T_Stein_Text_1:
# 1916 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Seriously. Out.$"

ParcelFloodbasin_T_Stein_Text_2:
# 1931 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: I swim the lake for the\n"
	.string "FOUNDATION. Sampling. The samples go to\l"
	.string "the coast. The results don't come back.$"

ParcelFloodbasin_T_Stein_R2_Text_0:
# 1942 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelFloodbasin_T_Stein_R2_Text_1:
# 1944 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: No hurry. The water keeps.$"

ParcelFloodbasin_T_Stein_R2_Text_2:
# 1948 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Still yours.$"

ParcelFloodbasin_T_Stein_R2_Text_3:
# 1949 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFloodbasin_T_Stein_R3_Text_0:
# 1956 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFloodbasin_T_Stein_R3_Text_1:
# 1962 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Again, then. Later.$"

ParcelFloodbasin_T_Stein_R3_Text_2:
# 1963 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFloodbasin_T_Stein_R4_Text_0:
# 1970 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFloodbasin_T_Stein_R4_Text_1:
# 1977 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFloodbasin_T_Stein_R5_Text_0:
# 1984 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFloodbasin_T_Stein_R5_Text_1:
# 1990 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: …Fair.$"

ParcelFloodbasin_T_Stein_R5_Text_2:
# 1991 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STEIN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFloodbasin_Epilogue_Text_0:
# 2000 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK. The relief tent is gone. The\n"
	.string "sandbags are stacked where DORSEY's\l"
	.string "photographer stood.\p"
	.string "Phase 2 goes ahead. Dry sheds, like\n"
	.string "PERRIN said. The next pulse will come\l"
	.string "from somewhere, and now there's a page\l"
	.string "that says where.$"

ParcelFloodbasin_Epilogue_Text_1:
# 2001 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE's roof has a man on it.\n"
	.string "Thursday. He is not the FOUNDATION's\l"
	.string "and the ladder is his own.\p"
	.string "In the basin the water runs grey after\n"
	.string "a pulse now, not brown. It isn't clean.\l"
	.string "It's honest, which is further than it\l"
	.string "had got in twenty-two years.$"

ParcelFloodbasin_GymBreen_Rematch_Text_0:
# 2013 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Carry weight, you said. I'm\n"
	.string "asking again, heavier.\p"
	.string "Nothing to clear. Just me, the whole\n"
	.string "crew's worth. Yes?$"

ParcelFloodbasin_GymBreen_Rematch_Text_1:
# 2015 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Mind the loads, then.$"

ParcelFloodbasin_GymBreen_Rematch_Text_2:
# 2019 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry it.$"

ParcelFloodbasin_GymBreen_Rematch_Text_3:
# 2020 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Any time the loads are down. Mind\n"
	.string "them.$"

ParcelFloodbasin_TarpRoof_Text_0:
# 2029 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A blue tarp weighted with stones over\n"
	.string "half a roof. Four Thursdays of weather\l"
	.string "on it.\p"
	.string "The stones have shifted. Somebody\n"
	.string "re-stacks them every morning.$"

ParcelFloodbasin_MarkA_Text_0:
# 2036 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line a hand above the sill, on\n"
	.string "the house beside the relief tent. You\l"
	.string "scrape it into a vial. It smells of the\l"
	.string "lake, and of something that is not the\l"
	.string "lake.\p"
	.string "Sample one.$"

ParcelFloodbasin_MarkA_Text_1:
# 2040 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line on the wall, a hand above\n"
	.string "the sill. The flood's signature.$"

ParcelFloodbasin_MarkB_Text_0:
# 2046 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The second mark, on the hamlet wall,\n"
	.string "higher than the first. The scrape comes\l"
	.string "away greasy.\p"
	.string "Sample two.$"

ParcelFloodbasin_MarkB_Text_1:
# 2050 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line on the hamlet wall, higher\n"
	.string "than the one by the tent.$"

ParcelFloodbasin_MarkC_Text_0:
# 2056 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The third mark, on the house with the\n"
	.string "tarp roof, highest of all. Under the\l"
	.string "brown there is a sheen like the one on\l"
	.string "the water by the booth.\p"
	.string "Sample three.$"

ParcelFloodbasin_MarkC_Text_1:
# 2060 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A brown line under the tarp roof's\n"
	.string "eaves, highest of the three.$"

ParcelFloodbasin_SurveyStake_Text_0:
# 2066 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A survey stake by the hamlet sign, red\n"
	.string "cloth at the top, the cloth gone pale on\l"
	.string "the side the floods come from.$"

ParcelFloodbasin_SurveyStake_Text_1:
# 2071 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Second reading. The works are fenced\n"
	.string "and a pump runs inside the fence. The\l"
	.string "basin runs grey after a pulse now, not\l"
	.string "brown.\p"
	.string "STRESSED, not COLLAPSING. The first\n"
	.string "time a word on this stake has moved the\l"
	.string "right way. You write it and do not\l"
	.string "underline it.$"

ParcelFloodbasin_PairBlankets_Text_0:
# 2082 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: Thursday. The roof. Nine\n"
	.string "years of Thursdays and this one a man\l"
	.string "came.$"

ParcelFloodbasin_PairBlankets_Text_1:
# 2083 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: Because the works are\n"
	.string "'under active remediation' now.\l"
	.string "Capitals. There's a sign.$"

ParcelFloodbasin_PairBlankets_Text_2:
# 2084 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: There was always a sign.$"

ParcelFloodbasin_PairBlankets_Text_3:
# 2085 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: There's a fence round the\n"
	.string "sign now, and a man inside the fence\l"
	.string "with a pump. Small things. I'll take small\l"
	.string "things.$"

ParcelFloodbasin_PairBlankets_Text_4:
# 2087 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: The ranger's stake by the\n"
	.string "hamlet sign. People stop at it now. Read\l"
	.string "what it says and go on.$"

ParcelFloodbasin_PairBlankets_Text_5:
# 2088 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: What does it say?$"

ParcelFloodbasin_PairBlankets_Text_6:
# 2089 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: It says what we've all said,\n"
	.string "in order, with the dates. That's all.\l"
	.string "Somehow that's the thing nobody had\l"
	.string "done.$"

ParcelFloodbasin_PairBlankets_Text_7:
# 2090 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: DORSEY read it. He read it\n"
	.string "twice and then he smiled at me. I didn't\l"
	.string "like the second smile.$"

ParcelFloodbasin_PairBlankets_Text_8:
# 2092 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: Third blanket in two years.\n"
	.string "I've a drawer of FOUNDATION blankets. I\l"
	.string "could open a shop.$"

ParcelFloodbasin_PairBlankets_Text_9:
# 2093 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: Don't say that where the\n"
	.string "aide can hear. He'll write down that\l"
	.string "you're grateful.$"

ParcelFloodbasin_PairBlankets_Text_10:
# 2094 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS ASKE: I am grateful. For the\n"
	.string "blanket. It's a good blanket.$"

ParcelFloodbasin_PairBlankets_Text_11:
# 2095 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NEIGHBOUR: It's the water I'd like a\n"
	.string "word about. Nobody's handing out any of\l"
	.string "that.$"

ParcelFloodbasin_PairBoat_Text_0:
# 2104 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Last run tonight. The\n"
	.string "FOUNDATION's pulled the boat. 'Needs\l"
	.string "have been reassessed.'$"

ParcelFloodbasin_PairBoat_Text_1:
# 2105 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: The road's clear. We don't need the\n"
	.string "boat.$"

ParcelFloodbasin_PairBoat_Text_2:
# 2106 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: We never needed the boat. We\n"
	.string "needed the road clear. Took nine years\l"
	.string "and a hearing to say it in that order.$"

ParcelFloodbasin_PairBoat_Text_3:
# 2107 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: What'll you do?$"

ParcelFloodbasin_PairBoat_Text_4:
# 2108 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Row. I did before. The river's\n"
	.string "still there, whoever's paying.$"

ParcelFloodbasin_PairBoat_Text_5:
# 2110 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: The ranger wouldn't take the free\n"
	.string "boat. Walked the road both ways with\l"
	.string "the water up to the knee.$"

ParcelFloodbasin_PairBoat_Text_6:
# 2111 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: Rangers are paid to be\n"
	.string "difficult.$"

ParcelFloodbasin_PairBoat_Text_7:
# 2112 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: A third of them by the FOUNDATION,\n"
	.string "the poster says.$"

ParcelFloodbasin_PairBoat_Text_8:
# 2113 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: You've been reading posters.\n"
	.string "That's how it starts. Get in the boat.$"

ParcelFloodbasin_PairBoat_Text_9:
# 2115 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: FOUNDATION's boat. Twice a\n"
	.string "day to FERNWICK. Nobody pays.$"

ParcelFloodbasin_PairBoat_Text_10:
# 2116 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: Then who pays you?$"

ParcelFloodbasin_PairBoat_Text_11:
# 2117 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: The FOUNDATION. I just said.$"

ParcelFloodbasin_PairBoat_Text_12:
# 2118 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAD: And who pays the FOUNDATION?$"

ParcelFloodbasin_PairBoat_Text_13:
# 2119 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FERRYMAN: …Get in the boat.$"

ParcelFloodbasin_Stringer_Text_0:
# 2131 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: The works are fenced and\n"
	.string "there's a man inside the fence with a\l"
	.string "pump. I ran a photograph of the pump.\p"
	.string "A pump is not a story. In Leirvik, after\n"
	.string "twenty-two years, a pump is the story.\l"
	.string "The editor didn't argue. He's from here.$"

ParcelFloodbasin_Stringer_Text_1:
# 2133 "data/maps/ParcelFloodbasin/scripts.pory"
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
# 2135 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "INGER: Third flood, third relief line,\n"
	.string "third photograph of the Commissioner\l"
	.string "handing a child a blanket. I've got a\l"
	.string "drawer of them.\p"
	.string "Different child each time. Same blanket.\n"
	.string "I've never been allowed to print that\l"
	.string "sentence. I'm saying it to you so it\l"
	.string "exists somewhere.$"

ParcelFloodbasin_WellWoman_Text_0:
# 2147 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. The licence\n"
	.string "is suspended. I say that to myself now,\l"
	.string "at the pump.\p"
	.string "It helps more than the first thing did.$"

ParcelFloodbasin_WellWoman_Text_1:
# 2152 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. I say it to\n"
	.string "myself when the aide comes round with\l"
	.string "the blankets. It helps, a little.$"

ParcelFloodbasin_WellWoman_Text_2:
# 2155 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: Discharge licensed. Where did\n"
	.string "you think it went.\p"
	.string "That's what he wouldn't say. I'd like to\n"
	.string "hit something. Here; I've no use for\l"
	.string "these now.$"

ParcelFloodbasin_WellWoman_Text_3:
# 2159 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: The pump house plate. Up at the\n"
	.string "works, on the wall. Brass, I'm told.$"

ParcelFloodbasin_WellWoman_Text_4:
# 2162 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "WOMAN: The works up the basin. There's a\n"
	.string "plate on the pump house. My husband\l"
	.string "read it once and came home and wouldn't\l"
	.string "say what it said.\p"
	.string "You read things for a living. Read me\n"
	.string "the plate.$"

ParcelFloodbasin_FindDeadline_Text_0:
# 2173 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The top of the line. MAGIKARP, mostly,\n"
	.string "pale, lying where the pulse left them,\l"
	.string "and the last one is past the big stone\l"
	.string "that nobody has ever had to use as a\l"
	.string "marker before.\p"
	.string "You put a stake of reed in the mud\n"
	.string "beside it, because there is no cloth,\l"
	.string "and because somebody should.$"

ParcelFloodbasin_FindDeadline_Text_1:
# 2176 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A reed stake in the mud beside a big\n"
	.string "stone. The line reached here this year.\l"
	.string "The reed is bending already.$"

ParcelFloodbasin_PairBank_Text_0:
# 2184 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Grey, not brown. The sheets.\n"
	.string "It's not clean. It's honest.$"

ParcelFloodbasin_PairBank_Text_1:
# 2185 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: You sound like the ranger.$"

ParcelFloodbasin_PairBank_Text_2:
# 2186 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: The ranger sounds like my\n"
	.string "washing book. We've all been saying the\l"
	.string "same thing for twenty years in\l"
	.string "different places. Now it's in one place.$"

ParcelFloodbasin_PairBank_Text_3:
# 2188 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: The ranger's stake by the\n"
	.string "sign has the dates of every pulse on it.\l"
	.string "Every one. I've been on this water\l"
	.string "twenty years and I couldn't have told\l"
	.string "you the dates.$"

ParcelFloodbasin_PairBank_Text_4:
# 2189 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: I could. They're in my\n"
	.string "washing book.$"

ParcelFloodbasin_PairBank_Text_5:
# 2190 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: You never said.$"

ParcelFloodbasin_PairBank_Text_6:
# 2191 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Nobody asked the\n"
	.string "laundress. The ranger did.$"

ParcelFloodbasin_PairBank_Text_7:
# 2193 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: Third wash this month and\n"
	.string "the sheets come up brown.$"

ParcelFloodbasin_PairBank_Text_8:
# 2194 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: Hang them in the hall. The\n"
	.string "Commissioner's photographer won't want\l"
	.string "brown sheets behind the blankets.$"

ParcelFloodbasin_PairBank_Text_9:
# 2195 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LAUNDRESS: That's exactly where I'm\n"
	.string "hanging them.$"

ParcelFloodbasin_PairBank_Text_10:
# 2196 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BARGEMAN: …Good.$"

ParcelFloodbasin_Board1_Text_0:
# 2205 "data/maps/ParcelFloodbasin/scripts.pory"
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
# 2210 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD by the relief tents.\n"
	.string "Deformity count, POLIWAG, spring sample\l"
	.string "of one hundred, in a column down the\l"
	.string "board: 0, 0, 1, 0, 3, 4, 7, 9.\p"
	.string "A sign beside the board says the site is\n"
	.string "being remediated. The board does not\l"
	.string "argue with the sign. It is a column of\l"
	.string "numbers.$"

ParcelFloodbasin_FindVoucher_Text_0:
# 2218 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A wooden box behind the tents, the\n"
	.string "Foundation's crest stencilled on the\l"
	.string "side, the lid off. Inside, counterfoils\l"
	.string "in bundles tied with string, a name on\l"
	.string "each. You count the bundles and then\l"
	.string "the counterfoils in one bundle and\l"
	.string "multiply, and then you count them all\l"
	.string "anyway. Two hundred and twelve.\p"
	.string "The names repeat. The same names,\n"
	.string "winter after winter.$"

ParcelFloodbasin_FindVoucher_Text_1:
# 2221 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The voucher box behind the tents. Two\n"
	.string "hundred and twelve counterfoils, tied\l"
	.string "in bundles. Nobody has burned it.$"

ParcelFloodbasin_Board3_Text_0:
# 2229 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD at the basin's north\n"
	.string "edge. ODDISH in the wet meadow, counted\l"
	.string "by the smell at dusk, the Survey's\l"
	.string "oldest joke and most reliable method.\p"
	.string "The board gives the count. It also\n"
	.string "gives the date the smell changed, and\l"
	.string "the word the Survey used for the new\l"
	.string "smell, which was not a joke.$"

ParcelFloodbasin_Board4_Text_0:
# 2236 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD at the old mill race.\n"
	.string "Before the works there was a mill, and\l"
	.string "before the mill a ford, and the board\l"
	.string "gives the dates of each and the frog\l"
	.string "count for each, as far back as anyone\l"
	.string "wrote frogs down.\p"
	.string "The ford had the most. The board does\n"
	.string "not say that progress is the wrong\l"
	.string "word. It gives the count.$"

ParcelFloodbasin_PairLevee_Text_0:
# 2245 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Fourth flood. Slower. The\n"
	.string "sluice held it a day.$"

ParcelFloodbasin_PairLevee_Text_1:
# 2246 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: A day's not a cure.$"

ParcelFloodbasin_PairLevee_Text_2:
# 2247 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: A day's a day. I packed\n"
	.string "sandbags for three floods without one.\l"
	.string "I'll take the day and I'll keep the bags.$"

ParcelFloodbasin_PairLevee_Text_3:
# 2249 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The ranger stood on the levee with\n"
	.string "the Board's man and made him read his\l"
	.string "own gauge.$"

ParcelFloodbasin_PairLevee_Text_4:
# 2250 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Did he read it?$"

ParcelFloodbasin_PairLevee_Text_5:
# 2251 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: He read it. Then he read it again,\n"
	.string "quieter. That's the sound a number\l"
	.string "makes when it's true.$"

ParcelFloodbasin_PairLevee_Text_6:
# 2253 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Three floods since the\n"
	.string "works. Before the works, one in ten\l"
	.string "years.$"

ParcelFloodbasin_PairLevee_Text_7:
# 2254 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The Board says weather.$"

ParcelFloodbasin_PairLevee_Text_8:
# 2255 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: The weather was here before\n"
	.string "the works too. It knew how to get to\l"
	.string "the sea then.$"

ParcelFloodbasin_Board10_Text_0:
# 2264 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD at the north track. The\n"
	.string "relief tents stand where the Survey's\l"
	.string "first basin stake stood; the stake was\l"
	.string "moved a pace to make room, and the\l"
	.string "board records the pace.\p"
	.string "One pace is nothing. The board records\n"
	.string "it because the Survey has never once\l"
	.string "moved a stake for anything else, and\l"
	.string "wanted that written.$"

ParcelFloodbasin_PairTents_Text_0:
# 2273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: Next. Name, household. No\n"
	.string "vouchers this winter; the review put\l"
	.string "the money on the pump instead.$"

ParcelFloodbasin_PairTents_Text_1:
# 2274 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: And the queue?$"

ParcelFloodbasin_PairTents_Text_2:
# 2275 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: You're it. I've been standing\n"
	.string "here since eight for one man.$"

ParcelFloodbasin_PairTents_Text_3:
# 2276 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Then ask me something you don't\n"
	.string "know.$"

ParcelFloodbasin_PairTents_Text_4:
# 2277 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: Does the water still smell?$"

ParcelFloodbasin_PairTents_Text_5:
# 2278 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: No.$"

ParcelFloodbasin_PairTents_Text_6:
# 2280 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: The ranger stood in the queue.\n"
	.string "Didn't take a voucher. Wrote down how\l"
	.string "long the queue was.$"

ParcelFloodbasin_PairTents_Text_7:
# 2281 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: How long was it?$"

ParcelFloodbasin_PairTents_Text_8:
# 2282 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: An hour and ten. They wrote it the\n"
	.string "way you'd write a depth.$"

ParcelFloodbasin_PairTents_Text_9:
# 2283 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: It is a depth.$"

ParcelFloodbasin_PairTents_Text_10:
# 2285 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: Next. Name, household, how many\n"
	.string "under twelve.$"

ParcelFloodbasin_PairTents_Text_11:
# 2286 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Four. Two. The same as last winter.$"

ParcelFloodbasin_PairTents_Text_12:
# 2287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: I know. I'm supposed to ask.$"

ParcelFloodbasin_PairTents_Text_13:
# 2289 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NURSE: Does the water still smell? I'm\n"
	.string "not supposed to ask that.$"

ParcelFloodbasin_Board11_Text_0:
# 2298 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A SURVEY BOARD at the basin's western\n"
	.string "rim, where the fields begin. Runoff from\l"
	.string "the fields reaches the marsh here\l"
	.string "first, and the Survey reads it by the\l"
	.string "colour of the ditch: clear, green, brown.\p"
	.string "The board gives the colour by month for\n"
	.string "twelve years as a row of painted\l"
	.string "squares. Read it left to right. It is a\l"
	.string "lesson in two words.$"
