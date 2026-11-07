ParcelFernwick_MapScripts::
	.byte 0


ParcelFernwick_ToMistwood::
# 14 "data/maps/ParcelFernwick/scripts.pory"
	warp MAP_PARCEL_MISTWOOD, 14, 1
# 15 "data/maps/ParcelFernwick/scripts.pory"
	waitstate
	end


ParcelFernwick_GateWard::
# 21 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_STATION, ParcelFernwick_GateWard_Text_0, ParcelFernwick_GateWard_Text_1, ParcelFernwick_GateWard_Defeated
# 25 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 26 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 27 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Text_2, MSGBOX_DEFAULT
# 28 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_GateWard_Defeated::
# 33 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_STATION
# 34 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Defeated_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Lookout::
# 41 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelFernwick_Lookout_Text_0, ParcelFernwick_Lookout_Text_1
# 44 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Lookout_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Birder::
# 49 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelFernwick_Birder_Text_0, ParcelFernwick_Birder_Text_1
# 52 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Birder_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Ranger::
# 58 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 59 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 60 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Ranger_2
# 63 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Ranger_1:
# 65 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Ranger_2:
# 61 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Ranger_1


ParcelFernwick_OldMan::
# 70 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 71 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 72 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Woman::
# 78 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 79 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 80 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwick_Woman_2
# 83 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Woman_1:
# 85 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_2:
# 81 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Woman_1


ParcelFernwick_Boy::
# 90 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 91 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 92 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_0, MSGBOX_DEFAULT
# 93 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Girl::
# 98 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 99 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 100 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Fisher::
# 106 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 107 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 108 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_0, MSGBOX_DEFAULT
# 109 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Scientist::
# 114 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 115 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 116 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Scientist_2
# 119 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Scientist_1:
# 121 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_2:
# 117 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Scientist_1


ParcelFernwick_Gentleman::
# 126 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 127 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 128 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_0, MSGBOX_DEFAULT
# 129 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Clerk::
# 134 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 135 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 136 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_0, MSGBOX_DEFAULT
# 137 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Mother::
# 142 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 143 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 144 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ItemSuperPotion::
# 150 "data/maps/ParcelFernwick/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFernwick_HallSign::
# 156 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_HQSign::
# 161 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HQSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_SurveySign::
# 166 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_SurveySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_FisherSign::
# 171 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FisherSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_CitySign::
# 176 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_CitySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_T_Ella::
# 182 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_ELLA, ParcelFernwick_T_Ella_Text_0, ParcelFernwick_T_Ella_Text_1, ParcelFernwick_T_Ella_FirstWin
# 186 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 187 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Ella_3
ParcelFernwick_T_Ella_1:
# 190 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Ella_8
ParcelFernwick_T_Ella_6:
# 193 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Ella_13
ParcelFernwick_T_Ella_11:
# 196 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Ella_18
ParcelFernwick_T_Ella_16:
# 199 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Ella_2:
# 188 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_3:
# 187 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R2
	goto_if 0, ParcelFernwick_T_Ella_2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_7:
# 191 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R3
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_8:
# 190 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R3
	goto_if 0, ParcelFernwick_T_Ella_7
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_12:
# 194 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R4
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_13:
# 193 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R4
	goto_if 0, ParcelFernwick_T_Ella_12
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_17:
# 197 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R5
	goto ParcelFernwick_T_Ella_16

ParcelFernwick_T_Ella_18:
# 196 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R5
	goto_if 0, ParcelFernwick_T_Ella_17
	goto ParcelFernwick_T_Ella_16


ParcelFernwick_T_Ella_FirstWin::
# 203 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
# 204 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R2::
# 208 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 209 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 210 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_0, MSGBOX_YESNO
# 211 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R2_2
# 216 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R2, ParcelFernwick_T_Ella_R2_Text_2
# 217 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_3, MSGBOX_DEFAULT
# 218 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R2_2:
# 212 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R3::
# 222 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 223 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 224 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_0, MSGBOX_YESNO
# 225 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R3_2
# 230 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R3, ParcelFernwick_T_Ella_R3_Text_1
# 231 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_2, MSGBOX_DEFAULT
# 232 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R3_2:
# 226 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 227 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R4::
# 236 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 237 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 238 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_0, MSGBOX_YESNO
# 239 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R4_2
# 244 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R4, ParcelFernwick_T_Ella_R4_Text_1
# 245 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_2, MSGBOX_DEFAULT
# 246 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R4_2:
# 240 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 241 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R5::
# 250 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 251 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 252 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_0, MSGBOX_YESNO
# 253 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R5_2
# 258 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R5, ParcelFernwick_T_Ella_R5_Text_1
# 259 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_2, MSGBOX_DEFAULT
# 260 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R5_2:
# 254 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 255 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik::
# 264 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_HENRIK, ParcelFernwick_T_Henrik_Text_0, ParcelFernwick_T_Henrik_Text_1, ParcelFernwick_T_Henrik_FirstWin
# 268 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 269 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Henrik_3
ParcelFernwick_T_Henrik_1:
# 272 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Henrik_8
ParcelFernwick_T_Henrik_6:
# 275 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Henrik_13
ParcelFernwick_T_Henrik_11:
# 278 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Henrik_18
ParcelFernwick_T_Henrik_16:
# 281 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Henrik_2:
# 270 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_3:
# 269 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R2
	goto_if 0, ParcelFernwick_T_Henrik_2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_7:
# 273 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R3
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_8:
# 272 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R3
	goto_if 0, ParcelFernwick_T_Henrik_7
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_12:
# 276 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R4
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_13:
# 275 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R4
	goto_if 0, ParcelFernwick_T_Henrik_12
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_17:
# 279 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R5
	goto ParcelFernwick_T_Henrik_16

ParcelFernwick_T_Henrik_18:
# 278 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R5
	goto_if 0, ParcelFernwick_T_Henrik_17
	goto ParcelFernwick_T_Henrik_16


ParcelFernwick_T_Henrik_FirstWin::
# 285 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
# 286 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R2::
# 290 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 291 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 292 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_0, MSGBOX_YESNO
# 293 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R2_2
# 298 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R2, ParcelFernwick_T_Henrik_R2_Text_2
# 299 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_3, MSGBOX_DEFAULT
# 300 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R2_2:
# 294 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 295 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R3::
# 304 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 305 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 306 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_0, MSGBOX_YESNO
# 307 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R3_2
# 312 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R3, ParcelFernwick_T_Henrik_R3_Text_1
# 313 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_2, MSGBOX_DEFAULT
# 314 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R3_2:
# 308 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R4::
# 318 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 319 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 320 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_0, MSGBOX_YESNO
# 321 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R4_2
# 326 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R4, ParcelFernwick_T_Henrik_R3_Text_1
# 327 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R4_2:
# 322 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 323 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R5::
# 332 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 333 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 334 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_0, MSGBOX_YESNO
# 335 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R5_2
# 340 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R5, ParcelFernwick_T_Henrik_R2_Text_2
# 341 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_1, MSGBOX_DEFAULT
# 342 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R5_2:
# 336 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 337 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar::
# 346 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_STEINAR, ParcelFernwick_T_Steinar_Text_0, ParcelFernwick_T_Steinar_Text_1, ParcelFernwick_T_Steinar_FirstWin
# 350 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 351 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Steinar_3
ParcelFernwick_T_Steinar_1:
# 354 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Steinar_8
ParcelFernwick_T_Steinar_6:
# 357 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Steinar_13
ParcelFernwick_T_Steinar_11:
# 360 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Steinar_18
ParcelFernwick_T_Steinar_16:
# 363 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Steinar_2:
# 352 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_3:
# 351 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R2
	goto_if 0, ParcelFernwick_T_Steinar_2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_7:
# 355 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R3
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_8:
# 354 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R3
	goto_if 0, ParcelFernwick_T_Steinar_7
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_12:
# 358 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R4
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_13:
# 357 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R4
	goto_if 0, ParcelFernwick_T_Steinar_12
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_17:
# 361 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R5
	goto ParcelFernwick_T_Steinar_16

ParcelFernwick_T_Steinar_18:
# 360 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R5
	goto_if 0, ParcelFernwick_T_Steinar_17
	goto ParcelFernwick_T_Steinar_16


ParcelFernwick_T_Steinar_FirstWin::
# 367 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
# 368 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R2::
# 372 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 373 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 374 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_0, MSGBOX_YESNO
# 375 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R2_2
# 380 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R2, ParcelFernwick_T_Steinar_R2_Text_2
# 381 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_3, MSGBOX_DEFAULT
# 382 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R2_2:
# 376 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R3::
# 386 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 387 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 388 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_0, MSGBOX_YESNO
# 389 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R3_2
# 394 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R3, ParcelFernwick_T_Steinar_R3_Text_1
# 395 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_2, MSGBOX_DEFAULT
# 396 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R3_2:
# 390 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R4::
# 400 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 401 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 402 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_0, MSGBOX_YESNO
# 403 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R4_2
# 408 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R4, ParcelFernwick_T_Steinar_R2_Text_2
# 409 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_1, MSGBOX_DEFAULT
# 410 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R4_2:
# 404 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 405 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R5::
# 414 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 415 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 416 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_0, MSGBOX_YESNO
# 417 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R5_2
# 422 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R5, ParcelFernwick_T_Steinar_R5_Text_1
# 423 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_2, MSGBOX_DEFAULT
# 424 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R5_2:
# 418 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 419 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte::
# 428 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_MARTE, ParcelFernwick_T_Marte_Text_0, ParcelFernwick_T_Marte_Text_1, ParcelFernwick_T_Marte_FirstWin
# 432 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 433 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Marte_3
ParcelFernwick_T_Marte_1:
# 436 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Marte_8
ParcelFernwick_T_Marte_6:
# 439 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Marte_13
ParcelFernwick_T_Marte_11:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Marte_18
ParcelFernwick_T_Marte_16:
# 445 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Marte_2:
# 434 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_3:
# 433 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R2
	goto_if 0, ParcelFernwick_T_Marte_2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_7:
# 437 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R3
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_8:
# 436 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R3
	goto_if 0, ParcelFernwick_T_Marte_7
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_12:
# 440 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R4
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_13:
# 439 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R4
	goto_if 0, ParcelFernwick_T_Marte_12
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_17:
# 443 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R5
	goto ParcelFernwick_T_Marte_16

ParcelFernwick_T_Marte_18:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R5
	goto_if 0, ParcelFernwick_T_Marte_17
	goto ParcelFernwick_T_Marte_16


ParcelFernwick_T_Marte_FirstWin::
# 449 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
# 450 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R2::
# 454 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 455 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 456 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_0, MSGBOX_YESNO
# 457 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R2_2
# 462 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R2, ParcelFernwick_T_Marte_R2_Text_2
# 463 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_3, MSGBOX_DEFAULT
# 464 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R2_2:
# 458 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 459 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R3::
# 468 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 469 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 470 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_0, MSGBOX_YESNO
# 471 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R3_2
# 476 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R3, ParcelFernwick_T_Marte_R2_Text_2
# 477 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_1, MSGBOX_DEFAULT
# 478 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R3_2:
# 472 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 473 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R4::
# 482 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 483 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 484 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_0, MSGBOX_YESNO
# 485 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R4_2
# 490 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R4, ParcelFernwick_T_Marte_R4_Text_1
# 491 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_2, MSGBOX_DEFAULT
# 492 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R4_2:
# 486 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 487 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R5::
# 496 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 497 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 498 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_0, MSGBOX_YESNO
# 499 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R5_2
# 504 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R5, ParcelFernwick_T_Marte_R5_Text_1
# 505 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_2, MSGBOX_DEFAULT
# 506 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R5_2:
# 500 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 501 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon::
# 510 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_LEON, ParcelFernwick_T_Leon_Text_0, ParcelFernwick_T_Leon_Text_1, ParcelFernwick_T_Leon_FirstWin
# 514 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 515 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Leon_3
ParcelFernwick_T_Leon_1:
# 518 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Leon_8
ParcelFernwick_T_Leon_6:
# 521 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Leon_13
ParcelFernwick_T_Leon_11:
# 524 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Leon_18
ParcelFernwick_T_Leon_16:
# 527 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Leon_2:
# 516 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_3:
# 515 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R2
	goto_if 0, ParcelFernwick_T_Leon_2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_7:
# 519 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R3
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_8:
# 518 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R3
	goto_if 0, ParcelFernwick_T_Leon_7
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_12:
# 522 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R4
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_13:
# 521 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R4
	goto_if 0, ParcelFernwick_T_Leon_12
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_17:
# 525 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R5
	goto ParcelFernwick_T_Leon_16

ParcelFernwick_T_Leon_18:
# 524 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R5
	goto_if 0, ParcelFernwick_T_Leon_17
	goto ParcelFernwick_T_Leon_16


ParcelFernwick_T_Leon_FirstWin::
# 531 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
# 532 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R2::
# 536 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 537 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 538 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_0, MSGBOX_YESNO
# 539 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R2_2
# 544 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R2, ParcelFernwick_T_Leon_R2_Text_2
# 545 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_3, MSGBOX_DEFAULT
# 546 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R2_2:
# 540 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 541 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R3::
# 550 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 551 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 552 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_0, MSGBOX_YESNO
# 553 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R3_2
# 558 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R3, ParcelFernwick_T_Leon_R3_Text_1
# 559 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_2, MSGBOX_DEFAULT
# 560 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R3_2:
# 554 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 555 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R4::
# 564 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 565 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 566 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_0, MSGBOX_YESNO
# 567 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R4_2
# 572 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R4, ParcelFernwick_T_Leon_R4_Text_1
# 573 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_2, MSGBOX_DEFAULT
# 574 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R4_2:
# 568 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 569 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R5::
# 578 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 579 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 580 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_0, MSGBOX_YESNO
# 581 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R5_2
# 586 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R5, ParcelFernwick_T_Leon_R2_Text_2
# 587 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_1, MSGBOX_DEFAULT
# 588 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R5_2:
# 582 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 583 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea::
# 592 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_THEA, ParcelFernwick_T_Thea_Text_0, ParcelFernwick_T_Thea_Text_1, ParcelFernwick_T_Thea_FirstWin
# 596 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 597 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Thea_3
ParcelFernwick_T_Thea_1:
# 600 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Thea_8
ParcelFernwick_T_Thea_6:
# 603 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Thea_13
ParcelFernwick_T_Thea_11:
# 606 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Thea_18
ParcelFernwick_T_Thea_16:
# 609 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Thea_2:
# 598 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_3:
# 597 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R2
	goto_if 0, ParcelFernwick_T_Thea_2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_7:
# 601 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R3
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_8:
# 600 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R3
	goto_if 0, ParcelFernwick_T_Thea_7
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_12:
# 604 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R4
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_13:
# 603 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R4
	goto_if 0, ParcelFernwick_T_Thea_12
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_17:
# 607 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R5
	goto ParcelFernwick_T_Thea_16

ParcelFernwick_T_Thea_18:
# 606 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R5
	goto_if 0, ParcelFernwick_T_Thea_17
	goto ParcelFernwick_T_Thea_16


ParcelFernwick_T_Thea_FirstWin::
# 613 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
# 614 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R2::
# 618 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 619 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 620 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_0, MSGBOX_YESNO
# 621 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R2_2
# 626 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R2, ParcelFernwick_T_Thea_R2_Text_2
# 627 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_3, MSGBOX_DEFAULT
# 628 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R2_2:
# 622 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 623 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R3::
# 632 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 633 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 634 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_0, MSGBOX_YESNO
# 635 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R3_2
# 640 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R3, ParcelFernwick_T_Thea_R3_Text_1
# 641 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_2, MSGBOX_DEFAULT
# 642 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R3_2:
# 636 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 637 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R4::
# 646 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 647 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 648 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_0, MSGBOX_YESNO
# 649 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R4_2
# 654 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R4, ParcelFernwick_T_Thea_R3_Text_1
# 655 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_1, MSGBOX_DEFAULT
# 656 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R4_2:
# 650 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 651 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R5::
# 660 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 661 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 662 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_0, MSGBOX_YESNO
# 663 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R5_2
# 668 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R5, ParcelFernwick_T_Thea_R5_Text_1
# 669 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_2, MSGBOX_DEFAULT
# 670 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R5_2:
# 664 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 665 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_PondLook::
# 676 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 677 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR, ParcelFernwick_PondLook_3
ParcelFernwick_PondLook_1:
# 683 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_1, MSGBOX_SIGN
# 684 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_2:
# 678 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_0, MSGBOX_SIGN
# 679 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR_SEEN
# 680 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_3:
# 677 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GRETTIR_SEEN, ParcelFernwick_PondLook_2
	goto ParcelFernwick_PondLook_1


ParcelFernwick_PerrinScene::
# 690 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_2
# 694 "data/maps/ParcelFernwick/scripts.pory"
	lockall
# 695 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 696 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_0, MSGBOX_DEFAULT
# 697 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 698 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinIn
# 699 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 700 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_1, MSGBOX_DEFAULT
# 701 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_Text_2
# 702 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_3, MSGBOX_DEFAULT
# 703 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 704 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinOut
# 705 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 706 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 21
# 707 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_PERRIN_1
# 708 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
# 709 "data/maps/ParcelFernwick/scripts.pory"
	releaseall
	end

ParcelFernwick_PerrinScene_2:
# 691 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelFernwick_PerrinTalk::
# 713 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 714 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 715 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 716 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


# 719 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinIn:
# 719 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
# 719 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
	step_end

# 720 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinOut:
# 720 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
# 720 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
	step_end

ParcelFernwick_GateWard_Text_0:
# 22 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station checkpoint. Nobody goes\n"
	.string "north to the marsh without clearance.\p"
	.string "You want it? Earn it.$"

ParcelFernwick_GateWard_Text_1:
# 23 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Cleared. Logged.$"

ParcelFernwick_GateWard_Text_2:
# 27 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: You're in the log. Keep your card\n"
	.string "on you. The next checkpoint won't take\l"
	.string "my word for it.$"

ParcelFernwick_GateWard_Defeated_Text_0:
# 34 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station clearance: granted. No\n"
	.string "ceremony. That's not what this is.$"

ParcelFernwick_Lookout_Text_0:
# 42 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Nice view from up here. You can\n"
	.string "see the whole marsh.\p"
	.string "You can see who's coming, too.$"

ParcelFernwick_Lookout_Text_1:
# 43 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Tch.$"

ParcelFernwick_Lookout_Text_2:
# 44 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Write your little report. It\n"
	.string "changes nothing out here.$"

ParcelFernwick_Birder_Text_0:
# 50 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Shh! I'm counting nests! ...Okay.\n"
	.string "Fine. One battle.$"

ParcelFernwick_Birder_Text_1:
# 51 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Fewer nests every spring, and now\n"
	.string "fewer wins.$"

ParcelFernwick_Birder_Text_2:
# 52 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Nobody writes the nest counts\n"
	.string "down but me. Somebody should.$"

ParcelFernwick_Ranger_Text_0:
# 61 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: Half the station's been called\n"
	.string "to the hearings as witnesses. The other\l"
	.string "half is covering their shifts.\p"
	.string "HALE's doing both.$"

ParcelFernwick_Ranger_Text_1:
# 63 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: District Station. HALE's inside,\n"
	.string "if you're the one he keeps mentioning.\p"
	.string "He mentions you a lot, for a man who\n"
	.string "doesn't talk.$"

ParcelFernwick_OldMan_Text_0:
# 72 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This was a fishing village\n"
	.string "before the Corps put the station here.\p"
	.string "Now it's a fishing village with\n"
	.string "paperwork.$"

ParcelFernwick_Woman_Text_0:
# 81 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: You passed TARN's exam? He\n"
	.string "didn't smile, did he. He never smiles. I\l"
	.string "think it's a Tidewater regulation.$"

ParcelFernwick_Woman_Text_1:
# 83 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: The Certification Hall's right\n"
	.string "there. TARN runs the exams.\p"
	.string "He's not as scary as the sign makes him\n"
	.string "look. He's scarier.$"

ParcelFernwick_Boy_Text_0:
# 92 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER when I grow\n"
	.string "up! Or a fisherman.\p"
	.string "Or a MEREHOLT guy. They have the best\n"
	.string "boots.$"

ParcelFernwick_Girl_Text_0:
# 100 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond used to have POLIWAG in\n"
	.string "it! Now it just has ducks.\p"
	.string "Well. WINGULL. Same thing.$"

ParcelFernwick_Fisher_Text_0:
# 108 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: The marsh water's been low\n"
	.string "since spring. You can walk to places you\l"
	.string "used to row to.\p"
	.string "That's not good, whatever the Council\n"
	.string "says.$"

ParcelFernwick_Scientist_Text_0:
# 117 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring and\n"
	.string "nobody cared. Now the lawyers want the\l"
	.string "numbers by Thursday.\p"
	.string "We don't have a Thursday setting.$"

ParcelFernwick_Scientist_Text_1:
# 119 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: We measure. That's all we do.\n"
	.string "Forty years of measuring.\p"
	.string "ILEX is inside. She'll tell you it's\n"
	.string "boring. She's lying.$"

ParcelFernwick_Gentleman_Text_0:
# 128 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It says so on the fountain.\p"
	.string "It says so on most things around here,\n"
	.string "if you read the small plates.$"

ParcelFernwick_Clerk_Text_0:
# 136 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "up again. Don't ask what the work is.\p"
	.string "Nobody asks. That's the deal.$"

ParcelFernwick_Mother_Text_0:
# 144 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy wants to be a RANGER. I\n"
	.string "told him RANGERS don't get paid.\p"
	.string "He said that's fine, he'll be a MEREHOLT\n"
	.string "guy on weekends.$"

ParcelFernwick_HallSign_Text_0:
# 156 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "CERTIFICATION HALL\p"
	.string "Forest Certification: practical\n"
	.string "examination.\n"
	.string "Examiner: TARN, Tidewater Division.$"

ParcelFernwick_HQSign_Text_0:
# 161 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "DISTRICT STATION\p"
	.string "Rangers, provisionals and the public:\n"
	.string "front desk.$"

ParcelFernwick_SurveySign_Text_0:
# 166 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE SURVEY\n"
	.string "District office\p"
	.string "Long-baseline monitoring. Soil cores,\n"
	.string "water logs, repeat photography.\p"
	.string "We do not issue press releases.$"

ParcelFernwick_FisherSign_Text_0:
# 171 "data/maps/ParcelFernwick/scripts.pory"
	.string "GRETTIR'S\n"
	.string "Rods. Bait. Marsh advice.\p"
	.string "The advice is free and you won't take\n"
	.string "it.$"

ParcelFernwick_CitySign_Text_0:
# 176 "data/maps/ParcelFernwick/scripts.pory"
	.string "FERNWICK\n"
	.string "District seat, Saltmarsh Coast\p"
	.string "A smaller plate: PROMENADE AND\n"
	.string "FOUNTAIN BY THE MEREHOLT FOUNDATION.$"

ParcelFernwick_T_Ella_Text_0:
# 183 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The park pond's new. Nothing lives\n"
	.string "in it yet. The CORPS says give it a year.\l"
	.string "Battle?$"

ParcelFernwick_T_Ella_Text_1:
# 184 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: A year, they said.$"

ParcelFernwick_T_Ella_Text_2:
# 199 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: TARN failed my brother twice. He's\n"
	.string "at the HALL every day anyway. That's\l"
	.string "FERNWICK.$"

ParcelFernwick_T_Ella_R2_Text_0:
# 210 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Ella_R2_Text_1:
# 212 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Another time, then.$"

ParcelFernwick_T_Ella_R2_Text_2:
# 216 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Still yours.$"

ParcelFernwick_T_Ella_R2_Text_3:
# 217 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Ella_R3_Text_0:
# 224 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Ella_R3_Text_1:
# 230 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Fair.$"

ParcelFernwick_T_Ella_R3_Text_2:
# 231 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Ella_R4_Text_0:
# 238 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFernwick_T_Ella_R4_Text_1:
# 244 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Again, then. Later.$"

ParcelFernwick_T_Ella_R4_Text_2:
# 245 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Ella_R5_Text_0:
# 252 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Ella_R5_Text_1:
# 258 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Noted. Properly, this time.$"

ParcelFernwick_T_Ella_R5_Text_2:
# 259 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Henrik_Text_0:
# 265 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: The district station sends\n"
	.string "provisionals north and gets reports\l"
	.string "back. Never the provisionals. Battle!$"

ParcelFernwick_T_Henrik_Text_1:
# 266 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Some come back, then.$"

ParcelFernwick_T_Henrik_Text_2:
# 281 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: ILEX files everything at the\n"
	.string "survey office. Everything. I asked her\l"
	.string "what for. She said 'later'.$"

ParcelFernwick_T_Henrik_R2_Text_0:
# 292 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Henrik_R2_Text_1:
# 294 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: No hurry. The water keeps.$"

ParcelFernwick_T_Henrik_R2_Text_2:
# 298 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: That's the one I wanted to see.$"

ParcelFernwick_T_Henrik_R2_Text_3:
# 299 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Henrik_R3_Text_0:
# 306 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Henrik_R3_Text_1:
# 312 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Still yours.$"

ParcelFernwick_T_Henrik_R3_Text_2:
# 313 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Henrik_R4_Text_0:
# 320 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFernwick_T_Henrik_R4_Text_1:
# 327 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFernwick_T_Henrik_R5_Text_0:
# 334 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFernwick_T_Henrik_R5_Text_1:
# 341 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFernwick_T_Steinar_Text_0:
# 347 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Down from the marsh road. The\n"
	.string "plaza's the only flat ground in forty\l"
	.string "miles. Battle for it.$"

ParcelFernwick_T_Steinar_Text_1:
# 348 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Share the flat ground, then.$"

ParcelFernwick_T_Steinar_Text_2:
# 363 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: The north checkpoint's\n"
	.string "WARD's. He doesn't bend. The marsh is\l"
	.string "past him and the marsh is worse than he\l"
	.string "is.$"

ParcelFernwick_T_Steinar_R2_Text_0:
# 374 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Steinar_R2_Text_1:
# 376 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Steinar_R2_Text_2:
# 380 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Noted. Properly, this time.$"

ParcelFernwick_T_Steinar_R2_Text_3:
# 381 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Steinar_R3_Text_0:
# 388 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Steinar_R3_Text_1:
# 394 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Fair.$"

ParcelFernwick_T_Steinar_R3_Text_2:
# 395 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Steinar_R4_Text_0:
# 402 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFernwick_T_Steinar_R4_Text_1:
# 409 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Steinar_R5_Text_0:
# 416 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Steinar_R5_Text_1:
# 422 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Again, then. Later.$"

ParcelFernwick_T_Steinar_R5_Text_2:
# 423 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Marte_Text_0:
# 429 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: South square's where the\n"
	.string "MISTWOOD road comes in. Everyone comes\l"
	.string "in tired. Easy battles.$"

ParcelFernwick_T_Marte_Text_1:
# 430 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Not that tired, then.$"

ParcelFernwick_T_Marte_Text_2:
# 445 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: The CENTER's free for\n"
	.string "provisionals. The MART isn't. The CORPS\l"
	.string "pays for healing, not REPELS. Funny\l"
	.string "priorities.$"

ParcelFernwick_T_Marte_R2_Text_0:
# 456 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFernwick_T_Marte_R2_Text_1:
# 458 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Fine. Same spot.$"

ParcelFernwick_T_Marte_R2_Text_2:
# 462 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: …Fair.$"

ParcelFernwick_T_Marte_R2_Text_3:
# 463 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Marte_R3_Text_0:
# 470 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFernwick_T_Marte_R3_Text_1:
# 477 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Marte_R4_Text_0:
# 484 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFernwick_T_Marte_R4_Text_1:
# 490 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Right. That's the whole of it.$"

ParcelFernwick_T_Marte_R4_Text_2:
# 491 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Marte_R5_Text_0:
# 498 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFernwick_T_Marte_R5_Text_1:
# 504 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's the one I wanted to see.$"

ParcelFernwick_T_Marte_R5_Text_2:
# 505 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Leon_Text_0:
# 511 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The square's the only place in\n"
	.string "FERNWICK with grass worth a bug.\l"
	.string "Battle!$"

ParcelFernwick_T_Leon_Text_1:
# 512 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Worth a bug. Not a battle.$"

ParcelFernwick_T_Leon_Text_2:
# 527 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: WURMPLE in the park, none by the\n"
	.string "station. The station's all pavement.\l"
	.string "Pavement's the point, my dad says.$"

ParcelFernwick_T_Leon_R2_Text_0:
# 538 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Leon_R2_Text_1:
# 540 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Leon_R2_Text_2:
# 544 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: …Again, then. Later.$"

ParcelFernwick_T_Leon_R2_Text_3:
# 545 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Leon_R3_Text_0:
# 552 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Leon_R3_Text_1:
# 558 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Right. That's the whole of it.$"

ParcelFernwick_T_Leon_R3_Text_2:
# 559 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFernwick_T_Leon_R4_Text_0:
# 566 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFernwick_T_Leon_R4_Text_1:
# 572 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Noted. Properly, this time.$"

ParcelFernwick_T_Leon_R4_Text_2:
# 573 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Leon_R5_Text_0:
# 580 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Leon_R5_Text_1:
# 587 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Thea_Text_0:
# 593 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Cadet THEA, station duty. HALE\n"
	.string "says spar every provisional who\l"
	.string "crosses the plaza. You crossed it.$"

ParcelFernwick_T_Thea_Text_1:
# 594 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: HALE will want the score.$"

ParcelFernwick_T_Thea_Text_2:
# 609 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Every cadet wants the Reedmere\n"
	.string "posting. The marsh is where things\l"
	.string "happen. Things aren't good, but they\l"
	.string "happen.$"

ParcelFernwick_T_Thea_R2_Text_0:
# 620 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Thea_R2_Text_1:
# 622 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Another time, then.$"

ParcelFernwick_T_Thea_R2_Text_2:
# 626 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Right. That's the whole of it.$"

ParcelFernwick_T_Thea_R2_Text_3:
# 627 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Thea_R3_Text_0:
# 634 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFernwick_T_Thea_R3_Text_1:
# 640 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Still yours.$"

ParcelFernwick_T_Thea_R3_Text_2:
# 641 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Thea_R4_Text_0:
# 648 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFernwick_T_Thea_R4_Text_1:
# 655 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Thea_R5_Text_0:
# 662 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Thea_R5_Text_1:
# 668 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's the one I wanted to see.$"

ParcelFernwick_T_Thea_R5_Text_2:
# 669 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_PondLook_Text_0:
# 678 "data/maps/ParcelFernwick/scripts.pory"
	.string "Still water over bare clay. Nothing.\n"
	.string "Nothing.\p"
	.string "Then a SURSKIT, skating out from the\n"
	.string "reeds the CORPS planted. Just the one.\l"
	.string "It found the pond on its own.$"

ParcelFernwick_PondLook_Text_1:
# 683 "data/maps/ParcelFernwick/scripts.pory"
	.string "The park pond. Still water. A SURSKIT\n"
	.string "skates across it and back.$"

ParcelFernwick_PerrinScene_Text_0:
# 696 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelFernwick_PerrinScene_Text_1:
# 700 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: There you are! WREN, right? I'm\n"
	.string "PERRIN. Same cohort, different\l"
	.string "dispatch. TARN passed me yesterday.\l"
	.string "Yes, PASSED, first go.\p"
	.string "Everyone keeps saying the CORPS\n"
	.string "doesn't do rankings. Let's find out.$"

ParcelFernwick_PerrinScene_Text_2:
# 701 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Huh. Okay. OKAY.$"

ParcelFernwick_PerrinScene_Text_3:
# 702 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: See you up the road. HALE's\n"
	.string "sending me to the landing too. The\l"
	.string "FOUNDATION's got an outreach grant for\l"
	.string "provisionals, did you know? You should\l"
	.string "apply. It pays.$"

ParcelFernwick_PerrinTalk_Text_0:
# 715 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"
