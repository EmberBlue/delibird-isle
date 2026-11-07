ParcelRiver_MapScripts::
# 27 "data/maps/ParcelRiver/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelRiver_OnTransition
# 28 "data/maps/ParcelRiver/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelRiver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelRiver_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/ParcelRiver/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 3, ParcelRiver_Epilogue
	.2byte 0


ParcelRiver_OnTransition::
# 35 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_OnTransition_2
# 38 "data/maps/ParcelRiver/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelRiver_OnTransition_1:
	end

ParcelRiver_OnTransition_2:
# 36 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelRiver_OnTransition_1


ParcelRiver_FirstEntry::
# 45 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_RIVER_ARRIVAL, ParcelRiver_FirstEntry_2
# 49 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 50 "data/maps/ParcelRiver/scripts.pory"
	bufferpartymonnick 0, 0
# 51 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_1, MSGBOX_DEFAULT
# 53 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_RIVER_ARRIVAL
# 55 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_FirstEntry_2:
	end


ParcelRiver_ChannelCut::
# 61 "data/maps/ParcelRiver/scripts.pory"
	lock
# 62 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 63 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 0
# 64 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 65 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_ChannelCut_2
# 70 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_1, MSGBOX_SIGN
# 71 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 72 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_ChannelCut_2:
# 66 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_0, MSGBOX_SIGN
# 67 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_DamRelic::
# 76 "data/maps/ParcelRiver/scripts.pory"
	lock
# 77 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 78 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 1
# 79 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 80 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_DamRelic_2
# 85 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_1, MSGBOX_SIGN
# 86 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 87 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_DamRelic_2:
# 81 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_0, MSGBOX_SIGN
# 82 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_RunoffStain::
# 91 "data/maps/ParcelRiver/scripts.pory"
	lock
# 92 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 93 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 2
# 94 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 95 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_RunoffStain_2
# 100 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_1, MSGBOX_SIGN
# 101 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 102 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_RunoffStain_2:
# 96 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_0, MSGBOX_SIGN
# 97 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_CleanReach::
# 106 "data/maps/ParcelRiver/scripts.pory"
	lock
# 107 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 108 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 3
# 109 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 110 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_CleanReach_2
# 115 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_1, MSGBOX_SIGN
# 116 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 117 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_CleanReach_2:
# 111 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_0, MSGBOX_SIGN
# 112 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_IrrigationBoard::
# 121 "data/maps/ParcelRiver/scripts.pory"
	lock
# 122 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 123 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 4
# 124 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 125 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_IrrigationBoard_2
# 130 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_1, MSGBOX_SIGN
# 131 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 132 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_IrrigationBoard_2:
# 126 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_0, MSGBOX_SIGN
# 127 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Harland::
# 138 "data/maps/ParcelRiver/scripts.pory"
	lock
# 139 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 140 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Harland_2
# 168 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 169 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 5
# 170 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 171 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_Harland_5
# 176 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_11, MSGBOX_DEFAULT
# 177 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_12, MSGBOX_DEFAULT
# 178 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_13, MSGBOX_DEFAULT
# 179 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_14, MSGBOX_DEFAULT
# 180 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_15, MSGBOX_DEFAULT
# 181 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_16, MSGBOX_DEFAULT
# 182 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_17, MSGBOX_DEFAULT
# 183 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 184 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_2:
# 141 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_RIV_NIGHT_DONE, ParcelRiver_Harland_8
# 164 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_9, MSGBOX_DEFAULT
# 165 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_5:
# 172 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_10, MSGBOX_DEFAULT
# 173 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_8:
# 142 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_0, MSGBOX_DEFAULT
# 143 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_1, MSGBOX_YESNO
# 144 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Harland_11
# 149 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 150 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 151 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_3, MSGBOX_DEFAULT
# 152 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_4, MSGBOX_DEFAULT
# 153 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_5, MSGBOX_DEFAULT
# 154 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_6, MSGBOX_DEFAULT
# 155 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_7, MSGBOX_DEFAULT
# 156 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 157 "data/maps/ParcelRiver/scripts.pory"
	delay 60
# 158 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_8, MSGBOX_DEFAULT
# 160 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_RIV_NIGHT_DONE
# 161 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_11:
# 145 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_2, MSGBOX_DEFAULT
# 146 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Farmer::
# 190 "data/maps/ParcelRiver/scripts.pory"
	lock
# 191 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 192 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Farmer_2
# 197 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_2, MSGBOX_DEFAULT
# 199 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Farmer_2:
# 193 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_0, MSGBOX_DEFAULT
# 194 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ilex::
# 205 "data/maps/ParcelRiver/scripts.pory"
	lock
# 206 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 207 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Ilex_2
# 212 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 213 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 214 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 215 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelRiver_Ilex_5
# 234 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_8, MSGBOX_DEFAULT
# 235 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_2:
# 208 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_0, MSGBOX_DEFAULT
# 209 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_5:
# 216 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_1, MSGBOX_DEFAULT
# 217 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyRiver
# 218 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_2, MSGBOX_DEFAULT
# 219 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_3, MSGBOX_DEFAULT
# 220 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_4, MSGBOX_DEFAULT
# 221 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_5, MSGBOX_DEFAULT
# 222 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_6, MSGBOX_DEFAULT
# 223 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 6
# 224 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 225 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_7, MSGBOX_DEFAULT
# 226 "data/maps/ParcelRiver/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 227 "data/maps/ParcelRiver/scripts.pory"
	waitfanfare
# 228 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_WATERSHED_CERT
# 229 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 230 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 231 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Dorsey::
# 241 "data/maps/ParcelRiver/scripts.pory"
	lock
# 242 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 244 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 245 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 246 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Dorsey_2
# 252 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_2, MSGBOX_DEFAULT
# 253 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_3, MSGBOX_DEFAULT
# 254 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Dorsey_2:
# 247 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_0, MSGBOX_DEFAULT
# 248 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_1, MSGBOX_DEFAULT
# 249 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Aide::
# 258 "data/maps/ParcelRiver/scripts.pory"
	lock
# 259 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 260 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorEggs::
# 267 "data/maps/ParcelRiver/scripts.pory"
	lock
# 268 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 269 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_0, MSGBOX_DEFAULT
# 270 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorFish::
# 274 "data/maps/ParcelRiver/scripts.pory"
	lock
# 275 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 276 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_VendorFish_2
# 281 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_1, MSGBOX_DEFAULT
# 282 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorFish_2:
# 277 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_0, MSGBOX_DEFAULT
# 278 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_OldMan::
# 286 "data/maps/ParcelRiver/scripts.pory"
	lock
# 287 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 288 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_0, MSGBOX_DEFAULT
# 289 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Girl::
# 293 "data/maps/ParcelRiver/scripts.pory"
	lock
# 294 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 295 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_0, MSGBOX_DEFAULT
# 296 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Boy::
# 300 "data/maps/ParcelRiver/scripts.pory"
	lock
# 301 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 302 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_0, MSGBOX_DEFAULT
# 303 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_PondFisher::
# 307 "data/maps/ParcelRiver/scripts.pory"
	lock
# 308 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 309 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_0, MSGBOX_DEFAULT
# 310 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_AnglerTrainer::
# 316 "data/maps/ParcelRiver/scripts.pory"
	lock
# 317 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 318 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_DONE, ParcelRiver_AnglerTrainer_2
# 323 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_LURE, ParcelRiver_AnglerTrainer_5
# 331 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_AnglerTrainer_8
# 336 "data/maps/ParcelRiver/scripts.pory"
	release
# 337 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ANGLER, ParcelRiver_AnglerTrainer_Text_4, ParcelRiver_AnglerTrainer_Text_5
# 340 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_6, MSGBOX_DEFAULT
# 341 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL
	end

ParcelRiver_AnglerTrainer_2:
# 319 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_0, MSGBOX_DEFAULT
# 320 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_5:
# 324 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_1, MSGBOX_DEFAULT
# 325 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_2, MSGBOX_DEFAULT
# 326 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 327 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_DONE
# 328 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_8:
# 332 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_3, MSGBOX_DEFAULT
# 333 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lure::
# 345 "data/maps/ParcelRiver/scripts.pory"
	lock
# 346 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_Lure_3
ParcelRiver_Lure_1:
# 352 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_1, MSGBOX_SIGN
# 353 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_2:
# 347 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_0, MSGBOX_SIGN
# 348 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_LURE
# 349 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_3:
# 346 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DELL_LURE, ParcelRiver_Lure_2
	goto ParcelRiver_Lure_1


ParcelRiver_Arna::
# 359 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ARNA, ParcelRiver_Arna_Text_0, ParcelRiver_Arna_Text_1, ParcelRiver_Arna_FirstWin
# 363 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 364 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Arna_3
ParcelRiver_Arna_1:
# 367 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Arna_8
ParcelRiver_Arna_6:
# 370 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Arna_13
ParcelRiver_Arna_11:
# 373 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Arna_18
ParcelRiver_Arna_16:
# 376 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Arna_2:
# 365 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R2
	goto ParcelRiver_Arna_1

ParcelRiver_Arna_3:
# 364 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R2
	goto_if 0, ParcelRiver_Arna_2
	goto ParcelRiver_Arna_1

ParcelRiver_Arna_7:
# 368 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R3
	goto ParcelRiver_Arna_6

ParcelRiver_Arna_8:
# 367 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R3
	goto_if 0, ParcelRiver_Arna_7
	goto ParcelRiver_Arna_6

ParcelRiver_Arna_12:
# 371 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R4
	goto ParcelRiver_Arna_11

ParcelRiver_Arna_13:
# 370 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R4
	goto_if 0, ParcelRiver_Arna_12
	goto ParcelRiver_Arna_11

ParcelRiver_Arna_17:
# 374 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R5
	goto ParcelRiver_Arna_16

ParcelRiver_Arna_18:
# 373 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R5
	goto_if 0, ParcelRiver_Arna_17
	goto ParcelRiver_Arna_16


ParcelRiver_Arna_FirstWin::
# 380 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
# 381 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R2::
# 385 "data/maps/ParcelRiver/scripts.pory"
	lock
# 386 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 387 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_0, MSGBOX_YESNO
# 388 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R2_2
# 393 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R2, ParcelRiver_Arna_R2_Text_2
# 394 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_3, MSGBOX_DEFAULT
# 395 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R2_2:
# 389 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 390 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R3::
# 399 "data/maps/ParcelRiver/scripts.pory"
	lock
# 400 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 401 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R3_Text_0, MSGBOX_YESNO
# 402 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R3_2
# 407 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R3, ParcelRiver_Arna_R3_Text_1
# 408 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R3_Text_2, MSGBOX_DEFAULT
# 409 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R3_2:
# 403 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 404 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R4::
# 413 "data/maps/ParcelRiver/scripts.pory"
	lock
# 414 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 415 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R4_Text_0, MSGBOX_YESNO
# 416 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R4_2
# 421 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R4, ParcelRiver_Arna_R4_Text_1
# 422 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R4_Text_2, MSGBOX_DEFAULT
# 423 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R4_2:
# 417 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 418 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R5::
# 427 "data/maps/ParcelRiver/scripts.pory"
	lock
# 428 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 429 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R5_Text_0, MSGBOX_YESNO
# 430 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R5_2
# 435 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R5, ParcelRiver_Arna_R5_Text_1
# 436 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R5_Text_2, MSGBOX_DEFAULT
# 437 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R5_2:
# 431 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 432 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv::
# 441 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_BOTOLV, ParcelRiver_Botolv_Text_0, ParcelRiver_Botolv_Text_1, ParcelRiver_Botolv_FirstWin
# 445 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 446 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Botolv_3
ParcelRiver_Botolv_1:
# 449 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Botolv_8
ParcelRiver_Botolv_6:
# 452 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Botolv_13
ParcelRiver_Botolv_11:
# 455 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Botolv_18
ParcelRiver_Botolv_16:
# 458 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Botolv_2:
# 447 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R2
	goto ParcelRiver_Botolv_1

ParcelRiver_Botolv_3:
# 446 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R2
	goto_if 0, ParcelRiver_Botolv_2
	goto ParcelRiver_Botolv_1

ParcelRiver_Botolv_7:
# 450 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R3
	goto ParcelRiver_Botolv_6

ParcelRiver_Botolv_8:
# 449 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R3
	goto_if 0, ParcelRiver_Botolv_7
	goto ParcelRiver_Botolv_6

ParcelRiver_Botolv_12:
# 453 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R4
	goto ParcelRiver_Botolv_11

ParcelRiver_Botolv_13:
# 452 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R4
	goto_if 0, ParcelRiver_Botolv_12
	goto ParcelRiver_Botolv_11

ParcelRiver_Botolv_17:
# 456 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R5
	goto ParcelRiver_Botolv_16

ParcelRiver_Botolv_18:
# 455 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R5
	goto_if 0, ParcelRiver_Botolv_17
	goto ParcelRiver_Botolv_16


ParcelRiver_Botolv_FirstWin::
# 462 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
# 463 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R2::
# 467 "data/maps/ParcelRiver/scripts.pory"
	lock
# 468 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 469 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_0, MSGBOX_YESNO
# 470 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R2_2
# 475 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R2, ParcelRiver_Botolv_R2_Text_2
# 476 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_3, MSGBOX_DEFAULT
# 477 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R2_2:
# 471 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 472 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R3::
# 481 "data/maps/ParcelRiver/scripts.pory"
	lock
# 482 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 483 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R3_Text_0, MSGBOX_YESNO
# 484 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R3_2
# 489 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R3, ParcelRiver_Botolv_R3_Text_1
# 490 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R3_Text_2, MSGBOX_DEFAULT
# 491 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R3_2:
# 485 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 486 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R4::
# 495 "data/maps/ParcelRiver/scripts.pory"
	lock
# 496 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 497 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R4_Text_0, MSGBOX_YESNO
# 498 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R4_2
# 503 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R4, ParcelRiver_Botolv_R4_Text_1
# 504 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R4_Text_2, MSGBOX_DEFAULT
# 505 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R4_2:
# 499 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 500 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R5::
# 509 "data/maps/ParcelRiver/scripts.pory"
	lock
# 510 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 511 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R5_Text_0, MSGBOX_YESNO
# 512 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R5_2
# 517 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R5, ParcelRiver_Botolv_R4_Text_1
# 518 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R5_Text_1, MSGBOX_DEFAULT
# 519 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R5_2:
# 513 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 514 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun::
# 523 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_GUDRUN, ParcelRiver_Gudrun_Text_0, ParcelRiver_Gudrun_Text_1, ParcelRiver_Gudrun_FirstWin
# 527 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 528 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Gudrun_3
ParcelRiver_Gudrun_1:
# 531 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Gudrun_8
ParcelRiver_Gudrun_6:
# 534 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Gudrun_13
ParcelRiver_Gudrun_11:
# 537 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Gudrun_18
ParcelRiver_Gudrun_16:
# 540 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Gudrun_2:
# 529 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R2
	goto ParcelRiver_Gudrun_1

ParcelRiver_Gudrun_3:
# 528 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R2
	goto_if 0, ParcelRiver_Gudrun_2
	goto ParcelRiver_Gudrun_1

ParcelRiver_Gudrun_7:
# 532 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R3
	goto ParcelRiver_Gudrun_6

ParcelRiver_Gudrun_8:
# 531 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R3
	goto_if 0, ParcelRiver_Gudrun_7
	goto ParcelRiver_Gudrun_6

ParcelRiver_Gudrun_12:
# 535 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R4
	goto ParcelRiver_Gudrun_11

ParcelRiver_Gudrun_13:
# 534 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R4
	goto_if 0, ParcelRiver_Gudrun_12
	goto ParcelRiver_Gudrun_11

ParcelRiver_Gudrun_17:
# 538 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R5
	goto ParcelRiver_Gudrun_16

ParcelRiver_Gudrun_18:
# 537 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R5
	goto_if 0, ParcelRiver_Gudrun_17
	goto ParcelRiver_Gudrun_16


ParcelRiver_Gudrun_FirstWin::
# 544 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
# 545 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R2::
# 549 "data/maps/ParcelRiver/scripts.pory"
	lock
# 550 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 551 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_0, MSGBOX_YESNO
# 552 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R2_2
# 557 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R2, ParcelRiver_Gudrun_R2_Text_2
# 558 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_3, MSGBOX_DEFAULT
# 559 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R2_2:
# 553 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 554 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R3::
# 563 "data/maps/ParcelRiver/scripts.pory"
	lock
# 564 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 565 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R3_Text_0, MSGBOX_YESNO
# 566 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R3_2
# 571 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R3, ParcelRiver_Gudrun_R3_Text_1
# 572 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R3_Text_2, MSGBOX_DEFAULT
# 573 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R3_2:
# 567 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 568 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R4::
# 577 "data/maps/ParcelRiver/scripts.pory"
	lock
# 578 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 579 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R4_Text_0, MSGBOX_YESNO
# 580 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R4_2
# 585 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R4, ParcelRiver_Gudrun_R4_Text_1
# 586 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R4_Text_2, MSGBOX_DEFAULT
# 587 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R4_2:
# 581 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 582 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R5::
# 591 "data/maps/ParcelRiver/scripts.pory"
	lock
# 592 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 593 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R5_Text_0, MSGBOX_YESNO
# 594 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R5_2
# 599 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R5, ParcelRiver_Gudrun_R3_Text_1
# 600 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R5_Text_1, MSGBOX_DEFAULT
# 601 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R5_2:
# 595 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 596 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard::
# 605 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_HAVARD, ParcelRiver_Havard_Text_0, ParcelRiver_Havard_Text_1, ParcelRiver_Havard_FirstWin
# 609 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 610 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Havard_3
ParcelRiver_Havard_1:
# 613 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Havard_8
ParcelRiver_Havard_6:
# 616 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Havard_13
ParcelRiver_Havard_11:
# 619 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Havard_18
ParcelRiver_Havard_16:
# 622 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Havard_2:
# 611 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R2
	goto ParcelRiver_Havard_1

ParcelRiver_Havard_3:
# 610 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R2
	goto_if 0, ParcelRiver_Havard_2
	goto ParcelRiver_Havard_1

ParcelRiver_Havard_7:
# 614 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R3
	goto ParcelRiver_Havard_6

ParcelRiver_Havard_8:
# 613 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R3
	goto_if 0, ParcelRiver_Havard_7
	goto ParcelRiver_Havard_6

ParcelRiver_Havard_12:
# 617 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R4
	goto ParcelRiver_Havard_11

ParcelRiver_Havard_13:
# 616 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R4
	goto_if 0, ParcelRiver_Havard_12
	goto ParcelRiver_Havard_11

ParcelRiver_Havard_17:
# 620 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R5
	goto ParcelRiver_Havard_16

ParcelRiver_Havard_18:
# 619 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R5
	goto_if 0, ParcelRiver_Havard_17
	goto ParcelRiver_Havard_16


ParcelRiver_Havard_FirstWin::
# 626 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
# 627 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R2::
# 631 "data/maps/ParcelRiver/scripts.pory"
	lock
# 632 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 633 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_0, MSGBOX_YESNO
# 634 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R2_2
# 639 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R2, ParcelRiver_Havard_R2_Text_2
# 640 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_3, MSGBOX_DEFAULT
# 641 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R2_2:
# 635 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 636 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R3::
# 645 "data/maps/ParcelRiver/scripts.pory"
	lock
# 646 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 647 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R3_Text_0, MSGBOX_YESNO
# 648 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R3_2
# 653 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R3, ParcelRiver_Havard_R3_Text_1
# 654 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R3_Text_2, MSGBOX_DEFAULT
# 655 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R3_2:
# 649 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 650 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R4::
# 659 "data/maps/ParcelRiver/scripts.pory"
	lock
# 660 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 661 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R4_Text_0, MSGBOX_YESNO
# 662 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R4_2
# 667 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R4, ParcelRiver_Havard_R4_Text_1
# 668 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R4_Text_2, MSGBOX_DEFAULT
# 669 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R4_2:
# 663 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 664 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R5::
# 673 "data/maps/ParcelRiver/scripts.pory"
	lock
# 674 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 675 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R5_Text_0, MSGBOX_YESNO
# 676 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R5_2
# 681 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R5, ParcelRiver_Havard_R2_Text_2
# 682 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R5_Text_1, MSGBOX_DEFAULT
# 683 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R5_2:
# 677 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 678 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun::
# 687 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_IDUN, ParcelRiver_Idun_Text_0, ParcelRiver_Idun_Text_1, ParcelRiver_Idun_FirstWin
# 691 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 692 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Idun_3
ParcelRiver_Idun_1:
# 695 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Idun_8
ParcelRiver_Idun_6:
# 698 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Idun_13
ParcelRiver_Idun_11:
# 701 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Idun_18
ParcelRiver_Idun_16:
# 704 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Idun_2:
# 693 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R2
	goto ParcelRiver_Idun_1

ParcelRiver_Idun_3:
# 692 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R2
	goto_if 0, ParcelRiver_Idun_2
	goto ParcelRiver_Idun_1

ParcelRiver_Idun_7:
# 696 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R3
	goto ParcelRiver_Idun_6

ParcelRiver_Idun_8:
# 695 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R3
	goto_if 0, ParcelRiver_Idun_7
	goto ParcelRiver_Idun_6

ParcelRiver_Idun_12:
# 699 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R4
	goto ParcelRiver_Idun_11

ParcelRiver_Idun_13:
# 698 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R4
	goto_if 0, ParcelRiver_Idun_12
	goto ParcelRiver_Idun_11

ParcelRiver_Idun_17:
# 702 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R5
	goto ParcelRiver_Idun_16

ParcelRiver_Idun_18:
# 701 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R5
	goto_if 0, ParcelRiver_Idun_17
	goto ParcelRiver_Idun_16


ParcelRiver_Idun_FirstWin::
# 708 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
# 709 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R2::
# 713 "data/maps/ParcelRiver/scripts.pory"
	lock
# 714 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 715 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_0, MSGBOX_YESNO
# 716 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R2_2
# 721 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R2, ParcelRiver_Idun_R2_Text_2
# 722 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_3, MSGBOX_DEFAULT
# 723 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R2_2:
# 717 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 718 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R3::
# 727 "data/maps/ParcelRiver/scripts.pory"
	lock
# 728 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 729 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R3_Text_0, MSGBOX_YESNO
# 730 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R3_2
# 735 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R3, ParcelRiver_Idun_R3_Text_1
# 736 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R3_Text_2, MSGBOX_DEFAULT
# 737 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R3_2:
# 731 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 732 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R4::
# 741 "data/maps/ParcelRiver/scripts.pory"
	lock
# 742 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 743 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R4_Text_0, MSGBOX_YESNO
# 744 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R4_2
# 749 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R4, ParcelRiver_Idun_R4_Text_1
# 750 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R4_Text_2, MSGBOX_DEFAULT
# 751 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R4_2:
# 745 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 746 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R5::
# 755 "data/maps/ParcelRiver/scripts.pory"
	lock
# 756 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 757 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R5_Text_0, MSGBOX_YESNO
# 758 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R5_2
# 763 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R5, ParcelRiver_Idun_R4_Text_1
# 764 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R5_Text_1, MSGBOX_DEFAULT
# 765 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R5_2:
# 759 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 760 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar::
# 769 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_JOAR, ParcelRiver_Joar_Text_0, ParcelRiver_Joar_Text_1, ParcelRiver_Joar_FirstWin
# 773 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 774 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Joar_3
ParcelRiver_Joar_1:
# 777 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Joar_8
ParcelRiver_Joar_6:
# 780 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Joar_13
ParcelRiver_Joar_11:
# 783 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Joar_18
ParcelRiver_Joar_16:
# 786 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Joar_2:
# 775 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R2
	goto ParcelRiver_Joar_1

ParcelRiver_Joar_3:
# 774 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R2
	goto_if 0, ParcelRiver_Joar_2
	goto ParcelRiver_Joar_1

ParcelRiver_Joar_7:
# 778 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R3
	goto ParcelRiver_Joar_6

ParcelRiver_Joar_8:
# 777 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R3
	goto_if 0, ParcelRiver_Joar_7
	goto ParcelRiver_Joar_6

ParcelRiver_Joar_12:
# 781 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R4
	goto ParcelRiver_Joar_11

ParcelRiver_Joar_13:
# 780 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R4
	goto_if 0, ParcelRiver_Joar_12
	goto ParcelRiver_Joar_11

ParcelRiver_Joar_17:
# 784 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R5
	goto ParcelRiver_Joar_16

ParcelRiver_Joar_18:
# 783 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R5
	goto_if 0, ParcelRiver_Joar_17
	goto ParcelRiver_Joar_16


ParcelRiver_Joar_FirstWin::
# 790 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
# 791 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R2::
# 795 "data/maps/ParcelRiver/scripts.pory"
	lock
# 796 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 797 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_0, MSGBOX_YESNO
# 798 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R2_2
# 803 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R2, ParcelRiver_Joar_R2_Text_2
# 804 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_3, MSGBOX_DEFAULT
# 805 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R2_2:
# 799 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 800 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R3::
# 809 "data/maps/ParcelRiver/scripts.pory"
	lock
# 810 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 811 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R3_Text_0, MSGBOX_YESNO
# 812 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R3_2
# 817 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R3, ParcelRiver_Joar_R3_Text_1
# 818 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R3_Text_2, MSGBOX_DEFAULT
# 819 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R3_2:
# 813 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 814 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R4::
# 823 "data/maps/ParcelRiver/scripts.pory"
	lock
# 824 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 825 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R4_Text_0, MSGBOX_YESNO
# 826 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R4_2
# 831 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R4, ParcelRiver_Joar_R4_Text_1
# 832 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R4_Text_2, MSGBOX_DEFAULT
# 833 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R4_2:
# 827 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 828 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R5::
# 837 "data/maps/ParcelRiver/scripts.pory"
	lock
# 838 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 839 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R5_Text_0, MSGBOX_YESNO
# 840 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R5_2
# 845 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R5, ParcelRiver_Joar_R4_Text_1
# 846 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R5_Text_1, MSGBOX_DEFAULT
# 847 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R5_2:
# 841 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 842 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari::
# 851 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_KARI, ParcelRiver_Kari_Text_0, ParcelRiver_Kari_Text_1, ParcelRiver_Kari_FirstWin
# 855 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 856 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Kari_3
ParcelRiver_Kari_1:
# 859 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Kari_8
ParcelRiver_Kari_6:
# 862 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Kari_13
ParcelRiver_Kari_11:
# 865 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Kari_18
ParcelRiver_Kari_16:
# 868 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Kari_2:
# 857 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R2
	goto ParcelRiver_Kari_1

ParcelRiver_Kari_3:
# 856 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R2
	goto_if 0, ParcelRiver_Kari_2
	goto ParcelRiver_Kari_1

ParcelRiver_Kari_7:
# 860 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R3
	goto ParcelRiver_Kari_6

ParcelRiver_Kari_8:
# 859 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R3
	goto_if 0, ParcelRiver_Kari_7
	goto ParcelRiver_Kari_6

ParcelRiver_Kari_12:
# 863 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R4
	goto ParcelRiver_Kari_11

ParcelRiver_Kari_13:
# 862 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R4
	goto_if 0, ParcelRiver_Kari_12
	goto ParcelRiver_Kari_11

ParcelRiver_Kari_17:
# 866 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R5
	goto ParcelRiver_Kari_16

ParcelRiver_Kari_18:
# 865 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R5
	goto_if 0, ParcelRiver_Kari_17
	goto ParcelRiver_Kari_16


ParcelRiver_Kari_FirstWin::
# 872 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
# 873 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R2::
# 877 "data/maps/ParcelRiver/scripts.pory"
	lock
# 878 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 879 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_0, MSGBOX_YESNO
# 880 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R2_2
# 885 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R2, ParcelRiver_Kari_R2_Text_2
# 886 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_3, MSGBOX_DEFAULT
# 887 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R2_2:
# 881 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 882 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R3::
# 891 "data/maps/ParcelRiver/scripts.pory"
	lock
# 892 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 893 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R3_Text_0, MSGBOX_YESNO
# 894 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R3_2
# 899 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R3, ParcelRiver_Kari_R3_Text_1
# 900 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R3_Text_2, MSGBOX_DEFAULT
# 901 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R3_2:
# 895 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 896 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R4::
# 905 "data/maps/ParcelRiver/scripts.pory"
	lock
# 906 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 907 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R4_Text_0, MSGBOX_YESNO
# 908 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R4_2
# 913 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R4, ParcelRiver_Kari_R3_Text_1
# 914 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R4_Text_1, MSGBOX_DEFAULT
# 915 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R4_2:
# 909 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 910 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R5::
# 919 "data/maps/ParcelRiver/scripts.pory"
	lock
# 920 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 921 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R5_Text_0, MSGBOX_YESNO
# 922 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R5_2
# 927 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R5, ParcelRiver_Kari_R5_Text_1
# 928 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R5_Text_2, MSGBOX_DEFAULT
# 929 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R5_2:
# 923 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 924 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars::
# 933 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_LARS, ParcelRiver_Lars_Text_0, ParcelRiver_Lars_Text_1, ParcelRiver_Lars_FirstWin
# 937 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 938 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Lars_3
ParcelRiver_Lars_1:
# 941 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Lars_8
ParcelRiver_Lars_6:
# 944 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Lars_13
ParcelRiver_Lars_11:
# 947 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Lars_18
ParcelRiver_Lars_16:
# 950 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Lars_2:
# 939 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R2
	goto ParcelRiver_Lars_1

ParcelRiver_Lars_3:
# 938 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R2
	goto_if 0, ParcelRiver_Lars_2
	goto ParcelRiver_Lars_1

ParcelRiver_Lars_7:
# 942 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R3
	goto ParcelRiver_Lars_6

ParcelRiver_Lars_8:
# 941 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R3
	goto_if 0, ParcelRiver_Lars_7
	goto ParcelRiver_Lars_6

ParcelRiver_Lars_12:
# 945 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R4
	goto ParcelRiver_Lars_11

ParcelRiver_Lars_13:
# 944 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R4
	goto_if 0, ParcelRiver_Lars_12
	goto ParcelRiver_Lars_11

ParcelRiver_Lars_17:
# 948 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R5
	goto ParcelRiver_Lars_16

ParcelRiver_Lars_18:
# 947 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R5
	goto_if 0, ParcelRiver_Lars_17
	goto ParcelRiver_Lars_16


ParcelRiver_Lars_FirstWin::
# 954 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
# 955 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R2::
# 959 "data/maps/ParcelRiver/scripts.pory"
	lock
# 960 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 961 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_0, MSGBOX_YESNO
# 962 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R2_2
# 967 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R2, ParcelRiver_Lars_R2_Text_2
# 968 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_3, MSGBOX_DEFAULT
# 969 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R2_2:
# 963 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 964 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R3::
# 973 "data/maps/ParcelRiver/scripts.pory"
	lock
# 974 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 975 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R3_Text_0, MSGBOX_YESNO
# 976 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R3_2
# 981 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R3, ParcelRiver_Lars_R3_Text_1
# 982 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R3_Text_2, MSGBOX_DEFAULT
# 983 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R3_2:
# 977 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 978 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R4::
# 987 "data/maps/ParcelRiver/scripts.pory"
	lock
# 988 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 989 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R4_Text_0, MSGBOX_YESNO
# 990 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R4_2
# 995 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R4, ParcelRiver_Lars_R2_Text_2
# 996 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R4_Text_1, MSGBOX_DEFAULT
# 997 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R4_2:
# 991 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 992 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R5::
# 1001 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1002 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1003 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R5_Text_0, MSGBOX_YESNO
# 1004 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R5_2
# 1009 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R5, ParcelRiver_Lars_R5_Text_1
# 1010 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R5_Text_2, MSGBOX_DEFAULT
# 1011 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R5_2:
# 1005 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit::
# 1015 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_MARIT, ParcelRiver_Marit_Text_0, ParcelRiver_Marit_Text_1, ParcelRiver_Marit_FirstWin
# 1019 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1020 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Marit_3
ParcelRiver_Marit_1:
# 1023 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Marit_8
ParcelRiver_Marit_6:
# 1026 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Marit_13
ParcelRiver_Marit_11:
# 1029 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Marit_18
ParcelRiver_Marit_16:
# 1032 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Marit_2:
# 1021 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R2
	goto ParcelRiver_Marit_1

ParcelRiver_Marit_3:
# 1020 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R2
	goto_if 0, ParcelRiver_Marit_2
	goto ParcelRiver_Marit_1

ParcelRiver_Marit_7:
# 1024 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R3
	goto ParcelRiver_Marit_6

ParcelRiver_Marit_8:
# 1023 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R3
	goto_if 0, ParcelRiver_Marit_7
	goto ParcelRiver_Marit_6

ParcelRiver_Marit_12:
# 1027 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R4
	goto ParcelRiver_Marit_11

ParcelRiver_Marit_13:
# 1026 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R4
	goto_if 0, ParcelRiver_Marit_12
	goto ParcelRiver_Marit_11

ParcelRiver_Marit_17:
# 1030 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R5
	goto ParcelRiver_Marit_16

ParcelRiver_Marit_18:
# 1029 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R5
	goto_if 0, ParcelRiver_Marit_17
	goto ParcelRiver_Marit_16


ParcelRiver_Marit_FirstWin::
# 1036 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
# 1037 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R2::
# 1041 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1042 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1043 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_0, MSGBOX_YESNO
# 1044 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R2_2
# 1049 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R2, ParcelRiver_Marit_R2_Text_2
# 1050 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_3, MSGBOX_DEFAULT
# 1051 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R2_2:
# 1045 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1046 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R3::
# 1055 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1056 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1057 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R3_Text_0, MSGBOX_YESNO
# 1058 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R3_2
# 1063 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R3, ParcelRiver_Marit_R3_Text_1
# 1064 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R3_Text_2, MSGBOX_DEFAULT
# 1065 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R3_2:
# 1059 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1060 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R4::
# 1069 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1070 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1071 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R4_Text_0, MSGBOX_YESNO
# 1072 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R4_2
# 1077 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R4, ParcelRiver_Marit_R4_Text_1
# 1078 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R4_Text_2, MSGBOX_DEFAULT
# 1079 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R4_2:
# 1073 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1074 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R5::
# 1083 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1084 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1085 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R5_Text_0, MSGBOX_YESNO
# 1086 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R5_2
# 1091 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R5, ParcelRiver_Marit_R5_Text_1
# 1092 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R5_Text_2, MSGBOX_DEFAULT
# 1093 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R5_2:
# 1087 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal::
# 1097 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_NJAL, ParcelRiver_Njal_Text_0, ParcelRiver_Njal_Text_1, ParcelRiver_Njal_FirstWin
# 1101 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1102 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Njal_3
ParcelRiver_Njal_1:
# 1105 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Njal_8
ParcelRiver_Njal_6:
# 1108 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Njal_13
ParcelRiver_Njal_11:
# 1111 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Njal_18
ParcelRiver_Njal_16:
# 1114 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Njal_2:
# 1103 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R2
	goto ParcelRiver_Njal_1

ParcelRiver_Njal_3:
# 1102 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R2
	goto_if 0, ParcelRiver_Njal_2
	goto ParcelRiver_Njal_1

ParcelRiver_Njal_7:
# 1106 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R3
	goto ParcelRiver_Njal_6

ParcelRiver_Njal_8:
# 1105 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R3
	goto_if 0, ParcelRiver_Njal_7
	goto ParcelRiver_Njal_6

ParcelRiver_Njal_12:
# 1109 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R4
	goto ParcelRiver_Njal_11

ParcelRiver_Njal_13:
# 1108 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R4
	goto_if 0, ParcelRiver_Njal_12
	goto ParcelRiver_Njal_11

ParcelRiver_Njal_17:
# 1112 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R5
	goto ParcelRiver_Njal_16

ParcelRiver_Njal_18:
# 1111 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R5
	goto_if 0, ParcelRiver_Njal_17
	goto ParcelRiver_Njal_16


ParcelRiver_Njal_FirstWin::
# 1118 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
# 1119 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R2::
# 1123 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1124 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1125 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_0, MSGBOX_YESNO
# 1126 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R2_2
# 1131 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R2, ParcelRiver_Njal_R2_Text_2
# 1132 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_3, MSGBOX_DEFAULT
# 1133 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R2_2:
# 1127 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1128 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R3::
# 1137 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1138 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1139 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R3_Text_0, MSGBOX_YESNO
# 1140 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R3_2
# 1145 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R3, ParcelRiver_Njal_R3_Text_1
# 1146 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R3_Text_2, MSGBOX_DEFAULT
# 1147 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R3_2:
# 1141 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1142 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R4::
# 1151 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1152 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1153 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R4_Text_0, MSGBOX_YESNO
# 1154 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R4_2
# 1159 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R4, ParcelRiver_Njal_R4_Text_1
# 1160 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R4_Text_2, MSGBOX_DEFAULT
# 1161 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R4_2:
# 1155 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1156 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R5::
# 1165 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1166 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1167 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R5_Text_0, MSGBOX_YESNO
# 1168 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R5_2
# 1173 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R5, ParcelRiver_Njal_R5_Text_1
# 1174 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R5_Text_2, MSGBOX_DEFAULT
# 1175 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R5_2:
# 1169 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1170 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar::
# 1179 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_OTTAR, ParcelRiver_Ottar_Text_0, ParcelRiver_Ottar_Text_1, ParcelRiver_Ottar_FirstWin
# 1183 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1184 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Ottar_3
ParcelRiver_Ottar_1:
# 1187 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Ottar_8
ParcelRiver_Ottar_6:
# 1190 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Ottar_13
ParcelRiver_Ottar_11:
# 1193 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Ottar_18
ParcelRiver_Ottar_16:
# 1196 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Ottar_2:
# 1185 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R2
	goto ParcelRiver_Ottar_1

ParcelRiver_Ottar_3:
# 1184 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R2
	goto_if 0, ParcelRiver_Ottar_2
	goto ParcelRiver_Ottar_1

ParcelRiver_Ottar_7:
# 1188 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R3
	goto ParcelRiver_Ottar_6

ParcelRiver_Ottar_8:
# 1187 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R3
	goto_if 0, ParcelRiver_Ottar_7
	goto ParcelRiver_Ottar_6

ParcelRiver_Ottar_12:
# 1191 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R4
	goto ParcelRiver_Ottar_11

ParcelRiver_Ottar_13:
# 1190 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R4
	goto_if 0, ParcelRiver_Ottar_12
	goto ParcelRiver_Ottar_11

ParcelRiver_Ottar_17:
# 1194 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R5
	goto ParcelRiver_Ottar_16

ParcelRiver_Ottar_18:
# 1193 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R5
	goto_if 0, ParcelRiver_Ottar_17
	goto ParcelRiver_Ottar_16


ParcelRiver_Ottar_FirstWin::
# 1200 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
# 1201 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R2::
# 1205 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1206 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1207 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_0, MSGBOX_YESNO
# 1208 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R2_2
# 1213 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R2, ParcelRiver_Ottar_R2_Text_2
# 1214 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_3, MSGBOX_DEFAULT
# 1215 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R2_2:
# 1209 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1210 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R3::
# 1219 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1220 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1221 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R3_Text_0, MSGBOX_YESNO
# 1222 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R3_2
# 1227 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R3, ParcelRiver_Ottar_R3_Text_1
# 1228 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R3_Text_2, MSGBOX_DEFAULT
# 1229 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R3_2:
# 1223 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1224 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R4::
# 1233 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1234 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1235 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R4_Text_0, MSGBOX_YESNO
# 1236 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R4_2
# 1241 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R4, ParcelRiver_Ottar_R4_Text_1
# 1242 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R4_Text_2, MSGBOX_DEFAULT
# 1243 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R4_2:
# 1237 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1238 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R5::
# 1247 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1248 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1249 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R5_Text_0, MSGBOX_YESNO
# 1250 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R5_2
# 1255 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R5, ParcelRiver_Ottar_R5_Text_1
# 1256 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R5_Text_2, MSGBOX_DEFAULT
# 1257 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R5_2:
# 1251 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal::
# 1261 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_PAAL, ParcelRiver_Paal_Text_0, ParcelRiver_Paal_Text_1, ParcelRiver_Paal_FirstWin
# 1265 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1266 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Paal_3
ParcelRiver_Paal_1:
# 1269 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Paal_8
ParcelRiver_Paal_6:
# 1272 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Paal_13
ParcelRiver_Paal_11:
# 1275 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Paal_18
ParcelRiver_Paal_16:
# 1278 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Paal_2:
# 1267 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R2
	goto ParcelRiver_Paal_1

ParcelRiver_Paal_3:
# 1266 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R2
	goto_if 0, ParcelRiver_Paal_2
	goto ParcelRiver_Paal_1

ParcelRiver_Paal_7:
# 1270 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R3
	goto ParcelRiver_Paal_6

ParcelRiver_Paal_8:
# 1269 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R3
	goto_if 0, ParcelRiver_Paal_7
	goto ParcelRiver_Paal_6

ParcelRiver_Paal_12:
# 1273 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R4
	goto ParcelRiver_Paal_11

ParcelRiver_Paal_13:
# 1272 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R4
	goto_if 0, ParcelRiver_Paal_12
	goto ParcelRiver_Paal_11

ParcelRiver_Paal_17:
# 1276 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R5
	goto ParcelRiver_Paal_16

ParcelRiver_Paal_18:
# 1275 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R5
	goto_if 0, ParcelRiver_Paal_17
	goto ParcelRiver_Paal_16


ParcelRiver_Paal_FirstWin::
# 1282 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
# 1283 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R2::
# 1287 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1288 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1289 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_0, MSGBOX_YESNO
# 1290 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R2_2
# 1295 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R2, ParcelRiver_Paal_R2_Text_2
# 1296 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_3, MSGBOX_DEFAULT
# 1297 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R2_2:
# 1291 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1292 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R3::
# 1301 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1302 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1303 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R3_Text_0, MSGBOX_YESNO
# 1304 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R3_2
# 1309 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R3, ParcelRiver_Paal_R3_Text_1
# 1310 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R3_Text_2, MSGBOX_DEFAULT
# 1311 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R3_2:
# 1305 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1306 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R4::
# 1315 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1316 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1317 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R4_Text_0, MSGBOX_YESNO
# 1318 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R4_2
# 1323 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R4, ParcelRiver_Paal_R2_Text_2
# 1324 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R4_Text_1, MSGBOX_DEFAULT
# 1325 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R4_2:
# 1319 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1320 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R5::
# 1329 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1330 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1331 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R5_Text_0, MSGBOX_YESNO
# 1332 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R5_2
# 1337 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R5, ParcelRiver_Paal_R2_Text_2
# 1338 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R5_Text_1, MSGBOX_DEFAULT
# 1339 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R5_2:
# 1333 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1334 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna::
# 1343 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_RAGNA, ParcelRiver_Ragna_Text_0, ParcelRiver_Ragna_Text_1, ParcelRiver_Ragna_FirstWin
# 1347 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1348 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Ragna_3
ParcelRiver_Ragna_1:
# 1351 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Ragna_8
ParcelRiver_Ragna_6:
# 1354 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Ragna_13
ParcelRiver_Ragna_11:
# 1357 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Ragna_18
ParcelRiver_Ragna_16:
# 1360 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Ragna_2:
# 1349 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R2
	goto ParcelRiver_Ragna_1

ParcelRiver_Ragna_3:
# 1348 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R2
	goto_if 0, ParcelRiver_Ragna_2
	goto ParcelRiver_Ragna_1

ParcelRiver_Ragna_7:
# 1352 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R3
	goto ParcelRiver_Ragna_6

ParcelRiver_Ragna_8:
# 1351 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R3
	goto_if 0, ParcelRiver_Ragna_7
	goto ParcelRiver_Ragna_6

ParcelRiver_Ragna_12:
# 1355 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R4
	goto ParcelRiver_Ragna_11

ParcelRiver_Ragna_13:
# 1354 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R4
	goto_if 0, ParcelRiver_Ragna_12
	goto ParcelRiver_Ragna_11

ParcelRiver_Ragna_17:
# 1358 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R5
	goto ParcelRiver_Ragna_16

ParcelRiver_Ragna_18:
# 1357 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R5
	goto_if 0, ParcelRiver_Ragna_17
	goto ParcelRiver_Ragna_16


ParcelRiver_Ragna_FirstWin::
# 1364 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
# 1365 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R2::
# 1369 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1370 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1371 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_0, MSGBOX_YESNO
# 1372 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R2_2
# 1377 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R2, ParcelRiver_Ragna_R2_Text_2
# 1378 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_3, MSGBOX_DEFAULT
# 1379 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R2_2:
# 1373 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1374 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R3::
# 1383 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1384 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1385 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R3_Text_0, MSGBOX_YESNO
# 1386 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R3_2
# 1391 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R3, ParcelRiver_Ragna_R3_Text_1
# 1392 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R3_Text_2, MSGBOX_DEFAULT
# 1393 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R3_2:
# 1387 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1388 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R4::
# 1397 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1398 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1399 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R4_Text_0, MSGBOX_YESNO
# 1400 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R4_2
# 1405 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R4, ParcelRiver_Ragna_R4_Text_1
# 1406 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R4_Text_2, MSGBOX_DEFAULT
# 1407 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R4_2:
# 1401 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1402 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R5::
# 1411 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1412 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1413 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R5_Text_0, MSGBOX_YESNO
# 1414 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R5_2
# 1419 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R5, ParcelRiver_Ragna_R3_Text_1
# 1420 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R5_Text_1, MSGBOX_DEFAULT
# 1421 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R5_2:
# 1415 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1416 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd::
# 1425 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_SIGURD, ParcelRiver_Sigurd_Text_0, ParcelRiver_Sigurd_Text_1, ParcelRiver_Sigurd_FirstWin
# 1429 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1430 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Sigurd_3
ParcelRiver_Sigurd_1:
# 1433 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Sigurd_8
ParcelRiver_Sigurd_6:
# 1436 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Sigurd_13
ParcelRiver_Sigurd_11:
# 1439 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Sigurd_18
ParcelRiver_Sigurd_16:
# 1442 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Sigurd_2:
# 1431 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R2
	goto ParcelRiver_Sigurd_1

ParcelRiver_Sigurd_3:
# 1430 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R2
	goto_if 0, ParcelRiver_Sigurd_2
	goto ParcelRiver_Sigurd_1

ParcelRiver_Sigurd_7:
# 1434 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R3
	goto ParcelRiver_Sigurd_6

ParcelRiver_Sigurd_8:
# 1433 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R3
	goto_if 0, ParcelRiver_Sigurd_7
	goto ParcelRiver_Sigurd_6

ParcelRiver_Sigurd_12:
# 1437 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R4
	goto ParcelRiver_Sigurd_11

ParcelRiver_Sigurd_13:
# 1436 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R4
	goto_if 0, ParcelRiver_Sigurd_12
	goto ParcelRiver_Sigurd_11

ParcelRiver_Sigurd_17:
# 1440 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R5
	goto ParcelRiver_Sigurd_16

ParcelRiver_Sigurd_18:
# 1439 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R5
	goto_if 0, ParcelRiver_Sigurd_17
	goto ParcelRiver_Sigurd_16


ParcelRiver_Sigurd_FirstWin::
# 1446 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
# 1447 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R2::
# 1451 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1452 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1453 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_0, MSGBOX_YESNO
# 1454 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R2_2
# 1459 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R2, ParcelRiver_Sigurd_R2_Text_2
# 1460 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_3, MSGBOX_DEFAULT
# 1461 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R2_2:
# 1455 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1456 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R3::
# 1465 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1466 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1467 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R3_Text_0, MSGBOX_YESNO
# 1468 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R3_2
# 1473 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R3, ParcelRiver_Sigurd_R3_Text_1
# 1474 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R3_Text_2, MSGBOX_DEFAULT
# 1475 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R3_2:
# 1469 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1470 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R4::
# 1479 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1480 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1481 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R4_Text_0, MSGBOX_YESNO
# 1482 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R4_2
# 1487 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R4, ParcelRiver_Sigurd_R4_Text_1
# 1488 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R4_Text_2, MSGBOX_DEFAULT
# 1489 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R4_2:
# 1483 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1484 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R5::
# 1493 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1494 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1495 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R5_Text_0, MSGBOX_YESNO
# 1496 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R5_2
# 1501 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R5, ParcelRiver_Sigurd_R5_Text_1
# 1502 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R5_Text_2, MSGBOX_DEFAULT
# 1503 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R5_2:
# 1497 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1498 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_ItemPotion::
# 1508 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelRiver_ItemSuperRepel::
# 1509 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_SUPER_REPEL
	end


ParcelRiver_ItemGreatBall::
# 1510 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelRiver_ItemTM19::
# 1511 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_TM19
	end


ParcelRiver_SignTown::
# 1514 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignTown_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignBoard::
# 1518 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignBoard_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignMarket::
# 1522 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelRiver_T_Aud::
# 1528 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_AUD, ParcelRiver_T_Aud_Text_0, ParcelRiver_T_Aud_Text_1, ParcelRiver_T_Aud_FirstWin
# 1532 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1533 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Aud_3
ParcelRiver_T_Aud_1:
# 1536 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Aud_8
ParcelRiver_T_Aud_6:
# 1539 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Aud_13
ParcelRiver_T_Aud_11:
# 1542 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Aud_18
ParcelRiver_T_Aud_16:
# 1545 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Aud_2:
# 1534 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R2
	goto ParcelRiver_T_Aud_1

ParcelRiver_T_Aud_3:
# 1533 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R2
	goto_if 0, ParcelRiver_T_Aud_2
	goto ParcelRiver_T_Aud_1

ParcelRiver_T_Aud_7:
# 1537 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R3
	goto ParcelRiver_T_Aud_6

ParcelRiver_T_Aud_8:
# 1536 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R3
	goto_if 0, ParcelRiver_T_Aud_7
	goto ParcelRiver_T_Aud_6

ParcelRiver_T_Aud_12:
# 1540 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R4
	goto ParcelRiver_T_Aud_11

ParcelRiver_T_Aud_13:
# 1539 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R4
	goto_if 0, ParcelRiver_T_Aud_12
	goto ParcelRiver_T_Aud_11

ParcelRiver_T_Aud_17:
# 1543 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R5
	goto ParcelRiver_T_Aud_16

ParcelRiver_T_Aud_18:
# 1542 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R5
	goto_if 0, ParcelRiver_T_Aud_17
	goto ParcelRiver_T_Aud_16


ParcelRiver_T_Aud_FirstWin::
# 1549 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
# 1550 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R2::
# 1554 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1555 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1556 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_0, MSGBOX_YESNO
# 1557 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R2_2
# 1562 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R2, ParcelRiver_T_Aud_R2_Text_2
# 1563 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_3, MSGBOX_DEFAULT
# 1564 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R2_2:
# 1558 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1559 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R3::
# 1568 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1569 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1570 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R3_Text_0, MSGBOX_YESNO
# 1571 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R3_2
# 1576 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R3, ParcelRiver_T_Aud_R3_Text_1
# 1577 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R3_Text_2, MSGBOX_DEFAULT
# 1578 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R3_2:
# 1572 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1573 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R4::
# 1582 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1583 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1584 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R4_Text_0, MSGBOX_YESNO
# 1585 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R4_2
# 1590 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R4, ParcelRiver_T_Aud_R4_Text_1
# 1591 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R4_Text_2, MSGBOX_DEFAULT
# 1592 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R4_2:
# 1586 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1587 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R5::
# 1596 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1597 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1598 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R5_Text_0, MSGBOX_YESNO
# 1599 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R5_2
# 1604 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R5, ParcelRiver_T_Aud_R5_Text_1
# 1605 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R5_Text_2, MSGBOX_DEFAULT
# 1606 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R5_2:
# 1600 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1601 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen::
# 1610 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ESPEN, ParcelRiver_T_Espen_Text_0, ParcelRiver_T_Espen_Text_1, ParcelRiver_T_Espen_FirstWin
# 1614 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1615 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Espen_3
ParcelRiver_T_Espen_1:
# 1618 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Espen_8
ParcelRiver_T_Espen_6:
# 1621 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Espen_13
ParcelRiver_T_Espen_11:
# 1624 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Espen_18
ParcelRiver_T_Espen_16:
# 1627 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Espen_2:
# 1616 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R2
	goto ParcelRiver_T_Espen_1

ParcelRiver_T_Espen_3:
# 1615 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R2
	goto_if 0, ParcelRiver_T_Espen_2
	goto ParcelRiver_T_Espen_1

ParcelRiver_T_Espen_7:
# 1619 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R3
	goto ParcelRiver_T_Espen_6

ParcelRiver_T_Espen_8:
# 1618 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R3
	goto_if 0, ParcelRiver_T_Espen_7
	goto ParcelRiver_T_Espen_6

ParcelRiver_T_Espen_12:
# 1622 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R4
	goto ParcelRiver_T_Espen_11

ParcelRiver_T_Espen_13:
# 1621 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R4
	goto_if 0, ParcelRiver_T_Espen_12
	goto ParcelRiver_T_Espen_11

ParcelRiver_T_Espen_17:
# 1625 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R5
	goto ParcelRiver_T_Espen_16

ParcelRiver_T_Espen_18:
# 1624 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R5
	goto_if 0, ParcelRiver_T_Espen_17
	goto ParcelRiver_T_Espen_16


ParcelRiver_T_Espen_FirstWin::
# 1631 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
# 1632 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R2::
# 1636 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1637 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1638 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_0, MSGBOX_YESNO
# 1639 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R2_2
# 1644 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R2, ParcelRiver_T_Espen_R2_Text_2
# 1645 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_3, MSGBOX_DEFAULT
# 1646 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R2_2:
# 1640 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1641 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R3::
# 1650 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1651 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1652 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R3_Text_0, MSGBOX_YESNO
# 1653 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R3_2
# 1658 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R3, ParcelRiver_T_Espen_R3_Text_1
# 1659 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R3_Text_2, MSGBOX_DEFAULT
# 1660 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R3_2:
# 1654 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1655 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R4::
# 1664 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1665 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1666 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R4_Text_0, MSGBOX_YESNO
# 1667 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R4_2
# 1672 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R4, ParcelRiver_T_Espen_R4_Text_1
# 1673 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R4_Text_2, MSGBOX_DEFAULT
# 1674 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R4_2:
# 1668 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1669 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R5::
# 1678 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1679 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1680 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R5_Text_0, MSGBOX_YESNO
# 1681 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R5_2
# 1686 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R5, ParcelRiver_T_Espen_R2_Text_2
# 1687 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R5_Text_1, MSGBOX_DEFAULT
# 1688 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R5_2:
# 1682 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1683 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve::
# 1692 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_TRYGVE, ParcelRiver_T_Trygve_Text_0, ParcelRiver_T_Trygve_Text_1, ParcelRiver_T_Trygve_FirstWin
# 1696 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1697 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Trygve_3
ParcelRiver_T_Trygve_1:
# 1700 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Trygve_8
ParcelRiver_T_Trygve_6:
# 1703 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Trygve_13
ParcelRiver_T_Trygve_11:
# 1706 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Trygve_18
ParcelRiver_T_Trygve_16:
# 1709 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Trygve_2:
# 1698 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R2
	goto ParcelRiver_T_Trygve_1

ParcelRiver_T_Trygve_3:
# 1697 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R2
	goto_if 0, ParcelRiver_T_Trygve_2
	goto ParcelRiver_T_Trygve_1

ParcelRiver_T_Trygve_7:
# 1701 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R3
	goto ParcelRiver_T_Trygve_6

ParcelRiver_T_Trygve_8:
# 1700 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R3
	goto_if 0, ParcelRiver_T_Trygve_7
	goto ParcelRiver_T_Trygve_6

ParcelRiver_T_Trygve_12:
# 1704 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R4
	goto ParcelRiver_T_Trygve_11

ParcelRiver_T_Trygve_13:
# 1703 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R4
	goto_if 0, ParcelRiver_T_Trygve_12
	goto ParcelRiver_T_Trygve_11

ParcelRiver_T_Trygve_17:
# 1707 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R5
	goto ParcelRiver_T_Trygve_16

ParcelRiver_T_Trygve_18:
# 1706 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R5
	goto_if 0, ParcelRiver_T_Trygve_17
	goto ParcelRiver_T_Trygve_16


ParcelRiver_T_Trygve_FirstWin::
# 1713 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
# 1714 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R2::
# 1718 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1719 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1720 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_0, MSGBOX_YESNO
# 1721 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R2_2
# 1726 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R2, ParcelRiver_T_Trygve_R2_Text_2
# 1727 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_3, MSGBOX_DEFAULT
# 1728 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R2_2:
# 1722 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1723 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R3::
# 1732 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1733 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1734 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R3_Text_0, MSGBOX_YESNO
# 1735 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R3_2
# 1740 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R3, ParcelRiver_T_Trygve_R3_Text_1
# 1741 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R3_Text_2, MSGBOX_DEFAULT
# 1742 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R3_2:
# 1736 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1737 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R4::
# 1746 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1747 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1748 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R4_Text_0, MSGBOX_YESNO
# 1749 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R4_2
# 1754 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R4, ParcelRiver_T_Trygve_R3_Text_1
# 1755 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R4_Text_1, MSGBOX_DEFAULT
# 1756 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R4_2:
# 1750 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1751 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R5::
# 1760 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1761 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1762 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R5_Text_0, MSGBOX_YESNO
# 1763 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R5_2
# 1768 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R5, ParcelRiver_T_Trygve_R5_Text_1
# 1769 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R5_Text_2, MSGBOX_DEFAULT
# 1770 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R5_2:
# 1764 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1765 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_BeaverStump::
# 1776 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1777 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER, ParcelRiver_BeaverStump_3
ParcelRiver_BeaverStump_1:
# 1783 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_BeaverStump_Text_1, MSGBOX_SIGN
# 1784 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_BeaverStump_2:
# 1778 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_BeaverStump_Text_0, MSGBOX_SIGN
# 1779 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER_SEEN
# 1780 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_BeaverStump_3:
# 1777 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BEAVER_SEEN, ParcelRiver_BeaverStump_2
	goto ParcelRiver_BeaverStump_1


ParcelRiver_PerrinScene::
# 1790 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_4, ParcelRiver_PerrinScene_2
# 1794 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 1795 "data/maps/ParcelRiver/scripts.pory"
	playse SE_PIN
# 1796 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1797 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1798 "data/maps/ParcelRiver/scripts.pory"
	applymovement 34, Movement_ParcelRiver_PerrinIn
# 1799 "data/maps/ParcelRiver/scripts.pory"
	waitmovement 0
# 1800 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1801 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_4, ParcelRiver_PerrinScene_Text_2
# 1802 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1803 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1804 "data/maps/ParcelRiver/scripts.pory"
	applymovement 34, Movement_ParcelRiver_PerrinOut
# 1805 "data/maps/ParcelRiver/scripts.pory"
	waitmovement 0
# 1806 "data/maps/ParcelRiver/scripts.pory"
	removeobject 34
# 1807 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_PERRIN_4
# 1808 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1809 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_PerrinScene_2:
# 1791 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelRiver_PerrinTalk::
# 1813 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1814 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1815 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1816 "data/maps/ParcelRiver/scripts.pory"
	release
	end


# 1819 "data/maps/ParcelRiver/scripts.pory"
Movement_ParcelRiver_PerrinIn:
# 1819 "data/maps/ParcelRiver/scripts.pory"
	walk_down
# 1819 "data/maps/ParcelRiver/scripts.pory"
	walk_down
	step_end

# 1820 "data/maps/ParcelRiver/scripts.pory"
Movement_ParcelRiver_PerrinOut:
# 1820 "data/maps/ParcelRiver/scripts.pory"
	walk_up
# 1820 "data/maps/ParcelRiver/scripts.pory"
	walk_up
	step_end

ParcelRiver_Epilogue::
# 1824 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 1825 "data/maps/ParcelRiver/scripts.pory"
	delay 20
# 1826 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Epilogue_Text_0, MSGBOX_DEFAULT
# 1827 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1828 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 4
# 1829 "data/maps/ParcelRiver/scripts.pory"
	warp MAP_PARCEL_HIGHLANDS, 20, 68
# 1830 "data/maps/ParcelRiver/scripts.pory"
	waitstate
	end


ParcelRiver_FirstEntry_Text_0:
# 51 "data/maps/ParcelRiver/scripts.pory"
	.string "The land lifts and the trees thin. The\n"
	.string "water that fouled the basin runs out of\l"
	.string "here, clearer than below. Not clear.$"

ParcelRiver_FirstEntry_Text_1:
# 52 "data/maps/ParcelRiver/scripts.pory"
	.string "Market stalls up the street. Nets on a\n"
	.string "rail. A crop running green right down to\l"
	.string "the bank. {STR_VAR_1} takes the\l"
	.string "road ahead and doesn't hurry.$"

ParcelRiver_FirstEntry_Text_2:
# 53 "data/maps/ParcelRiver/scripts.pory"
	.string "HALE's note, folded in the kit:\n"
	.string "WATERSHED. LIVING SYSTEM, ACTIVE USE.\p"
	.string "Read the whole river before you judge\n"
	.string "any part of it.$"

ParcelRiver_ChannelCut_Text_0:
# 66 "data/maps/ParcelRiver/scripts.pory"
	.string "The straightened mile. In the notebook.$"

ParcelRiver_ChannelCut_Text_1:
# 70 "data/maps/ParcelRiver/scripts.pory"
	.string "Here the bank is cut straight as a rule,\n"
	.string "the bends dredged out, the slack water\l"
	.string "gone with them.\p"
	.string "Board stakes every fifty paces.\n"
	.string "Nothing slows down here anymore, and\l"
	.string "nothing stays. Written down.$"

ParcelRiver_DamRelic_Text_0:
# 81 "data/maps/ParcelRiver/scripts.pory"
	.string "The old dam. In the notebook.$"

ParcelRiver_DamRelic_Text_1:
# 85 "data/maps/ParcelRiver/scripts.pory"
	.string "A tangle of grey timber across the\n"
	.string "current, gapped in the middle. Not built.\l"
	.string "Chewed.\p"
	.string "The engineers who kept it are gone from\n"
	.string "this reach; nothing has patched it in\l"
	.string "years. The pond it held is a channel now.\l"
	.string "Written down.$"

ParcelRiver_RunoffStain_Text_0:
# 96 "data/maps/ParcelRiver/scripts.pory"
	.string "The bloom. In the notebook.$"

ParcelRiver_RunoffStain_Text_1:
# 100 "data/maps/ParcelRiver/scripts.pory"
	.string "Below the plots the water goes green\n"
	.string "and thick, a scum of it against the bank\l"
	.string "where the field drain comes in.\p"
	.string "It smells of fertiliser, sweet and\n"
	.string "wrong. Written down.$"

ParcelRiver_CleanReach_Text_0:
# 111 "data/maps/ParcelRiver/scripts.pory"
	.string "The clean reach. The baseline. In the\n"
	.string "notebook.$"

ParcelRiver_CleanReach_Text_1:
# 115 "data/maps/ParcelRiver/scripts.pory"
	.string "Above the town the river braids over\n"
	.string "gravel, cold and quick and clear to the\l"
	.string "bottom. Larvae under every stone. A\l"
	.string "SURSKIT on the eddy.\p"
	.string "This is what the whole river was. It is\n"
	.string "still here. Written down, and underlined.$"

ParcelRiver_IrrigationBoard_Text_0:
# 126 "data/maps/ParcelRiver/scripts.pory"
	.string "The Board's notice. In the notebook.$"

ParcelRiver_IrrigationBoard_Text_1:
# 130 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND WATER BOARD -- a MEREHOLT\n"
	.string "FOUNDATION partnership.\p"
	.string "IRRIGATION ALLOCATION: plots 1-14,\n"
	.string "metered. CHANNEL IMPROVEMENT, PHASE 2:\l"
	.string "flood control works, upstream reach.\l"
	.string "Consultation closed.\p"
	.string "The crest on the sign is the crest on\n"
	.string "the fertiliser sacks. Written down.$"

ParcelRiver_Harland_Text_0:
# 142 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: ILEX signed you off. Good.\p"
	.string "Stay the night. On the boat. The river's\n"
	.string "different in the dark, and you've only\l"
	.string "read it in daylight.$"

ParcelRiver_Harland_Text_1:
# 143 "data/maps/ParcelRiver/scripts.pory"
	.string "Stay the night?$"

ParcelRiver_Harland_Text_2:
# 145 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Offer stands.$"

ParcelRiver_Harland_Text_3:
# 151 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Hear that? That's the cut. Day\n"
	.string "and night, same note. Used to be the\l"
	.string "water had a dozen voices along here.$"

ParcelRiver_Harland_Text_4:
# 152 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: My father could tell the pools\n"
	.string "apart with his eyes shut. I can't. There\l"
	.string "aren't any.$"

ParcelRiver_Harland_Text_5:
# 153 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: The note on this boat comes\n"
	.string "due in spring. If the catch holds, I\l"
	.string "keep her. If it doesn't, a MEREHOLT\l"
	.string "outfit I've never met owns a boat my\l"
	.string "grandfather built.\p"
	.string "That's what 'relief' bought me. I'm not\n"
	.string "blaming you. I'm telling you the price.$"

ParcelRiver_Harland_Text_6:
# 154 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The upstream reach is still\n"
	.string "clean. ILEX says it can come back.$"

ParcelRiver_Harland_Text_7:
# 155 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Then write it so somebody with\n"
	.string "a pen believes it. I've tried the other\l"
	.string "way.\p"
	.string "Go to sleep, RANGER. River's not going\n"
	.string "anywhere. Yet.$"

ParcelRiver_Harland_Text_8:
# 159 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Morning. Coffee's bad. Catch\n"
	.string "was four. Go on, you've got a mountain\l"
	.string "to climb, I hear.$"

ParcelRiver_Harland_Text_9:
# 164 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Catch was four. Same as\n"
	.string "yesterday. Go on.$"

ParcelRiver_Harland_Text_10:
# 172 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Read me right when you write\n"
	.string "it.$"

ParcelRiver_Harland_Text_11:
# 176 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: You're the one with the\n"
	.string "notebook. Word came up the river ahead\l"
	.string "of you.\p"
	.string "Come to tell me the fishing's poor. As if\n"
	.string "I can't read my own water.$"

ParcelRiver_Harland_Text_12:
# 177 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The catch is down because\n"
	.string "the river is. The cut. The bloom off the\l"
	.string "fields.$"

ParcelRiver_Harland_Text_13:
# 178 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: I KNOW why it's down. Knew\n"
	.string "before you could walk.\p"
	.string "My father fished this. His father\n"
	.string "helped build half that old dam your\l"
	.string "people keep photographing, back when\l"
	.string "building it was the work.$"

ParcelRiver_Harland_Text_14:
# 179 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: And the Board says straighten\n"
	.string "the cut and the floods stop taking my\l"
	.string "gear. The FOUNDATION carries the note\l"
	.string "on the boat so I keep working while it\l"
	.string "all gets sorted.\p"
	.string "So what is it you'd have me do? Tie up\n"
	.string "and starve on principle?$"

ParcelRiver_Harland_Text_15:
# 180 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: …Who holds the note on the\n"
	.string "boat?$"

ParcelRiver_Harland_Text_16:
# 181 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: A MEREHOLT outfit. Coastal\n"
	.string "lending.\p"
	.string "Same crest as the fertiliser sacks.\n"
	.string "Same crest as the Board. Hadn't set\l"
	.string "those side by side before. Don't care\l"
	.string "for how they line up.$"

ParcelRiver_Harland_Text_17:
# 182 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Write your report, RANGER.\n"
	.string "Read me right when you do.\p"
	.string "I'm not your villain. I'm the man they'll\n"
	.string "send the bill to.$"

ParcelRiver_Farmer_Text_0:
# 193 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: ILEX put a buffer strip in her\n"
	.string "report. Two rows. Named a fund that'd\l"
	.string "pay for it.\p"
	.string "I'll believe the fund when it's in my\n"
	.string "hand. But she wrote it down. Nobody else\l"
	.string "has.$"

ParcelRiver_Farmer_Text_1:
# 197 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: Mind the rows, RANGER.\p"
	.string "They tell me my runoff greens the\n"
	.string "water. Likely true. They also tell me\l"
	.string "grow more for less, or sell to the\l"
	.string "FOUNDATION buyer at the FOUNDATION's\l"
	.string "number.$"

ParcelRiver_Farmer_Text_2:
# 198 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: I'd put a buffer strip along\n"
	.string "the bank tomorrow. Costs me two rows\l"
	.string "and a season's yield.\p"
	.string "You find me the one who'll pay for those\n"
	.string "two rows, and I'll dig it before you've\l"
	.string "walked home.$"

ParcelRiver_Ilex_Text_0:
# 208 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Stressed, not shifted. Hold that\n"
	.string "difference like a coal.\p"
	.string "Most of the country you'll meet from\n"
	.string "here has already chosen. This river\l"
	.string "hasn't. Yet.$"

ParcelRiver_Ilex_Text_1:
# 216 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: The cut. The old dam. The bloom.\n"
	.string "The clean reach. The Board's sign. The\l"
	.string "man on the boat.\p"
	.string "Put a name on the river.$"

ParcelRiver_Ilex_Text_2:
# 218 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: STRESSED.\p"
	.string "The engineers are thinning. The cut\n"
	.string "took the slack water. The bloom is\l"
	.string "climbing. But the sensitive guild is\l"
	.string "still in that upstream reach. The web\l"
	.string "hasn't simplified yet.$"

ParcelRiver_Ilex_Text_3:
# 219 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Which means this is the rarest\n"
	.string "reading you will ever file. The one where\l"
	.string "doing the right thing in time still does\l"
	.string "something.$"

ParcelRiver_Ilex_Text_4:
# 220 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: So we intervene. Pull the\n"
	.string "cut, mend the dam…$"

ParcelRiver_Ilex_Text_5:
# 221 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Some of it. Not all of it, and not\n"
	.string "by signing the Board's plan.\p"
	.string "Relieve what's reversible: the buffer\n"
	.string "strip, the bloom, the fish passage.\l"
	.string "Refuse what isn't, dressed as relief:\l"
	.string "another straightened mile, another\l"
	.string "'flood control' that finishes the slack\l"
	.string "water.$"

ParcelRiver_Ilex_Text_6:
# 222 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: A stressed river doesn't need a\n"
	.string "hero. It needs someone who can tell the\l"
	.string "two apart and has the spine to say so\l"
	.string "out loud. You said so in the hall. I heard\l"
	.string "you.$"

ParcelRiver_Ilex_Text_7:
# 225 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Watershed Certification. HALE\n"
	.string "would make you walk back for it. I won't.\p"
	.string "You read the window. Now you keep it\n"
	.string "open.$"

ParcelRiver_Ilex_Text_8:
# 234 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Don't classify a river from one\n"
	.string "bend. Walk the bank: the cut, the old\l"
	.string "dam, the bloom off the fields, the clean\l"
	.string "water above the town. Read the Board's\l"
	.string "sign. Hear the man on the boat.\p"
	.string "Then come put a name to it.$"

ParcelRiver_Dorsey_Text_0:
# 247 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: You've walked the bank. I can\n"
	.string "see it on your boots.\p"
	.string "Phase 2 is flood control, RANGER. Six\n"
	.string "farms lost gear last spring. The Board's\l"
	.string "plan stops that. Your ILEX calls it\l"
	.string "'finishing the slack water'. I call it\l"
	.string "keeping people's sheds dry.$"

ParcelRiver_Dorsey_Text_1:
# 248 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Come to the hall. There's a\n"
	.string "meeting. Say your piece in front of\l"
	.string "them, not behind my back. I'd rather\l"
	.string "lose an argument in public than win one\l"
	.string "in a report.$"

ParcelRiver_Dorsey_Text_2:
# 252 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: RANGER! Market day. Best day\n"
	.string "to see ELVSUND. Eggs, trout, the first\l"
	.string "greens.\p"
	.string "Trout's down this year. The Board has a\n"
	.string "plan for that. Phase 2. You'll have seen\l"
	.string "the notice.$"

ParcelRiver_Dorsey_Text_3:
# 253 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Walk the bank first, then come\n"
	.string "and tell me what you think. I mean that.\l"
	.string "I grew up two valleys over. My father's\l"
	.string "fields flooded every spring and nobody\l"
	.string "came.\p"
	.string "I came.$"

ParcelRiver_Aide_Text_0:
# 260 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: Phase 2 consultation is closed,\n"
	.string "but the councilman takes questions on\l"
	.string "market days. Form a line. There is no\l"
	.string "line.$"

ParcelRiver_VendorEggs_Text_0:
# 269 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Eggs, greens, a jar of honey. The\n"
	.string "honey's from upstream, where the\l"
	.string "flowers still come. Buy something or\l"
	.string "move along, RANGER, I've a stall to mind.$"

ParcelRiver_VendorFish_Text_0:
# 277 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. Four trout\n"
	.string "today. I sold them to the FOUNDATION\l"
	.string "buyer at his number because nobody\l"
	.string "else was buying.\p"
	.string "Your ILEX wrote 'fish passage' in her\n"
	.string "report. Tell her I'll hold her to it.$"

ParcelRiver_VendorFish_Text_1:
# 281 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. I sell what he\n"
	.string "catches. There's less to sell every\l"
	.string "spring and more people asking why.\p"
	.string "I tell them the Board has a plan. The\n"
	.string "Board always has a plan.$"

ParcelRiver_OldMan_Text_0:
# 288 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: There was a pond above the\n"
	.string "town. Beaver-built. We swam in it as\l"
	.string "boys. Then the trappers, then the\l"
	.string "Board.\p"
	.string "Now it's a ditch with a stake every\n"
	.string "fifty paces. Progress, they call it. I\l"
	.string "call it a ditch.$"

ParcelRiver_Girl_Text_0:
# 295 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman gave me a ribbon!\n"
	.string "It says PHASE 2 on it. I don't know what\l"
	.string "that is but it's blue.$"

ParcelRiver_Boy_Text_0:
# 302 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Don't swim below the plots. Mum\n"
	.string "says the water's got green stuff in it\l"
	.string "that makes your skin go funny. Above\l"
	.string "the town's fine. Above the town's\l"
	.string "freezing.$"

ParcelRiver_PondFisher_Text_0:
# 309 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: I fish the town pond now.\n"
	.string "Stocked. It's not the same, but it's not\l"
	.string "green either.$"

ParcelRiver_AnglerTrainer_Text_0:
# 319 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years on this reach. You're\n"
	.string "the first one came up here to LOOK\l"
	.string "instead of promise. Means something.$"

ParcelRiver_AnglerTrainer_Text_1:
# 324 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: That's it! That's the one. My\n"
	.string "father's. Snagged it on the gravel\l"
	.string "above town thirty years back and never\l"
	.string "found it.\p"
	.string "You went and looked. Nobody looks.$"

ParcelRiver_AnglerTrainer_Text_2:
# 325 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Take the rod. The good one. I'm\n"
	.string "done with the big water; my knees say\l"
	.string "so.\p"
	.string "Somebody ought to be pulling SEAKING\n"
	.string "out of this river who'll write down how\l"
	.string "many.$"

ParcelRiver_AnglerTrainer_Text_3:
# 332 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Above the town, on the gravel,\n"
	.string "where the water's still clear. A brass\l"
	.string "lure. You'd see it if anyone would.$"

ParcelRiver_AnglerTrainer_Text_4:
# 338 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years I worked this reach.\n"
	.string "Pulled SEAKING out by the armful, once.\p"
	.string "Now look at it. Battle me. I could use\n"
	.string "the distraction.$"

ParcelRiver_AnglerTrainer_Text_5:
# 339 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Hah. You've still got the eye for\n"
	.string "it. Wish the river did.$"

ParcelRiver_AnglerTrainer_Text_6:
# 340 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The Board swears the cut'll bring\n"
	.string "the fish back. The Board swears a lot of\l"
	.string "things.\p"
	.string "You've got the eye. Do an old man a\n"
	.string "kindness. There's a brass lure on the\l"
	.string "gravel above town, my father's, lost\l"
	.string "thirty years. If anyone can spot it in\l"
	.string "that clear water, it's you.$"

ParcelRiver_Lure_Text_0:
# 347 "data/maps/ParcelRiver/scripts.pory"
	.string "Something glints on the gravel under\n"
	.string "the clear water. A brass lure, green with\l"
	.string "age, the hook long gone.\p"
	.string "Fished out.$"

ParcelRiver_Lure_Text_1:
# 352 "data/maps/ParcelRiver/scripts.pory"
	.string "Clear water over clean gravel. You can\n"
	.string "count the stones.$"

ParcelRiver_Arna_Text_0:
# 360 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: The flower plots are the best\n"
	.string "picnic in the district. Shame about the\l"
	.string "smell off the river. Battle?$"

ParcelRiver_Arna_Text_1:
# 361 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Lovely. Now go away, I'm eating.$"

ParcelRiver_Arna_Text_2:
# 376 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: ROSELIA only grow above the town\n"
	.string "now. Below it, nothing with a scent.$"

ParcelRiver_Arna_R2_Text_0:
# 387 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_Arna_R2_Text_1:
# 389 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Arna_R2_Text_2:
# 393 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: …Again, then. Later.$"

ParcelRiver_Arna_R2_Text_3:
# 394 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Arna_R3_Text_0:
# 401 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRiver_Arna_R3_Text_1:
# 407 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Right. That's the whole of it.$"

ParcelRiver_Arna_R3_Text_2:
# 408 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Arna_R4_Text_0:
# 415 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelRiver_Arna_R4_Text_1:
# 421 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Still yours.$"

ParcelRiver_Arna_R4_Text_2:
# 422 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Arna_R5_Text_0:
# 429 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Arna_R5_Text_1:
# 435 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's the one I wanted to see.$"

ParcelRiver_Arna_R5_Text_2:
# 436 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Botolv_Text_0:
# 442 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Camped on the high meadow a\n"
	.string "week. Seen the Board's boat go up and\l"
	.string "down six times. Seen you once. Battle.$"

ParcelRiver_Botolv_Text_1:
# 443 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Once was enough.$"

ParcelRiver_Botolv_Text_2:
# 458 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They're surveying the upstream\n"
	.string "reach. Stakes, every fifty paces.\l"
	.string "That's the clean bit. Why stake the\l"
	.string "clean bit?$"

ParcelRiver_Botolv_R2_Text_0:
# 469 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiver_Botolv_R2_Text_1:
# 471 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: No hurry. The water keeps.$"

ParcelRiver_Botolv_R2_Text_2:
# 475 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: That's the one I wanted to see.$"

ParcelRiver_Botolv_R2_Text_3:
# 476 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Botolv_R3_Text_0:
# 483 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelRiver_Botolv_R3_Text_1:
# 489 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: …Fair.$"

ParcelRiver_Botolv_R3_Text_2:
# 490 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Botolv_R4_Text_0:
# 497 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Botolv_R4_Text_1:
# 503 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Right. That's the whole of it.$"

ParcelRiver_Botolv_R4_Text_2:
# 504 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Botolv_R5_Text_0:
# 511 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Botolv_R5_Text_1:
# 518 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Gudrun_Text_0:
# 524 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: ILLUMISE light up over the\n"
	.string "ponds at dusk. Fewer every summer. My\l"
	.string "mum says I imagine it. Battle me and tell\l"
	.string "me I don't.$"

ParcelRiver_Gudrun_Text_1:
# 525 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You don't think I imagine it.\n"
	.string "Good.$"

ParcelRiver_Gudrun_Text_2:
# 540 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Twelve last summer. Seven this\n"
	.string "one. I count. Somebody has to.$"

ParcelRiver_Gudrun_R2_Text_0:
# 551 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiver_Gudrun_R2_Text_1:
# 553 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Gudrun_R2_Text_2:
# 557 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: …Again, then. Later.$"

ParcelRiver_Gudrun_R2_Text_3:
# 558 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Gudrun_R3_Text_0:
# 565 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Gudrun_R3_Text_1:
# 571 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: …Fair.$"

ParcelRiver_Gudrun_R3_Text_2:
# 572 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Gudrun_R4_Text_0:
# 579 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_Gudrun_R4_Text_1:
# 585 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Right. That's the whole of it.$"

ParcelRiver_Gudrun_R4_Text_2:
# 586 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Gudrun_R5_Text_0:
# 593 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiver_Gudrun_R5_Text_1:
# 600 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Havard_Text_0:
# 606 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Pond's stocked by the Board.\n"
	.string "Twice a year. You catch one, you thank\l"
	.string "the Board. Battle?$"

ParcelRiver_Havard_Text_1:
# 607 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Don't thank me. Thank the\n"
	.string "Board.$"

ParcelRiver_Havard_Text_2:
# 622 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Stocked fish don't breed. You\n"
	.string "know that, right? They put them in, we\l"
	.string "take them out. That's not a river.\l"
	.string "That's a shop.$"

ParcelRiver_Havard_R2_Text_0:
# 633 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiver_Havard_R2_Text_1:
# 635 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Another time, then.$"

ParcelRiver_Havard_R2_Text_2:
# 639 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Still yours.$"

ParcelRiver_Havard_R2_Text_3:
# 640 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Havard_R3_Text_0:
# 647 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Havard_R3_Text_1:
# 653 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: That's the one I wanted to see.$"

ParcelRiver_Havard_R3_Text_2:
# 654 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Havard_R4_Text_0:
# 661 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Havard_R4_Text_1:
# 667 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: …Fair.$"

ParcelRiver_Havard_R4_Text_2:
# 668 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Havard_R5_Text_0:
# 675 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Havard_R5_Text_1:
# 682 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Idun_Text_0:
# 688 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Cadet IDUN. ILEX has me counting\n"
	.string "larvae under stones. Spar first. Then\l"
	.string "I'll show you my count.$"

ParcelRiver_Idun_Text_1:
# 689 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Eighteen species above the town.\n"
	.string "Four below. That's my count.$"

ParcelRiver_Idun_Text_2:
# 704 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: ILEX says don't call it dead until\n"
	.string "you've turned every stone. I turned\l"
	.string "every stone. It's not dead. Yet.$"

ParcelRiver_Idun_R2_Text_0:
# 715 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelRiver_Idun_R2_Text_1:
# 717 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Another time, then.$"

ParcelRiver_Idun_R2_Text_2:
# 721 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: …Fair.$"

ParcelRiver_Idun_R2_Text_3:
# 722 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Idun_R3_Text_0:
# 729 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Idun_R3_Text_1:
# 735 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: …Again, then. Later.$"

ParcelRiver_Idun_R3_Text_2:
# 736 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Idun_R4_Text_0:
# 743 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelRiver_Idun_R4_Text_1:
# 749 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Right. That's the whole of it.$"

ParcelRiver_Idun_R4_Text_2:
# 750 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Idun_R5_Text_0:
# 757 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Idun_R5_Text_1:
# 764 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Joar_Text_0:
# 770 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: The plots have the best bugs. The\n"
	.string "farmer lets me in if I don't tread the\l"
	.string "rows. You're treading the rows.$"

ParcelRiver_Joar_Text_1:
# 771 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Fine, tread them.$"

ParcelRiver_Joar_Text_2:
# 786 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: VOLBEAT in the plots, none in the\n"
	.string "fields below. The fields below get the\l"
	.string "sacks with the crest on.$"

ParcelRiver_Joar_R2_Text_0:
# 797 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Joar_R2_Text_1:
# 799 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Another time, then.$"

ParcelRiver_Joar_R2_Text_2:
# 803 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Noted. Properly, this time.$"

ParcelRiver_Joar_R2_Text_3:
# 804 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Joar_R3_Text_0:
# 811 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Joar_R3_Text_1:
# 817 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: That's the one I wanted to see.$"

ParcelRiver_Joar_R3_Text_2:
# 818 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Joar_R4_Text_0:
# 825 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Joar_R4_Text_1:
# 831 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Still yours.$"

ParcelRiver_Joar_R4_Text_2:
# 832 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Joar_R5_Text_0:
# 839 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Joar_R5_Text_1:
# 846 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Kari_Text_0:
# 852 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The puddles by the depot are the\n"
	.string "only wet ground the Board hasn't\l"
	.string "metered. Yet. Battle!$"

ParcelRiver_Kari_Text_1:
# 853 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Metered that, didn't you.$"

ParcelRiver_Kari_Text_2:
# 868 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The depot pays by weight. Nobody\n"
	.string "asks what's in the sacks they sell you\l"
	.string "for the weight.$"

ParcelRiver_Kari_R2_Text_0:
# 879 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelRiver_Kari_R2_Text_1:
# 881 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Fine. Same spot.$"

ParcelRiver_Kari_R2_Text_2:
# 885 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: That's the one I wanted to see.$"

ParcelRiver_Kari_R2_Text_3:
# 886 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Kari_R3_Text_0:
# 893 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Kari_R3_Text_1:
# 899 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Right. That's the whole of it.$"

ParcelRiver_Kari_R3_Text_2:
# 900 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Kari_R4_Text_0:
# 907 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Kari_R4_Text_1:
# 914 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Kari_R5_Text_0:
# 921 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_Kari_R5_Text_1:
# 927 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: …Fair.$"

ParcelRiver_Kari_R5_Text_2:
# 928 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Lars_Text_0:
# 934 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The rocks by the pond are the\n"
	.string "only rocks for a mile. I'm a HIKER. I take\l"
	.string "what I can get. Battle.$"

ParcelRiver_Lars_Text_1:
# 935 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Take that, then.$"

ParcelRiver_Lars_Text_2:
# 950 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The mountain's north, past the\n"
	.string "clean water. It's got proper rock. And a\l"
	.string "MEREHOLT office at the top of the pass,\l"
	.string "I hear.$"

ParcelRiver_Lars_R2_Text_0:
# 961 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_Lars_R2_Text_1:
# 963 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Suit yourself. I'm here.$"

ParcelRiver_Lars_R2_Text_2:
# 967 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Still yours.$"

ParcelRiver_Lars_R2_Text_3:
# 968 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Lars_R3_Text_0:
# 975 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRiver_Lars_R3_Text_1:
# 981 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: …Fair.$"

ParcelRiver_Lars_R3_Text_2:
# 982 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Lars_R4_Text_0:
# 989 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Lars_R4_Text_1:
# 996 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Lars_R5_Text_0:
# 1003 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_Lars_R5_Text_1:
# 1009 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's the one I wanted to see.$"

ParcelRiver_Lars_R5_Text_2:
# 1010 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Marit_Text_0:
# 1016 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: I live on the farm. The field\n"
	.string "drain runs under my window. I know what\l"
	.string "the river smells like at night. Battle?$"

ParcelRiver_Marit_Text_1:
# 1017 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Smells better than losing.$"

ParcelRiver_Marit_Text_2:
# 1032 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Dad would dig the buffer strip\n"
	.string "tomorrow. Two rows. Nobody's paying for\l"
	.string "two rows.$"

ParcelRiver_Marit_R2_Text_0:
# 1043 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiver_Marit_R2_Text_1:
# 1045 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Marit_R2_Text_2:
# 1049 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's the one I wanted to see.$"

ParcelRiver_Marit_R2_Text_3:
# 1050 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Marit_R3_Text_0:
# 1057 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Marit_R3_Text_1:
# 1063 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Noted. Properly, this time.$"

ParcelRiver_Marit_R3_Text_2:
# 1064 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Marit_R4_Text_0:
# 1071 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Marit_R4_Text_1:
# 1077 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Still yours.$"

ParcelRiver_Marit_R4_Text_2:
# 1078 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Marit_R5_Text_0:
# 1085 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Marit_R5_Text_1:
# 1091 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: …Again, then. Later.$"

ParcelRiver_Marit_R5_Text_2:
# 1092 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_Njal_Text_0:
# 1098 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: ELECTRIKE from the power line\n"
	.string "cut, north of here. Fastest thing in the\l"
	.string "valley. Battle!$"

ParcelRiver_Njal_Text_1:
# 1099 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Fast, not strong. Noted.$"

ParcelRiver_Njal_Text_2:
# 1114 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: They strung the line to the Board\n"
	.string "office last year. For the meters. The\l"
	.string "meters need power. The farms didn't.$"

ParcelRiver_Njal_R2_Text_0:
# 1125 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_Njal_R2_Text_1:
# 1127 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Another time, then.$"

ParcelRiver_Njal_R2_Text_2:
# 1131 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Noted. Properly, this time.$"

ParcelRiver_Njal_R2_Text_3:
# 1132 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Njal_R3_Text_0:
# 1139 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Njal_R3_Text_1:
# 1145 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Still yours.$"

ParcelRiver_Njal_R3_Text_2:
# 1146 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Njal_R4_Text_0:
# 1153 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRiver_Njal_R4_Text_1:
# 1159 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: …Again, then. Later.$"

ParcelRiver_Njal_R4_Text_2:
# 1160 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Njal_R5_Text_0:
# 1167 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Njal_R5_Text_1:
# 1173 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: …Fair.$"

ParcelRiver_Njal_R5_Text_2:
# 1174 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Ottar_Text_0:
# 1180 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: One SEAKING. Took me all spring.\n"
	.string "I'm not sharing the bank. Battle.$"

ParcelRiver_Ottar_Text_1:
# 1181 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Share, then.$"

ParcelRiver_Ottar_Text_2:
# 1196 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: DELL says the river used to give\n"
	.string "SEAKING by the armful. I believe him.\l"
	.string "I've seen the photographs.$"

ParcelRiver_Ottar_R2_Text_0:
# 1207 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Ottar_R2_Text_1:
# 1209 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Ottar_R2_Text_2:
# 1213 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: …Fair.$"

ParcelRiver_Ottar_R2_Text_3:
# 1214 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Ottar_R3_Text_0:
# 1221 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Ottar_R3_Text_1:
# 1227 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: That's the one I wanted to see.$"

ParcelRiver_Ottar_R3_Text_2:
# 1228 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Ottar_R4_Text_0:
# 1235 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Ottar_R4_Text_1:
# 1241 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Still yours.$"

ParcelRiver_Ottar_R4_Text_2:
# 1242 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Ottar_R5_Text_0:
# 1249 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiver_Ottar_R5_Text_1:
# 1255 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: …Again, then. Later.$"

ParcelRiver_Ottar_R5_Text_2:
# 1256 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Paal_Text_0:
# 1262 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: The bank's a highway. Board\n"
	.string "boats, Corps cadets, now you. Battle,\l"
	.string "and then walk somewhere else.$"

ParcelRiver_Paal_Text_1:
# 1263 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Walk wherever you like.$"

ParcelRiver_Paal_Text_2:
# 1278 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: There's a man on a boat down by\n"
	.string "the plots who talks to nobody. HARLAND.\l"
	.string "He talked to a RANGER once. It didn't go\l"
	.string "well, I hear.$"

ParcelRiver_Paal_R2_Text_0:
# 1289 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Paal_R2_Text_1:
# 1291 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Another time, then.$"

ParcelRiver_Paal_R2_Text_2:
# 1295 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: That's the one I wanted to see.$"

ParcelRiver_Paal_R2_Text_3:
# 1296 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Paal_R3_Text_0:
# 1303 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Paal_R3_Text_1:
# 1309 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: …Again, then. Later.$"

ParcelRiver_Paal_R3_Text_2:
# 1310 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Paal_R4_Text_0:
# 1317 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Paal_R4_Text_1:
# 1324 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Paal_R5_Text_0:
# 1331 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Paal_R5_Text_1:
# 1338 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Ragna_Text_0:
# 1344 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The river's thoughts are loud\n"
	.string "here. Fast. Angry. Below the cut it\l"
	.string "stops thinking at all. Battle me.$"

ParcelRiver_Ragna_Text_1:
# 1345 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Your thoughts are loud too.$"

ParcelRiver_Ragna_Text_2:
# 1360 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The councilman's thoughts are\n"
	.string "the loudest in the valley. He believes\l"
	.string "every word. That's the strange part.$"

ParcelRiver_Ragna_R2_Text_0:
# 1371 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiver_Ragna_R2_Text_1:
# 1373 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Suit yourself. I'm here.$"

ParcelRiver_Ragna_R2_Text_2:
# 1377 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: …Again, then. Later.$"

ParcelRiver_Ragna_R2_Text_3:
# 1378 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Ragna_R3_Text_0:
# 1385 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Ragna_R3_Text_1:
# 1391 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: …Fair.$"

ParcelRiver_Ragna_R3_Text_2:
# 1392 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Ragna_R4_Text_0:
# 1399 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Ragna_R4_Text_1:
# 1405 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Noted. Properly, this time.$"

ParcelRiver_Ragna_R4_Text_2:
# 1406 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Ragna_R5_Text_0:
# 1413 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Ragna_R5_Text_1:
# 1420 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_Sigurd_Text_0:
# 1426 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Cadet SIGURD, on the depot\n"
	.string "watch. HALE wants to know what goes in\l"
	.string "and what comes out. Spar.$"

ParcelRiver_Sigurd_Text_1:
# 1427 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Good. The sacks go in. The\n"
	.string "money comes out. That's my report.$"

ParcelRiver_Sigurd_Text_2:
# 1442 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: The depot buys at the\n"
	.string "FOUNDATION's number and sells the\l"
	.string "sacks at the FOUNDATION's number. Both\l"
	.string "numbers are the same man's.$"

ParcelRiver_Sigurd_R2_Text_0:
# 1453 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiver_Sigurd_R2_Text_1:
# 1455 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Sigurd_R2_Text_2:
# 1459 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Noted. Properly, this time.$"

ParcelRiver_Sigurd_R2_Text_3:
# 1460 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Sigurd_R3_Text_0:
# 1467 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelRiver_Sigurd_R3_Text_1:
# 1473 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Still yours.$"

ParcelRiver_Sigurd_R3_Text_2:
# 1474 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Sigurd_R4_Text_0:
# 1481 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_Sigurd_R4_Text_1:
# 1487 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: …Again, then. Later.$"

ParcelRiver_Sigurd_R4_Text_2:
# 1488 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelRiver_Sigurd_R5_Text_0:
# 1495 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Sigurd_R5_Text_1:
# 1501 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: …Fair.$"

ParcelRiver_Sigurd_R5_Text_2:
# 1502 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_SignTown_Text_0:
# 1514 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND\p"
	.string "Market Thursdays. Boats moor at the\n"
	.string "east bank. The Water Board office is\l"
	.string "open to ratepayers.$"

ParcelRiver_SignBoard_Text_0:
# 1518 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND WATER BOARD -- NOTICE\p"
	.string "Channel Improvement, Phase 2: works\n"
	.string "commence upstream of the town after\l"
	.string "the harvest. Consultation closed.\l"
	.string "Objections to the Board office. The\l"
	.string "office is closed for objections.$"

ParcelRiver_SignMarket_Text_0:
# 1522 "data/maps/ParcelRiver/scripts.pory"
	.string "MARKET DAY\p"
	.string "Eggs. Greens. Honey. Trout (limited).\n"
	.string "Councilman DORSEY will take questions\l"
	.string "at noon.$"

ParcelRiver_T_Aud_Text_0:
# 1529 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: The high meadow's the last place\n"
	.string "the flowers come up on their own. Battle\l"
	.string "me among them.$"

ParcelRiver_T_Aud_Text_1:
# 1530 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Among them, beaten.$"

ParcelRiver_T_Aud_Text_2:
# 1545 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Below the town they spray. Above\n"
	.string "the town they don't. You can draw the\l"
	.string "line with your nose.$"

ParcelRiver_T_Aud_R2_Text_0:
# 1556 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_T_Aud_R2_Text_1:
# 1558 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Another time, then.$"

ParcelRiver_T_Aud_R2_Text_2:
# 1562 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: …Fair.$"

ParcelRiver_T_Aud_R2_Text_3:
# 1563 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_T_Aud_R3_Text_0:
# 1570 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelRiver_T_Aud_R3_Text_1:
# 1576 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Right. That's the whole of it.$"

ParcelRiver_T_Aud_R3_Text_2:
# 1577 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_T_Aud_R4_Text_0:
# 1584 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRiver_T_Aud_R4_Text_1:
# 1590 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: That's the one I wanted to see.$"

ParcelRiver_T_Aud_R4_Text_2:
# 1591 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_T_Aud_R5_Text_0:
# 1598 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_T_Aud_R5_Text_1:
# 1604 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: …Again, then. Later.$"

ParcelRiver_T_Aud_R5_Text_2:
# 1605 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_T_Espen_Text_0:
# 1611 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: ELECTRIKE from the power line\n"
	.string "cut. Fastest thing on the farm. Battle!$"

ParcelRiver_T_Espen_Text_1:
# 1612 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Fast. Not fast enough.$"

ParcelRiver_T_Espen_Text_2:
# 1627 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: The line goes to the Board\n"
	.string "office for the meters. The farm got\l"
	.string "nothing off it. Dad says we got the\l"
	.string "view.$"

ParcelRiver_T_Espen_R2_Text_0:
# 1638 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_T_Espen_R2_Text_1:
# 1640 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Another time, then.$"

ParcelRiver_T_Espen_R2_Text_2:
# 1644 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Noted. Properly, this time.$"

ParcelRiver_T_Espen_R2_Text_3:
# 1645 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_T_Espen_R3_Text_0:
# 1652 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_T_Espen_R3_Text_1:
# 1658 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Right. That's the whole of it.$"

ParcelRiver_T_Espen_R3_Text_2:
# 1659 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_T_Espen_R4_Text_0:
# 1666 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_T_Espen_R4_Text_1:
# 1672 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Still yours.$"

ParcelRiver_T_Espen_R4_Text_2:
# 1673 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_T_Espen_R5_Text_0:
# 1680 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_T_Espen_R5_Text_1:
# 1687 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_T_Trygve_Text_0:
# 1693 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: One WHISCASH, out of the clean\n"
	.string "reach. Took three seasons. Battle it.$"

ParcelRiver_T_Trygve_Text_1:
# 1694 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three seasons, and that.$"

ParcelRiver_T_Trygve_Text_2:
# 1709 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They want to put the straight\n"
	.string "channel through the clean reach. Phase\l"
	.string "2. Where do they think the WHISCASH will\l"
	.string "go?$"

ParcelRiver_T_Trygve_R2_Text_0:
# 1720 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_T_Trygve_R2_Text_1:
# 1722 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Suit yourself. I'm here.$"

ParcelRiver_T_Trygve_R2_Text_2:
# 1726 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Noted. Properly, this time.$"

ParcelRiver_T_Trygve_R2_Text_3:
# 1727 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_T_Trygve_R3_Text_0:
# 1734 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelRiver_T_Trygve_R3_Text_1:
# 1740 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: …Fair.$"

ParcelRiver_T_Trygve_R3_Text_2:
# 1741 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_T_Trygve_R4_Text_0:
# 1748 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_T_Trygve_R4_Text_1:
# 1755 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_T_Trygve_R5_Text_0:
# 1762 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_T_Trygve_R5_Text_1:
# 1768 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Right. That's the whole of it.$"

ParcelRiver_T_Trygve_R5_Text_2:
# 1769 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_BeaverStump_Text_0:
# 1778 "data/maps/ParcelRiver/scripts.pory"
	.string "A sapling stump on the bank, gnawed to\n"
	.string "a point. The chips at its foot are pale.\l"
	.string "Fresh.\p"
	.string "Something is building above the town\n"
	.string "again. Written down, and the old man's\l"
	.string "name beside it.$"

ParcelRiver_BeaverStump_Text_1:
# 1783 "data/maps/ParcelRiver/scripts.pory"
	.string "A sapling stump on the bank, gnawed to\n"
	.string "a point.$"

ParcelRiver_PerrinScene_Text_0:
# 1796 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelRiver_PerrinScene_Text_1:
# 1800 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: DORSEY introduced me at the\n"
	.string "market! 'Our newest liaison.' LIAISON,\l"
	.string "WREN.\p"
	.string "Phase 2's going ahead, you know. Flood\n"
	.string "control. You can't argue with dry sheds.\l"
	.string "Battle!$"

ParcelRiver_PerrinScene_Text_2:
# 1801 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: Okay. You CAN argue with it.$"

ParcelRiver_PerrinScene_Text_3:
# 1802 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: I took the desk. Part time's\n"
	.string "full time now. It's good work. It IS.\p"
	.string "HOLLIS asked about you. She asks about\n"
	.string "everyone. It's her best trick.$"

ParcelRiver_PerrinTalk_Text_0:
# 1815 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelRiver_Epilogue_Text_0:
# 1826 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND. Market day. The WATER BOARD\n"
	.string "notice on the pole has six names under\l"
	.string "it, and the sentence they argued about\l"
	.string "for two hours is in.\p"
	.string "Read the whole river before you judge\n"
	.string "any part of it. SLUICE keeps the gate.\l"
	.string "The crossing is still the crossing.$"
