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
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_OldMan_2
# 77 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_1, MSGBOX_DEFAULT
# 78 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_2:
# 73 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_0, MSGBOX_DEFAULT
# 74 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Woman::
# 83 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 84 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 85 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Woman_2
# 90 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwick_Woman_5
# 93 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_2, MSGBOX_DEFAULT
ParcelFernwick_Woman_4:
# 95 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_2:
# 86 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_0, MSGBOX_DEFAULT
# 87 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_5:
# 91 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwick_Woman_4


ParcelFernwick_Boy::
# 100 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 101 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 102 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Boy_2
# 107 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_1, MSGBOX_DEFAULT
# 108 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_2:
# 103 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Girl::
# 113 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 114 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 115 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Girl_2
# 120 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_1, MSGBOX_DEFAULT
# 121 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_2:
# 116 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_0, MSGBOX_DEFAULT
# 117 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Fisher::
# 126 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 127 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 128 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Fisher_2
# 133 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_2:
# 129 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Scientist::
# 139 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 140 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 141 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Scientist_2
# 144 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Scientist_1:
# 146 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_2:
# 142 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Scientist_1


ParcelFernwick_Gentleman::
# 151 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 152 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 153 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Gentleman_2
# 158 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_1, MSGBOX_DEFAULT
# 159 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_2:
# 154 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_0, MSGBOX_DEFAULT
# 155 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Clerk::
# 164 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 165 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 166 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Clerk_2
# 171 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_1, MSGBOX_DEFAULT
# 172 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_2:
# 167 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_0, MSGBOX_DEFAULT
# 168 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Mother::
# 177 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 178 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 179 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Mother_2
# 184 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_1, MSGBOX_DEFAULT
# 185 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_2:
# 180 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_0, MSGBOX_DEFAULT
# 181 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ItemSuperPotion::
# 190 "data/maps/ParcelFernwick/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFernwick_HallSign::
# 196 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_HQSign::
# 201 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HQSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_SurveySign::
# 206 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_SurveySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_FisherSign::
# 211 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FisherSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_CitySign::
# 216 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_CitySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_T_Ella::
# 222 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_ELLA, ParcelFernwick_T_Ella_Text_0, ParcelFernwick_T_Ella_Text_1, ParcelFernwick_T_Ella_FirstWin
# 226 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 227 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Ella_3
ParcelFernwick_T_Ella_1:
# 230 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Ella_8
ParcelFernwick_T_Ella_6:
# 233 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Ella_13
ParcelFernwick_T_Ella_11:
# 236 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Ella_18
ParcelFernwick_T_Ella_16:
# 239 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Ella_2:
# 228 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_3:
# 227 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R2
	goto_if 0, ParcelFernwick_T_Ella_2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_7:
# 231 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R3
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_8:
# 230 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R3
	goto_if 0, ParcelFernwick_T_Ella_7
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_12:
# 234 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R4
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_13:
# 233 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R4
	goto_if 0, ParcelFernwick_T_Ella_12
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_17:
# 237 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R5
	goto ParcelFernwick_T_Ella_16

ParcelFernwick_T_Ella_18:
# 236 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R5
	goto_if 0, ParcelFernwick_T_Ella_17
	goto ParcelFernwick_T_Ella_16


ParcelFernwick_T_Ella_FirstWin::
# 243 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
# 244 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R2::
# 248 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 249 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 250 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_0, MSGBOX_YESNO
# 251 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R2_2
# 256 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R2, ParcelFernwick_T_Ella_R2_Text_2
# 257 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_3, MSGBOX_DEFAULT
# 258 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R2_2:
# 252 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 253 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R3::
# 262 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 263 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 264 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_0, MSGBOX_YESNO
# 265 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R3_2
# 270 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R3, ParcelFernwick_T_Ella_R3_Text_1
# 271 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_2, MSGBOX_DEFAULT
# 272 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R3_2:
# 266 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 267 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R4::
# 276 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 277 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 278 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_0, MSGBOX_YESNO
# 279 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R4_2
# 284 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R4, ParcelFernwick_T_Ella_R4_Text_1
# 285 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_2, MSGBOX_DEFAULT
# 286 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R4_2:
# 280 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R5::
# 290 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 291 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 292 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_0, MSGBOX_YESNO
# 293 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R5_2
# 298 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R5, ParcelFernwick_T_Ella_R5_Text_1
# 299 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_2, MSGBOX_DEFAULT
# 300 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R5_2:
# 294 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 295 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik::
# 304 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_HENRIK, ParcelFernwick_T_Henrik_Text_0, ParcelFernwick_T_Henrik_Text_1, ParcelFernwick_T_Henrik_FirstWin
# 308 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 309 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Henrik_3
ParcelFernwick_T_Henrik_1:
# 312 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Henrik_8
ParcelFernwick_T_Henrik_6:
# 315 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Henrik_13
ParcelFernwick_T_Henrik_11:
# 318 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Henrik_18
ParcelFernwick_T_Henrik_16:
# 321 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Henrik_2:
# 310 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_3:
# 309 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R2
	goto_if 0, ParcelFernwick_T_Henrik_2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_7:
# 313 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R3
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_8:
# 312 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R3
	goto_if 0, ParcelFernwick_T_Henrik_7
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_12:
# 316 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R4
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_13:
# 315 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R4
	goto_if 0, ParcelFernwick_T_Henrik_12
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_17:
# 319 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R5
	goto ParcelFernwick_T_Henrik_16

ParcelFernwick_T_Henrik_18:
# 318 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R5
	goto_if 0, ParcelFernwick_T_Henrik_17
	goto ParcelFernwick_T_Henrik_16


ParcelFernwick_T_Henrik_FirstWin::
# 325 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
# 326 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R2::
# 330 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 331 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 332 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_0, MSGBOX_YESNO
# 333 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R2_2
# 338 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R2, ParcelFernwick_T_Henrik_R2_Text_2
# 339 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_3, MSGBOX_DEFAULT
# 340 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R2_2:
# 334 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 335 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R3::
# 344 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 345 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 346 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_0, MSGBOX_YESNO
# 347 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R3_2
# 352 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R3, ParcelFernwick_T_Henrik_R3_Text_1
# 353 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_2, MSGBOX_DEFAULT
# 354 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R3_2:
# 348 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 349 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R4::
# 358 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 359 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 360 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_0, MSGBOX_YESNO
# 361 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R4_2
# 366 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R4, ParcelFernwick_T_Henrik_R3_Text_1
# 367 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R4_2:
# 362 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 363 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R5::
# 372 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 373 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 374 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_0, MSGBOX_YESNO
# 375 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R5_2
# 380 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R5, ParcelFernwick_T_Henrik_R2_Text_2
# 381 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R5_2:
# 376 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar::
# 386 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_STEINAR, ParcelFernwick_T_Steinar_Text_0, ParcelFernwick_T_Steinar_Text_1, ParcelFernwick_T_Steinar_FirstWin
# 390 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 391 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Steinar_3
ParcelFernwick_T_Steinar_1:
# 394 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Steinar_8
ParcelFernwick_T_Steinar_6:
# 397 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Steinar_13
ParcelFernwick_T_Steinar_11:
# 400 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Steinar_18
ParcelFernwick_T_Steinar_16:
# 403 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Steinar_2:
# 392 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_3:
# 391 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R2
	goto_if 0, ParcelFernwick_T_Steinar_2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_7:
# 395 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R3
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_8:
# 394 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R3
	goto_if 0, ParcelFernwick_T_Steinar_7
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_12:
# 398 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R4
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_13:
# 397 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R4
	goto_if 0, ParcelFernwick_T_Steinar_12
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_17:
# 401 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R5
	goto ParcelFernwick_T_Steinar_16

ParcelFernwick_T_Steinar_18:
# 400 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R5
	goto_if 0, ParcelFernwick_T_Steinar_17
	goto ParcelFernwick_T_Steinar_16


ParcelFernwick_T_Steinar_FirstWin::
# 407 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
# 408 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R2::
# 412 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 413 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 414 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_0, MSGBOX_YESNO
# 415 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R2_2
# 420 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R2, ParcelFernwick_T_Steinar_R2_Text_2
# 421 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_3, MSGBOX_DEFAULT
# 422 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R2_2:
# 416 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 417 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R3::
# 426 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 427 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 428 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_0, MSGBOX_YESNO
# 429 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R3_2
# 434 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R3, ParcelFernwick_T_Steinar_R3_Text_1
# 435 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_2, MSGBOX_DEFAULT
# 436 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R3_2:
# 430 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 431 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R4::
# 440 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 441 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 442 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_0, MSGBOX_YESNO
# 443 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R4_2
# 448 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R4, ParcelFernwick_T_Steinar_R2_Text_2
# 449 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_1, MSGBOX_DEFAULT
# 450 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R4_2:
# 444 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 445 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R5::
# 454 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 455 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 456 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_0, MSGBOX_YESNO
# 457 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R5_2
# 462 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R5, ParcelFernwick_T_Steinar_R5_Text_1
# 463 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_2, MSGBOX_DEFAULT
# 464 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R5_2:
# 458 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 459 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte::
# 468 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_MARTE, ParcelFernwick_T_Marte_Text_0, ParcelFernwick_T_Marte_Text_1, ParcelFernwick_T_Marte_FirstWin
# 472 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 473 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Marte_3
ParcelFernwick_T_Marte_1:
# 476 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Marte_8
ParcelFernwick_T_Marte_6:
# 479 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Marte_13
ParcelFernwick_T_Marte_11:
# 482 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Marte_18
ParcelFernwick_T_Marte_16:
# 485 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Marte_2:
# 474 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_3:
# 473 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R2
	goto_if 0, ParcelFernwick_T_Marte_2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_7:
# 477 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R3
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_8:
# 476 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R3
	goto_if 0, ParcelFernwick_T_Marte_7
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_12:
# 480 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R4
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_13:
# 479 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R4
	goto_if 0, ParcelFernwick_T_Marte_12
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_17:
# 483 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R5
	goto ParcelFernwick_T_Marte_16

ParcelFernwick_T_Marte_18:
# 482 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R5
	goto_if 0, ParcelFernwick_T_Marte_17
	goto ParcelFernwick_T_Marte_16


ParcelFernwick_T_Marte_FirstWin::
# 489 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
# 490 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R2::
# 494 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 495 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 496 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_0, MSGBOX_YESNO
# 497 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R2_2
# 502 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R2, ParcelFernwick_T_Marte_R2_Text_2
# 503 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_3, MSGBOX_DEFAULT
# 504 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R2_2:
# 498 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 499 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R3::
# 508 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 509 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 510 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_0, MSGBOX_YESNO
# 511 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R3_2
# 516 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R3, ParcelFernwick_T_Marte_R2_Text_2
# 517 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_1, MSGBOX_DEFAULT
# 518 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R3_2:
# 512 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 513 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R4::
# 522 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 523 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 524 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_0, MSGBOX_YESNO
# 525 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R4_2
# 530 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R4, ParcelFernwick_T_Marte_R4_Text_1
# 531 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_2, MSGBOX_DEFAULT
# 532 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R4_2:
# 526 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 527 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R5::
# 536 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 537 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 538 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_0, MSGBOX_YESNO
# 539 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R5_2
# 544 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R5, ParcelFernwick_T_Marte_R5_Text_1
# 545 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_2, MSGBOX_DEFAULT
# 546 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R5_2:
# 540 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 541 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon::
# 550 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_LEON, ParcelFernwick_T_Leon_Text_0, ParcelFernwick_T_Leon_Text_1, ParcelFernwick_T_Leon_FirstWin
# 554 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 555 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Leon_3
ParcelFernwick_T_Leon_1:
# 558 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Leon_8
ParcelFernwick_T_Leon_6:
# 561 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Leon_13
ParcelFernwick_T_Leon_11:
# 564 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Leon_18
ParcelFernwick_T_Leon_16:
# 567 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Leon_2:
# 556 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_3:
# 555 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R2
	goto_if 0, ParcelFernwick_T_Leon_2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_7:
# 559 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R3
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_8:
# 558 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R3
	goto_if 0, ParcelFernwick_T_Leon_7
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_12:
# 562 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R4
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_13:
# 561 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R4
	goto_if 0, ParcelFernwick_T_Leon_12
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_17:
# 565 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R5
	goto ParcelFernwick_T_Leon_16

ParcelFernwick_T_Leon_18:
# 564 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R5
	goto_if 0, ParcelFernwick_T_Leon_17
	goto ParcelFernwick_T_Leon_16


ParcelFernwick_T_Leon_FirstWin::
# 571 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
# 572 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R2::
# 576 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 577 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 578 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_0, MSGBOX_YESNO
# 579 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R2_2
# 584 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R2, ParcelFernwick_T_Leon_R2_Text_2
# 585 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_3, MSGBOX_DEFAULT
# 586 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R2_2:
# 580 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 581 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R3::
# 590 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 591 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 592 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_0, MSGBOX_YESNO
# 593 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R3_2
# 598 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R3, ParcelFernwick_T_Leon_R3_Text_1
# 599 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_2, MSGBOX_DEFAULT
# 600 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R3_2:
# 594 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 595 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R4::
# 604 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 605 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 606 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_0, MSGBOX_YESNO
# 607 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R4_2
# 612 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R4, ParcelFernwick_T_Leon_R4_Text_1
# 613 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_2, MSGBOX_DEFAULT
# 614 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R4_2:
# 608 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 609 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R5::
# 618 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 619 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 620 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_0, MSGBOX_YESNO
# 621 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R5_2
# 626 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R5, ParcelFernwick_T_Leon_R2_Text_2
# 627 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R5_2:
# 622 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 623 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea::
# 632 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_THEA, ParcelFernwick_T_Thea_Text_0, ParcelFernwick_T_Thea_Text_1, ParcelFernwick_T_Thea_FirstWin
# 636 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 637 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Thea_3
ParcelFernwick_T_Thea_1:
# 640 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Thea_8
ParcelFernwick_T_Thea_6:
# 643 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Thea_13
ParcelFernwick_T_Thea_11:
# 646 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Thea_18
ParcelFernwick_T_Thea_16:
# 649 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Thea_2:
# 638 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_3:
# 637 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R2
	goto_if 0, ParcelFernwick_T_Thea_2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_7:
# 641 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R3
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_8:
# 640 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R3
	goto_if 0, ParcelFernwick_T_Thea_7
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_12:
# 644 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R4
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_13:
# 643 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R4
	goto_if 0, ParcelFernwick_T_Thea_12
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_17:
# 647 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R5
	goto ParcelFernwick_T_Thea_16

ParcelFernwick_T_Thea_18:
# 646 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R5
	goto_if 0, ParcelFernwick_T_Thea_17
	goto ParcelFernwick_T_Thea_16


ParcelFernwick_T_Thea_FirstWin::
# 653 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
# 654 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R2::
# 658 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 659 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 660 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_0, MSGBOX_YESNO
# 661 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R2_2
# 666 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R2, ParcelFernwick_T_Thea_R2_Text_2
# 667 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_3, MSGBOX_DEFAULT
# 668 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R2_2:
# 662 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 663 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R3::
# 672 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 673 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 674 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_0, MSGBOX_YESNO
# 675 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R3_2
# 680 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R3, ParcelFernwick_T_Thea_R3_Text_1
# 681 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_2, MSGBOX_DEFAULT
# 682 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R3_2:
# 676 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 677 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R4::
# 686 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 687 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 688 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_0, MSGBOX_YESNO
# 689 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R4_2
# 694 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R4, ParcelFernwick_T_Thea_R3_Text_1
# 695 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_1, MSGBOX_DEFAULT
# 696 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R4_2:
# 690 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 691 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R5::
# 700 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 701 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 702 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_0, MSGBOX_YESNO
# 703 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R5_2
# 708 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R5, ParcelFernwick_T_Thea_R5_Text_1
# 709 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_2, MSGBOX_DEFAULT
# 710 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R5_2:
# 704 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 705 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_PondLook::
# 716 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 717 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR, ParcelFernwick_PondLook_3
ParcelFernwick_PondLook_1:
# 723 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_1, MSGBOX_SIGN
# 724 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_2:
# 718 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_0, MSGBOX_SIGN
# 719 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR_SEEN
# 720 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_3:
# 717 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GRETTIR_SEEN, ParcelFernwick_PondLook_2
	goto ParcelFernwick_PondLook_1


ParcelFernwick_PerrinScene::
# 730 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_2
# 734 "data/maps/ParcelFernwick/scripts.pory"
	lockall
# 735 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 736 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_0, MSGBOX_DEFAULT
# 737 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 738 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinIn
# 739 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 740 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_1, MSGBOX_DEFAULT
# 741 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_Text_2
# 742 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_3, MSGBOX_DEFAULT
# 743 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 744 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinOut
# 745 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 746 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 21
# 747 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_PERRIN_1
# 748 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
# 749 "data/maps/ParcelFernwick/scripts.pory"
	releaseall
	end

ParcelFernwick_PerrinScene_2:
# 731 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelFernwick_PerrinTalk::
# 753 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 754 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 755 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 756 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


# 759 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinIn:
# 759 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
# 759 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
	step_end

# 760 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinOut:
# 760 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
# 760 "data/maps/ParcelFernwick/scripts.pory"
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
# 73 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: A fishing village before the\n"
	.string "station, a fishing village with\l"
	.string "paperwork after, and now a fishing\l"
	.string "village in a hearing transcript. I read\l"
	.string "my own name in it. Page forty. I said\l"
	.string "'the water's low'. I did say that.$"

ParcelFernwick_OldMan_Text_1:
# 77 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This was a fishing village\n"
	.string "before the Corps put the station here.\p"
	.string "Now it's a fishing village with\n"
	.string "paperwork.$"

ParcelFernwick_Woman_Text_0:
# 86 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN smiled. I saw it. Tidewater\n"
	.string "regulation or not, he smiled when they\l"
	.string "read your name on the wireless. Half a\l"
	.string "second. Don't tell him I told you.$"

ParcelFernwick_Woman_Text_1:
# 91 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: You passed TARN's exam? He\n"
	.string "didn't smile, did he. He never smiles. I\l"
	.string "think it's a Tidewater regulation.$"

ParcelFernwick_Woman_Text_2:
# 93 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: The Certification Hall's right\n"
	.string "there. TARN runs the exams.\p"
	.string "He's not as scary as the sign makes him\n"
	.string "look. He's scarier.$"

ParcelFernwick_Boy_Text_0:
# 103 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER! Not a\n"
	.string "MEREHOLT guy. Their boots are still the\l"
	.string "best. But the RANGER's name was on the\l"
	.string "radio.$"

ParcelFernwick_Boy_Text_1:
# 107 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER when I grow\n"
	.string "up! Or a fisherman.\p"
	.string "Or a MEREHOLT guy. They have the best\n"
	.string "boots.$"

ParcelFernwick_Girl_Text_0:
# 116 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond's still ducks. WINGULL.\n"
	.string "But GRETTIR says a POLIWAG came up the\l"
	.string "channel. One. He's watching for it. I'm\l"
	.string "watching GRETTIR.$"

ParcelFernwick_Girl_Text_1:
# 120 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond used to have POLIWAG in\n"
	.string "it! Now it just has ducks.\p"
	.string "Well. WINGULL. Same thing.$"

ParcelFernwick_Fisher_Text_0:
# 129 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Marsh water's still low. Your\n"
	.string "paper didn't raise it. It put a number on\l"
	.string "the discharge upstream, and a man with\l"
	.string "a jar. I'll row where I can and walk where\l"
	.string "I can't. Same as before. Less angry.$"

ParcelFernwick_Fisher_Text_1:
# 133 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: The marsh water's been low\n"
	.string "since spring. You can walk to places you\l"
	.string "used to row to.\p"
	.string "That's not good, whatever the Council\n"
	.string "says.$"

ParcelFernwick_Scientist_Text_0:
# 142 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring and\n"
	.string "nobody cared. Now the lawyers want the\l"
	.string "numbers by Thursday.\p"
	.string "We don't have a Thursday setting.$"

ParcelFernwick_Scientist_Text_1:
# 144 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: We measure. That's all we do.\n"
	.string "Forty years of measuring.\p"
	.string "ILEX is inside. She'll tell you it's\n"
	.string "boring. She's lying.$"

ParcelFernwick_Gentleman_Text_0:
# 154 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It still says so. The hearing\l"
	.string "didn't take the plaques down. I'd have\l"
	.string "liked it to. Then I thought: let them\l"
	.string "stay. They say exactly what they say.$"

ParcelFernwick_Gentleman_Text_1:
# 158 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It says so on the fountain.\p"
	.string "It says so on most things around here,\n"
	.string "if you read the small plates.$"

ParcelFernwick_Clerk_Text_0:
# 167 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "down. Nobody asks what the work is now\l"
	.string "either. The deal's the same. The pay's\l"
	.string "not. Funny how the deal's the bit\l"
	.string "nobody renegotiates.$"

ParcelFernwick_Clerk_Text_1:
# 171 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "up again. Don't ask what the work is.\p"
	.string "Nobody asks. That's the deal.$"

ParcelFernwick_Mother_Text_0:
# 180 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy still wants to be a\n"
	.string "RANGER. I've stopped saying RANGERS\l"
	.string "don't get paid. They don't. But somebody\l"
	.string "read one out at a hearing and the whole\l"
	.string "town went quiet.$"

ParcelFernwick_Mother_Text_1:
# 184 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy wants to be a RANGER. I\n"
	.string "told him RANGERS don't get paid.\p"
	.string "He said that's fine, he'll be a MEREHOLT\n"
	.string "guy on weekends.$"

ParcelFernwick_HallSign_Text_0:
# 196 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "CERTIFICATION HALL\p"
	.string "Forest Certification: practical\n"
	.string "examination.\n"
	.string "Examiner: TARN, Tidewater Division.$"

ParcelFernwick_HQSign_Text_0:
# 201 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "DISTRICT STATION\p"
	.string "Rangers, provisionals and the public:\n"
	.string "front desk.$"

ParcelFernwick_SurveySign_Text_0:
# 206 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE SURVEY\n"
	.string "District office\p"
	.string "Long-baseline monitoring. Soil cores,\n"
	.string "water logs, repeat photography.\p"
	.string "We do not issue press releases.$"

ParcelFernwick_FisherSign_Text_0:
# 211 "data/maps/ParcelFernwick/scripts.pory"
	.string "GRETTIR'S\n"
	.string "Rods. Bait. Marsh advice.\p"
	.string "The advice is free and you won't take\n"
	.string "it.$"

ParcelFernwick_CitySign_Text_0:
# 216 "data/maps/ParcelFernwick/scripts.pory"
	.string "FERNWICK\n"
	.string "District seat, Saltmarsh Coast\p"
	.string "A smaller plate: PROMENADE AND\n"
	.string "FOUNTAIN BY THE MEREHOLT FOUNDATION.$"

ParcelFernwick_T_Ella_Text_0:
# 223 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The park pond's new. Nothing lives\n"
	.string "in it yet. The CORPS says give it a year.\l"
	.string "Battle?$"

ParcelFernwick_T_Ella_Text_1:
# 224 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: A year, they said.$"

ParcelFernwick_T_Ella_Text_2:
# 239 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: TARN failed my brother twice. He's\n"
	.string "at the HALL every day anyway. That's\l"
	.string "FERNWICK.$"

ParcelFernwick_T_Ella_R2_Text_0:
# 250 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Ella_R2_Text_1:
# 252 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Another time, then.$"

ParcelFernwick_T_Ella_R2_Text_2:
# 256 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Still yours.$"

ParcelFernwick_T_Ella_R2_Text_3:
# 257 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Ella_R3_Text_0:
# 264 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Ella_R3_Text_1:
# 270 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Fair.$"

ParcelFernwick_T_Ella_R3_Text_2:
# 271 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Ella_R4_Text_0:
# 278 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFernwick_T_Ella_R4_Text_1:
# 284 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Again, then. Later.$"

ParcelFernwick_T_Ella_R4_Text_2:
# 285 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Ella_R5_Text_0:
# 292 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Ella_R5_Text_1:
# 298 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Noted. Properly, this time.$"

ParcelFernwick_T_Ella_R5_Text_2:
# 299 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Henrik_Text_0:
# 305 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: The district station sends\n"
	.string "provisionals north and gets reports\l"
	.string "back. Never the provisionals. Battle!$"

ParcelFernwick_T_Henrik_Text_1:
# 306 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Some come back, then.$"

ParcelFernwick_T_Henrik_Text_2:
# 321 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: ILEX files everything at the\n"
	.string "survey office. Everything. I asked her\l"
	.string "what for. She said 'later'.$"

ParcelFernwick_T_Henrik_R2_Text_0:
# 332 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Henrik_R2_Text_1:
# 334 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: No hurry. The water keeps.$"

ParcelFernwick_T_Henrik_R2_Text_2:
# 338 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: That's the one I wanted to see.$"

ParcelFernwick_T_Henrik_R2_Text_3:
# 339 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Henrik_R3_Text_0:
# 346 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Henrik_R3_Text_1:
# 352 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Still yours.$"

ParcelFernwick_T_Henrik_R3_Text_2:
# 353 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Henrik_R4_Text_0:
# 360 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFernwick_T_Henrik_R4_Text_1:
# 367 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFernwick_T_Henrik_R5_Text_0:
# 374 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFernwick_T_Henrik_R5_Text_1:
# 381 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFernwick_T_Steinar_Text_0:
# 387 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Down from the marsh road. The\n"
	.string "plaza's the only flat ground in forty\l"
	.string "miles. Battle for it.$"

ParcelFernwick_T_Steinar_Text_1:
# 388 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Share the flat ground, then.$"

ParcelFernwick_T_Steinar_Text_2:
# 403 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: The north checkpoint's\n"
	.string "WARD's. He doesn't bend. The marsh is\l"
	.string "past him and the marsh is worse than he\l"
	.string "is.$"

ParcelFernwick_T_Steinar_R2_Text_0:
# 414 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Steinar_R2_Text_1:
# 416 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Steinar_R2_Text_2:
# 420 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Noted. Properly, this time.$"

ParcelFernwick_T_Steinar_R2_Text_3:
# 421 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Steinar_R3_Text_0:
# 428 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Steinar_R3_Text_1:
# 434 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Fair.$"

ParcelFernwick_T_Steinar_R3_Text_2:
# 435 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Steinar_R4_Text_0:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFernwick_T_Steinar_R4_Text_1:
# 449 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Steinar_R5_Text_0:
# 456 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Steinar_R5_Text_1:
# 462 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Again, then. Later.$"

ParcelFernwick_T_Steinar_R5_Text_2:
# 463 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Marte_Text_0:
# 469 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: South square's where the\n"
	.string "MISTWOOD road comes in. Everyone comes\l"
	.string "in tired. Easy battles.$"

ParcelFernwick_T_Marte_Text_1:
# 470 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Not that tired, then.$"

ParcelFernwick_T_Marte_Text_2:
# 485 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: The CENTER's free for\n"
	.string "provisionals. The MART isn't. The CORPS\l"
	.string "pays for healing, not REPELS. Funny\l"
	.string "priorities.$"

ParcelFernwick_T_Marte_R2_Text_0:
# 496 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFernwick_T_Marte_R2_Text_1:
# 498 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Fine. Same spot.$"

ParcelFernwick_T_Marte_R2_Text_2:
# 502 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: …Fair.$"

ParcelFernwick_T_Marte_R2_Text_3:
# 503 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Marte_R3_Text_0:
# 510 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFernwick_T_Marte_R3_Text_1:
# 517 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Marte_R4_Text_0:
# 524 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFernwick_T_Marte_R4_Text_1:
# 530 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Right. That's the whole of it.$"

ParcelFernwick_T_Marte_R4_Text_2:
# 531 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Marte_R5_Text_0:
# 538 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFernwick_T_Marte_R5_Text_1:
# 544 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's the one I wanted to see.$"

ParcelFernwick_T_Marte_R5_Text_2:
# 545 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Leon_Text_0:
# 551 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The square's the only place in\n"
	.string "FERNWICK with grass worth a bug.\l"
	.string "Battle!$"

ParcelFernwick_T_Leon_Text_1:
# 552 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Worth a bug. Not a battle.$"

ParcelFernwick_T_Leon_Text_2:
# 567 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: WURMPLE in the park, none by the\n"
	.string "station. The station's all pavement.\l"
	.string "Pavement's the point, my dad says.$"

ParcelFernwick_T_Leon_R2_Text_0:
# 578 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Leon_R2_Text_1:
# 580 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Leon_R2_Text_2:
# 584 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: …Again, then. Later.$"

ParcelFernwick_T_Leon_R2_Text_3:
# 585 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Leon_R3_Text_0:
# 592 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Leon_R3_Text_1:
# 598 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Right. That's the whole of it.$"

ParcelFernwick_T_Leon_R3_Text_2:
# 599 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFernwick_T_Leon_R4_Text_0:
# 606 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFernwick_T_Leon_R4_Text_1:
# 612 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Noted. Properly, this time.$"

ParcelFernwick_T_Leon_R4_Text_2:
# 613 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Leon_R5_Text_0:
# 620 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Leon_R5_Text_1:
# 627 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Thea_Text_0:
# 633 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Cadet THEA, station duty. HALE\n"
	.string "says spar every provisional who\l"
	.string "crosses the plaza. You crossed it.$"

ParcelFernwick_T_Thea_Text_1:
# 634 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: HALE will want the score.$"

ParcelFernwick_T_Thea_Text_2:
# 649 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Every cadet wants the Reedmere\n"
	.string "posting. The marsh is where things\l"
	.string "happen. Things aren't good, but they\l"
	.string "happen.$"

ParcelFernwick_T_Thea_R2_Text_0:
# 660 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Thea_R2_Text_1:
# 662 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Another time, then.$"

ParcelFernwick_T_Thea_R2_Text_2:
# 666 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Right. That's the whole of it.$"

ParcelFernwick_T_Thea_R2_Text_3:
# 667 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Thea_R3_Text_0:
# 674 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFernwick_T_Thea_R3_Text_1:
# 680 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Still yours.$"

ParcelFernwick_T_Thea_R3_Text_2:
# 681 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Thea_R4_Text_0:
# 688 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFernwick_T_Thea_R4_Text_1:
# 695 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Thea_R5_Text_0:
# 702 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Thea_R5_Text_1:
# 708 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's the one I wanted to see.$"

ParcelFernwick_T_Thea_R5_Text_2:
# 709 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_PondLook_Text_0:
# 718 "data/maps/ParcelFernwick/scripts.pory"
	.string "Still water over bare clay. Nothing.\n"
	.string "Nothing.\p"
	.string "Then a SURSKIT, skating out from the\n"
	.string "reeds the CORPS planted. Just the one.\l"
	.string "It found the pond on its own.$"

ParcelFernwick_PondLook_Text_1:
# 723 "data/maps/ParcelFernwick/scripts.pory"
	.string "The park pond. Still water. A SURSKIT\n"
	.string "skates across it and back.$"

ParcelFernwick_PerrinScene_Text_0:
# 736 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelFernwick_PerrinScene_Text_1:
# 740 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: There you are! WREN, right? I'm\n"
	.string "PERRIN. Same cohort, different\l"
	.string "dispatch. TARN passed me yesterday.\l"
	.string "Yes, PASSED, first go.\p"
	.string "Everyone keeps saying the CORPS\n"
	.string "doesn't do rankings. Let's find out.$"

ParcelFernwick_PerrinScene_Text_2:
# 741 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Huh. Okay. OKAY.$"

ParcelFernwick_PerrinScene_Text_3:
# 742 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: See you up the road. HALE's\n"
	.string "sending me to the landing too. The\l"
	.string "FOUNDATION's got an outreach grant for\l"
	.string "provisionals, did you know? You should\l"
	.string "apply. It pays.$"

ParcelFernwick_PerrinTalk_Text_0:
# 755 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"
