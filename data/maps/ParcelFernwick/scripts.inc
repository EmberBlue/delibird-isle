ParcelFernwick_MapScripts::
# 11 "data/maps/ParcelFernwick/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFernwick_OnTransition
	.byte 0


ParcelFernwick_OnTransition::
# 18 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_OnTransition_4
ParcelFernwick_OnTransition_3:
# 21 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_SMEARGLE_HIDDEN
ParcelFernwick_OnTransition_1:
	end

ParcelFernwick_OnTransition_2:
# 19 "data/maps/ParcelFernwick/scripts.pory"
	clearflag FLAG_SKALD_SMEARGLE_HIDDEN
	goto ParcelFernwick_OnTransition_1

ParcelFernwick_OnTransition_4:
# 18 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_SMEARGLE_DONE, ParcelFernwick_OnTransition_2
	goto ParcelFernwick_OnTransition_3


ParcelFernwick_Smeargle::
# 27 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 28 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 29 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_1, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_2, MSGBOX_YESNO
# 32 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_Smeargle_2
# 37 "data/maps/ParcelFernwick/scripts.pory"
	givemon SPECIES_SMEARGLE, 45
# 38 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq ParcelFernwick_Smeargle_5
# 43 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 44 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_5, MSGBOX_DEFAULT
# 45 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_6, MSGBOX_DEFAULT
# 46 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 47 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_SMEARGLE_DONE
# 48 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 22
# 49 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Smeargle_2:
# 33 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_3, MSGBOX_DEFAULT
# 34 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Smeargle_5:
# 39 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_4, MSGBOX_DEFAULT
# 40 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ToMistwood::
# 55 "data/maps/ParcelFernwick/scripts.pory"
	warp MAP_PARCEL_MISTWOOD, 14, 1
# 56 "data/maps/ParcelFernwick/scripts.pory"
	waitstate
	end


ParcelFernwick_GateWard::
# 62 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_STATION, ParcelFernwick_GateWard_Text_0, ParcelFernwick_GateWard_Text_1, ParcelFernwick_GateWard_Defeated
# 66 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 67 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 68 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Text_2, MSGBOX_DEFAULT
# 69 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_GateWard_Defeated::
# 74 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_STATION
# 75 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Defeated_Text_0, MSGBOX_DEFAULT
# 76 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Lookout::
# 82 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelFernwick_Lookout_Text_0, ParcelFernwick_Lookout_Text_1
# 85 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Lookout_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Birder::
# 90 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelFernwick_Birder_Text_0, ParcelFernwick_Birder_Text_1
# 93 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Birder_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Ranger::
# 99 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 100 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 101 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Ranger_2
# 104 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Ranger_1:
# 106 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Ranger_2:
# 102 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Ranger_1


ParcelFernwick_OldMan::
# 111 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 112 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 113 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_OldMan_2
# 118 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_2:
# 114 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Woman::
# 124 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 125 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 126 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Woman_2
# 131 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwick_Woman_5
# 134 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_2, MSGBOX_DEFAULT
ParcelFernwick_Woman_4:
# 136 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_2:
# 127 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_0, MSGBOX_DEFAULT
# 128 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_5:
# 132 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwick_Woman_4


ParcelFernwick_Boy::
# 141 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 142 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 143 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Boy_2
# 148 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_2:
# 144 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Girl::
# 154 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 155 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 156 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Girl_2
# 161 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_1, MSGBOX_DEFAULT
# 162 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_2:
# 157 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_0, MSGBOX_DEFAULT
# 158 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Fisher::
# 167 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 168 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 169 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Fisher_2
# 174 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_1, MSGBOX_DEFAULT
# 175 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_2:
# 170 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_0, MSGBOX_DEFAULT
# 171 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Scientist::
# 180 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 181 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 182 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Scientist_2
# 185 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Scientist_1:
# 187 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_2:
# 183 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Scientist_1


ParcelFernwick_Gentleman::
# 192 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 193 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 194 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Gentleman_2
# 199 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_1, MSGBOX_DEFAULT
# 200 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_2:
# 195 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_0, MSGBOX_DEFAULT
# 196 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Clerk::
# 205 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 206 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 207 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Clerk_2
# 212 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_1, MSGBOX_DEFAULT
# 213 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_2:
# 208 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_0, MSGBOX_DEFAULT
# 209 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Mother::
# 218 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 219 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 220 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Mother_2
# 225 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_1, MSGBOX_DEFAULT
# 226 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_2:
# 221 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_0, MSGBOX_DEFAULT
# 222 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ItemSuperPotion::
# 231 "data/maps/ParcelFernwick/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFernwick_HallSign::
# 237 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_HQSign::
# 242 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HQSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_SurveySign::
# 247 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_SurveySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_FisherSign::
# 252 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FisherSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_CitySign::
# 257 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_CitySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_T_Ella::
# 263 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_ELLA, ParcelFernwick_T_Ella_Text_0, ParcelFernwick_T_Ella_Text_1, ParcelFernwick_T_Ella_FirstWin
# 267 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 268 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Ella_3
ParcelFernwick_T_Ella_1:
# 271 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Ella_8
ParcelFernwick_T_Ella_6:
# 274 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Ella_13
ParcelFernwick_T_Ella_11:
# 277 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Ella_18
ParcelFernwick_T_Ella_16:
# 280 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Ella_2:
# 269 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_3:
# 268 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R2
	goto_if 0, ParcelFernwick_T_Ella_2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_7:
# 272 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R3
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_8:
# 271 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R3
	goto_if 0, ParcelFernwick_T_Ella_7
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_12:
# 275 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R4
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_13:
# 274 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R4
	goto_if 0, ParcelFernwick_T_Ella_12
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_17:
# 278 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R5
	goto ParcelFernwick_T_Ella_16

ParcelFernwick_T_Ella_18:
# 277 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R5
	goto_if 0, ParcelFernwick_T_Ella_17
	goto ParcelFernwick_T_Ella_16


ParcelFernwick_T_Ella_FirstWin::
# 284 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
# 285 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R2::
# 289 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 290 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 291 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_0, MSGBOX_YESNO
# 292 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R2_2
# 297 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R2, ParcelFernwick_T_Ella_R2_Text_2
# 298 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_3, MSGBOX_DEFAULT
# 299 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R2_2:
# 293 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 294 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R3::
# 303 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 304 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 305 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_0, MSGBOX_YESNO
# 306 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R3_2
# 311 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R3, ParcelFernwick_T_Ella_R3_Text_1
# 312 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_2, MSGBOX_DEFAULT
# 313 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R3_2:
# 307 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 308 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R4::
# 317 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 318 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 319 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_0, MSGBOX_YESNO
# 320 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R4_2
# 325 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R4, ParcelFernwick_T_Ella_R4_Text_1
# 326 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_2, MSGBOX_DEFAULT
# 327 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R4_2:
# 321 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 322 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R5::
# 331 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 332 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 333 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_0, MSGBOX_YESNO
# 334 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R5_2
# 339 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R5, ParcelFernwick_T_Ella_R5_Text_1
# 340 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_2, MSGBOX_DEFAULT
# 341 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R5_2:
# 335 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 336 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik::
# 345 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_HENRIK, ParcelFernwick_T_Henrik_Text_0, ParcelFernwick_T_Henrik_Text_1, ParcelFernwick_T_Henrik_FirstWin
# 349 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 350 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Henrik_3
ParcelFernwick_T_Henrik_1:
# 353 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Henrik_8
ParcelFernwick_T_Henrik_6:
# 356 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Henrik_13
ParcelFernwick_T_Henrik_11:
# 359 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Henrik_18
ParcelFernwick_T_Henrik_16:
# 362 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Henrik_2:
# 351 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_3:
# 350 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R2
	goto_if 0, ParcelFernwick_T_Henrik_2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_7:
# 354 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R3
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_8:
# 353 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R3
	goto_if 0, ParcelFernwick_T_Henrik_7
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_12:
# 357 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R4
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_13:
# 356 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R4
	goto_if 0, ParcelFernwick_T_Henrik_12
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_17:
# 360 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R5
	goto ParcelFernwick_T_Henrik_16

ParcelFernwick_T_Henrik_18:
# 359 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R5
	goto_if 0, ParcelFernwick_T_Henrik_17
	goto ParcelFernwick_T_Henrik_16


ParcelFernwick_T_Henrik_FirstWin::
# 366 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
# 367 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R2::
# 371 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 372 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 373 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_0, MSGBOX_YESNO
# 374 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R2_2
# 379 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R2, ParcelFernwick_T_Henrik_R2_Text_2
# 380 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_3, MSGBOX_DEFAULT
# 381 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R2_2:
# 375 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 376 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R3::
# 385 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 386 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 387 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_0, MSGBOX_YESNO
# 388 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R3_2
# 393 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R3, ParcelFernwick_T_Henrik_R3_Text_1
# 394 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_2, MSGBOX_DEFAULT
# 395 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R3_2:
# 389 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 390 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R4::
# 399 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 400 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 401 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_0, MSGBOX_YESNO
# 402 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R4_2
# 407 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R4, ParcelFernwick_T_Henrik_R3_Text_1
# 408 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_1, MSGBOX_DEFAULT
# 409 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R4_2:
# 403 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 404 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R5::
# 413 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 414 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 415 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_0, MSGBOX_YESNO
# 416 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R5_2
# 421 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R5, ParcelFernwick_T_Henrik_R2_Text_2
# 422 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_1, MSGBOX_DEFAULT
# 423 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R5_2:
# 417 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 418 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar::
# 427 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_STEINAR, ParcelFernwick_T_Steinar_Text_0, ParcelFernwick_T_Steinar_Text_1, ParcelFernwick_T_Steinar_FirstWin
# 431 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 432 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Steinar_3
ParcelFernwick_T_Steinar_1:
# 435 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Steinar_8
ParcelFernwick_T_Steinar_6:
# 438 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Steinar_13
ParcelFernwick_T_Steinar_11:
# 441 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Steinar_18
ParcelFernwick_T_Steinar_16:
# 444 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Steinar_2:
# 433 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_3:
# 432 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R2
	goto_if 0, ParcelFernwick_T_Steinar_2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_7:
# 436 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R3
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_8:
# 435 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R3
	goto_if 0, ParcelFernwick_T_Steinar_7
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_12:
# 439 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R4
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_13:
# 438 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R4
	goto_if 0, ParcelFernwick_T_Steinar_12
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_17:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R5
	goto ParcelFernwick_T_Steinar_16

ParcelFernwick_T_Steinar_18:
# 441 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R5
	goto_if 0, ParcelFernwick_T_Steinar_17
	goto ParcelFernwick_T_Steinar_16


ParcelFernwick_T_Steinar_FirstWin::
# 448 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
# 449 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R2::
# 453 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 454 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 455 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_0, MSGBOX_YESNO
# 456 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R2_2
# 461 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R2, ParcelFernwick_T_Steinar_R2_Text_2
# 462 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_3, MSGBOX_DEFAULT
# 463 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R2_2:
# 457 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 458 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R3::
# 467 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 468 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 469 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_0, MSGBOX_YESNO
# 470 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R3_2
# 475 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R3, ParcelFernwick_T_Steinar_R3_Text_1
# 476 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_2, MSGBOX_DEFAULT
# 477 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R3_2:
# 471 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 472 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R4::
# 481 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 482 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 483 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_0, MSGBOX_YESNO
# 484 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R4_2
# 489 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R4, ParcelFernwick_T_Steinar_R2_Text_2
# 490 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_1, MSGBOX_DEFAULT
# 491 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R4_2:
# 485 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 486 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R5::
# 495 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 496 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 497 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_0, MSGBOX_YESNO
# 498 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R5_2
# 503 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R5, ParcelFernwick_T_Steinar_R5_Text_1
# 504 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_2, MSGBOX_DEFAULT
# 505 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R5_2:
# 499 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte::
# 509 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_MARTE, ParcelFernwick_T_Marte_Text_0, ParcelFernwick_T_Marte_Text_1, ParcelFernwick_T_Marte_FirstWin
# 513 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 514 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Marte_3
ParcelFernwick_T_Marte_1:
# 517 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Marte_8
ParcelFernwick_T_Marte_6:
# 520 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Marte_13
ParcelFernwick_T_Marte_11:
# 523 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Marte_18
ParcelFernwick_T_Marte_16:
# 526 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Marte_2:
# 515 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_3:
# 514 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R2
	goto_if 0, ParcelFernwick_T_Marte_2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_7:
# 518 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R3
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_8:
# 517 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R3
	goto_if 0, ParcelFernwick_T_Marte_7
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_12:
# 521 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R4
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_13:
# 520 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R4
	goto_if 0, ParcelFernwick_T_Marte_12
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_17:
# 524 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R5
	goto ParcelFernwick_T_Marte_16

ParcelFernwick_T_Marte_18:
# 523 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R5
	goto_if 0, ParcelFernwick_T_Marte_17
	goto ParcelFernwick_T_Marte_16


ParcelFernwick_T_Marte_FirstWin::
# 530 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
# 531 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R2::
# 535 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 536 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 537 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_0, MSGBOX_YESNO
# 538 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R2_2
# 543 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R2, ParcelFernwick_T_Marte_R2_Text_2
# 544 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_3, MSGBOX_DEFAULT
# 545 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R2_2:
# 539 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 540 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R3::
# 549 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 550 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 551 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_0, MSGBOX_YESNO
# 552 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R3_2
# 557 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R3, ParcelFernwick_T_Marte_R2_Text_2
# 558 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_1, MSGBOX_DEFAULT
# 559 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R3_2:
# 553 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 554 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R4::
# 563 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 564 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 565 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_0, MSGBOX_YESNO
# 566 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R4_2
# 571 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R4, ParcelFernwick_T_Marte_R4_Text_1
# 572 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_2, MSGBOX_DEFAULT
# 573 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R4_2:
# 567 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 568 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R5::
# 577 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 578 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 579 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_0, MSGBOX_YESNO
# 580 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R5_2
# 585 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R5, ParcelFernwick_T_Marte_R5_Text_1
# 586 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_2, MSGBOX_DEFAULT
# 587 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R5_2:
# 581 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 582 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon::
# 591 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_LEON, ParcelFernwick_T_Leon_Text_0, ParcelFernwick_T_Leon_Text_1, ParcelFernwick_T_Leon_FirstWin
# 595 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 596 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Leon_3
ParcelFernwick_T_Leon_1:
# 599 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Leon_8
ParcelFernwick_T_Leon_6:
# 602 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Leon_13
ParcelFernwick_T_Leon_11:
# 605 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Leon_18
ParcelFernwick_T_Leon_16:
# 608 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Leon_2:
# 597 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_3:
# 596 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R2
	goto_if 0, ParcelFernwick_T_Leon_2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_7:
# 600 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R3
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_8:
# 599 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R3
	goto_if 0, ParcelFernwick_T_Leon_7
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_12:
# 603 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R4
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_13:
# 602 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R4
	goto_if 0, ParcelFernwick_T_Leon_12
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_17:
# 606 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R5
	goto ParcelFernwick_T_Leon_16

ParcelFernwick_T_Leon_18:
# 605 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R5
	goto_if 0, ParcelFernwick_T_Leon_17
	goto ParcelFernwick_T_Leon_16


ParcelFernwick_T_Leon_FirstWin::
# 612 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
# 613 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R2::
# 617 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 618 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 619 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_0, MSGBOX_YESNO
# 620 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R2_2
# 625 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R2, ParcelFernwick_T_Leon_R2_Text_2
# 626 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_3, MSGBOX_DEFAULT
# 627 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R2_2:
# 621 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 622 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R3::
# 631 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 632 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 633 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_0, MSGBOX_YESNO
# 634 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R3_2
# 639 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R3, ParcelFernwick_T_Leon_R3_Text_1
# 640 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_2, MSGBOX_DEFAULT
# 641 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R3_2:
# 635 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 636 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R4::
# 645 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 646 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 647 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_0, MSGBOX_YESNO
# 648 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R4_2
# 653 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R4, ParcelFernwick_T_Leon_R4_Text_1
# 654 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_2, MSGBOX_DEFAULT
# 655 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R4_2:
# 649 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 650 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R5::
# 659 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 660 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 661 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_0, MSGBOX_YESNO
# 662 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R5_2
# 667 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R5, ParcelFernwick_T_Leon_R2_Text_2
# 668 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_1, MSGBOX_DEFAULT
# 669 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R5_2:
# 663 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 664 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea::
# 673 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_THEA, ParcelFernwick_T_Thea_Text_0, ParcelFernwick_T_Thea_Text_1, ParcelFernwick_T_Thea_FirstWin
# 677 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 678 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Thea_3
ParcelFernwick_T_Thea_1:
# 681 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Thea_8
ParcelFernwick_T_Thea_6:
# 684 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Thea_13
ParcelFernwick_T_Thea_11:
# 687 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Thea_18
ParcelFernwick_T_Thea_16:
# 690 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Thea_2:
# 679 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_3:
# 678 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R2
	goto_if 0, ParcelFernwick_T_Thea_2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_7:
# 682 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R3
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_8:
# 681 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R3
	goto_if 0, ParcelFernwick_T_Thea_7
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_12:
# 685 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R4
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_13:
# 684 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R4
	goto_if 0, ParcelFernwick_T_Thea_12
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_17:
# 688 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R5
	goto ParcelFernwick_T_Thea_16

ParcelFernwick_T_Thea_18:
# 687 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R5
	goto_if 0, ParcelFernwick_T_Thea_17
	goto ParcelFernwick_T_Thea_16


ParcelFernwick_T_Thea_FirstWin::
# 694 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
# 695 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R2::
# 699 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 700 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 701 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_0, MSGBOX_YESNO
# 702 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R2_2
# 707 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R2, ParcelFernwick_T_Thea_R2_Text_2
# 708 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_3, MSGBOX_DEFAULT
# 709 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R2_2:
# 703 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 704 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R3::
# 713 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 714 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 715 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_0, MSGBOX_YESNO
# 716 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R3_2
# 721 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R3, ParcelFernwick_T_Thea_R3_Text_1
# 722 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_2, MSGBOX_DEFAULT
# 723 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R3_2:
# 717 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 718 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R4::
# 727 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 728 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 729 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_0, MSGBOX_YESNO
# 730 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R4_2
# 735 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R4, ParcelFernwick_T_Thea_R3_Text_1
# 736 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_1, MSGBOX_DEFAULT
# 737 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R4_2:
# 731 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 732 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R5::
# 741 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 742 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 743 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_0, MSGBOX_YESNO
# 744 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R5_2
# 749 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R5, ParcelFernwick_T_Thea_R5_Text_1
# 750 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_2, MSGBOX_DEFAULT
# 751 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R5_2:
# 745 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 746 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_PondLook::
# 757 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 758 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR, ParcelFernwick_PondLook_3
ParcelFernwick_PondLook_1:
# 764 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_1, MSGBOX_SIGN
# 765 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_2:
# 759 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_0, MSGBOX_SIGN
# 760 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR_SEEN
# 761 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_3:
# 758 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GRETTIR_SEEN, ParcelFernwick_PondLook_2
	goto ParcelFernwick_PondLook_1


ParcelFernwick_PerrinScene::
# 771 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_2
# 775 "data/maps/ParcelFernwick/scripts.pory"
	lockall
# 776 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 777 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_0, MSGBOX_DEFAULT
# 778 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 779 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinIn
# 780 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 781 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_1, MSGBOX_DEFAULT
# 782 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_Text_2
# 783 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_3, MSGBOX_DEFAULT
# 784 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 785 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinOut
# 786 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 787 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 21
# 788 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_PERRIN_1
# 789 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
# 790 "data/maps/ParcelFernwick/scripts.pory"
	releaseall
	end

ParcelFernwick_PerrinScene_2:
# 772 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelFernwick_PerrinTalk::
# 794 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 795 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 796 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 797 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


# 800 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinIn:
# 800 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
# 800 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
	step_end

# 801 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinOut:
# 801 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
# 801 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
	step_end

ParcelFernwick_PondPage::
# 804 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_PAGE, ParcelFernwick_PondPage_2
# 807 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondPage_Text_0, MSGBOX_SIGN
# 808 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_PAGE_FOUND
	end

ParcelFernwick_PondPage_2:
	end


ParcelFernwick_Smeargle_Text_0:
# 29 "data/maps/ParcelFernwick/scripts.pory"
	.string "A SMEARGLE sits on the bank with its\n"
	.string "tail in the pond. It is not painting the\l"
	.string "water. It is painting the line where the\l"
	.string "water was, a hand higher, in a colour\l"
	.string "that is not in the pond.\p"
	.string "It looks at you. It looks at the\n"
	.string "notebook under your arm. It goes back\l"
	.string "to the line.$"

ParcelFernwick_Smeargle_Text_1:
# 30 "data/maps/ParcelFernwick/scripts.pory"
	.string "You know this stillness. You have been\n"
	.string "waiting most of your life to be allowed\l"
	.string "to stand in it again.\p"
	.string "It finishes the line. It does not look\n"
	.string "up. It leaves the tail in the water,\l"
	.string "waiting, the way they do when they are\l"
	.string "asking.$"

ParcelFernwick_Smeargle_Text_2:
# 31 "data/maps/ParcelFernwick/scripts.pory"
	.string "Let it come?$"

ParcelFernwick_Smeargle_Text_3:
# 33 "data/maps/ParcelFernwick/scripts.pory"
	.string "You leave it the bank and the line. Some\n"
	.string "records are better kept by the one\l"
	.string "making them.\p"
	.string "It will be here. It has decided that\n"
	.string "much.$"

ParcelFernwick_Smeargle_Text_4:
# 39 "data/maps/ParcelFernwick/scripts.pory"
	.string "There is no room for it, in the party or\n"
	.string "the boxes. It seems to know. It goes\l"
	.string "back to the line.\p"
	.string "Make room, and come back.$"

ParcelFernwick_Smeargle_Text_5:
# 44 "data/maps/ParcelFernwick/scripts.pory"
	.string "WREN received SMEARGLE.$"

ParcelFernwick_Smeargle_Text_6:
# 45 "data/maps/ParcelFernwick/scripts.pory"
	.string "It is not Sketch. It does not try to be.\p"
	.string "It paints the first page of the\n"
	.string "notebook you brought from Johto -- the\l"
	.string "one with the marsh plant nobody else\l"
	.string "could name -- then sets its tail down\l"
	.string "beside the page, and waits for the next\l"
	.string "one.$"

ParcelFernwick_GateWard_Text_0:
# 63 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station checkpoint. Nobody goes\n"
	.string "north to the marsh without clearance.\p"
	.string "You want it? Earn it.$"

ParcelFernwick_GateWard_Text_1:
# 64 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Cleared. Logged.$"

ParcelFernwick_GateWard_Text_2:
# 68 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: You're in the log. Keep your card\n"
	.string "on you. The next checkpoint won't take\l"
	.string "my word for it.$"

ParcelFernwick_GateWard_Defeated_Text_0:
# 75 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station clearance: granted. No\n"
	.string "ceremony. That's not what this is.$"

ParcelFernwick_Lookout_Text_0:
# 83 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Nice view from up here. You can\n"
	.string "see the whole marsh.\p"
	.string "You can see who's coming, too.$"

ParcelFernwick_Lookout_Text_1:
# 84 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Tch.$"

ParcelFernwick_Lookout_Text_2:
# 85 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Write your little report. It\n"
	.string "changes nothing out here.$"

ParcelFernwick_Birder_Text_0:
# 91 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Shh! I'm counting nests! ...Okay.\n"
	.string "Fine. One battle.$"

ParcelFernwick_Birder_Text_1:
# 92 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Fewer nests every spring, and now\n"
	.string "fewer wins.$"

ParcelFernwick_Birder_Text_2:
# 93 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Nobody writes the nest counts\n"
	.string "down but me. Somebody should.$"

ParcelFernwick_Ranger_Text_0:
# 102 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: Half the station's been called\n"
	.string "to the hearings as witnesses. The other\l"
	.string "half is covering their shifts.\p"
	.string "HALE's doing both.$"

ParcelFernwick_Ranger_Text_1:
# 104 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: District Station. HALE's inside,\n"
	.string "if you're the one he keeps mentioning.\p"
	.string "He mentions you a lot, for a man who\n"
	.string "doesn't talk.$"

ParcelFernwick_OldMan_Text_0:
# 114 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: A fishing village before the\n"
	.string "station, a fishing village with\l"
	.string "paperwork after, and now a fishing\l"
	.string "village in a hearing transcript. I read\l"
	.string "my own name in it. Page forty. I said\l"
	.string "'the water's low'. I did say that.$"

ParcelFernwick_OldMan_Text_1:
# 118 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This was a fishing village\n"
	.string "before the Corps put the station here.\p"
	.string "Now it's a fishing village with\n"
	.string "paperwork.$"

ParcelFernwick_Woman_Text_0:
# 127 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN smiled. I saw it. Tidewater\n"
	.string "regulation or not, he smiled when they\l"
	.string "read your name on the wireless. Half a\l"
	.string "second. Don't tell him I told you.$"

ParcelFernwick_Woman_Text_1:
# 132 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: You passed TARN's exam? He\n"
	.string "didn't smile, did he. He never smiles. I\l"
	.string "think it's a Tidewater regulation.$"

ParcelFernwick_Woman_Text_2:
# 134 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: The Certification Hall's right\n"
	.string "there. TARN runs the exams.\p"
	.string "He's not as scary as the sign makes him\n"
	.string "look. He's scarier.$"

ParcelFernwick_Boy_Text_0:
# 144 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER! Not a\n"
	.string "MEREHOLT guy. Their boots are still the\l"
	.string "best. But the RANGER's name was on the\l"
	.string "radio.$"

ParcelFernwick_Boy_Text_1:
# 148 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER when I grow\n"
	.string "up! Or a fisherman.\p"
	.string "Or a MEREHOLT guy. They have the best\n"
	.string "boots.$"

ParcelFernwick_Girl_Text_0:
# 157 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond's still ducks. WINGULL.\n"
	.string "But GRETTIR says a POLIWAG came up the\l"
	.string "channel. One. He's watching for it. I'm\l"
	.string "watching GRETTIR.$"

ParcelFernwick_Girl_Text_1:
# 161 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond used to have POLIWAG in\n"
	.string "it! Now it just has ducks.\p"
	.string "Well. WINGULL. Same thing.$"

ParcelFernwick_Fisher_Text_0:
# 170 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Marsh water's still low. Your\n"
	.string "paper didn't raise it. It put a number on\l"
	.string "the discharge upstream, and a man with\l"
	.string "a jar. I'll row where I can and walk where\l"
	.string "I can't. Same as before. Less angry.$"

ParcelFernwick_Fisher_Text_1:
# 174 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: The marsh water's been low\n"
	.string "since spring. You can walk to places you\l"
	.string "used to row to.\p"
	.string "That's not good, whatever the Council\n"
	.string "says.$"

ParcelFernwick_Scientist_Text_0:
# 183 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring and\n"
	.string "nobody cared. Now the lawyers want the\l"
	.string "numbers by Thursday.\p"
	.string "We don't have a Thursday setting.$"

ParcelFernwick_Scientist_Text_1:
# 185 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: We measure. That's all we do.\n"
	.string "Forty years of measuring.\p"
	.string "ILEX is inside. She'll tell you it's\n"
	.string "boring. She's lying.$"

ParcelFernwick_Gentleman_Text_0:
# 195 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It still says so. The hearing\l"
	.string "didn't take the plaques down. I'd have\l"
	.string "liked it to. Then I thought: let them\l"
	.string "stay. They say exactly what they say.$"

ParcelFernwick_Gentleman_Text_1:
# 199 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It says so on the fountain.\p"
	.string "It says so on most things around here,\n"
	.string "if you read the small plates.$"

ParcelFernwick_Clerk_Text_0:
# 208 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "down. Nobody asks what the work is now\l"
	.string "either. The deal's the same. The pay's\l"
	.string "not. Funny how the deal's the bit\l"
	.string "nobody renegotiates.$"

ParcelFernwick_Clerk_Text_1:
# 212 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "up again. Don't ask what the work is.\p"
	.string "Nobody asks. That's the deal.$"

ParcelFernwick_Mother_Text_0:
# 221 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy still wants to be a\n"
	.string "RANGER. I've stopped saying RANGERS\l"
	.string "don't get paid. They don't. But somebody\l"
	.string "read one out at a hearing and the whole\l"
	.string "town went quiet.$"

ParcelFernwick_Mother_Text_1:
# 225 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy wants to be a RANGER. I\n"
	.string "told him RANGERS don't get paid.\p"
	.string "He said that's fine, he'll be a MEREHOLT\n"
	.string "guy on weekends.$"

ParcelFernwick_HallSign_Text_0:
# 237 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "CERTIFICATION HALL\p"
	.string "Forest Certification: practical\n"
	.string "examination.\n"
	.string "Examiner: TARN, Tidewater Division.$"

ParcelFernwick_HQSign_Text_0:
# 242 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "DISTRICT STATION\p"
	.string "Rangers, provisionals and the public:\n"
	.string "front desk.$"

ParcelFernwick_SurveySign_Text_0:
# 247 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE SURVEY\n"
	.string "District office\p"
	.string "Long-baseline monitoring. Soil cores,\n"
	.string "water logs, repeat photography.\p"
	.string "We do not issue press releases.$"

ParcelFernwick_FisherSign_Text_0:
# 252 "data/maps/ParcelFernwick/scripts.pory"
	.string "GRETTIR'S\n"
	.string "Rods. Bait. Marsh advice.\p"
	.string "The advice is free and you won't take\n"
	.string "it.$"

ParcelFernwick_CitySign_Text_0:
# 257 "data/maps/ParcelFernwick/scripts.pory"
	.string "FERNWICK\n"
	.string "District seat, Saltmarsh Coast\p"
	.string "A smaller plate: PROMENADE AND\n"
	.string "FOUNTAIN BY THE MEREHOLT FOUNDATION.$"

ParcelFernwick_T_Ella_Text_0:
# 264 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The park pond's new. Nothing lives\n"
	.string "in it yet. The CORPS says give it a year.\l"
	.string "Battle?$"

ParcelFernwick_T_Ella_Text_1:
# 265 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: A year, they said.$"

ParcelFernwick_T_Ella_Text_2:
# 280 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: TARN failed my brother twice. He's\n"
	.string "at the HALL every day anyway. That's\l"
	.string "FERNWICK.$"

ParcelFernwick_T_Ella_R2_Text_0:
# 291 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Ella_R2_Text_1:
# 293 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Another time, then.$"

ParcelFernwick_T_Ella_R2_Text_2:
# 297 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Still yours.$"

ParcelFernwick_T_Ella_R2_Text_3:
# 298 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Ella_R3_Text_0:
# 305 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Ella_R3_Text_1:
# 311 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Fair.$"

ParcelFernwick_T_Ella_R3_Text_2:
# 312 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Ella_R4_Text_0:
# 319 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFernwick_T_Ella_R4_Text_1:
# 325 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Again, then. Later.$"

ParcelFernwick_T_Ella_R4_Text_2:
# 326 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Ella_R5_Text_0:
# 333 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Ella_R5_Text_1:
# 339 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Noted. Properly, this time.$"

ParcelFernwick_T_Ella_R5_Text_2:
# 340 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Henrik_Text_0:
# 346 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: The district station sends\n"
	.string "provisionals north and gets reports\l"
	.string "back. Never the provisionals. Battle!$"

ParcelFernwick_T_Henrik_Text_1:
# 347 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Some come back, then.$"

ParcelFernwick_T_Henrik_Text_2:
# 362 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: ILEX files everything at the\n"
	.string "survey office. Everything. I asked her\l"
	.string "what for. She said 'later'.$"

ParcelFernwick_T_Henrik_R2_Text_0:
# 373 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Henrik_R2_Text_1:
# 375 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: No hurry. The water keeps.$"

ParcelFernwick_T_Henrik_R2_Text_2:
# 379 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: That's the one I wanted to see.$"

ParcelFernwick_T_Henrik_R2_Text_3:
# 380 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Henrik_R3_Text_0:
# 387 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Henrik_R3_Text_1:
# 393 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Still yours.$"

ParcelFernwick_T_Henrik_R3_Text_2:
# 394 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Henrik_R4_Text_0:
# 401 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFernwick_T_Henrik_R4_Text_1:
# 408 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFernwick_T_Henrik_R5_Text_0:
# 415 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFernwick_T_Henrik_R5_Text_1:
# 422 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFernwick_T_Steinar_Text_0:
# 428 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Down from the marsh road. The\n"
	.string "plaza's the only flat ground in forty\l"
	.string "miles. Battle for it.$"

ParcelFernwick_T_Steinar_Text_1:
# 429 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Share the flat ground, then.$"

ParcelFernwick_T_Steinar_Text_2:
# 444 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: The north checkpoint's\n"
	.string "WARD's. He doesn't bend. The marsh is\l"
	.string "past him and the marsh is worse than he\l"
	.string "is.$"

ParcelFernwick_T_Steinar_R2_Text_0:
# 455 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Steinar_R2_Text_1:
# 457 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Steinar_R2_Text_2:
# 461 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Noted. Properly, this time.$"

ParcelFernwick_T_Steinar_R2_Text_3:
# 462 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Steinar_R3_Text_0:
# 469 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Steinar_R3_Text_1:
# 475 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Fair.$"

ParcelFernwick_T_Steinar_R3_Text_2:
# 476 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Steinar_R4_Text_0:
# 483 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFernwick_T_Steinar_R4_Text_1:
# 490 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Steinar_R5_Text_0:
# 497 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Steinar_R5_Text_1:
# 503 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Again, then. Later.$"

ParcelFernwick_T_Steinar_R5_Text_2:
# 504 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Marte_Text_0:
# 510 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: South square's where the\n"
	.string "MISTWOOD road comes in. Everyone comes\l"
	.string "in tired. Easy battles.$"

ParcelFernwick_T_Marte_Text_1:
# 511 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Not that tired, then.$"

ParcelFernwick_T_Marte_Text_2:
# 526 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: The CENTER's free for\n"
	.string "provisionals. The MART isn't. The CORPS\l"
	.string "pays for healing, not REPELS. Funny\l"
	.string "priorities.$"

ParcelFernwick_T_Marte_R2_Text_0:
# 537 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFernwick_T_Marte_R2_Text_1:
# 539 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Fine. Same spot.$"

ParcelFernwick_T_Marte_R2_Text_2:
# 543 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: …Fair.$"

ParcelFernwick_T_Marte_R2_Text_3:
# 544 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Marte_R3_Text_0:
# 551 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFernwick_T_Marte_R3_Text_1:
# 558 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Marte_R4_Text_0:
# 565 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFernwick_T_Marte_R4_Text_1:
# 571 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Right. That's the whole of it.$"

ParcelFernwick_T_Marte_R4_Text_2:
# 572 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Marte_R5_Text_0:
# 579 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFernwick_T_Marte_R5_Text_1:
# 585 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's the one I wanted to see.$"

ParcelFernwick_T_Marte_R5_Text_2:
# 586 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Leon_Text_0:
# 592 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The square's the only place in\n"
	.string "FERNWICK with grass worth a bug.\l"
	.string "Battle!$"

ParcelFernwick_T_Leon_Text_1:
# 593 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Worth a bug. Not a battle.$"

ParcelFernwick_T_Leon_Text_2:
# 608 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: WURMPLE in the park, none by the\n"
	.string "station. The station's all pavement.\l"
	.string "Pavement's the point, my dad says.$"

ParcelFernwick_T_Leon_R2_Text_0:
# 619 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Leon_R2_Text_1:
# 621 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Leon_R2_Text_2:
# 625 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: …Again, then. Later.$"

ParcelFernwick_T_Leon_R2_Text_3:
# 626 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Leon_R3_Text_0:
# 633 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Leon_R3_Text_1:
# 639 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Right. That's the whole of it.$"

ParcelFernwick_T_Leon_R3_Text_2:
# 640 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFernwick_T_Leon_R4_Text_0:
# 647 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFernwick_T_Leon_R4_Text_1:
# 653 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Noted. Properly, this time.$"

ParcelFernwick_T_Leon_R4_Text_2:
# 654 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Leon_R5_Text_0:
# 661 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Leon_R5_Text_1:
# 668 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Thea_Text_0:
# 674 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Cadet THEA, station duty. HALE\n"
	.string "says spar every provisional who\l"
	.string "crosses the plaza. You crossed it.$"

ParcelFernwick_T_Thea_Text_1:
# 675 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: HALE will want the score.$"

ParcelFernwick_T_Thea_Text_2:
# 690 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Every cadet wants the Reedmere\n"
	.string "posting. The marsh is where things\l"
	.string "happen. Things aren't good, but they\l"
	.string "happen.$"

ParcelFernwick_T_Thea_R2_Text_0:
# 701 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Thea_R2_Text_1:
# 703 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Another time, then.$"

ParcelFernwick_T_Thea_R2_Text_2:
# 707 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Right. That's the whole of it.$"

ParcelFernwick_T_Thea_R2_Text_3:
# 708 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Thea_R3_Text_0:
# 715 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFernwick_T_Thea_R3_Text_1:
# 721 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Still yours.$"

ParcelFernwick_T_Thea_R3_Text_2:
# 722 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Thea_R4_Text_0:
# 729 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFernwick_T_Thea_R4_Text_1:
# 736 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Thea_R5_Text_0:
# 743 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Thea_R5_Text_1:
# 749 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's the one I wanted to see.$"

ParcelFernwick_T_Thea_R5_Text_2:
# 750 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_PondLook_Text_0:
# 759 "data/maps/ParcelFernwick/scripts.pory"
	.string "Still water over bare clay. Nothing.\n"
	.string "Nothing.\p"
	.string "Then a SURSKIT, skating out from the\n"
	.string "reeds the CORPS planted. Just the one.\l"
	.string "It found the pond on its own.$"

ParcelFernwick_PondLook_Text_1:
# 764 "data/maps/ParcelFernwick/scripts.pory"
	.string "The park pond. Still water. A SURSKIT\n"
	.string "skates across it and back.$"

ParcelFernwick_PerrinScene_Text_0:
# 777 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelFernwick_PerrinScene_Text_1:
# 781 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: There you are! WREN, right? I'm\n"
	.string "PERRIN. Same cohort, different\l"
	.string "dispatch. TARN passed me yesterday.\l"
	.string "Yes, PASSED, first go.\p"
	.string "Everyone keeps saying the CORPS\n"
	.string "doesn't do rankings. Let's find out.$"

ParcelFernwick_PerrinScene_Text_2:
# 782 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Huh. Okay. OKAY.$"

ParcelFernwick_PerrinScene_Text_3:
# 783 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: See you up the road. HALE's\n"
	.string "sending me to the landing too. The\l"
	.string "FOUNDATION's got an outreach grant for\l"
	.string "provisionals, did you know? You should\l"
	.string "apply. It pays.$"

ParcelFernwick_PerrinTalk_Text_0:
# 796 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelFernwick_PondPage_Text_0:
# 807 "data/maps/ParcelFernwick/scripts.pory"
	.string "Under the pond's edge, a page gone to\n"
	.string "pulp. One line still legible, in a square\l"
	.string "hand:\p"
	.string "'Marsh page. 28 pairs. The low years\n"
	.string "start here.'$"
