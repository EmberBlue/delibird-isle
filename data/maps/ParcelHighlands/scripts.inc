ParcelHighlands_MapScripts::
	.byte 0


ParcelHighlands_FirstEntry::
# 28 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_ARRIVAL, ParcelHighlands_FirstEntry_2
# 32 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 33 "data/maps/ParcelHighlands/scripts.pory"
	bufferpartymonnick 0, 0
# 34 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_1, MSGBOX_DEFAULT
# 36 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_ARRIVAL
# 37 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_FirstEntry_2:
	end


ParcelHighlands_SlideScene::
# 43 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_3, 1
# 44 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_HL_SLIDE_SCENE, ParcelHighlands_SlideScene_2
# 47 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 48 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SlideScene_Text_0, MSGBOX_DEFAULT
# 49 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SlideScene_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_HL_SLIDE_SCENE
# 51 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_SlideScene_2:
	end


ParcelHighlands_SlideSign::
# 55 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SlideSign_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_Thermokarst::
# 61 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 62 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 63 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 0
# 64 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 65 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Thermokarst_2
# 70 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Thermokarst_Text_1, MSGBOX_SIGN
# 71 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 72 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Thermokarst_2:
# 66 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Thermokarst_Text_0, MSGBOX_SIGN
# 67 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_DrunkenForest::
# 76 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 77 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 78 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 1
# 79 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 80 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_DrunkenForest_2
# 85 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrunkenForest_Text_1, MSGBOX_SIGN
# 86 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 87 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_DrunkenForest_2:
# 81 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrunkenForest_Text_0, MSGBOX_SIGN
# 82 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Lowlander::
# 91 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 92 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 93 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 3
# 94 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 95 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Lowlander_Text_0, MSGBOX_DEFAULT
# 96 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_DrillSign::
# 100 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 101 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 102 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 4
# 103 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 104 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrillSign_Text_0, MSGBOX_SIGN
# 105 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_BandStakes::
# 109 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_BandStakes_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_Ilex::
# 115 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 116 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 117 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Ilex_2
# 122 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 123 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 2
# 124 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 125 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Ilex_5
# 130 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_2, MSGBOX_DEFAULT
# 131 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_3, MSGBOX_DEFAULT
# 132 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_4, MSGBOX_DEFAULT
# 133 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_5, MSGBOX_DEFAULT
# 134 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 135 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_2:
# 118 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_0, MSGBOX_DEFAULT
# 119 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_5:
# 126 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_1, MSGBOX_DEFAULT
# 127 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hollis::
# 141 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 142 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 143 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Hollis_2
# 148 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 149 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 7
# 150 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 151 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Hollis_5
# 156 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_2, MSGBOX_DEFAULT
# 157 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_3, MSGBOX_DEFAULT
# 158 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_4, MSGBOX_DEFAULT
# 159 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_5, MSGBOX_DEFAULT
# 160 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_6, MSGBOX_DEFAULT
# 161 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 162 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_2:
# 144 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_5:
# 152 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_1, MSGBOX_DEFAULT
# 153 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_HollisTech::
# 166 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 167 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 168 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_0, MSGBOX_DEFAULT
# 169 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Homesteader::
# 175 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 176 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 177 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 178 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 5
# 179 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 180 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Homesteader_2
# 185 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_1, MSGBOX_DEFAULT
# 186 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_2, MSGBOX_DEFAULT
# 187 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_3, MSGBOX_DEFAULT
# 188 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 189 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_2:
# 181 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_0, MSGBOX_DEFAULT
# 182 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hale::
# 195 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 196 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 197 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Hale_2
# 202 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 203 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 63
# 204 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 205 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Hale_5
# 224 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_8, MSGBOX_DEFAULT
# 225 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_2:
# 198 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_5:
# 206 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_1, MSGBOX_DEFAULT
# 207 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyHighlands
# 208 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_2, MSGBOX_DEFAULT
# 209 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_3, MSGBOX_DEFAULT
# 210 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_4, MSGBOX_DEFAULT
# 211 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_5, MSGBOX_DEFAULT
# 212 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 6
# 213 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 214 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_6, MSGBOX_DEFAULT
# 215 "data/maps/ParcelHighlands/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 216 "data/maps/ParcelHighlands/scripts.pory"
	waitfanfare
# 217 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_CERT
# 218 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_MAX_POTION, 3
# 219 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_REVIVE, 3
# 220 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_7, MSGBOX_DEFAULT
# 221 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ItemPotion::
# 230 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelHighlands_ItemMaxRepel::
# 231 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelHighlands_ItemIceHeal::
# 232 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelHighlands_SurfCache::
# 234 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_RARE_CANDY
# 235 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_SURF
	end


ParcelHighlands_FallsCache::
# 239 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_PP_MAX
# 240 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_FALLS
	end


ParcelHighlands_SignSummit::
# 246 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignSummit_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SignCentre::
# 250 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignCentre_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SurveyorTrainer::
# 256 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SURVEYOR, ParcelHighlands_SurveyorTrainer_Text_0, ParcelHighlands_SurveyorTrainer_Text_1
# 259 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_ValeGate::
# 265 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, ParcelHighlands_ValeGate_2
# 269 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 270 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_0, MSGBOX_DEFAULT
# 271 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 272 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeApproach
# 273 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 274 "data/maps/ParcelHighlands/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_HL_FaceRight
# 275 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 276 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_1, MSGBOX_DEFAULT
# 277 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5, ParcelHighlands_ValeGate_Text_2
# 278 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_BADGE05_GET
# 279 "data/maps/ParcelHighlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 280 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_3, MSGBOX_DEFAULT
# 281 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_HM03
# 282 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_4, MSGBOX_DEFAULT
# 283 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 284 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeBack
# 285 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 286 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
# 287 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_ValeGate_2:
# 266 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


ParcelHighlands_GymVale::
# 291 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 292 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 293 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Text_0, MSGBOX_DEFAULT
# 294 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


# 297 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeApproach:
# 297 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
# 297 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
	step_end

# 298 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeBack:
# 298 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 298 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 298 "data/maps/ParcelHighlands/scripts.pory"
	face_left
	step_end

# 299 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_FaceRight:
# 299 "data/maps/ParcelHighlands/scripts.pory"
	face_right
	step_end

ParcelHighlands_Asbjorn::
# 303 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_ASBJORN, ParcelHighlands_Asbjorn_Text_0, ParcelHighlands_Asbjorn_Text_1
# 306 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Brynjar::
# 310 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_BRYNJAR, ParcelHighlands_Brynjar_Text_0, ParcelHighlands_Brynjar_Text_1
# 313 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Dagny::
# 317 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_DAGNY, ParcelHighlands_Dagny_Text_0, ParcelHighlands_Dagny_Text_1
# 320 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Eivind::
# 324 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_EIVIND, ParcelHighlands_Eivind_Text_0, ParcelHighlands_Eivind_Text_1
# 327 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Finn::
# 331 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_FINN, ParcelHighlands_Finn_Text_0, ParcelHighlands_Finn_Text_1
# 334 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Grete::
# 338 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_GRETE, ParcelHighlands_Grete_Text_0, ParcelHighlands_Grete_Text_1
# 341 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Hauk::
# 345 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HAUK, ParcelHighlands_Hauk_Text_0, ParcelHighlands_Hauk_Text_1
# 348 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Jarle::
# 352 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_JARLE, ParcelHighlands_Jarle_Text_0, ParcelHighlands_Jarle_Text_1
# 355 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Kjersti::
# 359 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_KJERSTI, ParcelHighlands_Kjersti_Text_0, ParcelHighlands_Kjersti_Text_1
# 362 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Leidulf::
# 366 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_LEIDULF, ParcelHighlands_Leidulf_Text_0, ParcelHighlands_Leidulf_Text_1
# 369 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Nora::
# 373 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_NORA, ParcelHighlands_Nora_Text_0, ParcelHighlands_Nora_Text_1
# 376 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Peder::
# 380 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_PEDER, ParcelHighlands_Peder_Text_0, ParcelHighlands_Peder_Text_1
# 383 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Runa::
# 387 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_RUNA, ParcelHighlands_Runa_Text_0, ParcelHighlands_Runa_Text_1
# 390 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_Siri::
# 394 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SIRI, ParcelHighlands_Siri_Text_0, ParcelHighlands_Siri_Text_1
# 397 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_FirstEntry_Text_0:
# 34 "data/maps/ParcelHighlands/scripts.pory"
	.string "The road climbs out of the farmland\n"
	.string "into cold air. Pale rock. Thin grass. Mist\l"
	.string "on the high ground.\p"
	.string "{STR_VAR_1} slows, and keeps to the\n"
	.string "middle of the trail. The ground gives\l"
	.string "underfoot where it should be iron.$"

ParcelHighlands_FirstEntry_Text_1:
# 35 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE's note: HIGHLAND. You won't get to\n"
	.string "fix this one. Walk it. Read it. Name it.\l"
	.string "Then come up to the summit.$"

ParcelHighlands_SlideScene_Text_0:
# 48 "data/maps/ParcelHighlands/scripts.pory"
	.string "The trail is buried. Fresh scree, grey\n"
	.string "and wet, and boulders the size of carts\l"
	.string "where the slope let go.\p"
	.string "A voice, from above the slide.$"

ParcelHighlands_SlideScene_Text_1:
# 49 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: RANGER? That you? The slope went\n"
	.string "last night. I'm fine. The old woman below\l"
	.string "you is fine, I checked.\p"
	.string "The FOUNDATION crew won't touch the\n"
	.string "scree. 'Not in scope.' Get through if you\l"
	.string "can. The small rocks break. The big ones\l"
	.string "move, if you've the clearance for it.$"

ParcelHighlands_SlideSign_Text_0:
# 55 "data/maps/ParcelHighlands/scripts.pory"
	.string "Fresh scree across the trail, still\n"
	.string "settling. Nothing grew on this ground\l"
	.string "last year. Nothing holds it now.$"

ParcelHighlands_Thermokarst_Text_0:
# 66 "data/maps/ParcelHighlands/scripts.pory"
	.string "The sunk ponds. In the notebook.$"

ParcelHighlands_Thermokarst_Text_1:
# 70 "data/maps/ParcelHighlands/scripts.pory"
	.string "The ground here has sunk into itself: a\n"
	.string "line of ponds in the rock, black water in\l"
	.string "each, the rims collapsing inward.\p"
	.string "This was frozen ground. The ice under it\n"
	.string "melted and the land fell into the hole it\l"
	.string "left. Written down.$"

ParcelHighlands_DrunkenForest_Text_0:
# 81 "data/maps/ParcelHighlands/scripts.pory"
	.string "The leaning trees. In the notebook.$"

ParcelHighlands_DrunkenForest_Text_1:
# 85 "data/maps/ParcelHighlands/scripts.pory"
	.string "The trees along the slope lean every\n"
	.string "which way, roots half out of the ground,\l"
	.string "trunks crossed like dropped matches.\p"
	.string "They grew straight on ground that held\n"
	.string "them. The ground stopped holding.\l"
	.string "Written down.$"

ParcelHighlands_Lowlander_Text_0:
# 95 "data/maps/ParcelHighlands/scripts.pory"
	.string "A ZIGZAGOON, this high up, fat and\n"
	.string "unbothered on the scree.\p"
	.string "Five years ago nothing like it wintered\n"
	.string "above the tree line. The cold kept it\l"
	.string "out. The cold isn't here to keep\l"
	.string "anything out. Written down.$"

ParcelHighlands_DrillSign_Text_0:
# 104 "data/maps/ParcelHighlands/scripts.pory"
	.string "MEREHOLT PERMAFROST -- SURVEY\n"
	.string "STATION SIX. EXPLORATORY ONLY. No\l"
	.string "extraction is licensed at this site.\p"
	.string "The bore runs down into the freeze. To\n"
	.string "learn how fast it is failing, and to\l"
	.string "stand first in line for whatever the\l"
	.string "failing lays bare. Written down.$"

ParcelHighlands_BandStakes_Text_0:
# 109 "data/maps/ParcelHighlands/scripts.pory"
	.string "A line of red cloth strung between\n"
	.string "stakes, an arm's length apart. Last\l"
	.string "season's stakes stand wider, pulled,\l"
	.string "beside them. The season before, wider\l"
	.string "still.$"

ParcelHighlands_Ilex_Text_0:
# 118 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: The hearings cite the cloth now.\n"
	.string "Decades of it, read into the record by a\l"
	.string "clerk who pronounced everything\l"
	.string "correctly.\p"
	.string "The band is still shrinking. The number\n"
	.string "doesn't know it's been believed.$"

ParcelHighlands_Ilex_Text_1:
# 126 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: A hand's width in. Same as last\n"
	.string "season. I don't explain it twice.$"

ParcelHighlands_Ilex_Text_2:
# 130 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Last season these stood wider.\n"
	.string "The season before, wider still.\p"
	.string "This is the band the cold-lovers have\n"
	.string "left. The SNEASEL. The SWINUB that root\l"
	.string "the high snow. Pushed up the slope each\l"
	.string "year into a thinner ring of cold.$"

ParcelHighlands_Ilex_Text_3:
# 131 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Above this is bare rock and sky.\n"
	.string "There is no higher for them to climb.\p"
	.string "I stopped recording where they are. Now\n"
	.string "I record how much less of it there is.$"

ParcelHighlands_Ilex_Text_4:
# 132 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: And when the ring closes?$"

ParcelHighlands_Ilex_Text_5:
# 133 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Then I'll have a number for that,\n"
	.string "too.\p"
	.string "Downslope the red cloth marks what's\n"
	.string "still there. Up here it marks what's\l"
	.string "leaving. Same cloth. That's the part\l"
	.string "they never understand.$"

ParcelHighlands_Hollis_Text_0:
# 144 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: Enjoined pending survey. Your\n"
	.string "survey, as it happens. There's a court\l"
	.string "seal on the housing; it's new enough to\l"
	.string "still lie flat.\p"
	.string "The relocation grants are frozen with\n"
	.string "the rest of it, you know. The warming\l"
	.string "centre too. That's the part nobody\l"
	.string "prices.$"

ParcelHighlands_Hollis_Text_1:
# 152 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: The coffee's still warm, RANGER.\n"
	.string "The offer stands. So does the ground,\l"
	.string "for now.$"

ParcelHighlands_Hollis_Text_2:
# 156 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: You must be the RANGER they\n"
	.string "sent up. HOLLIS AUNE, MEREHOLT\l"
	.string "FOUNDATION. Come in out of the wind,\l"
	.string "there's coffee.\p"
	.string "You've seen the centre below? We\n"
	.string "opened it Tuesday. Forty beds, a stove\l"
	.string "that works, a nurse on Thursdays. I cut\l"
	.string "the ribbon myself.$"

ParcelHighlands_Hollis_Text_3:
# 157 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: I know how the rig reads to you.\n"
	.string "But the thaw is coming whether we bore\l"
	.string "it or not. Better someone's here\l"
	.string "measuring it, funding the relocation\l"
	.string "grants, the centre, the training for\l"
	.string "what comes next.$"

ParcelHighlands_Hollis_Text_4:
# 158 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: None of that is a lie. Check\n"
	.string "every line. We're doing real good up\l"
	.string "here, beside the real harm. That's not a\l"
	.string "contradiction. That's just how it\l"
	.string "actually works.$"

ParcelHighlands_Hollis_Text_5:
# 159 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: I believe you. That isn't\n"
	.string "the part I'm writing down.$"

ParcelHighlands_Hollis_Text_6:
# 160 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: No. I don't suppose it is.\p"
	.string "Then let me be kind plainly, so you don't\n"
	.string "mistake it for a threat. Our science is\l"
	.string "the only science up here. A survey that\l"
	.string "contradicts ours doesn't stop the rig.\l"
	.string "It just defunds the coffee.$"

ParcelHighlands_HollisTech_Text_0:
# 168 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Core samples go down to\n"
	.string "the coast office twice a week. The bore\l"
	.string "log says 'exploratory'. The bore log's a\l"
	.string "form. Forms say what's printed on them.$"

ParcelHighlands_Homesteader_Text_0:
# 181 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Another log. It'll sit\n"
	.string "crooked. Everything does, up here, now.$"

ParcelHighlands_Homesteader_Text_1:
# 185 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You're not from the\n"
	.string "company. Good. I'm tired of being\l"
	.string "adapted at.\p"
	.string "Eight generations of us wintered this\n"
	.string "slope. You knew where you stood. The\l"
	.string "ground held, the cold came, the cold\l"
	.string "went, the ground held again.$"

ParcelHighlands_Homesteader_Text_2:
# 186 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Now the ground breathes.\n"
	.string "The doors won't shut true. The near\l"
	.string "corner's a hand's depth into the mud\l"
	.string "since spring. The well runs brown in a\l"
	.string "month it never ran brown.$"

ParcelHighlands_Homesteader_Text_3:
# 187 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: The FOUNDATION's grant\n"
	.string "will move me somewhere warm and write\l"
	.string "'resilience' on the cheque. The young\l"
	.string "ones already signed. I don't blame them.\p"
	.string "The ground is dying. They call it\n"
	.string "opportunity. I call it leaving.$"

ParcelHighlands_Hale_Text_0:
# 198 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record. That's the\n"
	.string "whole of the work up here.\p"
	.string "Someday someone reads it and knows\n"
	.string "exactly what was lost, and when, and\l"
	.string "who was smiling while it went.$"

ParcelHighlands_Hale_Text_1:
# 206 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: The sunk ponds. The drunk trees.\n"
	.string "The band ILEX measures. The lowlander\l"
	.string "in the scree. The drill. The woman who\l"
	.string "won't take the grant.\p"
	.string "Name it.$"

ParcelHighlands_Hale_Text_2:
# 208 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: SHIFTED.\p"
	.string "The frozen ground was the keystone,\n"
	.string "and it's going. The cold guild is gone\l"
	.string "from everywhere but that last ring.\l"
	.string "What moves in is whatever moves in\l"
	.string "anywhere. A poorer place, settling into\l"
	.string "being poorer.$"

ParcelHighlands_Hale_Text_3:
# 209 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: So what do we DO. There has\n"
	.string "to be something.$"

ParcelHighlands_Hale_Text_4:
# 210 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There isn't. Not here. You cannot\n"
	.string "refreeze a mountain.\p"
	.string "The runoff you can slow. The cut you\n"
	.string "can fight. This you cannot put back.\l"
	.string "It's the first time you'll have stood\l"
	.string "somewhere and known that for certain.$"

ParcelHighlands_Hale_Text_5:
# 211 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: So the work changes. Not save it.\n"
	.string "WITNESS it. Record it true, name the\l"
	.string "hand that's on it, and carry that down\l"
	.string "to a place you still can save.\p"
	.string "That's not surrender. Surrender is\n"
	.string "letting them file this as 'adaptation'\l"
	.string "and signing underneath.$"

ParcelHighlands_Hale_Text_6:
# 214 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Highland Certification. The\n"
	.string "hardest one to earn, because there's\l"
	.string "nothing to fix and you had to say so.$"

ParcelHighlands_Hale_Text_7:
# 220 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There's a ferry to DELIBIRD ISLE\n"
	.string "from SALTWICK when your legs are under\l"
	.string "you. They hold a festival out there, on\l"
	.string "ground exactly like this.\p"
	.string "Go and see what people do with grief\n"
	.string "when they've agreed, together, not to\l"
	.string "name it.$"

ParcelHighlands_Hale_Text_8:
# 224 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Don't name it from up here,\n"
	.string "looking down. Walk it first. The thaw\l"
	.string "ponds, the leaning trees, the band ILEX\l"
	.string "works, the drill, the lowlander that's\l"
	.string "moved in, the holdout who won't go.\p"
	.string "Then come back and tell me what it is.$"

ParcelHighlands_SignSummit_Text_0:
# 246 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL SUMMIT. 1,140 m.\p"
	.string "Corps survey point. Red cloth marks the\n"
	.string "cold band. Do not move the stakes.$"

ParcelHighlands_SignCentre_Text_0:
# 250 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL WARMING CENTRE -- a MEREHOLT\n"
	.string "FOUNDATION community partnership.\p"
	.string "Forty beds. Relocation advice daily.\n"
	.string "Opened by H. AUNE.$"

ParcelHighlands_SurveyorTrainer_Text_0:
# 257 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: FOUNDATION crew. You'll be the\n"
	.string "RANGER poking at our boreholes.\p"
	.string "Keep it sporting. Mons, not paperwork.$"

ParcelHighlands_SurveyorTrainer_Text_1:
# 258 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Tch. Fine. You're not wrong about\n"
	.string "the ground. I just get paid not to write\l"
	.string "it down.$"

ParcelHighlands_SurveyorTrainer_Text_2:
# 259 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Off the record? I've moved my\n"
	.string "stakes up the slope three years\l"
	.string "running. Same line your ILEX works.\p"
	.string "We measure the same thing. They just\n"
	.string "pay me to call it opportunity.$"

ParcelHighlands_ValeGate_Text_0:
# 270 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: That's far enough.$"

ParcelHighlands_ValeGate_Text_1:
# 276 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Highland Operations. Past this\n"
	.string "point the ground is no longer ours to\l"
	.string "fix. Only to clear people off of, in\l"
	.string "order.\p"
	.string "Nobody goes up this slope on my ledger\n"
	.string "unproven. Show me you've earned the\l"
	.string "meltwater permit.$"

ParcelHighlands_ValeGate_Text_2:
# 277 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. You go up with it\n"
	.string "signed.$"

ParcelHighlands_ValeGate_Text_3:
# 280 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Vale clearance. Line item 05. The\n"
	.string "last one Highland Operations issues\l"
	.string "before the water.\p"
	.string "It certifies you fit to cross what the\n"
	.string "thaw has put in the way.$"

ParcelHighlands_ValeGate_Text_4:
# 282 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: SURF. A meltwater permit, in plain\n"
	.string "terms. It moves you over the standing\l"
	.string "thaw the slope keeps making.\p"
	.string "There's more of it every season. We\n"
	.string "don't advertise that.$"

ParcelHighlands_GymVale_Text_0:
# 293 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The ferry runs from the lowland\n"
	.string "landing. Take what you witnessed here\l"
	.string "with you. It's the only thing that\l"
	.string "leaves this slope unspoiled.$"

ParcelHighlands_Asbjorn_Text_0:
# 304 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The foothills are the easy\n"
	.string "bit. Enjoy them. Battle?$"

ParcelHighlands_Asbjorn_Text_1:
# 305 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Easy bit's over.$"

ParcelHighlands_Asbjorn_Text_2:
# 306 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The trail above the homestead\n"
	.string "went last night. Rocks, boulders. The\l"
	.string "FOUNDATION crew looked at it and went\l"
	.string "for coffee.$"

ParcelHighlands_Brynjar_Text_0:
# 311 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: My NUMEL likes the ground up\n"
	.string "here. It's warm. It shouldn't be warm.\l"
	.string "Battle.$"

ParcelHighlands_Brynjar_Text_1:
# 312 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Still warm.$"

ParcelHighlands_Brynjar_Text_2:
# 313 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Warm ground, cold air. Camp on\n"
	.string "it and you wake up in a puddle that\l"
	.string "wasn't there.$"

ParcelHighlands_Dagny_Text_0:
# 318 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: I visit the old woman. Somebody\n"
	.string "should. She won't take the grant, so\l"
	.string "they've stopped visiting. Battle first.$"

ParcelHighlands_Dagny_Text_1:
# 319 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: She'll like you. She doesn't like\n"
	.string "anyone.$"

ParcelHighlands_Dagny_Text_2:
# 320 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They built the warming centre at\n"
	.string "the bottom of the hill so she'd have\l"
	.string "somewhere to go. She hasn't gone.$"

ParcelHighlands_Eivind_Text_0:
# 325 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Three GEODUDE from the slide.\n"
	.string "The slide gave them up for free. Battle.$"

ParcelHighlands_Eivind_Text_1:
# 326 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The slide gives. The slide\n"
	.string "takes.$"

ParcelHighlands_Eivind_Text_2:
# 327 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The rock up here used to be\n"
	.string "frozen into the hill. Now it's just lying\l"
	.string "on it.$"

ParcelHighlands_Finn_Text_0:
# 332 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: SWELLOW nest on the cliffs now.\n"
	.string "They never used to come this high.\l"
	.string "Battle!$"

ParcelHighlands_Finn_Text_1:
# 333 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Never used to lose, either.$"

ParcelHighlands_Finn_Text_2:
# 334 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: New birds, new rats, new\n"
	.string "everything. Old woman says it's the end\l"
	.string "of the world. I think it's just a\l"
	.string "different world. Is that worse?$"

ParcelHighlands_Grete_Text_0:
# 339 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Cadet GRETE. ILEX has me on the\n"
	.string "lower stakes. Spar, then I'll tell you\l"
	.string "where she is.$"

ParcelHighlands_Grete_Text_1:
# 340 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: She's on the plateau. The band.\n"
	.string "You'll know it when you see the cloth.$"

ParcelHighlands_Grete_Text_2:
# 341 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: ILEX doesn't come down for days.\n"
	.string "She says the band moves at night and\l"
	.string "somebody should be there.$"

ParcelHighlands_Hauk_Text_0:
# 346 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: FOUNDATION bore crew. Off shift.\n"
	.string "I'll battle, but I won't talk about the\l"
	.string "core samples.$"

ParcelHighlands_Hauk_Text_1:
# 347 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fine. There's gas in the core.\n"
	.string "That's all. Everyone knows.$"

ParcelHighlands_Hauk_Text_2:
# 348 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: 'Exploratory.' You explore what\n"
	.string "you mean to take. That's what the word\l"
	.string "means.$"

ParcelHighlands_Jarle_Text_0:
# 353 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: The plateau's the top of the\n"
	.string "world. My world, anyway. Battle for it.$"

ParcelHighlands_Jarle_Text_1:
# 354 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Your world, then. Mind the\n"
	.string "stakes.$"

ParcelHighlands_Jarle_Text_2:
# 355 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Don't move the red stakes. ILEX\n"
	.string "will know. ILEX always knows.$"

ParcelHighlands_Kjersti_Text_0:
# 360 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds up here are new.\n"
	.string "Black water. My SNORUNT won't go near\l"
	.string "them. Battle?$"

ParcelHighlands_Kjersti_Text_1:
# 361 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Wouldn't go near you either,\n"
	.string "now.$"

ParcelHighlands_Kjersti_Text_2:
# 362 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds weren't on last\n"
	.string "year's map. The map's from the\l"
	.string "FOUNDATION. They print a new one every\l"
	.string "spring.$"

ParcelHighlands_Leidulf_Text_0:
# 367 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I came up for the cold. There's\n"
	.string "less of it than the brochure said.\l"
	.string "Battle.$"

ParcelHighlands_Leidulf_Text_1:
# 368 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Less of that than the\n"
	.string "brochure said, too.$"

ParcelHighlands_Leidulf_Text_2:
# 369 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The brochure's the\n"
	.string "FOUNDATION's. 'Alpine experience.' The\l"
	.string "alpine's leaving. The experience is\l"
	.string "watching it go.$"

ParcelHighlands_Nora_Text_0:
# 374 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The mountain is thinking about\n"
	.string "falling. Slowly. Can you hear it? Battle\l"
	.string "me.$"

ParcelHighlands_Nora_Text_1:
# 375 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: You heard it.$"

ParcelHighlands_Nora_Text_2:
# 376 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The woman at the bore thinks\n"
	.string "loud, warm thoughts. She means every\l"
	.string "one of them. That's what frightens me.$"

ParcelHighlands_Peder_Text_0:
# 381 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Nobody sees me on the rock.\n"
	.string "SNEASEL taught me. Battle.$"

ParcelHighlands_Peder_Text_1:
# 382 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: SNEASEL would've won.$"

ParcelHighlands_Peder_Text_2:
# 383 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: The SNEASEL are all up on the\n"
	.string "band now. Nowhere else cold enough.\l"
	.string "They don't like company. They've got no\l"
	.string "choice.$"

ParcelHighlands_Runa_Text_0:
# 388 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Cadet RUNA. I count the\n"
	.string "lowlanders. ZIGZAGOON, TAILLOW, NUMEL.\l"
	.string "New every month. Spar.$"

ParcelHighlands_Runa_Text_1:
# 389 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Count's the same. You're not a\n"
	.string "lowlander.$"

ParcelHighlands_Runa_Text_2:
# 390 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: ILEX says count what's arriving\n"
	.string "as carefully as what's leaving. Nobody\l"
	.string "else counts the arrivals. They look like\l"
	.string "good news.$"

ParcelHighlands_Siri_Text_0:
# 395 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: My PILOSWINE was born up here.\n"
	.string "There won't be another one born up\l"
	.string "here. Battle.$"

ParcelHighlands_Siri_Text_1:
# 396 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: It's still the strongest thing on\n"
	.string "the mountain.$"

ParcelHighlands_Siri_Text_2:
# 397 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: The fall's loud this year. More\n"
	.string "melt. Every year the fall's loud and\l"
	.string "every year there's less snow to make it.$"
