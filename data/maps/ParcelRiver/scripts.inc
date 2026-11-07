ParcelRiver_MapScripts::
# 25 "data/maps/ParcelRiver/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelRiver_OnTransition
	.byte 0


ParcelRiver_OnTransition::
# 30 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_OnTransition_2
# 33 "data/maps/ParcelRiver/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelRiver_OnTransition_1:
	end

ParcelRiver_OnTransition_2:
# 31 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelRiver_OnTransition_1


ParcelRiver_FirstEntry::
# 40 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_RIVER_ARRIVAL, ParcelRiver_FirstEntry_2
# 44 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 45 "data/maps/ParcelRiver/scripts.pory"
	bufferpartymonnick 0, 0
# 46 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_0, MSGBOX_DEFAULT
# 47 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_1, MSGBOX_DEFAULT
# 48 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_2, MSGBOX_DEFAULT
# 49 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_RIVER_ARRIVAL
# 50 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_FirstEntry_2:
	end


ParcelRiver_ChannelCut::
# 56 "data/maps/ParcelRiver/scripts.pory"
	lock
# 57 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 58 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 0
# 59 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 60 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_ChannelCut_2
# 65 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_1, MSGBOX_SIGN
# 66 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 67 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_ChannelCut_2:
# 61 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_0, MSGBOX_SIGN
# 62 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_DamRelic::
# 71 "data/maps/ParcelRiver/scripts.pory"
	lock
# 72 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 73 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 1
# 74 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 75 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_DamRelic_2
# 80 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_1, MSGBOX_SIGN
# 81 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 82 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_DamRelic_2:
# 76 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_0, MSGBOX_SIGN
# 77 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_RunoffStain::
# 86 "data/maps/ParcelRiver/scripts.pory"
	lock
# 87 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 88 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 2
# 89 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 90 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_RunoffStain_2
# 95 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_1, MSGBOX_SIGN
# 96 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 97 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_RunoffStain_2:
# 91 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_0, MSGBOX_SIGN
# 92 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_CleanReach::
# 101 "data/maps/ParcelRiver/scripts.pory"
	lock
# 102 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 103 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 3
# 104 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 105 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_CleanReach_2
# 110 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_1, MSGBOX_SIGN
# 111 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 112 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_CleanReach_2:
# 106 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_0, MSGBOX_SIGN
# 107 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_IrrigationBoard::
# 116 "data/maps/ParcelRiver/scripts.pory"
	lock
# 117 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 118 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 4
# 119 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 120 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_IrrigationBoard_2
# 125 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_1, MSGBOX_SIGN
# 126 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 127 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_IrrigationBoard_2:
# 121 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_0, MSGBOX_SIGN
# 122 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Harland::
# 133 "data/maps/ParcelRiver/scripts.pory"
	lock
# 134 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 135 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Harland_2
# 163 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 164 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 5
# 165 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 166 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_Harland_5
# 171 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_11, MSGBOX_DEFAULT
# 172 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_12, MSGBOX_DEFAULT
# 173 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_13, MSGBOX_DEFAULT
# 174 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_14, MSGBOX_DEFAULT
# 175 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_15, MSGBOX_DEFAULT
# 176 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_16, MSGBOX_DEFAULT
# 177 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_17, MSGBOX_DEFAULT
# 178 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 179 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_2:
# 136 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_RIV_NIGHT_DONE, ParcelRiver_Harland_8
# 159 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_9, MSGBOX_DEFAULT
# 160 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_5:
# 167 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_10, MSGBOX_DEFAULT
# 168 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_8:
# 137 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_0, MSGBOX_DEFAULT
# 138 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_1, MSGBOX_YESNO
# 139 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Harland_11
# 144 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 145 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_3, MSGBOX_DEFAULT
# 147 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_4, MSGBOX_DEFAULT
# 148 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_5, MSGBOX_DEFAULT
# 149 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_6, MSGBOX_DEFAULT
# 150 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_7, MSGBOX_DEFAULT
# 151 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 152 "data/maps/ParcelRiver/scripts.pory"
	delay 60
# 153 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 154 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_8, MSGBOX_DEFAULT
# 155 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_RIV_NIGHT_DONE
# 156 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_11:
# 140 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Farmer::
# 185 "data/maps/ParcelRiver/scripts.pory"
	lock
# 186 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Farmer_2
# 192 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_1, MSGBOX_DEFAULT
# 193 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_2, MSGBOX_DEFAULT
# 194 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Farmer_2:
# 188 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ilex::
# 200 "data/maps/ParcelRiver/scripts.pory"
	lock
# 201 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 202 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Ilex_2
# 207 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 208 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 209 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 210 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelRiver_Ilex_5
# 229 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_8, MSGBOX_DEFAULT
# 230 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_2:
# 203 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_0, MSGBOX_DEFAULT
# 204 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_5:
# 211 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_1, MSGBOX_DEFAULT
# 212 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyRiver
# 213 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_2, MSGBOX_DEFAULT
# 214 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_3, MSGBOX_DEFAULT
# 215 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_4, MSGBOX_DEFAULT
# 216 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_5, MSGBOX_DEFAULT
# 217 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_6, MSGBOX_DEFAULT
# 218 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 6
# 219 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 220 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_7, MSGBOX_DEFAULT
# 221 "data/maps/ParcelRiver/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 222 "data/maps/ParcelRiver/scripts.pory"
	waitfanfare
# 223 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_WATERSHED_CERT
# 224 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 225 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 226 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Dorsey::
# 236 "data/maps/ParcelRiver/scripts.pory"
	lock
# 237 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 238 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 239 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 240 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 241 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Dorsey_2
# 247 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_2, MSGBOX_DEFAULT
# 248 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_3, MSGBOX_DEFAULT
# 249 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Dorsey_2:
# 242 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_0, MSGBOX_DEFAULT
# 243 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_1, MSGBOX_DEFAULT
# 244 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Aide::
# 253 "data/maps/ParcelRiver/scripts.pory"
	lock
# 254 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 255 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_0, MSGBOX_DEFAULT
# 256 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorEggs::
# 262 "data/maps/ParcelRiver/scripts.pory"
	lock
# 263 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 264 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_0, MSGBOX_DEFAULT
# 265 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorFish::
# 269 "data/maps/ParcelRiver/scripts.pory"
	lock
# 270 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 271 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_VendorFish_2
# 276 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_1, MSGBOX_DEFAULT
# 277 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorFish_2:
# 272 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_0, MSGBOX_DEFAULT
# 273 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_OldMan::
# 281 "data/maps/ParcelRiver/scripts.pory"
	lock
# 282 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 283 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_0, MSGBOX_DEFAULT
# 284 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Girl::
# 288 "data/maps/ParcelRiver/scripts.pory"
	lock
# 289 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 290 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_0, MSGBOX_DEFAULT
# 291 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Boy::
# 295 "data/maps/ParcelRiver/scripts.pory"
	lock
# 296 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 297 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_0, MSGBOX_DEFAULT
# 298 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_PondFisher::
# 302 "data/maps/ParcelRiver/scripts.pory"
	lock
# 303 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 304 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_0, MSGBOX_DEFAULT
# 305 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_AnglerTrainer::
# 311 "data/maps/ParcelRiver/scripts.pory"
	lock
# 312 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 313 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_DONE, ParcelRiver_AnglerTrainer_2
# 318 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_LURE, ParcelRiver_AnglerTrainer_5
# 326 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_AnglerTrainer_8
# 331 "data/maps/ParcelRiver/scripts.pory"
	release
# 332 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ANGLER, ParcelRiver_AnglerTrainer_Text_4, ParcelRiver_AnglerTrainer_Text_5
# 335 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_6, MSGBOX_DEFAULT
# 336 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL
	end

ParcelRiver_AnglerTrainer_2:
# 314 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_0, MSGBOX_DEFAULT
# 315 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_5:
# 319 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_1, MSGBOX_DEFAULT
# 320 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_2, MSGBOX_DEFAULT
# 321 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 322 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_DONE
# 323 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_8:
# 327 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_3, MSGBOX_DEFAULT
# 328 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lure::
# 340 "data/maps/ParcelRiver/scripts.pory"
	lock
# 341 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_Lure_3
ParcelRiver_Lure_1:
# 347 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_1, MSGBOX_SIGN
# 348 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_2:
# 342 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_0, MSGBOX_SIGN
# 343 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_LURE
# 344 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_3:
# 341 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DELL_LURE, ParcelRiver_Lure_2
	goto ParcelRiver_Lure_1


ParcelRiver_Arna::
# 354 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ARNA, ParcelRiver_Arna_Text_0, ParcelRiver_Arna_Text_1
# 357 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Botolv::
# 361 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_BOTOLV, ParcelRiver_Botolv_Text_0, ParcelRiver_Botolv_Text_1
# 364 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Gudrun::
# 368 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_GUDRUN, ParcelRiver_Gudrun_Text_0, ParcelRiver_Gudrun_Text_1
# 371 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Havard::
# 375 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_HAVARD, ParcelRiver_Havard_Text_0, ParcelRiver_Havard_Text_1
# 378 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Idun::
# 382 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_IDUN, ParcelRiver_Idun_Text_0, ParcelRiver_Idun_Text_1
# 385 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Joar::
# 389 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_JOAR, ParcelRiver_Joar_Text_0, ParcelRiver_Joar_Text_1
# 392 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Kari::
# 396 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_KARI, ParcelRiver_Kari_Text_0, ParcelRiver_Kari_Text_1
# 399 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Lars::
# 403 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_LARS, ParcelRiver_Lars_Text_0, ParcelRiver_Lars_Text_1
# 406 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Marit::
# 410 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_MARIT, ParcelRiver_Marit_Text_0, ParcelRiver_Marit_Text_1
# 413 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Njal::
# 417 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_NJAL, ParcelRiver_Njal_Text_0, ParcelRiver_Njal_Text_1
# 420 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Ottar::
# 424 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_OTTAR, ParcelRiver_Ottar_Text_0, ParcelRiver_Ottar_Text_1
# 427 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Paal::
# 431 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_PAAL, ParcelRiver_Paal_Text_0, ParcelRiver_Paal_Text_1
# 434 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Ragna::
# 438 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_RAGNA, ParcelRiver_Ragna_Text_0, ParcelRiver_Ragna_Text_1
# 441 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_Sigurd::
# 445 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_SIGURD, ParcelRiver_Sigurd_Text_0, ParcelRiver_Sigurd_Text_1
# 448 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_ItemPotion::
# 453 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelRiver_ItemSuperRepel::
# 454 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_SUPER_REPEL
	end


ParcelRiver_ItemGreatBall::
# 455 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelRiver_ItemTM19::
# 456 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_TM19
	end


ParcelRiver_SignTown::
# 459 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignTown_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignBoard::
# 463 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignBoard_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignMarket::
# 467 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelRiver_T_Aud::
# 473 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_AUD, ParcelRiver_T_Aud_Text_0, ParcelRiver_T_Aud_Text_1
# 476 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_T_Espen::
# 480 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ESPEN, ParcelRiver_T_Espen_Text_0, ParcelRiver_T_Espen_Text_1
# 483 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_T_Trygve::
# 487 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_TRYGVE, ParcelRiver_T_Trygve_Text_0, ParcelRiver_T_Trygve_Text_1
# 490 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
	end


ParcelRiver_FirstEntry_Text_0:
# 46 "data/maps/ParcelRiver/scripts.pory"
	.string "The land lifts and the trees thin. The\n"
	.string "water that fouled the basin runs out of\l"
	.string "here, clearer than below. Not clear.$"

ParcelRiver_FirstEntry_Text_1:
# 47 "data/maps/ParcelRiver/scripts.pory"
	.string "Market stalls up the street. Nets on a\n"
	.string "rail. A crop running green right down to\l"
	.string "the bank. {STR_VAR_1} takes the\l"
	.string "road ahead and doesn't hurry.$"

ParcelRiver_FirstEntry_Text_2:
# 48 "data/maps/ParcelRiver/scripts.pory"
	.string "HALE's note, folded in the kit:\n"
	.string "WATERSHED. LIVING SYSTEM, ACTIVE USE.\p"
	.string "Read the whole river before you judge\n"
	.string "any part of it.$"

ParcelRiver_ChannelCut_Text_0:
# 61 "data/maps/ParcelRiver/scripts.pory"
	.string "The straightened mile. In the notebook.$"

ParcelRiver_ChannelCut_Text_1:
# 65 "data/maps/ParcelRiver/scripts.pory"
	.string "Here the bank is cut straight as a rule,\n"
	.string "the bends dredged out, the slack water\l"
	.string "gone with them.\p"
	.string "Board stakes every fifty paces.\n"
	.string "Nothing slows down here anymore, and\l"
	.string "nothing stays. Written down.$"

ParcelRiver_DamRelic_Text_0:
# 76 "data/maps/ParcelRiver/scripts.pory"
	.string "The old dam. In the notebook.$"

ParcelRiver_DamRelic_Text_1:
# 80 "data/maps/ParcelRiver/scripts.pory"
	.string "A tangle of grey timber across the\n"
	.string "current, gapped in the middle. Not built.\l"
	.string "Chewed.\p"
	.string "The engineers who kept it are gone from\n"
	.string "this reach; nothing has patched it in\l"
	.string "years. The pond it held is a channel now.\l"
	.string "Written down.$"

ParcelRiver_RunoffStain_Text_0:
# 91 "data/maps/ParcelRiver/scripts.pory"
	.string "The bloom. In the notebook.$"

ParcelRiver_RunoffStain_Text_1:
# 95 "data/maps/ParcelRiver/scripts.pory"
	.string "Below the plots the water goes green\n"
	.string "and thick, a scum of it against the bank\l"
	.string "where the field drain comes in.\p"
	.string "It smells of fertiliser, sweet and\n"
	.string "wrong. Written down.$"

ParcelRiver_CleanReach_Text_0:
# 106 "data/maps/ParcelRiver/scripts.pory"
	.string "The clean reach. The baseline. In the\n"
	.string "notebook.$"

ParcelRiver_CleanReach_Text_1:
# 110 "data/maps/ParcelRiver/scripts.pory"
	.string "Above the town the river braids over\n"
	.string "gravel, cold and quick and clear to the\l"
	.string "bottom. Larvae under every stone. A\l"
	.string "SURSKIT on the eddy.\p"
	.string "This is what the whole river was. It is\n"
	.string "still here. Written down, and underlined.$"

ParcelRiver_IrrigationBoard_Text_0:
# 121 "data/maps/ParcelRiver/scripts.pory"
	.string "The Board's notice. In the notebook.$"

ParcelRiver_IrrigationBoard_Text_1:
# 125 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND WATER BOARD -- a MEREHOLT\n"
	.string "FOUNDATION partnership.\p"
	.string "IRRIGATION ALLOCATION: plots 1-14,\n"
	.string "metered. CHANNEL IMPROVEMENT, PHASE 2:\l"
	.string "flood control works, upstream reach.\l"
	.string "Consultation closed.\p"
	.string "The crest on the sign is the crest on\n"
	.string "the fertiliser sacks. Written down.$"

ParcelRiver_Harland_Text_0:
# 137 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: ILEX signed you off. Good.\p"
	.string "Stay the night. On the boat. The river's\n"
	.string "different in the dark, and you've only\l"
	.string "read it in daylight.$"

ParcelRiver_Harland_Text_1:
# 138 "data/maps/ParcelRiver/scripts.pory"
	.string "Stay the night?$"

ParcelRiver_Harland_Text_2:
# 140 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Offer stands.$"

ParcelRiver_Harland_Text_3:
# 146 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Hear that? That's the cut. Day\n"
	.string "and night, same note. Used to be the\l"
	.string "water had a dozen voices along here.$"

ParcelRiver_Harland_Text_4:
# 147 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: My father could tell the pools\n"
	.string "apart with his eyes shut. I can't. There\l"
	.string "aren't any.$"

ParcelRiver_Harland_Text_5:
# 148 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: The note on this boat comes\n"
	.string "due in spring. If the catch holds, I\l"
	.string "keep her. If it doesn't, a MEREHOLT\l"
	.string "outfit I've never met owns a boat my\l"
	.string "grandfather built.\p"
	.string "That's what 'relief' bought me. I'm not\n"
	.string "blaming you. I'm telling you the price.$"

ParcelRiver_Harland_Text_6:
# 149 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The upstream reach is still\n"
	.string "clean. ILEX says it can come back.$"

ParcelRiver_Harland_Text_7:
# 150 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Then write it so somebody with\n"
	.string "a pen believes it. I've tried the other\l"
	.string "way.\p"
	.string "Go to sleep, RANGER. River's not going\n"
	.string "anywhere. Yet.$"

ParcelRiver_Harland_Text_8:
# 154 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Morning. Coffee's bad. Catch\n"
	.string "was four. Go on, you've got a mountain\l"
	.string "to climb, I hear.$"

ParcelRiver_Harland_Text_9:
# 159 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Catch was four. Same as\n"
	.string "yesterday. Go on.$"

ParcelRiver_Harland_Text_10:
# 167 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Read me right when you write\n"
	.string "it.$"

ParcelRiver_Harland_Text_11:
# 171 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: You're the one with the\n"
	.string "notebook. Word came up the river ahead\l"
	.string "of you.\p"
	.string "Come to tell me the fishing's poor. As if\n"
	.string "I can't read my own water.$"

ParcelRiver_Harland_Text_12:
# 172 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The catch is down because\n"
	.string "the river is. The cut. The bloom off the\l"
	.string "fields.$"

ParcelRiver_Harland_Text_13:
# 173 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: I KNOW why it's down. Knew\n"
	.string "before you could walk.\p"
	.string "My father fished this. His father\n"
	.string "helped build half that old dam your\l"
	.string "people keep photographing, back when\l"
	.string "building it was the work.$"

ParcelRiver_Harland_Text_14:
# 174 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: And the Board says straighten\n"
	.string "the cut and the floods stop taking my\l"
	.string "gear. The FOUNDATION carries the note\l"
	.string "on the boat so I keep working while it\l"
	.string "all gets sorted.\p"
	.string "So what is it you'd have me do? Tie up\n"
	.string "and starve on principle?$"

ParcelRiver_Harland_Text_15:
# 175 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: …Who holds the note on the\n"
	.string "boat?$"

ParcelRiver_Harland_Text_16:
# 176 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: A MEREHOLT outfit. Coastal\n"
	.string "lending.\p"
	.string "Same crest as the fertiliser sacks.\n"
	.string "Same crest as the Board. Hadn't set\l"
	.string "those side by side before. Don't care\l"
	.string "for how they line up.$"

ParcelRiver_Harland_Text_17:
# 177 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Write your report, RANGER.\n"
	.string "Read me right when you do.\p"
	.string "I'm not your villain. I'm the man they'll\n"
	.string "send the bill to.$"

ParcelRiver_Farmer_Text_0:
# 188 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: ILEX put a buffer strip in her\n"
	.string "report. Two rows. Named a fund that'd\l"
	.string "pay for it.\p"
	.string "I'll believe the fund when it's in my\n"
	.string "hand. But she wrote it down. Nobody else\l"
	.string "has.$"

ParcelRiver_Farmer_Text_1:
# 192 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: Mind the rows, RANGER.\p"
	.string "They tell me my runoff greens the\n"
	.string "water. Likely true. They also tell me\l"
	.string "grow more for less, or sell to the\l"
	.string "FOUNDATION buyer at the FOUNDATION's\l"
	.string "number.$"

ParcelRiver_Farmer_Text_2:
# 193 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: I'd put a buffer strip along\n"
	.string "the bank tomorrow. Costs me two rows\l"
	.string "and a season's yield.\p"
	.string "You find me the one who'll pay for those\n"
	.string "two rows, and I'll dig it before you've\l"
	.string "walked home.$"

ParcelRiver_Ilex_Text_0:
# 203 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Stressed, not shifted. Hold that\n"
	.string "difference like a coal.\p"
	.string "Most of the country you'll meet from\n"
	.string "here has already chosen. This river\l"
	.string "hasn't. Yet.$"

ParcelRiver_Ilex_Text_1:
# 211 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: The cut. The old dam. The bloom.\n"
	.string "The clean reach. The Board's sign. The\l"
	.string "man on the boat.\p"
	.string "Put a name on the river.$"

ParcelRiver_Ilex_Text_2:
# 213 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: STRESSED.\p"
	.string "The engineers are thinning. The cut\n"
	.string "took the slack water. The bloom is\l"
	.string "climbing. But the sensitive guild is\l"
	.string "still in that upstream reach. The web\l"
	.string "hasn't simplified yet.$"

ParcelRiver_Ilex_Text_3:
# 214 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Which means this is the rarest\n"
	.string "reading you will ever file. The one where\l"
	.string "doing the right thing in time still does\l"
	.string "something.$"

ParcelRiver_Ilex_Text_4:
# 215 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: So we intervene. Pull the\n"
	.string "cut, mend the dam…$"

ParcelRiver_Ilex_Text_5:
# 216 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Some of it. Not all of it, and not\n"
	.string "by signing the Board's plan.\p"
	.string "Relieve what's reversible: the buffer\n"
	.string "strip, the bloom, the fish passage.\l"
	.string "Refuse what isn't, dressed as relief:\l"
	.string "another straightened mile, another\l"
	.string "'flood control' that finishes the slack\l"
	.string "water.$"

ParcelRiver_Ilex_Text_6:
# 217 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: A stressed river doesn't need a\n"
	.string "hero. It needs someone who can tell the\l"
	.string "two apart and has the spine to say so\l"
	.string "out loud. You said so in the hall. I heard\l"
	.string "you.$"

ParcelRiver_Ilex_Text_7:
# 220 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Watershed Certification. HALE\n"
	.string "would make you walk back for it. I won't.\p"
	.string "You read the window. Now you keep it\n"
	.string "open.$"

ParcelRiver_Ilex_Text_8:
# 229 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Don't classify a river from one\n"
	.string "bend. Walk the bank: the cut, the old\l"
	.string "dam, the bloom off the fields, the clean\l"
	.string "water above the town. Read the Board's\l"
	.string "sign. Hear the man on the boat.\p"
	.string "Then come put a name to it.$"

ParcelRiver_Dorsey_Text_0:
# 242 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: You've walked the bank. I can\n"
	.string "see it on your boots.\p"
	.string "Phase 2 is flood control, RANGER. Six\n"
	.string "farms lost gear last spring. The Board's\l"
	.string "plan stops that. Your ILEX calls it\l"
	.string "'finishing the slack water'. I call it\l"
	.string "keeping people's sheds dry.$"

ParcelRiver_Dorsey_Text_1:
# 243 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Come to the hall. There's a\n"
	.string "meeting. Say your piece in front of\l"
	.string "them, not behind my back. I'd rather\l"
	.string "lose an argument in public than win one\l"
	.string "in a report.$"

ParcelRiver_Dorsey_Text_2:
# 247 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: RANGER! Market day. Best day\n"
	.string "to see ELVSUND. Eggs, trout, the first\l"
	.string "greens.\p"
	.string "Trout's down this year. The Board has a\n"
	.string "plan for that. Phase 2. You'll have seen\l"
	.string "the notice.$"

ParcelRiver_Dorsey_Text_3:
# 248 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Walk the bank first, then come\n"
	.string "and tell me what you think. I mean that.\l"
	.string "I grew up two valleys over. My father's\l"
	.string "fields flooded every spring and nobody\l"
	.string "came.\p"
	.string "I came.$"

ParcelRiver_Aide_Text_0:
# 255 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: Phase 2 consultation is closed,\n"
	.string "but the councilman takes questions on\l"
	.string "market days. Form a line. There is no\l"
	.string "line.$"

ParcelRiver_VendorEggs_Text_0:
# 264 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Eggs, greens, a jar of honey. The\n"
	.string "honey's from upstream, where the\l"
	.string "flowers still come. Buy something or\l"
	.string "move along, RANGER, I've a stall to mind.$"

ParcelRiver_VendorFish_Text_0:
# 272 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. Four trout\n"
	.string "today. I sold them to the FOUNDATION\l"
	.string "buyer at his number because nobody\l"
	.string "else was buying.\p"
	.string "Your ILEX wrote 'fish passage' in her\n"
	.string "report. Tell her I'll hold her to it.$"

ParcelRiver_VendorFish_Text_1:
# 276 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. I sell what he\n"
	.string "catches. There's less to sell every\l"
	.string "spring and more people asking why.\p"
	.string "I tell them the Board has a plan. The\n"
	.string "Board always has a plan.$"

ParcelRiver_OldMan_Text_0:
# 283 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: There was a pond above the\n"
	.string "town. Beaver-built. We swam in it as\l"
	.string "boys. Then the trappers, then the\l"
	.string "Board.\p"
	.string "Now it's a ditch with a stake every\n"
	.string "fifty paces. Progress, they call it. I\l"
	.string "call it a ditch.$"

ParcelRiver_Girl_Text_0:
# 290 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman gave me a ribbon!\n"
	.string "It says PHASE 2 on it. I don't know what\l"
	.string "that is but it's blue.$"

ParcelRiver_Boy_Text_0:
# 297 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Don't swim below the plots. Mum\n"
	.string "says the water's got green stuff in it\l"
	.string "that makes your skin go funny. Above\l"
	.string "the town's fine. Above the town's\l"
	.string "freezing.$"

ParcelRiver_PondFisher_Text_0:
# 304 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: I fish the town pond now.\n"
	.string "Stocked. It's not the same, but it's not\l"
	.string "green either.$"

ParcelRiver_AnglerTrainer_Text_0:
# 314 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years on this reach. You're\n"
	.string "the first one came up here to LOOK\l"
	.string "instead of promise. Means something.$"

ParcelRiver_AnglerTrainer_Text_1:
# 319 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: That's it! That's the one. My\n"
	.string "father's. Snagged it on the gravel\l"
	.string "above town thirty years back and never\l"
	.string "found it.\p"
	.string "You went and looked. Nobody looks.$"

ParcelRiver_AnglerTrainer_Text_2:
# 320 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Take the rod. The good one. I'm\n"
	.string "done with the big water; my knees say\l"
	.string "so.\p"
	.string "Somebody ought to be pulling SEAKING\n"
	.string "out of this river who'll write down how\l"
	.string "many.$"

ParcelRiver_AnglerTrainer_Text_3:
# 327 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Above the town, on the gravel,\n"
	.string "where the water's still clear. A brass\l"
	.string "lure. You'd see it if anyone would.$"

ParcelRiver_AnglerTrainer_Text_4:
# 333 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years I worked this reach.\n"
	.string "Pulled SEAKING out by the armful, once.\p"
	.string "Now look at it. Battle me. I could use\n"
	.string "the distraction.$"

ParcelRiver_AnglerTrainer_Text_5:
# 334 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Hah. You've still got the eye for\n"
	.string "it. Wish the river did.$"

ParcelRiver_AnglerTrainer_Text_6:
# 335 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The Board swears the cut'll bring\n"
	.string "the fish back. The Board swears a lot of\l"
	.string "things.\p"
	.string "You've got the eye. Do an old man a\n"
	.string "kindness. There's a brass lure on the\l"
	.string "gravel above town, my father's, lost\l"
	.string "thirty years. If anyone can spot it in\l"
	.string "that clear water, it's you.$"

ParcelRiver_Lure_Text_0:
# 342 "data/maps/ParcelRiver/scripts.pory"
	.string "Something glints on the gravel under\n"
	.string "the clear water. A brass lure, green with\l"
	.string "age, the hook long gone.\p"
	.string "Fished out.$"

ParcelRiver_Lure_Text_1:
# 347 "data/maps/ParcelRiver/scripts.pory"
	.string "Clear water over clean gravel. You can\n"
	.string "count the stones.$"

ParcelRiver_Arna_Text_0:
# 355 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: The flower plots are the best\n"
	.string "picnic in the district. Shame about the\l"
	.string "smell off the river. Battle?$"

ParcelRiver_Arna_Text_1:
# 356 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Lovely. Now go away, I'm eating.$"

ParcelRiver_Arna_Text_2:
# 357 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: ROSELIA only grow above the town\n"
	.string "now. Below it, nothing with a scent.$"

ParcelRiver_Botolv_Text_0:
# 362 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Camped on the high meadow a\n"
	.string "week. Seen the Board's boat go up and\l"
	.string "down six times. Seen you once. Battle.$"

ParcelRiver_Botolv_Text_1:
# 363 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Once was enough.$"

ParcelRiver_Botolv_Text_2:
# 364 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They're surveying the upstream\n"
	.string "reach. Stakes, every fifty paces.\l"
	.string "That's the clean bit. Why stake the\l"
	.string "clean bit?$"

ParcelRiver_Gudrun_Text_0:
# 369 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: ILLUMISE light up over the\n"
	.string "ponds at dusk. Fewer every summer. My\l"
	.string "mum says I imagine it. Battle me and tell\l"
	.string "me I don't.$"

ParcelRiver_Gudrun_Text_1:
# 370 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You don't think I imagine it.\n"
	.string "Good.$"

ParcelRiver_Gudrun_Text_2:
# 371 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Twelve last summer. Seven this\n"
	.string "one. I count. Somebody has to.$"

ParcelRiver_Havard_Text_0:
# 376 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Pond's stocked by the Board.\n"
	.string "Twice a year. You catch one, you thank\l"
	.string "the Board. Battle?$"

ParcelRiver_Havard_Text_1:
# 377 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Don't thank me. Thank the\n"
	.string "Board.$"

ParcelRiver_Havard_Text_2:
# 378 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Stocked fish don't breed. You\n"
	.string "know that, right? They put them in, we\l"
	.string "take them out. That's not a river.\l"
	.string "That's a shop.$"

ParcelRiver_Idun_Text_0:
# 383 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Cadet IDUN. ILEX has me counting\n"
	.string "larvae under stones. Spar first. Then\l"
	.string "I'll show you my count.$"

ParcelRiver_Idun_Text_1:
# 384 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Eighteen species above the town.\n"
	.string "Four below. That's my count.$"

ParcelRiver_Idun_Text_2:
# 385 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: ILEX says don't call it dead until\n"
	.string "you've turned every stone. I turned\l"
	.string "every stone. It's not dead. Yet.$"

ParcelRiver_Joar_Text_0:
# 390 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: The plots have the best bugs. The\n"
	.string "farmer lets me in if I don't tread the\l"
	.string "rows. You're treading the rows.$"

ParcelRiver_Joar_Text_1:
# 391 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Fine, tread them.$"

ParcelRiver_Joar_Text_2:
# 392 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: VOLBEAT in the plots, none in the\n"
	.string "fields below. The fields below get the\l"
	.string "sacks with the crest on.$"

ParcelRiver_Kari_Text_0:
# 397 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The puddles by the depot are the\n"
	.string "only wet ground the Board hasn't\l"
	.string "metered. Yet. Battle!$"

ParcelRiver_Kari_Text_1:
# 398 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Metered that, didn't you.$"

ParcelRiver_Kari_Text_2:
# 399 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The depot pays by weight. Nobody\n"
	.string "asks what's in the sacks they sell you\l"
	.string "for the weight.$"

ParcelRiver_Lars_Text_0:
# 404 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The rocks by the pond are the\n"
	.string "only rocks for a mile. I'm a HIKER. I take\l"
	.string "what I can get. Battle.$"

ParcelRiver_Lars_Text_1:
# 405 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Take that, then.$"

ParcelRiver_Lars_Text_2:
# 406 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The mountain's north, past the\n"
	.string "clean water. It's got proper rock. And a\l"
	.string "MEREHOLT office at the top of the pass,\l"
	.string "I hear.$"

ParcelRiver_Marit_Text_0:
# 411 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: I live on the farm. The field\n"
	.string "drain runs under my window. I know what\l"
	.string "the river smells like at night. Battle?$"

ParcelRiver_Marit_Text_1:
# 412 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Smells better than losing.$"

ParcelRiver_Marit_Text_2:
# 413 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Dad would dig the buffer strip\n"
	.string "tomorrow. Two rows. Nobody's paying for\l"
	.string "two rows.$"

ParcelRiver_Njal_Text_0:
# 418 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: ELECTRIKE from the power line\n"
	.string "cut, north of here. Fastest thing in the\l"
	.string "valley. Battle!$"

ParcelRiver_Njal_Text_1:
# 419 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Fast, not strong. Noted.$"

ParcelRiver_Njal_Text_2:
# 420 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: They strung the line to the Board\n"
	.string "office last year. For the meters. The\l"
	.string "meters need power. The farms didn't.$"

ParcelRiver_Ottar_Text_0:
# 425 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: One SEAKING. Took me all spring.\n"
	.string "I'm not sharing the bank. Battle.$"

ParcelRiver_Ottar_Text_1:
# 426 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Share, then.$"

ParcelRiver_Ottar_Text_2:
# 427 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: DELL says the river used to give\n"
	.string "SEAKING by the armful. I believe him.\l"
	.string "I've seen the photographs.$"

ParcelRiver_Paal_Text_0:
# 432 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: The bank's a highway. Board\n"
	.string "boats, Corps cadets, now you. Battle,\l"
	.string "and then walk somewhere else.$"

ParcelRiver_Paal_Text_1:
# 433 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Walk wherever you like.$"

ParcelRiver_Paal_Text_2:
# 434 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: There's a man on a boat down by\n"
	.string "the plots who talks to nobody. HARLAND.\l"
	.string "He talked to a RANGER once. It didn't go\l"
	.string "well, I hear.$"

ParcelRiver_Ragna_Text_0:
# 439 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The river's thoughts are loud\n"
	.string "here. Fast. Angry. Below the cut it\l"
	.string "stops thinking at all. Battle me.$"

ParcelRiver_Ragna_Text_1:
# 440 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Your thoughts are loud too.$"

ParcelRiver_Ragna_Text_2:
# 441 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The councilman's thoughts are\n"
	.string "the loudest in the valley. He believes\l"
	.string "every word. That's the strange part.$"

ParcelRiver_Sigurd_Text_0:
# 446 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Cadet SIGURD, on the depot\n"
	.string "watch. HALE wants to know what goes in\l"
	.string "and what comes out. Spar.$"

ParcelRiver_Sigurd_Text_1:
# 447 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Good. The sacks go in. The\n"
	.string "money comes out. That's my report.$"

ParcelRiver_Sigurd_Text_2:
# 448 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: The depot buys at the\n"
	.string "FOUNDATION's number and sells the\l"
	.string "sacks at the FOUNDATION's number. Both\l"
	.string "numbers are the same man's.$"

ParcelRiver_SignTown_Text_0:
# 459 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND\p"
	.string "Market Thursdays. Boats moor at the\n"
	.string "east bank. The Water Board office is\l"
	.string "open to ratepayers.$"

ParcelRiver_SignBoard_Text_0:
# 463 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND WATER BOARD -- NOTICE\p"
	.string "Channel Improvement, Phase 2: works\n"
	.string "commence upstream of the town after\l"
	.string "the harvest. Consultation closed.\l"
	.string "Objections to the Board office. The\l"
	.string "office is closed for objections.$"

ParcelRiver_SignMarket_Text_0:
# 467 "data/maps/ParcelRiver/scripts.pory"
	.string "MARKET DAY\p"
	.string "Eggs. Greens. Honey. Trout (limited).\n"
	.string "Councilman DORSEY will take questions\l"
	.string "at noon.$"

ParcelRiver_T_Aud_Text_0:
# 474 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: The high meadow's the last place\n"
	.string "the flowers come up on their own. Battle\l"
	.string "me among them.$"

ParcelRiver_T_Aud_Text_1:
# 475 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Among them, beaten.$"

ParcelRiver_T_Aud_Text_2:
# 476 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Below the town they spray. Above\n"
	.string "the town they don't. You can draw the\l"
	.string "line with your nose.$"

ParcelRiver_T_Espen_Text_0:
# 481 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: ELECTRIKE from the power line\n"
	.string "cut. Fastest thing on the farm. Battle!$"

ParcelRiver_T_Espen_Text_1:
# 482 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Fast. Not fast enough.$"

ParcelRiver_T_Espen_Text_2:
# 483 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: The line goes to the Board\n"
	.string "office for the meters. The farm got\l"
	.string "nothing off it. Dad says we got the\l"
	.string "view.$"

ParcelRiver_T_Trygve_Text_0:
# 488 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: One WHISCASH, out of the clean\n"
	.string "reach. Took three seasons. Battle it.$"

ParcelRiver_T_Trygve_Text_1:
# 489 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three seasons, and that.$"

ParcelRiver_T_Trygve_Text_2:
# 490 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They want to put the straight\n"
	.string "channel through the clean reach. Phase\l"
	.string "2. Where do they think the WHISCASH will\l"
	.string "go?$"
