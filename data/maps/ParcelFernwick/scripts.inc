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
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Ranger_2
# 107 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Ranger_5
ParcelFernwick_Ranger_4:
# 110 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Ranger_8
# 115 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_3, MSGBOX_DEFAULT
# 117 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Ranger_2:
# 103 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Ranger_5:
# 108 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwick_Ranger_4

ParcelFernwick_Ranger_8:
# 111 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Ranger_Text_2, MSGBOX_DEFAULT
# 112 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_OldMan::
# 122 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 123 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 124 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_OldMan_2
# 129 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_OldMan_5
# 134 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_OldMan_8
# 139 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_3, MSGBOX_DEFAULT
# 140 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_2:
# 125 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_5:
# 130 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_1, MSGBOX_DEFAULT
# 131 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_OldMan_8:
# 135 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_OldMan_Text_2, MSGBOX_DEFAULT
# 136 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Woman::
# 145 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 146 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Woman_2
# 152 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Woman_5
# 157 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Woman_8
# 162 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ParcelFernwick_Woman_11
# 165 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_4, MSGBOX_DEFAULT
ParcelFernwick_Woman_10:
# 167 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_2:
# 148 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_0, MSGBOX_DEFAULT
# 149 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_5:
# 153 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_1, MSGBOX_DEFAULT
# 154 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_8:
# 158 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_2, MSGBOX_DEFAULT
# 159 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Woman_11:
# 163 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Woman_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_Woman_10


ParcelFernwick_Boy::
# 172 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 173 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 174 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Boy_2
# 179 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Boy_5
# 184 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Boy_8
# 189 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_3, MSGBOX_DEFAULT
# 190 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_2:
# 175 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_0, MSGBOX_DEFAULT
# 176 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_5:
# 180 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_1, MSGBOX_DEFAULT
# 181 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Boy_8:
# 185 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Boy_Text_2, MSGBOX_DEFAULT
# 186 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Girl::
# 195 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 196 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 197 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Girl_2
# 202 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Girl_5
# 207 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Girl_8
# 212 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_3, MSGBOX_DEFAULT
# 213 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_2:
# 198 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_5:
# 203 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Girl_8:
# 208 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Girl_Text_2, MSGBOX_DEFAULT
# 209 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Fisher::
# 218 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 219 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 220 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Fisher_2
# 225 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Fisher_5
# 230 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Fisher_8
# 235 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_3, MSGBOX_DEFAULT
# 236 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_2:
# 221 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_0, MSGBOX_DEFAULT
# 222 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_5:
# 226 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_1, MSGBOX_DEFAULT
# 227 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Fisher_8:
# 231 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Fisher_Text_2, MSGBOX_DEFAULT
# 232 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Scientist::
# 241 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 242 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Scientist_3
ParcelFernwick_Scientist_1:
# 248 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR, ParcelFernwick_Scientist_10
ParcelFernwick_Scientist_9:
# 258 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_JAR_DONE, ParcelFernwick_Scientist_8
# 264 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Scientist_14
ParcelFernwick_Scientist_13:
# 267 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Scientist_21
# 272 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_6, MSGBOX_DEFAULT
# 274 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_2:
# 244 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_3:
# 243 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR_DONE, ParcelFernwick_Scientist_2
	goto ParcelFernwick_Scientist_1

ParcelFernwick_Scientist_7:
# 249 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR_FOUND, ParcelFernwick_Scientist_17
# 254 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_2, MSGBOX_DEFAULT
ParcelFernwick_Scientist_16:
# 256 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_8:
# 259 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_3, MSGBOX_DEFAULT
# 260 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_JAR
# 261 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Scientist_10:
# 248 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_JAR_DONE, ParcelFernwick_Scientist_7
	goto ParcelFernwick_Scientist_9

ParcelFernwick_Scientist_14:
# 265 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_4, MSGBOX_DEFAULT
	goto ParcelFernwick_Scientist_13

ParcelFernwick_Scientist_17:
# 250 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_1, MSGBOX_DEFAULT
# 251 "data/maps/ParcelFernwick/scripts.pory"
	giveitem ITEM_HYPER_POTION, 2
# 252 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_JAR_DONE
	goto ParcelFernwick_Scientist_16

ParcelFernwick_Scientist_21:
# 268 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Scientist_Text_5, MSGBOX_DEFAULT
# 269 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Gentleman::
# 279 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 280 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 281 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Gentleman_2
# 286 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Gentleman_5
# 291 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Gentleman_8
# 296 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_3, MSGBOX_DEFAULT
# 297 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_2:
# 282 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_0, MSGBOX_DEFAULT
# 283 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_5:
# 287 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_1, MSGBOX_DEFAULT
# 288 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gentleman_8:
# 292 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gentleman_Text_2, MSGBOX_DEFAULT
# 293 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Clerk::
# 302 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 303 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 304 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Clerk_2
# 309 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Clerk_5
# 314 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Clerk_8
# 319 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_3, MSGBOX_DEFAULT
# 320 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_2:
# 305 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_0, MSGBOX_DEFAULT
# 306 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_5:
# 310 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_1, MSGBOX_DEFAULT
# 311 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Clerk_8:
# 315 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Clerk_Text_2, MSGBOX_DEFAULT
# 316 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_Mother::
# 325 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 326 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 327 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Mother_2
# 332 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Mother_5
# 337 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_Mother_8
# 342 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_3, MSGBOX_DEFAULT
# 343 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_2:
# 328 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_0, MSGBOX_DEFAULT
# 329 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_5:
# 333 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_1, MSGBOX_DEFAULT
# 334 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Mother_8:
# 338 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Mother_Text_2, MSGBOX_DEFAULT
# 339 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_ItemSuperPotion::
# 348 "data/maps/ParcelFernwick/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFernwick_HallSign::
# 354 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HallSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_HQSign::
# 359 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HQSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_SurveySign::
# 364 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_SurveySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_FisherSign::
# 369 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FisherSign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_CitySign::
# 374 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_CitySign_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_T_Ella::
# 380 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_ELLA, ParcelFernwick_T_Ella_Text_0, ParcelFernwick_T_Ella_Text_1, ParcelFernwick_T_Ella_FirstWin
# 384 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 385 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Ella_3
ParcelFernwick_T_Ella_1:
# 388 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Ella_8
ParcelFernwick_T_Ella_6:
# 391 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Ella_13
ParcelFernwick_T_Ella_11:
# 394 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Ella_18
ParcelFernwick_T_Ella_16:
# 397 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Ella_2:
# 386 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_3:
# 385 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R2
	goto_if 0, ParcelFernwick_T_Ella_2
	goto ParcelFernwick_T_Ella_1

ParcelFernwick_T_Ella_7:
# 389 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R3
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_8:
# 388 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R3
	goto_if 0, ParcelFernwick_T_Ella_7
	goto ParcelFernwick_T_Ella_6

ParcelFernwick_T_Ella_12:
# 392 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R4
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_13:
# 391 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R4
	goto_if 0, ParcelFernwick_T_Ella_12
	goto ParcelFernwick_T_Ella_11

ParcelFernwick_T_Ella_17:
# 395 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Ella_R5
	goto ParcelFernwick_T_Ella_16

ParcelFernwick_T_Ella_18:
# 394 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_ELLA_R5
	goto_if 0, ParcelFernwick_T_Ella_17
	goto ParcelFernwick_T_Ella_16


ParcelFernwick_T_Ella_FirstWin::
# 401 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_Text_2, MSGBOX_DEFAULT
# 402 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R2::
# 406 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 407 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 408 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_0, MSGBOX_YESNO
# 409 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R2_2
# 414 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R2, ParcelFernwick_T_Ella_R2_Text_2
# 415 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_3, MSGBOX_DEFAULT
# 416 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R2_2:
# 410 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 411 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R3::
# 420 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 421 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 422 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_0, MSGBOX_YESNO
# 423 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R3_2
# 428 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R3, ParcelFernwick_T_Ella_R3_Text_1
# 429 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R3_Text_2, MSGBOX_DEFAULT
# 430 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R3_2:
# 424 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 425 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R4::
# 434 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 435 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 436 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_0, MSGBOX_YESNO
# 437 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R4_2
# 442 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R4, ParcelFernwick_T_Ella_R4_Text_1
# 443 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R4_Text_2, MSGBOX_DEFAULT
# 444 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R4_2:
# 438 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 439 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Ella_R5::
# 448 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 449 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 450 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_0, MSGBOX_YESNO
# 451 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Ella_R5_2
# 456 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_ELLA_R5, ParcelFernwick_T_Ella_R5_Text_1
# 457 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R5_Text_2, MSGBOX_DEFAULT
# 458 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Ella_R5_2:
# 452 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Ella_R2_Text_1, MSGBOX_DEFAULT
# 453 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik::
# 462 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_HENRIK, ParcelFernwick_T_Henrik_Text_0, ParcelFernwick_T_Henrik_Text_1, ParcelFernwick_T_Henrik_FirstWin
# 466 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 467 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Henrik_3
ParcelFernwick_T_Henrik_1:
# 470 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Henrik_8
ParcelFernwick_T_Henrik_6:
# 473 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Henrik_13
ParcelFernwick_T_Henrik_11:
# 476 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Henrik_18
ParcelFernwick_T_Henrik_16:
# 479 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Henrik_2:
# 468 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_3:
# 467 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R2
	goto_if 0, ParcelFernwick_T_Henrik_2
	goto ParcelFernwick_T_Henrik_1

ParcelFernwick_T_Henrik_7:
# 471 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R3
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_8:
# 470 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R3
	goto_if 0, ParcelFernwick_T_Henrik_7
	goto ParcelFernwick_T_Henrik_6

ParcelFernwick_T_Henrik_12:
# 474 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R4
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_13:
# 473 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R4
	goto_if 0, ParcelFernwick_T_Henrik_12
	goto ParcelFernwick_T_Henrik_11

ParcelFernwick_T_Henrik_17:
# 477 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Henrik_R5
	goto ParcelFernwick_T_Henrik_16

ParcelFernwick_T_Henrik_18:
# 476 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_HENRIK_R5
	goto_if 0, ParcelFernwick_T_Henrik_17
	goto ParcelFernwick_T_Henrik_16


ParcelFernwick_T_Henrik_FirstWin::
# 483 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_Text_2, MSGBOX_DEFAULT
# 484 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R2::
# 488 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 489 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 490 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_0, MSGBOX_YESNO
# 491 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R2_2
# 496 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R2, ParcelFernwick_T_Henrik_R2_Text_2
# 497 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_3, MSGBOX_DEFAULT
# 498 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R2_2:
# 492 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 493 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R3::
# 502 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 503 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 504 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_0, MSGBOX_YESNO
# 505 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R3_2
# 510 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R3, ParcelFernwick_T_Henrik_R3_Text_1
# 511 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R3_Text_2, MSGBOX_DEFAULT
# 512 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R3_2:
# 506 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 507 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R4::
# 516 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 517 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 518 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_0, MSGBOX_YESNO
# 519 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R4_2
# 524 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R4, ParcelFernwick_T_Henrik_R3_Text_1
# 525 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R4_Text_1, MSGBOX_DEFAULT
# 526 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R4_2:
# 520 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 521 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Henrik_R5::
# 530 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 531 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 532 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_0, MSGBOX_YESNO
# 533 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Henrik_R5_2
# 538 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_HENRIK_R5, ParcelFernwick_T_Henrik_R2_Text_2
# 539 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R5_Text_1, MSGBOX_DEFAULT
# 540 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Henrik_R5_2:
# 534 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Henrik_R2_Text_1, MSGBOX_DEFAULT
# 535 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar::
# 544 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_STEINAR, ParcelFernwick_T_Steinar_Text_0, ParcelFernwick_T_Steinar_Text_1, ParcelFernwick_T_Steinar_FirstWin
# 548 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 549 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Steinar_3
ParcelFernwick_T_Steinar_1:
# 552 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Steinar_8
ParcelFernwick_T_Steinar_6:
# 555 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Steinar_13
ParcelFernwick_T_Steinar_11:
# 558 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Steinar_18
ParcelFernwick_T_Steinar_16:
# 561 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Steinar_2:
# 550 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_3:
# 549 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R2
	goto_if 0, ParcelFernwick_T_Steinar_2
	goto ParcelFernwick_T_Steinar_1

ParcelFernwick_T_Steinar_7:
# 553 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R3
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_8:
# 552 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R3
	goto_if 0, ParcelFernwick_T_Steinar_7
	goto ParcelFernwick_T_Steinar_6

ParcelFernwick_T_Steinar_12:
# 556 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R4
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_13:
# 555 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R4
	goto_if 0, ParcelFernwick_T_Steinar_12
	goto ParcelFernwick_T_Steinar_11

ParcelFernwick_T_Steinar_17:
# 559 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Steinar_R5
	goto ParcelFernwick_T_Steinar_16

ParcelFernwick_T_Steinar_18:
# 558 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_STEINAR_R5
	goto_if 0, ParcelFernwick_T_Steinar_17
	goto ParcelFernwick_T_Steinar_16


ParcelFernwick_T_Steinar_FirstWin::
# 565 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_Text_2, MSGBOX_DEFAULT
# 566 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R2::
# 570 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 571 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 572 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_0, MSGBOX_YESNO
# 573 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R2_2
# 578 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R2, ParcelFernwick_T_Steinar_R2_Text_2
# 579 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_3, MSGBOX_DEFAULT
# 580 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R2_2:
# 574 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 575 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R3::
# 584 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 585 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 586 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_0, MSGBOX_YESNO
# 587 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R3_2
# 592 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R3, ParcelFernwick_T_Steinar_R3_Text_1
# 593 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R3_Text_2, MSGBOX_DEFAULT
# 594 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R3_2:
# 588 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 589 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R4::
# 598 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 599 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 600 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_0, MSGBOX_YESNO
# 601 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R4_2
# 606 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R4, ParcelFernwick_T_Steinar_R2_Text_2
# 607 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R4_Text_1, MSGBOX_DEFAULT
# 608 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R4_2:
# 602 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 603 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Steinar_R5::
# 612 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 613 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 614 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_0, MSGBOX_YESNO
# 615 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Steinar_R5_2
# 620 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_STEINAR_R5, ParcelFernwick_T_Steinar_R5_Text_1
# 621 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R5_Text_2, MSGBOX_DEFAULT
# 622 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Steinar_R5_2:
# 616 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Steinar_R2_Text_1, MSGBOX_DEFAULT
# 617 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte::
# 626 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_MARTE, ParcelFernwick_T_Marte_Text_0, ParcelFernwick_T_Marte_Text_1, ParcelFernwick_T_Marte_FirstWin
# 630 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 631 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Marte_3
ParcelFernwick_T_Marte_1:
# 634 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Marte_8
ParcelFernwick_T_Marte_6:
# 637 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Marte_13
ParcelFernwick_T_Marte_11:
# 640 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Marte_18
ParcelFernwick_T_Marte_16:
# 643 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Marte_2:
# 632 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_3:
# 631 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R2
	goto_if 0, ParcelFernwick_T_Marte_2
	goto ParcelFernwick_T_Marte_1

ParcelFernwick_T_Marte_7:
# 635 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R3
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_8:
# 634 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R3
	goto_if 0, ParcelFernwick_T_Marte_7
	goto ParcelFernwick_T_Marte_6

ParcelFernwick_T_Marte_12:
# 638 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R4
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_13:
# 637 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R4
	goto_if 0, ParcelFernwick_T_Marte_12
	goto ParcelFernwick_T_Marte_11

ParcelFernwick_T_Marte_17:
# 641 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Marte_R5
	goto ParcelFernwick_T_Marte_16

ParcelFernwick_T_Marte_18:
# 640 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_MARTE_R5
	goto_if 0, ParcelFernwick_T_Marte_17
	goto ParcelFernwick_T_Marte_16


ParcelFernwick_T_Marte_FirstWin::
# 647 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_Text_2, MSGBOX_DEFAULT
# 648 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R2::
# 652 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 653 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 654 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_0, MSGBOX_YESNO
# 655 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R2_2
# 660 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R2, ParcelFernwick_T_Marte_R2_Text_2
# 661 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_3, MSGBOX_DEFAULT
# 662 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R2_2:
# 656 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 657 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R3::
# 666 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 667 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 668 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_0, MSGBOX_YESNO
# 669 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R3_2
# 674 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R3, ParcelFernwick_T_Marte_R2_Text_2
# 675 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R3_Text_1, MSGBOX_DEFAULT
# 676 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R3_2:
# 670 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 671 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R4::
# 680 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 681 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 682 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_0, MSGBOX_YESNO
# 683 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R4_2
# 688 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R4, ParcelFernwick_T_Marte_R4_Text_1
# 689 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R4_Text_2, MSGBOX_DEFAULT
# 690 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R4_2:
# 684 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 685 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Marte_R5::
# 694 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 695 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 696 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_0, MSGBOX_YESNO
# 697 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Marte_R5_2
# 702 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_MARTE_R5, ParcelFernwick_T_Marte_R5_Text_1
# 703 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R5_Text_2, MSGBOX_DEFAULT
# 704 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Marte_R5_2:
# 698 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Marte_R2_Text_1, MSGBOX_DEFAULT
# 699 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon::
# 708 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_LEON, ParcelFernwick_T_Leon_Text_0, ParcelFernwick_T_Leon_Text_1, ParcelFernwick_T_Leon_FirstWin
# 712 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 713 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Leon_3
ParcelFernwick_T_Leon_1:
# 716 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Leon_8
ParcelFernwick_T_Leon_6:
# 719 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Leon_13
ParcelFernwick_T_Leon_11:
# 722 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Leon_18
ParcelFernwick_T_Leon_16:
# 725 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Leon_2:
# 714 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_3:
# 713 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R2
	goto_if 0, ParcelFernwick_T_Leon_2
	goto ParcelFernwick_T_Leon_1

ParcelFernwick_T_Leon_7:
# 717 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R3
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_8:
# 716 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R3
	goto_if 0, ParcelFernwick_T_Leon_7
	goto ParcelFernwick_T_Leon_6

ParcelFernwick_T_Leon_12:
# 720 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R4
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_13:
# 719 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R4
	goto_if 0, ParcelFernwick_T_Leon_12
	goto ParcelFernwick_T_Leon_11

ParcelFernwick_T_Leon_17:
# 723 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Leon_R5
	goto ParcelFernwick_T_Leon_16

ParcelFernwick_T_Leon_18:
# 722 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_LEON_R5
	goto_if 0, ParcelFernwick_T_Leon_17
	goto ParcelFernwick_T_Leon_16


ParcelFernwick_T_Leon_FirstWin::
# 729 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_Text_2, MSGBOX_DEFAULT
# 730 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R2::
# 734 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 735 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 736 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_0, MSGBOX_YESNO
# 737 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R2_2
# 742 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R2, ParcelFernwick_T_Leon_R2_Text_2
# 743 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_3, MSGBOX_DEFAULT
# 744 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R2_2:
# 738 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 739 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R3::
# 748 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 749 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 750 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_0, MSGBOX_YESNO
# 751 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R3_2
# 756 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R3, ParcelFernwick_T_Leon_R3_Text_1
# 757 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R3_Text_2, MSGBOX_DEFAULT
# 758 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R3_2:
# 752 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 753 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R4::
# 762 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 763 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 764 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_0, MSGBOX_YESNO
# 765 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R4_2
# 770 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R4, ParcelFernwick_T_Leon_R4_Text_1
# 771 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R4_Text_2, MSGBOX_DEFAULT
# 772 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R4_2:
# 766 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 767 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Leon_R5::
# 776 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 777 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 778 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_0, MSGBOX_YESNO
# 779 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Leon_R5_2
# 784 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_LEON_R5, ParcelFernwick_T_Leon_R2_Text_2
# 785 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R5_Text_1, MSGBOX_DEFAULT
# 786 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Leon_R5_2:
# 780 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Leon_R2_Text_1, MSGBOX_DEFAULT
# 781 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea::
# 790 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FW_THEA, ParcelFernwick_T_Thea_Text_0, ParcelFernwick_T_Thea_Text_1, ParcelFernwick_T_Thea_FirstWin
# 794 "data/maps/ParcelFernwick/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 795 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelFernwick_T_Thea_3
ParcelFernwick_T_Thea_1:
# 798 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelFernwick_T_Thea_8
ParcelFernwick_T_Thea_6:
# 801 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelFernwick_T_Thea_13
ParcelFernwick_T_Thea_11:
# 804 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelFernwick_T_Thea_18
ParcelFernwick_T_Thea_16:
# 807 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
	end

ParcelFernwick_T_Thea_2:
# 796 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_3:
# 795 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R2
	goto_if 0, ParcelFernwick_T_Thea_2
	goto ParcelFernwick_T_Thea_1

ParcelFernwick_T_Thea_7:
# 799 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R3
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_8:
# 798 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R3
	goto_if 0, ParcelFernwick_T_Thea_7
	goto ParcelFernwick_T_Thea_6

ParcelFernwick_T_Thea_12:
# 802 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R4
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_13:
# 801 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R4
	goto_if 0, ParcelFernwick_T_Thea_12
	goto ParcelFernwick_T_Thea_11

ParcelFernwick_T_Thea_17:
# 805 "data/maps/ParcelFernwick/scripts.pory"
	goto ParcelFernwick_T_Thea_R5
	goto ParcelFernwick_T_Thea_16

ParcelFernwick_T_Thea_18:
# 804 "data/maps/ParcelFernwick/scripts.pory"
	checktrainerflag TRAINER_SKALD_FW_THEA_R5
	goto_if 0, ParcelFernwick_T_Thea_17
	goto ParcelFernwick_T_Thea_16


ParcelFernwick_T_Thea_FirstWin::
# 811 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_Text_2, MSGBOX_DEFAULT
# 812 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R2::
# 816 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 817 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 818 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_0, MSGBOX_YESNO
# 819 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R2_2
# 824 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R2, ParcelFernwick_T_Thea_R2_Text_2
# 825 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_3, MSGBOX_DEFAULT
# 826 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R2_2:
# 820 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 821 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R3::
# 830 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 831 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 832 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_0, MSGBOX_YESNO
# 833 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R3_2
# 838 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R3, ParcelFernwick_T_Thea_R3_Text_1
# 839 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R3_Text_2, MSGBOX_DEFAULT
# 840 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R3_2:
# 834 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 835 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R4::
# 844 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 845 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 846 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_0, MSGBOX_YESNO
# 847 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R4_2
# 852 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R4, ParcelFernwick_T_Thea_R3_Text_1
# 853 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R4_Text_1, MSGBOX_DEFAULT
# 854 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R4_2:
# 848 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 849 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_T_Thea_R5::
# 858 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 859 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 860 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_0, MSGBOX_YESNO
# 861 "data/maps/ParcelFernwick/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelFernwick_T_Thea_R5_2
# 866 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_FW_THEA_R5, ParcelFernwick_T_Thea_R5_Text_1
# 867 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R5_Text_2, MSGBOX_DEFAULT
# 868 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_T_Thea_R5_2:
# 862 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_T_Thea_R2_Text_1, MSGBOX_DEFAULT
# 863 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


ParcelFernwick_PondLook::
# 874 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 875 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_GRETTIR, ParcelFernwick_PondLook_3
ParcelFernwick_PondLook_1:
# 881 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_1, MSGBOX_SIGN
# 882 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_2:
# 876 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondLook_Text_0, MSGBOX_SIGN
# 877 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_GRETTIR_SEEN
# 878 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PondLook_3:
# 875 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_GRETTIR_SEEN, ParcelFernwick_PondLook_2
	goto ParcelFernwick_PondLook_1


ParcelFernwick_PerrinScene::
# 888 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_2
# 892 "data/maps/ParcelFernwick/scripts.pory"
	lockall
# 893 "data/maps/ParcelFernwick/scripts.pory"
	playse SE_PIN
# 894 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_0, MSGBOX_DEFAULT
# 895 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 896 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinIn
# 897 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 898 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_1, MSGBOX_DEFAULT
# 899 "data/maps/ParcelFernwick/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_1, ParcelFernwick_PerrinScene_Text_2
# 900 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinScene_Text_3, MSGBOX_DEFAULT
# 901 "data/maps/ParcelFernwick/scripts.pory"
	closemessage
# 902 "data/maps/ParcelFernwick/scripts.pory"
	applymovement 21, Movement_ParcelFernwick_PerrinOut
# 903 "data/maps/ParcelFernwick/scripts.pory"
	waitmovement 0
# 904 "data/maps/ParcelFernwick/scripts.pory"
	removeobject 21
# 905 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_PERRIN_1
# 906 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
# 907 "data/maps/ParcelFernwick/scripts.pory"
	releaseall
	end

ParcelFernwick_PerrinScene_2:
# 889 "data/maps/ParcelFernwick/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelFernwick_PerrinTalk::
# 911 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 912 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 913 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 914 "data/maps/ParcelFernwick/scripts.pory"
	release
	end


# 917 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinIn:
# 917 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
# 917 "data/maps/ParcelFernwick/scripts.pory"
	walk_down
	step_end

# 918 "data/maps/ParcelFernwick/scripts.pory"
Movement_ParcelFernwick_PerrinOut:
# 918 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
# 918 "data/maps/ParcelFernwick/scripts.pory"
	walk_up
	step_end

ParcelFernwick_PondPage::
# 921 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_PAGE, ParcelFernwick_PondPage_2
# 924 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PondPage_Text_0, MSGBOX_SIGN
# 925 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_PAGE_FOUND
	end

ParcelFernwick_PondPage_2:
	end


ParcelFernwick_PairCorps::
# 932 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 933 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_PairCorps_2
# 938 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_PairCorps_3
# 944 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_8, MSGBOX_DEFAULT
# 945 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_9, MSGBOX_DEFAULT
# 946 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_10, MSGBOX_DEFAULT
# 947 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_11, MSGBOX_DEFAULT
ParcelFernwick_PairCorps_1:
# 949 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PairCorps_2:
# 934 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_0, MSGBOX_DEFAULT
# 935 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_1, MSGBOX_DEFAULT
# 936 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_2, MSGBOX_DEFAULT
# 937 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_PairCorps_1

ParcelFernwick_PairCorps_3:
# 939 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_4, MSGBOX_DEFAULT
# 940 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_5, MSGBOX_DEFAULT
# 941 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_6, MSGBOX_DEFAULT
# 942 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairCorps_Text_7, MSGBOX_DEFAULT
	goto ParcelFernwick_PairCorps_1


ParcelFernwick_PairPond::
# 954 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 955 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_PairPond_2
# 960 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_PairPond_3
# 966 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_8, MSGBOX_DEFAULT
# 967 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_9, MSGBOX_DEFAULT
# 968 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_10, MSGBOX_DEFAULT
# 969 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_11, MSGBOX_DEFAULT
# 970 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_12, MSGBOX_DEFAULT
ParcelFernwick_PairPond_1:
# 972 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PairPond_2:
# 956 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_0, MSGBOX_DEFAULT
# 957 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_1, MSGBOX_DEFAULT
# 958 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_2, MSGBOX_DEFAULT
# 959 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_PairPond_1

ParcelFernwick_PairPond_3:
# 961 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_4, MSGBOX_DEFAULT
# 962 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_5, MSGBOX_DEFAULT
# 963 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_6, MSGBOX_DEFAULT
# 964 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairPond_Text_7, MSGBOX_DEFAULT
	goto ParcelFernwick_PairPond_1


ParcelFernwick_Stringer::
# 979 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 980 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 981 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_Stringer_2
# 983 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFernwick_Stringer_3
# 991 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_4, MSGBOX_DEFAULT
ParcelFernwick_Stringer_1:
# 993 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Stringer_2:
# 982 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelFernwick_Stringer_1

ParcelFernwick_Stringer_3:
# 984 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_1, MSGBOX_DEFAULT
# 985 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_CH_QUOTE, ParcelFernwick_Stringer_7
# 988 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_Stringer_1

ParcelFernwick_Stringer_7:
# 986 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Stringer_Text_2, MSGBOX_DEFAULT
	goto ParcelFernwick_Stringer_1


ParcelFernwick_Gardener::
# 1000 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 1001 "data/maps/ParcelFernwick/scripts.pory"
	faceplayer
# 1002 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelFernwick_Gardener_3
ParcelFernwick_Gardener_1:
# 1007 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE_DONE, ParcelFernwick_Gardener_7
# 1009 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE, ParcelFernwick_Gardener_8
# 1018 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_4, MSGBOX_DEFAULT
# 1019 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_STONE
ParcelFernwick_Gardener_6:
# 1021 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gardener_2:
# 1003 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_0, MSGBOX_DEFAULT
# 1004 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_Gardener_3:
# 1002 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE_DONE, ParcelFernwick_Gardener_2
	goto ParcelFernwick_Gardener_1

ParcelFernwick_Gardener_7:
# 1008 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_1, MSGBOX_DEFAULT
	goto ParcelFernwick_Gardener_6

ParcelFernwick_Gardener_8:
# 1010 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE_FOUND, ParcelFernwick_Gardener_12
# 1015 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_Gardener_6

ParcelFernwick_Gardener_12:
# 1011 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Gardener_Text_2, MSGBOX_DEFAULT
# 1012 "data/maps/ParcelFernwick/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 1013 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_STONE_DONE
	goto ParcelFernwick_Gardener_6


ParcelFernwick_HighWaterStone::
# 1026 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STONE, ParcelFernwick_HighWaterStone_4
ParcelFernwick_HighWaterStone_3:
# 1030 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HighWaterStone_Text_1, MSGBOX_SIGN
ParcelFernwick_HighWaterStone_1:
	end

ParcelFernwick_HighWaterStone_2:
# 1027 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_HighWaterStone_Text_0, MSGBOX_SIGN
# 1028 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_STONE_FOUND
	goto ParcelFernwick_HighWaterStone_1

ParcelFernwick_HighWaterStone_4:
# 1026 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_STONE_FOUND, ParcelFernwick_HighWaterStone_2
	goto ParcelFernwick_HighWaterStone_3


ParcelFernwick_FindJar::
# 1038 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALD_Q_JAR, ParcelFernwick_FindJar_4
ParcelFernwick_FindJar_3:
# 1042 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FindJar_Text_1, MSGBOX_SIGN
ParcelFernwick_FindJar_1:
	end

ParcelFernwick_FindJar_2:
# 1039 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_FindJar_Text_0, MSGBOX_SIGN
# 1040 "data/maps/ParcelFernwick/scripts.pory"
	setflag FLAG_SKALD_Q_JAR_FOUND
	goto ParcelFernwick_FindJar_1

ParcelFernwick_FindJar_4:
# 1038 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_JAR_FOUND, ParcelFernwick_FindJar_2
	goto ParcelFernwick_FindJar_3


ParcelFernwick_PairStation::
# 1048 "data/maps/ParcelFernwick/scripts.pory"
	lock
# 1049 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelFernwick_PairStation_2
# 1054 "data/maps/ParcelFernwick/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelFernwick_PairStation_3
# 1060 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_8, MSGBOX_DEFAULT
# 1061 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_9, MSGBOX_DEFAULT
# 1062 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_10, MSGBOX_DEFAULT
# 1063 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_11, MSGBOX_DEFAULT
ParcelFernwick_PairStation_1:
# 1065 "data/maps/ParcelFernwick/scripts.pory"
	release
	end

ParcelFernwick_PairStation_2:
# 1050 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_0, MSGBOX_DEFAULT
# 1051 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_1, MSGBOX_DEFAULT
# 1052 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_2, MSGBOX_DEFAULT
# 1053 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_3, MSGBOX_DEFAULT
	goto ParcelFernwick_PairStation_1

ParcelFernwick_PairStation_3:
# 1055 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_4, MSGBOX_DEFAULT
# 1056 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_5, MSGBOX_DEFAULT
# 1057 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_6, MSGBOX_DEFAULT
# 1058 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_PairStation_Text_7, MSGBOX_DEFAULT
	goto ParcelFernwick_PairStation_1


ParcelFernwick_Board1::
# 1072 "data/maps/ParcelFernwick/scripts.pory"
	msgbox ParcelFernwick_Board1_Text_0, MSGBOX_SIGN
	end


ParcelFernwick_Board2::
# 1077 "data/maps/ParcelFernwick/scripts.pory"
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
	.string "RANGER: Station's back to shifts. The\n"
	.string "witness list is in a drawer, and HALE's\l"
	.string "name is first on it, the way his name is\l"
	.string "first on most things here.$"

ParcelFernwick_Ranger_Text_1:
# 108 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: Half the station's been called\n"
	.string "to the hearings as witnesses. The other\l"
	.string "half is covering their shifts.\p"
	.string "HALE's doing both.$"

ParcelFernwick_Ranger_Text_2:
# 111 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: HALE's inside. He's got the\n"
	.string "river minutes open on the desk and he's\l"
	.string "read them four times.\p"
	.string "He keeps saying 'six people stood up.'\n"
	.string "Like he can't believe a room would do\l"
	.string "that.$"

ParcelFernwick_Ranger_Text_3:
# 115 "data/maps/ParcelFernwick/scripts.pory"
	.string "RANGER: District Station. HALE's inside,\n"
	.string "if you're the one he keeps mentioning.\p"
	.string "He mentions you a lot, for a man who\n"
	.string "doesn't talk.$"

ParcelFernwick_OldMan_Text_0:
# 125 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: A fishing village in a hearing\n"
	.string "transcript, and now a fishing village\l"
	.string "with a Survey stake outside the Hall.\p"
	.string "We've been a lot of things. We're still\n"
	.string "fishing.$"

ParcelFernwick_OldMan_Text_1:
# 130 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: A fishing village before the\n"
	.string "station, a fishing village with\l"
	.string "paperwork after, and now a fishing\l"
	.string "village in a hearing transcript. I read\l"
	.string "my own name in it. Page forty. I said\l"
	.string "'the water's low'. I did say that.$"

ParcelFernwick_OldMan_Text_2:
# 135 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: They say the river village had\n"
	.string "a meeting where six people spoke and\l"
	.string "nobody shouted. Six! In this town we\l"
	.string "can't get two to agree on the tide.\p"
	.string "Paperwork did that. Yours, I'm told.$"

ParcelFernwick_OldMan_Text_3:
# 139 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This was a fishing village\n"
	.string "before the Corps put the station here.\p"
	.string "Now it's a fishing village with\n"
	.string "paperwork.$"

ParcelFernwick_Woman_Text_0:
# 148 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN smiled again. Twice in a\n"
	.string "year. The cadets think the regulation's\l"
	.string "been repealed.\p"
	.string "I think he's just older, and tired of\n"
	.string "holding it in.$"

ParcelFernwick_Woman_Text_1:
# 153 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN smiled. I saw it. Tidewater\n"
	.string "regulation or not, he smiled when they\l"
	.string "read your name on the wireless. Half a\l"
	.string "second. Don't tell him I told you.$"

ParcelFernwick_Woman_Text_2:
# 158 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: TARN read the river minutes\n"
	.string "aloud in the Hall. To the cadets. The\l"
	.string "whole thing, in that voice.\p"
	.string "One of them cried. He said that was the\n"
	.string "correct response and carried on.$"

ParcelFernwick_Woman_Text_3:
# 163 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: You passed TARN's exam? He\n"
	.string "didn't smile, did he. He never smiles. I\l"
	.string "think it's a Tidewater regulation.$"

ParcelFernwick_Woman_Text_4:
# 165 "data/maps/ParcelFernwick/scripts.pory"
	.string "WOMAN: The Certification Hall's right\n"
	.string "there. TARN runs the exams.\p"
	.string "He's not as scary as the sign makes him\n"
	.string "look. He's scarier.$"

ParcelFernwick_Boy_Text_0:
# 175 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I asked HALE how you become a\n"
	.string "RANGER. He said: start counting. So I\l"
	.string "count the pond.\p"
	.string "Twenty-eight WINGULL. GRETTIR checks\n"
	.string "my adding.$"

ParcelFernwick_Boy_Text_1:
# 180 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER! Not a\n"
	.string "MEREHOLT guy. Their boots are still the\l"
	.string "best. But the RANGER's name was on the\l"
	.string "radio.$"

ParcelFernwick_Boy_Text_2:
# 185 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: The MEREHOLT guy came through\n"
	.string "with new boots and nobody asked where\l"
	.string "he got them.\p"
	.string "I'm gonna be a RANGER. Just a RANGER.\n"
	.string "You can get wet in any boots.$"

ParcelFernwick_Boy_Text_3:
# 189 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: I'm gonna be a RANGER when I grow\n"
	.string "up! Or a fisherman.\p"
	.string "Or a MEREHOLT guy. They have the best\n"
	.string "boots.$"

ParcelFernwick_Girl_Text_0:
# 198 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: GRETTIR's POLIWAG came back up\n"
	.string "the channel. It brought a friend. Two.\p"
	.string "GRETTIR says two is not a population. I\n"
	.string "said two is two more than ducks.$"

ParcelFernwick_Girl_Text_1:
# 203 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond's still ducks. WINGULL.\n"
	.string "But GRETTIR says a POLIWAG came up the\l"
	.string "channel. One. He's watching for it. I'm\l"
	.string "watching GRETTIR.$"

ParcelFernwick_Girl_Text_2:
# 208 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: A man from the river said the\n"
	.string "water there has names on it now. Like,\l"
	.string "who gets how much.\p"
	.string "Can we put names on our pond? I'd put\n"
	.string "POLIWAG. They'd have to come back if\l"
	.string "their name was on it.$"

ParcelFernwick_Girl_Text_3:
# 212 "data/maps/ParcelFernwick/scripts.pory"
	.string "GIRL: The pond used to have POLIWAG in\n"
	.string "it! Now it just has ducks.\p"
	.string "Well. WINGULL. Same thing.$"

ParcelFernwick_Fisher_Text_0:
# 221 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Water's up a hand. One hand. I\n"
	.string "rowed to the stake I used to walk to.\p"
	.string "I'm not calling it better. I'm calling it a\n"
	.string "hand.$"

ParcelFernwick_Fisher_Text_1:
# 226 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Marsh water's still low. Your\n"
	.string "paper didn't raise it. It put a number on\l"
	.string "the discharge upstream, and a man with\l"
	.string "a jar. I'll row where I can and walk where\l"
	.string "I can't. Same as before. Less angry.$"

ParcelFernwick_Fisher_Text_2:
# 231 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: Water's still low. But the\n"
	.string "dredge crew got told to hold at the\l"
	.string "landing, and nobody told them why.\p"
	.string "I know why. Everybody who reads knows\n"
	.string "why. You wrote it.$"

ParcelFernwick_Fisher_Text_3:
# 235 "data/maps/ParcelFernwick/scripts.pory"
	.string "FISHER: The marsh water's been low\n"
	.string "since spring. You can walk to places you\l"
	.string "used to row to.\p"
	.string "That's not good, whatever the Council\n"
	.string "says.$"

ParcelFernwick_Scientist_Text_0:
# 244 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: The pond jar's in the Survey\n"
	.string "archive now, labelled, dated, eleven\l"
	.string "days in the sun and still a reading.\p"
	.string "The curator was unkind about the label.\n"
	.string "Correctly.$"

ParcelFernwick_Scientist_Text_1:
# 250 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: Nine days. Nine days a jar\n"
	.string "of the pond sat in the sun with my name\l"
	.string "on it and nobody kicked it over. This\l"
	.string "town respects a label more than it\l"
	.string "respects the pond.\p"
	.string "Take these. I'm going to go and fill a\n"
	.string "new one.$"

ParcelFernwick_Scientist_Text_2:
# 254 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: A jar on the kerb, south\n"
	.string "path. Labelled POND, with a date.$"

ParcelFernwick_Scientist_Text_3:
# 259 "data/maps/ParcelFernwick/scripts.pory"
	.string "SCIENTIST: I left a sample jar on the\n"
	.string "kerb by the south path last week. Pond\l"
	.string "water. Labelled. I meant to come back\l"
	.string "with the kit and I came back with\l"
	.string "excuses.\p"
	.string "If it's still there, read me the label. I\n"
	.string "want to know if the date on it shames\l"
	.string "me.$"

ParcelFernwick_Scientist_Text_4:
# 265 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring and\n"
	.string "nobody cared. Now the lawyers want the\l"
	.string "numbers by Thursday.\p"
	.string "We don't have a Thursday setting.$"

ParcelFernwick_Scientist_Text_5:
# 268 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: Forty years of measuring,\n"
	.string "and this is the first autumn anyone's\l"
	.string "asked for the numbers before the\l"
	.string "argument instead of after.\p"
	.string "ILEX says it's you. I say it's the\n"
	.string "numbers. We're both right, which she\l"
	.string "hates.$"

ParcelFernwick_Scientist_Text_6:
# 272 "data/maps/ParcelFernwick/scripts.pory"
	.string "SURVEYOR: We measure. That's all we do.\n"
	.string "Forty years of measuring.\p"
	.string "ILEX is inside. She'll tell you it's\n"
	.string "boring. She's lying.$"

ParcelFernwick_Gentleman_Text_0:
# 282 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: The plaques are still up.\n"
	.string "The fountain still runs. Someone has\l"
	.string "put a small Survey stake in the\l"
	.string "flowerbed beside it, with a very small\l"
	.string "red cloth.\p"
	.string "I did not do it. I approve.$"

ParcelFernwick_Gentleman_Text_1:
# 287 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It still says so. The hearing\l"
	.string "didn't take the plaques down. I'd have\l"
	.string "liked it to. Then I thought: let them\l"
	.string "stay. They say exactly what they say.$"

ParcelFernwick_Gentleman_Text_2:
# 292 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: The plate on the fountain\n"
	.string "has been polished. Twice this month.\l"
	.string "Somebody up the coast is nervous about\l"
	.string "plates.\p"
	.string "I find I read the small ones more\n"
	.string "carefully than I used to.$"

ParcelFernwick_Gentleman_Text_3:
# 296 "data/maps/ParcelFernwick/scripts.pory"
	.string "GENTLEMAN: MEREHOLT paid for the\n"
	.string "fountain. It says so on the fountain.\p"
	.string "It says so on most things around here,\n"
	.string "if you read the small plates.$"

ParcelFernwick_Clerk_Text_0:
# 305 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Marsh works day rate's steady.\n"
	.string "The work's got a name now: remediation.\l"
	.string "Same men, same boots, different word.\p"
	.string "The word pays the same. The men say it's\n"
	.string "better work.$"

ParcelFernwick_Clerk_Text_1:
# 310 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "down. Nobody asks what the work is now\l"
	.string "either. The deal's the same. The pay's\l"
	.string "not. Funny how the deal's the bit\l"
	.string "nobody renegotiates.$"

ParcelFernwick_Clerk_Text_2:
# 315 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate's down. First time in\n"
	.string "three years. Half the marsh crew's been\l"
	.string "stood down 'pending review.'\p"
	.string "Pending your review, is what they mean.\n"
	.string "Nobody's said it to my face. They say it\l"
	.string "to the fountain.$"

ParcelFernwick_Clerk_Text_3:
# 319 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Day rate at the marsh works is\n"
	.string "up again. Don't ask what the work is.\p"
	.string "Nobody asks. That's the deal.$"

ParcelFernwick_Mother_Text_0:
# 328 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy counts the pond before\n"
	.string "school. He's seven. He has a notebook.\p"
	.string "I've stopped telling him RANGERS don't\n"
	.string "get paid. I started making him a lunch\l"
	.string "for the walk.$"

ParcelFernwick_Mother_Text_1:
# 333 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy still wants to be a\n"
	.string "RANGER. I've stopped saying RANGERS\l"
	.string "don't get paid. They don't. But somebody\l"
	.string "read one out at a hearing and the whole\l"
	.string "town went quiet.$"

ParcelFernwick_Mother_Text_2:
# 338 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy's stopped saying the\n"
	.string "MEREHOLT part. He heard the men at the\l"
	.string "fountain talking about the river\l"
	.string "meeting.\p"
	.string "He asked me what an allocation was. I\n"
	.string "had to ask the clerk.$"

ParcelFernwick_Mother_Text_3:
# 342 "data/maps/ParcelFernwick/scripts.pory"
	.string "MOTHER: My boy wants to be a RANGER. I\n"
	.string "told him RANGERS don't get paid.\p"
	.string "He said that's fine, he'll be a MEREHOLT\n"
	.string "guy on weekends.$"

ParcelFernwick_HallSign_Text_0:
# 354 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "CERTIFICATION HALL\p"
	.string "Forest Certification: practical\n"
	.string "examination.\n"
	.string "Examiner: TARN, Tidewater Division.$"

ParcelFernwick_HQSign_Text_0:
# 359 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE CLIMATE CORPS\n"
	.string "DISTRICT STATION\p"
	.string "Rangers, provisionals and the public:\n"
	.string "front desk.$"

ParcelFernwick_SurveySign_Text_0:
# 364 "data/maps/ParcelFernwick/scripts.pory"
	.string "SKALDMERE SURVEY\n"
	.string "District office\p"
	.string "Long-baseline monitoring. Soil cores,\n"
	.string "water logs, repeat photography.\p"
	.string "We do not issue press releases.$"

ParcelFernwick_FisherSign_Text_0:
# 369 "data/maps/ParcelFernwick/scripts.pory"
	.string "GRETTIR'S\n"
	.string "Rods. Bait. Marsh advice.\p"
	.string "The advice is free and you won't take\n"
	.string "it.$"

ParcelFernwick_CitySign_Text_0:
# 374 "data/maps/ParcelFernwick/scripts.pory"
	.string "FERNWICK\n"
	.string "District seat, Saltmarsh Coast\p"
	.string "A smaller plate: PROMENADE AND\n"
	.string "FOUNTAIN BY THE MEREHOLT FOUNDATION.$"

ParcelFernwick_T_Ella_Text_0:
# 381 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The park pond's new. Nothing lives\n"
	.string "in it yet. The CORPS says give it a year.\l"
	.string "Battle?$"

ParcelFernwick_T_Ella_Text_1:
# 382 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: A year, they said.$"

ParcelFernwick_T_Ella_Text_2:
# 397 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: TARN failed my brother twice. He's\n"
	.string "at the HALL every day anyway. That's\l"
	.string "FERNWICK.$"

ParcelFernwick_T_Ella_R2_Text_0:
# 408 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Ella_R2_Text_1:
# 410 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Another time, then.$"

ParcelFernwick_T_Ella_R2_Text_2:
# 414 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Still yours.$"

ParcelFernwick_T_Ella_R2_Text_3:
# 415 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Ella_R3_Text_0:
# 422 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Ella_R3_Text_1:
# 428 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Fair.$"

ParcelFernwick_T_Ella_R3_Text_2:
# 429 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Ella_R4_Text_0:
# 436 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: I've watched you walk past twice.\n"
	.string "Not a third time. Battle?$"

ParcelFernwick_T_Ella_R4_Text_1:
# 442 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: …Again, then. Later.$"

ParcelFernwick_T_Ella_R4_Text_2:
# 443 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Ella_R5_Text_0:
# 450 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Ella_R5_Text_1:
# 456 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: Noted. Properly, this time.$"

ParcelFernwick_T_Ella_R5_Text_2:
# 457 "data/maps/ParcelFernwick/scripts.pory"
	.string "ELLA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Henrik_Text_0:
# 463 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: The district station sends\n"
	.string "provisionals north and gets reports\l"
	.string "back. Never the provisionals. Battle!$"

ParcelFernwick_T_Henrik_Text_1:
# 464 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Some come back, then.$"

ParcelFernwick_T_Henrik_Text_2:
# 479 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: ILEX files everything at the\n"
	.string "survey office. Everything. I asked her\l"
	.string "what for. She said 'later'.$"

ParcelFernwick_T_Henrik_R2_Text_0:
# 490 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Henrik_R2_Text_1:
# 492 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: No hurry. The water keeps.$"

ParcelFernwick_T_Henrik_R2_Text_2:
# 496 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: That's the one I wanted to see.$"

ParcelFernwick_T_Henrik_R2_Text_3:
# 497 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Henrik_R3_Text_0:
# 504 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Henrik_R3_Text_1:
# 510 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Still yours.$"

ParcelFernwick_T_Henrik_R3_Text_2:
# 511 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Henrik_R4_Text_0:
# 518 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelFernwick_T_Henrik_R4_Text_1:
# 525 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelFernwick_T_Henrik_R5_Text_0:
# 532 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelFernwick_T_Henrik_R5_Text_1:
# 539 "data/maps/ParcelFernwick/scripts.pory"
	.string "HENRIK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelFernwick_T_Steinar_Text_0:
# 545 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Down from the marsh road. The\n"
	.string "plaza's the only flat ground in forty\l"
	.string "miles. Battle for it.$"

ParcelFernwick_T_Steinar_Text_1:
# 546 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Share the flat ground, then.$"

ParcelFernwick_T_Steinar_Text_2:
# 561 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: The north checkpoint's\n"
	.string "WARD's. He doesn't bend. The marsh is\l"
	.string "past him and the marsh is worse than he\l"
	.string "is.$"

ParcelFernwick_T_Steinar_R2_Text_0:
# 572 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Steinar_R2_Text_1:
# 574 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Steinar_R2_Text_2:
# 578 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Noted. Properly, this time.$"

ParcelFernwick_T_Steinar_R2_Text_3:
# 579 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelFernwick_T_Steinar_R3_Text_0:
# 586 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelFernwick_T_Steinar_R3_Text_1:
# 592 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Fair.$"

ParcelFernwick_T_Steinar_R3_Text_2:
# 593 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Steinar_R4_Text_0:
# 600 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelFernwick_T_Steinar_R4_Text_1:
# 607 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Steinar_R5_Text_0:
# 614 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Steinar_R5_Text_1:
# 620 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: …Again, then. Later.$"

ParcelFernwick_T_Steinar_R5_Text_2:
# 621 "data/maps/ParcelFernwick/scripts.pory"
	.string "STEINAR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Marte_Text_0:
# 627 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: South square's where the\n"
	.string "MISTWOOD road comes in. Everyone comes\l"
	.string "in tired. Easy battles.$"

ParcelFernwick_T_Marte_Text_1:
# 628 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Not that tired, then.$"

ParcelFernwick_T_Marte_Text_2:
# 643 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: The CENTER's free for\n"
	.string "provisionals. The MART isn't. The CORPS\l"
	.string "pays for healing, not REPELS. Funny\l"
	.string "priorities.$"

ParcelFernwick_T_Marte_R2_Text_0:
# 654 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelFernwick_T_Marte_R2_Text_1:
# 656 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Fine. Same spot.$"

ParcelFernwick_T_Marte_R2_Text_2:
# 660 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: …Fair.$"

ParcelFernwick_T_Marte_R2_Text_3:
# 661 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelFernwick_T_Marte_R3_Text_0:
# 668 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelFernwick_T_Marte_R3_Text_1:
# 675 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Marte_R4_Text_0:
# 682 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Full strength, no excuses, mine\n"
	.string "or yours. Rematch?$"

ParcelFernwick_T_Marte_R4_Text_1:
# 688 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: Right. That's the whole of it.$"

ParcelFernwick_T_Marte_R4_Text_2:
# 689 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelFernwick_T_Marte_R5_Text_0:
# 696 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelFernwick_T_Marte_R5_Text_1:
# 702 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's the one I wanted to see.$"

ParcelFernwick_T_Marte_R5_Text_2:
# 703 "data/maps/ParcelFernwick/scripts.pory"
	.string "MARTE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelFernwick_T_Leon_Text_0:
# 709 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The square's the only place in\n"
	.string "FERNWICK with grass worth a bug.\l"
	.string "Battle!$"

ParcelFernwick_T_Leon_Text_1:
# 710 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Worth a bug. Not a battle.$"

ParcelFernwick_T_Leon_Text_2:
# 725 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: WURMPLE in the park, none by the\n"
	.string "station. The station's all pavement.\l"
	.string "Pavement's the point, my dad says.$"

ParcelFernwick_T_Leon_R2_Text_0:
# 736 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Leon_R2_Text_1:
# 738 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelFernwick_T_Leon_R2_Text_2:
# 742 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: …Again, then. Later.$"

ParcelFernwick_T_Leon_R2_Text_3:
# 743 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Leon_R3_Text_0:
# 750 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelFernwick_T_Leon_R3_Text_1:
# 756 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Right. That's the whole of it.$"

ParcelFernwick_T_Leon_R3_Text_2:
# 757 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelFernwick_T_Leon_R4_Text_0:
# 764 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelFernwick_T_Leon_R4_Text_1:
# 770 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Noted. Properly, this time.$"

ParcelFernwick_T_Leon_R4_Text_2:
# 771 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Leon_R5_Text_0:
# 778 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelFernwick_T_Leon_R5_Text_1:
# 785 "data/maps/ParcelFernwick/scripts.pory"
	.string "LEON: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_T_Thea_Text_0:
# 791 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Cadet THEA, station duty. HALE\n"
	.string "says spar every provisional who\l"
	.string "crosses the plaza. You crossed it.$"

ParcelFernwick_T_Thea_Text_1:
# 792 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: HALE will want the score.$"

ParcelFernwick_T_Thea_Text_2:
# 807 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Every cadet wants the Reedmere\n"
	.string "posting. The marsh is where things\l"
	.string "happen. Things aren't good, but they\l"
	.string "happen.$"

ParcelFernwick_T_Thea_R2_Text_0:
# 818 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I kept the team up for this.\n"
	.string "Again?$"

ParcelFernwick_T_Thea_R2_Text_1:
# 820 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Another time, then.$"

ParcelFernwick_T_Thea_R2_Text_2:
# 824 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Right. That's the whole of it.$"

ParcelFernwick_T_Thea_R2_Text_3:
# 825 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelFernwick_T_Thea_R3_Text_0:
# 832 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelFernwick_T_Thea_R3_Text_1:
# 838 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Still yours.$"

ParcelFernwick_T_Thea_R3_Text_2:
# 839 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: One more in me. After the high\n"
	.string "ground.$"

ParcelFernwick_T_Thea_R4_Text_0:
# 846 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelFernwick_T_Thea_R4_Text_1:
# 853 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelFernwick_T_Thea_R5_Text_0:
# 860 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelFernwick_T_Thea_R5_Text_1:
# 866 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's the one I wanted to see.$"

ParcelFernwick_T_Thea_R5_Text_2:
# 867 "data/maps/ParcelFernwick/scripts.pory"
	.string "THEA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelFernwick_PondLook_Text_0:
# 876 "data/maps/ParcelFernwick/scripts.pory"
	.string "Still water over bare clay. Nothing.\n"
	.string "Nothing.\p"
	.string "Then a SURSKIT, skating out from the\n"
	.string "reeds the CORPS planted. Just the one.\l"
	.string "It found the pond on its own.$"

ParcelFernwick_PondLook_Text_1:
# 881 "data/maps/ParcelFernwick/scripts.pory"
	.string "The park pond. Still water. A SURSKIT\n"
	.string "skates across it and back.$"

ParcelFernwick_PerrinScene_Text_0:
# 894 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelFernwick_PerrinScene_Text_1:
# 898 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: There you are! WREN, right? I'm\n"
	.string "PERRIN. Same cohort, different\l"
	.string "dispatch. TARN passed me yesterday.\l"
	.string "Yes, PASSED, first go.\p"
	.string "Everyone keeps saying the CORPS\n"
	.string "doesn't do rankings. Let's find out.$"

ParcelFernwick_PerrinScene_Text_2:
# 899 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Huh. Okay. OKAY.$"

ParcelFernwick_PerrinScene_Text_3:
# 900 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: See you up the road. HALE's\n"
	.string "sending me to the landing too. The\l"
	.string "FOUNDATION's got an outreach grant for\l"
	.string "provisionals, did you know? You should\l"
	.string "apply. It pays.$"

ParcelFernwick_PerrinTalk_Text_0:
# 913 "data/maps/ParcelFernwick/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelFernwick_PondPage_Text_0:
# 924 "data/maps/ParcelFernwick/scripts.pory"
	.string "Under the pond's edge, a page gone to\n"
	.string "pulp. One line still legible, in a square\l"
	.string "hand:\p"
	.string "'Marsh page. 28 pairs. The low years\n"
	.string "start here.'$"

ParcelFernwick_PairCorps_Text_0:
# 934 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: The Director's office sent a\n"
	.string "letter. The certification programme is\l"
	.string "'under review for independence'.$"

ParcelFernwick_PairCorps_Text_1:
# 935 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: Meaning the FOUNDATION's\n"
	.string "third of it.$"

ParcelFernwick_PairCorps_Text_2:
# 936 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Meaning eight stations instead\n"
	.string "of twelve, if they walk. HALE says he'd\l"
	.string "rather have eight honest ones.$"

ParcelFernwick_PairCorps_Text_3:
# 937 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: HALE's said that for twenty\n"
	.string "years. Now someone's written it down\l"
	.string "where it counts.$"

ParcelFernwick_PairCorps_Text_4:
# 939 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: The river meeting's in the\n"
	.string "papers. Forty-one ratepayers and a\l"
	.string "Board that won't name a year.$"

ParcelFernwick_PairCorps_Text_5:
# 940 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: And a ranger who stood in\n"
	.string "the back and wrote it all down.$"

ParcelFernwick_PairCorps_Text_6:
# 941 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: Writing it down isn't standing\n"
	.string "up.$"

ParcelFernwick_PairCorps_Text_7:
# 942 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: Ask the Board which one\n"
	.string "they're more afraid of.$"

ParcelFernwick_PairCorps_Text_8:
# 944 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: HALE took another provisional.\n"
	.string "From JOHTO, this one. No partner. No\l"
	.string "badges. Nothing.$"

ParcelFernwick_PairCorps_Text_9:
# 945 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: He takes them with nothing\n"
	.string "on purpose. Says you can see what they\l"
	.string "do with it.$"

ParcelFernwick_PairCorps_Text_10:
# 946 "data/maps/ParcelFernwick/scripts.pory"
	.string "CLERK: What do they do with it?$"

ParcelFernwick_PairCorps_Text_11:
# 947 "data/maps/ParcelFernwick/scripts.pory"
	.string "NEIGHBOUR: Mostly leave. The ones that\n"
	.string "stay, you remember.$"

ParcelFernwick_PairPond_Text_0:
# 956 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: There's a SMEARGLE on the far\n"
	.string "bank. It paints the line where the water\l"
	.string "was.$"

ParcelFernwick_PairPond_Text_1:
# 957 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: I've seen it. It's not painting\n"
	.string "where the water was. It's painting\l"
	.string "where the water is.$"

ParcelFernwick_PairPond_Text_2:
# 958 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: That's the same line.$"

ParcelFernwick_PairPond_Text_3:
# 959 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: This year it is. Watch it next\n"
	.string "year. That's the whole job, you know.\l"
	.string "Watching next year.$"

ParcelFernwick_PairPond_Text_4:
# 961 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: The ranger counted the pond.\n"
	.string "Twenty-eight pairs of WINGULL, they\l"
	.string "said, same as the old notebook.$"

ParcelFernwick_PairPond_Text_5:
# 962 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: Same number. Half the water.\n"
	.string "Work that out for your homework.$"

ParcelFernwick_PairPond_Text_6:
# 963 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: Fewer places to land, so they land\n"
	.string "closer together?$"

ParcelFernwick_PairPond_Text_7:
# 964 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: So the count looks fine. Good.\n"
	.string "You'll be a surveyor or a liar, and the\l"
	.string "difference is who you tell.$"

ParcelFernwick_PairPond_Text_8:
# 966 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: The pond came up to that\n"
	.string "stone when I was your age. Every spring.$"

ParcelFernwick_PairPond_Text_9:
# 967 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: Which stone?$"

ParcelFernwick_PairPond_Text_10:
# 968 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: That one. The dry one. You're\n"
	.string "standing on it.$"

ParcelFernwick_PairPond_Text_11:
# 969 "data/maps/ParcelFernwick/scripts.pory"
	.string "BOY: It's a long way from the water.$"

ParcelFernwick_PairPond_Text_12:
# 970 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD MAN: It didn't move.$"

ParcelFernwick_Stringer_Text_0:
# 982 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: The hearing is on the front\n"
	.string "page. My piece above the fold, the\l"
	.string "Commissioner's reply below it. Nine\l"
	.string "years I've had that upside down.\p"
	.string "HALE still won't talk to me. He sent a\n"
	.string "note. It said: the record has a\l"
	.string "circulation now. Thank you. I've framed\l"
	.string "it. It's the only review I've had.$"

ParcelFernwick_Stringer_Text_1:
# 984 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: The Poisoned Waters piece ran.\n"
	.string "Page four. The Commissioner's reply ran\l"
	.string "page two. That's the ratio in this\l"
	.string "region: his two to my four.$"

ParcelFernwick_Stringer_Text_2:
# 986 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: Your sentence is in it, under\n"
	.string "your name. The editor wanted it cut. I\l"
	.string "said the ranger said it on the record,\l"
	.string "and the record is the one thing he can't\l"
	.string "cut. He didn't know what I meant. He will.$"

ParcelFernwick_Stringer_Text_3:
# 988 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: You're in it without your name,\n"
	.string "because you didn't give me one. 'A\l"
	.string "ranger read the manifest.' Passive\l"
	.string "voice. I hate it. It's what you left me.$"

ParcelFernwick_Stringer_Text_4:
# 991 "data/maps/ParcelFernwick/scripts.pory"
	.string "INGER: The HQ. I'm not allowed in. HALE\n"
	.string "says the Corps doesn't talk to the\l"
	.string "press; it talks to the record.\p"
	.string "I told him the record doesn't have a\n"
	.string "circulation. He said that's its one\l"
	.string "advantage. I've been trying to think of\l"
	.string "an answer for six years.$"

ParcelFernwick_Gardener_Text_0:
# 1003 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: Eleven paces. The water came\n"
	.string "back one pace this spring. I water the\l"
	.string "far bank anyway.\p"
	.string "Hands need something. It can be the\n"
	.string "right thing.$"

ParcelFernwick_Gardener_Text_1:
# 1008 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: Twelve paces. I've started\n"
	.string "watering the far bank. It won't bring it\l"
	.string "back. It's something to do with my\l"
	.string "hands.$"

ParcelFernwick_Gardener_Text_2:
# 1011 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: Dry. Twelve paces from the\n"
	.string "water. I knew. I wanted somebody with a\l"
	.string "notebook to know too.\p"
	.string "Take this. I was going to give it to the\n"
	.string "pond.$"

ParcelFernwick_Gardener_Text_3:
# 1015 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: South, set in the pavement. A\n"
	.string "dark stone. Dry, I expect.$"

ParcelFernwick_Gardener_Text_4:
# 1018 "data/maps/ParcelFernwick/scripts.pory"
	.string "GARDENER: The pond garden's mine to\n"
	.string "keep. The pond isn't anyone's to keep,\l"
	.string "it seems.\p"
	.string "There's a stone in the pavement south\n"
	.string "of here that the water came up to every\l"
	.string "spring when I was a girl. Find it and tell\l"
	.string "me if it's wet.$"

ParcelFernwick_HighWaterStone_Text_0:
# 1027 "data/maps/ParcelFernwick/scripts.pory"
	.string "A dark stone set in the pavement, worn\n"
	.string "smooth on top. The high-water stone.\l"
	.string "The pond is twelve paces north of it\l"
	.string "and does not reach.\p"
	.string "It is dry. It has been dry long enough\n"
	.string "for the moss to give up on it.$"

ParcelFernwick_HighWaterStone_Text_1:
# 1030 "data/maps/ParcelFernwick/scripts.pory"
	.string "A dark stone set in the pavement, dry,\n"
	.string "twelve paces from the water.$"

ParcelFernwick_FindJar_Text_0:
# 1039 "data/maps/ParcelFernwick/scripts.pory"
	.string "A sample jar on the kerb, a third full,\n"
	.string "the water gone green against the glass.\l"
	.string "The label says POND, SOUTH BANK, and a\l"
	.string "date nine days old, and a name.\p"
	.string "Somebody has moved it an inch so the\n"
	.string "path stays clear, and no further.$"

ParcelFernwick_FindJar_Text_1:
# 1042 "data/maps/ParcelFernwick/scripts.pory"
	.string "A sample jar on the kerb, nine days old\n"
	.string "now and counting. The label has started\l"
	.string "to curl.$"

ParcelFernwick_PairStation_Text_0:
# 1050 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: The Director's letter says\n"
	.string "'independence review'. HALE says it\l"
	.string "means eight honest stations or twelve\l"
	.string "bought ones, and the Director has to\l"
	.string "choose in writing.$"

ParcelFernwick_PairStation_Text_1:
# 1051 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: HALE's waited twenty years\n"
	.string "for someone to have to choose in\l"
	.string "writing.$"

ParcelFernwick_PairStation_Text_2:
# 1052 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: What if the Director chooses\n"
	.string "twelve?$"

ParcelFernwick_PairStation_Text_3:
# 1053 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: Then HALE will run eight\n"
	.string "anyway and the paper will say why.\l"
	.string "That's what the ranger changed. Not the\l"
	.string "choice. The saying why.$"

ParcelFernwick_PairStation_Text_4:
# 1055 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: The new one spoke at the\n"
	.string "river meeting, or stood at the back and\l"
	.string "wrote. Same thing, in this town.$"

ParcelFernwick_PairStation_Text_5:
# 1056 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: HALE read the minutes out at\n"
	.string "briefing. All of them. Took the whole\l"
	.string "hour.$"

ParcelFernwick_PairStation_Text_6:
# 1057 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: And?$"

ParcelFernwick_PairStation_Text_7:
# 1058 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: And then he said: that's what\n"
	.string "the job is. And sent us out. Nobody\l"
	.string "asked what he meant. We knew.$"

ParcelFernwick_PairStation_Text_8:
# 1060 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: Twelve stations, the poster\n"
	.string "says. We run eight.$"

ParcelFernwick_PairStation_Text_9:
# 1061 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: The poster's the\n"
	.string "FOUNDATION's. The eight are HALE's.\l"
	.string "Count the ones with a light on.$"

ParcelFernwick_PairStation_Text_10:
# 1062 "data/maps/ParcelFernwick/scripts.pory"
	.string "CADET: Why does nobody fix the poster?$"

ParcelFernwick_PairStation_Text_11:
# 1063 "data/maps/ParcelFernwick/scripts.pory"
	.string "OLD WOMAN: Because the poster paid for\n"
	.string "two of the eight. You'll understand the\l"
	.string "arithmetic when you've been cold in a\l"
	.string "station the poster didn't build.$"

ParcelFernwick_Board1_Text_0:
# 1072 "data/maps/ParcelFernwick/scripts.pory"
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
# 1077 "data/maps/ParcelFernwick/scripts.pory"
	.string "A SURVEY BOARD by the pond. WINGULL\n"
	.string "pairs on the Fernwick pond: 28 in the\l"
	.string "first spring of the record, 28 in the\l"
	.string "tenth. The board gives the number with\l"
	.string "a warning under it.\p"
	.string "A count that holds is not always a\n"
	.string "habitat that holds. Sometimes it is a\l"
	.string "habitat that has stopped being able to\l"
	.string "lose anything else.$"
