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
	msgbox ParcelHighlands_HollisTech_Text_1, MSGBOX_DEFAULT
# 179 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_HollisTech_2:
# 174 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_0, MSGBOX_DEFAULT
# 175 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Homesteader::
# 185 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 186 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 187 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Homesteader_2
# 192 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 193 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 5
# 194 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 195 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Homesteader_5
# 219 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_6, MSGBOX_DEFAULT
# 220 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_7, MSGBOX_DEFAULT
# 221 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_8, MSGBOX_DEFAULT
# 222 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 223 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_2:
# 188 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_5:
# 196 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Homesteader_9
ParcelHighlands_Homesteader_7:
# 210 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_HL_EGG_GIVEN, ParcelHighlands_Homesteader_13
# 215 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_5, MSGBOX_DEFAULT
# 216 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_8:
# 197 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_1, MSGBOX_DEFAULT
# 198 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 199 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Homesteader_16
# 204 "data/maps/ParcelHighlands/scripts.pory"
	giveegg SPECIES_SWINUB
# 205 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_HL_EGG_GIVEN
# 206 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_3, MSGBOX_DEFAULT
# 207 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_9:
# 196 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_HL_EGG_GIVEN, ParcelHighlands_Homesteader_8
	goto ParcelHighlands_Homesteader_7

ParcelHighlands_Homesteader_13:
# 211 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_4, MSGBOX_DEFAULT
# 212 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_16:
# 200 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_2, MSGBOX_DEFAULT
# 201 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hale::
# 229 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 230 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 231 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Hale_2
# 236 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Hale_5
# 241 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 242 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 63
# 243 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 244 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Hale_8
# 263 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_9, MSGBOX_DEFAULT
# 264 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_2:
# 232 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_0, MSGBOX_DEFAULT
# 233 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_5:
# 237 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_1, MSGBOX_DEFAULT
# 238 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_8:
# 245 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_2, MSGBOX_DEFAULT
# 246 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyHighlands
# 247 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_3, MSGBOX_DEFAULT
# 248 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_4, MSGBOX_DEFAULT
# 249 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_5, MSGBOX_DEFAULT
# 250 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_6, MSGBOX_DEFAULT
# 251 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 6
# 252 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 253 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_7, MSGBOX_DEFAULT
# 254 "data/maps/ParcelHighlands/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 255 "data/maps/ParcelHighlands/scripts.pory"
	waitfanfare
# 256 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_CERT
# 257 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_MAX_POTION, 3
# 258 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_REVIVE, 3
# 259 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_8, MSGBOX_DEFAULT
# 260 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ItemPotion::
# 269 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelHighlands_ItemMaxRepel::
# 270 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelHighlands_ItemIceHeal::
# 271 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelHighlands_SurfCache::
# 273 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_RARE_CANDY
# 274 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_SURF
	end


ParcelHighlands_FallsCache::
# 278 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_PP_MAX
# 279 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_FALLS
	end


ParcelHighlands_SignSummit::
# 285 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignSummit_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SignCentre::
# 289 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignCentre_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SurveyorTrainer::
# 295 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SURVEYOR, ParcelHighlands_SurveyorTrainer_Text_0, ParcelHighlands_SurveyorTrainer_Text_1, ParcelHighlands_SurveyorTrainer_FirstWin
# 299 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 300 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_SurveyorTrainer_3
ParcelHighlands_SurveyorTrainer_1:
# 303 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_SurveyorTrainer_8
ParcelHighlands_SurveyorTrainer_6:
# 306 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_SurveyorTrainer_13
ParcelHighlands_SurveyorTrainer_11:
# 309 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_SurveyorTrainer_18
ParcelHighlands_SurveyorTrainer_16:
# 312 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_SurveyorTrainer_2:
# 301 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R2
	goto ParcelHighlands_SurveyorTrainer_1

ParcelHighlands_SurveyorTrainer_3:
# 300 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R2
	goto_if 0, ParcelHighlands_SurveyorTrainer_2
	goto ParcelHighlands_SurveyorTrainer_1

ParcelHighlands_SurveyorTrainer_7:
# 304 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R3
	goto ParcelHighlands_SurveyorTrainer_6

ParcelHighlands_SurveyorTrainer_8:
# 303 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R3
	goto_if 0, ParcelHighlands_SurveyorTrainer_7
	goto ParcelHighlands_SurveyorTrainer_6

ParcelHighlands_SurveyorTrainer_12:
# 307 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R4
	goto ParcelHighlands_SurveyorTrainer_11

ParcelHighlands_SurveyorTrainer_13:
# 306 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R4
	goto_if 0, ParcelHighlands_SurveyorTrainer_12
	goto ParcelHighlands_SurveyorTrainer_11

ParcelHighlands_SurveyorTrainer_17:
# 310 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R5
	goto ParcelHighlands_SurveyorTrainer_16

ParcelHighlands_SurveyorTrainer_18:
# 309 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R5
	goto_if 0, ParcelHighlands_SurveyorTrainer_17
	goto ParcelHighlands_SurveyorTrainer_16


ParcelHighlands_SurveyorTrainer_FirstWin::
# 316 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
# 317 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R2::
# 321 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 322 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 323 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_0, MSGBOX_YESNO
# 324 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R2_2
# 329 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R2, ParcelHighlands_SurveyorTrainer_R2_Text_2
# 330 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_3, MSGBOX_DEFAULT
# 331 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R2_2:
# 325 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 326 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R3::
# 335 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 336 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 337 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R3_Text_0, MSGBOX_YESNO
# 338 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R3_2
# 343 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R3, ParcelHighlands_SurveyorTrainer_R3_Text_1
# 344 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R3_Text_2, MSGBOX_DEFAULT
# 345 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R3_2:
# 339 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 340 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R4::
# 349 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 350 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 351 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R4_Text_0, MSGBOX_YESNO
# 352 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R4_2
# 357 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R4, ParcelHighlands_SurveyorTrainer_R4_Text_1
# 358 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R4_Text_2, MSGBOX_DEFAULT
# 359 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R4_2:
# 353 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 354 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R5::
# 363 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 364 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 365 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R5_Text_0, MSGBOX_YESNO
# 366 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R5_2
# 371 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R5, ParcelHighlands_SurveyorTrainer_R2_Text_2
# 372 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R5_Text_1, MSGBOX_DEFAULT
# 373 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R5_2:
# 367 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ValeGate::
# 379 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, ParcelHighlands_ValeGate_2
# 383 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 384 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_0, MSGBOX_DEFAULT
# 385 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 386 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeApproach
# 387 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 388 "data/maps/ParcelHighlands/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_HL_FaceRight
# 389 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 390 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5, ParcelHighlands_ValeGate_Text_2
# 392 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_BADGE05_GET
# 393 "data/maps/ParcelHighlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 394 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_3, MSGBOX_DEFAULT
# 395 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_HM03
# 396 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_4, MSGBOX_DEFAULT
# 397 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 398 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeBack
# 399 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 400 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
# 401 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_ValeGate_2:
# 380 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


ParcelHighlands_GymVale::
# 405 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 406 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 407 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_GymVale_2
ParcelHighlands_GymVale_1:
# 410 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Text_0, MSGBOX_DEFAULT
# 411 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_GymVale_2:
# 408 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_GymVale_Rematch
	goto ParcelHighlands_GymVale_1


# 414 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeApproach:
# 414 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
# 414 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
	step_end

# 415 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeBack:
# 415 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 415 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 415 "data/maps/ParcelHighlands/scripts.pory"
	face_left
	step_end

# 416 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_FaceRight:
# 416 "data/maps/ParcelHighlands/scripts.pory"
	face_right
	step_end

ParcelHighlands_Asbjorn::
# 420 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_ASBJORN, ParcelHighlands_Asbjorn_Text_0, ParcelHighlands_Asbjorn_Text_1, ParcelHighlands_Asbjorn_FirstWin
# 424 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 425 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Asbjorn_3
ParcelHighlands_Asbjorn_1:
# 428 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Asbjorn_8
ParcelHighlands_Asbjorn_6:
# 431 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Asbjorn_13
ParcelHighlands_Asbjorn_11:
# 434 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Asbjorn_18
ParcelHighlands_Asbjorn_16:
# 437 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Asbjorn_2:
# 426 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R2
	goto ParcelHighlands_Asbjorn_1

ParcelHighlands_Asbjorn_3:
# 425 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R2
	goto_if 0, ParcelHighlands_Asbjorn_2
	goto ParcelHighlands_Asbjorn_1

ParcelHighlands_Asbjorn_7:
# 429 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R3
	goto ParcelHighlands_Asbjorn_6

ParcelHighlands_Asbjorn_8:
# 428 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R3
	goto_if 0, ParcelHighlands_Asbjorn_7
	goto ParcelHighlands_Asbjorn_6

ParcelHighlands_Asbjorn_12:
# 432 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R4
	goto ParcelHighlands_Asbjorn_11

ParcelHighlands_Asbjorn_13:
# 431 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R4
	goto_if 0, ParcelHighlands_Asbjorn_12
	goto ParcelHighlands_Asbjorn_11

ParcelHighlands_Asbjorn_17:
# 435 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R5
	goto ParcelHighlands_Asbjorn_16

ParcelHighlands_Asbjorn_18:
# 434 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R5
	goto_if 0, ParcelHighlands_Asbjorn_17
	goto ParcelHighlands_Asbjorn_16


ParcelHighlands_Asbjorn_FirstWin::
# 441 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
# 442 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R2::
# 446 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 447 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 448 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_0, MSGBOX_YESNO
# 449 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R2_2
# 454 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R2, ParcelHighlands_Asbjorn_R2_Text_2
# 455 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_3, MSGBOX_DEFAULT
# 456 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R2_2:
# 450 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 451 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R3::
# 460 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 461 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 462 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R3_Text_0, MSGBOX_YESNO
# 463 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R3_2
# 468 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R3, ParcelHighlands_Asbjorn_R3_Text_1
# 469 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R3_Text_2, MSGBOX_DEFAULT
# 470 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R3_2:
# 464 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 465 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R4::
# 474 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 475 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 476 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R4_Text_0, MSGBOX_YESNO
# 477 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R4_2
# 482 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R4, ParcelHighlands_Asbjorn_R4_Text_1
# 483 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R4_Text_2, MSGBOX_DEFAULT
# 484 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R4_2:
# 478 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 479 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R5::
# 488 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 489 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 490 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R5_Text_0, MSGBOX_YESNO
# 491 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R5_2
# 496 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R5, ParcelHighlands_Asbjorn_R2_Text_2
# 497 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R5_Text_1, MSGBOX_DEFAULT
# 498 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R5_2:
# 492 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 493 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar::
# 502 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_BRYNJAR, ParcelHighlands_Brynjar_Text_0, ParcelHighlands_Brynjar_Text_1, ParcelHighlands_Brynjar_FirstWin
# 506 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 507 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Brynjar_3
ParcelHighlands_Brynjar_1:
# 510 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Brynjar_8
ParcelHighlands_Brynjar_6:
# 513 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Brynjar_13
ParcelHighlands_Brynjar_11:
# 516 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Brynjar_18
ParcelHighlands_Brynjar_16:
# 519 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Brynjar_2:
# 508 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R2
	goto ParcelHighlands_Brynjar_1

ParcelHighlands_Brynjar_3:
# 507 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R2
	goto_if 0, ParcelHighlands_Brynjar_2
	goto ParcelHighlands_Brynjar_1

ParcelHighlands_Brynjar_7:
# 511 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R3
	goto ParcelHighlands_Brynjar_6

ParcelHighlands_Brynjar_8:
# 510 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R3
	goto_if 0, ParcelHighlands_Brynjar_7
	goto ParcelHighlands_Brynjar_6

ParcelHighlands_Brynjar_12:
# 514 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R4
	goto ParcelHighlands_Brynjar_11

ParcelHighlands_Brynjar_13:
# 513 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R4
	goto_if 0, ParcelHighlands_Brynjar_12
	goto ParcelHighlands_Brynjar_11

ParcelHighlands_Brynjar_17:
# 517 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R5
	goto ParcelHighlands_Brynjar_16

ParcelHighlands_Brynjar_18:
# 516 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R5
	goto_if 0, ParcelHighlands_Brynjar_17
	goto ParcelHighlands_Brynjar_16


ParcelHighlands_Brynjar_FirstWin::
# 523 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
# 524 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R2::
# 528 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 529 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 530 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_0, MSGBOX_YESNO
# 531 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R2_2
# 536 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R2, ParcelHighlands_Brynjar_R2_Text_2
# 537 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_3, MSGBOX_DEFAULT
# 538 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R2_2:
# 532 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 533 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R3::
# 542 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 543 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 544 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R3_Text_0, MSGBOX_YESNO
# 545 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R3_2
# 550 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R3, ParcelHighlands_Brynjar_R3_Text_1
# 551 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R3_Text_2, MSGBOX_DEFAULT
# 552 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R3_2:
# 546 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 547 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R4::
# 556 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 557 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 558 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R4_Text_0, MSGBOX_YESNO
# 559 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R4_2
# 564 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R4, ParcelHighlands_Brynjar_R3_Text_1
# 565 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R4_Text_1, MSGBOX_DEFAULT
# 566 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R4_2:
# 560 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 561 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R5::
# 570 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 571 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 572 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R5_Text_0, MSGBOX_YESNO
# 573 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R5_2
# 578 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R5, ParcelHighlands_Brynjar_R2_Text_2
# 579 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R5_Text_1, MSGBOX_DEFAULT
# 580 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R5_2:
# 574 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 575 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny::
# 584 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_DAGNY, ParcelHighlands_Dagny_Text_0, ParcelHighlands_Dagny_Text_1, ParcelHighlands_Dagny_FirstWin
# 588 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 589 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Dagny_3
ParcelHighlands_Dagny_1:
# 592 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Dagny_8
ParcelHighlands_Dagny_6:
# 595 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Dagny_13
ParcelHighlands_Dagny_11:
# 598 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Dagny_18
ParcelHighlands_Dagny_16:
# 601 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Dagny_2:
# 590 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R2
	goto ParcelHighlands_Dagny_1

ParcelHighlands_Dagny_3:
# 589 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R2
	goto_if 0, ParcelHighlands_Dagny_2
	goto ParcelHighlands_Dagny_1

ParcelHighlands_Dagny_7:
# 593 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R3
	goto ParcelHighlands_Dagny_6

ParcelHighlands_Dagny_8:
# 592 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R3
	goto_if 0, ParcelHighlands_Dagny_7
	goto ParcelHighlands_Dagny_6

ParcelHighlands_Dagny_12:
# 596 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R4
	goto ParcelHighlands_Dagny_11

ParcelHighlands_Dagny_13:
# 595 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R4
	goto_if 0, ParcelHighlands_Dagny_12
	goto ParcelHighlands_Dagny_11

ParcelHighlands_Dagny_17:
# 599 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R5
	goto ParcelHighlands_Dagny_16

ParcelHighlands_Dagny_18:
# 598 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R5
	goto_if 0, ParcelHighlands_Dagny_17
	goto ParcelHighlands_Dagny_16


ParcelHighlands_Dagny_FirstWin::
# 605 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
# 606 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R2::
# 610 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 611 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 612 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_0, MSGBOX_YESNO
# 613 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R2_2
# 618 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R2, ParcelHighlands_Dagny_R2_Text_2
# 619 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_3, MSGBOX_DEFAULT
# 620 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R2_2:
# 614 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 615 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R3::
# 624 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 625 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 626 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R3_Text_0, MSGBOX_YESNO
# 627 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R3_2
# 632 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R3, ParcelHighlands_Dagny_R2_Text_2
# 633 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R3_Text_1, MSGBOX_DEFAULT
# 634 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R3_2:
# 628 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 629 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R4::
# 638 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 639 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 640 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R4_Text_0, MSGBOX_YESNO
# 641 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R4_2
# 646 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R4, ParcelHighlands_Dagny_R2_Text_2
# 647 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R4_Text_1, MSGBOX_DEFAULT
# 648 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R4_2:
# 642 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 643 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R5::
# 652 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 653 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 654 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R5_Text_0, MSGBOX_YESNO
# 655 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R5_2
# 660 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R5, ParcelHighlands_Dagny_R5_Text_1
# 661 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R5_Text_2, MSGBOX_DEFAULT
# 662 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R5_2:
# 656 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 657 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind::
# 666 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_EIVIND, ParcelHighlands_Eivind_Text_0, ParcelHighlands_Eivind_Text_1, ParcelHighlands_Eivind_FirstWin
# 670 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 671 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Eivind_3
ParcelHighlands_Eivind_1:
# 674 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Eivind_8
ParcelHighlands_Eivind_6:
# 677 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Eivind_13
ParcelHighlands_Eivind_11:
# 680 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Eivind_18
ParcelHighlands_Eivind_16:
# 683 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Eivind_2:
# 672 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R2
	goto ParcelHighlands_Eivind_1

ParcelHighlands_Eivind_3:
# 671 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R2
	goto_if 0, ParcelHighlands_Eivind_2
	goto ParcelHighlands_Eivind_1

ParcelHighlands_Eivind_7:
# 675 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R3
	goto ParcelHighlands_Eivind_6

ParcelHighlands_Eivind_8:
# 674 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R3
	goto_if 0, ParcelHighlands_Eivind_7
	goto ParcelHighlands_Eivind_6

ParcelHighlands_Eivind_12:
# 678 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R4
	goto ParcelHighlands_Eivind_11

ParcelHighlands_Eivind_13:
# 677 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R4
	goto_if 0, ParcelHighlands_Eivind_12
	goto ParcelHighlands_Eivind_11

ParcelHighlands_Eivind_17:
# 681 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R5
	goto ParcelHighlands_Eivind_16

ParcelHighlands_Eivind_18:
# 680 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R5
	goto_if 0, ParcelHighlands_Eivind_17
	goto ParcelHighlands_Eivind_16


ParcelHighlands_Eivind_FirstWin::
# 687 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
# 688 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R2::
# 692 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 693 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 694 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_0, MSGBOX_YESNO
# 695 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R2_2
# 700 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R2, ParcelHighlands_Eivind_R2_Text_2
# 701 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_3, MSGBOX_DEFAULT
# 702 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R2_2:
# 696 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 697 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R3::
# 706 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 707 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 708 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R3_Text_0, MSGBOX_YESNO
# 709 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R3_2
# 714 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R3, ParcelHighlands_Eivind_R3_Text_1
# 715 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R3_Text_2, MSGBOX_DEFAULT
# 716 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R3_2:
# 710 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 711 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R4::
# 720 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 721 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 722 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R4_Text_0, MSGBOX_YESNO
# 723 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R4_2
# 728 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R4, ParcelHighlands_Eivind_R3_Text_1
# 729 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R4_Text_1, MSGBOX_DEFAULT
# 730 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R4_2:
# 724 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 725 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R5::
# 734 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 735 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 736 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R5_Text_0, MSGBOX_YESNO
# 737 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R5_2
# 742 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R5, ParcelHighlands_Eivind_R5_Text_1
# 743 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R5_Text_2, MSGBOX_DEFAULT
# 744 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R5_2:
# 738 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 739 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn::
# 748 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_FINN, ParcelHighlands_Finn_Text_0, ParcelHighlands_Finn_Text_1, ParcelHighlands_Finn_FirstWin
# 752 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 753 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Finn_3
ParcelHighlands_Finn_1:
# 756 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Finn_8
ParcelHighlands_Finn_6:
# 759 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Finn_13
ParcelHighlands_Finn_11:
# 762 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Finn_18
ParcelHighlands_Finn_16:
# 765 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Finn_2:
# 754 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R2
	goto ParcelHighlands_Finn_1

ParcelHighlands_Finn_3:
# 753 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R2
	goto_if 0, ParcelHighlands_Finn_2
	goto ParcelHighlands_Finn_1

ParcelHighlands_Finn_7:
# 757 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R3
	goto ParcelHighlands_Finn_6

ParcelHighlands_Finn_8:
# 756 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R3
	goto_if 0, ParcelHighlands_Finn_7
	goto ParcelHighlands_Finn_6

ParcelHighlands_Finn_12:
# 760 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R4
	goto ParcelHighlands_Finn_11

ParcelHighlands_Finn_13:
# 759 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R4
	goto_if 0, ParcelHighlands_Finn_12
	goto ParcelHighlands_Finn_11

ParcelHighlands_Finn_17:
# 763 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R5
	goto ParcelHighlands_Finn_16

ParcelHighlands_Finn_18:
# 762 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R5
	goto_if 0, ParcelHighlands_Finn_17
	goto ParcelHighlands_Finn_16


ParcelHighlands_Finn_FirstWin::
# 769 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
# 770 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R2::
# 774 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 775 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 776 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_0, MSGBOX_YESNO
# 777 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R2_2
# 782 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R2, ParcelHighlands_Finn_R2_Text_2
# 783 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_3, MSGBOX_DEFAULT
# 784 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R2_2:
# 778 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 779 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R3::
# 788 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 789 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 790 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R3_Text_0, MSGBOX_YESNO
# 791 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R3_2
# 796 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R3, ParcelHighlands_Finn_R2_Text_2
# 797 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R3_Text_1, MSGBOX_DEFAULT
# 798 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R3_2:
# 792 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 793 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R4::
# 802 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 803 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 804 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R4_Text_0, MSGBOX_YESNO
# 805 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R4_2
# 810 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R4, ParcelHighlands_Finn_R4_Text_1
# 811 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R4_Text_2, MSGBOX_DEFAULT
# 812 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R4_2:
# 806 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 807 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R5::
# 816 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 817 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 818 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R5_Text_0, MSGBOX_YESNO
# 819 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R5_2
# 824 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R5, ParcelHighlands_Finn_R5_Text_1
# 825 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R5_Text_2, MSGBOX_DEFAULT
# 826 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R5_2:
# 820 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 821 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete::
# 830 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_GRETE, ParcelHighlands_Grete_Text_0, ParcelHighlands_Grete_Text_1, ParcelHighlands_Grete_FirstWin
# 834 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 835 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Grete_3
ParcelHighlands_Grete_1:
# 838 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Grete_8
ParcelHighlands_Grete_6:
# 841 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Grete_13
ParcelHighlands_Grete_11:
# 844 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Grete_18
ParcelHighlands_Grete_16:
# 847 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Grete_2:
# 836 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R2
	goto ParcelHighlands_Grete_1

ParcelHighlands_Grete_3:
# 835 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R2
	goto_if 0, ParcelHighlands_Grete_2
	goto ParcelHighlands_Grete_1

ParcelHighlands_Grete_7:
# 839 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R3
	goto ParcelHighlands_Grete_6

ParcelHighlands_Grete_8:
# 838 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R3
	goto_if 0, ParcelHighlands_Grete_7
	goto ParcelHighlands_Grete_6

ParcelHighlands_Grete_12:
# 842 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R4
	goto ParcelHighlands_Grete_11

ParcelHighlands_Grete_13:
# 841 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R4
	goto_if 0, ParcelHighlands_Grete_12
	goto ParcelHighlands_Grete_11

ParcelHighlands_Grete_17:
# 845 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R5
	goto ParcelHighlands_Grete_16

ParcelHighlands_Grete_18:
# 844 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R5
	goto_if 0, ParcelHighlands_Grete_17
	goto ParcelHighlands_Grete_16


ParcelHighlands_Grete_FirstWin::
# 851 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
# 852 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R2::
# 856 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 857 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 858 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_0, MSGBOX_YESNO
# 859 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R2_2
# 864 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R2, ParcelHighlands_Grete_R2_Text_2
# 865 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_3, MSGBOX_DEFAULT
# 866 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R2_2:
# 860 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 861 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R3::
# 870 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 871 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 872 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R3_Text_0, MSGBOX_YESNO
# 873 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R3_2
# 878 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R3, ParcelHighlands_Grete_R2_Text_2
# 879 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R3_Text_1, MSGBOX_DEFAULT
# 880 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R3_2:
# 874 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 875 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R4::
# 884 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 885 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 886 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R4_Text_0, MSGBOX_YESNO
# 887 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R4_2
# 892 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R4, ParcelHighlands_Grete_R4_Text_1
# 893 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R4_Text_2, MSGBOX_DEFAULT
# 894 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R4_2:
# 888 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 889 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R5::
# 898 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 899 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 900 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R5_Text_0, MSGBOX_YESNO
# 901 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R5_2
# 906 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R5, ParcelHighlands_Grete_R2_Text_2
# 907 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R5_Text_1, MSGBOX_DEFAULT
# 908 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R5_2:
# 902 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 903 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk::
# 912 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HAUK, ParcelHighlands_Hauk_Text_0, ParcelHighlands_Hauk_Text_1, ParcelHighlands_Hauk_FirstWin
# 916 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 917 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Hauk_3
ParcelHighlands_Hauk_1:
# 920 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Hauk_8
ParcelHighlands_Hauk_6:
# 923 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Hauk_13
ParcelHighlands_Hauk_11:
# 926 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Hauk_18
ParcelHighlands_Hauk_16:
# 929 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Hauk_2:
# 918 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R2
	goto ParcelHighlands_Hauk_1

ParcelHighlands_Hauk_3:
# 917 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R2
	goto_if 0, ParcelHighlands_Hauk_2
	goto ParcelHighlands_Hauk_1

ParcelHighlands_Hauk_7:
# 921 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R3
	goto ParcelHighlands_Hauk_6

ParcelHighlands_Hauk_8:
# 920 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R3
	goto_if 0, ParcelHighlands_Hauk_7
	goto ParcelHighlands_Hauk_6

ParcelHighlands_Hauk_12:
# 924 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R4
	goto ParcelHighlands_Hauk_11

ParcelHighlands_Hauk_13:
# 923 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R4
	goto_if 0, ParcelHighlands_Hauk_12
	goto ParcelHighlands_Hauk_11

ParcelHighlands_Hauk_17:
# 927 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R5
	goto ParcelHighlands_Hauk_16

ParcelHighlands_Hauk_18:
# 926 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R5
	goto_if 0, ParcelHighlands_Hauk_17
	goto ParcelHighlands_Hauk_16


ParcelHighlands_Hauk_FirstWin::
# 933 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
# 934 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R2::
# 938 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 939 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 940 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_0, MSGBOX_YESNO
# 941 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R2_2
# 946 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R2, ParcelHighlands_Hauk_R2_Text_2
# 947 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_3, MSGBOX_DEFAULT
# 948 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R2_2:
# 942 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 943 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R3::
# 952 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 953 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 954 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R3_Text_0, MSGBOX_YESNO
# 955 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R3_2
# 960 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R3, ParcelHighlands_Hauk_R3_Text_1
# 961 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R3_Text_2, MSGBOX_DEFAULT
# 962 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R3_2:
# 956 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 957 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R4::
# 966 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 967 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 968 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R4_Text_0, MSGBOX_YESNO
# 969 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R4_2
# 974 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R4, ParcelHighlands_Hauk_R4_Text_1
# 975 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R4_Text_2, MSGBOX_DEFAULT
# 976 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R4_2:
# 970 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 971 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R5::
# 980 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 981 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 982 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R5_Text_0, MSGBOX_YESNO
# 983 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R5_2
# 988 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R5, ParcelHighlands_Hauk_R5_Text_1
# 989 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R5_Text_2, MSGBOX_DEFAULT
# 990 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R5_2:
# 984 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 985 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle::
# 994 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_JARLE, ParcelHighlands_Jarle_Text_0, ParcelHighlands_Jarle_Text_1, ParcelHighlands_Jarle_FirstWin
# 998 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 999 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Jarle_3
ParcelHighlands_Jarle_1:
# 1002 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Jarle_8
ParcelHighlands_Jarle_6:
# 1005 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Jarle_13
ParcelHighlands_Jarle_11:
# 1008 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Jarle_18
ParcelHighlands_Jarle_16:
# 1011 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Jarle_2:
# 1000 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R2
	goto ParcelHighlands_Jarle_1

ParcelHighlands_Jarle_3:
# 999 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R2
	goto_if 0, ParcelHighlands_Jarle_2
	goto ParcelHighlands_Jarle_1

ParcelHighlands_Jarle_7:
# 1003 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R3
	goto ParcelHighlands_Jarle_6

ParcelHighlands_Jarle_8:
# 1002 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R3
	goto_if 0, ParcelHighlands_Jarle_7
	goto ParcelHighlands_Jarle_6

ParcelHighlands_Jarle_12:
# 1006 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R4
	goto ParcelHighlands_Jarle_11

ParcelHighlands_Jarle_13:
# 1005 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R4
	goto_if 0, ParcelHighlands_Jarle_12
	goto ParcelHighlands_Jarle_11

ParcelHighlands_Jarle_17:
# 1009 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R5
	goto ParcelHighlands_Jarle_16

ParcelHighlands_Jarle_18:
# 1008 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R5
	goto_if 0, ParcelHighlands_Jarle_17
	goto ParcelHighlands_Jarle_16


ParcelHighlands_Jarle_FirstWin::
# 1015 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
# 1016 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R2::
# 1020 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1021 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1022 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_0, MSGBOX_YESNO
# 1023 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R2_2
# 1028 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R2, ParcelHighlands_Jarle_R2_Text_2
# 1029 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_3, MSGBOX_DEFAULT
# 1030 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R2_2:
# 1024 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1025 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R3::
# 1034 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1035 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1036 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R3_Text_0, MSGBOX_YESNO
# 1037 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R3_2
# 1042 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R3, ParcelHighlands_Jarle_R3_Text_1
# 1043 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R3_Text_2, MSGBOX_DEFAULT
# 1044 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R3_2:
# 1038 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1039 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R4::
# 1048 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1049 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1050 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R4_Text_0, MSGBOX_YESNO
# 1051 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R4_2
# 1056 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R4, ParcelHighlands_Jarle_R3_Text_1
# 1057 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R4_Text_1, MSGBOX_DEFAULT
# 1058 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R4_2:
# 1052 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1053 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R5::
# 1062 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1063 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1064 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R5_Text_0, MSGBOX_YESNO
# 1065 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R5_2
# 1070 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R5, ParcelHighlands_Jarle_R3_Text_1
# 1071 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R5_Text_1, MSGBOX_DEFAULT
# 1072 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R5_2:
# 1066 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1067 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti::
# 1076 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_KJERSTI, ParcelHighlands_Kjersti_Text_0, ParcelHighlands_Kjersti_Text_1, ParcelHighlands_Kjersti_FirstWin
# 1080 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1081 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Kjersti_3
ParcelHighlands_Kjersti_1:
# 1084 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Kjersti_8
ParcelHighlands_Kjersti_6:
# 1087 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Kjersti_13
ParcelHighlands_Kjersti_11:
# 1090 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Kjersti_18
ParcelHighlands_Kjersti_16:
# 1093 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Kjersti_2:
# 1082 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R2
	goto ParcelHighlands_Kjersti_1

ParcelHighlands_Kjersti_3:
# 1081 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R2
	goto_if 0, ParcelHighlands_Kjersti_2
	goto ParcelHighlands_Kjersti_1

ParcelHighlands_Kjersti_7:
# 1085 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R3
	goto ParcelHighlands_Kjersti_6

ParcelHighlands_Kjersti_8:
# 1084 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R3
	goto_if 0, ParcelHighlands_Kjersti_7
	goto ParcelHighlands_Kjersti_6

ParcelHighlands_Kjersti_12:
# 1088 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R4
	goto ParcelHighlands_Kjersti_11

ParcelHighlands_Kjersti_13:
# 1087 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R4
	goto_if 0, ParcelHighlands_Kjersti_12
	goto ParcelHighlands_Kjersti_11

ParcelHighlands_Kjersti_17:
# 1091 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R5
	goto ParcelHighlands_Kjersti_16

ParcelHighlands_Kjersti_18:
# 1090 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R5
	goto_if 0, ParcelHighlands_Kjersti_17
	goto ParcelHighlands_Kjersti_16


ParcelHighlands_Kjersti_FirstWin::
# 1097 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
# 1098 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R2::
# 1102 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1103 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1104 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_0, MSGBOX_YESNO
# 1105 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R2_2
# 1110 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R2, ParcelHighlands_Kjersti_R2_Text_2
# 1111 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_3, MSGBOX_DEFAULT
# 1112 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R2_2:
# 1106 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1107 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R3::
# 1116 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1117 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1118 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R3_Text_0, MSGBOX_YESNO
# 1119 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R3_2
# 1124 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R3, ParcelHighlands_Kjersti_R2_Text_2
# 1125 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R3_Text_1, MSGBOX_DEFAULT
# 1126 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R3_2:
# 1120 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1121 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R4::
# 1130 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1131 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1132 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R4_Text_0, MSGBOX_YESNO
# 1133 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R4_2
# 1138 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R4, ParcelHighlands_Kjersti_R4_Text_1
# 1139 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R4_Text_2, MSGBOX_DEFAULT
# 1140 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R4_2:
# 1134 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1135 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R5::
# 1144 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1145 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1146 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R5_Text_0, MSGBOX_YESNO
# 1147 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R5_2
# 1152 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R5, ParcelHighlands_Kjersti_R2_Text_2
# 1153 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R5_Text_1, MSGBOX_DEFAULT
# 1154 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R5_2:
# 1148 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1149 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf::
# 1158 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_LEIDULF, ParcelHighlands_Leidulf_Text_0, ParcelHighlands_Leidulf_Text_1, ParcelHighlands_Leidulf_FirstWin
# 1162 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1163 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Leidulf_3
ParcelHighlands_Leidulf_1:
# 1166 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Leidulf_8
ParcelHighlands_Leidulf_6:
# 1169 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Leidulf_13
ParcelHighlands_Leidulf_11:
# 1172 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Leidulf_18
ParcelHighlands_Leidulf_16:
# 1175 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Leidulf_2:
# 1164 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R2
	goto ParcelHighlands_Leidulf_1

ParcelHighlands_Leidulf_3:
# 1163 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R2
	goto_if 0, ParcelHighlands_Leidulf_2
	goto ParcelHighlands_Leidulf_1

ParcelHighlands_Leidulf_7:
# 1167 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R3
	goto ParcelHighlands_Leidulf_6

ParcelHighlands_Leidulf_8:
# 1166 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R3
	goto_if 0, ParcelHighlands_Leidulf_7
	goto ParcelHighlands_Leidulf_6

ParcelHighlands_Leidulf_12:
# 1170 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R4
	goto ParcelHighlands_Leidulf_11

ParcelHighlands_Leidulf_13:
# 1169 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R4
	goto_if 0, ParcelHighlands_Leidulf_12
	goto ParcelHighlands_Leidulf_11

ParcelHighlands_Leidulf_17:
# 1173 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R5
	goto ParcelHighlands_Leidulf_16

ParcelHighlands_Leidulf_18:
# 1172 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R5
	goto_if 0, ParcelHighlands_Leidulf_17
	goto ParcelHighlands_Leidulf_16


ParcelHighlands_Leidulf_FirstWin::
# 1179 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
# 1180 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R2::
# 1184 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1185 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1186 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_0, MSGBOX_YESNO
# 1187 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R2_2
# 1192 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R2, ParcelHighlands_Leidulf_R2_Text_2
# 1193 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_3, MSGBOX_DEFAULT
# 1194 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R2_2:
# 1188 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1189 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R3::
# 1198 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1199 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1200 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R3_Text_0, MSGBOX_YESNO
# 1201 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R3_2
# 1206 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R3, ParcelHighlands_Leidulf_R3_Text_1
# 1207 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R3_Text_2, MSGBOX_DEFAULT
# 1208 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R3_2:
# 1202 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1203 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R4::
# 1212 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1213 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1214 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R4_Text_0, MSGBOX_YESNO
# 1215 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R4_2
# 1220 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R4, ParcelHighlands_Leidulf_R3_Text_1
# 1221 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R4_Text_1, MSGBOX_DEFAULT
# 1222 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R4_2:
# 1216 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1217 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R5::
# 1226 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1227 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1228 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R5_Text_0, MSGBOX_YESNO
# 1229 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R5_2
# 1234 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R5, ParcelHighlands_Leidulf_R5_Text_1
# 1235 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R5_Text_2, MSGBOX_DEFAULT
# 1236 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R5_2:
# 1230 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1231 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora::
# 1240 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_NORA, ParcelHighlands_Nora_Text_0, ParcelHighlands_Nora_Text_1, ParcelHighlands_Nora_FirstWin
# 1244 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1245 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Nora_3
ParcelHighlands_Nora_1:
# 1248 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Nora_8
ParcelHighlands_Nora_6:
# 1251 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Nora_13
ParcelHighlands_Nora_11:
# 1254 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Nora_18
ParcelHighlands_Nora_16:
# 1257 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Nora_2:
# 1246 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R2
	goto ParcelHighlands_Nora_1

ParcelHighlands_Nora_3:
# 1245 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R2
	goto_if 0, ParcelHighlands_Nora_2
	goto ParcelHighlands_Nora_1

ParcelHighlands_Nora_7:
# 1249 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R3
	goto ParcelHighlands_Nora_6

ParcelHighlands_Nora_8:
# 1248 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R3
	goto_if 0, ParcelHighlands_Nora_7
	goto ParcelHighlands_Nora_6

ParcelHighlands_Nora_12:
# 1252 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R4
	goto ParcelHighlands_Nora_11

ParcelHighlands_Nora_13:
# 1251 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R4
	goto_if 0, ParcelHighlands_Nora_12
	goto ParcelHighlands_Nora_11

ParcelHighlands_Nora_17:
# 1255 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R5
	goto ParcelHighlands_Nora_16

ParcelHighlands_Nora_18:
# 1254 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R5
	goto_if 0, ParcelHighlands_Nora_17
	goto ParcelHighlands_Nora_16


ParcelHighlands_Nora_FirstWin::
# 1261 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
# 1262 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R2::
# 1266 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1267 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1268 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_0, MSGBOX_YESNO
# 1269 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R2_2
# 1274 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R2, ParcelHighlands_Nora_R2_Text_2
# 1275 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_3, MSGBOX_DEFAULT
# 1276 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R2_2:
# 1270 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1271 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R3::
# 1280 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1281 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1282 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R3_Text_0, MSGBOX_YESNO
# 1283 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R3_2
# 1288 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R3, ParcelHighlands_Nora_R3_Text_1
# 1289 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R3_Text_2, MSGBOX_DEFAULT
# 1290 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R3_2:
# 1284 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1285 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R4::
# 1294 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1295 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1296 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R4_Text_0, MSGBOX_YESNO
# 1297 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R4_2
# 1302 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R4, ParcelHighlands_Nora_R2_Text_2
# 1303 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R4_Text_1, MSGBOX_DEFAULT
# 1304 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R4_2:
# 1298 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1299 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R5::
# 1308 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1309 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1310 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R5_Text_0, MSGBOX_YESNO
# 1311 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R5_2
# 1316 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R5, ParcelHighlands_Nora_R5_Text_1
# 1317 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R5_Text_2, MSGBOX_DEFAULT
# 1318 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R5_2:
# 1312 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1313 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder::
# 1322 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_PEDER, ParcelHighlands_Peder_Text_0, ParcelHighlands_Peder_Text_1, ParcelHighlands_Peder_FirstWin
# 1326 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1327 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Peder_3
ParcelHighlands_Peder_1:
# 1330 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Peder_8
ParcelHighlands_Peder_6:
# 1333 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Peder_13
ParcelHighlands_Peder_11:
# 1336 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Peder_18
ParcelHighlands_Peder_16:
# 1339 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Peder_2:
# 1328 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R2
	goto ParcelHighlands_Peder_1

ParcelHighlands_Peder_3:
# 1327 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R2
	goto_if 0, ParcelHighlands_Peder_2
	goto ParcelHighlands_Peder_1

ParcelHighlands_Peder_7:
# 1331 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R3
	goto ParcelHighlands_Peder_6

ParcelHighlands_Peder_8:
# 1330 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R3
	goto_if 0, ParcelHighlands_Peder_7
	goto ParcelHighlands_Peder_6

ParcelHighlands_Peder_12:
# 1334 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R4
	goto ParcelHighlands_Peder_11

ParcelHighlands_Peder_13:
# 1333 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R4
	goto_if 0, ParcelHighlands_Peder_12
	goto ParcelHighlands_Peder_11

ParcelHighlands_Peder_17:
# 1337 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R5
	goto ParcelHighlands_Peder_16

ParcelHighlands_Peder_18:
# 1336 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R5
	goto_if 0, ParcelHighlands_Peder_17
	goto ParcelHighlands_Peder_16


ParcelHighlands_Peder_FirstWin::
# 1343 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
# 1344 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R2::
# 1348 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1349 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1350 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_0, MSGBOX_YESNO
# 1351 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R2_2
# 1356 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R2, ParcelHighlands_Peder_R2_Text_2
# 1357 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_3, MSGBOX_DEFAULT
# 1358 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R2_2:
# 1352 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1353 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R3::
# 1362 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1363 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1364 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R3_Text_0, MSGBOX_YESNO
# 1365 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R3_2
# 1370 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R3, ParcelHighlands_Peder_R3_Text_1
# 1371 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R3_Text_2, MSGBOX_DEFAULT
# 1372 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R3_2:
# 1366 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1367 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R4::
# 1376 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1377 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1378 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R4_Text_0, MSGBOX_YESNO
# 1379 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R4_2
# 1384 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R4, ParcelHighlands_Peder_R4_Text_1
# 1385 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R4_Text_2, MSGBOX_DEFAULT
# 1386 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R4_2:
# 1380 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1381 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R5::
# 1390 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1391 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1392 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R5_Text_0, MSGBOX_YESNO
# 1393 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R5_2
# 1398 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R5, ParcelHighlands_Peder_R5_Text_1
# 1399 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R5_Text_2, MSGBOX_DEFAULT
# 1400 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R5_2:
# 1394 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1395 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa::
# 1404 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_RUNA, ParcelHighlands_Runa_Text_0, ParcelHighlands_Runa_Text_1, ParcelHighlands_Runa_FirstWin
# 1408 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1409 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Runa_3
ParcelHighlands_Runa_1:
# 1412 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Runa_8
ParcelHighlands_Runa_6:
# 1415 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Runa_13
ParcelHighlands_Runa_11:
# 1418 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Runa_18
ParcelHighlands_Runa_16:
# 1421 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Runa_2:
# 1410 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R2
	goto ParcelHighlands_Runa_1

ParcelHighlands_Runa_3:
# 1409 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R2
	goto_if 0, ParcelHighlands_Runa_2
	goto ParcelHighlands_Runa_1

ParcelHighlands_Runa_7:
# 1413 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R3
	goto ParcelHighlands_Runa_6

ParcelHighlands_Runa_8:
# 1412 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R3
	goto_if 0, ParcelHighlands_Runa_7
	goto ParcelHighlands_Runa_6

ParcelHighlands_Runa_12:
# 1416 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R4
	goto ParcelHighlands_Runa_11

ParcelHighlands_Runa_13:
# 1415 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R4
	goto_if 0, ParcelHighlands_Runa_12
	goto ParcelHighlands_Runa_11

ParcelHighlands_Runa_17:
# 1419 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R5
	goto ParcelHighlands_Runa_16

ParcelHighlands_Runa_18:
# 1418 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R5
	goto_if 0, ParcelHighlands_Runa_17
	goto ParcelHighlands_Runa_16


ParcelHighlands_Runa_FirstWin::
# 1425 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
# 1426 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R2::
# 1430 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1431 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1432 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_0, MSGBOX_YESNO
# 1433 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R2_2
# 1438 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R2, ParcelHighlands_Runa_R2_Text_2
# 1439 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_3, MSGBOX_DEFAULT
# 1440 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R2_2:
# 1434 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1435 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R3::
# 1444 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1445 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1446 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R3_Text_0, MSGBOX_YESNO
# 1447 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R3_2
# 1452 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R3, ParcelHighlands_Runa_R3_Text_1
# 1453 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R3_Text_2, MSGBOX_DEFAULT
# 1454 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R3_2:
# 1448 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1449 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R4::
# 1458 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1459 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1460 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R4_Text_0, MSGBOX_YESNO
# 1461 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R4_2
# 1466 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R4, ParcelHighlands_Runa_R4_Text_1
# 1467 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R4_Text_2, MSGBOX_DEFAULT
# 1468 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R4_2:
# 1462 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1463 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R5::
# 1472 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1473 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1474 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R5_Text_0, MSGBOX_YESNO
# 1475 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R5_2
# 1480 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R5, ParcelHighlands_Runa_R3_Text_1
# 1481 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R5_Text_1, MSGBOX_DEFAULT
# 1482 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R5_2:
# 1476 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1477 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri::
# 1486 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SIRI, ParcelHighlands_Siri_Text_0, ParcelHighlands_Siri_Text_1, ParcelHighlands_Siri_FirstWin
# 1490 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1491 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Siri_3
ParcelHighlands_Siri_1:
# 1494 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Siri_8
ParcelHighlands_Siri_6:
# 1497 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Siri_13
ParcelHighlands_Siri_11:
# 1500 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Siri_18
ParcelHighlands_Siri_16:
# 1503 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Siri_2:
# 1492 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R2
	goto ParcelHighlands_Siri_1

ParcelHighlands_Siri_3:
# 1491 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R2
	goto_if 0, ParcelHighlands_Siri_2
	goto ParcelHighlands_Siri_1

ParcelHighlands_Siri_7:
# 1495 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R3
	goto ParcelHighlands_Siri_6

ParcelHighlands_Siri_8:
# 1494 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R3
	goto_if 0, ParcelHighlands_Siri_7
	goto ParcelHighlands_Siri_6

ParcelHighlands_Siri_12:
# 1498 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R4
	goto ParcelHighlands_Siri_11

ParcelHighlands_Siri_13:
# 1497 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R4
	goto_if 0, ParcelHighlands_Siri_12
	goto ParcelHighlands_Siri_11

ParcelHighlands_Siri_17:
# 1501 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R5
	goto ParcelHighlands_Siri_16

ParcelHighlands_Siri_18:
# 1500 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R5
	goto_if 0, ParcelHighlands_Siri_17
	goto ParcelHighlands_Siri_16


ParcelHighlands_Siri_FirstWin::
# 1507 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
# 1508 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R2::
# 1512 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1513 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1514 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_0, MSGBOX_YESNO
# 1515 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R2_2
# 1520 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R2, ParcelHighlands_Siri_R2_Text_2
# 1521 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_3, MSGBOX_DEFAULT
# 1522 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R2_2:
# 1516 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1517 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R3::
# 1526 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1527 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1528 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R3_Text_0, MSGBOX_YESNO
# 1529 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R3_2
# 1534 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R3, ParcelHighlands_Siri_R3_Text_1
# 1535 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R3_Text_2, MSGBOX_DEFAULT
# 1536 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R3_2:
# 1530 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1531 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R4::
# 1540 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1541 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1542 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R4_Text_0, MSGBOX_YESNO
# 1543 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R4_2
# 1548 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R4, ParcelHighlands_Siri_R3_Text_1
# 1549 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R4_Text_1, MSGBOX_DEFAULT
# 1550 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R4_2:
# 1544 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1545 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R5::
# 1554 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1555 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1556 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R5_Text_0, MSGBOX_YESNO
# 1557 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R5_2
# 1562 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R5, ParcelHighlands_Siri_R5_Text_1
# 1563 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R5_Text_2, MSGBOX_DEFAULT
# 1564 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R5_2:
# 1558 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1559 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre::
# 1570 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SNORRE, ParcelHighlands_T_Snorre_Text_0, ParcelHighlands_T_Snorre_Text_1, ParcelHighlands_T_Snorre_FirstWin
# 1574 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1575 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Snorre_3
ParcelHighlands_T_Snorre_1:
# 1578 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Snorre_8
ParcelHighlands_T_Snorre_6:
# 1581 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Snorre_13
ParcelHighlands_T_Snorre_11:
# 1584 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Snorre_18
ParcelHighlands_T_Snorre_16:
# 1587 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Snorre_2:
# 1576 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R2
	goto ParcelHighlands_T_Snorre_1

ParcelHighlands_T_Snorre_3:
# 1575 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R2
	goto_if 0, ParcelHighlands_T_Snorre_2
	goto ParcelHighlands_T_Snorre_1

ParcelHighlands_T_Snorre_7:
# 1579 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R3
	goto ParcelHighlands_T_Snorre_6

ParcelHighlands_T_Snorre_8:
# 1578 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R3
	goto_if 0, ParcelHighlands_T_Snorre_7
	goto ParcelHighlands_T_Snorre_6

ParcelHighlands_T_Snorre_12:
# 1582 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R4
	goto ParcelHighlands_T_Snorre_11

ParcelHighlands_T_Snorre_13:
# 1581 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R4
	goto_if 0, ParcelHighlands_T_Snorre_12
	goto ParcelHighlands_T_Snorre_11

ParcelHighlands_T_Snorre_17:
# 1585 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R5
	goto ParcelHighlands_T_Snorre_16

ParcelHighlands_T_Snorre_18:
# 1584 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R5
	goto_if 0, ParcelHighlands_T_Snorre_17
	goto ParcelHighlands_T_Snorre_16


ParcelHighlands_T_Snorre_FirstWin::
# 1591 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_Text_2, MSGBOX_DEFAULT
# 1592 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R2::
# 1596 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1597 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1598 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_0, MSGBOX_YESNO
# 1599 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R2_2
# 1604 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R2, ParcelHighlands_T_Snorre_R2_Text_2
# 1605 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_3, MSGBOX_DEFAULT
# 1606 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R2_2:
# 1600 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1601 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R3::
# 1610 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1611 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1612 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R3_Text_0, MSGBOX_YESNO
# 1613 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R3_2
# 1618 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R3, ParcelHighlands_T_Snorre_R3_Text_1
# 1619 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R3_Text_2, MSGBOX_DEFAULT
# 1620 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R3_2:
# 1614 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1615 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R4::
# 1624 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1625 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1626 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R4_Text_0, MSGBOX_YESNO
# 1627 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R4_2
# 1632 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R4, ParcelHighlands_T_Snorre_R4_Text_1
# 1633 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R4_Text_2, MSGBOX_DEFAULT
# 1634 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R4_2:
# 1628 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1629 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R5::
# 1638 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1639 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1640 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R5_Text_0, MSGBOX_YESNO
# 1641 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R5_2
# 1646 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R5, ParcelHighlands_T_Snorre_R5_Text_1
# 1647 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R5_Text_2, MSGBOX_DEFAULT
# 1648 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R5_2:
# 1642 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1643 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir::
# 1652 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_TORGEIR, ParcelHighlands_T_Torgeir_Text_0, ParcelHighlands_T_Torgeir_Text_1, ParcelHighlands_T_Torgeir_FirstWin
# 1656 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1657 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Torgeir_3
ParcelHighlands_T_Torgeir_1:
# 1660 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Torgeir_8
ParcelHighlands_T_Torgeir_6:
# 1663 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Torgeir_13
ParcelHighlands_T_Torgeir_11:
# 1666 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Torgeir_18
ParcelHighlands_T_Torgeir_16:
# 1669 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Torgeir_2:
# 1658 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R2
	goto ParcelHighlands_T_Torgeir_1

ParcelHighlands_T_Torgeir_3:
# 1657 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R2
	goto_if 0, ParcelHighlands_T_Torgeir_2
	goto ParcelHighlands_T_Torgeir_1

ParcelHighlands_T_Torgeir_7:
# 1661 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R3
	goto ParcelHighlands_T_Torgeir_6

ParcelHighlands_T_Torgeir_8:
# 1660 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R3
	goto_if 0, ParcelHighlands_T_Torgeir_7
	goto ParcelHighlands_T_Torgeir_6

ParcelHighlands_T_Torgeir_12:
# 1664 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R4
	goto ParcelHighlands_T_Torgeir_11

ParcelHighlands_T_Torgeir_13:
# 1663 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R4
	goto_if 0, ParcelHighlands_T_Torgeir_12
	goto ParcelHighlands_T_Torgeir_11

ParcelHighlands_T_Torgeir_17:
# 1667 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R5
	goto ParcelHighlands_T_Torgeir_16

ParcelHighlands_T_Torgeir_18:
# 1666 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R5
	goto_if 0, ParcelHighlands_T_Torgeir_17
	goto ParcelHighlands_T_Torgeir_16


ParcelHighlands_T_Torgeir_FirstWin::
# 1673 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_Text_2, MSGBOX_DEFAULT
# 1674 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R2::
# 1678 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1679 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1680 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_0, MSGBOX_YESNO
# 1681 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R2_2
# 1686 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R2, ParcelHighlands_T_Torgeir_R2_Text_2
# 1687 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_3, MSGBOX_DEFAULT
# 1688 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R2_2:
# 1682 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1683 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R3::
# 1692 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1693 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1694 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R3_Text_0, MSGBOX_YESNO
# 1695 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R3_2
# 1700 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R3, ParcelHighlands_T_Torgeir_R2_Text_2
# 1701 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R3_Text_1, MSGBOX_DEFAULT
# 1702 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R3_2:
# 1696 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1697 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R4::
# 1706 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1707 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1708 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R4_Text_0, MSGBOX_YESNO
# 1709 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R4_2
# 1714 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R4, ParcelHighlands_T_Torgeir_R4_Text_1
# 1715 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R4_Text_2, MSGBOX_DEFAULT
# 1716 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R4_2:
# 1710 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1711 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R5::
# 1720 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1721 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1722 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R5_Text_0, MSGBOX_YESNO
# 1723 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R5_2
# 1728 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R5, ParcelHighlands_T_Torgeir_R5_Text_1
# 1729 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R5_Text_2, MSGBOX_DEFAULT
# 1730 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R5_2:
# 1724 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1725 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig::
# 1734 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HEDVIG, ParcelHighlands_T_Hedvig_Text_0, ParcelHighlands_T_Hedvig_Text_1, ParcelHighlands_T_Hedvig_FirstWin
# 1738 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1739 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Hedvig_3
ParcelHighlands_T_Hedvig_1:
# 1742 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Hedvig_8
ParcelHighlands_T_Hedvig_6:
# 1745 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Hedvig_13
ParcelHighlands_T_Hedvig_11:
# 1748 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Hedvig_18
ParcelHighlands_T_Hedvig_16:
# 1751 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Hedvig_2:
# 1740 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R2
	goto ParcelHighlands_T_Hedvig_1

ParcelHighlands_T_Hedvig_3:
# 1739 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R2
	goto_if 0, ParcelHighlands_T_Hedvig_2
	goto ParcelHighlands_T_Hedvig_1

ParcelHighlands_T_Hedvig_7:
# 1743 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R3
	goto ParcelHighlands_T_Hedvig_6

ParcelHighlands_T_Hedvig_8:
# 1742 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R3
	goto_if 0, ParcelHighlands_T_Hedvig_7
	goto ParcelHighlands_T_Hedvig_6

ParcelHighlands_T_Hedvig_12:
# 1746 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R4
	goto ParcelHighlands_T_Hedvig_11

ParcelHighlands_T_Hedvig_13:
# 1745 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R4
	goto_if 0, ParcelHighlands_T_Hedvig_12
	goto ParcelHighlands_T_Hedvig_11

ParcelHighlands_T_Hedvig_17:
# 1749 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R5
	goto ParcelHighlands_T_Hedvig_16

ParcelHighlands_T_Hedvig_18:
# 1748 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R5
	goto_if 0, ParcelHighlands_T_Hedvig_17
	goto ParcelHighlands_T_Hedvig_16


ParcelHighlands_T_Hedvig_FirstWin::
# 1755 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_Text_2, MSGBOX_DEFAULT
# 1756 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R2::
# 1760 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1761 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1762 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_0, MSGBOX_YESNO
# 1763 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R2_2
# 1768 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R2, ParcelHighlands_T_Hedvig_R2_Text_2
# 1769 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_3, MSGBOX_DEFAULT
# 1770 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R2_2:
# 1764 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1765 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R3::
# 1774 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1775 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1776 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R3_Text_0, MSGBOX_YESNO
# 1777 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R3_2
# 1782 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R3, ParcelHighlands_T_Hedvig_R3_Text_1
# 1783 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R3_Text_2, MSGBOX_DEFAULT
# 1784 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R3_2:
# 1778 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1779 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R4::
# 1788 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1789 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1790 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R4_Text_0, MSGBOX_YESNO
# 1791 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R4_2
# 1796 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R4, ParcelHighlands_T_Hedvig_R4_Text_1
# 1797 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R4_Text_2, MSGBOX_DEFAULT
# 1798 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R4_2:
# 1792 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1793 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R5::
# 1802 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1803 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1804 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R5_Text_0, MSGBOX_YESNO
# 1805 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R5_2
# 1810 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R5, ParcelHighlands_T_Hedvig_R4_Text_1
# 1811 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R5_Text_1, MSGBOX_DEFAULT
# 1812 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R5_2:
# 1806 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1807 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_PerrinScene::
# 1818 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_5, ParcelHighlands_PerrinScene_2
# 1822 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 1823 "data/maps/ParcelHighlands/scripts.pory"
	playse SE_PIN
# 1824 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1825 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1826 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 35, Movement_ParcelHighlands_PerrinIn
# 1827 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 1828 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1829 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_5, ParcelHighlands_PerrinScene_Text_2
# 1830 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1831 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1832 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 35, Movement_ParcelHighlands_PerrinOut
# 1833 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 1834 "data/maps/ParcelHighlands/scripts.pory"
	removeobject 35
# 1835 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_PERRIN_5
# 1836 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1837 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_PerrinScene_2:
# 1819 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelHighlands_PerrinTalk::
# 1841 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1842 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1843 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1844 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


# 1847 "data/maps/ParcelHighlands/scripts.pory"
Movement_ParcelHighlands_PerrinIn:
# 1847 "data/maps/ParcelHighlands/scripts.pory"
	walk_down
# 1847 "data/maps/ParcelHighlands/scripts.pory"
	walk_down
	step_end

# 1848 "data/maps/ParcelHighlands/scripts.pory"
Movement_ParcelHighlands_PerrinOut:
# 1848 "data/maps/ParcelHighlands/scripts.pory"
	walk_up
# 1848 "data/maps/ParcelHighlands/scripts.pory"
	walk_up
	step_end

ParcelHighlands_Epilogue::
# 1852 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 1853 "data/maps/ParcelHighlands/scripts.pory"
	delay 20
# 1854 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Epilogue_Text_0, MSGBOX_DEFAULT
# 1855 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1856 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 5
# 1857 "data/maps/ParcelHighlands/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 13, 13
# 1858 "data/maps/ParcelHighlands/scripts.pory"
	waitstate
	end


ParcelHighlands_GymVale_Rematch::
# 1864 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1865 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1866 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_0, MSGBOX_YESNO
# 1867 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_GymVale_Rematch_2
# 1872 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5_R, ParcelHighlands_GymVale_Rematch_Text_2
# 1873 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_3, MSGBOX_DEFAULT
# 1874 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_GymVale_Rematch_2:
# 1868 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_1, MSGBOX_DEFAULT
# 1869 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Mareep::
# 1879 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_MAREEP, ParcelHighlands_Mareep_2
# 1882 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Mareep_Text_0, MSGBOX_SIGN
# 1883 "data/maps/ParcelHighlands/scripts.pory"
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
# 178 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Core samples go down to\n"
	.string "the coast office twice a week. The bore\l"
	.string "log says 'exploratory'. The bore log's a\l"
	.string "form. Forms say what's printed on them.$"

ParcelHighlands_Homesteader_Text_0:
# 188 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: SHIFTED, you wrote, and\n"
	.string "the hearing wrote it after you. The\l"
	.string "ground didn't hear. The leases did.\l"
	.string "Pending survey, they say. I'll be here\l"
	.string "for the survey.$"

ParcelHighlands_Homesteader_Text_1:
# 197 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You said it. SHIFTED.\n"
	.string "First one of your lot who didn't say\l"
	.string "'transitioning'.\p"
	.string "Take this. The SWINUB laid it in the\n"
	.string "spring. There won't be another born up\l"
	.string "here. Hatch it somewhere with a winter.$"

ParcelHighlands_Homesteader_Text_2:
# 200 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Your belt's full. Come\n"
	.string "back with room. It'll keep. It's the only\l"
	.string "thing up here that will.$"

ParcelHighlands_Homesteader_Text_3:
# 206 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Don't name it after me.\n"
	.string "Name it after the slope.$"

ParcelHighlands_Homesteader_Text_4:
# 211 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Somewhere with a winter.\n"
	.string "You promised.$"

ParcelHighlands_Homesteader_Text_5:
# 215 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Another log. It'll sit\n"
	.string "crooked. Everything does, up here, now.$"

ParcelHighlands_Homesteader_Text_6:
# 219 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You're not from the\n"
	.string "company. Good. I'm tired of being\l"
	.string "adapted at.\p"
	.string "Eight generations of us wintered this\n"
	.string "slope. You knew where you stood. The\l"
	.string "ground held, the cold came, the cold\l"
	.string "went, the ground held again.$"

ParcelHighlands_Homesteader_Text_7:
# 220 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Now the ground breathes.\n"
	.string "The doors won't shut true. The near\l"
	.string "corner's a hand's depth into the mud\l"
	.string "since spring. The well runs brown in a\l"
	.string "month it never ran brown.$"

ParcelHighlands_Homesteader_Text_8:
# 221 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: The FOUNDATION's grant\n"
	.string "will move me somewhere warm and write\l"
	.string "'resilience' on the cheque. The young\l"
	.string "ones already signed. I don't blame them.\p"
	.string "The ground is dying. They call it\n"
	.string "opportunity. I call it leaving.$"

ParcelHighlands_Hale_Text_0:
# 232 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record and the\n"
	.string "record kept the mountain, for a season.\l"
	.string "That's the whole of the work up here.\l"
	.string "Seasons. One at a time.$"

ParcelHighlands_Hale_Text_1:
# 237 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record. That's the\n"
	.string "whole of the work up here.\p"
	.string "Someday someone reads it and knows\n"
	.string "exactly what was lost, and when, and\l"
	.string "who was smiling while it went.$"

ParcelHighlands_Hale_Text_2:
# 245 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: The sunk ponds. The drunk trees.\n"
	.string "The band ILEX measures. The lowlander\l"
	.string "in the scree. The drill. The woman who\l"
	.string "won't take the grant.\p"
	.string "Name it.$"

ParcelHighlands_Hale_Text_3:
# 247 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: SHIFTED.\p"
	.string "The frozen ground was the keystone,\n"
	.string "and it's going. The cold guild is gone\l"
	.string "from everywhere but that last ring.\l"
	.string "What moves in is whatever moves in\l"
	.string "anywhere. A poorer place, settling into\l"
	.string "being poorer.$"

ParcelHighlands_Hale_Text_4:
# 248 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: So what do we DO. There has\n"
	.string "to be something.$"

ParcelHighlands_Hale_Text_5:
# 249 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There isn't. Not here. You cannot\n"
	.string "refreeze a mountain.\p"
	.string "The runoff you can slow. The cut you\n"
	.string "can fight. This you cannot put back.\l"
	.string "It's the first time you'll have stood\l"
	.string "somewhere and known that for certain.$"

ParcelHighlands_Hale_Text_6:
# 250 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: So the work changes. Not save it.\n"
	.string "WITNESS it. Record it true, name the\l"
	.string "hand that's on it, and carry that down\l"
	.string "to a place you still can save.\p"
	.string "That's not surrender. Surrender is\n"
	.string "letting them file this as 'adaptation'\l"
	.string "and signing underneath.$"

ParcelHighlands_Hale_Text_7:
# 253 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Highland Certification. The\n"
	.string "hardest one to earn, because there's\l"
	.string "nothing to fix and you had to say so.$"

ParcelHighlands_Hale_Text_8:
# 259 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There's a ferry to DELIBIRD ISLE\n"
	.string "from SALTWICK when your legs are under\l"
	.string "you. They hold a festival out there, on\l"
	.string "ground exactly like this.\p"
	.string "Go and see what people do with grief\n"
	.string "when they've agreed, together, not to\l"
	.string "name it.$"

ParcelHighlands_Hale_Text_9:
# 263 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Don't name it from up here,\n"
	.string "looking down. Walk it first. The thaw\l"
	.string "ponds, the leaning trees, the band ILEX\l"
	.string "works, the drill, the lowlander that's\l"
	.string "moved in, the holdout who won't go.\p"
	.string "Then come back and tell me what it is.$"

ParcelHighlands_SignSummit_Text_0:
# 285 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL SUMMIT. 1,140 m.\p"
	.string "Corps survey point. Red cloth marks the\n"
	.string "cold band. Do not move the stakes.$"

ParcelHighlands_SignCentre_Text_0:
# 289 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL WARMING CENTRE -- a MEREHOLT\n"
	.string "FOUNDATION community partnership.\p"
	.string "Forty beds. Relocation advice daily.\n"
	.string "Opened by H. AUNE.$"

ParcelHighlands_SurveyorTrainer_Text_0:
# 296 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: FOUNDATION crew. You'll be the\n"
	.string "RANGER poking at our boreholes.\p"
	.string "Keep it sporting. Mons, not paperwork.$"

ParcelHighlands_SurveyorTrainer_Text_1:
# 297 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Tch. Fine. You're not wrong about\n"
	.string "the ground. I just get paid not to write\l"
	.string "it down.$"

ParcelHighlands_SurveyorTrainer_Text_2:
# 312 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Off the record? I've moved my\n"
	.string "stakes up the slope three years\l"
	.string "running. Same line your ILEX works.\p"
	.string "We measure the same thing. They just\n"
	.string "pay me to call it opportunity.$"

ParcelHighlands_SurveyorTrainer_R2_Text_0:
# 323 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelHighlands_SurveyorTrainer_R2_Text_1:
# 325 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Fine. Same spot.$"

ParcelHighlands_SurveyorTrainer_R2_Text_2:
# 329 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: That's the one I wanted to see.$"

ParcelHighlands_SurveyorTrainer_R2_Text_3:
# 330 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_SurveyorTrainer_R3_Text_0:
# 337 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_SurveyorTrainer_R3_Text_1:
# 343 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: …Fair.$"

ParcelHighlands_SurveyorTrainer_R3_Text_2:
# 344 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_SurveyorTrainer_R4_Text_0:
# 351 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_SurveyorTrainer_R4_Text_1:
# 357 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Right. That's the whole of it.$"

ParcelHighlands_SurveyorTrainer_R4_Text_2:
# 358 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_SurveyorTrainer_R5_Text_0:
# 365 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_SurveyorTrainer_R5_Text_1:
# 372 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_ValeGate_Text_0:
# 384 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: That's far enough.$"

ParcelHighlands_ValeGate_Text_1:
# 390 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Highland Operations. Past this\n"
	.string "point the ground is no longer ours to\l"
	.string "fix. Only to clear people off of, in\l"
	.string "order.\p"
	.string "Nobody goes up this slope on my ledger\n"
	.string "unproven. Show me you've earned the\l"
	.string "meltwater permit.$"

ParcelHighlands_ValeGate_Text_2:
# 391 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. You go up with it\n"
	.string "signed.$"

ParcelHighlands_ValeGate_Text_3:
# 394 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Vale clearance. Line item 05. The\n"
	.string "last one Highland Operations issues\l"
	.string "before the water.\p"
	.string "It certifies you fit to cross what the\n"
	.string "thaw has put in the way.$"

ParcelHighlands_ValeGate_Text_4:
# 396 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: SURF. A meltwater permit, in plain\n"
	.string "terms. It moves you over the standing\l"
	.string "thaw the slope keeps making.\p"
	.string "There's more of it every season. We\n"
	.string "don't advertise that.$"

ParcelHighlands_GymVale_Text_0:
# 410 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The ferry runs from the lowland\n"
	.string "landing. Take what you witnessed here\l"
	.string "with you. It's the only thing that\l"
	.string "leaves this slope unspoiled.$"

ParcelHighlands_Asbjorn_Text_0:
# 421 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The foothills are the easy\n"
	.string "bit. Enjoy them. Battle?$"

ParcelHighlands_Asbjorn_Text_1:
# 422 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Easy bit's over.$"

ParcelHighlands_Asbjorn_Text_2:
# 437 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The trail above the homestead\n"
	.string "went last night. Rocks, boulders. The\l"
	.string "FOUNDATION crew looked at it and went\l"
	.string "for coffee.$"

ParcelHighlands_Asbjorn_R2_Text_0:
# 448 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Asbjorn_R2_Text_1:
# 450 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: No hurry. The water keeps.$"

ParcelHighlands_Asbjorn_R2_Text_2:
# 454 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Noted. Properly, this time.$"

ParcelHighlands_Asbjorn_R2_Text_3:
# 455 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Asbjorn_R3_Text_0:
# 462 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_Asbjorn_R3_Text_1:
# 468 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Right. That's the whole of it.$"

ParcelHighlands_Asbjorn_R3_Text_2:
# 469 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Asbjorn_R4_Text_0:
# 476 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Asbjorn_R4_Text_1:
# 482 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: …Again, then. Later.$"

ParcelHighlands_Asbjorn_R4_Text_2:
# 483 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Asbjorn_R5_Text_0:
# 490 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Asbjorn_R5_Text_1:
# 497 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Brynjar_Text_0:
# 503 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: My NUMEL likes the ground up\n"
	.string "here. It's warm. It shouldn't be warm.\l"
	.string "Battle.$"

ParcelHighlands_Brynjar_Text_1:
# 504 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Still warm.$"

ParcelHighlands_Brynjar_Text_2:
# 519 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Warm ground, cold air. Camp on\n"
	.string "it and you wake up in a puddle that\l"
	.string "wasn't there.$"

ParcelHighlands_Brynjar_R2_Text_0:
# 530 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlands_Brynjar_R2_Text_1:
# 532 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: No hurry. The water keeps.$"

ParcelHighlands_Brynjar_R2_Text_2:
# 536 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: …Fair.$"

ParcelHighlands_Brynjar_R2_Text_3:
# 537 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Brynjar_R3_Text_0:
# 544 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_Brynjar_R3_Text_1:
# 550 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: …Again, then. Later.$"

ParcelHighlands_Brynjar_R3_Text_2:
# 551 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Brynjar_R4_Text_0:
# 558 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Brynjar_R4_Text_1:
# 565 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Brynjar_R5_Text_0:
# 572 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlands_Brynjar_R5_Text_1:
# 579 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Dagny_Text_0:
# 585 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: I visit the old woman. Somebody\n"
	.string "should. She won't take the grant, so\l"
	.string "they've stopped visiting. Battle first.$"

ParcelHighlands_Dagny_Text_1:
# 586 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: She'll like you. She doesn't like\n"
	.string "anyone.$"

ParcelHighlands_Dagny_Text_2:
# 601 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They built the warming centre at\n"
	.string "the bottom of the hill so she'd have\l"
	.string "somewhere to go. She hasn't gone.$"

ParcelHighlands_Dagny_R2_Text_0:
# 612 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlands_Dagny_R2_Text_1:
# 614 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Fine. Same spot.$"

ParcelHighlands_Dagny_R2_Text_2:
# 618 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: That's the one I wanted to see.$"

ParcelHighlands_Dagny_R2_Text_3:
# 619 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Dagny_R3_Text_0:
# 626 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_Dagny_R3_Text_1:
# 633 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Dagny_R4_Text_0:
# 640 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlands_Dagny_R4_Text_1:
# 647 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Dagny_R5_Text_0:
# 654 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Dagny_R5_Text_1:
# 660 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: …Again, then. Later.$"

ParcelHighlands_Dagny_R5_Text_2:
# 661 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_Eivind_Text_0:
# 667 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Three GEODUDE from the slide.\n"
	.string "The slide gave them up for free. Battle.$"

ParcelHighlands_Eivind_Text_1:
# 668 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The slide gives. The slide\n"
	.string "takes.$"

ParcelHighlands_Eivind_Text_2:
# 683 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The rock up here used to be\n"
	.string "frozen into the hill. Now it's just lying\l"
	.string "on it.$"

ParcelHighlands_Eivind_R2_Text_0:
# 694 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Eivind_R2_Text_1:
# 696 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: No hurry. The water keeps.$"

ParcelHighlands_Eivind_R2_Text_2:
# 700 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Right. That's the whole of it.$"

ParcelHighlands_Eivind_R2_Text_3:
# 701 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Eivind_R3_Text_0:
# 708 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Eivind_R3_Text_1:
# 714 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: …Again, then. Later.$"

ParcelHighlands_Eivind_R3_Text_2:
# 715 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Eivind_R4_Text_0:
# 722 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Eivind_R4_Text_1:
# 729 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_Eivind_R5_Text_0:
# 736 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Eivind_R5_Text_1:
# 742 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Noted. Properly, this time.$"

ParcelHighlands_Eivind_R5_Text_2:
# 743 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Finn_Text_0:
# 749 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: SWELLOW nest on the cliffs now.\n"
	.string "They never used to come this high.\l"
	.string "Battle!$"

ParcelHighlands_Finn_Text_1:
# 750 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Never used to lose, either.$"

ParcelHighlands_Finn_Text_2:
# 765 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: New birds, new rats, new\n"
	.string "everything. Old woman says it's the end\l"
	.string "of the world. I think it's just a\l"
	.string "different world. Is that worse?$"

ParcelHighlands_Finn_R2_Text_0:
# 776 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlands_Finn_R2_Text_1:
# 778 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: No hurry. The water keeps.$"

ParcelHighlands_Finn_R2_Text_2:
# 782 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Noted. Properly, this time.$"

ParcelHighlands_Finn_R2_Text_3:
# 783 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Finn_R3_Text_0:
# 790 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelHighlands_Finn_R3_Text_1:
# 797 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Finn_R4_Text_0:
# 804 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Finn_R4_Text_1:
# 810 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: …Again, then. Later.$"

ParcelHighlands_Finn_R4_Text_2:
# 811 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Finn_R5_Text_0:
# 818 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelHighlands_Finn_R5_Text_1:
# 824 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: That's the one I wanted to see.$"

ParcelHighlands_Finn_R5_Text_2:
# 825 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlands_Grete_Text_0:
# 831 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Cadet GRETE. ILEX has me on the\n"
	.string "lower stakes. Spar, then I'll tell you\l"
	.string "where she is.$"

ParcelHighlands_Grete_Text_1:
# 832 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: She's on the plateau. The band.\n"
	.string "You'll know it when you see the cloth.$"

ParcelHighlands_Grete_Text_2:
# 847 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: ILEX doesn't come down for days.\n"
	.string "She says the band moves at night and\l"
	.string "somebody should be there.$"

ParcelHighlands_Grete_R2_Text_0:
# 858 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelHighlands_Grete_R2_Text_1:
# 860 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Another time, then.$"

ParcelHighlands_Grete_R2_Text_2:
# 864 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Right. That's the whole of it.$"

ParcelHighlands_Grete_R2_Text_3:
# 865 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Grete_R3_Text_0:
# 872 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlands_Grete_R3_Text_1:
# 879 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Grete_R4_Text_0:
# 886 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Grete_R4_Text_1:
# 892 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Still yours.$"

ParcelHighlands_Grete_R4_Text_2:
# 893 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Grete_R5_Text_0:
# 900 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Grete_R5_Text_1:
# 907 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Hauk_Text_0:
# 913 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: FOUNDATION bore crew. Off shift.\n"
	.string "I'll battle, but I won't talk about the\l"
	.string "core samples.$"

ParcelHighlands_Hauk_Text_1:
# 914 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fine. There's gas in the core.\n"
	.string "That's all. Everyone knows.$"

ParcelHighlands_Hauk_Text_2:
# 929 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: 'Exploratory.' You explore what\n"
	.string "you mean to take. That's what the word\l"
	.string "means.$"

ParcelHighlands_Hauk_R2_Text_0:
# 940 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelHighlands_Hauk_R2_Text_1:
# 942 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Another time, then.$"

ParcelHighlands_Hauk_R2_Text_2:
# 946 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fair.$"

ParcelHighlands_Hauk_R2_Text_3:
# 947 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Hauk_R3_Text_0:
# 954 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelHighlands_Hauk_R3_Text_1:
# 960 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Again, then. Later.$"

ParcelHighlands_Hauk_R3_Text_2:
# 961 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Hauk_R4_Text_0:
# 968 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelHighlands_Hauk_R4_Text_1:
# 974 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Noted. Properly, this time.$"

ParcelHighlands_Hauk_R4_Text_2:
# 975 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Hauk_R5_Text_0:
# 982 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Hauk_R5_Text_1:
# 988 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's the one I wanted to see.$"

ParcelHighlands_Hauk_R5_Text_2:
# 989 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_Jarle_Text_0:
# 995 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: The plateau's the top of the\n"
	.string "world. My world, anyway. Battle for it.$"

ParcelHighlands_Jarle_Text_1:
# 996 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Your world, then. Mind the\n"
	.string "stakes.$"

ParcelHighlands_Jarle_Text_2:
# 1011 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Don't move the red stakes. ILEX\n"
	.string "will know. ILEX always knows.$"

ParcelHighlands_Jarle_R2_Text_0:
# 1022 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Jarle_R2_Text_1:
# 1024 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: No hurry. The water keeps.$"

ParcelHighlands_Jarle_R2_Text_2:
# 1028 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: That's the one I wanted to see.$"

ParcelHighlands_Jarle_R2_Text_3:
# 1029 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Jarle_R3_Text_0:
# 1036 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_Jarle_R3_Text_1:
# 1042 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Noted. Properly, this time.$"

ParcelHighlands_Jarle_R3_Text_2:
# 1043 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Jarle_R4_Text_0:
# 1050 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Jarle_R4_Text_1:
# 1057 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Jarle_R5_Text_0:
# 1064 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Jarle_R5_Text_1:
# 1071 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Kjersti_Text_0:
# 1077 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds up here are new.\n"
	.string "Black water. My SNORUNT won't go near\l"
	.string "them. Battle?$"

ParcelHighlands_Kjersti_Text_1:
# 1078 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Wouldn't go near you either,\n"
	.string "now.$"

ParcelHighlands_Kjersti_Text_2:
# 1093 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds weren't on last\n"
	.string "year's map. The map's from the\l"
	.string "FOUNDATION. They print a new one every\l"
	.string "spring.$"

ParcelHighlands_Kjersti_R2_Text_0:
# 1104 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_Kjersti_R2_Text_1:
# 1106 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Fine. Same spot.$"

ParcelHighlands_Kjersti_R2_Text_2:
# 1110 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Still yours.$"

ParcelHighlands_Kjersti_R2_Text_3:
# 1111 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlands_Kjersti_R3_Text_0:
# 1118 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlands_Kjersti_R3_Text_1:
# 1125 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlands_Kjersti_R4_Text_0:
# 1132 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Kjersti_R4_Text_1:
# 1138 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: …Again, then. Later.$"

ParcelHighlands_Kjersti_R4_Text_2:
# 1139 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Kjersti_R5_Text_0:
# 1146 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Kjersti_R5_Text_1:
# 1153 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Leidulf_Text_0:
# 1159 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I came up for the cold. There's\n"
	.string "less of it than the brochure said.\l"
	.string "Battle.$"

ParcelHighlands_Leidulf_Text_1:
# 1160 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Less of that than the\n"
	.string "brochure said, too.$"

ParcelHighlands_Leidulf_Text_2:
# 1175 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The brochure's the\n"
	.string "FOUNDATION's. 'Alpine experience.' The\l"
	.string "alpine's leaving. The experience is\l"
	.string "watching it go.$"

ParcelHighlands_Leidulf_R2_Text_0:
# 1186 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlands_Leidulf_R2_Text_1:
# 1188 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_Leidulf_R2_Text_2:
# 1192 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Noted. Properly, this time.$"

ParcelHighlands_Leidulf_R2_Text_3:
# 1193 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Leidulf_R3_Text_0:
# 1200 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlands_Leidulf_R3_Text_1:
# 1206 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: …Fair.$"

ParcelHighlands_Leidulf_R3_Text_2:
# 1207 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Leidulf_R4_Text_0:
# 1214 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Leidulf_R4_Text_1:
# 1221 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Leidulf_R5_Text_0:
# 1228 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Leidulf_R5_Text_1:
# 1234 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlands_Leidulf_R5_Text_2:
# 1235 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_Nora_Text_0:
# 1241 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The mountain is thinking about\n"
	.string "falling. Slowly. Can you hear it? Battle\l"
	.string "me.$"

ParcelHighlands_Nora_Text_1:
# 1242 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: You heard it.$"

ParcelHighlands_Nora_Text_2:
# 1257 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The woman at the bore thinks\n"
	.string "loud, warm thoughts. She means every\l"
	.string "one of them. That's what frightens me.$"

ParcelHighlands_Nora_R2_Text_0:
# 1268 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelHighlands_Nora_R2_Text_1:
# 1270 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Suit yourself. I'm here.$"

ParcelHighlands_Nora_R2_Text_2:
# 1274 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Still yours.$"

ParcelHighlands_Nora_R2_Text_3:
# 1275 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Nora_R3_Text_0:
# 1282 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Nora_R3_Text_1:
# 1288 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: …Again, then. Later.$"

ParcelHighlands_Nora_R3_Text_2:
# 1289 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Nora_R4_Text_0:
# 1296 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_Nora_R4_Text_1:
# 1303 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Nora_R5_Text_0:
# 1310 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Nora_R5_Text_1:
# 1316 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Right. That's the whole of it.$"

ParcelHighlands_Nora_R5_Text_2:
# 1317 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_Peder_Text_0:
# 1323 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Nobody sees me on the rock.\n"
	.string "SNEASEL taught me. Battle.$"

ParcelHighlands_Peder_Text_1:
# 1324 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: SNEASEL would've won.$"

ParcelHighlands_Peder_Text_2:
# 1339 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: The SNEASEL are all up on the\n"
	.string "band now. Nowhere else cold enough.\l"
	.string "They don't like company. They've got no\l"
	.string "choice.$"

ParcelHighlands_Peder_R2_Text_0:
# 1350 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Peder_R2_Text_1:
# 1352 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_Peder_R2_Text_2:
# 1356 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Still yours.$"

ParcelHighlands_Peder_R2_Text_3:
# 1357 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Peder_R3_Text_0:
# 1364 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Peder_R3_Text_1:
# 1370 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: That's the one I wanted to see.$"

ParcelHighlands_Peder_R3_Text_2:
# 1371 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Peder_R4_Text_0:
# 1378 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_Peder_R4_Text_1:
# 1384 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: …Again, then. Later.$"

ParcelHighlands_Peder_R4_Text_2:
# 1385 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Peder_R5_Text_0:
# 1392 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Peder_R5_Text_1:
# 1398 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Noted. Properly, this time.$"

ParcelHighlands_Peder_R5_Text_2:
# 1399 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Runa_Text_0:
# 1405 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Cadet RUNA. I count the\n"
	.string "lowlanders. ZIGZAGOON, TAILLOW, NUMEL.\l"
	.string "New every month. Spar.$"

ParcelHighlands_Runa_Text_1:
# 1406 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Count's the same. You're not a\n"
	.string "lowlander.$"

ParcelHighlands_Runa_Text_2:
# 1421 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: ILEX says count what's arriving\n"
	.string "as carefully as what's leaving. Nobody\l"
	.string "else counts the arrivals. They look like\l"
	.string "good news.$"

ParcelHighlands_Runa_R2_Text_0:
# 1432 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Runa_R2_Text_1:
# 1434 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Suit yourself. I'm here.$"

ParcelHighlands_Runa_R2_Text_2:
# 1438 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Noted. Properly, this time.$"

ParcelHighlands_Runa_R2_Text_3:
# 1439 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Runa_R3_Text_0:
# 1446 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Runa_R3_Text_1:
# 1452 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: That's the one I wanted to see.$"

ParcelHighlands_Runa_R3_Text_2:
# 1453 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Runa_R4_Text_0:
# 1460 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_Runa_R4_Text_1:
# 1466 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Still yours.$"

ParcelHighlands_Runa_R4_Text_2:
# 1467 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Runa_R5_Text_0:
# 1474 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelHighlands_Runa_R5_Text_1:
# 1481 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlands_Siri_Text_0:
# 1487 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: My PILOSWINE was born up here.\n"
	.string "There won't be another one born up\l"
	.string "here. Battle.$"

ParcelHighlands_Siri_Text_1:
# 1488 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: It's still the strongest thing on\n"
	.string "the mountain.$"

ParcelHighlands_Siri_Text_2:
# 1503 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: The fall's loud this year. More\n"
	.string "melt. Every year the fall's loud and\l"
	.string "every year there's less snow to make it.$"

ParcelHighlands_Siri_R2_Text_0:
# 1514 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelHighlands_Siri_R2_Text_1:
# 1516 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Fine. Same spot.$"

ParcelHighlands_Siri_R2_Text_2:
# 1520 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: That's the one I wanted to see.$"

ParcelHighlands_Siri_R2_Text_3:
# 1521 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Siri_R3_Text_0:
# 1528 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlands_Siri_R3_Text_1:
# 1534 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: …Fair.$"

ParcelHighlands_Siri_R3_Text_2:
# 1535 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Siri_R4_Text_0:
# 1542 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Siri_R4_Text_1:
# 1549 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Siri_R5_Text_0:
# 1556 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Siri_R5_Text_1:
# 1562 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: …Again, then. Later.$"

ParcelHighlands_Siri_R5_Text_2:
# 1563 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_T_Snorre_Text_0:
# 1571 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: The slide took the trail. I've\n"
	.string "been sitting here deciding whether to\l"
	.string "climb it. Battle first.$"

ParcelHighlands_T_Snorre_Text_1:
# 1572 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Still deciding.$"

ParcelHighlands_T_Snorre_Text_2:
# 1587 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: ILEX went up through the\n"
	.string "scree. Alone. She's older than me and\l"
	.string "she didn't stop to decide.$"

ParcelHighlands_T_Snorre_R2_Text_0:
# 1598 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_T_Snorre_R2_Text_1:
# 1600 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Fine. Same spot.$"

ParcelHighlands_T_Snorre_R2_Text_2:
# 1604 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Still yours.$"

ParcelHighlands_T_Snorre_R2_Text_3:
# 1605 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_T_Snorre_R3_Text_0:
# 1612 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_T_Snorre_R3_Text_1:
# 1618 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Right. That's the whole of it.$"

ParcelHighlands_T_Snorre_R3_Text_2:
# 1619 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_T_Snorre_R4_Text_0:
# 1626 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_T_Snorre_R4_Text_1:
# 1632 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: …Fair.$"

ParcelHighlands_T_Snorre_R4_Text_2:
# 1633 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_T_Snorre_R5_Text_0:
# 1640 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlands_T_Snorre_R5_Text_1:
# 1646 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's the one I wanted to see.$"

ParcelHighlands_T_Snorre_R5_Text_2:
# 1647 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_T_Torgeir_Text_0:
# 1653 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Cadet TORGEIR, the low\n"
	.string "stakes. I count what's come up the\l"
	.string "slope. Spar.$"

ParcelHighlands_T_Torgeir_Text_1:
# 1654 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Counted.$"

ParcelHighlands_T_Torgeir_Text_2:
# 1669 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Every month something new\n"
	.string "arrives from the valley. Every month\l"
	.string "something old goes up to the band and\l"
	.string "doesn't come down.$"

ParcelHighlands_T_Torgeir_R2_Text_0:
# 1680 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_T_Torgeir_R2_Text_1:
# 1682 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_T_Torgeir_R2_Text_2:
# 1686 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Still yours.$"

ParcelHighlands_T_Torgeir_R2_Text_3:
# 1687 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_T_Torgeir_R3_Text_0:
# 1694 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_T_Torgeir_R3_Text_1:
# 1701 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlands_T_Torgeir_R4_Text_0:
# 1708 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlands_T_Torgeir_R4_Text_1:
# 1714 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlands_T_Torgeir_R4_Text_2:
# 1715 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_T_Torgeir_R5_Text_0:
# 1722 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_T_Torgeir_R5_Text_1:
# 1728 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Noted. Properly, this time.$"

ParcelHighlands_T_Torgeir_R5_Text_2:
# 1729 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_T_Hedvig_Text_0:
# 1735 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: ILEX measures the band in\n"
	.string "cloth. I measure it in what the\l"
	.string "mountain's thinking. It's thinking\l"
	.string "about leaving. Battle.$"

ParcelHighlands_T_Hedvig_Text_1:
# 1736 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: It's still thinking.$"

ParcelHighlands_T_Hedvig_Text_2:
# 1751 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: The woman at the bore means\n"
	.string "every warm word. That's what makes her\l"
	.string "cold.$"

ParcelHighlands_T_Hedvig_R2_Text_0:
# 1762 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_T_Hedvig_R2_Text_1:
# 1764 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Suit yourself. I'm here.$"

ParcelHighlands_T_Hedvig_R2_Text_2:
# 1768 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Right. That's the whole of it.$"

ParcelHighlands_T_Hedvig_R2_Text_3:
# 1769 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlands_T_Hedvig_R3_Text_0:
# 1776 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_T_Hedvig_R3_Text_1:
# 1782 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Noted. Properly, this time.$"

ParcelHighlands_T_Hedvig_R3_Text_2:
# 1783 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_T_Hedvig_R4_Text_0:
# 1790 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_T_Hedvig_R4_Text_1:
# 1796 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Still yours.$"

ParcelHighlands_T_Hedvig_R4_Text_2:
# 1797 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_T_Hedvig_R5_Text_0:
# 1804 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_T_Hedvig_R5_Text_1:
# 1811 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_PerrinScene_Text_0:
# 1824 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelHighlands_PerrinScene_Text_1:
# 1828 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: HOLLIS says hello. HOLLIS says\n"
	.string "you're 'thorough'. She said it like a\l"
	.string "diagnosis.\p"
	.string "I'm on the relocation team. We moved\n"
	.string "eleven families down the hill this\l"
	.string "month. ELEVEN. What did your notebook\l"
	.string "move? Battle.$"

ParcelHighlands_PerrinScene_Text_2:
# 1829 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: …Eleven's still eleven.$"

ParcelHighlands_PerrinScene_Text_3:
# 1830 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: The old woman won't go. I've\n"
	.string "been up to her door four times. She asks\l"
	.string "after you.\p"
	.string "Nobody asks after me. That's not a\n"
	.string "complaint. I'm just saying it out loud\l"
	.string "once.$"

ParcelHighlands_PerrinTalk_Text_0:
# 1843 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelHighlands_Epilogue_Text_0:
# 1854 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL. The bore is capped. Enjoined\n"
	.string "pending survey, and the survey is\l"
	.string "yours. The leases wait on it. The ground\l"
	.string "doesn't.\p"
	.string "The warming centre stays open past\n"
	.string "midnight now. HOLLIS cut the ribbon.\l"
	.string "It's still warm.$"

ParcelHighlands_GymVale_Rematch_Text_0:
# 1866 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: You went up with it signed, and\n"
	.string "the slope held. Mostly.\p"
	.string "I'd see what the cold made of you since.\n"
	.string "Full strength. Not a gate. Yes?$"

ParcelHighlands_GymVale_Rematch_Text_1:
# 1868 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Then mind the slope.$"

ParcelHighlands_GymVale_Rematch_Text_2:
# 1872 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. There's nothing above\n"
	.string "this to clear, so take that as the word.$"

ParcelHighlands_GymVale_Rematch_Text_3:
# 1873 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The slope's here when you are.$"

ParcelHighlands_Mareep_Text_0:
# 1882 "data/maps/ParcelHighlands/scripts.pory"
	.string "A MAREEP on the scree above the slide,\n"
	.string "legs braced, wool full of grit. It looks\l"
	.string "at you.\p"
	.string "It is not coming down. It is, very\n"
	.string "definitely, standing.$"
