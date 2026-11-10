ParcelFernwick_MapScripts::
# 11 "data/maps/ParcelFernwick/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFernwick_OnTransition
	.byte 0


ParcelFernwick_OnTransition::
# 18 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_VISITED_PARCEL_FERNWICK
# 19 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_OnTransition_4
ParcelFernwick_OnTransition_3:
# 22 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_SMEARGLE_HIDDEN
ParcelFernwick_OnTransition_1:
	end

ParcelFernwick_OnTransition_2:
# 20 "data/maps/ParcelFernwick/scripts.pory"
	clearflag FLAG_SKALD_SMEARGLE_HIDDEN
	goto ParcelFernwick_OnTransition_1

ParcelFernwick_OnTransition_4:
# 19 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_SMEARGLE_DONE, ParcelFernwick_OnTransition_2
	goto ParcelFernwick_OnTransition_3


ParcelFernwick_Smeargle::
# 28 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 29 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 30 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_2, MSGBOX_YESNO
# 33 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_Smeargle_2
# 38 "data/maps/ParcelFernwick/scripts.pory"
	givemon SPECIES_SMEARGLE, 45
# 39 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq ParcelFernwick_Smeargle_5
# 44 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 45 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_5, MSGBOX_DEFAULT
# 46 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_6, MSGBOX_DEFAULT
# 47 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 48 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_SMEARGLE_DONE
# 49 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 22
# 50 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Smeargle_2:
# 34 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_3, MSGBOX_DEFAULT
# 35 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Smeargle_5:
# 40 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Smeargle_Text_4, MSGBOX_DEFAULT
# 41 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ToMistwood::
# 56 "data/maps/ParcelFernwick/scripts.pory"
	warp MAP_PARCEL_MISTWOOD, 14, 1
# 57 "data/maps/ParcelFernwick/scripts.pory"
	waitstate
	end


ParcelFernwick_GateWard::
# 63 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_STATION, ParcelFernwick_GateWard_Text_0, ParcelFernwick_GateWard_Text_1, ParcelFernwick_GateWard_Defeated
# 67 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 68 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 69 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Text_2, MSGBOX_DEFAULT
# 70 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_GateWard_Defeated::
# 75 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_STATION
# 76 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_GateWard_Defeated_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Lookout::
# 83 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_LOOKOUT, ParcelFernwick_Lookout_Text_0, ParcelFernwick_Lookout_Text_1
# 86 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Lookout_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Birder::
# 91 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BIRDER, ParcelFernwick_Birder_Text_0, ParcelFernwick_Birder_Text_1
# 94 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Birder_Text_2, MSGBOX_AUTOCLOSE
	end


ParcelFernwick_Ranger::
# 100 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 101 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 102 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Ranger_2
ParcelFernwick_Ranger_1:
# 105 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Ranger_5
# 110 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Ranger_2:
# 103 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Ranger_1

ParcelFernwick_Ranger_5:
# 106 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_1, MSGBOX_DEFAULT
# 107 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_OldMan::
# 117 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 118 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 119 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_OldMan_2
# 124 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_OldMan_5
# 129 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_2, MSGBOX_DEFAULT
# 130 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_2:
# 120 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_0, MSGBOX_DEFAULT
# 121 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_5:
# 125 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_1, MSGBOX_DEFAULT
# 126 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Woman::
# 135 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 136 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 137 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Woman_2
# 142 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Woman_5
# 147 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwick_Woman_8
# 150 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_3, MSGBOX_DEFAULT
ParcelFernwick_Woman_7:
# 152 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_2:
# 138 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_5:
# 143 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_1, MSGBOX_DEFAULT
# 144 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_8:
# 148 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_2, MSGBOX_DEFAULT
	goto ParcelFernwick_Woman_7


ParcelFernwick_Boy::
# 157 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 158 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 159 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Boy_2
# 164 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Boy_5
# 169 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_2, MSGBOX_DEFAULT
# 170 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_2:
# 160 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_0, MSGBOX_DEFAULT
# 161 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_5:
# 165 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_1, MSGBOX_DEFAULT
# 166 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Girl::
# 175 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 176 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 177 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Girl_2
# 182 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Girl_5
# 187 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_2, MSGBOX_DEFAULT
# 188 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_2:
# 178 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_0, MSGBOX_DEFAULT
# 179 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_5:
# 183 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_1, MSGBOX_DEFAULT
# 184 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Fisher::
# 193 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 194 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 195 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Fisher_2
# 200 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Fisher_5
# 205 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_2, MSGBOX_DEFAULT
# 206 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_2:
# 196 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_0, MSGBOX_DEFAULT
# 197 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_5:
# 201 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_1, MSGBOX_DEFAULT
# 202 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Scientist::
# 211 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 212 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 213 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR, ParcelFernwick_Scientist_5
ParcelFernwick_Scientist_4:
# 223 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_JAR_DONE, ParcelFernwick_Scientist_3
# 229 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Scientist_9
ParcelFernwick_Scientist_8:
# 232 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Scientist_16
# 237 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_5, MSGBOX_DEFAULT
# 239 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_2:
# 214 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR_FOUND, ParcelFernwick_Scientist_12
# 219 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_1, MSGBOX_DEFAULT
ParcelFernwick_Scientist_11:
# 221 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_3:
# 224 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_2, MSGBOX_DEFAULT
# 225 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_JAR
# 226 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_5:
# 213 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_JAR_DONE, ParcelFernwick_Scientist_2
	goto ParcelFernwick_Scientist_4

ParcelFernwick_Scientist_9:
# 230 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_Scientist_8

ParcelFernwick_Scientist_12:
# 215 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_0, MSGBOX_DEFAULT
# 216 "data/maps/ParcelFernwick/scripts.pory"
	giveitem ITEM_HYPER_POTION, 2
# 217 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_JAR_DONE
	goto ParcelFernwick_Scientist_11

ParcelFernwick_Scientist_16:
# 233 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_4, MSGBOX_DEFAULT
# 234 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Gentleman::
# 244 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 245 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 246 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Gentleman_2
# 251 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Gentleman_5
# 256 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_2, MSGBOX_DEFAULT
# 257 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_2:
# 247 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_0, MSGBOX_DEFAULT
# 248 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_5:
# 252 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_1, MSGBOX_DEFAULT
# 253 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Clerk::
# 262 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 263 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 264 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Clerk_2
# 269 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Clerk_5
# 274 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_2, MSGBOX_DEFAULT
# 275 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_2:
# 265 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_0, MSGBOX_DEFAULT
# 266 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_5:
# 270 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_1, MSGBOX_DEFAULT
# 271 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Mother::
# 280 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 281 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 282 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Mother_2
# 287 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Mother_5
# 292 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_2, MSGBOX_DEFAULT
# 293 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_2:
# 283 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_0, MSGBOX_DEFAULT
# 284 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_5:
# 288 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_1, MSGBOX_DEFAULT
# 289 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ItemSuperPotion::
# 298 "data/maps/ParcelFernwick/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFernwick_HallSign::
# 304 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_HQSign::
# 309 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HQSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_SurveySign::
# 314 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_SurveySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_FisherSign::
# 319 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FisherSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_CitySign::
# 324 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_CitySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_T_Ella::
# 330 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_ELLA, ParcelFernwick_T_Ella_Text_0, ParcelFernwick_T_Ella_Text_1, ParcelFernwick_T_Ella_FirstWin
# 334 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 335 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Ella_3
ParcelFernwick_T_Ella_1:
# 338 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Ella_8
ParcelFernwick_T_Ella_6:
# 341 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Ella_13
ParcelFernwick_T_Ella_11:
# 344 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Ella_18
ParcelFernwick_T_Ella_16:
# 347 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Ella_2:
# 336 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_3:
# 335 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R2
	goto_if 0, ParcelFernwick_T_Ella_2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_7:
# 339 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R3
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_8:
# 338 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R3
	goto_if 0, ParcelFernwick_T_Ella_7
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_12:
# 342 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R4
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_13:
# 341 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R4
	goto_if 0, ParcelFernwick_T_Ella_12
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_17:
# 345 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R5
	goto ParcelFernwick_T_Ella_16

ParcelFernwick_T_Ella_18:
# 344 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R5
	goto_if 0, ParcelFernwick_T_Ella_17
	goto ParcelFernwick_T_Ella_16


ParcelFernwick_T_Ella_FirstWin::
# 351 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
# 352 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R2::
# 356 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 357 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 358 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_0, MSGBOX_YESNO
# 359 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R2_2
# 364 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R2, ParcelFernwick_T_Ella_R2_Text_2
# 365 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_3, MSGBOX_DEFAULT
# 366 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R2_2:
# 360 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 361 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R3::
# 370 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 371 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 372 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_0, MSGBOX_YESNO
# 373 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R3_2
# 378 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R3, ParcelFernwick_T_Ella_R3_Text_1
# 379 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_2, MSGBOX_DEFAULT
# 380 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R3_2:
# 374 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R4::
# 384 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 385 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 386 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_0, MSGBOX_YESNO
# 387 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R4_2
# 392 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R4, ParcelFernwick_T_Ella_R4_Text_1
# 393 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_2, MSGBOX_DEFAULT
# 394 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R4_2:
# 388 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 389 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R5::
# 398 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 399 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 400 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_0, MSGBOX_YESNO
# 401 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R5_2
# 406 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R5, ParcelFernwick_T_Ella_R5_Text_1
# 407 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_2, MSGBOX_DEFAULT
# 408 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R5_2:
# 402 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 403 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik::
# 412 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_HENRIK, ParcelFernwick_T_Henrik_Text_0, ParcelFernwick_T_Henrik_Text_1, ParcelFernwick_T_Henrik_FirstWin
# 416 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 417 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Henrik_3
ParcelFernwick_T_Henrik_1:
# 420 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Henrik_8
ParcelFernwick_T_Henrik_6:
# 423 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Henrik_13
ParcelFernwick_T_Henrik_11:
# 426 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Henrik_18
ParcelFernwick_T_Henrik_16:
# 429 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Henrik_2:
# 418 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_3:
# 417 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R2
	goto_if 0, ParcelFernwick_T_Henrik_2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_7:
# 421 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R3
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_8:
# 420 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R3
	goto_if 0, ParcelFernwick_T_Henrik_7
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_12:
# 424 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R4
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_13:
# 423 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R4
	goto_if 0, ParcelFernwick_T_Henrik_12
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_17:
# 427 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R5
	goto ParcelFernwick_T_Henrik_16

ParcelFernwick_T_Henrik_18:
# 426 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R5
	goto_if 0, ParcelFernwick_T_Henrik_17
	goto ParcelFernwick_T_Henrik_16


ParcelFernwick_T_Henrik_FirstWin::
# 433 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
# 434 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R2::
# 438 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 439 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 440 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_0, MSGBOX_YESNO
# 441 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R2_2
# 446 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R2, ParcelFernwick_T_Henrik_R2_Text_2
# 447 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_3, MSGBOX_DEFAULT
# 448 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R2_2:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 443 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R3::
# 452 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 453 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 454 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_0, MSGBOX_YESNO
# 455 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R3_2
# 460 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R3, ParcelFernwick_T_Henrik_R3_Text_1
# 461 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_2, MSGBOX_DEFAULT
# 462 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R3_2:
# 456 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 457 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R4::
# 466 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 467 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 468 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_0, MSGBOX_YESNO
# 469 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R4_2
# 474 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R4, ParcelFernwick_T_Henrik_R3_Text_1
# 475 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_1, MSGBOX_DEFAULT
# 476 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R4_2:
# 470 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 471 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R5::
# 480 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 481 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 482 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_0, MSGBOX_YESNO
# 483 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R5_2
# 488 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R5, ParcelFernwick_T_Henrik_R2_Text_2
# 489 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_1, MSGBOX_DEFAULT
# 490 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R5_2:
# 484 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 485 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar::
# 494 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_STEINAR, ParcelFernwick_T_Steinar_Text_0, ParcelFernwick_T_Steinar_Text_1, ParcelFernwick_T_Steinar_FirstWin
# 498 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 499 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Steinar_3
ParcelFernwick_T_Steinar_1:
# 502 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Steinar_8
ParcelFernwick_T_Steinar_6:
# 505 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Steinar_13
ParcelFernwick_T_Steinar_11:
# 508 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Steinar_18
ParcelFernwick_T_Steinar_16:
# 511 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Steinar_2:
# 500 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_3:
# 499 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R2
	goto_if 0, ParcelFernwick_T_Steinar_2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_7:
# 503 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R3
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_8:
# 502 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R3
	goto_if 0, ParcelFernwick_T_Steinar_7
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_12:
# 506 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R4
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_13:
# 505 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R4
	goto_if 0, ParcelFernwick_T_Steinar_12
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_17:
# 509 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R5
	goto ParcelFernwick_T_Steinar_16

ParcelFernwick_T_Steinar_18:
# 508 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R5
	goto_if 0, ParcelFernwick_T_Steinar_17
	goto ParcelFernwick_T_Steinar_16


ParcelFernwick_T_Steinar_FirstWin::
# 515 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
# 516 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R2::
# 520 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 521 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 522 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_0, MSGBOX_YESNO
# 523 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R2_2
# 528 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R2, ParcelFernwick_T_Steinar_R2_Text_2
# 529 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_3, MSGBOX_DEFAULT
# 530 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R2_2:
# 524 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 525 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R3::
# 534 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 535 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 536 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_0, MSGBOX_YESNO
# 537 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R3_2
# 542 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R3, ParcelFernwick_T_Steinar_R3_Text_1
# 543 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_2, MSGBOX_DEFAULT
# 544 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R3_2:
# 538 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 539 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R4::
# 548 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 549 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 550 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_0, MSGBOX_YESNO
# 551 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R4_2
# 556 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R4, ParcelFernwick_T_Steinar_R2_Text_2
# 557 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_1, MSGBOX_DEFAULT
# 558 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R4_2:
# 552 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 553 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R5::
# 562 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 563 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 564 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_0, MSGBOX_YESNO
# 565 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R5_2
# 570 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R5, ParcelFernwick_T_Steinar_R5_Text_1
# 571 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_2, MSGBOX_DEFAULT
# 572 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R5_2:
# 566 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 567 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte::
# 576 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_MARTE, ParcelFernwick_T_Marte_Text_0, ParcelFernwick_T_Marte_Text_1, ParcelFernwick_T_Marte_FirstWin
# 580 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 581 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Marte_3
ParcelFernwick_T_Marte_1:
# 584 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Marte_8
ParcelFernwick_T_Marte_6:
# 587 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Marte_13
ParcelFernwick_T_Marte_11:
# 590 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Marte_18
ParcelFernwick_T_Marte_16:
# 593 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Marte_2:
# 582 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_3:
# 581 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R2
	goto_if 0, ParcelFernwick_T_Marte_2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_7:
# 585 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R3
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_8:
# 584 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R3
	goto_if 0, ParcelFernwick_T_Marte_7
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_12:
# 588 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R4
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_13:
# 587 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R4
	goto_if 0, ParcelFernwick_T_Marte_12
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_17:
# 591 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R5
	goto ParcelFernwick_T_Marte_16

ParcelFernwick_T_Marte_18:
# 590 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R5
	goto_if 0, ParcelFernwick_T_Marte_17
	goto ParcelFernwick_T_Marte_16


ParcelFernwick_T_Marte_FirstWin::
# 597 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
# 598 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R2::
# 602 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 603 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 604 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_0, MSGBOX_YESNO
# 605 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R2_2
# 610 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R2, ParcelFernwick_T_Marte_R2_Text_2
# 611 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_3, MSGBOX_DEFAULT
# 612 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R2_2:
# 606 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 607 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R3::
# 616 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 617 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 618 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_0, MSGBOX_YESNO
# 619 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R3_2
# 624 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R3, ParcelFernwick_T_Marte_R2_Text_2
# 625 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_1, MSGBOX_DEFAULT
# 626 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R3_2:
# 620 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 621 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R4::
# 630 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 631 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 632 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_0, MSGBOX_YESNO
# 633 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R4_2
# 638 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R4, ParcelFernwick_T_Marte_R4_Text_1
# 639 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_2, MSGBOX_DEFAULT
# 640 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R4_2:
# 634 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 635 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R5::
# 644 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 645 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 646 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_0, MSGBOX_YESNO
# 647 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R5_2
# 652 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R5, ParcelFernwick_T_Marte_R5_Text_1
# 653 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_2, MSGBOX_DEFAULT
# 654 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R5_2:
# 648 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 649 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon::
# 658 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_LEON, ParcelFernwick_T_Leon_Text_0, ParcelFernwick_T_Leon_Text_1, ParcelFernwick_T_Leon_FirstWin
# 662 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 663 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Leon_3
ParcelFernwick_T_Leon_1:
# 666 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Leon_8
ParcelFernwick_T_Leon_6:
# 669 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Leon_13
ParcelFernwick_T_Leon_11:
# 672 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Leon_18
ParcelFernwick_T_Leon_16:
# 675 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Leon_2:
# 664 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_3:
# 663 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R2
	goto_if 0, ParcelFernwick_T_Leon_2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_7:
# 667 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R3
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_8:
# 666 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R3
	goto_if 0, ParcelFernwick_T_Leon_7
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_12:
# 670 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R4
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_13:
# 669 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R4
	goto_if 0, ParcelFernwick_T_Leon_12
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_17:
# 673 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R5
	goto ParcelFernwick_T_Leon_16

ParcelFernwick_T_Leon_18:
# 672 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R5
	goto_if 0, ParcelFernwick_T_Leon_17
	goto ParcelFernwick_T_Leon_16


ParcelFernwick_T_Leon_FirstWin::
# 679 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
# 680 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R2::
# 684 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 685 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 686 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_0, MSGBOX_YESNO
# 687 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R2_2
# 692 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R2, ParcelFernwick_T_Leon_R2_Text_2
# 693 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_3, MSGBOX_DEFAULT
# 694 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R2_2:
# 688 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 689 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R3::
# 698 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 699 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 700 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_0, MSGBOX_YESNO
# 701 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R3_2
# 706 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R3, ParcelFernwick_T_Leon_R3_Text_1
# 707 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_2, MSGBOX_DEFAULT
# 708 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R3_2:
# 702 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 703 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R4::
# 712 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 713 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 714 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_0, MSGBOX_YESNO
# 715 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R4_2
# 720 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R4, ParcelFernwick_T_Leon_R4_Text_1
# 721 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_2, MSGBOX_DEFAULT
# 722 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R4_2:
# 716 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 717 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R5::
# 726 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 727 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 728 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_0, MSGBOX_YESNO
# 729 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R5_2
# 734 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R5, ParcelFernwick_T_Leon_R2_Text_2
# 735 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_1, MSGBOX_DEFAULT
# 736 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R5_2:
# 730 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 731 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea::
# 740 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_THEA, ParcelFernwick_T_Thea_Text_0, ParcelFernwick_T_Thea_Text_1, ParcelFernwick_T_Thea_FirstWin
# 744 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 745 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Thea_3
ParcelFernwick_T_Thea_1:
# 748 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Thea_8
ParcelFernwick_T_Thea_6:
# 751 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Thea_13
ParcelFernwick_T_Thea_11:
# 754 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Thea_18
ParcelFernwick_T_Thea_16:
# 757 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Thea_2:
# 746 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_3:
# 745 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R2
	goto_if 0, ParcelFernwick_T_Thea_2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_7:
# 749 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R3
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_8:
# 748 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R3
	goto_if 0, ParcelFernwick_T_Thea_7
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_12:
# 752 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R4
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_13:
# 751 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R4
	goto_if 0, ParcelFernwick_T_Thea_12
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_17:
# 755 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R5
	goto ParcelFernwick_T_Thea_16

ParcelFernwick_T_Thea_18:
# 754 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R5
	goto_if 0, ParcelFernwick_T_Thea_17
	goto ParcelFernwick_T_Thea_16


ParcelFernwick_T_Thea_FirstWin::
# 761 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
# 762 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R2::
# 766 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 767 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 768 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_0, MSGBOX_YESNO
# 769 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R2_2
# 774 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R2, ParcelFernwick_T_Thea_R2_Text_2
# 775 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_3, MSGBOX_DEFAULT
# 776 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R2_2:
# 770 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 771 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R3::
# 780 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 781 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 782 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_0, MSGBOX_YESNO
# 783 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R3_2
# 788 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R3, ParcelFernwick_T_Thea_R3_Text_1
# 789 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_2, MSGBOX_DEFAULT
# 790 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R3_2:
# 784 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 785 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R4::
# 794 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 795 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 796 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_0, MSGBOX_YESNO
# 797 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R4_2
# 802 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R4, ParcelFernwick_T_Thea_R3_Text_1
# 803 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_1, MSGBOX_DEFAULT
# 804 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R4_2:
# 798 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 799 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R5::
# 808 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 809 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 810 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_0, MSGBOX_YESNO
# 811 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R5_2
# 816 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R5, ParcelFernwick_T_Thea_R5_Text_1
# 817 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_2, MSGBOX_DEFAULT
# 818 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R5_2:
# 812 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 813 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_PondLook::
# 824 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 825 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR, ParcelFernwick_PondLook_3
ParcelFernwick_PondLook_1:
# 831 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_1, MSGBOX_SIGN
# 832 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_2:
# 826 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_0, MSGBOX_SIGN
# 827 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR_SEEN
# 828 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_3:
# 825 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GRETTIR_SEEN, ParcelFernwick_PondLook_2
	goto ParcelFernwick_PondLook_1


ParcelFernwick_PerrinScene::
# 838 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_2
# 842 "data/maps/ParcelFernwick/scripts.pory"
	lockall
# 843 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 844 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_0, MSGBOX_DEFAULT
# 845 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 846 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinIn
# 847 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 848 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_1, MSGBOX_DEFAULT
# 849 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_Text_2
# 850 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_3, MSGBOX_DEFAULT
# 851 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 852 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinOut
# 853 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 854 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 21
# 855 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_PERRIN_1
# 856 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
# 857 "data/maps/ParcelFernwick/scripts.pory"
	releaseall
	end

ParcelFernwick_PerrinScene_2:
# 839 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelFernwick_PerrinTalk::
# 861 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 862 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 863 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 864 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


# 867 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinIn:
# 867 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
# 867 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
	step_end

# 868 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinOut:
# 868 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
# 868 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
	step_end

ParcelFernwick_PondPage::
# 871 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_PAGE, ParcelFernwick_PondPage_2
# 874 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondPage_Text_0, MSGBOX_SIGN
# 875 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_PAGE_FOUND
	end

ParcelFernwick_PondPage_2:
	end


ParcelFernwick_PairCorps::
# 882 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 883 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_PairCorps_2
# 888 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_PairCorps_3
# 894 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_8, MSGBOX_DEFAULT
# 895 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_9, MSGBOX_DEFAULT
# 896 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_10, MSGBOX_DEFAULT
# 897 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_11, MSGBOX_DEFAULT
ParcelFernwick_PairCorps_1:
# 899 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PairCorps_2:
# 884 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_0, MSGBOX_DEFAULT
# 885 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_1, MSGBOX_DEFAULT
# 886 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_2, MSGBOX_DEFAULT
# 887 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_PairCorps_1

ParcelFernwick_PairCorps_3:
# 889 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_4, MSGBOX_DEFAULT
# 890 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_5, MSGBOX_DEFAULT
# 891 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_6, MSGBOX_DEFAULT
# 892 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_7, MSGBOX_DEFAULT
	goto ParcelFernwick_PairCorps_1


ParcelFernwick_PairPond::
# 904 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 905 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_PairPond_2
# 910 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_PairPond_3
# 916 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_8, MSGBOX_DEFAULT
# 917 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_9, MSGBOX_DEFAULT
# 918 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_10, MSGBOX_DEFAULT
# 919 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_11, MSGBOX_DEFAULT
# 920 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_12, MSGBOX_DEFAULT
ParcelFernwick_PairPond_1:
# 922 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PairPond_2:
# 906 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_0, MSGBOX_DEFAULT
# 907 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_1, MSGBOX_DEFAULT
# 908 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_2, MSGBOX_DEFAULT
# 909 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_PairPond_1

ParcelFernwick_PairPond_3:
# 911 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_4, MSGBOX_DEFAULT
# 912 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_5, MSGBOX_DEFAULT
# 913 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_6, MSGBOX_DEFAULT
# 914 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_7, MSGBOX_DEFAULT
	goto ParcelFernwick_PairPond_1


ParcelFernwick_Stringer::
# 929 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 930 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 931 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Stringer_2
# 933 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFernwick_Stringer_3
# 941 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_4, MSGBOX_DEFAULT
ParcelFernwick_Stringer_1:
# 943 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Stringer_2:
# 932 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Stringer_1

ParcelFernwick_Stringer_3:
# 934 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_1, MSGBOX_DEFAULT
# 935 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_CH_QUOTE, ParcelFernwick_Stringer_7
# 938 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_Stringer_1

ParcelFernwick_Stringer_7:
# 936 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_2, MSGBOX_DEFAULT
	goto ParcelFernwick_Stringer_1


ParcelFernwick_Gardener::
# 950 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 951 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 952 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE_DONE, ParcelFernwick_Gardener_2
# 954 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE, ParcelFernwick_Gardener_3
# 963 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_3, MSGBOX_DEFAULT
# 964 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_STONE
ParcelFernwick_Gardener_1:
# 966 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gardener_2:
# 953 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Gardener_1

ParcelFernwick_Gardener_3:
# 955 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE_FOUND, ParcelFernwick_Gardener_7
# 960 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_2, MSGBOX_DEFAULT
	goto ParcelFernwick_Gardener_1

ParcelFernwick_Gardener_7:
# 956 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_1, MSGBOX_DEFAULT
# 957 "data/maps/ParcelFernwick/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 958 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_STONE_DONE
	goto ParcelFernwick_Gardener_1


ParcelFernwick_HighWaterStone::
# 971 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE, ParcelFernwick_HighWaterStone_4
ParcelFernwick_HighWaterStone_3:
# 975 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HighWaterStone_Text_1, MSGBOX_SIGN
ParcelFernwick_HighWaterStone_1:
	end

ParcelFernwick_HighWaterStone_2:
# 972 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HighWaterStone_Text_0, MSGBOX_SIGN
# 973 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_STONE_FOUND
	goto ParcelFernwick_HighWaterStone_1

ParcelFernwick_HighWaterStone_4:
# 971 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_STONE_FOUND, ParcelFernwick_HighWaterStone_2
	goto ParcelFernwick_HighWaterStone_3


ParcelFernwick_FindJar::
# 983 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR, ParcelFernwick_FindJar_4
ParcelFernwick_FindJar_3:
# 987 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FindJar_Text_1, MSGBOX_SIGN
ParcelFernwick_FindJar_1:
	end

ParcelFernwick_FindJar_2:
# 984 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FindJar_Text_0, MSGBOX_SIGN
# 985 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_JAR_FOUND
	goto ParcelFernwick_FindJar_1

ParcelFernwick_FindJar_4:
# 983 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_JAR_FOUND, ParcelFernwick_FindJar_2
	goto ParcelFernwick_FindJar_3


ParcelFernwick_PairStation::
# 993 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 994 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_PairStation_2
# 999 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_PairStation_3
# 1005 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_8, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_9, MSGBOX_DEFAULT
# 1007 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_10, MSGBOX_DEFAULT
# 1008 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_11, MSGBOX_DEFAULT
ParcelFernwick_PairStation_1:
# 1010 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PairStation_2:
# 995 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_0, MSGBOX_DEFAULT
# 996 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_1, MSGBOX_DEFAULT
# 997 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_2, MSGBOX_DEFAULT
# 998 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_PairStation_1

ParcelFernwick_PairStation_3:
# 1000 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_4, MSGBOX_DEFAULT
# 1001 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_5, MSGBOX_DEFAULT
# 1002 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_6, MSGBOX_DEFAULT
# 1003 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_7, MSGBOX_DEFAULT
	goto ParcelFernwick_PairStation_1


ParcelFernwick_Board1::
# 1017 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Board1_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_Board2::
# 1022 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Board2_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_Smeargle_Text_0:
# 30 "data/maps/ParcelFernwick/scripts.pory"
	.string "A SMEARGLE sits on the bank with its\n"
	.string "tail in the pond. It is not painting the\l"
	.string "water. It is painting the line where the\l"
	.string "water was, a hand higher, in a colour\l"
	.string "that is not in the pond.\p"
	.string "It looks at you. It looks at the\n"
	.string "notebook under your arm. It goes back\l"
	.string "to the line.$"

ParcelFernwick_Smeargle_Text_1:
# 31 "data/maps/ParcelFernwick/scripts.pory"
	.string "You know this stillness. You have been\n"
	.string "waiting most of your life to be allowed\l"
	.string "to stand in it again.\p"
	.string "It finishes the line. It does not look\n"
	.string "up. It leaves the tail in the water,\l"
	.string "waiting, the way they do when they are\l"
	.string "asking.$"

ParcelFernwick_Smeargle_Text_2:
# 32 "data/maps/ParcelFernwick/scripts.pory"
	.string "Let it come?$"

ParcelFernwick_Smeargle_Text_3:
# 34 "data/maps/ParcelFernwick/scripts.pory"
	.string "You leave it the bank and the line. Some\n"
	.string "records are better kept by the one\l"
	.string "making them.\p"
	.string "It will be here. It has decided that\n"
	.string "much.$"

ParcelFernwick_Smeargle_Text_4:
# 40 "data/maps/ParcelFernwick/scripts.pory"
	.string "There is no room for it, in the party or\n"
	.string "the boxes. It seems to know. It goes\l"
	.string "back to the line.\p"
	.string "Make room, and come back.$"

ParcelFernwick_Smeargle_Text_5:
# 45 "data/maps/ParcelFernwick/scripts.pory"
	.string "WREN received SMEARGLE.$"

ParcelFernwick_Smeargle_Text_6:
# 46 "data/maps/ParcelFernwick/scripts.pory"
	.string "It is not Sketch. It does not try to be.\p"
	.string "It paints the first page of the\n"
	.string "notebook you brought from Johto -- the\l"
	.string "one with the marsh plant nobody else\l"
	.string "could name -- then sets its tail down\l"
	.string "beside the page, and waits for the next\l"
	.string "one.$"

ParcelFernwick_GateWard_Text_0:
# 64 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station checkpoint. Nobody goes\n"
	.string "north to the marsh without clearance.\p"
	.string "Card. …Provisional, Tidewater. Four\n"
	.string "clearances, no photograph that looks\l"
	.string "like you; they never do, the camera's\l"
	.string "the FOUNDATION's.\p"
	.string "You want the fifth stamp? Earn it.$"

ParcelFernwick_GateWard_Text_1:
# 65 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Cleared. Logged.$"

ParcelFernwick_GateWard_Text_2:
# 69 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: You're in the log. Keep your card\n"
	.string "on you. The next checkpoint won't take\l"
	.string "my word for it.$"

ParcelFernwick_GateWard_Defeated_Text_0:
# 76 "data/maps/ParcelFernwick/scripts.pory"
	.string "WARD: Station clearance: granted. No\n"
	.string "ceremony. That's not what this is.$"

ParcelFernwick_Lookout_Text_0:
# 84 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Nice view from up here. You can\n"
	.string "see the whole marsh.\p"
	.string "You can see who's coming, too.$"

ParcelFernwick_Lookout_Text_1:
# 85 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Tch.$"

ParcelFernwick_Lookout_Text_2:
# 86 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARR: Write your little report. It\n"
	.string "changes nothing out here.$"

ParcelFernwick_Birder_Text_0:
# 92 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Shh! I'm counting nests! ...Okay.\n"
	.string "Fine. One battle.$"

ParcelFernwick_Birder_Text_1:
# 93 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Fewer nests every spring, and now\n"
	.string "fewer wins.$"

ParcelFernwick_Birder_Text_2:
# 94 "data/maps/ParcelFernwick/scripts.pory"
	.string "NERI: Nobody writes the nest counts\n"
	.string "down but me. Somebody should.$"

ParcelFernwick_Ranger_Text_0:
# 103 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: Half the station's been called\n"
	.string "to the hearings as witnesses. The other\l"
	.string "half is covering their shifts.\p"
	.string "HALE's doing both.$"

ParcelFernwick_Ranger_Text_1:
# 106 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: HALE's inside. He's got the\n"
	.string "river minutes open on the desk and he's\l"
	.string "read them four times.\p"
	.string "He keeps saying 'six people stood up.'\n"
	.string "Like he can't believe a room would do\l"
	.string "that.$"

ParcelFernwick_Ranger_Text_2:
# 110 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: District Station. HALE's inside,\n"
	.string "if you're the one he keeps mentioning.\p"
	.string "He mentions you a lot, for a man who\n"
	.string "doesn't talk.$"

ParcelFernwick_OldMan_Text_0:
# 120 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: A fishing village before the\n"
	.string "station, a fishing village with\l"
	.string "paperwork after, and now a fishing\l"
	.string "village in a hearing transcript. I read\l"
	.string "my own name in it. Page forty. I said\l"
	.string "'the water's low'. I did say that.$"

ParcelFernwick_OldMan_Text_1:
# 125 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: They say the river village had\n"
	.string "a meeting where six people spoke and\l"
	.string "nobody shouted. Six! In this town we\l"
	.string "can't get two to agree on the tide.\p"
	.string "Paperwork did that. Yours, I'm told.$"

ParcelFernwick_OldMan_Text_2:
# 129 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This was a fishing village\n"
	.string "before the Corps put the station here.\p"
	.string "Now it's a fishing village with\n"
	.string "paperwork.$"

ParcelFernwick_Woman_Text_0:
# 138 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN smiled. I saw it. Tidewater\n"
	.string "regulation or not, he smiled when they\l"
	.string "read your name on the wireless. Half a\l"
	.string "second. Don't tell him I told you.$"

ParcelFernwick_Woman_Text_1:
# 143 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN read the river minutes\n"
	.string "aloud in the Hall. To the cadets. The\l"
	.string "whole thing, in that voice.\p"
	.string "One of them cried. He said that was the\n"
	.string "correct response and carried on.$"

ParcelFernwick_Woman_Text_2:
# 148 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: You passed TARN's exam? He\n"
	.string "didn't smile, did he. He never smiles. I\l"
	.string "think it's a Tidewater regulation.$"

ParcelFernwick_Woman_Text_3:
# 150 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: The Certification Hall's right\n"
	.string "there. TARN runs the exams.\p"
	.string "He's not as scary as the sign makes him\n"
	.string "look. He's scarier.$"

ParcelFernwick_Boy_Text_0:
# 160 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER! Not a\n"
	.string "MEREHOLT guy. Their boots are still the\l"
	.string "best. But the RANGER's name was on the\l"
	.string "radio.$"

ParcelFernwick_Boy_Text_1:
# 165 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: The MEREHOLT guy came through\n"
	.string "with new boots and nobody asked where\l"
	.string "he got them.\p"
	.string "I'm gonna be a RANGER. Just a RANGER.\n"
	.string "You can get wet in any boots.$"

ParcelFernwick_Boy_Text_2:
# 169 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER when I grow\n"
	.string "up! Or a fisherman.\p"
	.string "Or a MEREHOLT guy. They have the best\n"
	.string "boots.$"

ParcelFernwick_Girl_Text_0:
# 178 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond's still ducks. WINGULL.\n"
	.string "But GRETTIR says a POLIWAG came up the\l"
	.string "channel. One. He's watching for it. I'm\l"
	.string "watching GRETTIR.$"

ParcelFernwick_Girl_Text_1:
# 183 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: A man from the river said the\n"
	.string "water there has names on it now. Like,\l"
	.string "who gets how much.\p"
	.string "Can we put names on our pond? I'd put\n"
	.string "POLIWAG. They'd have to come back if\l"
	.string "their name was on it.$"

ParcelFernwick_Girl_Text_2:
# 187 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond used to have POLIWAG in\n"
	.string "it! Now it just has ducks.\p"
	.string "Well. WINGULL. Same thing.$"

ParcelFernwick_Fisher_Text_0:
# 196 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Marsh water's still low. Your\n"
	.string "paper didn't raise it. It put a number on\l"
	.string "the discharge upstream, and a man with\l"
	.string "a jar. I'll row where I can and walk where\l"
	.string "I can't. Same as before. Less angry.$"

ParcelFernwick_Fisher_Text_1:
# 201 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Water's still low. But the\n"
	.string "dredge crew got told to hold at the\l"
	.string "landing, and nobody told them why.\p"
	.string "I know why. Everybody who reads knows\n"
	.string "why. You wrote it.$"

ParcelFernwick_Fisher_Text_2:
# 205 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: The marsh water's been low\n"
	.string "since spring. You can walk to places you\l"
	.string "used to row to.\p"
	.string "That's not good, whatever the Council\n"
	.string "says.$"

ParcelFernwick_Scientist_Text_0:
# 215 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: Nine days. Nine days a jar\n"
	.string "of the pond sat in the sun with my name\l"
	.string "on it and nobody kicked it over. This\l"
	.string "town respects a label more than it\l"
	.string "respects the pond.\p"
	.string "Take these. I'm going to go and fill a\n"
	.string "new one.$"

ParcelFernwick_Scientist_Text_1:
# 219 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: A jar on the kerb, south\n"
	.string "path. Labelled POND, with a date.$"

ParcelFernwick_Scientist_Text_2:
# 224 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: I left a sample jar on the\n"
	.string "kerb by the south path last week. Pond\l"
	.string "water. Labelled. I meant to come back\l"
	.string "with the kit and I came back with\l"
	.string "excuses.\p"
	.string "If it's still there, read me the label. I\n"
	.string "want to know if the date on it shames\l"
	.string "me.$"

ParcelFernwick_Scientist_Text_3:
# 230 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring and\n"
	.string "nobody cared. Now the lawyers want the\l"
	.string "numbers by Thursday.\p"
	.string "We don't have a Thursday setting.$"

ParcelFernwick_Scientist_Text_4:
# 233 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring,\n"
	.string "and this is the first autumn anyone's\l"
	.string "asked for the numbers before the\l"
	.string "argument instead of after.\p"
	.string "ILEX says it's you. I say it's the\n"
	.string "numbers. We're both right, which she\l"
	.string "hates.$"

ParcelFernwick_Scientist_Text_5:
# 237 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: We measure. That's all we do.\n"
	.string "Forty years of measuring.\p"
	.string "ILEX is inside. She'll tell you it's\n"
	.string "boring. She's lying.$"

ParcelFernwick_Gentleman_Text_0:
# 247 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It still says so. The hearing\l"
	.string "didn't take the plaques down. I'd have\l"
	.string "liked it to. Then I thought: let them\l"
	.string "stay. They say exactly what they say.$"

ParcelFernwick_Gentleman_Text_1:
# 252 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: The plate on the fountain\n"
	.string "has been polished. Twice this month.\l"
	.string "Somebody up the coast is nervous about\l"
	.string "plates.\p"
	.string "I find I read the small ones more\n"
	.string "carefully than I used to.$"

ParcelFernwick_Gentleman_Text_2:
# 256 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It says so on the fountain.\p"
	.string "It says so on most things around here,\n"
	.string "if you read the small plates.$"

ParcelFernwick_Clerk_Text_0:
# 265 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "down. Nobody asks what the work is now\l"
	.string "either. The deal's the same. The pay's\l"
	.string "not. Funny how the deal's the bit\l"
	.string "nobody renegotiates.$"

ParcelFernwick_Clerk_Text_1:
# 270 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate's down. First time in\n"
	.string "three years. Half the marsh crew's been\l"
	.string "stood down 'pending review.'\p"
	.string "Pending your review, is what they mean.\n"
	.string "Nobody's said it to my face. They say it\l"
	.string "to the fountain.$"

ParcelFernwick_Clerk_Text_2:
# 274 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "up again. Don't ask what the work is.\p"
	.string "Nobody asks. That's the deal.$"

ParcelFernwick_Mother_Text_0:
# 283 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy still wants to be a\n"
	.string "RANGER. I've stopped saying RANGERS\l"
	.string "don't get paid. They don't. But somebody\l"
	.string "read one out at a hearing and the whole\l"
	.string "town went quiet.$"

ParcelFernwick_Mother_Text_1:
# 288 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy's stopped saying the\n"
	.string "MEREHOLT part. He heard the men at the\l"
	.string "fountain talking about the river\l"
	.string "meeting.\p"
	.string "He asked me what an allocation was. I\n"
	.string "had to ask the clerk.$"

ParcelFernwick_Mother_Text_2:
# 292 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy wants to be a RANGER. I\n"
	.string "told him RANGERS don't get paid.\p"
	.string "He said that's fine, he'll be a MEREHOLT\n"
	.string "guy on weekends.$"

ParcelFernwick_HallSign_Text_0:
# 304 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "CERTIFICATION HALL\p"
	.string "Forest Certification: practical\n"
	.string "examination.\n"
	.string "Examiner: TARN, Tidewater Division.$"

ParcelFernwick_HQSign_Text_0:
# 309 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "DISTRICT STATION\p"
	.string "Rangers, provisionals and the public:\n"
	.string "front desk.$"

ParcelFernwick_SurveySign_Text_0:
# 314 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE SURVEY\n"
	.string "District office\p"
	.string "Long-baseline monitoring. Soil cores,\n"
	.string "water logs, repeat photography.\p"
	.string "We do not issue press releases.$"

ParcelFernwick_FisherSign_Text_0:
# 319 "data/maps/ParcelFernwick/scripts.pory"
	.string "GRETTIR'S\n"
	.string "Rods. Bait. Marsh advice.\p"
	.string "The advice is free and you won't take\n"
	.string "it.$"

ParcelFernwick_CitySign_Text_0:
# 324 "data/maps/ParcelFernwick/scripts.pory"
	.string "FERNWICK\n"
	.string "District seat, Saltmarsh Coast\p"
	.string "A smaller plate: PROMENADE AND\n"
	.string "FOUNTAIN BY THE MEREHOLT FOUNDATION.$"

ParcelFernwick_T_Ella_Text_0:
# 331 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The park pond's new. Nothing lives\n"
	.string "in it yet. The CORPS says give it a year.\l"
	.string "Battle?$"

ParcelFernwick_T_Ella_Text_1:
# 332 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: A year, they said.$"

ParcelFernwick_T_Ella_Text_2:
# 347 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: TARN failed my brother twice. He's\n"
	.string "at the HALL every day anyway. That's\l"
	.string "FERNWICK.$"

ParcelFernwick_T_Ella_R2_Text_0:
# 358 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Ella_R2_Text_1:
# 360 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Another time, then.$"

ParcelFernwick_T_Ella_R2_Text_2:
# 364 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Still yours.$"

ParcelFernwick_T_Ella_R2_Text_3:
# 365 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Ella_R3_Text_0:
# 372 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Ella_R3_Text_1:
# 378 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Fair.$"

ParcelFernwick_T_Ella_R3_Text_2:
# 379 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Ella_R4_Text_0:
# 386 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFernwick_T_Ella_R4_Text_1:
# 392 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Again, then. Later.$"

ParcelFernwick_T_Ella_R4_Text_2:
# 393 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Ella_R5_Text_0:
# 400 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Ella_R5_Text_1:
# 406 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Noted. Properly, this time.$"

ParcelFernwick_T_Ella_R5_Text_2:
# 407 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Henrik_Text_0:
# 413 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: The district station sends\n"
	.string "provisionals north and gets reports\l"
	.string "back. Never the provisionals. Battle!$"

ParcelFernwick_T_Henrik_Text_1:
# 414 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Some come back, then.$"

ParcelFernwick_T_Henrik_Text_2:
# 429 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: ILEX files everything at the\n"
	.string "survey office. Everything. I asked her\l"
	.string "what for. She said 'later'.$"

ParcelFernwick_T_Henrik_R2_Text_0:
# 440 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Henrik_R2_Text_1:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: No hurry. The water keeps.$"

ParcelFernwick_T_Henrik_R2_Text_2:
# 446 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: That's the one I wanted to see.$"

ParcelFernwick_T_Henrik_R2_Text_3:
# 447 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Henrik_R3_Text_0:
# 454 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Henrik_R3_Text_1:
# 460 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Still yours.$"

ParcelFernwick_T_Henrik_R3_Text_2:
# 461 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Henrik_R4_Text_0:
# 468 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFernwick_T_Henrik_R4_Text_1:
# 475 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFernwick_T_Henrik_R5_Text_0:
# 482 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFernwick_T_Henrik_R5_Text_1:
# 489 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFernwick_T_Steinar_Text_0:
# 495 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Down from the marsh road. The\n"
	.string "plaza's the only flat ground in forty\l"
	.string "miles. Battle for it.$"

ParcelFernwick_T_Steinar_Text_1:
# 496 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Share the flat ground, then.$"

ParcelFernwick_T_Steinar_Text_2:
# 511 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: The north checkpoint's\n"
	.string "WARD's. He doesn't bend. The marsh is\l"
	.string "past him and the marsh is worse than he\l"
	.string "is.$"

ParcelFernwick_T_Steinar_R2_Text_0:
# 522 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Steinar_R2_Text_1:
# 524 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Steinar_R2_Text_2:
# 528 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Noted. Properly, this time.$"

ParcelFernwick_T_Steinar_R2_Text_3:
# 529 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Steinar_R3_Text_0:
# 536 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Steinar_R3_Text_1:
# 542 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Fair.$"

ParcelFernwick_T_Steinar_R3_Text_2:
# 543 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Steinar_R4_Text_0:
# 550 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFernwick_T_Steinar_R4_Text_1:
# 557 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Steinar_R5_Text_0:
# 564 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Steinar_R5_Text_1:
# 570 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Again, then. Later.$"

ParcelFernwick_T_Steinar_R5_Text_2:
# 571 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Marte_Text_0:
# 577 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: South square's where the\n"
	.string "MISTWOOD road comes in. Everyone comes\l"
	.string "in tired. Easy battles.$"

ParcelFernwick_T_Marte_Text_1:
# 578 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Not that tired, then.$"

ParcelFernwick_T_Marte_Text_2:
# 593 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: The CENTER's free for\n"
	.string "provisionals. The MART isn't. The CORPS\l"
	.string "pays for healing, not REPELS. Funny\l"
	.string "priorities.$"

ParcelFernwick_T_Marte_R2_Text_0:
# 604 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFernwick_T_Marte_R2_Text_1:
# 606 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Fine. Same spot.$"

ParcelFernwick_T_Marte_R2_Text_2:
# 610 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: …Fair.$"

ParcelFernwick_T_Marte_R2_Text_3:
# 611 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Marte_R3_Text_0:
# 618 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFernwick_T_Marte_R3_Text_1:
# 625 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Marte_R4_Text_0:
# 632 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFernwick_T_Marte_R4_Text_1:
# 638 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Right. That's the whole of it.$"

ParcelFernwick_T_Marte_R4_Text_2:
# 639 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Marte_R5_Text_0:
# 646 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFernwick_T_Marte_R5_Text_1:
# 652 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's the one I wanted to see.$"

ParcelFernwick_T_Marte_R5_Text_2:
# 653 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Leon_Text_0:
# 659 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The square's the only place in\n"
	.string "FERNWICK with grass worth a bug.\l"
	.string "Battle!$"

ParcelFernwick_T_Leon_Text_1:
# 660 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Worth a bug. Not a battle.$"

ParcelFernwick_T_Leon_Text_2:
# 675 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: WURMPLE in the park, none by the\n"
	.string "station. The station's all pavement.\l"
	.string "Pavement's the point, my dad says.$"

ParcelFernwick_T_Leon_R2_Text_0:
# 686 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Leon_R2_Text_1:
# 688 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Leon_R2_Text_2:
# 692 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: …Again, then. Later.$"

ParcelFernwick_T_Leon_R2_Text_3:
# 693 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Leon_R3_Text_0:
# 700 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Leon_R3_Text_1:
# 706 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Right. That's the whole of it.$"

ParcelFernwick_T_Leon_R3_Text_2:
# 707 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFernwick_T_Leon_R4_Text_0:
# 714 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFernwick_T_Leon_R4_Text_1:
# 720 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Noted. Properly, this time.$"

ParcelFernwick_T_Leon_R4_Text_2:
# 721 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Leon_R5_Text_0:
# 728 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Leon_R5_Text_1:
# 735 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Thea_Text_0:
# 741 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Cadet THEA, station duty. HALE\n"
	.string "says spar every provisional who\l"
	.string "crosses the plaza. You crossed it.$"

ParcelFernwick_T_Thea_Text_1:
# 742 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: HALE will want the score.$"

ParcelFernwick_T_Thea_Text_2:
# 757 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Every cadet wants the Reedmere\n"
	.string "posting. The marsh is where things\l"
	.string "happen. Things aren't good, but they\l"
	.string "happen.$"

ParcelFernwick_T_Thea_R2_Text_0:
# 768 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Thea_R2_Text_1:
# 770 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Another time, then.$"

ParcelFernwick_T_Thea_R2_Text_2:
# 774 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Right. That's the whole of it.$"

ParcelFernwick_T_Thea_R2_Text_3:
# 775 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Thea_R3_Text_0:
# 782 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFernwick_T_Thea_R3_Text_1:
# 788 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Still yours.$"

ParcelFernwick_T_Thea_R3_Text_2:
# 789 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Thea_R4_Text_0:
# 796 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFernwick_T_Thea_R4_Text_1:
# 803 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Thea_R5_Text_0:
# 810 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Thea_R5_Text_1:
# 816 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's the one I wanted to see.$"

ParcelFernwick_T_Thea_R5_Text_2:
# 817 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_PondLook_Text_0:
# 826 "data/maps/ParcelFernwick/scripts.pory"
	.string "Still water over bare clay. Nothing.\n"
	.string "Nothing.\p"
	.string "Then a SURSKIT, skating out from the\n"
	.string "reeds the CORPS planted. Just the one.\l"
	.string "It found the pond on its own.$"

ParcelFernwick_PondLook_Text_1:
# 831 "data/maps/ParcelFernwick/scripts.pory"
	.string "The park pond. Still water. A SURSKIT\n"
	.string "skates across it and back.$"

ParcelFernwick_PerrinScene_Text_0:
# 844 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelFernwick_PerrinScene_Text_1:
# 848 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: There you are! WREN, right? I'm\n"
	.string "PERRIN. Same cohort, different\l"
	.string "dispatch. TARN passed me yesterday.\l"
	.string "Yes, PASSED, first go.\p"
	.string "Everyone keeps saying the CORPS\n"
	.string "doesn't do rankings. Let's find out.$"

ParcelFernwick_PerrinScene_Text_2:
# 849 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Huh. Okay. OKAY.$"

ParcelFernwick_PerrinScene_Text_3:
# 850 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: See you up the road. HALE's\n"
	.string "sending me to the landing too. The\l"
	.string "FOUNDATION's got an outreach grant for\l"
	.string "provisionals, did you know? You should\l"
	.string "apply. It pays.$"

ParcelFernwick_PerrinTalk_Text_0:
# 863 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelFernwick_PondPage_Text_0:
# 874 "data/maps/ParcelFernwick/scripts.pory"
	.string "Under the pond's edge, a page gone to\n"
	.string "pulp. One line still legible, in a square\l"
	.string "hand:\p"
	.string "'Marsh page. 28 pairs. The low years\n"
	.string "start here.'$"

ParcelFernwick_PairCorps_Text_0:
# 884 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: The Director's office sent a\n"
	.string "letter. The certification programme is\l"
	.string "'under review for independence'.$"

ParcelFernwick_PairCorps_Text_1:
# 885 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: Meaning the FOUNDATION's\n"
	.string "third of it.$"

ParcelFernwick_PairCorps_Text_2:
# 886 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Meaning eight stations instead\n"
	.string "of twelve, if they walk. HALE says he'd\l"
	.string "rather have eight honest ones.$"

ParcelFernwick_PairCorps_Text_3:
# 887 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: HALE's said that for twenty\n"
	.string "years. Now someone's written it down\l"
	.string "where it counts.$"

ParcelFernwick_PairCorps_Text_4:
# 889 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: The river meeting's in the\n"
	.string "papers. Forty-one ratepayers and a\l"
	.string "Board that won't name a year.$"

ParcelFernwick_PairCorps_Text_5:
# 890 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: And a ranger who stood in\n"
	.string "the back and wrote it all down.$"

ParcelFernwick_PairCorps_Text_6:
# 891 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Writing it down isn't standing\n"
	.string "up.$"

ParcelFernwick_PairCorps_Text_7:
# 892 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: Ask the Board which one\n"
	.string "they're more afraid of.$"

ParcelFernwick_PairCorps_Text_8:
# 894 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: HALE took another provisional.\n"
	.string "From JOHTO, this one. No partner. No\l"
	.string "badges. Nothing.$"

ParcelFernwick_PairCorps_Text_9:
# 895 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: He takes them with nothing\n"
	.string "on purpose. Says you can see what they\l"
	.string "do with it.$"

ParcelFernwick_PairCorps_Text_10:
# 896 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: What do they do with it?$"

ParcelFernwick_PairCorps_Text_11:
# 897 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: Mostly leave. The ones that\n"
	.string "stay, you remember.$"

ParcelFernwick_PairPond_Text_0:
# 906 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: There's a SMEARGLE on the far\n"
	.string "bank. It paints the line where the water\l"
	.string "was.$"

ParcelFernwick_PairPond_Text_1:
# 907 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: I've seen it. It's not painting\n"
	.string "where the water was. It's painting\l"
	.string "where the water is.$"

ParcelFernwick_PairPond_Text_2:
# 908 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: That's the same line.$"

ParcelFernwick_PairPond_Text_3:
# 909 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This year it is. Watch it next\n"
	.string "year. That's the whole job, you know.\l"
	.string "Watching next year.$"

ParcelFernwick_PairPond_Text_4:
# 911 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: The ranger counted the pond.\n"
	.string "Twenty-eight pairs of WINGULL, they\l"
	.string "said, same as the old notebook.$"

ParcelFernwick_PairPond_Text_5:
# 912 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: Same number. Half the water.\n"
	.string "Work that out for your homework.$"

ParcelFernwick_PairPond_Text_6:
# 913 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: Fewer places to land, so they land\n"
	.string "closer together?$"

ParcelFernwick_PairPond_Text_7:
# 914 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: So the count looks fine. Good.\n"
	.string "You'll be a surveyor or a liar, and the\l"
	.string "difference is who you tell.$"

ParcelFernwick_PairPond_Text_8:
# 916 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: The pond came up to that\n"
	.string "stone when I was your age. Every spring.$"

ParcelFernwick_PairPond_Text_9:
# 917 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: Which stone?$"

ParcelFernwick_PairPond_Text_10:
# 918 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: That one. The dry one. You're\n"
	.string "standing on it.$"

ParcelFernwick_PairPond_Text_11:
# 919 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: It's a long way from the water.$"

ParcelFernwick_PairPond_Text_12:
# 920 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: It didn't move.$"

ParcelFernwick_Stringer_Text_0:
# 932 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: The hearing is on the front\n"
	.string "page. My piece above the fold, the\l"
	.string "Commissioner's reply below it. Nine\l"
	.string "years I've had that upside down.\p"
	.string "HALE still won't talk to me. He sent a\n"
	.string "note. It said: the record has a\l"
	.string "circulation now. Thank you. I've framed\l"
	.string "it. It's the only review I've had.$"

ParcelFernwick_Stringer_Text_1:
# 934 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: The Poisoned Waters piece ran.\n"
	.string "Page four. The Commissioner's reply ran\l"
	.string "page two. That's the ratio in this\l"
	.string "region: his two to my four.$"

ParcelFernwick_Stringer_Text_2:
# 936 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: Your sentence is in it, under\n"
	.string "your name. The editor wanted it cut. I\l"
	.string "said the ranger said it on the record,\l"
	.string "and the record is the one thing he can't\l"
	.string "cut. He didn't know what I meant. He will.$"

ParcelFernwick_Stringer_Text_3:
# 938 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: You're in it without your name,\n"
	.string "because you didn't give me one. 'A\l"
	.string "ranger read the manifest.' Passive\l"
	.string "voice. I hate it. It's what you left me.$"

ParcelFernwick_Stringer_Text_4:
# 941 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: The HQ. I'm not allowed in. HALE\n"
	.string "says the Corps doesn't talk to the\l"
	.string "press; it talks to the record.\p"
	.string "I told him the record doesn't have a\n"
	.string "circulation. He said that's its one\l"
	.string "advantage. I've been trying to think of\l"
	.string "an answer for six years.$"

ParcelFernwick_Gardener_Text_0:
# 953 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: Twelve paces. I've started\n"
	.string "watering the far bank. It won't bring it\l"
	.string "back. It's something to do with my\l"
	.string "hands.$"

ParcelFernwick_Gardener_Text_1:
# 956 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: Dry. Twelve paces from the\n"
	.string "water. I knew. I wanted somebody with a\l"
	.string "notebook to know too.\p"
	.string "Take this. I was going to give it to the\n"
	.string "pond.$"

ParcelFernwick_Gardener_Text_2:
# 960 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: South, set in the pavement. A\n"
	.string "dark stone. Dry, I expect.$"

ParcelFernwick_Gardener_Text_3:
# 963 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: The pond garden's mine to\n"
	.string "keep. The pond isn't anyone's to keep,\l"
	.string "it seems.\p"
	.string "There's a stone in the pavement south\n"
	.string "of here that the water came up to every\l"
	.string "spring when I was a girl. Find it and tell\l"
	.string "me if it's wet.$"

ParcelFernwick_HighWaterStone_Text_0:
# 972 "data/maps/ParcelFernwick/scripts.pory"
	.string "A dark stone set in the pavement, worn\n"
	.string "smooth on top. The high-water stone.\l"
	.string "The pond is twelve paces north of it\l"
	.string "and does not reach.\p"
	.string "It is dry. It has been dry long enough\n"
	.string "for the moss to give up on it.$"

ParcelFernwick_HighWaterStone_Text_1:
# 975 "data/maps/ParcelFernwick/scripts.pory"
	.string "A dark stone set in the pavement, dry,\n"
	.string "twelve paces from the water.$"

ParcelFernwick_FindJar_Text_0:
# 984 "data/maps/ParcelFernwick/scripts.pory"
	.string "A sample jar on the kerb, a third full,\n"
	.string "the water gone green against the glass.\l"
	.string "The label says POND, SOUTH BANK, and a\l"
	.string "date nine days old, and a name.\p"
	.string "Somebody has moved it an inch so the\n"
	.string "path stays clear, and no further.$"

ParcelFernwick_FindJar_Text_1:
# 987 "data/maps/ParcelFernwick/scripts.pory"
	.string "A sample jar on the kerb, nine days old\n"
	.string "now and counting. The label has started\l"
	.string "to curl.$"

ParcelFernwick_PairStation_Text_0:
# 995 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: The Director's letter says\n"
	.string "'independence review'. HALE says it\l"
	.string "means eight honest stations or twelve\l"
	.string "bought ones, and the Director has to\l"
	.string "choose in writing.$"

ParcelFernwick_PairStation_Text_1:
# 996 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: HALE's waited twenty years\n"
	.string "for someone to have to choose in\l"
	.string "writing.$"

ParcelFernwick_PairStation_Text_2:
# 997 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: What if the Director chooses\n"
	.string "twelve?$"

ParcelFernwick_PairStation_Text_3:
# 998 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: Then HALE will run eight\n"
	.string "anyway and the paper will say why.\l"
	.string "That's what the ranger changed. Not the\l"
	.string "choice. The saying why.$"

ParcelFernwick_PairStation_Text_4:
# 1000 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: The new one spoke at the\n"
	.string "river meeting, or stood at the back and\l"
	.string "wrote. Same thing, in this town.$"

ParcelFernwick_PairStation_Text_5:
# 1001 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: HALE read the minutes out at\n"
	.string "briefing. All of them. Took the whole\l"
	.string "hour.$"

ParcelFernwick_PairStation_Text_6:
# 1002 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: And?$"

ParcelFernwick_PairStation_Text_7:
# 1003 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: And then he said: that's what\n"
	.string "the job is. And sent us out. Nobody\l"
	.string "asked what he meant. We knew.$"

ParcelFernwick_PairStation_Text_8:
# 1005 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: Twelve stations, the poster\n"
	.string "says. We run eight.$"

ParcelFernwick_PairStation_Text_9:
# 1006 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: The poster's the\n"
	.string "FOUNDATION's. The eight are HALE's.\l"
	.string "Count the ones with a light on.$"

ParcelFernwick_PairStation_Text_10:
# 1007 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: Why does nobody fix the poster?$"

ParcelFernwick_PairStation_Text_11:
# 1008 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: Because the poster paid for\n"
	.string "two of the eight. You'll understand the\l"
	.string "arithmetic when you've been cold in a\l"
	.string "station the poster didn't build.$"

ParcelFernwick_Board1_Text_0:
# 1017 "data/maps/ParcelFernwick/scripts.pory"
	.string "A SURVEY BOARD outside the Corps HQ.\n"
	.string "FERNWICK. The Corps certifies rangers;\l"
	.string "the Survey certifies the ground. The\l"
	.string "board is the Survey's and says so.\p"
	.string "It lists what a provisional ranger\n"
	.string "should be able to count by the end of\l"
	.string "the forest season, in order: the pond,\l"
	.string "the seep, the canopy, the floor. The\l"
	.string "floor is last because it is hardest.$"

ParcelFernwick_Board2_Text_0:
# 1022 "data/maps/ParcelFernwick/scripts.pory"
	.string "A SURVEY BOARD by the pond. WINGULL\n"
	.string "pairs on the Fernwick pond: 28 in the\l"
	.string "first spring of the record, 28 in the\l"
	.string "tenth. The board gives the number with\l"
	.string "a warning under it.\p"
	.string "A count that holds is not always a\n"
	.string "habitat that holds. Sometimes it is a\l"
	.string "habitat that has stopped being able to\l"
	.string "lose anything else.$"
