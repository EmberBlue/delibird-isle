ParcelHighlands_MapScripts::
# 26 "data/maps/ParcelHighlands/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelHighlands_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelHighlands_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 27 "data/maps/ParcelHighlands/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 4, ParcelHighlands_Epilogue
	.2byte 0


ParcelHighlands_FirstEntry::
# 33 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_ARRIVAL, ParcelHighlands_FirstEntry_2
# 37 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 38 "data/maps/ParcelHighlands/scripts.pory"
	bufferpartymonnick 0, 0
# 39 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_1, MSGBOX_DEFAULT
# 41 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_ARRIVAL
# 42 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_FirstEntry_2:
	end


ParcelHighlands_SlideScene::
# 48 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_3, 1
# 49 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_HL_SLIDE_SCENE, ParcelHighlands_SlideScene_2
# 52 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 53 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SlideScene_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SlideScene_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_HL_SLIDE_SCENE
# 56 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_SlideScene_2:
	end


ParcelHighlands_SlideSign::
# 60 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SlideSign_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_Thermokarst::
# 66 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 67 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 68 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 0
# 69 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 70 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Thermokarst_2
# 75 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Thermokarst_Text_1, MSGBOX_SIGN
# 76 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 77 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Thermokarst_2:
# 71 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Thermokarst_Text_0, MSGBOX_SIGN
# 72 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_DrunkenForest::
# 81 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 82 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 83 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 1
# 84 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 85 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_DrunkenForest_2
# 90 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrunkenForest_Text_1, MSGBOX_SIGN
# 91 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 92 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_DrunkenForest_2:
# 86 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrunkenForest_Text_0, MSGBOX_SIGN
# 87 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Lowlander::
# 96 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 97 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 98 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 3
# 99 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 100 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Lowlander_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_DrillSign::
# 105 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 106 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 107 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 4
# 108 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 109 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrillSign_Text_0, MSGBOX_SIGN
# 110 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_BandStakes::
# 114 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_BandStakes_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_Ilex::
# 120 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 121 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 122 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Ilex_2
# 127 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 128 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 2
# 129 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 130 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Ilex_5
# 135 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_2, MSGBOX_DEFAULT
# 136 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_3, MSGBOX_DEFAULT
# 137 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_4, MSGBOX_DEFAULT
# 138 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_5, MSGBOX_DEFAULT
# 139 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 140 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_2:
# 123 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_0, MSGBOX_DEFAULT
# 124 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_5:
# 131 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hollis::
# 146 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 147 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 148 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Hollis_2
# 153 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 154 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 7
# 155 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 156 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Hollis_5
# 161 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_2, MSGBOX_DEFAULT
# 162 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_3, MSGBOX_DEFAULT
# 163 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_4, MSGBOX_DEFAULT
# 164 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_5, MSGBOX_DEFAULT
# 165 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_6, MSGBOX_DEFAULT
# 166 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 167 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_2:
# 149 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_0, MSGBOX_DEFAULT
# 150 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_5:
# 157 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_1, MSGBOX_DEFAULT
# 158 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_HollisTech::
# 171 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 172 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 173 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_HollisTech_2
# 178 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlands_HollisTech_5
# 183 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_2, MSGBOX_DEFAULT
# 184 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_HollisTech_2:
# 174 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_HollisTech_5:
# 179 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_1, MSGBOX_DEFAULT
# 180 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Homesteader::
# 190 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 191 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 192 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Homesteader_2
# 197 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 198 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 5
# 199 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 200 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Homesteader_5
# 224 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_6, MSGBOX_DEFAULT
# 225 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_7, MSGBOX_DEFAULT
# 226 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_8, MSGBOX_DEFAULT
# 227 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 228 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_2:
# 193 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_0, MSGBOX_DEFAULT
# 194 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_5:
# 201 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Homesteader_9
ParcelHighlands_Homesteader_7:
# 215 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_HL_EGG_GIVEN, ParcelHighlands_Homesteader_13
# 220 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_5, MSGBOX_DEFAULT
# 221 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_8:
# 202 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_1, MSGBOX_DEFAULT
# 203 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 204 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Homesteader_16
# 209 "data/maps/ParcelHighlands/scripts.pory"
	giveegg SPECIES_SWINUB
# 210 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_HL_EGG_GIVEN
# 211 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_3, MSGBOX_DEFAULT
# 212 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_9:
# 201 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_HL_EGG_GIVEN, ParcelHighlands_Homesteader_8
	goto ParcelHighlands_Homesteader_7

ParcelHighlands_Homesteader_13:
# 216 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_4, MSGBOX_DEFAULT
# 217 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_16:
# 205 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_2, MSGBOX_DEFAULT
# 206 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hale::
# 234 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 235 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 236 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Hale_2
# 241 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Hale_5
# 246 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 247 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 63
# 248 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 249 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Hale_8
# 268 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_9, MSGBOX_DEFAULT
# 269 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_2:
# 237 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_0, MSGBOX_DEFAULT
# 238 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_5:
# 242 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_1, MSGBOX_DEFAULT
# 243 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_8:
# 250 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyHighlands
# 252 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_3, MSGBOX_DEFAULT
# 253 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_4, MSGBOX_DEFAULT
# 254 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_5, MSGBOX_DEFAULT
# 255 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_6, MSGBOX_DEFAULT
# 256 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 6
# 257 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 258 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_7, MSGBOX_DEFAULT
# 259 "data/maps/ParcelHighlands/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 260 "data/maps/ParcelHighlands/scripts.pory"
	waitfanfare
# 261 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_CERT
# 262 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_MAX_POTION, 3
# 263 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_REVIVE, 3
# 264 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_8, MSGBOX_DEFAULT
# 265 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ItemPotion::
# 274 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelHighlands_ItemMaxRepel::
# 275 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelHighlands_ItemIceHeal::
# 276 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelHighlands_SurfCache::
# 278 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_RARE_CANDY
# 279 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_SURF
	end


ParcelHighlands_FallsCache::
# 283 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_PP_MAX
# 284 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_FALLS
	end


ParcelHighlands_SignSummit::
# 290 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignSummit_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SignCentre::
# 294 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignCentre_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SurveyorTrainer::
# 300 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SURVEYOR, ParcelHighlands_SurveyorTrainer_Text_0, ParcelHighlands_SurveyorTrainer_Text_1, ParcelHighlands_SurveyorTrainer_FirstWin
# 304 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 305 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_SurveyorTrainer_3
ParcelHighlands_SurveyorTrainer_1:
# 308 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_SurveyorTrainer_8
ParcelHighlands_SurveyorTrainer_6:
# 311 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_SurveyorTrainer_13
ParcelHighlands_SurveyorTrainer_11:
# 314 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_SurveyorTrainer_18
ParcelHighlands_SurveyorTrainer_16:
# 317 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_SurveyorTrainer_2:
# 306 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R2
	goto ParcelHighlands_SurveyorTrainer_1

ParcelHighlands_SurveyorTrainer_3:
# 305 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R2
	goto_if 0, ParcelHighlands_SurveyorTrainer_2
	goto ParcelHighlands_SurveyorTrainer_1

ParcelHighlands_SurveyorTrainer_7:
# 309 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R3
	goto ParcelHighlands_SurveyorTrainer_6

ParcelHighlands_SurveyorTrainer_8:
# 308 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R3
	goto_if 0, ParcelHighlands_SurveyorTrainer_7
	goto ParcelHighlands_SurveyorTrainer_6

ParcelHighlands_SurveyorTrainer_12:
# 312 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R4
	goto ParcelHighlands_SurveyorTrainer_11

ParcelHighlands_SurveyorTrainer_13:
# 311 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R4
	goto_if 0, ParcelHighlands_SurveyorTrainer_12
	goto ParcelHighlands_SurveyorTrainer_11

ParcelHighlands_SurveyorTrainer_17:
# 315 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R5
	goto ParcelHighlands_SurveyorTrainer_16

ParcelHighlands_SurveyorTrainer_18:
# 314 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R5
	goto_if 0, ParcelHighlands_SurveyorTrainer_17
	goto ParcelHighlands_SurveyorTrainer_16


ParcelHighlands_SurveyorTrainer_FirstWin::
# 321 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
# 322 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R2::
# 326 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 327 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 328 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_0, MSGBOX_YESNO
# 329 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R2_2
# 334 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R2, ParcelHighlands_SurveyorTrainer_R2_Text_2
# 335 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_3, MSGBOX_DEFAULT
# 336 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R2_2:
# 330 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 331 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R3::
# 340 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 341 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 342 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R3_Text_0, MSGBOX_YESNO
# 343 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R3_2
# 348 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R3, ParcelHighlands_SurveyorTrainer_R3_Text_1
# 349 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R3_Text_2, MSGBOX_DEFAULT
# 350 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R3_2:
# 344 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R4::
# 354 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 355 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 356 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R4_Text_0, MSGBOX_YESNO
# 357 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R4_2
# 362 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R4, ParcelHighlands_SurveyorTrainer_R4_Text_1
# 363 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R4_Text_2, MSGBOX_DEFAULT
# 364 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R4_2:
# 358 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 359 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R5::
# 368 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 369 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 370 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R5_Text_0, MSGBOX_YESNO
# 371 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R5_2
# 376 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R5, ParcelHighlands_SurveyorTrainer_R2_Text_2
# 377 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R5_Text_1, MSGBOX_DEFAULT
# 378 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R5_2:
# 372 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 373 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ValeGate::
# 384 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, ParcelHighlands_ValeGate_2
# 388 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 389 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_0, MSGBOX_DEFAULT
# 390 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 391 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeApproach
# 392 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 393 "data/maps/ParcelHighlands/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_HL_FaceRight
# 394 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 395 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_1, MSGBOX_DEFAULT
# 396 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5, ParcelHighlands_ValeGate_Text_2
# 397 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_BADGE05_GET
# 398 "data/maps/ParcelHighlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 399 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_3, MSGBOX_DEFAULT
# 400 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_HM03
# 401 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_4, MSGBOX_DEFAULT
# 402 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 403 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeBack
# 404 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 405 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
# 406 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_ValeGate_2:
# 385 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


ParcelHighlands_GymVale::
# 410 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 411 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 412 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_GymVale_2
ParcelHighlands_GymVale_1:
# 415 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Text_0, MSGBOX_DEFAULT
# 416 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_GymVale_2:
# 413 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_GymVale_Rematch
	goto ParcelHighlands_GymVale_1


# 419 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeApproach:
# 419 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
# 419 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
	step_end

# 420 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeBack:
# 420 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 420 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 420 "data/maps/ParcelHighlands/scripts.pory"
	face_left
	step_end

# 421 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_FaceRight:
# 421 "data/maps/ParcelHighlands/scripts.pory"
	face_right
	step_end

ParcelHighlands_Asbjorn::
# 425 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_ASBJORN, ParcelHighlands_Asbjorn_Text_0, ParcelHighlands_Asbjorn_Text_1, ParcelHighlands_Asbjorn_FirstWin
# 429 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 430 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Asbjorn_3
ParcelHighlands_Asbjorn_1:
# 433 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Asbjorn_8
ParcelHighlands_Asbjorn_6:
# 436 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Asbjorn_13
ParcelHighlands_Asbjorn_11:
# 439 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Asbjorn_18
ParcelHighlands_Asbjorn_16:
# 442 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Asbjorn_2:
# 431 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R2
	goto ParcelHighlands_Asbjorn_1

ParcelHighlands_Asbjorn_3:
# 430 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R2
	goto_if 0, ParcelHighlands_Asbjorn_2
	goto ParcelHighlands_Asbjorn_1

ParcelHighlands_Asbjorn_7:
# 434 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R3
	goto ParcelHighlands_Asbjorn_6

ParcelHighlands_Asbjorn_8:
# 433 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R3
	goto_if 0, ParcelHighlands_Asbjorn_7
	goto ParcelHighlands_Asbjorn_6

ParcelHighlands_Asbjorn_12:
# 437 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R4
	goto ParcelHighlands_Asbjorn_11

ParcelHighlands_Asbjorn_13:
# 436 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R4
	goto_if 0, ParcelHighlands_Asbjorn_12
	goto ParcelHighlands_Asbjorn_11

ParcelHighlands_Asbjorn_17:
# 440 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R5
	goto ParcelHighlands_Asbjorn_16

ParcelHighlands_Asbjorn_18:
# 439 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R5
	goto_if 0, ParcelHighlands_Asbjorn_17
	goto ParcelHighlands_Asbjorn_16


ParcelHighlands_Asbjorn_FirstWin::
# 446 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
# 447 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R2::
# 451 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 452 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 453 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_0, MSGBOX_YESNO
# 454 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R2_2
# 459 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R2, ParcelHighlands_Asbjorn_R2_Text_2
# 460 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_3, MSGBOX_DEFAULT
# 461 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R2_2:
# 455 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 456 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R3::
# 465 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 466 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 467 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R3_Text_0, MSGBOX_YESNO
# 468 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R3_2
# 473 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R3, ParcelHighlands_Asbjorn_R3_Text_1
# 474 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R3_Text_2, MSGBOX_DEFAULT
# 475 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R3_2:
# 469 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 470 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R4::
# 479 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 480 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 481 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R4_Text_0, MSGBOX_YESNO
# 482 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R4_2
# 487 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R4, ParcelHighlands_Asbjorn_R4_Text_1
# 488 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R4_Text_2, MSGBOX_DEFAULT
# 489 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R4_2:
# 483 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 484 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R5::
# 493 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 494 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 495 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R5_Text_0, MSGBOX_YESNO
# 496 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R5_2
# 501 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R5, ParcelHighlands_Asbjorn_R2_Text_2
# 502 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R5_Text_1, MSGBOX_DEFAULT
# 503 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R5_2:
# 497 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 498 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar::
# 507 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_BRYNJAR, ParcelHighlands_Brynjar_Text_0, ParcelHighlands_Brynjar_Text_1, ParcelHighlands_Brynjar_FirstWin
# 511 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 512 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Brynjar_3
ParcelHighlands_Brynjar_1:
# 515 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Brynjar_8
ParcelHighlands_Brynjar_6:
# 518 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Brynjar_13
ParcelHighlands_Brynjar_11:
# 521 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Brynjar_18
ParcelHighlands_Brynjar_16:
# 524 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Brynjar_2:
# 513 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R2
	goto ParcelHighlands_Brynjar_1

ParcelHighlands_Brynjar_3:
# 512 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R2
	goto_if 0, ParcelHighlands_Brynjar_2
	goto ParcelHighlands_Brynjar_1

ParcelHighlands_Brynjar_7:
# 516 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R3
	goto ParcelHighlands_Brynjar_6

ParcelHighlands_Brynjar_8:
# 515 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R3
	goto_if 0, ParcelHighlands_Brynjar_7
	goto ParcelHighlands_Brynjar_6

ParcelHighlands_Brynjar_12:
# 519 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R4
	goto ParcelHighlands_Brynjar_11

ParcelHighlands_Brynjar_13:
# 518 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R4
	goto_if 0, ParcelHighlands_Brynjar_12
	goto ParcelHighlands_Brynjar_11

ParcelHighlands_Brynjar_17:
# 522 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R5
	goto ParcelHighlands_Brynjar_16

ParcelHighlands_Brynjar_18:
# 521 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R5
	goto_if 0, ParcelHighlands_Brynjar_17
	goto ParcelHighlands_Brynjar_16


ParcelHighlands_Brynjar_FirstWin::
# 528 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
# 529 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R2::
# 533 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 534 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 535 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_0, MSGBOX_YESNO
# 536 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R2_2
# 541 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R2, ParcelHighlands_Brynjar_R2_Text_2
# 542 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_3, MSGBOX_DEFAULT
# 543 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R2_2:
# 537 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 538 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R3::
# 547 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 548 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 549 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R3_Text_0, MSGBOX_YESNO
# 550 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R3_2
# 555 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R3, ParcelHighlands_Brynjar_R3_Text_1
# 556 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R3_Text_2, MSGBOX_DEFAULT
# 557 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R3_2:
# 551 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 552 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R4::
# 561 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 562 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 563 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R4_Text_0, MSGBOX_YESNO
# 564 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R4_2
# 569 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R4, ParcelHighlands_Brynjar_R3_Text_1
# 570 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R4_Text_1, MSGBOX_DEFAULT
# 571 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R4_2:
# 565 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 566 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R5::
# 575 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 576 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 577 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R5_Text_0, MSGBOX_YESNO
# 578 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R5_2
# 583 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R5, ParcelHighlands_Brynjar_R2_Text_2
# 584 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R5_Text_1, MSGBOX_DEFAULT
# 585 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R5_2:
# 579 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 580 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny::
# 589 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_DAGNY, ParcelHighlands_Dagny_Text_0, ParcelHighlands_Dagny_Text_1, ParcelHighlands_Dagny_FirstWin
# 593 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 594 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Dagny_3
ParcelHighlands_Dagny_1:
# 597 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Dagny_8
ParcelHighlands_Dagny_6:
# 600 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Dagny_13
ParcelHighlands_Dagny_11:
# 603 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Dagny_18
ParcelHighlands_Dagny_16:
# 606 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Dagny_2:
# 595 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R2
	goto ParcelHighlands_Dagny_1

ParcelHighlands_Dagny_3:
# 594 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R2
	goto_if 0, ParcelHighlands_Dagny_2
	goto ParcelHighlands_Dagny_1

ParcelHighlands_Dagny_7:
# 598 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R3
	goto ParcelHighlands_Dagny_6

ParcelHighlands_Dagny_8:
# 597 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R3
	goto_if 0, ParcelHighlands_Dagny_7
	goto ParcelHighlands_Dagny_6

ParcelHighlands_Dagny_12:
# 601 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R4
	goto ParcelHighlands_Dagny_11

ParcelHighlands_Dagny_13:
# 600 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R4
	goto_if 0, ParcelHighlands_Dagny_12
	goto ParcelHighlands_Dagny_11

ParcelHighlands_Dagny_17:
# 604 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R5
	goto ParcelHighlands_Dagny_16

ParcelHighlands_Dagny_18:
# 603 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R5
	goto_if 0, ParcelHighlands_Dagny_17
	goto ParcelHighlands_Dagny_16


ParcelHighlands_Dagny_FirstWin::
# 610 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
# 611 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R2::
# 615 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 616 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 617 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_0, MSGBOX_YESNO
# 618 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R2_2
# 623 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R2, ParcelHighlands_Dagny_R2_Text_2
# 624 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_3, MSGBOX_DEFAULT
# 625 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R2_2:
# 619 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 620 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R3::
# 629 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 630 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 631 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R3_Text_0, MSGBOX_YESNO
# 632 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R3_2
# 637 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R3, ParcelHighlands_Dagny_R2_Text_2
# 638 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R3_Text_1, MSGBOX_DEFAULT
# 639 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R3_2:
# 633 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 634 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R4::
# 643 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 644 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 645 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R4_Text_0, MSGBOX_YESNO
# 646 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R4_2
# 651 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R4, ParcelHighlands_Dagny_R2_Text_2
# 652 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R4_Text_1, MSGBOX_DEFAULT
# 653 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R4_2:
# 647 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 648 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R5::
# 657 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 658 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 659 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R5_Text_0, MSGBOX_YESNO
# 660 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R5_2
# 665 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R5, ParcelHighlands_Dagny_R5_Text_1
# 666 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R5_Text_2, MSGBOX_DEFAULT
# 667 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R5_2:
# 661 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 662 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind::
# 671 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_EIVIND, ParcelHighlands_Eivind_Text_0, ParcelHighlands_Eivind_Text_1, ParcelHighlands_Eivind_FirstWin
# 675 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 676 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Eivind_3
ParcelHighlands_Eivind_1:
# 679 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Eivind_8
ParcelHighlands_Eivind_6:
# 682 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Eivind_13
ParcelHighlands_Eivind_11:
# 685 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Eivind_18
ParcelHighlands_Eivind_16:
# 688 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Eivind_2:
# 677 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R2
	goto ParcelHighlands_Eivind_1

ParcelHighlands_Eivind_3:
# 676 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R2
	goto_if 0, ParcelHighlands_Eivind_2
	goto ParcelHighlands_Eivind_1

ParcelHighlands_Eivind_7:
# 680 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R3
	goto ParcelHighlands_Eivind_6

ParcelHighlands_Eivind_8:
# 679 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R3
	goto_if 0, ParcelHighlands_Eivind_7
	goto ParcelHighlands_Eivind_6

ParcelHighlands_Eivind_12:
# 683 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R4
	goto ParcelHighlands_Eivind_11

ParcelHighlands_Eivind_13:
# 682 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R4
	goto_if 0, ParcelHighlands_Eivind_12
	goto ParcelHighlands_Eivind_11

ParcelHighlands_Eivind_17:
# 686 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R5
	goto ParcelHighlands_Eivind_16

ParcelHighlands_Eivind_18:
# 685 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R5
	goto_if 0, ParcelHighlands_Eivind_17
	goto ParcelHighlands_Eivind_16


ParcelHighlands_Eivind_FirstWin::
# 692 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
# 693 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R2::
# 697 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 698 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 699 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_0, MSGBOX_YESNO
# 700 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R2_2
# 705 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R2, ParcelHighlands_Eivind_R2_Text_2
# 706 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_3, MSGBOX_DEFAULT
# 707 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R2_2:
# 701 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 702 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R3::
# 711 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 712 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 713 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R3_Text_0, MSGBOX_YESNO
# 714 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R3_2
# 719 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R3, ParcelHighlands_Eivind_R3_Text_1
# 720 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R3_Text_2, MSGBOX_DEFAULT
# 721 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R3_2:
# 715 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 716 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R4::
# 725 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 726 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 727 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R4_Text_0, MSGBOX_YESNO
# 728 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R4_2
# 733 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R4, ParcelHighlands_Eivind_R3_Text_1
# 734 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R4_Text_1, MSGBOX_DEFAULT
# 735 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R4_2:
# 729 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 730 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R5::
# 739 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 740 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 741 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R5_Text_0, MSGBOX_YESNO
# 742 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R5_2
# 747 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R5, ParcelHighlands_Eivind_R5_Text_1
# 748 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R5_Text_2, MSGBOX_DEFAULT
# 749 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R5_2:
# 743 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 744 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn::
# 753 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_FINN, ParcelHighlands_Finn_Text_0, ParcelHighlands_Finn_Text_1, ParcelHighlands_Finn_FirstWin
# 757 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 758 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Finn_3
ParcelHighlands_Finn_1:
# 761 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Finn_8
ParcelHighlands_Finn_6:
# 764 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Finn_13
ParcelHighlands_Finn_11:
# 767 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Finn_18
ParcelHighlands_Finn_16:
# 770 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Finn_2:
# 759 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R2
	goto ParcelHighlands_Finn_1

ParcelHighlands_Finn_3:
# 758 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R2
	goto_if 0, ParcelHighlands_Finn_2
	goto ParcelHighlands_Finn_1

ParcelHighlands_Finn_7:
# 762 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R3
	goto ParcelHighlands_Finn_6

ParcelHighlands_Finn_8:
# 761 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R3
	goto_if 0, ParcelHighlands_Finn_7
	goto ParcelHighlands_Finn_6

ParcelHighlands_Finn_12:
# 765 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R4
	goto ParcelHighlands_Finn_11

ParcelHighlands_Finn_13:
# 764 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R4
	goto_if 0, ParcelHighlands_Finn_12
	goto ParcelHighlands_Finn_11

ParcelHighlands_Finn_17:
# 768 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R5
	goto ParcelHighlands_Finn_16

ParcelHighlands_Finn_18:
# 767 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R5
	goto_if 0, ParcelHighlands_Finn_17
	goto ParcelHighlands_Finn_16


ParcelHighlands_Finn_FirstWin::
# 774 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
# 775 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R2::
# 779 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 780 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 781 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_0, MSGBOX_YESNO
# 782 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R2_2
# 787 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R2, ParcelHighlands_Finn_R2_Text_2
# 788 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_3, MSGBOX_DEFAULT
# 789 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R2_2:
# 783 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 784 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R3::
# 793 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 794 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 795 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R3_Text_0, MSGBOX_YESNO
# 796 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R3_2
# 801 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R3, ParcelHighlands_Finn_R2_Text_2
# 802 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R3_Text_1, MSGBOX_DEFAULT
# 803 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R3_2:
# 797 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 798 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R4::
# 807 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 808 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 809 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R4_Text_0, MSGBOX_YESNO
# 810 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R4_2
# 815 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R4, ParcelHighlands_Finn_R4_Text_1
# 816 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R4_Text_2, MSGBOX_DEFAULT
# 817 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R4_2:
# 811 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 812 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R5::
# 821 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 822 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 823 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R5_Text_0, MSGBOX_YESNO
# 824 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R5_2
# 829 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R5, ParcelHighlands_Finn_R5_Text_1
# 830 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R5_Text_2, MSGBOX_DEFAULT
# 831 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R5_2:
# 825 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 826 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete::
# 835 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_GRETE, ParcelHighlands_Grete_Text_0, ParcelHighlands_Grete_Text_1, ParcelHighlands_Grete_FirstWin
# 839 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 840 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Grete_3
ParcelHighlands_Grete_1:
# 843 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Grete_8
ParcelHighlands_Grete_6:
# 846 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Grete_13
ParcelHighlands_Grete_11:
# 849 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Grete_18
ParcelHighlands_Grete_16:
# 852 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Grete_2:
# 841 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R2
	goto ParcelHighlands_Grete_1

ParcelHighlands_Grete_3:
# 840 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R2
	goto_if 0, ParcelHighlands_Grete_2
	goto ParcelHighlands_Grete_1

ParcelHighlands_Grete_7:
# 844 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R3
	goto ParcelHighlands_Grete_6

ParcelHighlands_Grete_8:
# 843 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R3
	goto_if 0, ParcelHighlands_Grete_7
	goto ParcelHighlands_Grete_6

ParcelHighlands_Grete_12:
# 847 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R4
	goto ParcelHighlands_Grete_11

ParcelHighlands_Grete_13:
# 846 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R4
	goto_if 0, ParcelHighlands_Grete_12
	goto ParcelHighlands_Grete_11

ParcelHighlands_Grete_17:
# 850 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R5
	goto ParcelHighlands_Grete_16

ParcelHighlands_Grete_18:
# 849 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R5
	goto_if 0, ParcelHighlands_Grete_17
	goto ParcelHighlands_Grete_16


ParcelHighlands_Grete_FirstWin::
# 856 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
# 857 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R2::
# 861 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 862 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 863 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_0, MSGBOX_YESNO
# 864 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R2_2
# 869 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R2, ParcelHighlands_Grete_R2_Text_2
# 870 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_3, MSGBOX_DEFAULT
# 871 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R2_2:
# 865 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 866 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R3::
# 875 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 876 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 877 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R3_Text_0, MSGBOX_YESNO
# 878 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R3_2
# 883 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R3, ParcelHighlands_Grete_R2_Text_2
# 884 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R3_Text_1, MSGBOX_DEFAULT
# 885 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R3_2:
# 879 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 880 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R4::
# 889 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 890 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 891 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R4_Text_0, MSGBOX_YESNO
# 892 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R4_2
# 897 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R4, ParcelHighlands_Grete_R4_Text_1
# 898 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R4_Text_2, MSGBOX_DEFAULT
# 899 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R4_2:
# 893 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 894 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R5::
# 903 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 904 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 905 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R5_Text_0, MSGBOX_YESNO
# 906 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R5_2
# 911 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R5, ParcelHighlands_Grete_R2_Text_2
# 912 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R5_Text_1, MSGBOX_DEFAULT
# 913 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R5_2:
# 907 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 908 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk::
# 917 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HAUK, ParcelHighlands_Hauk_Text_0, ParcelHighlands_Hauk_Text_1, ParcelHighlands_Hauk_FirstWin
# 921 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 922 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Hauk_3
ParcelHighlands_Hauk_1:
# 925 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Hauk_8
ParcelHighlands_Hauk_6:
# 928 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Hauk_13
ParcelHighlands_Hauk_11:
# 931 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Hauk_18
ParcelHighlands_Hauk_16:
# 934 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Hauk_2:
# 923 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R2
	goto ParcelHighlands_Hauk_1

ParcelHighlands_Hauk_3:
# 922 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R2
	goto_if 0, ParcelHighlands_Hauk_2
	goto ParcelHighlands_Hauk_1

ParcelHighlands_Hauk_7:
# 926 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R3
	goto ParcelHighlands_Hauk_6

ParcelHighlands_Hauk_8:
# 925 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R3
	goto_if 0, ParcelHighlands_Hauk_7
	goto ParcelHighlands_Hauk_6

ParcelHighlands_Hauk_12:
# 929 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R4
	goto ParcelHighlands_Hauk_11

ParcelHighlands_Hauk_13:
# 928 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R4
	goto_if 0, ParcelHighlands_Hauk_12
	goto ParcelHighlands_Hauk_11

ParcelHighlands_Hauk_17:
# 932 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R5
	goto ParcelHighlands_Hauk_16

ParcelHighlands_Hauk_18:
# 931 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R5
	goto_if 0, ParcelHighlands_Hauk_17
	goto ParcelHighlands_Hauk_16


ParcelHighlands_Hauk_FirstWin::
# 938 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
# 939 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R2::
# 943 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 944 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 945 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_0, MSGBOX_YESNO
# 946 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R2_2
# 951 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R2, ParcelHighlands_Hauk_R2_Text_2
# 952 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_3, MSGBOX_DEFAULT
# 953 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R2_2:
# 947 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 948 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R3::
# 957 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 958 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 959 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R3_Text_0, MSGBOX_YESNO
# 960 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R3_2
# 965 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R3, ParcelHighlands_Hauk_R3_Text_1
# 966 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R3_Text_2, MSGBOX_DEFAULT
# 967 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R3_2:
# 961 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 962 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R4::
# 971 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 972 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 973 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R4_Text_0, MSGBOX_YESNO
# 974 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R4_2
# 979 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R4, ParcelHighlands_Hauk_R4_Text_1
# 980 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R4_Text_2, MSGBOX_DEFAULT
# 981 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R4_2:
# 975 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 976 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R5::
# 985 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 986 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 987 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R5_Text_0, MSGBOX_YESNO
# 988 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R5_2
# 993 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R5, ParcelHighlands_Hauk_R5_Text_1
# 994 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R5_Text_2, MSGBOX_DEFAULT
# 995 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R5_2:
# 989 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 990 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle::
# 999 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_JARLE, ParcelHighlands_Jarle_Text_0, ParcelHighlands_Jarle_Text_1, ParcelHighlands_Jarle_FirstWin
# 1003 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1004 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Jarle_3
ParcelHighlands_Jarle_1:
# 1007 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Jarle_8
ParcelHighlands_Jarle_6:
# 1010 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Jarle_13
ParcelHighlands_Jarle_11:
# 1013 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Jarle_18
ParcelHighlands_Jarle_16:
# 1016 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Jarle_2:
# 1005 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R2
	goto ParcelHighlands_Jarle_1

ParcelHighlands_Jarle_3:
# 1004 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R2
	goto_if 0, ParcelHighlands_Jarle_2
	goto ParcelHighlands_Jarle_1

ParcelHighlands_Jarle_7:
# 1008 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R3
	goto ParcelHighlands_Jarle_6

ParcelHighlands_Jarle_8:
# 1007 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R3
	goto_if 0, ParcelHighlands_Jarle_7
	goto ParcelHighlands_Jarle_6

ParcelHighlands_Jarle_12:
# 1011 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R4
	goto ParcelHighlands_Jarle_11

ParcelHighlands_Jarle_13:
# 1010 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R4
	goto_if 0, ParcelHighlands_Jarle_12
	goto ParcelHighlands_Jarle_11

ParcelHighlands_Jarle_17:
# 1014 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R5
	goto ParcelHighlands_Jarle_16

ParcelHighlands_Jarle_18:
# 1013 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R5
	goto_if 0, ParcelHighlands_Jarle_17
	goto ParcelHighlands_Jarle_16


ParcelHighlands_Jarle_FirstWin::
# 1020 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
# 1021 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R2::
# 1025 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1026 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1027 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_0, MSGBOX_YESNO
# 1028 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R2_2
# 1033 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R2, ParcelHighlands_Jarle_R2_Text_2
# 1034 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_3, MSGBOX_DEFAULT
# 1035 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R2_2:
# 1029 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1030 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R3::
# 1039 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1040 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1041 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R3_Text_0, MSGBOX_YESNO
# 1042 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R3_2
# 1047 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R3, ParcelHighlands_Jarle_R3_Text_1
# 1048 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R3_Text_2, MSGBOX_DEFAULT
# 1049 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R3_2:
# 1043 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1044 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R4::
# 1053 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1054 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1055 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R4_Text_0, MSGBOX_YESNO
# 1056 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R4_2
# 1061 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R4, ParcelHighlands_Jarle_R3_Text_1
# 1062 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R4_Text_1, MSGBOX_DEFAULT
# 1063 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R4_2:
# 1057 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1058 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R5::
# 1067 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1068 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1069 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R5_Text_0, MSGBOX_YESNO
# 1070 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R5_2
# 1075 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R5, ParcelHighlands_Jarle_R3_Text_1
# 1076 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R5_Text_1, MSGBOX_DEFAULT
# 1077 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R5_2:
# 1071 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1072 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti::
# 1081 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_KJERSTI, ParcelHighlands_Kjersti_Text_0, ParcelHighlands_Kjersti_Text_1, ParcelHighlands_Kjersti_FirstWin
# 1085 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1086 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Kjersti_3
ParcelHighlands_Kjersti_1:
# 1089 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Kjersti_8
ParcelHighlands_Kjersti_6:
# 1092 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Kjersti_13
ParcelHighlands_Kjersti_11:
# 1095 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Kjersti_18
ParcelHighlands_Kjersti_16:
# 1098 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Kjersti_2:
# 1087 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R2
	goto ParcelHighlands_Kjersti_1

ParcelHighlands_Kjersti_3:
# 1086 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R2
	goto_if 0, ParcelHighlands_Kjersti_2
	goto ParcelHighlands_Kjersti_1

ParcelHighlands_Kjersti_7:
# 1090 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R3
	goto ParcelHighlands_Kjersti_6

ParcelHighlands_Kjersti_8:
# 1089 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R3
	goto_if 0, ParcelHighlands_Kjersti_7
	goto ParcelHighlands_Kjersti_6

ParcelHighlands_Kjersti_12:
# 1093 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R4
	goto ParcelHighlands_Kjersti_11

ParcelHighlands_Kjersti_13:
# 1092 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R4
	goto_if 0, ParcelHighlands_Kjersti_12
	goto ParcelHighlands_Kjersti_11

ParcelHighlands_Kjersti_17:
# 1096 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R5
	goto ParcelHighlands_Kjersti_16

ParcelHighlands_Kjersti_18:
# 1095 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R5
	goto_if 0, ParcelHighlands_Kjersti_17
	goto ParcelHighlands_Kjersti_16


ParcelHighlands_Kjersti_FirstWin::
# 1102 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
# 1103 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R2::
# 1107 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1108 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1109 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_0, MSGBOX_YESNO
# 1110 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R2_2
# 1115 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R2, ParcelHighlands_Kjersti_R2_Text_2
# 1116 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_3, MSGBOX_DEFAULT
# 1117 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R2_2:
# 1111 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1112 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R3::
# 1121 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1122 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1123 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R3_Text_0, MSGBOX_YESNO
# 1124 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R3_2
# 1129 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R3, ParcelHighlands_Kjersti_R2_Text_2
# 1130 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R3_Text_1, MSGBOX_DEFAULT
# 1131 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R3_2:
# 1125 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1126 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R4::
# 1135 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1136 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1137 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R4_Text_0, MSGBOX_YESNO
# 1138 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R4_2
# 1143 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R4, ParcelHighlands_Kjersti_R4_Text_1
# 1144 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R4_Text_2, MSGBOX_DEFAULT
# 1145 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R4_2:
# 1139 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1140 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R5::
# 1149 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1150 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1151 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R5_Text_0, MSGBOX_YESNO
# 1152 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R5_2
# 1157 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R5, ParcelHighlands_Kjersti_R2_Text_2
# 1158 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R5_Text_1, MSGBOX_DEFAULT
# 1159 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R5_2:
# 1153 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1154 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf::
# 1163 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_LEIDULF, ParcelHighlands_Leidulf_Text_0, ParcelHighlands_Leidulf_Text_1, ParcelHighlands_Leidulf_FirstWin
# 1167 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1168 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Leidulf_3
ParcelHighlands_Leidulf_1:
# 1171 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Leidulf_8
ParcelHighlands_Leidulf_6:
# 1174 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Leidulf_13
ParcelHighlands_Leidulf_11:
# 1177 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Leidulf_18
ParcelHighlands_Leidulf_16:
# 1180 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Leidulf_2:
# 1169 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R2
	goto ParcelHighlands_Leidulf_1

ParcelHighlands_Leidulf_3:
# 1168 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R2
	goto_if 0, ParcelHighlands_Leidulf_2
	goto ParcelHighlands_Leidulf_1

ParcelHighlands_Leidulf_7:
# 1172 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R3
	goto ParcelHighlands_Leidulf_6

ParcelHighlands_Leidulf_8:
# 1171 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R3
	goto_if 0, ParcelHighlands_Leidulf_7
	goto ParcelHighlands_Leidulf_6

ParcelHighlands_Leidulf_12:
# 1175 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R4
	goto ParcelHighlands_Leidulf_11

ParcelHighlands_Leidulf_13:
# 1174 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R4
	goto_if 0, ParcelHighlands_Leidulf_12
	goto ParcelHighlands_Leidulf_11

ParcelHighlands_Leidulf_17:
# 1178 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R5
	goto ParcelHighlands_Leidulf_16

ParcelHighlands_Leidulf_18:
# 1177 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R5
	goto_if 0, ParcelHighlands_Leidulf_17
	goto ParcelHighlands_Leidulf_16


ParcelHighlands_Leidulf_FirstWin::
# 1184 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
# 1185 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R2::
# 1189 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1190 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1191 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_0, MSGBOX_YESNO
# 1192 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R2_2
# 1197 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R2, ParcelHighlands_Leidulf_R2_Text_2
# 1198 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_3, MSGBOX_DEFAULT
# 1199 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R2_2:
# 1193 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1194 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R3::
# 1203 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1204 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1205 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R3_Text_0, MSGBOX_YESNO
# 1206 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R3_2
# 1211 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R3, ParcelHighlands_Leidulf_R3_Text_1
# 1212 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R3_Text_2, MSGBOX_DEFAULT
# 1213 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R3_2:
# 1207 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1208 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R4::
# 1217 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1218 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1219 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R4_Text_0, MSGBOX_YESNO
# 1220 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R4_2
# 1225 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R4, ParcelHighlands_Leidulf_R3_Text_1
# 1226 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R4_Text_1, MSGBOX_DEFAULT
# 1227 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R4_2:
# 1221 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1222 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R5::
# 1231 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1232 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1233 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R5_Text_0, MSGBOX_YESNO
# 1234 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R5_2
# 1239 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R5, ParcelHighlands_Leidulf_R5_Text_1
# 1240 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R5_Text_2, MSGBOX_DEFAULT
# 1241 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R5_2:
# 1235 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1236 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora::
# 1245 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_NORA, ParcelHighlands_Nora_Text_0, ParcelHighlands_Nora_Text_1, ParcelHighlands_Nora_FirstWin
# 1249 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1250 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Nora_3
ParcelHighlands_Nora_1:
# 1253 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Nora_8
ParcelHighlands_Nora_6:
# 1256 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Nora_13
ParcelHighlands_Nora_11:
# 1259 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Nora_18
ParcelHighlands_Nora_16:
# 1262 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Nora_2:
# 1251 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R2
	goto ParcelHighlands_Nora_1

ParcelHighlands_Nora_3:
# 1250 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R2
	goto_if 0, ParcelHighlands_Nora_2
	goto ParcelHighlands_Nora_1

ParcelHighlands_Nora_7:
# 1254 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R3
	goto ParcelHighlands_Nora_6

ParcelHighlands_Nora_8:
# 1253 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R3
	goto_if 0, ParcelHighlands_Nora_7
	goto ParcelHighlands_Nora_6

ParcelHighlands_Nora_12:
# 1257 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R4
	goto ParcelHighlands_Nora_11

ParcelHighlands_Nora_13:
# 1256 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R4
	goto_if 0, ParcelHighlands_Nora_12
	goto ParcelHighlands_Nora_11

ParcelHighlands_Nora_17:
# 1260 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R5
	goto ParcelHighlands_Nora_16

ParcelHighlands_Nora_18:
# 1259 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R5
	goto_if 0, ParcelHighlands_Nora_17
	goto ParcelHighlands_Nora_16


ParcelHighlands_Nora_FirstWin::
# 1266 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
# 1267 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R2::
# 1271 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1272 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1273 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_0, MSGBOX_YESNO
# 1274 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R2_2
# 1279 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R2, ParcelHighlands_Nora_R2_Text_2
# 1280 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_3, MSGBOX_DEFAULT
# 1281 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R2_2:
# 1275 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1276 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R3::
# 1285 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1286 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1287 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R3_Text_0, MSGBOX_YESNO
# 1288 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R3_2
# 1293 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R3, ParcelHighlands_Nora_R3_Text_1
# 1294 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R3_Text_2, MSGBOX_DEFAULT
# 1295 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R3_2:
# 1289 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1290 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R4::
# 1299 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1300 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1301 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R4_Text_0, MSGBOX_YESNO
# 1302 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R4_2
# 1307 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R4, ParcelHighlands_Nora_R2_Text_2
# 1308 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R4_Text_1, MSGBOX_DEFAULT
# 1309 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R4_2:
# 1303 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1304 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R5::
# 1313 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1314 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1315 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R5_Text_0, MSGBOX_YESNO
# 1316 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R5_2
# 1321 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R5, ParcelHighlands_Nora_R5_Text_1
# 1322 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R5_Text_2, MSGBOX_DEFAULT
# 1323 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R5_2:
# 1317 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1318 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder::
# 1327 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_PEDER, ParcelHighlands_Peder_Text_0, ParcelHighlands_Peder_Text_1, ParcelHighlands_Peder_FirstWin
# 1331 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1332 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Peder_3
ParcelHighlands_Peder_1:
# 1335 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Peder_8
ParcelHighlands_Peder_6:
# 1338 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Peder_13
ParcelHighlands_Peder_11:
# 1341 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Peder_18
ParcelHighlands_Peder_16:
# 1344 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Peder_2:
# 1333 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R2
	goto ParcelHighlands_Peder_1

ParcelHighlands_Peder_3:
# 1332 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R2
	goto_if 0, ParcelHighlands_Peder_2
	goto ParcelHighlands_Peder_1

ParcelHighlands_Peder_7:
# 1336 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R3
	goto ParcelHighlands_Peder_6

ParcelHighlands_Peder_8:
# 1335 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R3
	goto_if 0, ParcelHighlands_Peder_7
	goto ParcelHighlands_Peder_6

ParcelHighlands_Peder_12:
# 1339 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R4
	goto ParcelHighlands_Peder_11

ParcelHighlands_Peder_13:
# 1338 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R4
	goto_if 0, ParcelHighlands_Peder_12
	goto ParcelHighlands_Peder_11

ParcelHighlands_Peder_17:
# 1342 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R5
	goto ParcelHighlands_Peder_16

ParcelHighlands_Peder_18:
# 1341 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R5
	goto_if 0, ParcelHighlands_Peder_17
	goto ParcelHighlands_Peder_16


ParcelHighlands_Peder_FirstWin::
# 1348 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
# 1349 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R2::
# 1353 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1354 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1355 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_0, MSGBOX_YESNO
# 1356 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R2_2
# 1361 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R2, ParcelHighlands_Peder_R2_Text_2
# 1362 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_3, MSGBOX_DEFAULT
# 1363 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R2_2:
# 1357 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1358 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R3::
# 1367 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1368 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1369 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R3_Text_0, MSGBOX_YESNO
# 1370 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R3_2
# 1375 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R3, ParcelHighlands_Peder_R3_Text_1
# 1376 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R3_Text_2, MSGBOX_DEFAULT
# 1377 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R3_2:
# 1371 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1372 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R4::
# 1381 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1382 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1383 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R4_Text_0, MSGBOX_YESNO
# 1384 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R4_2
# 1389 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R4, ParcelHighlands_Peder_R4_Text_1
# 1390 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R4_Text_2, MSGBOX_DEFAULT
# 1391 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R4_2:
# 1385 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1386 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R5::
# 1395 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1396 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1397 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R5_Text_0, MSGBOX_YESNO
# 1398 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R5_2
# 1403 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R5, ParcelHighlands_Peder_R5_Text_1
# 1404 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R5_Text_2, MSGBOX_DEFAULT
# 1405 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R5_2:
# 1399 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1400 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa::
# 1409 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_RUNA, ParcelHighlands_Runa_Text_0, ParcelHighlands_Runa_Text_1, ParcelHighlands_Runa_FirstWin
# 1413 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1414 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Runa_3
ParcelHighlands_Runa_1:
# 1417 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Runa_8
ParcelHighlands_Runa_6:
# 1420 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Runa_13
ParcelHighlands_Runa_11:
# 1423 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Runa_18
ParcelHighlands_Runa_16:
# 1426 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Runa_2:
# 1415 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R2
	goto ParcelHighlands_Runa_1

ParcelHighlands_Runa_3:
# 1414 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R2
	goto_if 0, ParcelHighlands_Runa_2
	goto ParcelHighlands_Runa_1

ParcelHighlands_Runa_7:
# 1418 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R3
	goto ParcelHighlands_Runa_6

ParcelHighlands_Runa_8:
# 1417 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R3
	goto_if 0, ParcelHighlands_Runa_7
	goto ParcelHighlands_Runa_6

ParcelHighlands_Runa_12:
# 1421 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R4
	goto ParcelHighlands_Runa_11

ParcelHighlands_Runa_13:
# 1420 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R4
	goto_if 0, ParcelHighlands_Runa_12
	goto ParcelHighlands_Runa_11

ParcelHighlands_Runa_17:
# 1424 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R5
	goto ParcelHighlands_Runa_16

ParcelHighlands_Runa_18:
# 1423 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R5
	goto_if 0, ParcelHighlands_Runa_17
	goto ParcelHighlands_Runa_16


ParcelHighlands_Runa_FirstWin::
# 1430 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
# 1431 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R2::
# 1435 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1436 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1437 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_0, MSGBOX_YESNO
# 1438 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R2_2
# 1443 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R2, ParcelHighlands_Runa_R2_Text_2
# 1444 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_3, MSGBOX_DEFAULT
# 1445 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R2_2:
# 1439 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1440 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R3::
# 1449 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1450 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1451 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R3_Text_0, MSGBOX_YESNO
# 1452 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R3_2
# 1457 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R3, ParcelHighlands_Runa_R3_Text_1
# 1458 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R3_Text_2, MSGBOX_DEFAULT
# 1459 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R3_2:
# 1453 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1454 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R4::
# 1463 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1464 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1465 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R4_Text_0, MSGBOX_YESNO
# 1466 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R4_2
# 1471 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R4, ParcelHighlands_Runa_R4_Text_1
# 1472 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R4_Text_2, MSGBOX_DEFAULT
# 1473 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R4_2:
# 1467 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1468 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R5::
# 1477 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1478 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1479 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R5_Text_0, MSGBOX_YESNO
# 1480 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R5_2
# 1485 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R5, ParcelHighlands_Runa_R3_Text_1
# 1486 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R5_Text_1, MSGBOX_DEFAULT
# 1487 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R5_2:
# 1481 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1482 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri::
# 1491 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SIRI, ParcelHighlands_Siri_Text_0, ParcelHighlands_Siri_Text_1, ParcelHighlands_Siri_FirstWin
# 1495 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1496 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Siri_3
ParcelHighlands_Siri_1:
# 1499 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Siri_8
ParcelHighlands_Siri_6:
# 1502 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Siri_13
ParcelHighlands_Siri_11:
# 1505 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Siri_18
ParcelHighlands_Siri_16:
# 1508 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Siri_2:
# 1497 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R2
	goto ParcelHighlands_Siri_1

ParcelHighlands_Siri_3:
# 1496 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R2
	goto_if 0, ParcelHighlands_Siri_2
	goto ParcelHighlands_Siri_1

ParcelHighlands_Siri_7:
# 1500 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R3
	goto ParcelHighlands_Siri_6

ParcelHighlands_Siri_8:
# 1499 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R3
	goto_if 0, ParcelHighlands_Siri_7
	goto ParcelHighlands_Siri_6

ParcelHighlands_Siri_12:
# 1503 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R4
	goto ParcelHighlands_Siri_11

ParcelHighlands_Siri_13:
# 1502 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R4
	goto_if 0, ParcelHighlands_Siri_12
	goto ParcelHighlands_Siri_11

ParcelHighlands_Siri_17:
# 1506 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R5
	goto ParcelHighlands_Siri_16

ParcelHighlands_Siri_18:
# 1505 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R5
	goto_if 0, ParcelHighlands_Siri_17
	goto ParcelHighlands_Siri_16


ParcelHighlands_Siri_FirstWin::
# 1512 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
# 1513 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R2::
# 1517 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1518 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1519 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_0, MSGBOX_YESNO
# 1520 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R2_2
# 1525 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R2, ParcelHighlands_Siri_R2_Text_2
# 1526 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_3, MSGBOX_DEFAULT
# 1527 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R2_2:
# 1521 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1522 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R3::
# 1531 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1532 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1533 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R3_Text_0, MSGBOX_YESNO
# 1534 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R3_2
# 1539 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R3, ParcelHighlands_Siri_R3_Text_1
# 1540 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R3_Text_2, MSGBOX_DEFAULT
# 1541 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R3_2:
# 1535 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1536 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R4::
# 1545 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1546 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1547 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R4_Text_0, MSGBOX_YESNO
# 1548 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R4_2
# 1553 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R4, ParcelHighlands_Siri_R3_Text_1
# 1554 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R4_Text_1, MSGBOX_DEFAULT
# 1555 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R4_2:
# 1549 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1550 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R5::
# 1559 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1560 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1561 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R5_Text_0, MSGBOX_YESNO
# 1562 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R5_2
# 1567 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R5, ParcelHighlands_Siri_R5_Text_1
# 1568 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R5_Text_2, MSGBOX_DEFAULT
# 1569 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R5_2:
# 1563 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1564 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre::
# 1575 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SNORRE, ParcelHighlands_T_Snorre_Text_0, ParcelHighlands_T_Snorre_Text_1, ParcelHighlands_T_Snorre_FirstWin
# 1579 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1580 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Snorre_3
ParcelHighlands_T_Snorre_1:
# 1583 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Snorre_8
ParcelHighlands_T_Snorre_6:
# 1586 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Snorre_13
ParcelHighlands_T_Snorre_11:
# 1589 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Snorre_18
ParcelHighlands_T_Snorre_16:
# 1592 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Snorre_2:
# 1581 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R2
	goto ParcelHighlands_T_Snorre_1

ParcelHighlands_T_Snorre_3:
# 1580 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R2
	goto_if 0, ParcelHighlands_T_Snorre_2
	goto ParcelHighlands_T_Snorre_1

ParcelHighlands_T_Snorre_7:
# 1584 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R3
	goto ParcelHighlands_T_Snorre_6

ParcelHighlands_T_Snorre_8:
# 1583 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R3
	goto_if 0, ParcelHighlands_T_Snorre_7
	goto ParcelHighlands_T_Snorre_6

ParcelHighlands_T_Snorre_12:
# 1587 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R4
	goto ParcelHighlands_T_Snorre_11

ParcelHighlands_T_Snorre_13:
# 1586 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R4
	goto_if 0, ParcelHighlands_T_Snorre_12
	goto ParcelHighlands_T_Snorre_11

ParcelHighlands_T_Snorre_17:
# 1590 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R5
	goto ParcelHighlands_T_Snorre_16

ParcelHighlands_T_Snorre_18:
# 1589 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R5
	goto_if 0, ParcelHighlands_T_Snorre_17
	goto ParcelHighlands_T_Snorre_16


ParcelHighlands_T_Snorre_FirstWin::
# 1596 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_Text_2, MSGBOX_DEFAULT
# 1597 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R2::
# 1601 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1602 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1603 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_0, MSGBOX_YESNO
# 1604 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R2_2
# 1609 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R2, ParcelHighlands_T_Snorre_R2_Text_2
# 1610 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_3, MSGBOX_DEFAULT
# 1611 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R2_2:
# 1605 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1606 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R3::
# 1615 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1616 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1617 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R3_Text_0, MSGBOX_YESNO
# 1618 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R3_2
# 1623 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R3, ParcelHighlands_T_Snorre_R3_Text_1
# 1624 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R3_Text_2, MSGBOX_DEFAULT
# 1625 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R3_2:
# 1619 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1620 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R4::
# 1629 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1630 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1631 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R4_Text_0, MSGBOX_YESNO
# 1632 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R4_2
# 1637 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R4, ParcelHighlands_T_Snorre_R4_Text_1
# 1638 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R4_Text_2, MSGBOX_DEFAULT
# 1639 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R4_2:
# 1633 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1634 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R5::
# 1643 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1644 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1645 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R5_Text_0, MSGBOX_YESNO
# 1646 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R5_2
# 1651 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R5, ParcelHighlands_T_Snorre_R5_Text_1
# 1652 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R5_Text_2, MSGBOX_DEFAULT
# 1653 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R5_2:
# 1647 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1648 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir::
# 1657 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_TORGEIR, ParcelHighlands_T_Torgeir_Text_0, ParcelHighlands_T_Torgeir_Text_1, ParcelHighlands_T_Torgeir_FirstWin
# 1661 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1662 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Torgeir_3
ParcelHighlands_T_Torgeir_1:
# 1665 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Torgeir_8
ParcelHighlands_T_Torgeir_6:
# 1668 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Torgeir_13
ParcelHighlands_T_Torgeir_11:
# 1671 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Torgeir_18
ParcelHighlands_T_Torgeir_16:
# 1674 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Torgeir_2:
# 1663 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R2
	goto ParcelHighlands_T_Torgeir_1

ParcelHighlands_T_Torgeir_3:
# 1662 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R2
	goto_if 0, ParcelHighlands_T_Torgeir_2
	goto ParcelHighlands_T_Torgeir_1

ParcelHighlands_T_Torgeir_7:
# 1666 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R3
	goto ParcelHighlands_T_Torgeir_6

ParcelHighlands_T_Torgeir_8:
# 1665 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R3
	goto_if 0, ParcelHighlands_T_Torgeir_7
	goto ParcelHighlands_T_Torgeir_6

ParcelHighlands_T_Torgeir_12:
# 1669 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R4
	goto ParcelHighlands_T_Torgeir_11

ParcelHighlands_T_Torgeir_13:
# 1668 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R4
	goto_if 0, ParcelHighlands_T_Torgeir_12
	goto ParcelHighlands_T_Torgeir_11

ParcelHighlands_T_Torgeir_17:
# 1672 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R5
	goto ParcelHighlands_T_Torgeir_16

ParcelHighlands_T_Torgeir_18:
# 1671 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R5
	goto_if 0, ParcelHighlands_T_Torgeir_17
	goto ParcelHighlands_T_Torgeir_16


ParcelHighlands_T_Torgeir_FirstWin::
# 1678 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_Text_2, MSGBOX_DEFAULT
# 1679 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R2::
# 1683 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1684 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1685 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_0, MSGBOX_YESNO
# 1686 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R2_2
# 1691 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R2, ParcelHighlands_T_Torgeir_R2_Text_2
# 1692 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_3, MSGBOX_DEFAULT
# 1693 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R2_2:
# 1687 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1688 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R3::
# 1697 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1698 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1699 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R3_Text_0, MSGBOX_YESNO
# 1700 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R3_2
# 1705 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R3, ParcelHighlands_T_Torgeir_R2_Text_2
# 1706 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R3_Text_1, MSGBOX_DEFAULT
# 1707 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R3_2:
# 1701 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1702 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R4::
# 1711 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1712 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1713 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R4_Text_0, MSGBOX_YESNO
# 1714 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R4_2
# 1719 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R4, ParcelHighlands_T_Torgeir_R4_Text_1
# 1720 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R4_Text_2, MSGBOX_DEFAULT
# 1721 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R4_2:
# 1715 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1716 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R5::
# 1725 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1726 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1727 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R5_Text_0, MSGBOX_YESNO
# 1728 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R5_2
# 1733 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R5, ParcelHighlands_T_Torgeir_R5_Text_1
# 1734 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R5_Text_2, MSGBOX_DEFAULT
# 1735 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R5_2:
# 1729 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1730 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig::
# 1739 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HEDVIG, ParcelHighlands_T_Hedvig_Text_0, ParcelHighlands_T_Hedvig_Text_1, ParcelHighlands_T_Hedvig_FirstWin
# 1743 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1744 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Hedvig_3
ParcelHighlands_T_Hedvig_1:
# 1747 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Hedvig_8
ParcelHighlands_T_Hedvig_6:
# 1750 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Hedvig_13
ParcelHighlands_T_Hedvig_11:
# 1753 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Hedvig_18
ParcelHighlands_T_Hedvig_16:
# 1756 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Hedvig_2:
# 1745 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R2
	goto ParcelHighlands_T_Hedvig_1

ParcelHighlands_T_Hedvig_3:
# 1744 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R2
	goto_if 0, ParcelHighlands_T_Hedvig_2
	goto ParcelHighlands_T_Hedvig_1

ParcelHighlands_T_Hedvig_7:
# 1748 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R3
	goto ParcelHighlands_T_Hedvig_6

ParcelHighlands_T_Hedvig_8:
# 1747 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R3
	goto_if 0, ParcelHighlands_T_Hedvig_7
	goto ParcelHighlands_T_Hedvig_6

ParcelHighlands_T_Hedvig_12:
# 1751 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R4
	goto ParcelHighlands_T_Hedvig_11

ParcelHighlands_T_Hedvig_13:
# 1750 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R4
	goto_if 0, ParcelHighlands_T_Hedvig_12
	goto ParcelHighlands_T_Hedvig_11

ParcelHighlands_T_Hedvig_17:
# 1754 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R5
	goto ParcelHighlands_T_Hedvig_16

ParcelHighlands_T_Hedvig_18:
# 1753 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R5
	goto_if 0, ParcelHighlands_T_Hedvig_17
	goto ParcelHighlands_T_Hedvig_16


ParcelHighlands_T_Hedvig_FirstWin::
# 1760 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_Text_2, MSGBOX_DEFAULT
# 1761 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R2::
# 1765 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1766 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1767 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_0, MSGBOX_YESNO
# 1768 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R2_2
# 1773 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R2, ParcelHighlands_T_Hedvig_R2_Text_2
# 1774 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_3, MSGBOX_DEFAULT
# 1775 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R2_2:
# 1769 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1770 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R3::
# 1779 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1780 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1781 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R3_Text_0, MSGBOX_YESNO
# 1782 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R3_2
# 1787 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R3, ParcelHighlands_T_Hedvig_R3_Text_1
# 1788 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R3_Text_2, MSGBOX_DEFAULT
# 1789 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R3_2:
# 1783 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1784 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R4::
# 1793 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1794 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1795 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R4_Text_0, MSGBOX_YESNO
# 1796 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R4_2
# 1801 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R4, ParcelHighlands_T_Hedvig_R4_Text_1
# 1802 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R4_Text_2, MSGBOX_DEFAULT
# 1803 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R4_2:
# 1797 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1798 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R5::
# 1807 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1808 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1809 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R5_Text_0, MSGBOX_YESNO
# 1810 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R5_2
# 1815 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R5, ParcelHighlands_T_Hedvig_R4_Text_1
# 1816 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R5_Text_1, MSGBOX_DEFAULT
# 1817 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R5_2:
# 1811 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1812 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_PerrinScene::
# 1823 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_5, ParcelHighlands_PerrinScene_2
# 1827 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 1828 "data/maps/ParcelHighlands/scripts.pory"
	playse SE_PIN
# 1829 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1830 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1831 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 35, Movement_ParcelHighlands_PerrinIn
# 1832 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 1833 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1834 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_5, ParcelHighlands_PerrinScene_Text_2
# 1835 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1836 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1837 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 35, Movement_ParcelHighlands_PerrinOut
# 1838 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 1839 "data/maps/ParcelHighlands/scripts.pory"
	removeobject 35
# 1840 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_PERRIN_5
# 1841 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1842 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_PerrinScene_2:
# 1824 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelHighlands_PerrinTalk::
# 1846 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1847 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1848 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1849 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


# 1852 "data/maps/ParcelHighlands/scripts.pory"
Movement_ParcelHighlands_PerrinIn:
# 1852 "data/maps/ParcelHighlands/scripts.pory"
	walk_down
# 1852 "data/maps/ParcelHighlands/scripts.pory"
	walk_down
	step_end

# 1853 "data/maps/ParcelHighlands/scripts.pory"
Movement_ParcelHighlands_PerrinOut:
# 1853 "data/maps/ParcelHighlands/scripts.pory"
	walk_up
# 1853 "data/maps/ParcelHighlands/scripts.pory"
	walk_up
	step_end

ParcelHighlands_Epilogue::
# 1857 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 1858 "data/maps/ParcelHighlands/scripts.pory"
	delay 20
# 1859 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Epilogue_Text_0, MSGBOX_DEFAULT
# 1860 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1861 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 5
# 1862 "data/maps/ParcelHighlands/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 13, 13
# 1863 "data/maps/ParcelHighlands/scripts.pory"
	waitstate
	end


ParcelHighlands_GymVale_Rematch::
# 1869 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1870 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1871 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_0, MSGBOX_YESNO
# 1872 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_GymVale_Rematch_2
# 1877 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5_R, ParcelHighlands_GymVale_Rematch_Text_2
# 1878 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_3, MSGBOX_DEFAULT
# 1879 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_GymVale_Rematch_2:
# 1873 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_1, MSGBOX_DEFAULT
# 1874 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Mareep::
# 1884 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_MAREEP, ParcelHighlands_Mareep_2
# 1887 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Mareep_Text_0, MSGBOX_SIGN
# 1888 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_MAREEP_FOUND
	end

ParcelHighlands_Mareep_2:
	end


ParcelHighlands_FirstEntry_Text_0:
# 39 "data/maps/ParcelHighlands/scripts.pory"
	.string "The road climbs out of the farmland\n"
	.string "into cold air. Pale rock. Thin grass. Mist\l"
	.string "on the high ground.\p"
	.string "{STR_VAR_1} slows, and keeps to the\n"
	.string "middle of the trail. The ground gives\l"
	.string "underfoot where it should be iron.$"

ParcelHighlands_FirstEntry_Text_1:
# 40 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE's note: HIGHLAND. You won't get to\n"
	.string "fix this one. Walk it. Read it. Name it.\l"
	.string "Then come up to the summit.$"

ParcelHighlands_SlideScene_Text_0:
# 53 "data/maps/ParcelHighlands/scripts.pory"
	.string "The trail is buried. Fresh scree, grey\n"
	.string "and wet, and boulders the size of carts\l"
	.string "where the slope let go.\p"
	.string "A voice, from above the slide.$"

ParcelHighlands_SlideScene_Text_1:
# 54 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: RANGER? That you? The slope went\n"
	.string "last night. I'm fine. The old woman below\l"
	.string "you is fine, I checked.\p"
	.string "The FOUNDATION crew won't touch the\n"
	.string "scree. 'Not in scope.' Get through if you\l"
	.string "can. The small rocks break. The big ones\l"
	.string "move, if you've the clearance for it.$"

ParcelHighlands_SlideSign_Text_0:
# 60 "data/maps/ParcelHighlands/scripts.pory"
	.string "Fresh scree across the trail, still\n"
	.string "settling. Nothing grew on this ground\l"
	.string "last year. Nothing holds it now.$"

ParcelHighlands_Thermokarst_Text_0:
# 71 "data/maps/ParcelHighlands/scripts.pory"
	.string "The sunk ponds. In the notebook.$"

ParcelHighlands_Thermokarst_Text_1:
# 75 "data/maps/ParcelHighlands/scripts.pory"
	.string "The ground here has sunk into itself: a\n"
	.string "line of ponds in the rock, black water in\l"
	.string "each, the rims collapsing inward.\p"
	.string "This was frozen ground. The ice under it\n"
	.string "melted and the land fell into the hole it\l"
	.string "left. Written down.$"

ParcelHighlands_DrunkenForest_Text_0:
# 86 "data/maps/ParcelHighlands/scripts.pory"
	.string "The leaning trees. In the notebook.$"

ParcelHighlands_DrunkenForest_Text_1:
# 90 "data/maps/ParcelHighlands/scripts.pory"
	.string "The trees along the slope lean every\n"
	.string "which way, roots half out of the ground,\l"
	.string "trunks crossed like dropped matches.\p"
	.string "They grew straight on ground that held\n"
	.string "them. The ground stopped holding.\l"
	.string "Written down.$"

ParcelHighlands_Lowlander_Text_0:
# 100 "data/maps/ParcelHighlands/scripts.pory"
	.string "A ZIGZAGOON, this high up, fat and\n"
	.string "unbothered on the scree.\p"
	.string "Five years ago nothing like it wintered\n"
	.string "above the tree line. The cold kept it\l"
	.string "out. The cold isn't here to keep\l"
	.string "anything out. Written down.$"

ParcelHighlands_DrillSign_Text_0:
# 109 "data/maps/ParcelHighlands/scripts.pory"
	.string "MEREHOLT PERMAFROST -- SURVEY\n"
	.string "STATION SIX. EXPLORATORY ONLY. No\l"
	.string "extraction is licensed at this site.\p"
	.string "The bore runs down into the freeze. To\n"
	.string "learn how fast it is failing, and to\l"
	.string "stand first in line for whatever the\l"
	.string "failing lays bare. Written down.$"

ParcelHighlands_BandStakes_Text_0:
# 114 "data/maps/ParcelHighlands/scripts.pory"
	.string "A line of red cloth strung between\n"
	.string "stakes, an arm's length apart. Last\l"
	.string "season's stakes stand wider, pulled,\l"
	.string "beside them. The season before, wider\l"
	.string "still.$"

ParcelHighlands_Ilex_Text_0:
# 123 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: The hearings cite the cloth now.\n"
	.string "Decades of it, read into the record by a\l"
	.string "clerk who pronounced everything\l"
	.string "correctly.\p"
	.string "The band is still shrinking. The number\n"
	.string "doesn't know it's been believed.$"

ParcelHighlands_Ilex_Text_1:
# 131 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: A hand's width in. Same as last\n"
	.string "season. I don't explain it twice.$"

ParcelHighlands_Ilex_Text_2:
# 135 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Last season these stood wider.\n"
	.string "The season before, wider still.\p"
	.string "This is the band the cold-lovers have\n"
	.string "left. The SNEASEL. The SWINUB that root\l"
	.string "the high snow. Pushed up the slope each\l"
	.string "year into a thinner ring of cold.$"

ParcelHighlands_Ilex_Text_3:
# 136 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Above this is bare rock and sky.\n"
	.string "There is no higher for them to climb.\p"
	.string "I stopped recording where they are. Now\n"
	.string "I record how much less of it there is.$"

ParcelHighlands_Ilex_Text_4:
# 137 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: And when the ring closes?$"

ParcelHighlands_Ilex_Text_5:
# 138 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Then I'll have a number for that,\n"
	.string "too.\p"
	.string "Downslope the red cloth marks what's\n"
	.string "still there. Up here it marks what's\l"
	.string "leaving. Same cloth. That's the part\l"
	.string "they never understand.$"

ParcelHighlands_Hollis_Text_0:
# 149 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: Enjoined pending survey. Your\n"
	.string "survey, as it happens. There's a court\l"
	.string "seal on the housing; it's new enough to\l"
	.string "still lie flat.\p"
	.string "The relocation grants are frozen with\n"
	.string "the rest of it, you know. The warming\l"
	.string "centre too. That's the part nobody\l"
	.string "prices.$"

ParcelHighlands_Hollis_Text_1:
# 157 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: The coffee's still warm, RANGER.\n"
	.string "The offer stands. So does the ground,\l"
	.string "for now.$"

ParcelHighlands_Hollis_Text_2:
# 161 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: You must be the RANGER they\n"
	.string "sent up. HOLLIS AUNE, MEREHOLT\l"
	.string "FOUNDATION. Come in out of the wind,\l"
	.string "there's coffee.\p"
	.string "You've seen the centre below? We\n"
	.string "opened it Tuesday. Forty beds, a stove\l"
	.string "that works, a nurse on Thursdays. I cut\l"
	.string "the ribbon myself.$"

ParcelHighlands_Hollis_Text_3:
# 162 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: I know how the rig reads to you.\n"
	.string "But the thaw is coming whether we bore\l"
	.string "it or not. Better someone's here\l"
	.string "measuring it, funding the relocation\l"
	.string "grants, the centre, the training for\l"
	.string "what comes next.$"

ParcelHighlands_Hollis_Text_4:
# 163 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: None of that is a lie. Check\n"
	.string "every line. We're doing real good up\l"
	.string "here, beside the real harm. That's not a\l"
	.string "contradiction. That's just how it\l"
	.string "actually works.$"

ParcelHighlands_Hollis_Text_5:
# 164 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: I believe you. That isn't\n"
	.string "the part I'm writing down.$"

ParcelHighlands_Hollis_Text_6:
# 165 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: No. I don't suppose it is.\p"
	.string "Then let me be kind plainly, so you don't\n"
	.string "mistake it for a threat. Our science is\l"
	.string "the only science up here. A survey that\l"
	.string "contradicts ours doesn't stop the rig.\l"
	.string "It just defunds the coffee.$"

ParcelHighlands_HollisTech_Text_0:
# 174 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Core samples stopped. The\n"
	.string "bore's capped pending survey. The bore\l"
	.string "log said 'exploratory' for two years.\l"
	.string "The hearing read the word aloud and the\l"
	.string "room laughed. Not kindly.$"

ParcelHighlands_HollisTech_Text_1:
# 179 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: The coast office sent the\n"
	.string "bore log back with a note: 'exploratory'\l"
	.string "is to stay 'exploratory'. Somebody's\l"
	.string "lawyer read your coast report.\p"
	.string "Core samples still go down twice a week.\n"
	.string "I've started photographing them before\l"
	.string "they go. Forms say what's printed.\l"
	.string "Photographs don't.$"

ParcelHighlands_HollisTech_Text_2:
# 183 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Core samples go down to\n"
	.string "the coast office twice a week. The bore\l"
	.string "log says 'exploratory'. The bore log's a\l"
	.string "form. Forms say what's printed on them.$"

ParcelHighlands_Homesteader_Text_0:
# 193 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: SHIFTED, you wrote, and\n"
	.string "the hearing wrote it after you. The\l"
	.string "ground didn't hear. The leases did.\l"
	.string "Pending survey, they say. I'll be here\l"
	.string "for the survey.$"

ParcelHighlands_Homesteader_Text_1:
# 202 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You said it. SHIFTED.\n"
	.string "First one of your lot who didn't say\l"
	.string "'transitioning'.\p"
	.string "Take this. The SWINUB laid it in the\n"
	.string "spring. There won't be another born up\l"
	.string "here. Hatch it somewhere with a winter.$"

ParcelHighlands_Homesteader_Text_2:
# 205 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Your belt's full. Come\n"
	.string "back with room. It'll keep. It's the only\l"
	.string "thing up here that will.$"

ParcelHighlands_Homesteader_Text_3:
# 211 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Don't name it after me.\n"
	.string "Name it after the slope.$"

ParcelHighlands_Homesteader_Text_4:
# 216 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Somewhere with a winter.\n"
	.string "You promised.$"

ParcelHighlands_Homesteader_Text_5:
# 220 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Another log. It'll sit\n"
	.string "crooked. Everything does, up here, now.$"

ParcelHighlands_Homesteader_Text_6:
# 224 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You're not from the\n"
	.string "company. Good. I'm tired of being\l"
	.string "adapted at.\p"
	.string "Eight generations of us wintered this\n"
	.string "slope. You knew where you stood. The\l"
	.string "ground held, the cold came, the cold\l"
	.string "went, the ground held again.$"

ParcelHighlands_Homesteader_Text_7:
# 225 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Now the ground breathes.\n"
	.string "The doors won't shut true. The near\l"
	.string "corner's a hand's depth into the mud\l"
	.string "since spring. The well runs brown in a\l"
	.string "month it never ran brown.$"

ParcelHighlands_Homesteader_Text_8:
# 226 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: The FOUNDATION's grant\n"
	.string "will move me somewhere warm and write\l"
	.string "'resilience' on the cheque. The young\l"
	.string "ones already signed. I don't blame them.\p"
	.string "The ground is dying. They call it\n"
	.string "opportunity. I call it leaving.$"

ParcelHighlands_Hale_Text_0:
# 237 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record and the\n"
	.string "record kept the mountain, for a season.\l"
	.string "That's the whole of the work up here.\l"
	.string "Seasons. One at a time.$"

ParcelHighlands_Hale_Text_1:
# 242 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record. That's the\n"
	.string "whole of the work up here.\p"
	.string "Someday someone reads it and knows\n"
	.string "exactly what was lost, and when, and\l"
	.string "who was smiling while it went.$"

ParcelHighlands_Hale_Text_2:
# 250 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: The sunk ponds. The drunk trees.\n"
	.string "The band ILEX measures. The lowlander\l"
	.string "in the scree. The drill. The woman who\l"
	.string "won't take the grant.\p"
	.string "Name it.$"

ParcelHighlands_Hale_Text_3:
# 252 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: SHIFTED.\p"
	.string "The frozen ground was the keystone,\n"
	.string "and it's going. The cold guild is gone\l"
	.string "from everywhere but that last ring.\l"
	.string "What moves in is whatever moves in\l"
	.string "anywhere. A poorer place, settling into\l"
	.string "being poorer.$"

ParcelHighlands_Hale_Text_4:
# 253 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: So what do we DO. There has\n"
	.string "to be something.$"

ParcelHighlands_Hale_Text_5:
# 254 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There isn't. Not here. You cannot\n"
	.string "refreeze a mountain.\p"
	.string "The runoff you can slow. The cut you\n"
	.string "can fight. This you cannot put back.\l"
	.string "It's the first time you'll have stood\l"
	.string "somewhere and known that for certain.$"

ParcelHighlands_Hale_Text_6:
# 255 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: So the work changes. Not save it.\n"
	.string "WITNESS it. Record it true, name the\l"
	.string "hand that's on it, and carry that down\l"
	.string "to a place you still can save.\p"
	.string "That's not surrender. Surrender is\n"
	.string "letting them file this as 'adaptation'\l"
	.string "and signing underneath.$"

ParcelHighlands_Hale_Text_7:
# 258 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Highland Certification. The\n"
	.string "hardest one to earn, because there's\l"
	.string "nothing to fix and you had to say so.$"

ParcelHighlands_Hale_Text_8:
# 264 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There's a ferry to DELIBIRD ISLE\n"
	.string "from SALTWICK when your legs are under\l"
	.string "you. They hold a festival out there, on\l"
	.string "ground exactly like this.\p"
	.string "Go and see what people do with grief\n"
	.string "when they've agreed, together, not to\l"
	.string "name it.$"

ParcelHighlands_Hale_Text_9:
# 268 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Don't name it from up here,\n"
	.string "looking down. Walk it first. The thaw\l"
	.string "ponds, the leaning trees, the band ILEX\l"
	.string "works, the drill, the lowlander that's\l"
	.string "moved in, the holdout who won't go.\p"
	.string "Then come back and tell me what it is.$"

ParcelHighlands_SignSummit_Text_0:
# 290 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL SUMMIT. 1,140 m.\p"
	.string "Corps survey point. Red cloth marks the\n"
	.string "cold band. Do not move the stakes.$"

ParcelHighlands_SignCentre_Text_0:
# 294 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL WARMING CENTRE -- a MEREHOLT\n"
	.string "FOUNDATION community partnership.\p"
	.string "Forty beds. Relocation advice daily.\n"
	.string "Opened by H. AUNE.$"

ParcelHighlands_SurveyorTrainer_Text_0:
# 301 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: FOUNDATION crew. You'll be the\n"
	.string "RANGER poking at our boreholes.\p"
	.string "Keep it sporting. Mons, not paperwork.$"

ParcelHighlands_SurveyorTrainer_Text_1:
# 302 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Tch. Fine. You're not wrong about\n"
	.string "the ground. I just get paid not to write\l"
	.string "it down.$"

ParcelHighlands_SurveyorTrainer_Text_2:
# 317 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Off the record? I've moved my\n"
	.string "stakes up the slope three years\l"
	.string "running. Same line your ILEX works.\p"
	.string "We measure the same thing. They just\n"
	.string "pay me to call it opportunity.$"

ParcelHighlands_SurveyorTrainer_R2_Text_0:
# 328 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelHighlands_SurveyorTrainer_R2_Text_1:
# 330 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Fine. Same spot.$"

ParcelHighlands_SurveyorTrainer_R2_Text_2:
# 334 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: That's the one I wanted to see.$"

ParcelHighlands_SurveyorTrainer_R2_Text_3:
# 335 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_SurveyorTrainer_R3_Text_0:
# 342 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_SurveyorTrainer_R3_Text_1:
# 348 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: …Fair.$"

ParcelHighlands_SurveyorTrainer_R3_Text_2:
# 349 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_SurveyorTrainer_R4_Text_0:
# 356 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_SurveyorTrainer_R4_Text_1:
# 362 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Right. That's the whole of it.$"

ParcelHighlands_SurveyorTrainer_R4_Text_2:
# 363 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_SurveyorTrainer_R5_Text_0:
# 370 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_SurveyorTrainer_R5_Text_1:
# 377 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_ValeGate_Text_0:
# 389 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: That's far enough.$"

ParcelHighlands_ValeGate_Text_1:
# 395 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Highland Operations. Past this\n"
	.string "point the ground is no longer ours to\l"
	.string "fix. Only to clear people off of, in\l"
	.string "order.\p"
	.string "Nobody goes up this slope on my ledger\n"
	.string "unproven. Show me you've earned the\l"
	.string "meltwater permit.$"

ParcelHighlands_ValeGate_Text_2:
# 396 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. You go up with it\n"
	.string "signed.$"

ParcelHighlands_ValeGate_Text_3:
# 399 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Vale clearance. Line item 05. The\n"
	.string "last one Highland Operations issues\l"
	.string "before the water.\p"
	.string "It certifies you fit to cross what the\n"
	.string "thaw has put in the way.$"

ParcelHighlands_ValeGate_Text_4:
# 401 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: SURF. A meltwater permit, in plain\n"
	.string "terms. It moves you over the standing\l"
	.string "thaw the slope keeps making.\p"
	.string "There's more of it every season. We\n"
	.string "don't advertise that.$"

ParcelHighlands_GymVale_Text_0:
# 415 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The ferry runs from the lowland\n"
	.string "landing. Take what you witnessed here\l"
	.string "with you. It's the only thing that\l"
	.string "leaves this slope unspoiled.$"

ParcelHighlands_Asbjorn_Text_0:
# 426 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The foothills are the easy\n"
	.string "bit. Enjoy them. Battle?$"

ParcelHighlands_Asbjorn_Text_1:
# 427 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Easy bit's over.$"

ParcelHighlands_Asbjorn_Text_2:
# 442 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The trail above the homestead\n"
	.string "went last night. Rocks, boulders. The\l"
	.string "FOUNDATION crew looked at it and went\l"
	.string "for coffee.$"

ParcelHighlands_Asbjorn_R2_Text_0:
# 453 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Asbjorn_R2_Text_1:
# 455 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: No hurry. The water keeps.$"

ParcelHighlands_Asbjorn_R2_Text_2:
# 459 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Noted. Properly, this time.$"

ParcelHighlands_Asbjorn_R2_Text_3:
# 460 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Asbjorn_R3_Text_0:
# 467 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_Asbjorn_R3_Text_1:
# 473 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Right. That's the whole of it.$"

ParcelHighlands_Asbjorn_R3_Text_2:
# 474 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Asbjorn_R4_Text_0:
# 481 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Asbjorn_R4_Text_1:
# 487 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: …Again, then. Later.$"

ParcelHighlands_Asbjorn_R4_Text_2:
# 488 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Asbjorn_R5_Text_0:
# 495 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Asbjorn_R5_Text_1:
# 502 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Brynjar_Text_0:
# 508 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: My NUMEL likes the ground up\n"
	.string "here. It's warm. It shouldn't be warm.\l"
	.string "Battle.$"

ParcelHighlands_Brynjar_Text_1:
# 509 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Still warm.$"

ParcelHighlands_Brynjar_Text_2:
# 524 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Warm ground, cold air. Camp on\n"
	.string "it and you wake up in a puddle that\l"
	.string "wasn't there.$"

ParcelHighlands_Brynjar_R2_Text_0:
# 535 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlands_Brynjar_R2_Text_1:
# 537 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: No hurry. The water keeps.$"

ParcelHighlands_Brynjar_R2_Text_2:
# 541 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: …Fair.$"

ParcelHighlands_Brynjar_R2_Text_3:
# 542 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Brynjar_R3_Text_0:
# 549 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_Brynjar_R3_Text_1:
# 555 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: …Again, then. Later.$"

ParcelHighlands_Brynjar_R3_Text_2:
# 556 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Brynjar_R4_Text_0:
# 563 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Brynjar_R4_Text_1:
# 570 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Brynjar_R5_Text_0:
# 577 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlands_Brynjar_R5_Text_1:
# 584 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Dagny_Text_0:
# 590 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: I visit the old woman. Somebody\n"
	.string "should. She won't take the grant, so\l"
	.string "they've stopped visiting. Battle first.$"

ParcelHighlands_Dagny_Text_1:
# 591 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: She'll like you. She doesn't like\n"
	.string "anyone.$"

ParcelHighlands_Dagny_Text_2:
# 606 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They built the warming centre at\n"
	.string "the bottom of the hill so she'd have\l"
	.string "somewhere to go. She hasn't gone.$"

ParcelHighlands_Dagny_R2_Text_0:
# 617 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlands_Dagny_R2_Text_1:
# 619 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Fine. Same spot.$"

ParcelHighlands_Dagny_R2_Text_2:
# 623 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: That's the one I wanted to see.$"

ParcelHighlands_Dagny_R2_Text_3:
# 624 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Dagny_R3_Text_0:
# 631 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_Dagny_R3_Text_1:
# 638 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Dagny_R4_Text_0:
# 645 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlands_Dagny_R4_Text_1:
# 652 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Dagny_R5_Text_0:
# 659 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Dagny_R5_Text_1:
# 665 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: …Again, then. Later.$"

ParcelHighlands_Dagny_R5_Text_2:
# 666 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_Eivind_Text_0:
# 672 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Three GEODUDE from the slide.\n"
	.string "The slide gave them up for free. Battle.$"

ParcelHighlands_Eivind_Text_1:
# 673 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The slide gives. The slide\n"
	.string "takes.$"

ParcelHighlands_Eivind_Text_2:
# 688 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The rock up here used to be\n"
	.string "frozen into the hill. Now it's just lying\l"
	.string "on it.$"

ParcelHighlands_Eivind_R2_Text_0:
# 699 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Eivind_R2_Text_1:
# 701 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: No hurry. The water keeps.$"

ParcelHighlands_Eivind_R2_Text_2:
# 705 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Right. That's the whole of it.$"

ParcelHighlands_Eivind_R2_Text_3:
# 706 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Eivind_R3_Text_0:
# 713 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Eivind_R3_Text_1:
# 719 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: …Again, then. Later.$"

ParcelHighlands_Eivind_R3_Text_2:
# 720 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Eivind_R4_Text_0:
# 727 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Eivind_R4_Text_1:
# 734 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_Eivind_R5_Text_0:
# 741 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Eivind_R5_Text_1:
# 747 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Noted. Properly, this time.$"

ParcelHighlands_Eivind_R5_Text_2:
# 748 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Finn_Text_0:
# 754 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: SWELLOW nest on the cliffs now.\n"
	.string "They never used to come this high.\l"
	.string "Battle!$"

ParcelHighlands_Finn_Text_1:
# 755 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Never used to lose, either.$"

ParcelHighlands_Finn_Text_2:
# 770 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: New birds, new rats, new\n"
	.string "everything. Old woman says it's the end\l"
	.string "of the world. I think it's just a\l"
	.string "different world. Is that worse?$"

ParcelHighlands_Finn_R2_Text_0:
# 781 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlands_Finn_R2_Text_1:
# 783 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: No hurry. The water keeps.$"

ParcelHighlands_Finn_R2_Text_2:
# 787 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Noted. Properly, this time.$"

ParcelHighlands_Finn_R2_Text_3:
# 788 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Finn_R3_Text_0:
# 795 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelHighlands_Finn_R3_Text_1:
# 802 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Finn_R4_Text_0:
# 809 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Finn_R4_Text_1:
# 815 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: …Again, then. Later.$"

ParcelHighlands_Finn_R4_Text_2:
# 816 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Finn_R5_Text_0:
# 823 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelHighlands_Finn_R5_Text_1:
# 829 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: That's the one I wanted to see.$"

ParcelHighlands_Finn_R5_Text_2:
# 830 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlands_Grete_Text_0:
# 836 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Cadet GRETE. ILEX has me on the\n"
	.string "lower stakes. Spar, then I'll tell you\l"
	.string "where she is.$"

ParcelHighlands_Grete_Text_1:
# 837 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: She's on the plateau. The band.\n"
	.string "You'll know it when you see the cloth.$"

ParcelHighlands_Grete_Text_2:
# 852 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: ILEX doesn't come down for days.\n"
	.string "She says the band moves at night and\l"
	.string "somebody should be there.$"

ParcelHighlands_Grete_R2_Text_0:
# 863 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelHighlands_Grete_R2_Text_1:
# 865 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Another time, then.$"

ParcelHighlands_Grete_R2_Text_2:
# 869 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Right. That's the whole of it.$"

ParcelHighlands_Grete_R2_Text_3:
# 870 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Grete_R3_Text_0:
# 877 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlands_Grete_R3_Text_1:
# 884 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Grete_R4_Text_0:
# 891 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Grete_R4_Text_1:
# 897 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Still yours.$"

ParcelHighlands_Grete_R4_Text_2:
# 898 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Grete_R5_Text_0:
# 905 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Grete_R5_Text_1:
# 912 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Hauk_Text_0:
# 918 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: FOUNDATION bore crew. Off shift.\n"
	.string "I'll battle, but I won't talk about the\l"
	.string "core samples.$"

ParcelHighlands_Hauk_Text_1:
# 919 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fine. There's gas in the core.\n"
	.string "That's all. Everyone knows.$"

ParcelHighlands_Hauk_Text_2:
# 934 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: 'Exploratory.' You explore what\n"
	.string "you mean to take. That's what the word\l"
	.string "means.$"

ParcelHighlands_Hauk_R2_Text_0:
# 945 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelHighlands_Hauk_R2_Text_1:
# 947 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Another time, then.$"

ParcelHighlands_Hauk_R2_Text_2:
# 951 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fair.$"

ParcelHighlands_Hauk_R2_Text_3:
# 952 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Hauk_R3_Text_0:
# 959 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelHighlands_Hauk_R3_Text_1:
# 965 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Again, then. Later.$"

ParcelHighlands_Hauk_R3_Text_2:
# 966 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Hauk_R4_Text_0:
# 973 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelHighlands_Hauk_R4_Text_1:
# 979 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Noted. Properly, this time.$"

ParcelHighlands_Hauk_R4_Text_2:
# 980 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Hauk_R5_Text_0:
# 987 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Hauk_R5_Text_1:
# 993 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's the one I wanted to see.$"

ParcelHighlands_Hauk_R5_Text_2:
# 994 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_Jarle_Text_0:
# 1000 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: The plateau's the top of the\n"
	.string "world. My world, anyway. Battle for it.$"

ParcelHighlands_Jarle_Text_1:
# 1001 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Your world, then. Mind the\n"
	.string "stakes.$"

ParcelHighlands_Jarle_Text_2:
# 1016 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Don't move the red stakes. ILEX\n"
	.string "will know. ILEX always knows.$"

ParcelHighlands_Jarle_R2_Text_0:
# 1027 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Jarle_R2_Text_1:
# 1029 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: No hurry. The water keeps.$"

ParcelHighlands_Jarle_R2_Text_2:
# 1033 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: That's the one I wanted to see.$"

ParcelHighlands_Jarle_R2_Text_3:
# 1034 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Jarle_R3_Text_0:
# 1041 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_Jarle_R3_Text_1:
# 1047 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Noted. Properly, this time.$"

ParcelHighlands_Jarle_R3_Text_2:
# 1048 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Jarle_R4_Text_0:
# 1055 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Jarle_R4_Text_1:
# 1062 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Jarle_R5_Text_0:
# 1069 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Jarle_R5_Text_1:
# 1076 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Kjersti_Text_0:
# 1082 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds up here are new.\n"
	.string "Black water. My SNORUNT won't go near\l"
	.string "them. Battle?$"

ParcelHighlands_Kjersti_Text_1:
# 1083 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Wouldn't go near you either,\n"
	.string "now.$"

ParcelHighlands_Kjersti_Text_2:
# 1098 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds weren't on last\n"
	.string "year's map. The map's from the\l"
	.string "FOUNDATION. They print a new one every\l"
	.string "spring.$"

ParcelHighlands_Kjersti_R2_Text_0:
# 1109 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_Kjersti_R2_Text_1:
# 1111 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Fine. Same spot.$"

ParcelHighlands_Kjersti_R2_Text_2:
# 1115 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Still yours.$"

ParcelHighlands_Kjersti_R2_Text_3:
# 1116 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlands_Kjersti_R3_Text_0:
# 1123 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlands_Kjersti_R3_Text_1:
# 1130 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlands_Kjersti_R4_Text_0:
# 1137 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Kjersti_R4_Text_1:
# 1143 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: …Again, then. Later.$"

ParcelHighlands_Kjersti_R4_Text_2:
# 1144 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Kjersti_R5_Text_0:
# 1151 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Kjersti_R5_Text_1:
# 1158 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Leidulf_Text_0:
# 1164 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I came up for the cold. There's\n"
	.string "less of it than the brochure said.\l"
	.string "Battle.$"

ParcelHighlands_Leidulf_Text_1:
# 1165 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Less of that than the\n"
	.string "brochure said, too.$"

ParcelHighlands_Leidulf_Text_2:
# 1180 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The brochure's the\n"
	.string "FOUNDATION's. 'Alpine experience.' The\l"
	.string "alpine's leaving. The experience is\l"
	.string "watching it go.$"

ParcelHighlands_Leidulf_R2_Text_0:
# 1191 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlands_Leidulf_R2_Text_1:
# 1193 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_Leidulf_R2_Text_2:
# 1197 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Noted. Properly, this time.$"

ParcelHighlands_Leidulf_R2_Text_3:
# 1198 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Leidulf_R3_Text_0:
# 1205 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlands_Leidulf_R3_Text_1:
# 1211 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: …Fair.$"

ParcelHighlands_Leidulf_R3_Text_2:
# 1212 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Leidulf_R4_Text_0:
# 1219 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Leidulf_R4_Text_1:
# 1226 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Leidulf_R5_Text_0:
# 1233 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Leidulf_R5_Text_1:
# 1239 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlands_Leidulf_R5_Text_2:
# 1240 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_Nora_Text_0:
# 1246 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The mountain is thinking about\n"
	.string "falling. Slowly. Can you hear it? Battle\l"
	.string "me.$"

ParcelHighlands_Nora_Text_1:
# 1247 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: You heard it.$"

ParcelHighlands_Nora_Text_2:
# 1262 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The woman at the bore thinks\n"
	.string "loud, warm thoughts. She means every\l"
	.string "one of them. That's what frightens me.$"

ParcelHighlands_Nora_R2_Text_0:
# 1273 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelHighlands_Nora_R2_Text_1:
# 1275 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Suit yourself. I'm here.$"

ParcelHighlands_Nora_R2_Text_2:
# 1279 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Still yours.$"

ParcelHighlands_Nora_R2_Text_3:
# 1280 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Nora_R3_Text_0:
# 1287 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Nora_R3_Text_1:
# 1293 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: …Again, then. Later.$"

ParcelHighlands_Nora_R3_Text_2:
# 1294 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Nora_R4_Text_0:
# 1301 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_Nora_R4_Text_1:
# 1308 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Nora_R5_Text_0:
# 1315 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Nora_R5_Text_1:
# 1321 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Right. That's the whole of it.$"

ParcelHighlands_Nora_R5_Text_2:
# 1322 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_Peder_Text_0:
# 1328 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Nobody sees me on the rock.\n"
	.string "SNEASEL taught me. Battle.$"

ParcelHighlands_Peder_Text_1:
# 1329 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: SNEASEL would've won.$"

ParcelHighlands_Peder_Text_2:
# 1344 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: The SNEASEL are all up on the\n"
	.string "band now. Nowhere else cold enough.\l"
	.string "They don't like company. They've got no\l"
	.string "choice.$"

ParcelHighlands_Peder_R2_Text_0:
# 1355 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Peder_R2_Text_1:
# 1357 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_Peder_R2_Text_2:
# 1361 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Still yours.$"

ParcelHighlands_Peder_R2_Text_3:
# 1362 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Peder_R3_Text_0:
# 1369 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Peder_R3_Text_1:
# 1375 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: That's the one I wanted to see.$"

ParcelHighlands_Peder_R3_Text_2:
# 1376 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Peder_R4_Text_0:
# 1383 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_Peder_R4_Text_1:
# 1389 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: …Again, then. Later.$"

ParcelHighlands_Peder_R4_Text_2:
# 1390 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Peder_R5_Text_0:
# 1397 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Peder_R5_Text_1:
# 1403 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Noted. Properly, this time.$"

ParcelHighlands_Peder_R5_Text_2:
# 1404 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Runa_Text_0:
# 1410 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Cadet RUNA. I count the\n"
	.string "lowlanders. ZIGZAGOON, TAILLOW, NUMEL.\l"
	.string "New every month. Spar.$"

ParcelHighlands_Runa_Text_1:
# 1411 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Count's the same. You're not a\n"
	.string "lowlander.$"

ParcelHighlands_Runa_Text_2:
# 1426 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: ILEX says count what's arriving\n"
	.string "as carefully as what's leaving. Nobody\l"
	.string "else counts the arrivals. They look like\l"
	.string "good news.$"

ParcelHighlands_Runa_R2_Text_0:
# 1437 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Runa_R2_Text_1:
# 1439 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Suit yourself. I'm here.$"

ParcelHighlands_Runa_R2_Text_2:
# 1443 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Noted. Properly, this time.$"

ParcelHighlands_Runa_R2_Text_3:
# 1444 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Runa_R3_Text_0:
# 1451 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Runa_R3_Text_1:
# 1457 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: That's the one I wanted to see.$"

ParcelHighlands_Runa_R3_Text_2:
# 1458 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Runa_R4_Text_0:
# 1465 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_Runa_R4_Text_1:
# 1471 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Still yours.$"

ParcelHighlands_Runa_R4_Text_2:
# 1472 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Runa_R5_Text_0:
# 1479 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelHighlands_Runa_R5_Text_1:
# 1486 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlands_Siri_Text_0:
# 1492 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: My PILOSWINE was born up here.\n"
	.string "There won't be another one born up\l"
	.string "here. Battle.$"

ParcelHighlands_Siri_Text_1:
# 1493 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: It's still the strongest thing on\n"
	.string "the mountain.$"

ParcelHighlands_Siri_Text_2:
# 1508 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: The fall's loud this year. More\n"
	.string "melt. Every year the fall's loud and\l"
	.string "every year there's less snow to make it.$"

ParcelHighlands_Siri_R2_Text_0:
# 1519 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelHighlands_Siri_R2_Text_1:
# 1521 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Fine. Same spot.$"

ParcelHighlands_Siri_R2_Text_2:
# 1525 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: That's the one I wanted to see.$"

ParcelHighlands_Siri_R2_Text_3:
# 1526 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Siri_R3_Text_0:
# 1533 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlands_Siri_R3_Text_1:
# 1539 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: …Fair.$"

ParcelHighlands_Siri_R3_Text_2:
# 1540 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Siri_R4_Text_0:
# 1547 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Siri_R4_Text_1:
# 1554 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Siri_R5_Text_0:
# 1561 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Siri_R5_Text_1:
# 1567 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: …Again, then. Later.$"

ParcelHighlands_Siri_R5_Text_2:
# 1568 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_T_Snorre_Text_0:
# 1576 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: The slide took the trail. I've\n"
	.string "been sitting here deciding whether to\l"
	.string "climb it. Battle first.$"

ParcelHighlands_T_Snorre_Text_1:
# 1577 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Still deciding.$"

ParcelHighlands_T_Snorre_Text_2:
# 1592 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: ILEX went up through the\n"
	.string "scree. Alone. She's older than me and\l"
	.string "she didn't stop to decide.$"

ParcelHighlands_T_Snorre_R2_Text_0:
# 1603 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_T_Snorre_R2_Text_1:
# 1605 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Fine. Same spot.$"

ParcelHighlands_T_Snorre_R2_Text_2:
# 1609 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Still yours.$"

ParcelHighlands_T_Snorre_R2_Text_3:
# 1610 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_T_Snorre_R3_Text_0:
# 1617 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_T_Snorre_R3_Text_1:
# 1623 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Right. That's the whole of it.$"

ParcelHighlands_T_Snorre_R3_Text_2:
# 1624 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_T_Snorre_R4_Text_0:
# 1631 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_T_Snorre_R4_Text_1:
# 1637 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: …Fair.$"

ParcelHighlands_T_Snorre_R4_Text_2:
# 1638 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_T_Snorre_R5_Text_0:
# 1645 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlands_T_Snorre_R5_Text_1:
# 1651 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's the one I wanted to see.$"

ParcelHighlands_T_Snorre_R5_Text_2:
# 1652 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_T_Torgeir_Text_0:
# 1658 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Cadet TORGEIR, the low\n"
	.string "stakes. I count what's come up the\l"
	.string "slope. Spar.$"

ParcelHighlands_T_Torgeir_Text_1:
# 1659 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Counted.$"

ParcelHighlands_T_Torgeir_Text_2:
# 1674 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Every month something new\n"
	.string "arrives from the valley. Every month\l"
	.string "something old goes up to the band and\l"
	.string "doesn't come down.$"

ParcelHighlands_T_Torgeir_R2_Text_0:
# 1685 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_T_Torgeir_R2_Text_1:
# 1687 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_T_Torgeir_R2_Text_2:
# 1691 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Still yours.$"

ParcelHighlands_T_Torgeir_R2_Text_3:
# 1692 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_T_Torgeir_R3_Text_0:
# 1699 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_T_Torgeir_R3_Text_1:
# 1706 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlands_T_Torgeir_R4_Text_0:
# 1713 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlands_T_Torgeir_R4_Text_1:
# 1719 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlands_T_Torgeir_R4_Text_2:
# 1720 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_T_Torgeir_R5_Text_0:
# 1727 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_T_Torgeir_R5_Text_1:
# 1733 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Noted. Properly, this time.$"

ParcelHighlands_T_Torgeir_R5_Text_2:
# 1734 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_T_Hedvig_Text_0:
# 1740 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: ILEX measures the band in\n"
	.string "cloth. I measure it in what the\l"
	.string "mountain's thinking. It's thinking\l"
	.string "about leaving. Battle.$"

ParcelHighlands_T_Hedvig_Text_1:
# 1741 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: It's still thinking.$"

ParcelHighlands_T_Hedvig_Text_2:
# 1756 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: The woman at the bore means\n"
	.string "every warm word. That's what makes her\l"
	.string "cold.$"

ParcelHighlands_T_Hedvig_R2_Text_0:
# 1767 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_T_Hedvig_R2_Text_1:
# 1769 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Suit yourself. I'm here.$"

ParcelHighlands_T_Hedvig_R2_Text_2:
# 1773 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Right. That's the whole of it.$"

ParcelHighlands_T_Hedvig_R2_Text_3:
# 1774 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlands_T_Hedvig_R3_Text_0:
# 1781 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_T_Hedvig_R3_Text_1:
# 1787 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Noted. Properly, this time.$"

ParcelHighlands_T_Hedvig_R3_Text_2:
# 1788 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_T_Hedvig_R4_Text_0:
# 1795 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_T_Hedvig_R4_Text_1:
# 1801 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Still yours.$"

ParcelHighlands_T_Hedvig_R4_Text_2:
# 1802 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_T_Hedvig_R5_Text_0:
# 1809 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_T_Hedvig_R5_Text_1:
# 1816 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_PerrinScene_Text_0:
# 1829 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelHighlands_PerrinScene_Text_1:
# 1833 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: HOLLIS says hello. HOLLIS says\n"
	.string "you're 'thorough'. She said it like a\l"
	.string "diagnosis.\p"
	.string "I'm on the relocation team. We moved\n"
	.string "eleven families down the hill this\l"
	.string "month. ELEVEN. What did your notebook\l"
	.string "move? Battle.$"

ParcelHighlands_PerrinScene_Text_2:
# 1834 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: …Eleven's still eleven.$"

ParcelHighlands_PerrinScene_Text_3:
# 1835 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: The old woman won't go. I've\n"
	.string "been up to her door four times. She asks\l"
	.string "after you.\p"
	.string "Nobody asks after me. That's not a\n"
	.string "complaint. I'm just saying it out loud\l"
	.string "once.$"

ParcelHighlands_PerrinTalk_Text_0:
# 1848 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelHighlands_Epilogue_Text_0:
# 1859 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL. The bore is capped. Enjoined\n"
	.string "pending survey, and the survey is\l"
	.string "yours. The leases wait on it. The ground\l"
	.string "doesn't.\p"
	.string "The warming centre stays open past\n"
	.string "midnight now. HOLLIS cut the ribbon.\l"
	.string "It's still warm.$"

ParcelHighlands_GymVale_Rematch_Text_0:
# 1871 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: You went up with it signed, and\n"
	.string "the slope held. Mostly.\p"
	.string "I'd see what the cold made of you since.\n"
	.string "Full strength. Not a gate. Yes?$"

ParcelHighlands_GymVale_Rematch_Text_1:
# 1873 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Then mind the slope.$"

ParcelHighlands_GymVale_Rematch_Text_2:
# 1877 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. There's nothing above\n"
	.string "this to clear, so take that as the word.$"

ParcelHighlands_GymVale_Rematch_Text_3:
# 1878 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The slope's here when you are.$"

ParcelHighlands_Mareep_Text_0:
# 1887 "data/maps/ParcelHighlands/scripts.pory"
	.string "A MAREEP on the scree above the slide,\n"
	.string "legs braced, wool full of grit. It looks\l"
	.string "at you.\p"
	.string "It is not coming down. It is, very\n"
	.string "definitely, standing.$"
