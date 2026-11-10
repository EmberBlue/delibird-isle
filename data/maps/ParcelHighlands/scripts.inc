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
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_Ilex_2
# 127 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Ilex_5
# 132 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 133 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 2
# 134 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 135 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Ilex_8
# 140 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_3, MSGBOX_DEFAULT
# 141 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_4, MSGBOX_DEFAULT
# 142 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_5, MSGBOX_DEFAULT
# 143 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_6, MSGBOX_DEFAULT
# 144 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 145 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_2:
# 123 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_0, MSGBOX_DEFAULT
# 124 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_5:
# 128 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_8:
# 136 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_2, MSGBOX_DEFAULT
# 137 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hollis::
# 151 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 152 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 153 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_Hollis_2
# 158 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Hollis_5
# 163 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 164 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 7
# 165 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 166 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Hollis_8
# 171 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_3, MSGBOX_DEFAULT
# 172 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_4, MSGBOX_DEFAULT
# 173 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_5, MSGBOX_DEFAULT
# 174 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_6, MSGBOX_DEFAULT
# 175 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_7, MSGBOX_DEFAULT
# 176 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 177 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_2:
# 154 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_0, MSGBOX_DEFAULT
# 155 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_5:
# 159 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_1, MSGBOX_DEFAULT
# 160 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_8:
# 167 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_2, MSGBOX_DEFAULT
# 168 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_HollisTech::
# 181 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 182 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 183 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_HollisTech_2
# 188 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_HollisTech_5
# 193 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_COASTAL_CERT, ParcelHighlands_HollisTech_8
# 198 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_3, MSGBOX_DEFAULT
# 199 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_HollisTech_2:
# 184 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_0, MSGBOX_DEFAULT
# 185 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_HollisTech_5:
# 189 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_1, MSGBOX_DEFAULT
# 190 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_HollisTech_8:
# 194 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_HollisTech_Text_2, MSGBOX_DEFAULT
# 195 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Homesteader::
# 205 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 206 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 207 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_Homesteader_3
ParcelHighlands_Homesteader_1:
# 212 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FROST, ParcelHighlands_Homesteader_10
ParcelHighlands_Homesteader_9:
# 222 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FROST_DONE, ParcelHighlands_Homesteader_8
# 228 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Homesteader_14
# 233 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 234 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 5
# 235 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 236 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Homesteader_21
# 260 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_10, MSGBOX_DEFAULT
# 261 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_11, MSGBOX_DEFAULT
# 262 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_12, MSGBOX_DEFAULT
# 263 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 264 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_2:
# 208 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_0, MSGBOX_DEFAULT
# 209 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_3:
# 207 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FROST_DONE, ParcelHighlands_Homesteader_2
	goto ParcelHighlands_Homesteader_1

ParcelHighlands_Homesteader_7:
# 213 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FROST_FOUND, ParcelHighlands_Homesteader_17
# 218 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_2, MSGBOX_DEFAULT
ParcelHighlands_Homesteader_16:
# 220 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_8:
# 223 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_3, MSGBOX_DEFAULT
# 224 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_FROST
# 225 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_10:
# 212 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FROST_DONE, ParcelHighlands_Homesteader_7
	goto ParcelHighlands_Homesteader_9

ParcelHighlands_Homesteader_14:
# 229 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_4, MSGBOX_DEFAULT
# 230 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_17:
# 214 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_1, MSGBOX_DEFAULT
# 215 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 216 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_FROST_DONE
	goto ParcelHighlands_Homesteader_16

ParcelHighlands_Homesteader_21:
# 237 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Homesteader_25
ParcelHighlands_Homesteader_23:
# 251 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_HL_EGG_GIVEN, ParcelHighlands_Homesteader_29
# 256 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_9, MSGBOX_DEFAULT
# 257 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_24:
# 238 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_5, MSGBOX_DEFAULT
# 239 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 240 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Homesteader_32
# 245 "data/maps/ParcelHighlands/scripts.pory"
	giveegg SPECIES_SWINUB
# 246 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_HL_EGG_GIVEN
# 247 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_7, MSGBOX_DEFAULT
# 248 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_25:
# 237 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_HL_EGG_GIVEN, ParcelHighlands_Homesteader_24
	goto ParcelHighlands_Homesteader_23

ParcelHighlands_Homesteader_29:
# 252 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_8, MSGBOX_DEFAULT
# 253 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_32:
# 241 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_6, MSGBOX_DEFAULT
# 242 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hale::
# 270 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 271 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 272 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_Hale_2
# 277 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Hale_5
# 282 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Hale_8
# 287 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 288 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 63
# 289 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 290 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Hale_11
# 309 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_10, MSGBOX_DEFAULT
# 310 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_2:
# 273 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_0, MSGBOX_DEFAULT
# 274 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_5:
# 278 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_8:
# 283 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_2, MSGBOX_DEFAULT
# 284 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_11:
# 291 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_3, MSGBOX_DEFAULT
# 292 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyHighlands
# 293 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_4, MSGBOX_DEFAULT
# 294 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_5, MSGBOX_DEFAULT
# 295 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_6, MSGBOX_DEFAULT
# 296 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_7, MSGBOX_DEFAULT
# 297 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 6
# 298 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 299 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_8, MSGBOX_DEFAULT
# 300 "data/maps/ParcelHighlands/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 301 "data/maps/ParcelHighlands/scripts.pory"
	waitfanfare
# 302 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_CERT
# 303 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_MAX_POTION, 3
# 304 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_REVIVE, 3
# 305 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_9, MSGBOX_DEFAULT
# 306 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ItemPotion::
# 315 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelHighlands_ItemMaxRepel::
# 316 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_MAX_REPEL
	end


ParcelHighlands_ItemIceHeal::
# 317 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_ICE_HEAL
	end


ParcelHighlands_SurfCache::
# 319 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_RARE_CANDY
# 320 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_SURF
	end


ParcelHighlands_FallsCache::
# 324 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_PP_MAX
# 325 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_ITEM_HL_FALLS
	end


ParcelHighlands_SignSummit::
# 331 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignSummit_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SignCentre::
# 335 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SignCentre_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_SurveyorTrainer::
# 341 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SURVEYOR, ParcelHighlands_SurveyorTrainer_Text_0, ParcelHighlands_SurveyorTrainer_Text_1, ParcelHighlands_SurveyorTrainer_FirstWin
# 345 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 346 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_SurveyorTrainer_3
ParcelHighlands_SurveyorTrainer_1:
# 349 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_SurveyorTrainer_8
ParcelHighlands_SurveyorTrainer_6:
# 352 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_SurveyorTrainer_13
ParcelHighlands_SurveyorTrainer_11:
# 355 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_SurveyorTrainer_18
ParcelHighlands_SurveyorTrainer_16:
# 358 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_SurveyorTrainer_2:
# 347 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R2
	goto ParcelHighlands_SurveyorTrainer_1

ParcelHighlands_SurveyorTrainer_3:
# 346 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R2
	goto_if 0, ParcelHighlands_SurveyorTrainer_2
	goto ParcelHighlands_SurveyorTrainer_1

ParcelHighlands_SurveyorTrainer_7:
# 350 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R3
	goto ParcelHighlands_SurveyorTrainer_6

ParcelHighlands_SurveyorTrainer_8:
# 349 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R3
	goto_if 0, ParcelHighlands_SurveyorTrainer_7
	goto ParcelHighlands_SurveyorTrainer_6

ParcelHighlands_SurveyorTrainer_12:
# 353 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R4
	goto ParcelHighlands_SurveyorTrainer_11

ParcelHighlands_SurveyorTrainer_13:
# 352 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R4
	goto_if 0, ParcelHighlands_SurveyorTrainer_12
	goto ParcelHighlands_SurveyorTrainer_11

ParcelHighlands_SurveyorTrainer_17:
# 356 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_SurveyorTrainer_R5
	goto ParcelHighlands_SurveyorTrainer_16

ParcelHighlands_SurveyorTrainer_18:
# 355 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_SURVEYOR_R5
	goto_if 0, ParcelHighlands_SurveyorTrainer_17
	goto ParcelHighlands_SurveyorTrainer_16


ParcelHighlands_SurveyorTrainer_FirstWin::
# 362 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R2::
# 367 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 368 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_0, MSGBOX_YESNO
# 370 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R2_2
# 375 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R2, ParcelHighlands_SurveyorTrainer_R2_Text_2
# 376 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_3, MSGBOX_DEFAULT
# 377 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R2_2:
# 371 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 372 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R3::
# 381 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 382 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 383 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R3_Text_0, MSGBOX_YESNO
# 384 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R3_2
# 389 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R3, ParcelHighlands_SurveyorTrainer_R3_Text_1
# 390 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R3_Text_2, MSGBOX_DEFAULT
# 391 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R3_2:
# 385 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 386 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R4::
# 395 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 396 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 397 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R4_Text_0, MSGBOX_YESNO
# 398 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R4_2
# 403 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R4, ParcelHighlands_SurveyorTrainer_R4_Text_1
# 404 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R4_Text_2, MSGBOX_DEFAULT
# 405 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R4_2:
# 399 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 400 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_SurveyorTrainer_R5::
# 409 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 410 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 411 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R5_Text_0, MSGBOX_YESNO
# 412 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_SurveyorTrainer_R5_2
# 417 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SURVEYOR_R5, ParcelHighlands_SurveyorTrainer_R2_Text_2
# 418 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R5_Text_1, MSGBOX_DEFAULT
# 419 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_SurveyorTrainer_R5_2:
# 413 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_R2_Text_1, MSGBOX_DEFAULT
# 414 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ValeGate::
# 425 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, ParcelHighlands_ValeGate_2
# 429 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 430 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_0, MSGBOX_DEFAULT
# 431 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 432 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeApproach
# 433 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 434 "data/maps/ParcelHighlands/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_HL_FaceRight
# 435 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 436 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_1, MSGBOX_DEFAULT
# 437 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_2, MSGBOX_YESNO
# 438 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_ValeGate_5
# 441 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_4, MSGBOX_DEFAULT
# 442 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_EXAM_5
ParcelHighlands_ValeGate_4:
# 444 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5, ParcelHighlands_ValeGate_Text_5
# 445 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_BADGE05_GET
# 446 "data/maps/ParcelHighlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 447 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_6, MSGBOX_DEFAULT
# 448 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_HM03
# 449 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_7, MSGBOX_DEFAULT
# 450 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 451 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 8, Movement_HL_ValeBack
# 452 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 453 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
# 454 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_ValeGate_2:
# 426 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_4, 1
	end

ParcelHighlands_ValeGate_5:
# 439 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_ValeGate_Text_3, MSGBOX_DEFAULT
	goto ParcelHighlands_ValeGate_4


ParcelHighlands_GymVale::
# 458 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 459 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 460 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_GymVale_2
ParcelHighlands_GymVale_1:
# 463 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Text_0, MSGBOX_DEFAULT
# 464 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_GymVale_2:
# 461 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_GymVale_Rematch
	goto ParcelHighlands_GymVale_1


# 467 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeApproach:
# 467 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
# 467 "data/maps/ParcelHighlands/scripts.pory"
	walk_left
	step_end

# 468 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_ValeBack:
# 468 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 468 "data/maps/ParcelHighlands/scripts.pory"
	walk_right
# 468 "data/maps/ParcelHighlands/scripts.pory"
	face_left
	step_end

# 469 "data/maps/ParcelHighlands/scripts.pory"
Movement_HL_FaceRight:
# 469 "data/maps/ParcelHighlands/scripts.pory"
	face_right
	step_end

ParcelHighlands_Asbjorn::
# 473 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_ASBJORN, ParcelHighlands_Asbjorn_Text_0, ParcelHighlands_Asbjorn_Text_1, ParcelHighlands_Asbjorn_FirstWin
# 477 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 478 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Asbjorn_3
ParcelHighlands_Asbjorn_1:
# 481 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Asbjorn_8
ParcelHighlands_Asbjorn_6:
# 484 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Asbjorn_13
ParcelHighlands_Asbjorn_11:
# 487 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Asbjorn_18
ParcelHighlands_Asbjorn_16:
# 490 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Asbjorn_2:
# 479 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R2
	goto ParcelHighlands_Asbjorn_1

ParcelHighlands_Asbjorn_3:
# 478 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R2
	goto_if 0, ParcelHighlands_Asbjorn_2
	goto ParcelHighlands_Asbjorn_1

ParcelHighlands_Asbjorn_7:
# 482 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R3
	goto ParcelHighlands_Asbjorn_6

ParcelHighlands_Asbjorn_8:
# 481 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R3
	goto_if 0, ParcelHighlands_Asbjorn_7
	goto ParcelHighlands_Asbjorn_6

ParcelHighlands_Asbjorn_12:
# 485 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R4
	goto ParcelHighlands_Asbjorn_11

ParcelHighlands_Asbjorn_13:
# 484 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R4
	goto_if 0, ParcelHighlands_Asbjorn_12
	goto ParcelHighlands_Asbjorn_11

ParcelHighlands_Asbjorn_17:
# 488 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Asbjorn_R5
	goto ParcelHighlands_Asbjorn_16

ParcelHighlands_Asbjorn_18:
# 487 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_ASBJORN_R5
	goto_if 0, ParcelHighlands_Asbjorn_17
	goto ParcelHighlands_Asbjorn_16


ParcelHighlands_Asbjorn_FirstWin::
# 494 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_Text_2, MSGBOX_DEFAULT
# 495 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R2::
# 499 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 500 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 501 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_0, MSGBOX_YESNO
# 502 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R2_2
# 507 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R2, ParcelHighlands_Asbjorn_R2_Text_2
# 508 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_3, MSGBOX_DEFAULT
# 509 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R2_2:
# 503 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 504 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R3::
# 513 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 514 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 515 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R3_Text_0, MSGBOX_YESNO
# 516 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R3_2
# 521 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R3, ParcelHighlands_Asbjorn_R3_Text_1
# 522 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R3_Text_2, MSGBOX_DEFAULT
# 523 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R3_2:
# 517 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 518 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R4::
# 527 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 528 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 529 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R4_Text_0, MSGBOX_YESNO
# 530 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R4_2
# 535 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R4, ParcelHighlands_Asbjorn_R4_Text_1
# 536 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R4_Text_2, MSGBOX_DEFAULT
# 537 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R4_2:
# 531 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 532 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Asbjorn_R5::
# 541 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 542 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 543 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R5_Text_0, MSGBOX_YESNO
# 544 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Asbjorn_R5_2
# 549 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_ASBJORN_R5, ParcelHighlands_Asbjorn_R2_Text_2
# 550 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R5_Text_1, MSGBOX_DEFAULT
# 551 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Asbjorn_R5_2:
# 545 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Asbjorn_R2_Text_1, MSGBOX_DEFAULT
# 546 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar::
# 555 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_BRYNJAR, ParcelHighlands_Brynjar_Text_0, ParcelHighlands_Brynjar_Text_1, ParcelHighlands_Brynjar_FirstWin
# 559 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 560 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Brynjar_3
ParcelHighlands_Brynjar_1:
# 563 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Brynjar_8
ParcelHighlands_Brynjar_6:
# 566 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Brynjar_13
ParcelHighlands_Brynjar_11:
# 569 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Brynjar_18
ParcelHighlands_Brynjar_16:
# 572 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Brynjar_2:
# 561 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R2
	goto ParcelHighlands_Brynjar_1

ParcelHighlands_Brynjar_3:
# 560 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R2
	goto_if 0, ParcelHighlands_Brynjar_2
	goto ParcelHighlands_Brynjar_1

ParcelHighlands_Brynjar_7:
# 564 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R3
	goto ParcelHighlands_Brynjar_6

ParcelHighlands_Brynjar_8:
# 563 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R3
	goto_if 0, ParcelHighlands_Brynjar_7
	goto ParcelHighlands_Brynjar_6

ParcelHighlands_Brynjar_12:
# 567 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R4
	goto ParcelHighlands_Brynjar_11

ParcelHighlands_Brynjar_13:
# 566 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R4
	goto_if 0, ParcelHighlands_Brynjar_12
	goto ParcelHighlands_Brynjar_11

ParcelHighlands_Brynjar_17:
# 570 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Brynjar_R5
	goto ParcelHighlands_Brynjar_16

ParcelHighlands_Brynjar_18:
# 569 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_BRYNJAR_R5
	goto_if 0, ParcelHighlands_Brynjar_17
	goto ParcelHighlands_Brynjar_16


ParcelHighlands_Brynjar_FirstWin::
# 576 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_Text_2, MSGBOX_DEFAULT
# 577 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R2::
# 581 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 582 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 583 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_0, MSGBOX_YESNO
# 584 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R2_2
# 589 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R2, ParcelHighlands_Brynjar_R2_Text_2
# 590 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_3, MSGBOX_DEFAULT
# 591 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R2_2:
# 585 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 586 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R3::
# 595 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 596 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 597 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R3_Text_0, MSGBOX_YESNO
# 598 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R3_2
# 603 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R3, ParcelHighlands_Brynjar_R3_Text_1
# 604 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R3_Text_2, MSGBOX_DEFAULT
# 605 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R3_2:
# 599 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 600 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R4::
# 609 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 610 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 611 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R4_Text_0, MSGBOX_YESNO
# 612 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R4_2
# 617 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R4, ParcelHighlands_Brynjar_R3_Text_1
# 618 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R4_Text_1, MSGBOX_DEFAULT
# 619 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R4_2:
# 613 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 614 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Brynjar_R5::
# 623 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 624 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 625 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R5_Text_0, MSGBOX_YESNO
# 626 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Brynjar_R5_2
# 631 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_BRYNJAR_R5, ParcelHighlands_Brynjar_R2_Text_2
# 632 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R5_Text_1, MSGBOX_DEFAULT
# 633 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Brynjar_R5_2:
# 627 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Brynjar_R2_Text_1, MSGBOX_DEFAULT
# 628 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny::
# 637 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_DAGNY, ParcelHighlands_Dagny_Text_0, ParcelHighlands_Dagny_Text_1, ParcelHighlands_Dagny_FirstWin
# 641 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 642 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Dagny_3
ParcelHighlands_Dagny_1:
# 645 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Dagny_8
ParcelHighlands_Dagny_6:
# 648 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Dagny_13
ParcelHighlands_Dagny_11:
# 651 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Dagny_18
ParcelHighlands_Dagny_16:
# 654 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Dagny_2:
# 643 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R2
	goto ParcelHighlands_Dagny_1

ParcelHighlands_Dagny_3:
# 642 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R2
	goto_if 0, ParcelHighlands_Dagny_2
	goto ParcelHighlands_Dagny_1

ParcelHighlands_Dagny_7:
# 646 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R3
	goto ParcelHighlands_Dagny_6

ParcelHighlands_Dagny_8:
# 645 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R3
	goto_if 0, ParcelHighlands_Dagny_7
	goto ParcelHighlands_Dagny_6

ParcelHighlands_Dagny_12:
# 649 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R4
	goto ParcelHighlands_Dagny_11

ParcelHighlands_Dagny_13:
# 648 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R4
	goto_if 0, ParcelHighlands_Dagny_12
	goto ParcelHighlands_Dagny_11

ParcelHighlands_Dagny_17:
# 652 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Dagny_R5
	goto ParcelHighlands_Dagny_16

ParcelHighlands_Dagny_18:
# 651 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_DAGNY_R5
	goto_if 0, ParcelHighlands_Dagny_17
	goto ParcelHighlands_Dagny_16


ParcelHighlands_Dagny_FirstWin::
# 658 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_Text_2, MSGBOX_DEFAULT
# 659 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R2::
# 663 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 664 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 665 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_0, MSGBOX_YESNO
# 666 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R2_2
# 671 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R2, ParcelHighlands_Dagny_R2_Text_2
# 672 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_3, MSGBOX_DEFAULT
# 673 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R2_2:
# 667 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 668 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R3::
# 677 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 678 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 679 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R3_Text_0, MSGBOX_YESNO
# 680 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R3_2
# 685 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R3, ParcelHighlands_Dagny_R2_Text_2
# 686 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R3_Text_1, MSGBOX_DEFAULT
# 687 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R3_2:
# 681 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 682 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R4::
# 691 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 692 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 693 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R4_Text_0, MSGBOX_YESNO
# 694 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R4_2
# 699 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R4, ParcelHighlands_Dagny_R2_Text_2
# 700 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R4_Text_1, MSGBOX_DEFAULT
# 701 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R4_2:
# 695 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 696 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Dagny_R5::
# 705 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 706 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 707 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R5_Text_0, MSGBOX_YESNO
# 708 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Dagny_R5_2
# 713 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_DAGNY_R5, ParcelHighlands_Dagny_R5_Text_1
# 714 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R5_Text_2, MSGBOX_DEFAULT
# 715 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Dagny_R5_2:
# 709 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Dagny_R2_Text_1, MSGBOX_DEFAULT
# 710 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind::
# 719 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_EIVIND, ParcelHighlands_Eivind_Text_0, ParcelHighlands_Eivind_Text_1, ParcelHighlands_Eivind_FirstWin
# 723 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 724 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Eivind_3
ParcelHighlands_Eivind_1:
# 727 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Eivind_8
ParcelHighlands_Eivind_6:
# 730 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Eivind_13
ParcelHighlands_Eivind_11:
# 733 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Eivind_18
ParcelHighlands_Eivind_16:
# 736 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Eivind_2:
# 725 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R2
	goto ParcelHighlands_Eivind_1

ParcelHighlands_Eivind_3:
# 724 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R2
	goto_if 0, ParcelHighlands_Eivind_2
	goto ParcelHighlands_Eivind_1

ParcelHighlands_Eivind_7:
# 728 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R3
	goto ParcelHighlands_Eivind_6

ParcelHighlands_Eivind_8:
# 727 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R3
	goto_if 0, ParcelHighlands_Eivind_7
	goto ParcelHighlands_Eivind_6

ParcelHighlands_Eivind_12:
# 731 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R4
	goto ParcelHighlands_Eivind_11

ParcelHighlands_Eivind_13:
# 730 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R4
	goto_if 0, ParcelHighlands_Eivind_12
	goto ParcelHighlands_Eivind_11

ParcelHighlands_Eivind_17:
# 734 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Eivind_R5
	goto ParcelHighlands_Eivind_16

ParcelHighlands_Eivind_18:
# 733 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_EIVIND_R5
	goto_if 0, ParcelHighlands_Eivind_17
	goto ParcelHighlands_Eivind_16


ParcelHighlands_Eivind_FirstWin::
# 740 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_Text_2, MSGBOX_DEFAULT
# 741 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R2::
# 745 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 746 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 747 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_0, MSGBOX_YESNO
# 748 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R2_2
# 753 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R2, ParcelHighlands_Eivind_R2_Text_2
# 754 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_3, MSGBOX_DEFAULT
# 755 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R2_2:
# 749 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 750 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R3::
# 759 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 760 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 761 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R3_Text_0, MSGBOX_YESNO
# 762 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R3_2
# 767 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R3, ParcelHighlands_Eivind_R3_Text_1
# 768 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R3_Text_2, MSGBOX_DEFAULT
# 769 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R3_2:
# 763 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 764 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R4::
# 773 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 774 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 775 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R4_Text_0, MSGBOX_YESNO
# 776 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R4_2
# 781 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R4, ParcelHighlands_Eivind_R3_Text_1
# 782 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R4_Text_1, MSGBOX_DEFAULT
# 783 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R4_2:
# 777 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 778 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Eivind_R5::
# 787 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 788 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 789 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R5_Text_0, MSGBOX_YESNO
# 790 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Eivind_R5_2
# 795 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_EIVIND_R5, ParcelHighlands_Eivind_R5_Text_1
# 796 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R5_Text_2, MSGBOX_DEFAULT
# 797 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Eivind_R5_2:
# 791 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Eivind_R2_Text_1, MSGBOX_DEFAULT
# 792 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn::
# 801 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_FINN, ParcelHighlands_Finn_Text_0, ParcelHighlands_Finn_Text_1, ParcelHighlands_Finn_FirstWin
# 805 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 806 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Finn_3
ParcelHighlands_Finn_1:
# 809 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Finn_8
ParcelHighlands_Finn_6:
# 812 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Finn_13
ParcelHighlands_Finn_11:
# 815 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Finn_18
ParcelHighlands_Finn_16:
# 818 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Finn_2:
# 807 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R2
	goto ParcelHighlands_Finn_1

ParcelHighlands_Finn_3:
# 806 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R2
	goto_if 0, ParcelHighlands_Finn_2
	goto ParcelHighlands_Finn_1

ParcelHighlands_Finn_7:
# 810 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R3
	goto ParcelHighlands_Finn_6

ParcelHighlands_Finn_8:
# 809 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R3
	goto_if 0, ParcelHighlands_Finn_7
	goto ParcelHighlands_Finn_6

ParcelHighlands_Finn_12:
# 813 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R4
	goto ParcelHighlands_Finn_11

ParcelHighlands_Finn_13:
# 812 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R4
	goto_if 0, ParcelHighlands_Finn_12
	goto ParcelHighlands_Finn_11

ParcelHighlands_Finn_17:
# 816 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Finn_R5
	goto ParcelHighlands_Finn_16

ParcelHighlands_Finn_18:
# 815 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_FINN_R5
	goto_if 0, ParcelHighlands_Finn_17
	goto ParcelHighlands_Finn_16


ParcelHighlands_Finn_FirstWin::
# 822 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_Text_2, MSGBOX_DEFAULT
# 823 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R2::
# 827 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 828 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 829 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_0, MSGBOX_YESNO
# 830 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R2_2
# 835 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R2, ParcelHighlands_Finn_R2_Text_2
# 836 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_3, MSGBOX_DEFAULT
# 837 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R2_2:
# 831 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 832 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R3::
# 841 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 842 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 843 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R3_Text_0, MSGBOX_YESNO
# 844 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R3_2
# 849 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R3, ParcelHighlands_Finn_R2_Text_2
# 850 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R3_Text_1, MSGBOX_DEFAULT
# 851 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R3_2:
# 845 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 846 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R4::
# 855 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 856 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 857 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R4_Text_0, MSGBOX_YESNO
# 858 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R4_2
# 863 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R4, ParcelHighlands_Finn_R4_Text_1
# 864 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R4_Text_2, MSGBOX_DEFAULT
# 865 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R4_2:
# 859 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 860 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Finn_R5::
# 869 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 870 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 871 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R5_Text_0, MSGBOX_YESNO
# 872 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Finn_R5_2
# 877 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_FINN_R5, ParcelHighlands_Finn_R5_Text_1
# 878 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R5_Text_2, MSGBOX_DEFAULT
# 879 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Finn_R5_2:
# 873 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Finn_R2_Text_1, MSGBOX_DEFAULT
# 874 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete::
# 883 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_GRETE, ParcelHighlands_Grete_Text_0, ParcelHighlands_Grete_Text_1, ParcelHighlands_Grete_FirstWin
# 887 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 888 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Grete_3
ParcelHighlands_Grete_1:
# 891 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Grete_8
ParcelHighlands_Grete_6:
# 894 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Grete_13
ParcelHighlands_Grete_11:
# 897 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Grete_18
ParcelHighlands_Grete_16:
# 900 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Grete_2:
# 889 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R2
	goto ParcelHighlands_Grete_1

ParcelHighlands_Grete_3:
# 888 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R2
	goto_if 0, ParcelHighlands_Grete_2
	goto ParcelHighlands_Grete_1

ParcelHighlands_Grete_7:
# 892 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R3
	goto ParcelHighlands_Grete_6

ParcelHighlands_Grete_8:
# 891 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R3
	goto_if 0, ParcelHighlands_Grete_7
	goto ParcelHighlands_Grete_6

ParcelHighlands_Grete_12:
# 895 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R4
	goto ParcelHighlands_Grete_11

ParcelHighlands_Grete_13:
# 894 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R4
	goto_if 0, ParcelHighlands_Grete_12
	goto ParcelHighlands_Grete_11

ParcelHighlands_Grete_17:
# 898 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Grete_R5
	goto ParcelHighlands_Grete_16

ParcelHighlands_Grete_18:
# 897 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_GRETE_R5
	goto_if 0, ParcelHighlands_Grete_17
	goto ParcelHighlands_Grete_16


ParcelHighlands_Grete_FirstWin::
# 904 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_Text_2, MSGBOX_DEFAULT
# 905 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R2::
# 909 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 910 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 911 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_0, MSGBOX_YESNO
# 912 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R2_2
# 917 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R2, ParcelHighlands_Grete_R2_Text_2
# 918 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_3, MSGBOX_DEFAULT
# 919 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R2_2:
# 913 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 914 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R3::
# 923 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 924 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 925 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R3_Text_0, MSGBOX_YESNO
# 926 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R3_2
# 931 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R3, ParcelHighlands_Grete_R2_Text_2
# 932 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R3_Text_1, MSGBOX_DEFAULT
# 933 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R3_2:
# 927 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 928 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R4::
# 937 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 938 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 939 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R4_Text_0, MSGBOX_YESNO
# 940 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R4_2
# 945 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R4, ParcelHighlands_Grete_R4_Text_1
# 946 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R4_Text_2, MSGBOX_DEFAULT
# 947 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R4_2:
# 941 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 942 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Grete_R5::
# 951 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 952 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 953 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R5_Text_0, MSGBOX_YESNO
# 954 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Grete_R5_2
# 959 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_GRETE_R5, ParcelHighlands_Grete_R2_Text_2
# 960 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R5_Text_1, MSGBOX_DEFAULT
# 961 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Grete_R5_2:
# 955 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Grete_R2_Text_1, MSGBOX_DEFAULT
# 956 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk::
# 965 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HAUK, ParcelHighlands_Hauk_Text_0, ParcelHighlands_Hauk_Text_1, ParcelHighlands_Hauk_FirstWin
# 969 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 970 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Hauk_3
ParcelHighlands_Hauk_1:
# 973 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Hauk_8
ParcelHighlands_Hauk_6:
# 976 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Hauk_13
ParcelHighlands_Hauk_11:
# 979 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Hauk_18
ParcelHighlands_Hauk_16:
# 982 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Hauk_2:
# 971 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R2
	goto ParcelHighlands_Hauk_1

ParcelHighlands_Hauk_3:
# 970 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R2
	goto_if 0, ParcelHighlands_Hauk_2
	goto ParcelHighlands_Hauk_1

ParcelHighlands_Hauk_7:
# 974 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R3
	goto ParcelHighlands_Hauk_6

ParcelHighlands_Hauk_8:
# 973 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R3
	goto_if 0, ParcelHighlands_Hauk_7
	goto ParcelHighlands_Hauk_6

ParcelHighlands_Hauk_12:
# 977 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R4
	goto ParcelHighlands_Hauk_11

ParcelHighlands_Hauk_13:
# 976 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R4
	goto_if 0, ParcelHighlands_Hauk_12
	goto ParcelHighlands_Hauk_11

ParcelHighlands_Hauk_17:
# 980 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Hauk_R5
	goto ParcelHighlands_Hauk_16

ParcelHighlands_Hauk_18:
# 979 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HAUK_R5
	goto_if 0, ParcelHighlands_Hauk_17
	goto ParcelHighlands_Hauk_16


ParcelHighlands_Hauk_FirstWin::
# 986 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_Text_2, MSGBOX_DEFAULT
# 987 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R2::
# 991 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 992 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 993 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_0, MSGBOX_YESNO
# 994 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R2_2
# 999 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R2, ParcelHighlands_Hauk_R2_Text_2
# 1000 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_3, MSGBOX_DEFAULT
# 1001 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R2_2:
# 995 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 996 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R3::
# 1005 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1006 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1007 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R3_Text_0, MSGBOX_YESNO
# 1008 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R3_2
# 1013 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R3, ParcelHighlands_Hauk_R3_Text_1
# 1014 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R3_Text_2, MSGBOX_DEFAULT
# 1015 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R3_2:
# 1009 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 1010 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R4::
# 1019 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1020 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1021 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R4_Text_0, MSGBOX_YESNO
# 1022 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R4_2
# 1027 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R4, ParcelHighlands_Hauk_R4_Text_1
# 1028 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R4_Text_2, MSGBOX_DEFAULT
# 1029 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R4_2:
# 1023 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 1024 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hauk_R5::
# 1033 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1034 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1035 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R5_Text_0, MSGBOX_YESNO
# 1036 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Hauk_R5_2
# 1041 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HAUK_R5, ParcelHighlands_Hauk_R5_Text_1
# 1042 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R5_Text_2, MSGBOX_DEFAULT
# 1043 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hauk_R5_2:
# 1037 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hauk_R2_Text_1, MSGBOX_DEFAULT
# 1038 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle::
# 1047 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_JARLE, ParcelHighlands_Jarle_Text_0, ParcelHighlands_Jarle_Text_1, ParcelHighlands_Jarle_FirstWin
# 1051 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1052 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Jarle_3
ParcelHighlands_Jarle_1:
# 1055 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Jarle_8
ParcelHighlands_Jarle_6:
# 1058 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Jarle_13
ParcelHighlands_Jarle_11:
# 1061 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Jarle_18
ParcelHighlands_Jarle_16:
# 1064 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Jarle_2:
# 1053 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R2
	goto ParcelHighlands_Jarle_1

ParcelHighlands_Jarle_3:
# 1052 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R2
	goto_if 0, ParcelHighlands_Jarle_2
	goto ParcelHighlands_Jarle_1

ParcelHighlands_Jarle_7:
# 1056 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R3
	goto ParcelHighlands_Jarle_6

ParcelHighlands_Jarle_8:
# 1055 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R3
	goto_if 0, ParcelHighlands_Jarle_7
	goto ParcelHighlands_Jarle_6

ParcelHighlands_Jarle_12:
# 1059 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R4
	goto ParcelHighlands_Jarle_11

ParcelHighlands_Jarle_13:
# 1058 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R4
	goto_if 0, ParcelHighlands_Jarle_12
	goto ParcelHighlands_Jarle_11

ParcelHighlands_Jarle_17:
# 1062 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Jarle_R5
	goto ParcelHighlands_Jarle_16

ParcelHighlands_Jarle_18:
# 1061 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_JARLE_R5
	goto_if 0, ParcelHighlands_Jarle_17
	goto ParcelHighlands_Jarle_16


ParcelHighlands_Jarle_FirstWin::
# 1068 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_Text_2, MSGBOX_DEFAULT
# 1069 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R2::
# 1073 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1074 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1075 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_0, MSGBOX_YESNO
# 1076 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R2_2
# 1081 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R2, ParcelHighlands_Jarle_R2_Text_2
# 1082 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_3, MSGBOX_DEFAULT
# 1083 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R2_2:
# 1077 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1078 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R3::
# 1087 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1088 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1089 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R3_Text_0, MSGBOX_YESNO
# 1090 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R3_2
# 1095 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R3, ParcelHighlands_Jarle_R3_Text_1
# 1096 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R3_Text_2, MSGBOX_DEFAULT
# 1097 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R3_2:
# 1091 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1092 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R4::
# 1101 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1102 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1103 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R4_Text_0, MSGBOX_YESNO
# 1104 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R4_2
# 1109 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R4, ParcelHighlands_Jarle_R3_Text_1
# 1110 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R4_Text_1, MSGBOX_DEFAULT
# 1111 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R4_2:
# 1105 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1106 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Jarle_R5::
# 1115 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1116 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1117 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R5_Text_0, MSGBOX_YESNO
# 1118 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Jarle_R5_2
# 1123 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_JARLE_R5, ParcelHighlands_Jarle_R3_Text_1
# 1124 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R5_Text_1, MSGBOX_DEFAULT
# 1125 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Jarle_R5_2:
# 1119 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Jarle_R2_Text_1, MSGBOX_DEFAULT
# 1120 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti::
# 1129 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_KJERSTI, ParcelHighlands_Kjersti_Text_0, ParcelHighlands_Kjersti_Text_1, ParcelHighlands_Kjersti_FirstWin
# 1133 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1134 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Kjersti_3
ParcelHighlands_Kjersti_1:
# 1137 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Kjersti_8
ParcelHighlands_Kjersti_6:
# 1140 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Kjersti_13
ParcelHighlands_Kjersti_11:
# 1143 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Kjersti_18
ParcelHighlands_Kjersti_16:
# 1146 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Kjersti_2:
# 1135 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R2
	goto ParcelHighlands_Kjersti_1

ParcelHighlands_Kjersti_3:
# 1134 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R2
	goto_if 0, ParcelHighlands_Kjersti_2
	goto ParcelHighlands_Kjersti_1

ParcelHighlands_Kjersti_7:
# 1138 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R3
	goto ParcelHighlands_Kjersti_6

ParcelHighlands_Kjersti_8:
# 1137 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R3
	goto_if 0, ParcelHighlands_Kjersti_7
	goto ParcelHighlands_Kjersti_6

ParcelHighlands_Kjersti_12:
# 1141 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R4
	goto ParcelHighlands_Kjersti_11

ParcelHighlands_Kjersti_13:
# 1140 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R4
	goto_if 0, ParcelHighlands_Kjersti_12
	goto ParcelHighlands_Kjersti_11

ParcelHighlands_Kjersti_17:
# 1144 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Kjersti_R5
	goto ParcelHighlands_Kjersti_16

ParcelHighlands_Kjersti_18:
# 1143 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_KJERSTI_R5
	goto_if 0, ParcelHighlands_Kjersti_17
	goto ParcelHighlands_Kjersti_16


ParcelHighlands_Kjersti_FirstWin::
# 1150 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_Text_2, MSGBOX_DEFAULT
# 1151 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R2::
# 1155 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1156 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1157 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_0, MSGBOX_YESNO
# 1158 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R2_2
# 1163 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R2, ParcelHighlands_Kjersti_R2_Text_2
# 1164 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_3, MSGBOX_DEFAULT
# 1165 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R2_2:
# 1159 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1160 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R3::
# 1169 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1170 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1171 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R3_Text_0, MSGBOX_YESNO
# 1172 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R3_2
# 1177 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R3, ParcelHighlands_Kjersti_R2_Text_2
# 1178 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R3_Text_1, MSGBOX_DEFAULT
# 1179 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R3_2:
# 1173 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1174 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R4::
# 1183 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1184 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1185 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R4_Text_0, MSGBOX_YESNO
# 1186 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R4_2
# 1191 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R4, ParcelHighlands_Kjersti_R4_Text_1
# 1192 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R4_Text_2, MSGBOX_DEFAULT
# 1193 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R4_2:
# 1187 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1188 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Kjersti_R5::
# 1197 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1198 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1199 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R5_Text_0, MSGBOX_YESNO
# 1200 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Kjersti_R5_2
# 1205 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_KJERSTI_R5, ParcelHighlands_Kjersti_R2_Text_2
# 1206 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R5_Text_1, MSGBOX_DEFAULT
# 1207 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Kjersti_R5_2:
# 1201 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Kjersti_R2_Text_1, MSGBOX_DEFAULT
# 1202 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf::
# 1211 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_LEIDULF, ParcelHighlands_Leidulf_Text_0, ParcelHighlands_Leidulf_Text_1, ParcelHighlands_Leidulf_FirstWin
# 1215 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1216 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Leidulf_3
ParcelHighlands_Leidulf_1:
# 1219 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Leidulf_8
ParcelHighlands_Leidulf_6:
# 1222 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Leidulf_13
ParcelHighlands_Leidulf_11:
# 1225 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Leidulf_18
ParcelHighlands_Leidulf_16:
# 1228 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Leidulf_2:
# 1217 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R2
	goto ParcelHighlands_Leidulf_1

ParcelHighlands_Leidulf_3:
# 1216 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R2
	goto_if 0, ParcelHighlands_Leidulf_2
	goto ParcelHighlands_Leidulf_1

ParcelHighlands_Leidulf_7:
# 1220 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R3
	goto ParcelHighlands_Leidulf_6

ParcelHighlands_Leidulf_8:
# 1219 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R3
	goto_if 0, ParcelHighlands_Leidulf_7
	goto ParcelHighlands_Leidulf_6

ParcelHighlands_Leidulf_12:
# 1223 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R4
	goto ParcelHighlands_Leidulf_11

ParcelHighlands_Leidulf_13:
# 1222 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R4
	goto_if 0, ParcelHighlands_Leidulf_12
	goto ParcelHighlands_Leidulf_11

ParcelHighlands_Leidulf_17:
# 1226 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Leidulf_R5
	goto ParcelHighlands_Leidulf_16

ParcelHighlands_Leidulf_18:
# 1225 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_LEIDULF_R5
	goto_if 0, ParcelHighlands_Leidulf_17
	goto ParcelHighlands_Leidulf_16


ParcelHighlands_Leidulf_FirstWin::
# 1232 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_Text_2, MSGBOX_DEFAULT
# 1233 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R2::
# 1237 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1238 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1239 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_0, MSGBOX_YESNO
# 1240 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R2_2
# 1245 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R2, ParcelHighlands_Leidulf_R2_Text_2
# 1246 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_3, MSGBOX_DEFAULT
# 1247 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R2_2:
# 1241 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1242 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R3::
# 1251 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1252 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1253 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R3_Text_0, MSGBOX_YESNO
# 1254 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R3_2
# 1259 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R3, ParcelHighlands_Leidulf_R3_Text_1
# 1260 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R3_Text_2, MSGBOX_DEFAULT
# 1261 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R3_2:
# 1255 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1256 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R4::
# 1265 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1266 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1267 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R4_Text_0, MSGBOX_YESNO
# 1268 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R4_2
# 1273 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R4, ParcelHighlands_Leidulf_R3_Text_1
# 1274 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R4_Text_1, MSGBOX_DEFAULT
# 1275 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R4_2:
# 1269 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1270 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Leidulf_R5::
# 1279 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1280 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1281 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R5_Text_0, MSGBOX_YESNO
# 1282 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Leidulf_R5_2
# 1287 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_LEIDULF_R5, ParcelHighlands_Leidulf_R5_Text_1
# 1288 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R5_Text_2, MSGBOX_DEFAULT
# 1289 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Leidulf_R5_2:
# 1283 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Leidulf_R2_Text_1, MSGBOX_DEFAULT
# 1284 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora::
# 1293 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_NORA, ParcelHighlands_Nora_Text_0, ParcelHighlands_Nora_Text_1, ParcelHighlands_Nora_FirstWin
# 1297 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1298 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Nora_3
ParcelHighlands_Nora_1:
# 1301 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Nora_8
ParcelHighlands_Nora_6:
# 1304 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Nora_13
ParcelHighlands_Nora_11:
# 1307 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Nora_18
ParcelHighlands_Nora_16:
# 1310 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Nora_2:
# 1299 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R2
	goto ParcelHighlands_Nora_1

ParcelHighlands_Nora_3:
# 1298 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R2
	goto_if 0, ParcelHighlands_Nora_2
	goto ParcelHighlands_Nora_1

ParcelHighlands_Nora_7:
# 1302 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R3
	goto ParcelHighlands_Nora_6

ParcelHighlands_Nora_8:
# 1301 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R3
	goto_if 0, ParcelHighlands_Nora_7
	goto ParcelHighlands_Nora_6

ParcelHighlands_Nora_12:
# 1305 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R4
	goto ParcelHighlands_Nora_11

ParcelHighlands_Nora_13:
# 1304 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R4
	goto_if 0, ParcelHighlands_Nora_12
	goto ParcelHighlands_Nora_11

ParcelHighlands_Nora_17:
# 1308 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Nora_R5
	goto ParcelHighlands_Nora_16

ParcelHighlands_Nora_18:
# 1307 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_NORA_R5
	goto_if 0, ParcelHighlands_Nora_17
	goto ParcelHighlands_Nora_16


ParcelHighlands_Nora_FirstWin::
# 1314 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_Text_2, MSGBOX_DEFAULT
# 1315 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R2::
# 1319 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1320 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1321 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_0, MSGBOX_YESNO
# 1322 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R2_2
# 1327 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R2, ParcelHighlands_Nora_R2_Text_2
# 1328 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_3, MSGBOX_DEFAULT
# 1329 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R2_2:
# 1323 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R3::
# 1333 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1334 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1335 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R3_Text_0, MSGBOX_YESNO
# 1336 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R3_2
# 1341 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R3, ParcelHighlands_Nora_R3_Text_1
# 1342 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R3_Text_2, MSGBOX_DEFAULT
# 1343 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R3_2:
# 1337 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1338 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R4::
# 1347 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1348 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1349 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R4_Text_0, MSGBOX_YESNO
# 1350 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R4_2
# 1355 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R4, ParcelHighlands_Nora_R2_Text_2
# 1356 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R4_Text_1, MSGBOX_DEFAULT
# 1357 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R4_2:
# 1351 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1352 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Nora_R5::
# 1361 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1362 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1363 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R5_Text_0, MSGBOX_YESNO
# 1364 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Nora_R5_2
# 1369 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_NORA_R5, ParcelHighlands_Nora_R5_Text_1
# 1370 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R5_Text_2, MSGBOX_DEFAULT
# 1371 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Nora_R5_2:
# 1365 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Nora_R2_Text_1, MSGBOX_DEFAULT
# 1366 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder::
# 1375 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_PEDER, ParcelHighlands_Peder_Text_0, ParcelHighlands_Peder_Text_1, ParcelHighlands_Peder_FirstWin
# 1379 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1380 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Peder_3
ParcelHighlands_Peder_1:
# 1383 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Peder_8
ParcelHighlands_Peder_6:
# 1386 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Peder_13
ParcelHighlands_Peder_11:
# 1389 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Peder_18
ParcelHighlands_Peder_16:
# 1392 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Peder_2:
# 1381 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R2
	goto ParcelHighlands_Peder_1

ParcelHighlands_Peder_3:
# 1380 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R2
	goto_if 0, ParcelHighlands_Peder_2
	goto ParcelHighlands_Peder_1

ParcelHighlands_Peder_7:
# 1384 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R3
	goto ParcelHighlands_Peder_6

ParcelHighlands_Peder_8:
# 1383 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R3
	goto_if 0, ParcelHighlands_Peder_7
	goto ParcelHighlands_Peder_6

ParcelHighlands_Peder_12:
# 1387 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R4
	goto ParcelHighlands_Peder_11

ParcelHighlands_Peder_13:
# 1386 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R4
	goto_if 0, ParcelHighlands_Peder_12
	goto ParcelHighlands_Peder_11

ParcelHighlands_Peder_17:
# 1390 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Peder_R5
	goto ParcelHighlands_Peder_16

ParcelHighlands_Peder_18:
# 1389 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_PEDER_R5
	goto_if 0, ParcelHighlands_Peder_17
	goto ParcelHighlands_Peder_16


ParcelHighlands_Peder_FirstWin::
# 1396 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_Text_2, MSGBOX_DEFAULT
# 1397 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R2::
# 1401 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1402 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1403 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_0, MSGBOX_YESNO
# 1404 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R2_2
# 1409 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R2, ParcelHighlands_Peder_R2_Text_2
# 1410 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_3, MSGBOX_DEFAULT
# 1411 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R2_2:
# 1405 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1406 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R3::
# 1415 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1416 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1417 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R3_Text_0, MSGBOX_YESNO
# 1418 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R3_2
# 1423 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R3, ParcelHighlands_Peder_R3_Text_1
# 1424 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R3_Text_2, MSGBOX_DEFAULT
# 1425 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R3_2:
# 1419 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1420 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R4::
# 1429 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1430 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1431 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R4_Text_0, MSGBOX_YESNO
# 1432 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R4_2
# 1437 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R4, ParcelHighlands_Peder_R4_Text_1
# 1438 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R4_Text_2, MSGBOX_DEFAULT
# 1439 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R4_2:
# 1433 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1434 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Peder_R5::
# 1443 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1444 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1445 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R5_Text_0, MSGBOX_YESNO
# 1446 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Peder_R5_2
# 1451 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_PEDER_R5, ParcelHighlands_Peder_R5_Text_1
# 1452 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R5_Text_2, MSGBOX_DEFAULT
# 1453 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Peder_R5_2:
# 1447 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Peder_R2_Text_1, MSGBOX_DEFAULT
# 1448 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa::
# 1457 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_RUNA, ParcelHighlands_Runa_Text_0, ParcelHighlands_Runa_Text_1, ParcelHighlands_Runa_FirstWin
# 1461 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1462 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Runa_3
ParcelHighlands_Runa_1:
# 1465 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Runa_8
ParcelHighlands_Runa_6:
# 1468 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Runa_13
ParcelHighlands_Runa_11:
# 1471 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Runa_18
ParcelHighlands_Runa_16:
# 1474 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Runa_2:
# 1463 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R2
	goto ParcelHighlands_Runa_1

ParcelHighlands_Runa_3:
# 1462 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R2
	goto_if 0, ParcelHighlands_Runa_2
	goto ParcelHighlands_Runa_1

ParcelHighlands_Runa_7:
# 1466 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R3
	goto ParcelHighlands_Runa_6

ParcelHighlands_Runa_8:
# 1465 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R3
	goto_if 0, ParcelHighlands_Runa_7
	goto ParcelHighlands_Runa_6

ParcelHighlands_Runa_12:
# 1469 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R4
	goto ParcelHighlands_Runa_11

ParcelHighlands_Runa_13:
# 1468 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R4
	goto_if 0, ParcelHighlands_Runa_12
	goto ParcelHighlands_Runa_11

ParcelHighlands_Runa_17:
# 1472 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Runa_R5
	goto ParcelHighlands_Runa_16

ParcelHighlands_Runa_18:
# 1471 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_RUNA_R5
	goto_if 0, ParcelHighlands_Runa_17
	goto ParcelHighlands_Runa_16


ParcelHighlands_Runa_FirstWin::
# 1478 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_Text_2, MSGBOX_DEFAULT
# 1479 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R2::
# 1483 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1484 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1485 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_0, MSGBOX_YESNO
# 1486 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R2_2
# 1491 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R2, ParcelHighlands_Runa_R2_Text_2
# 1492 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_3, MSGBOX_DEFAULT
# 1493 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R2_2:
# 1487 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1488 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R3::
# 1497 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1498 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1499 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R3_Text_0, MSGBOX_YESNO
# 1500 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R3_2
# 1505 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R3, ParcelHighlands_Runa_R3_Text_1
# 1506 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R3_Text_2, MSGBOX_DEFAULT
# 1507 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R3_2:
# 1501 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1502 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R4::
# 1511 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1512 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1513 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R4_Text_0, MSGBOX_YESNO
# 1514 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R4_2
# 1519 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R4, ParcelHighlands_Runa_R4_Text_1
# 1520 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R4_Text_2, MSGBOX_DEFAULT
# 1521 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R4_2:
# 1515 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1516 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Runa_R5::
# 1525 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1526 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1527 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R5_Text_0, MSGBOX_YESNO
# 1528 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Runa_R5_2
# 1533 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_RUNA_R5, ParcelHighlands_Runa_R3_Text_1
# 1534 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R5_Text_1, MSGBOX_DEFAULT
# 1535 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Runa_R5_2:
# 1529 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Runa_R2_Text_1, MSGBOX_DEFAULT
# 1530 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri::
# 1539 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SIRI, ParcelHighlands_Siri_Text_0, ParcelHighlands_Siri_Text_1, ParcelHighlands_Siri_FirstWin
# 1543 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1544 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_Siri_3
ParcelHighlands_Siri_1:
# 1547 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_Siri_8
ParcelHighlands_Siri_6:
# 1550 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_Siri_13
ParcelHighlands_Siri_11:
# 1553 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_Siri_18
ParcelHighlands_Siri_16:
# 1556 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_Siri_2:
# 1545 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R2
	goto ParcelHighlands_Siri_1

ParcelHighlands_Siri_3:
# 1544 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R2
	goto_if 0, ParcelHighlands_Siri_2
	goto ParcelHighlands_Siri_1

ParcelHighlands_Siri_7:
# 1548 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R3
	goto ParcelHighlands_Siri_6

ParcelHighlands_Siri_8:
# 1547 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R3
	goto_if 0, ParcelHighlands_Siri_7
	goto ParcelHighlands_Siri_6

ParcelHighlands_Siri_12:
# 1551 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R4
	goto ParcelHighlands_Siri_11

ParcelHighlands_Siri_13:
# 1550 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R4
	goto_if 0, ParcelHighlands_Siri_12
	goto ParcelHighlands_Siri_11

ParcelHighlands_Siri_17:
# 1554 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_Siri_R5
	goto ParcelHighlands_Siri_16

ParcelHighlands_Siri_18:
# 1553 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SIRI_R5
	goto_if 0, ParcelHighlands_Siri_17
	goto ParcelHighlands_Siri_16


ParcelHighlands_Siri_FirstWin::
# 1560 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_Text_2, MSGBOX_DEFAULT
# 1561 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R2::
# 1565 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1566 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1567 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_0, MSGBOX_YESNO
# 1568 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R2_2
# 1573 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R2, ParcelHighlands_Siri_R2_Text_2
# 1574 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_3, MSGBOX_DEFAULT
# 1575 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R2_2:
# 1569 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1570 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R3::
# 1579 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1580 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1581 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R3_Text_0, MSGBOX_YESNO
# 1582 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R3_2
# 1587 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R3, ParcelHighlands_Siri_R3_Text_1
# 1588 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R3_Text_2, MSGBOX_DEFAULT
# 1589 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R3_2:
# 1583 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1584 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R4::
# 1593 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1594 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1595 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R4_Text_0, MSGBOX_YESNO
# 1596 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R4_2
# 1601 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R4, ParcelHighlands_Siri_R3_Text_1
# 1602 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R4_Text_1, MSGBOX_DEFAULT
# 1603 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R4_2:
# 1597 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1598 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Siri_R5::
# 1607 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1608 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1609 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R5_Text_0, MSGBOX_YESNO
# 1610 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_Siri_R5_2
# 1615 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SIRI_R5, ParcelHighlands_Siri_R5_Text_1
# 1616 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R5_Text_2, MSGBOX_DEFAULT
# 1617 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Siri_R5_2:
# 1611 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Siri_R2_Text_1, MSGBOX_DEFAULT
# 1612 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre::
# 1623 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_SNORRE, ParcelHighlands_T_Snorre_Text_0, ParcelHighlands_T_Snorre_Text_1, ParcelHighlands_T_Snorre_FirstWin
# 1627 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1628 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Snorre_3
ParcelHighlands_T_Snorre_1:
# 1631 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Snorre_8
ParcelHighlands_T_Snorre_6:
# 1634 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Snorre_13
ParcelHighlands_T_Snorre_11:
# 1637 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Snorre_18
ParcelHighlands_T_Snorre_16:
# 1640 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Snorre_2:
# 1629 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R2
	goto ParcelHighlands_T_Snorre_1

ParcelHighlands_T_Snorre_3:
# 1628 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R2
	goto_if 0, ParcelHighlands_T_Snorre_2
	goto ParcelHighlands_T_Snorre_1

ParcelHighlands_T_Snorre_7:
# 1632 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R3
	goto ParcelHighlands_T_Snorre_6

ParcelHighlands_T_Snorre_8:
# 1631 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R3
	goto_if 0, ParcelHighlands_T_Snorre_7
	goto ParcelHighlands_T_Snorre_6

ParcelHighlands_T_Snorre_12:
# 1635 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R4
	goto ParcelHighlands_T_Snorre_11

ParcelHighlands_T_Snorre_13:
# 1634 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R4
	goto_if 0, ParcelHighlands_T_Snorre_12
	goto ParcelHighlands_T_Snorre_11

ParcelHighlands_T_Snorre_17:
# 1638 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Snorre_R5
	goto ParcelHighlands_T_Snorre_16

ParcelHighlands_T_Snorre_18:
# 1637 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_SNORRE_R5
	goto_if 0, ParcelHighlands_T_Snorre_17
	goto ParcelHighlands_T_Snorre_16


ParcelHighlands_T_Snorre_FirstWin::
# 1644 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_Text_2, MSGBOX_DEFAULT
# 1645 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R2::
# 1649 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1650 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1651 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_0, MSGBOX_YESNO
# 1652 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R2_2
# 1657 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R2, ParcelHighlands_T_Snorre_R2_Text_2
# 1658 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_3, MSGBOX_DEFAULT
# 1659 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R2_2:
# 1653 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1654 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R3::
# 1663 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1664 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1665 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R3_Text_0, MSGBOX_YESNO
# 1666 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R3_2
# 1671 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R3, ParcelHighlands_T_Snorre_R3_Text_1
# 1672 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R3_Text_2, MSGBOX_DEFAULT
# 1673 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R3_2:
# 1667 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1668 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R4::
# 1677 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1678 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1679 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R4_Text_0, MSGBOX_YESNO
# 1680 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R4_2
# 1685 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R4, ParcelHighlands_T_Snorre_R4_Text_1
# 1686 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R4_Text_2, MSGBOX_DEFAULT
# 1687 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R4_2:
# 1681 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1682 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Snorre_R5::
# 1691 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1692 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1693 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R5_Text_0, MSGBOX_YESNO
# 1694 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Snorre_R5_2
# 1699 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_SNORRE_R5, ParcelHighlands_T_Snorre_R5_Text_1
# 1700 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R5_Text_2, MSGBOX_DEFAULT
# 1701 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Snorre_R5_2:
# 1695 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Snorre_R2_Text_1, MSGBOX_DEFAULT
# 1696 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir::
# 1705 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_TORGEIR, ParcelHighlands_T_Torgeir_Text_0, ParcelHighlands_T_Torgeir_Text_1, ParcelHighlands_T_Torgeir_FirstWin
# 1709 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1710 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Torgeir_3
ParcelHighlands_T_Torgeir_1:
# 1713 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Torgeir_8
ParcelHighlands_T_Torgeir_6:
# 1716 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Torgeir_13
ParcelHighlands_T_Torgeir_11:
# 1719 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Torgeir_18
ParcelHighlands_T_Torgeir_16:
# 1722 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Torgeir_2:
# 1711 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R2
	goto ParcelHighlands_T_Torgeir_1

ParcelHighlands_T_Torgeir_3:
# 1710 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R2
	goto_if 0, ParcelHighlands_T_Torgeir_2
	goto ParcelHighlands_T_Torgeir_1

ParcelHighlands_T_Torgeir_7:
# 1714 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R3
	goto ParcelHighlands_T_Torgeir_6

ParcelHighlands_T_Torgeir_8:
# 1713 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R3
	goto_if 0, ParcelHighlands_T_Torgeir_7
	goto ParcelHighlands_T_Torgeir_6

ParcelHighlands_T_Torgeir_12:
# 1717 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R4
	goto ParcelHighlands_T_Torgeir_11

ParcelHighlands_T_Torgeir_13:
# 1716 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R4
	goto_if 0, ParcelHighlands_T_Torgeir_12
	goto ParcelHighlands_T_Torgeir_11

ParcelHighlands_T_Torgeir_17:
# 1720 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Torgeir_R5
	goto ParcelHighlands_T_Torgeir_16

ParcelHighlands_T_Torgeir_18:
# 1719 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_TORGEIR_R5
	goto_if 0, ParcelHighlands_T_Torgeir_17
	goto ParcelHighlands_T_Torgeir_16


ParcelHighlands_T_Torgeir_FirstWin::
# 1726 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_Text_2, MSGBOX_DEFAULT
# 1727 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R2::
# 1731 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1732 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1733 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_0, MSGBOX_YESNO
# 1734 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R2_2
# 1739 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R2, ParcelHighlands_T_Torgeir_R2_Text_2
# 1740 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_3, MSGBOX_DEFAULT
# 1741 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R2_2:
# 1735 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1736 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R3::
# 1745 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1746 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1747 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R3_Text_0, MSGBOX_YESNO
# 1748 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R3_2
# 1753 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R3, ParcelHighlands_T_Torgeir_R2_Text_2
# 1754 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R3_Text_1, MSGBOX_DEFAULT
# 1755 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R3_2:
# 1749 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1750 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R4::
# 1759 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1760 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1761 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R4_Text_0, MSGBOX_YESNO
# 1762 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R4_2
# 1767 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R4, ParcelHighlands_T_Torgeir_R4_Text_1
# 1768 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R4_Text_2, MSGBOX_DEFAULT
# 1769 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R4_2:
# 1763 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1764 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Torgeir_R5::
# 1773 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1774 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1775 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R5_Text_0, MSGBOX_YESNO
# 1776 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Torgeir_R5_2
# 1781 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_TORGEIR_R5, ParcelHighlands_T_Torgeir_R5_Text_1
# 1782 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R5_Text_2, MSGBOX_DEFAULT
# 1783 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Torgeir_R5_2:
# 1777 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Torgeir_R2_Text_1, MSGBOX_DEFAULT
# 1778 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig::
# 1787 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_HL_HEDVIG, ParcelHighlands_T_Hedvig_Text_0, ParcelHighlands_T_Hedvig_Text_1, ParcelHighlands_T_Hedvig_FirstWin
# 1791 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1792 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelHighlands_T_Hedvig_3
ParcelHighlands_T_Hedvig_1:
# 1795 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelHighlands_T_Hedvig_8
ParcelHighlands_T_Hedvig_6:
# 1798 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelHighlands_T_Hedvig_13
ParcelHighlands_T_Hedvig_11:
# 1801 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelHighlands_T_Hedvig_18
ParcelHighlands_T_Hedvig_16:
# 1804 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_Text_2, MSGBOX_DEFAULT
	end

ParcelHighlands_T_Hedvig_2:
# 1793 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R2
	goto ParcelHighlands_T_Hedvig_1

ParcelHighlands_T_Hedvig_3:
# 1792 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R2
	goto_if 0, ParcelHighlands_T_Hedvig_2
	goto ParcelHighlands_T_Hedvig_1

ParcelHighlands_T_Hedvig_7:
# 1796 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R3
	goto ParcelHighlands_T_Hedvig_6

ParcelHighlands_T_Hedvig_8:
# 1795 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R3
	goto_if 0, ParcelHighlands_T_Hedvig_7
	goto ParcelHighlands_T_Hedvig_6

ParcelHighlands_T_Hedvig_12:
# 1799 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R4
	goto ParcelHighlands_T_Hedvig_11

ParcelHighlands_T_Hedvig_13:
# 1798 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R4
	goto_if 0, ParcelHighlands_T_Hedvig_12
	goto ParcelHighlands_T_Hedvig_11

ParcelHighlands_T_Hedvig_17:
# 1802 "data/maps/ParcelHighlands/scripts.pory"
	goto ParcelHighlands_T_Hedvig_R5
	goto ParcelHighlands_T_Hedvig_16

ParcelHighlands_T_Hedvig_18:
# 1801 "data/maps/ParcelHighlands/scripts.pory"
	checktrainerflag TRAINER_SKALD_HL_HEDVIG_R5
	goto_if 0, ParcelHighlands_T_Hedvig_17
	goto ParcelHighlands_T_Hedvig_16


ParcelHighlands_T_Hedvig_FirstWin::
# 1808 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_Text_2, MSGBOX_DEFAULT
# 1809 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R2::
# 1813 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1814 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1815 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_0, MSGBOX_YESNO
# 1816 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R2_2
# 1821 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R2, ParcelHighlands_T_Hedvig_R2_Text_2
# 1822 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_3, MSGBOX_DEFAULT
# 1823 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R2_2:
# 1817 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1818 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R3::
# 1827 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1828 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1829 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R3_Text_0, MSGBOX_YESNO
# 1830 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R3_2
# 1835 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R3, ParcelHighlands_T_Hedvig_R3_Text_1
# 1836 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R3_Text_2, MSGBOX_DEFAULT
# 1837 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R3_2:
# 1831 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1832 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R4::
# 1841 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1842 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1843 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R4_Text_0, MSGBOX_YESNO
# 1844 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R4_2
# 1849 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R4, ParcelHighlands_T_Hedvig_R4_Text_1
# 1850 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R4_Text_2, MSGBOX_DEFAULT
# 1851 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R4_2:
# 1845 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1846 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_T_Hedvig_R5::
# 1855 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1856 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1857 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R5_Text_0, MSGBOX_YESNO
# 1858 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_T_Hedvig_R5_2
# 1863 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HL_HEDVIG_R5, ParcelHighlands_T_Hedvig_R4_Text_1
# 1864 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R5_Text_1, MSGBOX_DEFAULT
# 1865 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_T_Hedvig_R5_2:
# 1859 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_T_Hedvig_R2_Text_1, MSGBOX_DEFAULT
# 1860 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_PerrinScene::
# 1871 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_5, ParcelHighlands_PerrinScene_2
# 1875 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 1876 "data/maps/ParcelHighlands/scripts.pory"
	playse SE_PIN
# 1877 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1878 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1879 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 35, Movement_ParcelHighlands_PerrinIn
# 1880 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 1881 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1882 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_5, ParcelHighlands_PerrinScene_Text_2
# 1883 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1884 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1885 "data/maps/ParcelHighlands/scripts.pory"
	applymovement 35, Movement_ParcelHighlands_PerrinOut
# 1886 "data/maps/ParcelHighlands/scripts.pory"
	waitmovement 0
# 1887 "data/maps/ParcelHighlands/scripts.pory"
	removeobject 35
# 1888 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_PERRIN_5
# 1889 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1890 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_PerrinScene_2:
# 1872 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelHighlands_PerrinTalk::
# 1894 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1895 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1896 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1897 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


# 1900 "data/maps/ParcelHighlands/scripts.pory"
Movement_ParcelHighlands_PerrinIn:
# 1900 "data/maps/ParcelHighlands/scripts.pory"
	walk_down
# 1900 "data/maps/ParcelHighlands/scripts.pory"
	walk_down
	step_end

# 1901 "data/maps/ParcelHighlands/scripts.pory"
Movement_ParcelHighlands_PerrinOut:
# 1901 "data/maps/ParcelHighlands/scripts.pory"
	walk_up
# 1901 "data/maps/ParcelHighlands/scripts.pory"
	walk_up
	step_end

ParcelHighlands_Epilogue::
# 1905 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 1906 "data/maps/ParcelHighlands/scripts.pory"
	delay 20
# 1907 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Epilogue_Text_0, MSGBOX_DEFAULT
# 1908 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Epilogue_Text_1, MSGBOX_DEFAULT
# 1909 "data/maps/ParcelHighlands/scripts.pory"
	closemessage
# 1910 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 5
# 1911 "data/maps/ParcelHighlands/scripts.pory"
	warp MAP_PARCEL_DELIBIRD, 13, 13
# 1912 "data/maps/ParcelHighlands/scripts.pory"
	waitstate
	end


ParcelHighlands_GymVale_Rematch::
# 1918 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1919 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 1920 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_0, MSGBOX_YESNO
# 1921 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelHighlands_GymVale_Rematch_2
# 1926 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM5_R, ParcelHighlands_GymVale_Rematch_Text_2
# 1927 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_3, MSGBOX_DEFAULT
# 1928 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_GymVale_Rematch_2:
# 1922 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Rematch_Text_1, MSGBOX_DEFAULT
# 1923 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Mareep::
# 1933 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_MAREEP, ParcelHighlands_Mareep_2
# 1936 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Mareep_Text_0, MSGBOX_SIGN
# 1937 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_MAREEP_FOUND
	end

ParcelHighlands_Mareep_2:
	end


ParcelHighlands_SurveyStake::
# 1943 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyStake_Text_0, MSGBOX_SIGN
# 1944 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 4
# 1945 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldSurveyStake
# 1946 "data/maps/ParcelHighlands/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1947 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelHighlands_SurveyStake_3
ParcelHighlands_SurveyStake_1:
	end

ParcelHighlands_SurveyStake_2:
# 1948 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyStake_Text_1, MSGBOX_SIGN
# 1949 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_SECOND_4
	goto ParcelHighlands_SurveyStake_1

ParcelHighlands_SurveyStake_3:
# 1947 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_4, ParcelHighlands_SurveyStake_2
	goto ParcelHighlands_SurveyStake_1


ParcelHighlands_PairSlide::
# 1957 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1958 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_PairSlide_2
# 1963 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_PairSlide_3
# 1969 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_8, MSGBOX_DEFAULT
# 1970 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_9, MSGBOX_DEFAULT
# 1971 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_10, MSGBOX_DEFAULT
# 1972 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_11, MSGBOX_DEFAULT
ParcelHighlands_PairSlide_1:
# 1974 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_PairSlide_2:
# 1959 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_0, MSGBOX_DEFAULT
# 1960 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_1, MSGBOX_DEFAULT
# 1961 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_2, MSGBOX_DEFAULT
# 1962 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_3, MSGBOX_DEFAULT
	goto ParcelHighlands_PairSlide_1

ParcelHighlands_PairSlide_3:
# 1964 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_4, MSGBOX_DEFAULT
# 1965 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_5, MSGBOX_DEFAULT
# 1966 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_6, MSGBOX_DEFAULT
# 1967 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairSlide_Text_7, MSGBOX_DEFAULT
	goto ParcelHighlands_PairSlide_1


ParcelHighlands_PairCentre::
# 1979 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 1980 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_PairCentre_2
# 1986 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_PairCentre_3
# 1992 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_9, MSGBOX_DEFAULT
# 1993 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_10, MSGBOX_DEFAULT
# 1994 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_11, MSGBOX_DEFAULT
# 1995 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_12, MSGBOX_DEFAULT
# 1996 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_13, MSGBOX_DEFAULT
ParcelHighlands_PairCentre_1:
# 1998 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_PairCentre_2:
# 1981 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_0, MSGBOX_DEFAULT
# 1982 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_1, MSGBOX_DEFAULT
# 1983 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_2, MSGBOX_DEFAULT
# 1984 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_3, MSGBOX_DEFAULT
# 1985 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_4, MSGBOX_DEFAULT
	goto ParcelHighlands_PairCentre_1

ParcelHighlands_PairCentre_3:
# 1987 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_5, MSGBOX_DEFAULT
# 1988 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_6, MSGBOX_DEFAULT
# 1989 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_7, MSGBOX_DEFAULT
# 1990 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairCentre_Text_8, MSGBOX_DEFAULT
	goto ParcelHighlands_PairCentre_1


ParcelHighlands_Stringer::
# 2005 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 2006 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 2007 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_Stringer_2
# 2009 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Stringer_3
# 2012 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Stringer_Text_2, MSGBOX_DEFAULT
ParcelHighlands_Stringer_1:
# 2014 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Stringer_2:
# 2008 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelHighlands_Stringer_1

ParcelHighlands_Stringer_3:
# 2010 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelHighlands_Stringer_1


ParcelHighlands_Carrier::
# 2021 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 2022 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 2023 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_EPILOGUE_DONE, ParcelHighlands_Carrier_3
ParcelHighlands_Carrier_1:
# 2028 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LETTER_DONE, ParcelHighlands_Carrier_7
# 2030 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LETTER, ParcelHighlands_Carrier_8
# 2039 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Carrier_Text_4, MSGBOX_DEFAULT
# 2040 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_LETTER
ParcelHighlands_Carrier_6:
# 2042 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Carrier_2:
# 2024 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Carrier_Text_0, MSGBOX_DEFAULT
# 2025 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Carrier_3:
# 2023 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LETTER_DONE, ParcelHighlands_Carrier_2
	goto ParcelHighlands_Carrier_1

ParcelHighlands_Carrier_7:
# 2029 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Carrier_Text_1, MSGBOX_DEFAULT
	goto ParcelHighlands_Carrier_6

ParcelHighlands_Carrier_8:
# 2031 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_LETTER_FOUND, ParcelHighlands_Carrier_12
# 2036 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Carrier_Text_3, MSGBOX_DEFAULT
	goto ParcelHighlands_Carrier_6

ParcelHighlands_Carrier_12:
# 2032 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Carrier_Text_2, MSGBOX_DEFAULT
# 2033 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 2
# 2034 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_LETTER_DONE
	goto ParcelHighlands_Carrier_6


ParcelHighlands_FindFrost::
# 2049 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FROST, ParcelHighlands_FindFrost_4
ParcelHighlands_FindFrost_3:
# 2053 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FindFrost_Text_1, MSGBOX_SIGN
ParcelHighlands_FindFrost_1:
	end

ParcelHighlands_FindFrost_2:
# 2050 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FindFrost_Text_0, MSGBOX_SIGN
# 2051 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_FROST_FOUND
	goto ParcelHighlands_FindFrost_1

ParcelHighlands_FindFrost_4:
# 2049 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FROST_FOUND, ParcelHighlands_FindFrost_2
	goto ParcelHighlands_FindFrost_3


ParcelHighlands_PairThaw::
# 2059 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 2060 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_PairThaw_2
# 2064 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_PairThaw_3
# 2070 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_7, MSGBOX_DEFAULT
# 2071 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_8, MSGBOX_DEFAULT
# 2072 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_9, MSGBOX_DEFAULT
ParcelHighlands_PairThaw_1:
# 2074 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_PairThaw_2:
# 2061 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_0, MSGBOX_DEFAULT
# 2062 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_1, MSGBOX_DEFAULT
# 2063 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_2, MSGBOX_DEFAULT
	goto ParcelHighlands_PairThaw_1

ParcelHighlands_PairThaw_3:
# 2065 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_3, MSGBOX_DEFAULT
# 2066 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_4, MSGBOX_DEFAULT
# 2067 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_5, MSGBOX_DEFAULT
# 2068 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairThaw_Text_6, MSGBOX_DEFAULT
	goto ParcelHighlands_PairThaw_1


ParcelHighlands_Board1::
# 2081 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Board1_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_Board2::
# 2086 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Board2_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_PairRoad::
# 2093 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 2094 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_PairRoad_2
# 2099 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_PairRoad_3
# 2104 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_7, MSGBOX_DEFAULT
# 2105 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_8, MSGBOX_DEFAULT
# 2106 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_9, MSGBOX_DEFAULT
# 2107 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_10, MSGBOX_DEFAULT
ParcelHighlands_PairRoad_1:
# 2109 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_PairRoad_2:
# 2095 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_0, MSGBOX_DEFAULT
# 2096 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_1, MSGBOX_DEFAULT
# 2097 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_2, MSGBOX_DEFAULT
# 2098 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_3, MSGBOX_DEFAULT
	goto ParcelHighlands_PairRoad_1

ParcelHighlands_PairRoad_3:
# 2100 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_4, MSGBOX_DEFAULT
# 2101 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_5, MSGBOX_DEFAULT
# 2102 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairRoad_Text_6, MSGBOX_DEFAULT
	goto ParcelHighlands_PairRoad_1


ParcelHighlands_FindStep::
# 2116 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALD_Q_STEP, ParcelHighlands_FindStep_4
ParcelHighlands_FindStep_3:
# 2120 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FindStep_Text_1, MSGBOX_SIGN
ParcelHighlands_FindStep_1:
	end

ParcelHighlands_FindStep_2:
# 2117 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FindStep_Text_0, MSGBOX_SIGN
# 2118 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALD_Q_STEP_FOUND
	goto ParcelHighlands_FindStep_1

ParcelHighlands_FindStep_4:
# 2116 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_STEP_FOUND, ParcelHighlands_FindStep_2
	goto ParcelHighlands_FindStep_3


ParcelHighlands_Board3::
# 2128 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Board3_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_Board4::
# 2135 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Board4_Text_0, MSGBOX_SIGN
	end


ParcelHighlands_PairWell::
# 2142 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 2143 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelHighlands_PairWell_2
# 2147 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_PairWell_3
# 2152 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_6, MSGBOX_DEFAULT
# 2153 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_7, MSGBOX_DEFAULT
# 2154 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_8, MSGBOX_DEFAULT
ParcelHighlands_PairWell_1:
# 2156 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_PairWell_2:
# 2144 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_0, MSGBOX_DEFAULT
# 2145 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_1, MSGBOX_DEFAULT
# 2146 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_2, MSGBOX_DEFAULT
	goto ParcelHighlands_PairWell_1

ParcelHighlands_PairWell_3:
# 2148 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_3, MSGBOX_DEFAULT
# 2149 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_4, MSGBOX_DEFAULT
# 2150 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_PairWell_Text_5, MSGBOX_DEFAULT
	goto ParcelHighlands_PairWell_1


ParcelHighlands_Board5::
# 2163 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Board5_Text_0, MSGBOX_SIGN
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
	.string "ILEX: A hand's width in. Same as last\n"
	.string "season, and the season before. Three\l"
	.string "seasons the same is the first thing up\l"
	.string "here I've been able to call stable.\p"
	.string "I don't call it that. Not yet.$"

ParcelHighlands_Ilex_Text_1:
# 128 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: The hearings cite the cloth now.\n"
	.string "Decades of it, read into the record by a\l"
	.string "clerk who pronounced everything\l"
	.string "correctly.\p"
	.string "The band is still shrinking. The number\n"
	.string "doesn't know it's been believed.$"

ParcelHighlands_Ilex_Text_2:
# 136 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: A hand's width in. Same as last\n"
	.string "season. I don't explain it twice.$"

ParcelHighlands_Ilex_Text_3:
# 140 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Last season these stood wider.\n"
	.string "The season before, wider still.\p"
	.string "This is the band the cold-lovers have\n"
	.string "left. The SNEASEL. The SWINUB that root\l"
	.string "the high snow. Pushed up the slope each\l"
	.string "year into a thinner ring of cold.$"

ParcelHighlands_Ilex_Text_4:
# 141 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Above this is bare rock and sky.\n"
	.string "There is no higher for them to climb.\p"
	.string "I stopped recording where they are. Now\n"
	.string "I record how much less of it there is.$"

ParcelHighlands_Ilex_Text_5:
# 142 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: And when the ring closes?$"

ParcelHighlands_Ilex_Text_6:
# 143 "data/maps/ParcelHighlands/scripts.pory"
	.string "ILEX: Then I'll have a number for that,\n"
	.string "too.\p"
	.string "Downslope the red cloth marks what's\n"
	.string "still there. Up here it marks what's\l"
	.string "leaving. Same cloth. That's the part\l"
	.string "they never understand.$"

ParcelHighlands_Hollis_Text_0:
# 154 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: The injunction holds. I check\n"
	.string "it the way I used to check the renewals.\l"
	.string "Different signature on the bottom.\l"
	.string "Mine, as it happens.\p"
	.string "Coffee's still warm.$"

ParcelHighlands_Hollis_Text_1:
# 159 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: Enjoined pending survey. Your\n"
	.string "survey, as it happens. There's a court\l"
	.string "seal on the housing; it's new enough to\l"
	.string "still lie flat.\p"
	.string "The relocation grants are frozen with\n"
	.string "the rest of it, you know. The warming\l"
	.string "centre too. That's the part nobody\l"
	.string "prices.$"

ParcelHighlands_Hollis_Text_2:
# 167 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: The coffee's still warm, RANGER.\n"
	.string "The offer stands. So does the ground,\l"
	.string "for now.$"

ParcelHighlands_Hollis_Text_3:
# 171 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: You must be the RANGER they\n"
	.string "sent up. HOLLIS AUNE, MEREHOLT\l"
	.string "FOUNDATION. Come in out of the wind,\l"
	.string "there's coffee.\p"
	.string "You've seen the centre below? We\n"
	.string "opened it Tuesday. Forty beds, a stove\l"
	.string "that works, a nurse on Thursdays. I cut\l"
	.string "the ribbon myself.$"

ParcelHighlands_Hollis_Text_4:
# 172 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: I know how the rig reads to you.\n"
	.string "But the thaw is coming whether we bore\l"
	.string "it or not. Better someone's here\l"
	.string "measuring it, funding the relocation\l"
	.string "grants, the centre, the training for\l"
	.string "what comes next.$"

ParcelHighlands_Hollis_Text_5:
# 173 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: None of that is a lie. Check\n"
	.string "every line. We're doing real good up\l"
	.string "here, beside the real harm. That's not a\l"
	.string "contradiction. That's just how it\l"
	.string "actually works.$"

ParcelHighlands_Hollis_Text_6:
# 174 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: I believe you. That isn't\n"
	.string "the part I'm writing down.$"

ParcelHighlands_Hollis_Text_7:
# 175 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOLLIS: No. I don't suppose it is.\p"
	.string "Then let me be kind plainly, so you don't\n"
	.string "mistake it for a threat. Our science is\l"
	.string "the only science up here. A survey that\l"
	.string "contradicts ours doesn't stop the rig.\l"
	.string "It just defunds the coffee.$"

ParcelHighlands_HollisTech_Text_0:
# 184 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Capped. Logged.\n"
	.string "'Exploratory' stays 'exploratory' in a\l"
	.string "sealed box in the coast office.\p"
	.string "I read the gauges on the cap now.\n"
	.string "Nothing. Nothing is a reading.$"

ParcelHighlands_HollisTech_Text_1:
# 189 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Core samples stopped. The\n"
	.string "bore's capped pending survey. The bore\l"
	.string "log said 'exploratory' for two years.\l"
	.string "The hearing read the word aloud and the\l"
	.string "room laughed. Not kindly.$"

ParcelHighlands_HollisTech_Text_2:
# 194 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: The coast office sent the\n"
	.string "bore log back with a note: 'exploratory'\l"
	.string "is to stay 'exploratory'. Somebody's\l"
	.string "lawyer read your coast report.\p"
	.string "Core samples still go down twice a week.\n"
	.string "I've started photographing them before\l"
	.string "they go. Forms say what's printed.\l"
	.string "Photographs don't.$"

ParcelHighlands_HollisTech_Text_3:
# 198 "data/maps/ParcelHighlands/scripts.pory"
	.string "TECHNICIAN: Core samples go down to\n"
	.string "the coast office twice a week. The bore\l"
	.string "log says 'exploratory'. The bore log's a\l"
	.string "form. Forms say what's printed on them.$"

ParcelHighlands_Homesteader_Text_0:
# 208 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Ewes are down the valley.\n"
	.string "The lambing field's a pond. I named it.\p"
	.string "A field that's a pond needs a name, or\n"
	.string "you keep calling it the field.$"

ParcelHighlands_Homesteader_Text_1:
# 214 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Water. …Then it's not\n"
	.string "freezing back this year either. I'll\l"
	.string "move the ewes down before I'm told to.\l"
	.string "Nobody tells you in time up here; you\l"
	.string "have to read it yourself.\p"
	.string "Here. From the box the Foundation sent.\n"
	.string "I'd rather you had it than they thought\l"
	.string "I'd used it.$"

ParcelHighlands_Homesteader_Text_2:
# 218 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: The lambing field, above\n"
	.string "the thaw ponds. The crack. Ice or water\l"
	.string "in the bottom.$"

ParcelHighlands_Homesteader_Text_3:
# 223 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: The lambing field above\n"
	.string "the thaw ponds has cracked across. Not\l"
	.string "a slide; a crack, straight, like somebody\l"
	.string "ruled it. I'd like to know if it's the one\l"
	.string "the geologist warned about.\p"
	.string "Go and look at it. Tell me if there's ice\n"
	.string "in the bottom. If there's ice, it's the\l"
	.string "ground. If there's water, it's worse.$"

ParcelHighlands_Homesteader_Text_4:
# 229 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: SHIFTED, you wrote, and\n"
	.string "the hearing wrote it after you. The\l"
	.string "ground didn't hear. The leases did.\l"
	.string "Pending survey, they say. I'll be here\l"
	.string "for the survey.$"

ParcelHighlands_Homesteader_Text_5:
# 238 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You said it. SHIFTED.\n"
	.string "First one of your lot who didn't say\l"
	.string "'transitioning'.\p"
	.string "Take this. The SWINUB laid it in the\n"
	.string "spring. There won't be another born up\l"
	.string "here. Hatch it somewhere with a winter.$"

ParcelHighlands_Homesteader_Text_6:
# 241 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Your belt's full. Come\n"
	.string "back with room. It'll keep. It's the only\l"
	.string "thing up here that will.$"

ParcelHighlands_Homesteader_Text_7:
# 247 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Don't name it after me.\n"
	.string "Name it after the slope.$"

ParcelHighlands_Homesteader_Text_8:
# 252 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Somewhere with a winter.\n"
	.string "You promised.$"

ParcelHighlands_Homesteader_Text_9:
# 256 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Another log. It'll sit\n"
	.string "crooked. Everything does, up here, now.$"

ParcelHighlands_Homesteader_Text_10:
# 260 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: You're not from the\n"
	.string "company. Good. I'm tired of being\l"
	.string "adapted at.\p"
	.string "Eight generations of us wintered this\n"
	.string "slope. You knew where you stood. The\l"
	.string "ground held, the cold came, the cold\l"
	.string "went, the ground held again.$"

ParcelHighlands_Homesteader_Text_11:
# 261 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: Now the ground breathes.\n"
	.string "The doors won't shut true. The near\l"
	.string "corner's a hand's depth into the mud\l"
	.string "since spring. The well runs brown in a\l"
	.string "month it never ran brown.$"

ParcelHighlands_Homesteader_Text_12:
# 262 "data/maps/ParcelHighlands/scripts.pory"
	.string "HOMESTEADER: The FOUNDATION's grant\n"
	.string "will move me somewhere warm and write\l"
	.string "'resilience' on the cheque. The young\l"
	.string "ones already signed. I don't blame them.\p"
	.string "The ground is dying. They call it\n"
	.string "opportunity. I call it leaving.$"

ParcelHighlands_Hale_Text_0:
# 273 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Seasons. We're one more in. The\n"
	.string "record kept the mountain again, and it\l"
	.string "didn't keep all of it.\p"
	.string "Write both. That's the job, and nobody\n"
	.string "will ever thank you for the second half.$"

ParcelHighlands_Hale_Text_1:
# 278 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record and the\n"
	.string "record kept the mountain, for a season.\l"
	.string "That's the whole of the work up here.\l"
	.string "Seasons. One at a time.$"

ParcelHighlands_Hale_Text_2:
# 283 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: You kept the record. That's the\n"
	.string "whole of the work up here.\p"
	.string "Someday someone reads it and knows\n"
	.string "exactly what was lost, and when, and\l"
	.string "who was smiling while it went.$"

ParcelHighlands_Hale_Text_3:
# 291 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: The sunk ponds. The drunk trees.\n"
	.string "The band ILEX measures. The lowlander\l"
	.string "in the scree. The drill. The woman who\l"
	.string "won't take the grant.\p"
	.string "Name it.$"

ParcelHighlands_Hale_Text_4:
# 293 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: SHIFTED.\p"
	.string "The frozen ground was the keystone,\n"
	.string "and it's going. The cold guild is gone\l"
	.string "from everywhere but that last ring.\l"
	.string "What moves in is whatever moves in\l"
	.string "anywhere. A poorer place, settling into\l"
	.string "being poorer.$"

ParcelHighlands_Hale_Text_5:
# 294 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: So what do we DO. There has\n"
	.string "to be something.$"

ParcelHighlands_Hale_Text_6:
# 295 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There isn't. Not here. You cannot\n"
	.string "refreeze a mountain.\p"
	.string "The runoff you can slow. The cut you\n"
	.string "can fight. This you cannot put back.\l"
	.string "It's the first time you'll have stood\l"
	.string "somewhere and known that for certain.$"

ParcelHighlands_Hale_Text_7:
# 296 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: So the work changes. Not save it.\n"
	.string "WITNESS it. Record it true, name the\l"
	.string "hand that's on it, and carry that down\l"
	.string "to a place you still can save.\p"
	.string "That's not surrender. Surrender is\n"
	.string "letting them file this as 'adaptation'\l"
	.string "and signing underneath.$"

ParcelHighlands_Hale_Text_8:
# 299 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Highland Certification. The\n"
	.string "hardest one to earn, because there's\l"
	.string "nothing to fix and you had to say so.$"

ParcelHighlands_Hale_Text_9:
# 305 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: There's a ferry to DELIBIRD ISLE\n"
	.string "from SALTWICK when your legs are under\l"
	.string "you. They hold a festival out there, on\l"
	.string "ground exactly like this.\p"
	.string "Go and see what people do with grief\n"
	.string "when they've agreed, together, not to\l"
	.string "name it.$"

ParcelHighlands_Hale_Text_10:
# 309 "data/maps/ParcelHighlands/scripts.pory"
	.string "HALE: Don't name it from up here,\n"
	.string "looking down. Walk it first. The thaw\l"
	.string "ponds, the leaning trees, the band ILEX\l"
	.string "works, the drill, the lowlander that's\l"
	.string "moved in, the holdout who won't go.\p"
	.string "Then come back and tell me what it is.$"

ParcelHighlands_SignSummit_Text_0:
# 331 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL SUMMIT. 1,140 m.\p"
	.string "Corps survey point. Red cloth marks the\n"
	.string "cold band. Do not move the stakes.$"

ParcelHighlands_SignCentre_Text_0:
# 335 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL WARMING CENTRE -- a MEREHOLT\n"
	.string "FOUNDATION community partnership.\p"
	.string "Forty beds. Relocation advice daily.\n"
	.string "Opened by H. AUNE.$"

ParcelHighlands_SurveyorTrainer_Text_0:
# 342 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: FOUNDATION crew. You'll be the\n"
	.string "RANGER poking at our boreholes.\p"
	.string "Keep it sporting. Mons, not paperwork.$"

ParcelHighlands_SurveyorTrainer_Text_1:
# 343 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Tch. Fine. You're not wrong about\n"
	.string "the ground. I just get paid not to write\l"
	.string "it down.$"

ParcelHighlands_SurveyorTrainer_Text_2:
# 358 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Off the record? I've moved my\n"
	.string "stakes up the slope three years\l"
	.string "running. Same line your ILEX works.\p"
	.string "We measure the same thing. They just\n"
	.string "pay me to call it opportunity.$"

ParcelHighlands_SurveyorTrainer_R2_Text_0:
# 369 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelHighlands_SurveyorTrainer_R2_Text_1:
# 371 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Fine. Same spot.$"

ParcelHighlands_SurveyorTrainer_R2_Text_2:
# 375 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: That's the one I wanted to see.$"

ParcelHighlands_SurveyorTrainer_R2_Text_3:
# 376 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_SurveyorTrainer_R3_Text_0:
# 383 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_SurveyorTrainer_R3_Text_1:
# 389 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: …Fair.$"

ParcelHighlands_SurveyorTrainer_R3_Text_2:
# 390 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_SurveyorTrainer_R4_Text_0:
# 397 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_SurveyorTrainer_R4_Text_1:
# 403 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Right. That's the whole of it.$"

ParcelHighlands_SurveyorTrainer_R4_Text_2:
# 404 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_SurveyorTrainer_R5_Text_0:
# 411 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_SurveyorTrainer_R5_Text_1:
# 418 "data/maps/ParcelHighlands/scripts.pory"
	.string "KASS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_ValeGate_Text_0:
# 430 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: That's far enough.$"

ParcelHighlands_ValeGate_Text_1:
# 436 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Highland Operations. Past this\n"
	.string "point the ground is no longer ours to\l"
	.string "fix. Only to clear people off of, in\l"
	.string "order.\p"
	.string "Nobody goes up this slope on my ledger\n"
	.string "unproven. Show me you've earned the\l"
	.string "meltwater permit.$"

ParcelHighlands_ValeGate_Text_2:
# 437 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Highland Operations examines\n"
	.string "before it clears. The slide above\l"
	.string "Haukfell. A weather event, as the Board\l"
	.string "has it?$"

ParcelHighlands_ValeGate_Text_3:
# 439 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The Board thanks you. The ground\n"
	.string "went soft under a casing two years ago;\l"
	.string "the spring only finished it.\p"
	.string "Weather is what you say when the cause\n"
	.string "has a licence number. Read the slope on\l"
	.string "your way up.$"

ParcelHighlands_ValeGate_Text_4:
# 441 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: No. The ground went soft under a\n"
	.string "drill casing and a wet spring finished\l"
	.string "what the casing started. Weather is the\l"
	.string "alibi.\p"
	.string "You read the slope. Now cross what it's\n"
	.string "made.$"

ParcelHighlands_ValeGate_Text_5:
# 444 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. You go up with it\n"
	.string "signed.$"

ParcelHighlands_ValeGate_Text_6:
# 447 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Vale clearance. Line item 05. The\n"
	.string "last one Highland Operations issues\l"
	.string "before the water.\p"
	.string "It certifies you fit to cross what the\n"
	.string "thaw has put in the way.$"

ParcelHighlands_ValeGate_Text_7:
# 449 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: SURF. A meltwater permit, in plain\n"
	.string "terms. It moves you over the standing\l"
	.string "thaw the slope keeps making.\p"
	.string "There's more of it every season. We\n"
	.string "don't advertise that.$"

ParcelHighlands_GymVale_Text_0:
# 463 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The ferry runs from the lowland\n"
	.string "landing. Take what you witnessed here\l"
	.string "with you. It's the only thing that\l"
	.string "leaves this slope unspoiled.$"

ParcelHighlands_Asbjorn_Text_0:
# 474 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The foothills are the easy\n"
	.string "bit. Enjoy them. Battle?$"

ParcelHighlands_Asbjorn_Text_1:
# 475 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Easy bit's over.$"

ParcelHighlands_Asbjorn_Text_2:
# 490 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The trail above the homestead\n"
	.string "went last night. Rocks, boulders. The\l"
	.string "FOUNDATION crew looked at it and went\l"
	.string "for coffee.$"

ParcelHighlands_Asbjorn_R2_Text_0:
# 501 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Asbjorn_R2_Text_1:
# 503 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: No hurry. The water keeps.$"

ParcelHighlands_Asbjorn_R2_Text_2:
# 507 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Noted. Properly, this time.$"

ParcelHighlands_Asbjorn_R2_Text_3:
# 508 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Asbjorn_R3_Text_0:
# 515 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_Asbjorn_R3_Text_1:
# 521 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Right. That's the whole of it.$"

ParcelHighlands_Asbjorn_R3_Text_2:
# 522 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Asbjorn_R4_Text_0:
# 529 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Asbjorn_R4_Text_1:
# 535 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: …Again, then. Later.$"

ParcelHighlands_Asbjorn_R4_Text_2:
# 536 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Asbjorn_R5_Text_0:
# 543 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Asbjorn_R5_Text_1:
# 550 "data/maps/ParcelHighlands/scripts.pory"
	.string "ASBJORN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Brynjar_Text_0:
# 556 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: My NUMEL likes the ground up\n"
	.string "here. It's warm. It shouldn't be warm.\l"
	.string "Battle.$"

ParcelHighlands_Brynjar_Text_1:
# 557 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Still warm.$"

ParcelHighlands_Brynjar_Text_2:
# 572 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Warm ground, cold air. Camp on\n"
	.string "it and you wake up in a puddle that\l"
	.string "wasn't there.$"

ParcelHighlands_Brynjar_R2_Text_0:
# 583 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlands_Brynjar_R2_Text_1:
# 585 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: No hurry. The water keeps.$"

ParcelHighlands_Brynjar_R2_Text_2:
# 589 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: …Fair.$"

ParcelHighlands_Brynjar_R2_Text_3:
# 590 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Brynjar_R3_Text_0:
# 597 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_Brynjar_R3_Text_1:
# 603 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: …Again, then. Later.$"

ParcelHighlands_Brynjar_R3_Text_2:
# 604 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Brynjar_R4_Text_0:
# 611 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Brynjar_R4_Text_1:
# 618 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Brynjar_R5_Text_0:
# 625 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlands_Brynjar_R5_Text_1:
# 632 "data/maps/ParcelHighlands/scripts.pory"
	.string "BRYNJAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Dagny_Text_0:
# 638 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: I visit the old woman. Somebody\n"
	.string "should. She won't take the grant, so\l"
	.string "they've stopped visiting. Battle first.$"

ParcelHighlands_Dagny_Text_1:
# 639 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: She'll like you. She doesn't like\n"
	.string "anyone.$"

ParcelHighlands_Dagny_Text_2:
# 654 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They built the warming centre at\n"
	.string "the bottom of the hill so she'd have\l"
	.string "somewhere to go. She hasn't gone.$"

ParcelHighlands_Dagny_R2_Text_0:
# 665 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlands_Dagny_R2_Text_1:
# 667 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Fine. Same spot.$"

ParcelHighlands_Dagny_R2_Text_2:
# 671 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: That's the one I wanted to see.$"

ParcelHighlands_Dagny_R2_Text_3:
# 672 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Dagny_R3_Text_0:
# 679 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_Dagny_R3_Text_1:
# 686 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Dagny_R4_Text_0:
# 693 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlands_Dagny_R4_Text_1:
# 700 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Dagny_R5_Text_0:
# 707 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Dagny_R5_Text_1:
# 713 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: …Again, then. Later.$"

ParcelHighlands_Dagny_R5_Text_2:
# 714 "data/maps/ParcelHighlands/scripts.pory"
	.string "DAGNY: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_Eivind_Text_0:
# 720 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Three GEODUDE from the slide.\n"
	.string "The slide gave them up for free. Battle.$"

ParcelHighlands_Eivind_Text_1:
# 721 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The slide gives. The slide\n"
	.string "takes.$"

ParcelHighlands_Eivind_Text_2:
# 736 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: The rock up here used to be\n"
	.string "frozen into the hill. Now it's just lying\l"
	.string "on it.$"

ParcelHighlands_Eivind_R2_Text_0:
# 747 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Eivind_R2_Text_1:
# 749 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: No hurry. The water keeps.$"

ParcelHighlands_Eivind_R2_Text_2:
# 753 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Right. That's the whole of it.$"

ParcelHighlands_Eivind_R2_Text_3:
# 754 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Eivind_R3_Text_0:
# 761 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Eivind_R3_Text_1:
# 767 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: …Again, then. Later.$"

ParcelHighlands_Eivind_R3_Text_2:
# 768 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Eivind_R4_Text_0:
# 775 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Eivind_R4_Text_1:
# 782 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_Eivind_R5_Text_0:
# 789 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Eivind_R5_Text_1:
# 795 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Noted. Properly, this time.$"

ParcelHighlands_Eivind_R5_Text_2:
# 796 "data/maps/ParcelHighlands/scripts.pory"
	.string "EIVIND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Finn_Text_0:
# 802 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: SWELLOW nest on the cliffs now.\n"
	.string "They never used to come this high.\l"
	.string "Battle!$"

ParcelHighlands_Finn_Text_1:
# 803 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Never used to lose, either.$"

ParcelHighlands_Finn_Text_2:
# 818 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: New birds, new rats, new\n"
	.string "everything. Old woman says it's the end\l"
	.string "of the world. I think it's just a\l"
	.string "different world. Is that worse?$"

ParcelHighlands_Finn_R2_Text_0:
# 829 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelHighlands_Finn_R2_Text_1:
# 831 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: No hurry. The water keeps.$"

ParcelHighlands_Finn_R2_Text_2:
# 835 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Noted. Properly, this time.$"

ParcelHighlands_Finn_R2_Text_3:
# 836 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Finn_R3_Text_0:
# 843 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelHighlands_Finn_R3_Text_1:
# 850 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Finn_R4_Text_0:
# 857 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Finn_R4_Text_1:
# 863 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: …Again, then. Later.$"

ParcelHighlands_Finn_R4_Text_2:
# 864 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Finn_R5_Text_0:
# 871 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelHighlands_Finn_R5_Text_1:
# 877 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: That's the one I wanted to see.$"

ParcelHighlands_Finn_R5_Text_2:
# 878 "data/maps/ParcelHighlands/scripts.pory"
	.string "FINN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlands_Grete_Text_0:
# 884 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Cadet GRETE. ILEX has me on the\n"
	.string "lower stakes. Spar, then I'll tell you\l"
	.string "where she is.$"

ParcelHighlands_Grete_Text_1:
# 885 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: She's on the plateau. The band.\n"
	.string "You'll know it when you see the cloth.$"

ParcelHighlands_Grete_Text_2:
# 900 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: ILEX doesn't come down for days.\n"
	.string "She says the band moves at night and\l"
	.string "somebody should be there.$"

ParcelHighlands_Grete_R2_Text_0:
# 911 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelHighlands_Grete_R2_Text_1:
# 913 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Another time, then.$"

ParcelHighlands_Grete_R2_Text_2:
# 917 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Right. That's the whole of it.$"

ParcelHighlands_Grete_R2_Text_3:
# 918 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Grete_R3_Text_0:
# 925 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlands_Grete_R3_Text_1:
# 932 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Grete_R4_Text_0:
# 939 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Grete_R4_Text_1:
# 945 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Still yours.$"

ParcelHighlands_Grete_R4_Text_2:
# 946 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Grete_R5_Text_0:
# 953 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Grete_R5_Text_1:
# 960 "data/maps/ParcelHighlands/scripts.pory"
	.string "GRETE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Hauk_Text_0:
# 966 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: FOUNDATION bore crew. Off shift.\n"
	.string "I'll battle, but I won't talk about the\l"
	.string "core samples.$"

ParcelHighlands_Hauk_Text_1:
# 967 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fine. There's gas in the core.\n"
	.string "That's all. Everyone knows.$"

ParcelHighlands_Hauk_Text_2:
# 982 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: 'Exploratory.' You explore what\n"
	.string "you mean to take. That's what the word\l"
	.string "means.$"

ParcelHighlands_Hauk_R2_Text_0:
# 993 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelHighlands_Hauk_R2_Text_1:
# 995 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Another time, then.$"

ParcelHighlands_Hauk_R2_Text_2:
# 999 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Fair.$"

ParcelHighlands_Hauk_R2_Text_3:
# 1000 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Hauk_R3_Text_0:
# 1007 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelHighlands_Hauk_R3_Text_1:
# 1013 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: …Again, then. Later.$"

ParcelHighlands_Hauk_R3_Text_2:
# 1014 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Hauk_R4_Text_0:
# 1021 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelHighlands_Hauk_R4_Text_1:
# 1027 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Noted. Properly, this time.$"

ParcelHighlands_Hauk_R4_Text_2:
# 1028 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Hauk_R5_Text_0:
# 1035 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_Hauk_R5_Text_1:
# 1041 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's the one I wanted to see.$"

ParcelHighlands_Hauk_R5_Text_2:
# 1042 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUK: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_Jarle_Text_0:
# 1048 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: The plateau's the top of the\n"
	.string "world. My world, anyway. Battle for it.$"

ParcelHighlands_Jarle_Text_1:
# 1049 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Your world, then. Mind the\n"
	.string "stakes.$"

ParcelHighlands_Jarle_Text_2:
# 1064 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Don't move the red stakes. ILEX\n"
	.string "will know. ILEX always knows.$"

ParcelHighlands_Jarle_R2_Text_0:
# 1075 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Jarle_R2_Text_1:
# 1077 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: No hurry. The water keeps.$"

ParcelHighlands_Jarle_R2_Text_2:
# 1081 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: That's the one I wanted to see.$"

ParcelHighlands_Jarle_R2_Text_3:
# 1082 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Jarle_R3_Text_0:
# 1089 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_Jarle_R3_Text_1:
# 1095 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Noted. Properly, this time.$"

ParcelHighlands_Jarle_R3_Text_2:
# 1096 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Jarle_R4_Text_0:
# 1103 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Jarle_R4_Text_1:
# 1110 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Jarle_R5_Text_0:
# 1117 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Jarle_R5_Text_1:
# 1124 "data/maps/ParcelHighlands/scripts.pory"
	.string "JARLE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Kjersti_Text_0:
# 1130 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds up here are new.\n"
	.string "Black water. My SNORUNT won't go near\l"
	.string "them. Battle?$"

ParcelHighlands_Kjersti_Text_1:
# 1131 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Wouldn't go near you either,\n"
	.string "now.$"

ParcelHighlands_Kjersti_Text_2:
# 1146 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The ponds weren't on last\n"
	.string "year's map. The map's from the\l"
	.string "FOUNDATION. They print a new one every\l"
	.string "spring.$"

ParcelHighlands_Kjersti_R2_Text_0:
# 1157 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_Kjersti_R2_Text_1:
# 1159 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Fine. Same spot.$"

ParcelHighlands_Kjersti_R2_Text_2:
# 1163 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Still yours.$"

ParcelHighlands_Kjersti_R2_Text_3:
# 1164 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlands_Kjersti_R3_Text_0:
# 1171 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlands_Kjersti_R3_Text_1:
# 1178 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlands_Kjersti_R4_Text_0:
# 1185 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Kjersti_R4_Text_1:
# 1191 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: …Again, then. Later.$"

ParcelHighlands_Kjersti_R4_Text_2:
# 1192 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Kjersti_R5_Text_0:
# 1199 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Kjersti_R5_Text_1:
# 1206 "data/maps/ParcelHighlands/scripts.pory"
	.string "KJERSTI: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Leidulf_Text_0:
# 1212 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I came up for the cold. There's\n"
	.string "less of it than the brochure said.\l"
	.string "Battle.$"

ParcelHighlands_Leidulf_Text_1:
# 1213 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Less of that than the\n"
	.string "brochure said, too.$"

ParcelHighlands_Leidulf_Text_2:
# 1228 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The brochure's the\n"
	.string "FOUNDATION's. 'Alpine experience.' The\l"
	.string "alpine's leaving. The experience is\l"
	.string "watching it go.$"

ParcelHighlands_Leidulf_R2_Text_0:
# 1239 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelHighlands_Leidulf_R2_Text_1:
# 1241 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_Leidulf_R2_Text_2:
# 1245 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Noted. Properly, this time.$"

ParcelHighlands_Leidulf_R2_Text_3:
# 1246 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_Leidulf_R3_Text_0:
# 1253 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelHighlands_Leidulf_R3_Text_1:
# 1259 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: …Fair.$"

ParcelHighlands_Leidulf_R3_Text_2:
# 1260 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_Leidulf_R4_Text_0:
# 1267 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelHighlands_Leidulf_R4_Text_1:
# 1274 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Leidulf_R5_Text_0:
# 1281 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_Leidulf_R5_Text_1:
# 1287 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlands_Leidulf_R5_Text_2:
# 1288 "data/maps/ParcelHighlands/scripts.pory"
	.string "LEIDULF: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_Nora_Text_0:
# 1294 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The mountain is thinking about\n"
	.string "falling. Slowly. Can you hear it? Battle\l"
	.string "me.$"

ParcelHighlands_Nora_Text_1:
# 1295 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: You heard it.$"

ParcelHighlands_Nora_Text_2:
# 1310 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: The woman at the bore thinks\n"
	.string "loud, warm thoughts. She means every\l"
	.string "one of them. That's what frightens me.$"

ParcelHighlands_Nora_R2_Text_0:
# 1321 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelHighlands_Nora_R2_Text_1:
# 1323 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Suit yourself. I'm here.$"

ParcelHighlands_Nora_R2_Text_2:
# 1327 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Still yours.$"

ParcelHighlands_Nora_R2_Text_3:
# 1328 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Nora_R3_Text_0:
# 1335 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Nora_R3_Text_1:
# 1341 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: …Again, then. Later.$"

ParcelHighlands_Nora_R3_Text_2:
# 1342 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Nora_R4_Text_0:
# 1349 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_Nora_R4_Text_1:
# 1356 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Nora_R5_Text_0:
# 1363 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Nora_R5_Text_1:
# 1369 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: Right. That's the whole of it.$"

ParcelHighlands_Nora_R5_Text_2:
# 1370 "data/maps/ParcelHighlands/scripts.pory"
	.string "NORA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_Peder_Text_0:
# 1376 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Nobody sees me on the rock.\n"
	.string "SNEASEL taught me. Battle.$"

ParcelHighlands_Peder_Text_1:
# 1377 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: SNEASEL would've won.$"

ParcelHighlands_Peder_Text_2:
# 1392 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: The SNEASEL are all up on the\n"
	.string "band now. Nowhere else cold enough.\l"
	.string "They don't like company. They've got no\l"
	.string "choice.$"

ParcelHighlands_Peder_R2_Text_0:
# 1403 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Peder_R2_Text_1:
# 1405 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_Peder_R2_Text_2:
# 1409 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Still yours.$"

ParcelHighlands_Peder_R2_Text_3:
# 1410 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Peder_R3_Text_0:
# 1417 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Peder_R3_Text_1:
# 1423 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: That's the one I wanted to see.$"

ParcelHighlands_Peder_R3_Text_2:
# 1424 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Peder_R4_Text_0:
# 1431 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_Peder_R4_Text_1:
# 1437 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: …Again, then. Later.$"

ParcelHighlands_Peder_R4_Text_2:
# 1438 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Peder_R5_Text_0:
# 1445 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Peder_R5_Text_1:
# 1451 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Noted. Properly, this time.$"

ParcelHighlands_Peder_R5_Text_2:
# 1452 "data/maps/ParcelHighlands/scripts.pory"
	.string "PEDER: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelHighlands_Runa_Text_0:
# 1458 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Cadet RUNA. I count the\n"
	.string "lowlanders. ZIGZAGOON, TAILLOW, NUMEL.\l"
	.string "New every month. Spar.$"

ParcelHighlands_Runa_Text_1:
# 1459 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Count's the same. You're not a\n"
	.string "lowlander.$"

ParcelHighlands_Runa_Text_2:
# 1474 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: ILEX says count what's arriving\n"
	.string "as carefully as what's leaving. Nobody\l"
	.string "else counts the arrivals. They look like\l"
	.string "good news.$"

ParcelHighlands_Runa_R2_Text_0:
# 1485 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_Runa_R2_Text_1:
# 1487 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Suit yourself. I'm here.$"

ParcelHighlands_Runa_R2_Text_2:
# 1491 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Noted. Properly, this time.$"

ParcelHighlands_Runa_R2_Text_3:
# 1492 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_Runa_R3_Text_0:
# 1499 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelHighlands_Runa_R3_Text_1:
# 1505 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: That's the one I wanted to see.$"

ParcelHighlands_Runa_R3_Text_2:
# 1506 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Runa_R4_Text_0:
# 1513 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelHighlands_Runa_R4_Text_1:
# 1519 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Still yours.$"

ParcelHighlands_Runa_R4_Text_2:
# 1520 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelHighlands_Runa_R5_Text_0:
# 1527 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelHighlands_Runa_R5_Text_1:
# 1534 "data/maps/ParcelHighlands/scripts.pory"
	.string "RUNA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelHighlands_Siri_Text_0:
# 1540 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: My PILOSWINE was born up here.\n"
	.string "There won't be another one born up\l"
	.string "here. Battle.$"

ParcelHighlands_Siri_Text_1:
# 1541 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: It's still the strongest thing on\n"
	.string "the mountain.$"

ParcelHighlands_Siri_Text_2:
# 1556 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: The fall's loud this year. More\n"
	.string "melt. Every year the fall's loud and\l"
	.string "every year there's less snow to make it.$"

ParcelHighlands_Siri_R2_Text_0:
# 1567 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelHighlands_Siri_R2_Text_1:
# 1569 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Fine. Same spot.$"

ParcelHighlands_Siri_R2_Text_2:
# 1573 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: That's the one I wanted to see.$"

ParcelHighlands_Siri_R2_Text_3:
# 1574 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelHighlands_Siri_R3_Text_0:
# 1581 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelHighlands_Siri_R3_Text_1:
# 1587 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: …Fair.$"

ParcelHighlands_Siri_R3_Text_2:
# 1588 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_Siri_R4_Text_0:
# 1595 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelHighlands_Siri_R4_Text_1:
# 1602 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_Siri_R5_Text_0:
# 1609 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelHighlands_Siri_R5_Text_1:
# 1615 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: …Again, then. Later.$"

ParcelHighlands_Siri_R5_Text_2:
# 1616 "data/maps/ParcelHighlands/scripts.pory"
	.string "SIRI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelHighlands_T_Snorre_Text_0:
# 1624 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: The slide took the trail. I've\n"
	.string "been sitting here deciding whether to\l"
	.string "climb it. Battle first.$"

ParcelHighlands_T_Snorre_Text_1:
# 1625 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Still deciding.$"

ParcelHighlands_T_Snorre_Text_2:
# 1640 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: ILEX went up through the\n"
	.string "scree. Alone. She's older than me and\l"
	.string "she didn't stop to decide.$"

ParcelHighlands_T_Snorre_R2_Text_0:
# 1651 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_T_Snorre_R2_Text_1:
# 1653 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Fine. Same spot.$"

ParcelHighlands_T_Snorre_R2_Text_2:
# 1657 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Still yours.$"

ParcelHighlands_T_Snorre_R2_Text_3:
# 1658 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelHighlands_T_Snorre_R3_Text_0:
# 1665 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_T_Snorre_R3_Text_1:
# 1671 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Right. That's the whole of it.$"

ParcelHighlands_T_Snorre_R3_Text_2:
# 1672 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: One more in me. After the high\n"
	.string "ground.$"

ParcelHighlands_T_Snorre_R4_Text_0:
# 1679 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_T_Snorre_R4_Text_1:
# 1685 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: …Fair.$"

ParcelHighlands_T_Snorre_R4_Text_2:
# 1686 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelHighlands_T_Snorre_R5_Text_0:
# 1693 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelHighlands_T_Snorre_R5_Text_1:
# 1699 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's the one I wanted to see.$"

ParcelHighlands_T_Snorre_R5_Text_2:
# 1700 "data/maps/ParcelHighlands/scripts.pory"
	.string "SNORRE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_T_Torgeir_Text_0:
# 1706 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Cadet TORGEIR, the low\n"
	.string "stakes. I count what's come up the\l"
	.string "slope. Spar.$"

ParcelHighlands_T_Torgeir_Text_1:
# 1707 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Counted.$"

ParcelHighlands_T_Torgeir_Text_2:
# 1722 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Every month something new\n"
	.string "arrives from the valley. Every month\l"
	.string "something old goes up to the band and\l"
	.string "doesn't come down.$"

ParcelHighlands_T_Torgeir_R2_Text_0:
# 1733 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: I kept the team up for this.\n"
	.string "Again?$"

ParcelHighlands_T_Torgeir_R2_Text_1:
# 1735 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelHighlands_T_Torgeir_R2_Text_2:
# 1739 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Still yours.$"

ParcelHighlands_T_Torgeir_R2_Text_3:
# 1740 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelHighlands_T_Torgeir_R3_Text_0:
# 1747 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelHighlands_T_Torgeir_R3_Text_1:
# 1754 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Three. I'll be stronger when\n"
	.string "the coast's done with you.$"

ParcelHighlands_T_Torgeir_R4_Text_0:
# 1761 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelHighlands_T_Torgeir_R4_Text_1:
# 1767 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's the one I wanted to\n"
	.string "see.$"

ParcelHighlands_T_Torgeir_R4_Text_2:
# 1768 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_T_Torgeir_R5_Text_0:
# 1775 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelHighlands_T_Torgeir_R5_Text_1:
# 1781 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: Noted. Properly, this time.$"

ParcelHighlands_T_Torgeir_R5_Text_2:
# 1782 "data/maps/ParcelHighlands/scripts.pory"
	.string "TORGEIR: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_T_Hedvig_Text_0:
# 1788 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: ILEX measures the band in\n"
	.string "cloth. I measure it in what the\l"
	.string "mountain's thinking. It's thinking\l"
	.string "about leaving. Battle.$"

ParcelHighlands_T_Hedvig_Text_1:
# 1789 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: It's still thinking.$"

ParcelHighlands_T_Hedvig_Text_2:
# 1804 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: The woman at the bore means\n"
	.string "every warm word. That's what makes her\l"
	.string "cold.$"

ParcelHighlands_T_Hedvig_R2_Text_0:
# 1815 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelHighlands_T_Hedvig_R2_Text_1:
# 1817 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Suit yourself. I'm here.$"

ParcelHighlands_T_Hedvig_R2_Text_2:
# 1821 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Right. That's the whole of it.$"

ParcelHighlands_T_Hedvig_R2_Text_3:
# 1822 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelHighlands_T_Hedvig_R3_Text_0:
# 1829 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelHighlands_T_Hedvig_R3_Text_1:
# 1835 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Noted. Properly, this time.$"

ParcelHighlands_T_Hedvig_R3_Text_2:
# 1836 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelHighlands_T_Hedvig_R4_Text_0:
# 1843 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelHighlands_T_Hedvig_R4_Text_1:
# 1849 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: Still yours.$"

ParcelHighlands_T_Hedvig_R4_Text_2:
# 1850 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelHighlands_T_Hedvig_R5_Text_0:
# 1857 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelHighlands_T_Hedvig_R5_Text_1:
# 1864 "data/maps/ParcelHighlands/scripts.pory"
	.string "HEDVIG: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelHighlands_PerrinScene_Text_0:
# 1877 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelHighlands_PerrinScene_Text_1:
# 1881 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: HOLLIS says hello. HOLLIS says\n"
	.string "you're 'thorough'. She said it like a\l"
	.string "diagnosis.\p"
	.string "I'm on the relocation team. We moved\n"
	.string "eleven families down the hill this\l"
	.string "month. ELEVEN. What did your notebook\l"
	.string "move? Battle.$"

ParcelHighlands_PerrinScene_Text_2:
# 1882 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: …Eleven's still eleven.$"

ParcelHighlands_PerrinScene_Text_3:
# 1883 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: The old woman won't go. I've\n"
	.string "been up to her door four times. She asks\l"
	.string "after you.\p"
	.string "Nobody asks after me. That's not a\n"
	.string "complaint. I'm just saying it out loud\l"
	.string "once.$"

ParcelHighlands_PerrinTalk_Text_0:
# 1896 "data/maps/ParcelHighlands/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelHighlands_Epilogue_Text_0:
# 1907 "data/maps/ParcelHighlands/scripts.pory"
	.string "HAUKFELL. The bore is capped. Enjoined\n"
	.string "pending survey, and the survey is\l"
	.string "yours. The leases wait on it. The ground\l"
	.string "doesn't.\p"
	.string "The warming centre stays open past\n"
	.string "midnight now. HOLLIS cut the ribbon.\l"
	.string "It's still warm.$"

ParcelHighlands_Epilogue_Text_1:
# 1908 "data/maps/ParcelHighlands/scripts.pory"
	.string "The slips are pinned up in the centre\n"
	.string "under glass now, the child's in the\l"
	.string "middle.\p"
	.string "On the slope the drill casing wears a\n"
	.string "cap, a padlock and a laminated notice.\l"
	.string "The ground around it is soft. It does\l"
	.string "not read notices. Somebody has stood a\l"
	.string "red-cloth stake beside it anyway.$"

ParcelHighlands_GymVale_Rematch_Text_0:
# 1920 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: You went up with it signed, and\n"
	.string "the slope held. Mostly.\p"
	.string "I'd see what the cold made of you since.\n"
	.string "Full strength. Not a gate. Yes?$"

ParcelHighlands_GymVale_Rematch_Text_1:
# 1922 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: Then mind the slope.$"

ParcelHighlands_GymVale_Rematch_Text_2:
# 1926 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: …Cleared. There's nothing above\n"
	.string "this to clear, so take that as the word.$"

ParcelHighlands_GymVale_Rematch_Text_3:
# 1927 "data/maps/ParcelHighlands/scripts.pory"
	.string "VALE: The slope's here when you are.$"

ParcelHighlands_Mareep_Text_0:
# 1936 "data/maps/ParcelHighlands/scripts.pory"
	.string "A MAREEP on the scree above the slide,\n"
	.string "legs braced, wool full of grit. It looks\l"
	.string "at you.\p"
	.string "It is not coming down. It is, very\n"
	.string "definitely, standing.$"

ParcelHighlands_SurveyStake_Text_0:
# 1943 "data/maps/ParcelHighlands/scripts.pory"
	.string "A survey stake outside the warming\n"
	.string "centre, red cloth at the top. The ground\l"
	.string "has moved since it was driven; it leans a\l"
	.string "hand's width downslope.$"

ParcelHighlands_SurveyStake_Text_1:
# 1948 "data/maps/ParcelHighlands/scripts.pory"
	.string "Second reading. The casing is capped.\n"
	.string "The slope is still soft and will stay\l"
	.string "soft; a capped hole does not put ice\l"
	.string "back in a mountain. The centre is open\l"
	.string "past midnight and the slips are under\l"
	.string "glass.\p"
	.string "SHIFTED. It was true before and it is\n"
	.string "true after. Now it has a date on both\l"
	.string "sides.$"

ParcelHighlands_PairSlide_Text_0:
# 1959 "data/maps/ParcelHighlands/scripts.pory"
	.string "ROADMAN: Permafrost licence deferred.\n"
	.string "Deferred isn't refused.$"

ParcelHighlands_PairSlide_Text_1:
# 1960 "data/maps/ParcelHighlands/scripts.pory"
	.string "POSTMISTRESS: No. But the drill crew's\n"
	.string "gone and the casing's capped and the\l"
	.string "field's not sliding this spring.$"

ParcelHighlands_PairSlide_Text_2:
# 1961 "data/maps/ParcelHighlands/scripts.pory"
	.string "ROADMAN: It'll slide. The ground's soft\n"
	.string "now. It doesn't harden back.$"

ParcelHighlands_PairSlide_Text_3:
# 1962 "data/maps/ParcelHighlands/scripts.pory"
	.string "POSTMISTRESS: I know. The ranger said\n"
	.string "so, to our faces. First one who did. I'd\l"
	.string "rather know.$"

ParcelHighlands_PairSlide_Text_4:
# 1964 "data/maps/ParcelHighlands/scripts.pory"
	.string "POSTMISTRESS: The ranger read the\n"
	.string "stake at the warming centre out loud.\l"
	.string "Everything on it. Twenty people stood\l"
	.string "and listened.$"

ParcelHighlands_PairSlide_Text_5:
# 1965 "data/maps/ParcelHighlands/scripts.pory"
	.string "ROADMAN: What's on it?$"

ParcelHighlands_PairSlide_Text_6:
# 1966 "data/maps/ParcelHighlands/scripts.pory"
	.string "POSTMISTRESS: The slide. The bore. The\n"
	.string "gas column. The dates. Nothing we didn't\l"
	.string "know, all in one place, in a voice.$"

ParcelHighlands_PairSlide_Text_7:
# 1967 "data/maps/ParcelHighlands/scripts.pory"
	.string "ROADMAN: That's what's been missing.\n"
	.string "The voice. We all knew it quietly.$"

ParcelHighlands_PairSlide_Text_8:
# 1969 "data/maps/ParcelHighlands/scripts.pory"
	.string "ROADMAN: Top field's gone. Slid\n"
	.string "overnight. Took the fence and half the\l"
	.string "track.$"

ParcelHighlands_PairSlide_Text_9:
# 1970 "data/maps/ParcelHighlands/scripts.pory"
	.string "POSTMISTRESS: That's three fields in\n"
	.string "two years.$"

ParcelHighlands_PairSlide_Text_10:
# 1971 "data/maps/ParcelHighlands/scripts.pory"
	.string "ROADMAN: 'Weather event', the Board\n"
	.string "says. It's been a weather event for two\l"
	.string "years.$"

ParcelHighlands_PairSlide_Text_11:
# 1972 "data/maps/ParcelHighlands/scripts.pory"
	.string "POSTMISTRESS: The drill went in two\n"
	.string "years ago. Funny old weather.$"

ParcelHighlands_PairCentre_Text_0:
# 1981 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: They've pinned the slips up. All\n"
	.string "of them. Mine's on the board for anyone\l"
	.string "to read.$"

ParcelHighlands_PairCentre_Text_1:
# 1982 "data/maps/ParcelHighlands/scripts.pory"
	.string "SON: Yours and the child's. 'The ranger\n"
	.string "read the stakes out loud and mum cried.'$"

ParcelHighlands_PairCentre_Text_2:
# 1983 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: That's the whole hearing in one\n"
	.string "line. They should have saved the paper.$"

ParcelHighlands_PairCentre_Text_3:
# 1984 "data/maps/ParcelHighlands/scripts.pory"
	.string "SON: Warm room still open?$"

ParcelHighlands_PairCentre_Text_4:
# 1985 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: Warm room's still open.\n"
	.string "Different crest on the door. Same door.$"

ParcelHighlands_PairCentre_Text_5:
# 1987 "data/maps/ParcelHighlands/scripts.pory"
	.string "SON: The ranger put a slip in the\n"
	.string "suggestion box. We saw it through the\l"
	.string "slot. It said: ask the drill people what\l"
	.string "the gas column means.$"

ParcelHighlands_PairCentre_Text_6:
# 1988 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: That was my slip.$"

ParcelHighlands_PairCentre_Text_7:
# 1989 "data/maps/ParcelHighlands/scripts.pory"
	.string "SON: It was in the ranger's hand.$"

ParcelHighlands_PairCentre_Text_8:
# 1990 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: Then there's two of us. That's\n"
	.string "a committee, in Haukfell.$"

ParcelHighlands_PairCentre_Text_9:
# 1992 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: The centre's warm. I'll give\n"
	.string "them that. First winter I've had a warm\l"
	.string "room since my wife.$"

ParcelHighlands_PairCentre_Text_10:
# 1993 "data/maps/ParcelHighlands/scripts.pory"
	.string "SON: The FOUNDATION built it. Two weeks\n"
	.string "before the licence went to the Council.$"

ParcelHighlands_PairCentre_Text_11:
# 1994 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: I know when it was built. I was\n"
	.string "cold at the time. I noticed the date.$"

ParcelHighlands_PairCentre_Text_12:
# 1995 "data/maps/ParcelHighlands/scripts.pory"
	.string "SON: And you'll still go.$"

ParcelHighlands_PairCentre_Text_13:
# 1996 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD MAN: I'll still go. Warm's warm. I'll go\n"
	.string "and I'll know, both.$"

ParcelHighlands_Stringer_Text_0:
# 2008 "data/maps/ParcelHighlands/scripts.pory"
	.string "INGER: They've pinned the slips up in\n"
	.string "the centre. I photographed the child's.\l"
	.string "The ranger read the stakes out loud and\l"
	.string "mum cried.\p"
	.string "My editor cut it. I put it back. He cut it\n"
	.string "again. It's in. We're not speaking, and\l"
	.string "the paper's never sold better.$"

ParcelHighlands_Stringer_Text_1:
# 2010 "data/maps/ParcelHighlands/scripts.pory"
	.string "INGER: The suggestion box. I asked the\n"
	.string "host to open it for me. He said the\l"
	.string "FOUNDATION empties it.\p"
	.string "I said: then that's my story. He went\n"
	.string "white. Good man. Wrong employer. It's a\l"
	.string "common condition up here.$"

ParcelHighlands_Stringer_Text_2:
# 2012 "data/maps/ParcelHighlands/scripts.pory"
	.string "INGER: The slide. I came up for the\n"
	.string "slide. 'Weather event,' the Board says.\p"
	.string "I've written weather event three times\n"
	.string "in two years. I'm starting to feel like a\l"
	.string "forecaster. The drill went in two years\l"
	.string "ago; I'm not allowed to put those two\l"
	.string "sentences next to each other. So I put\l"
	.string "them one paragraph apart.$"

ParcelHighlands_Carrier_Text_0:
# 2024 "data/maps/ParcelHighlands/scripts.pory"
	.string "CARRIER: Knee's worse. Road's better, a\n"
	.string "bit; the review graded it. The letters\l"
	.string "still go.\p"
	.string "Two things haven't changed and one has,\n"
	.string "and it's the road. I'd have bet on the\l"
	.string "knee.$"

ParcelHighlands_Carrier_Text_1:
# 2029 "data/maps/ParcelHighlands/scripts.pory"
	.string "CARRIER: Knee's no better. The road's\n"
	.string "no better. The letters still go. That's\l"
	.string "three things that haven't changed.$"

ParcelHighlands_Carrier_Text_2:
# 2032 "data/maps/ParcelHighlands/scripts.pory"
	.string "CARRIER: Delivered. In the hand. That's\n"
	.string "the whole of the job, and most people\l"
	.string "miss the half of it.\p"
	.string "Milk from the homestead; she sends it\n"
	.string "down with every letter. Yours.$"

ParcelHighlands_Carrier_Text_3:
# 2036 "data/maps/ParcelHighlands/scripts.pory"
	.string "CARRIER: The homestead, above the\n"
	.string "slide. The grandson. Hand, not box.$"

ParcelHighlands_Carrier_Text_4:
# 2039 "data/maps/ParcelHighlands/scripts.pory"
	.string "CARRIER: Letters for the homestead\n"
	.string "above the slide. The road's gone and my\l"
	.string "knee's gone with it.\p"
	.string "You're going up. One letter, the old\n"
	.string "woman's. Put it in her grandson's hand,\l"
	.string "not the box; the box went down the hill\l"
	.string "with the field.$"

ParcelHighlands_FindFrost_Text_0:
# 2050 "data/maps/ParcelHighlands/scripts.pory"
	.string "A crack across the lambing field,\n"
	.string "straight as a rule, a hand wide. The\l"
	.string "sides are turf. The bottom is water,\l"
	.string "standing, brown, with the sky in it.\p"
	.string "No ice. You put your hand in to be sure.\n"
	.string "It is not even cold.$"

ParcelHighlands_FindFrost_Text_1:
# 2053 "data/maps/ParcelHighlands/scripts.pory"
	.string "A crack across the field, a hand wide,\n"
	.string "water in the bottom. A ewe has already\l"
	.string "learned to step over it.$"

ParcelHighlands_PairThaw_Text_0:
# 2061 "data/maps/ParcelHighlands/scripts.pory"
	.string "MOTHER: The drill's capped and the\n"
	.string "ground is still letting go. HALE said so\l"
	.string "to our faces. First one who did.$"

ParcelHighlands_PairThaw_Text_1:
# 2062 "data/maps/ParcelHighlands/scripts.pory"
	.string "BOY: Is that good?$"

ParcelHighlands_PairThaw_Text_2:
# 2063 "data/maps/ParcelHighlands/scripts.pory"
	.string "MOTHER: It's true. Up here that's what\n"
	.string "we've got instead of good. Hold my hand\l"
	.string "on the soft bit.$"

ParcelHighlands_PairThaw_Text_3:
# 2065 "data/maps/ParcelHighlands/scripts.pory"
	.string "BOY: The ranger stood in the puddle to\n"
	.string "the knee and wrote something down.$"

ParcelHighlands_PairThaw_Text_4:
# 2066 "data/maps/ParcelHighlands/scripts.pory"
	.string "MOTHER: What did they write?$"

ParcelHighlands_PairThaw_Text_5:
# 2067 "data/maps/ParcelHighlands/scripts.pory"
	.string "BOY: I asked. They said: thaw pond, new,\n"
	.string "and the date. Then they said I was\l"
	.string "right. They're not ponds. They're the\l"
	.string "ground letting go.$"

ParcelHighlands_PairThaw_Text_6:
# 2068 "data/maps/ParcelHighlands/scripts.pory"
	.string "MOTHER: …Come away from there.$"

ParcelHighlands_PairThaw_Text_7:
# 2070 "data/maps/ParcelHighlands/scripts.pory"
	.string "MOTHER: Don't play on the ponds.$"

ParcelHighlands_PairThaw_Text_8:
# 2071 "data/maps/ParcelHighlands/scripts.pory"
	.string "BOY: They're not ponds. They're puddles.\n"
	.string "They weren't here last year.$"

ParcelHighlands_PairThaw_Text_9:
# 2072 "data/maps/ParcelHighlands/scripts.pory"
	.string "MOTHER: That's why you don't play on\n"
	.string "them. The ground made them. It can make\l"
	.string "more.$"

ParcelHighlands_Board1_Text_0:
# 2081 "data/maps/ParcelHighlands/scripts.pory"
	.string "A SURVEY BOARD outside the warming\n"
	.string "centre. HAUKFELL. The ground here is\l"
	.string "frozen and everything stands on the\l"
	.string "frozen ground. The SWINUB graze its\l"
	.string "edge and move up when it softens.\p"
	.string "The board shows the edge as a line, one\n"
	.string "line a year, each higher than the last.\l"
	.string "Above the top line there is one more\l"
	.string "contour, and then the sky.$"

ParcelHighlands_Board2_Text_0:
# 2086 "data/maps/ParcelHighlands/scripts.pory"
	.string "A SURVEY BOARD on the bore road, the\n"
	.string "Foundation crest on the post it is\l"
	.string "nailed to. EXPLORATORY ONLY, says the\l"
	.string "Company sign a pace away.\p"
	.string "The Survey board gives the slope\n"
	.string "readings beside the bore: 2, 4, 9, 15.\l"
	.string "The unit is hands downslope. The sign\l"
	.string "has moved with the ground. The board\l"
	.string "has moved the same distance.$"

ParcelHighlands_PairRoad_Text_0:
# 2095 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: The leases are enjoined. The form's\n"
	.string "withdrawn. We stay or we go; nobody's\l"
	.string "paying either way.$"

ParcelHighlands_PairRoad_Text_1:
# 2096 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD WOMAN: Then we stay the winter and\n"
	.string "decide in spring, like people have\l"
	.string "always done up here.$"

ParcelHighlands_PairRoad_Text_2:
# 2097 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: And if the ground goes?$"

ParcelHighlands_PairRoad_Text_3:
# 2098 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD WOMAN: Then it goes with us\n"
	.string "standing on it, knowing. That's more\l"
	.string "than it was offering before.$"

ParcelHighlands_PairRoad_Text_4:
# 2100 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD WOMAN: The ranger stood in the\n"
	.string "lambing field and wrote SHIFTED. One\l"
	.string "word.$"

ParcelHighlands_PairRoad_Text_5:
# 2101 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: Is that bad?$"

ParcelHighlands_PairRoad_Text_6:
# 2102 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD WOMAN: It's the word the ground's\n"
	.string "been saying. Somebody finally spelt it.\l"
	.string "I'll sign nothing till I've read it.$"

ParcelHighlands_PairRoad_Text_7:
# 2104 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: Sign the form and the house in the\n"
	.string "valley's ours by autumn.$"

ParcelHighlands_PairRoad_Text_8:
# 2105 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD WOMAN: Whose is this one, then?$"

ParcelHighlands_PairRoad_Text_9:
# 2106 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: Subject to review.$"

ParcelHighlands_PairRoad_Text_10:
# 2107 "data/maps/ParcelHighlands/scripts.pory"
	.string "OLD WOMAN: I've lived in it sixty years\n"
	.string "and it's never been subject to anything\l"
	.string "but weather. Weather I can read.$"

ParcelHighlands_FindStep_Text_0:
# 2117 "data/maps/ParcelHighlands/scripts.pory"
	.string "A front step, stone, worn in the middle\n"
	.string "by sixty years of boots. It leans: a\l"
	.string "hand lower on the uphill side than the\l"
	.string "down. Under the lip of it, the corner of\l"
	.string "a key, rusted to the colour of the\l"
	.string "stone.\p"
	.string "You leave the key. The step was the\n"
	.string "question. The step has answered it.$"

ParcelHighlands_FindStep_Text_1:
# 2120 "data/maps/ParcelHighlands/scripts.pory"
	.string "The front step of the empty house,\n"
	.string "leaning uphill. The key is still under it.$"

ParcelHighlands_Board3_Text_0:
# 2128 "data/maps/ParcelHighlands/scripts.pory"
	.string "A SURVEY BOARD at the thaw ponds. The\n"
	.string "ponds have names on the board, given in\l"
	.string "the order they appeared. Eleven names.\p"
	.string "The oldest pond has a SPHEAL in it that\n"
	.string "should be on the coast. The board\l"
	.string "records that too, under the heading:\l"
	.string "arrived. Not: escaped.$"

ParcelHighlands_Board4_Text_0:
# 2135 "data/maps/ParcelHighlands/scripts.pory"
	.string "A SURVEY BOARD at the high pass. Above\n"
	.string "this line the Survey counts only what it\l"
	.string "can see from the path, because the\l"
	.string "ground will not take a stake.\p"
	.string "The board lists what has been seen from\n"
	.string "here: SNEASEL, SWINUB, once a\l"
	.string "SALAMENCE with a photograph. The list\l"
	.string "is not a count. The Survey says so\l"
	.string "first.$"

ParcelHighlands_PairWell_Text_0:
# 2144 "data/maps/ParcelHighlands/scripts.pory"
	.string "WOMAN: The bore's capped and the well's\n"
	.string "still down. Nobody's pretending it'll\l"
	.string "come back.$"

ParcelHighlands_PairWell_Text_1:
# 2145 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: Then why do you check it?$"

ParcelHighlands_PairWell_Text_2:
# 2146 "data/maps/ParcelHighlands/scripts.pory"
	.string "WOMAN: Because somebody wrote down\n"
	.string "the day it was full, and somebody should\l"
	.string "write down the day it isn't. Pass me the\l"
	.string "line.$"

ParcelHighlands_PairWell_Text_3:
# 2148 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: The ranger lowered a line in our\n"
	.string "well. Wrote the depth beside the\l"
	.string "Company's reading.$"

ParcelHighlands_PairWell_Text_4:
# 2149 "data/maps/ParcelHighlands/scripts.pory"
	.string "WOMAN: Did they match?$"

ParcelHighlands_PairWell_Text_5:
# 2150 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: No. Ours was deeper. Theirs was the\n"
	.string "one on the sign.$"

ParcelHighlands_PairWell_Text_6:
# 2152 "data/maps/ParcelHighlands/scripts.pory"
	.string "WOMAN: The well's down a hand again.$"

ParcelHighlands_PairWell_Text_7:
# 2153 "data/maps/ParcelHighlands/scripts.pory"
	.string "MAN: The Company says the bore's\n"
	.string "exploratory. Doesn't touch the water.$"

ParcelHighlands_PairWell_Text_8:
# 2154 "data/maps/ParcelHighlands/scripts.pory"
	.string "WOMAN: The water doesn't know what\n"
	.string "exploratory means. Neither do I. I know\l"
	.string "the hand.$"

ParcelHighlands_Board5_Text_0:
# 2163 "data/maps/ParcelHighlands/scripts.pory"
	.string "A SURVEY BOARD at the centre's\n"
	.string "woodpile. The pile is measured in\l"
	.string "autumn: how much wood the valley sends\l"
	.string "up, how many winters it would last at\l"
	.string "the old rate.\p"
	.string "The second number used to be one. It is\n"
	.string "two now. Fewer people winter up here.\l"
	.string "The board does not say that this is why\l"
	.string "the pile lasts. It gives the two\l"
	.string "numbers.$"
