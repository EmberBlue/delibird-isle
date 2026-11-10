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
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Harland_2
# 145 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Harland_5
# 173 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 174 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 5
# 175 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 176 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_Harland_8
# 181 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_12, MSGBOX_DEFAULT
# 182 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_13, MSGBOX_DEFAULT
# 183 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_14, MSGBOX_DEFAULT
# 184 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_15, MSGBOX_DEFAULT
# 185 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_16, MSGBOX_DEFAULT
# 186 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_17, MSGBOX_DEFAULT
# 187 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_18, MSGBOX_DEFAULT
# 188 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 189 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_2:
# 141 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_0, MSGBOX_DEFAULT
# 142 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_5:
# 146 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_RIV_NIGHT_DONE, ParcelRiver_Harland_11
# 169 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_10, MSGBOX_DEFAULT
# 170 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_8:
# 177 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_11, MSGBOX_DEFAULT
# 178 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_11:
# 147 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_2, MSGBOX_YESNO
# 149 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Harland_14
# 154 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 155 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_4, MSGBOX_DEFAULT
# 157 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_5, MSGBOX_DEFAULT
# 158 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_6, MSGBOX_DEFAULT
# 159 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_7, MSGBOX_DEFAULT
# 160 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_8, MSGBOX_DEFAULT
# 161 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 162 "data/maps/ParcelRiver/scripts.pory"
	delay 60
# 163 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 164 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_9, MSGBOX_DEFAULT
# 165 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_RIV_NIGHT_DONE
# 166 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_14:
# 150 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_3, MSGBOX_DEFAULT
# 151 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Farmer::
# 195 "data/maps/ParcelRiver/scripts.pory"
	lock
# 196 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 197 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Farmer_2
# 202 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Farmer_5
# 207 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_2, MSGBOX_DEFAULT
# 208 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_3, MSGBOX_DEFAULT
# 209 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Farmer_2:
# 198 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Farmer_5:
# 203 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_1, MSGBOX_DEFAULT
# 204 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ilex::
# 215 "data/maps/ParcelRiver/scripts.pory"
	lock
# 216 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 217 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Ilex_2
# 222 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Ilex_5
# 227 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 228 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 229 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 230 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelRiver_Ilex_8
# 249 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_9, MSGBOX_DEFAULT
# 250 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_2:
# 218 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_0, MSGBOX_DEFAULT
# 219 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_5:
# 223 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_1, MSGBOX_DEFAULT
# 224 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_8:
# 231 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_2, MSGBOX_DEFAULT
# 232 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyRiver
# 233 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_3, MSGBOX_DEFAULT
# 234 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_4, MSGBOX_DEFAULT
# 235 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_5, MSGBOX_DEFAULT
# 236 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_6, MSGBOX_DEFAULT
# 237 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_7, MSGBOX_DEFAULT
# 238 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 6
# 239 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 240 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_8, MSGBOX_DEFAULT
# 241 "data/maps/ParcelRiver/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 242 "data/maps/ParcelRiver/scripts.pory"
	waitfanfare
# 243 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_WATERSHED_CERT
# 244 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 245 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 246 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Dorsey::
# 256 "data/maps/ParcelRiver/scripts.pory"
	lock
# 257 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 258 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Dorsey_2
# 263 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 264 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 265 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 266 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Dorsey_5
# 272 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_3, MSGBOX_DEFAULT
# 273 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_4, MSGBOX_DEFAULT
# 274 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Dorsey_2:
# 259 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_0, MSGBOX_DEFAULT
# 260 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Dorsey_5:
# 267 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_1, MSGBOX_DEFAULT
# 268 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_2, MSGBOX_DEFAULT
# 269 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Aide::
# 278 "data/maps/ParcelRiver/scripts.pory"
	lock
# 279 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 280 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Aide_2
# 285 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_Aide_5
# 290 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_2, MSGBOX_DEFAULT
# 291 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Aide_2:
# 281 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_0, MSGBOX_DEFAULT
# 282 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Aide_5:
# 286 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_1, MSGBOX_DEFAULT
# 287 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorEggs::
# 297 "data/maps/ParcelRiver/scripts.pory"
	lock
# 298 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 299 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HIVES_DONE, ParcelRiver_VendorEggs_2
# 304 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HIVES_FOUND, ParcelRiver_VendorEggs_5
# 311 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HIVES, ParcelRiver_VendorEggs_8
# 316 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_RIVER_ARRIVAL, ParcelRiver_VendorEggs_11
# 322 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_VendorEggs_14
# 327 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_5, MSGBOX_DEFAULT
# 328 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_2:
# 300 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_0, MSGBOX_DEFAULT
# 301 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_5:
# 305 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_1, MSGBOX_DEFAULT
# 306 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_HONEY, 3
# 307 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_HIVES_DONE
# 308 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_8:
# 312 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_2, MSGBOX_DEFAULT
# 313 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_11:
# 317 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_3, MSGBOX_DEFAULT
# 318 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_HIVES
# 319 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_14:
# 323 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_4, MSGBOX_DEFAULT
# 324 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorFish::
# 332 "data/maps/ParcelRiver/scripts.pory"
	lock
# 333 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 334 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_VendorFish_2
# 339 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_VendorFish_5
# 344 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_2, MSGBOX_DEFAULT
# 345 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorFish_2:
# 335 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_0, MSGBOX_DEFAULT
# 336 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorFish_5:
# 340 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_1, MSGBOX_DEFAULT
# 341 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_OldMan::
# 349 "data/maps/ParcelRiver/scripts.pory"
	lock
# 350 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 351 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_OldMan_2
# 356 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_OldMan_5
# 361 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_2, MSGBOX_DEFAULT
# 362 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_OldMan_2:
# 352 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_0, MSGBOX_DEFAULT
# 353 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_OldMan_5:
# 357 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_1, MSGBOX_DEFAULT
# 358 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Girl::
# 366 "data/maps/ParcelRiver/scripts.pory"
	lock
# 367 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 368 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Girl_2
# 373 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_Girl_5
# 378 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_2, MSGBOX_DEFAULT
# 379 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Girl_2:
# 369 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_0, MSGBOX_DEFAULT
# 370 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Girl_5:
# 374 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Boy::
# 383 "data/maps/ParcelRiver/scripts.pory"
	lock
# 384 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 385 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Boy_2
# 390 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_Boy_5
# 395 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_2, MSGBOX_DEFAULT
# 396 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Boy_2:
# 386 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_0, MSGBOX_DEFAULT
# 387 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Boy_5:
# 391 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_1, MSGBOX_DEFAULT
# 392 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_PondFisher::
# 400 "data/maps/ParcelRiver/scripts.pory"
	lock
# 401 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 402 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEPTH, ParcelRiver_PondFisher_5
ParcelRiver_PondFisher_4:
# 412 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEPTH_DONE, ParcelRiver_PondFisher_3
# 418 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PondFisher_9
# 423 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_PondFisher_16
# 428 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_5, MSGBOX_DEFAULT
# 429 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_2:
# 403 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEPTH_FOUND, ParcelRiver_PondFisher_12
# 408 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_1, MSGBOX_DEFAULT
ParcelRiver_PondFisher_11:
# 410 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_3:
# 413 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_2, MSGBOX_DEFAULT
# 414 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DEPTH
# 415 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_5:
# 402 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEPTH_DONE, ParcelRiver_PondFisher_2
	goto ParcelRiver_PondFisher_4

ParcelRiver_PondFisher_9:
# 419 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_3, MSGBOX_DEFAULT
# 420 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_12:
# 404 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_0, MSGBOX_DEFAULT
# 405 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 406 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DEPTH_DONE
	goto ParcelRiver_PondFisher_11

ParcelRiver_PondFisher_16:
# 424 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_4, MSGBOX_DEFAULT
# 425 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_AnglerTrainer::
# 435 "data/maps/ParcelRiver/scripts.pory"
	lock
# 436 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 437 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_DONE, ParcelRiver_AnglerTrainer_2
# 442 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_LURE, ParcelRiver_AnglerTrainer_5
# 450 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_AnglerTrainer_8
# 455 "data/maps/ParcelRiver/scripts.pory"
	release
# 456 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ANGLER, ParcelRiver_AnglerTrainer_Text_4, ParcelRiver_AnglerTrainer_Text_5
# 459 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_6, MSGBOX_DEFAULT
# 460 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL
	end

ParcelRiver_AnglerTrainer_2:
# 438 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_0, MSGBOX_DEFAULT
# 439 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_5:
# 443 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_1, MSGBOX_DEFAULT
# 444 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_2, MSGBOX_DEFAULT
# 445 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 446 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_DONE
# 447 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_8:
# 451 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_3, MSGBOX_DEFAULT
# 452 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lure::
# 464 "data/maps/ParcelRiver/scripts.pory"
	lock
# 465 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_Lure_3
ParcelRiver_Lure_1:
# 471 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_1, MSGBOX_SIGN
# 472 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_2:
# 466 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_0, MSGBOX_SIGN
# 467 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_LURE
# 468 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_3:
# 465 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DELL_LURE, ParcelRiver_Lure_2
	goto ParcelRiver_Lure_1


ParcelRiver_Arna::
# 478 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ARNA, ParcelRiver_Arna_Text_0, ParcelRiver_Arna_Text_1, ParcelRiver_Arna_FirstWin
# 482 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 483 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Arna_3
ParcelRiver_Arna_1:
# 486 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Arna_8
ParcelRiver_Arna_6:
# 489 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Arna_13
ParcelRiver_Arna_11:
# 492 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Arna_18
ParcelRiver_Arna_16:
# 495 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Arna_2:
# 484 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R2
	goto ParcelRiver_Arna_1

ParcelRiver_Arna_3:
# 483 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R2
	goto_if 0, ParcelRiver_Arna_2
	goto ParcelRiver_Arna_1

ParcelRiver_Arna_7:
# 487 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R3
	goto ParcelRiver_Arna_6

ParcelRiver_Arna_8:
# 486 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R3
	goto_if 0, ParcelRiver_Arna_7
	goto ParcelRiver_Arna_6

ParcelRiver_Arna_12:
# 490 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R4
	goto ParcelRiver_Arna_11

ParcelRiver_Arna_13:
# 489 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R4
	goto_if 0, ParcelRiver_Arna_12
	goto ParcelRiver_Arna_11

ParcelRiver_Arna_17:
# 493 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R5
	goto ParcelRiver_Arna_16

ParcelRiver_Arna_18:
# 492 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R5
	goto_if 0, ParcelRiver_Arna_17
	goto ParcelRiver_Arna_16


ParcelRiver_Arna_FirstWin::
# 499 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
# 500 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R2::
# 504 "data/maps/ParcelRiver/scripts.pory"
	lock
# 505 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 506 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_0, MSGBOX_YESNO
# 507 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R2_2
# 512 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R2, ParcelRiver_Arna_R2_Text_2
# 513 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_3, MSGBOX_DEFAULT
# 514 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R2_2:
# 508 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 509 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R3::
# 518 "data/maps/ParcelRiver/scripts.pory"
	lock
# 519 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 520 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R3_Text_0, MSGBOX_YESNO
# 521 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R3_2
# 526 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R3, ParcelRiver_Arna_R3_Text_1
# 527 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R3_Text_2, MSGBOX_DEFAULT
# 528 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R3_2:
# 522 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 523 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R4::
# 532 "data/maps/ParcelRiver/scripts.pory"
	lock
# 533 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 534 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R4_Text_0, MSGBOX_YESNO
# 535 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R4_2
# 540 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R4, ParcelRiver_Arna_R4_Text_1
# 541 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R4_Text_2, MSGBOX_DEFAULT
# 542 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R4_2:
# 536 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 537 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R5::
# 546 "data/maps/ParcelRiver/scripts.pory"
	lock
# 547 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 548 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R5_Text_0, MSGBOX_YESNO
# 549 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R5_2
# 554 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R5, ParcelRiver_Arna_R5_Text_1
# 555 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R5_Text_2, MSGBOX_DEFAULT
# 556 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R5_2:
# 550 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 551 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv::
# 560 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_BOTOLV, ParcelRiver_Botolv_Text_0, ParcelRiver_Botolv_Text_1, ParcelRiver_Botolv_FirstWin
# 564 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 565 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Botolv_3
ParcelRiver_Botolv_1:
# 568 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Botolv_8
ParcelRiver_Botolv_6:
# 571 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Botolv_13
ParcelRiver_Botolv_11:
# 574 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Botolv_18
ParcelRiver_Botolv_16:
# 577 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Botolv_2:
# 566 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R2
	goto ParcelRiver_Botolv_1

ParcelRiver_Botolv_3:
# 565 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R2
	goto_if 0, ParcelRiver_Botolv_2
	goto ParcelRiver_Botolv_1

ParcelRiver_Botolv_7:
# 569 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R3
	goto ParcelRiver_Botolv_6

ParcelRiver_Botolv_8:
# 568 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R3
	goto_if 0, ParcelRiver_Botolv_7
	goto ParcelRiver_Botolv_6

ParcelRiver_Botolv_12:
# 572 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R4
	goto ParcelRiver_Botolv_11

ParcelRiver_Botolv_13:
# 571 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R4
	goto_if 0, ParcelRiver_Botolv_12
	goto ParcelRiver_Botolv_11

ParcelRiver_Botolv_17:
# 575 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R5
	goto ParcelRiver_Botolv_16

ParcelRiver_Botolv_18:
# 574 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R5
	goto_if 0, ParcelRiver_Botolv_17
	goto ParcelRiver_Botolv_16


ParcelRiver_Botolv_FirstWin::
# 581 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
# 582 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R2::
# 586 "data/maps/ParcelRiver/scripts.pory"
	lock
# 587 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 588 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_0, MSGBOX_YESNO
# 589 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R2_2
# 594 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R2, ParcelRiver_Botolv_R2_Text_2
# 595 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_3, MSGBOX_DEFAULT
# 596 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R2_2:
# 590 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 591 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R3::
# 600 "data/maps/ParcelRiver/scripts.pory"
	lock
# 601 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 602 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R3_Text_0, MSGBOX_YESNO
# 603 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R3_2
# 608 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R3, ParcelRiver_Botolv_R3_Text_1
# 609 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R3_Text_2, MSGBOX_DEFAULT
# 610 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R3_2:
# 604 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 605 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R4::
# 614 "data/maps/ParcelRiver/scripts.pory"
	lock
# 615 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 616 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R4_Text_0, MSGBOX_YESNO
# 617 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R4_2
# 622 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R4, ParcelRiver_Botolv_R4_Text_1
# 623 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R4_Text_2, MSGBOX_DEFAULT
# 624 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R4_2:
# 618 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 619 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R5::
# 628 "data/maps/ParcelRiver/scripts.pory"
	lock
# 629 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 630 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R5_Text_0, MSGBOX_YESNO
# 631 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R5_2
# 636 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R5, ParcelRiver_Botolv_R4_Text_1
# 637 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R5_Text_1, MSGBOX_DEFAULT
# 638 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R5_2:
# 632 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 633 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun::
# 642 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_GUDRUN, ParcelRiver_Gudrun_Text_0, ParcelRiver_Gudrun_Text_1, ParcelRiver_Gudrun_FirstWin
# 646 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 647 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Gudrun_3
ParcelRiver_Gudrun_1:
# 650 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Gudrun_8
ParcelRiver_Gudrun_6:
# 653 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Gudrun_13
ParcelRiver_Gudrun_11:
# 656 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Gudrun_18
ParcelRiver_Gudrun_16:
# 659 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Gudrun_2:
# 648 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R2
	goto ParcelRiver_Gudrun_1

ParcelRiver_Gudrun_3:
# 647 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R2
	goto_if 0, ParcelRiver_Gudrun_2
	goto ParcelRiver_Gudrun_1

ParcelRiver_Gudrun_7:
# 651 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R3
	goto ParcelRiver_Gudrun_6

ParcelRiver_Gudrun_8:
# 650 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R3
	goto_if 0, ParcelRiver_Gudrun_7
	goto ParcelRiver_Gudrun_6

ParcelRiver_Gudrun_12:
# 654 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R4
	goto ParcelRiver_Gudrun_11

ParcelRiver_Gudrun_13:
# 653 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R4
	goto_if 0, ParcelRiver_Gudrun_12
	goto ParcelRiver_Gudrun_11

ParcelRiver_Gudrun_17:
# 657 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R5
	goto ParcelRiver_Gudrun_16

ParcelRiver_Gudrun_18:
# 656 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R5
	goto_if 0, ParcelRiver_Gudrun_17
	goto ParcelRiver_Gudrun_16


ParcelRiver_Gudrun_FirstWin::
# 663 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
# 664 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R2::
# 668 "data/maps/ParcelRiver/scripts.pory"
	lock
# 669 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 670 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_0, MSGBOX_YESNO
# 671 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R2_2
# 676 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R2, ParcelRiver_Gudrun_R2_Text_2
# 677 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_3, MSGBOX_DEFAULT
# 678 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R2_2:
# 672 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 673 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R3::
# 682 "data/maps/ParcelRiver/scripts.pory"
	lock
# 683 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 684 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R3_Text_0, MSGBOX_YESNO
# 685 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R3_2
# 690 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R3, ParcelRiver_Gudrun_R3_Text_1
# 691 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R3_Text_2, MSGBOX_DEFAULT
# 692 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R3_2:
# 686 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 687 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R4::
# 696 "data/maps/ParcelRiver/scripts.pory"
	lock
# 697 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 698 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R4_Text_0, MSGBOX_YESNO
# 699 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R4_2
# 704 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R4, ParcelRiver_Gudrun_R4_Text_1
# 705 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R4_Text_2, MSGBOX_DEFAULT
# 706 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R4_2:
# 700 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 701 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R5::
# 710 "data/maps/ParcelRiver/scripts.pory"
	lock
# 711 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 712 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R5_Text_0, MSGBOX_YESNO
# 713 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R5_2
# 718 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R5, ParcelRiver_Gudrun_R3_Text_1
# 719 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R5_Text_1, MSGBOX_DEFAULT
# 720 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R5_2:
# 714 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 715 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard::
# 724 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_HAVARD, ParcelRiver_Havard_Text_0, ParcelRiver_Havard_Text_1, ParcelRiver_Havard_FirstWin
# 728 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 729 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Havard_3
ParcelRiver_Havard_1:
# 732 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Havard_8
ParcelRiver_Havard_6:
# 735 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Havard_13
ParcelRiver_Havard_11:
# 738 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Havard_18
ParcelRiver_Havard_16:
# 741 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Havard_2:
# 730 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R2
	goto ParcelRiver_Havard_1

ParcelRiver_Havard_3:
# 729 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R2
	goto_if 0, ParcelRiver_Havard_2
	goto ParcelRiver_Havard_1

ParcelRiver_Havard_7:
# 733 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R3
	goto ParcelRiver_Havard_6

ParcelRiver_Havard_8:
# 732 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R3
	goto_if 0, ParcelRiver_Havard_7
	goto ParcelRiver_Havard_6

ParcelRiver_Havard_12:
# 736 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R4
	goto ParcelRiver_Havard_11

ParcelRiver_Havard_13:
# 735 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R4
	goto_if 0, ParcelRiver_Havard_12
	goto ParcelRiver_Havard_11

ParcelRiver_Havard_17:
# 739 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R5
	goto ParcelRiver_Havard_16

ParcelRiver_Havard_18:
# 738 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R5
	goto_if 0, ParcelRiver_Havard_17
	goto ParcelRiver_Havard_16


ParcelRiver_Havard_FirstWin::
# 745 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
# 746 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R2::
# 750 "data/maps/ParcelRiver/scripts.pory"
	lock
# 751 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 752 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_0, MSGBOX_YESNO
# 753 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R2_2
# 758 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R2, ParcelRiver_Havard_R2_Text_2
# 759 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_3, MSGBOX_DEFAULT
# 760 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R2_2:
# 754 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 755 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R3::
# 764 "data/maps/ParcelRiver/scripts.pory"
	lock
# 765 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 766 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R3_Text_0, MSGBOX_YESNO
# 767 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R3_2
# 772 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R3, ParcelRiver_Havard_R3_Text_1
# 773 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R3_Text_2, MSGBOX_DEFAULT
# 774 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R3_2:
# 768 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 769 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R4::
# 778 "data/maps/ParcelRiver/scripts.pory"
	lock
# 779 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 780 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R4_Text_0, MSGBOX_YESNO
# 781 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R4_2
# 786 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R4, ParcelRiver_Havard_R4_Text_1
# 787 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R4_Text_2, MSGBOX_DEFAULT
# 788 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R4_2:
# 782 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 783 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R5::
# 792 "data/maps/ParcelRiver/scripts.pory"
	lock
# 793 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 794 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R5_Text_0, MSGBOX_YESNO
# 795 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R5_2
# 800 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R5, ParcelRiver_Havard_R2_Text_2
# 801 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R5_Text_1, MSGBOX_DEFAULT
# 802 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R5_2:
# 796 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 797 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun::
# 806 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_IDUN, ParcelRiver_Idun_Text_0, ParcelRiver_Idun_Text_1, ParcelRiver_Idun_FirstWin
# 810 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 811 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Idun_3
ParcelRiver_Idun_1:
# 814 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Idun_8
ParcelRiver_Idun_6:
# 817 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Idun_13
ParcelRiver_Idun_11:
# 820 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Idun_18
ParcelRiver_Idun_16:
# 823 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Idun_2:
# 812 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R2
	goto ParcelRiver_Idun_1

ParcelRiver_Idun_3:
# 811 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R2
	goto_if 0, ParcelRiver_Idun_2
	goto ParcelRiver_Idun_1

ParcelRiver_Idun_7:
# 815 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R3
	goto ParcelRiver_Idun_6

ParcelRiver_Idun_8:
# 814 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R3
	goto_if 0, ParcelRiver_Idun_7
	goto ParcelRiver_Idun_6

ParcelRiver_Idun_12:
# 818 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R4
	goto ParcelRiver_Idun_11

ParcelRiver_Idun_13:
# 817 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R4
	goto_if 0, ParcelRiver_Idun_12
	goto ParcelRiver_Idun_11

ParcelRiver_Idun_17:
# 821 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R5
	goto ParcelRiver_Idun_16

ParcelRiver_Idun_18:
# 820 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R5
	goto_if 0, ParcelRiver_Idun_17
	goto ParcelRiver_Idun_16


ParcelRiver_Idun_FirstWin::
# 827 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
# 828 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R2::
# 832 "data/maps/ParcelRiver/scripts.pory"
	lock
# 833 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 834 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_0, MSGBOX_YESNO
# 835 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R2_2
# 840 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R2, ParcelRiver_Idun_R2_Text_2
# 841 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_3, MSGBOX_DEFAULT
# 842 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R2_2:
# 836 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 837 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R3::
# 846 "data/maps/ParcelRiver/scripts.pory"
	lock
# 847 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 848 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R3_Text_0, MSGBOX_YESNO
# 849 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R3_2
# 854 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R3, ParcelRiver_Idun_R3_Text_1
# 855 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R3_Text_2, MSGBOX_DEFAULT
# 856 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R3_2:
# 850 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 851 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R4::
# 860 "data/maps/ParcelRiver/scripts.pory"
	lock
# 861 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 862 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R4_Text_0, MSGBOX_YESNO
# 863 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R4_2
# 868 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R4, ParcelRiver_Idun_R4_Text_1
# 869 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R4_Text_2, MSGBOX_DEFAULT
# 870 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R4_2:
# 864 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 865 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R5::
# 874 "data/maps/ParcelRiver/scripts.pory"
	lock
# 875 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 876 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R5_Text_0, MSGBOX_YESNO
# 877 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R5_2
# 882 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R5, ParcelRiver_Idun_R4_Text_1
# 883 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R5_Text_1, MSGBOX_DEFAULT
# 884 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R5_2:
# 878 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 879 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar::
# 888 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_JOAR, ParcelRiver_Joar_Text_0, ParcelRiver_Joar_Text_1, ParcelRiver_Joar_FirstWin
# 892 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 893 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Joar_3
ParcelRiver_Joar_1:
# 896 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Joar_8
ParcelRiver_Joar_6:
# 899 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Joar_13
ParcelRiver_Joar_11:
# 902 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Joar_18
ParcelRiver_Joar_16:
# 905 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Joar_2:
# 894 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R2
	goto ParcelRiver_Joar_1

ParcelRiver_Joar_3:
# 893 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R2
	goto_if 0, ParcelRiver_Joar_2
	goto ParcelRiver_Joar_1

ParcelRiver_Joar_7:
# 897 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R3
	goto ParcelRiver_Joar_6

ParcelRiver_Joar_8:
# 896 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R3
	goto_if 0, ParcelRiver_Joar_7
	goto ParcelRiver_Joar_6

ParcelRiver_Joar_12:
# 900 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R4
	goto ParcelRiver_Joar_11

ParcelRiver_Joar_13:
# 899 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R4
	goto_if 0, ParcelRiver_Joar_12
	goto ParcelRiver_Joar_11

ParcelRiver_Joar_17:
# 903 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R5
	goto ParcelRiver_Joar_16

ParcelRiver_Joar_18:
# 902 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R5
	goto_if 0, ParcelRiver_Joar_17
	goto ParcelRiver_Joar_16


ParcelRiver_Joar_FirstWin::
# 909 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
# 910 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R2::
# 914 "data/maps/ParcelRiver/scripts.pory"
	lock
# 915 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 916 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_0, MSGBOX_YESNO
# 917 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R2_2
# 922 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R2, ParcelRiver_Joar_R2_Text_2
# 923 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_3, MSGBOX_DEFAULT
# 924 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R2_2:
# 918 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 919 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R3::
# 928 "data/maps/ParcelRiver/scripts.pory"
	lock
# 929 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 930 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R3_Text_0, MSGBOX_YESNO
# 931 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R3_2
# 936 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R3, ParcelRiver_Joar_R3_Text_1
# 937 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R3_Text_2, MSGBOX_DEFAULT
# 938 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R3_2:
# 932 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 933 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R4::
# 942 "data/maps/ParcelRiver/scripts.pory"
	lock
# 943 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 944 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R4_Text_0, MSGBOX_YESNO
# 945 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R4_2
# 950 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R4, ParcelRiver_Joar_R4_Text_1
# 951 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R4_Text_2, MSGBOX_DEFAULT
# 952 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R4_2:
# 946 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 947 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R5::
# 956 "data/maps/ParcelRiver/scripts.pory"
	lock
# 957 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 958 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R5_Text_0, MSGBOX_YESNO
# 959 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R5_2
# 964 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R5, ParcelRiver_Joar_R4_Text_1
# 965 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R5_Text_1, MSGBOX_DEFAULT
# 966 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R5_2:
# 960 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 961 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari::
# 970 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_KARI, ParcelRiver_Kari_Text_0, ParcelRiver_Kari_Text_1, ParcelRiver_Kari_FirstWin
# 974 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 975 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Kari_3
ParcelRiver_Kari_1:
# 978 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Kari_8
ParcelRiver_Kari_6:
# 981 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Kari_13
ParcelRiver_Kari_11:
# 984 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Kari_18
ParcelRiver_Kari_16:
# 987 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Kari_2:
# 976 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R2
	goto ParcelRiver_Kari_1

ParcelRiver_Kari_3:
# 975 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R2
	goto_if 0, ParcelRiver_Kari_2
	goto ParcelRiver_Kari_1

ParcelRiver_Kari_7:
# 979 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R3
	goto ParcelRiver_Kari_6

ParcelRiver_Kari_8:
# 978 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R3
	goto_if 0, ParcelRiver_Kari_7
	goto ParcelRiver_Kari_6

ParcelRiver_Kari_12:
# 982 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R4
	goto ParcelRiver_Kari_11

ParcelRiver_Kari_13:
# 981 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R4
	goto_if 0, ParcelRiver_Kari_12
	goto ParcelRiver_Kari_11

ParcelRiver_Kari_17:
# 985 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R5
	goto ParcelRiver_Kari_16

ParcelRiver_Kari_18:
# 984 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R5
	goto_if 0, ParcelRiver_Kari_17
	goto ParcelRiver_Kari_16


ParcelRiver_Kari_FirstWin::
# 991 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
# 992 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R2::
# 996 "data/maps/ParcelRiver/scripts.pory"
	lock
# 997 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 998 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_0, MSGBOX_YESNO
# 999 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R2_2
# 1004 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R2, ParcelRiver_Kari_R2_Text_2
# 1005 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_3, MSGBOX_DEFAULT
# 1006 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R2_2:
# 1000 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1001 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R3::
# 1010 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1011 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1012 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R3_Text_0, MSGBOX_YESNO
# 1013 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R3_2
# 1018 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R3, ParcelRiver_Kari_R3_Text_1
# 1019 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R3_Text_2, MSGBOX_DEFAULT
# 1020 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R3_2:
# 1014 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1015 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R4::
# 1024 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1025 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1026 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R4_Text_0, MSGBOX_YESNO
# 1027 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R4_2
# 1032 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R4, ParcelRiver_Kari_R3_Text_1
# 1033 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R4_Text_1, MSGBOX_DEFAULT
# 1034 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R4_2:
# 1028 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1029 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R5::
# 1038 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1039 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1040 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R5_Text_0, MSGBOX_YESNO
# 1041 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R5_2
# 1046 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R5, ParcelRiver_Kari_R5_Text_1
# 1047 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R5_Text_2, MSGBOX_DEFAULT
# 1048 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R5_2:
# 1042 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1043 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars::
# 1052 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_LARS, ParcelRiver_Lars_Text_0, ParcelRiver_Lars_Text_1, ParcelRiver_Lars_FirstWin
# 1056 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1057 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Lars_3
ParcelRiver_Lars_1:
# 1060 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Lars_8
ParcelRiver_Lars_6:
# 1063 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Lars_13
ParcelRiver_Lars_11:
# 1066 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Lars_18
ParcelRiver_Lars_16:
# 1069 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Lars_2:
# 1058 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R2
	goto ParcelRiver_Lars_1

ParcelRiver_Lars_3:
# 1057 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R2
	goto_if 0, ParcelRiver_Lars_2
	goto ParcelRiver_Lars_1

ParcelRiver_Lars_7:
# 1061 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R3
	goto ParcelRiver_Lars_6

ParcelRiver_Lars_8:
# 1060 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R3
	goto_if 0, ParcelRiver_Lars_7
	goto ParcelRiver_Lars_6

ParcelRiver_Lars_12:
# 1064 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R4
	goto ParcelRiver_Lars_11

ParcelRiver_Lars_13:
# 1063 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R4
	goto_if 0, ParcelRiver_Lars_12
	goto ParcelRiver_Lars_11

ParcelRiver_Lars_17:
# 1067 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R5
	goto ParcelRiver_Lars_16

ParcelRiver_Lars_18:
# 1066 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R5
	goto_if 0, ParcelRiver_Lars_17
	goto ParcelRiver_Lars_16


ParcelRiver_Lars_FirstWin::
# 1073 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
# 1074 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R2::
# 1078 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1079 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1080 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_0, MSGBOX_YESNO
# 1081 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R2_2
# 1086 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R2, ParcelRiver_Lars_R2_Text_2
# 1087 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_3, MSGBOX_DEFAULT
# 1088 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R2_2:
# 1082 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1083 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R3::
# 1092 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1093 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1094 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R3_Text_0, MSGBOX_YESNO
# 1095 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R3_2
# 1100 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R3, ParcelRiver_Lars_R3_Text_1
# 1101 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R3_Text_2, MSGBOX_DEFAULT
# 1102 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R3_2:
# 1096 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1097 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R4::
# 1106 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1107 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1108 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R4_Text_0, MSGBOX_YESNO
# 1109 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R4_2
# 1114 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R4, ParcelRiver_Lars_R2_Text_2
# 1115 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R4_Text_1, MSGBOX_DEFAULT
# 1116 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R4_2:
# 1110 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1111 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R5::
# 1120 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1121 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1122 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R5_Text_0, MSGBOX_YESNO
# 1123 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R5_2
# 1128 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R5, ParcelRiver_Lars_R5_Text_1
# 1129 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R5_Text_2, MSGBOX_DEFAULT
# 1130 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R5_2:
# 1124 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1125 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit::
# 1134 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_MARIT, ParcelRiver_Marit_Text_0, ParcelRiver_Marit_Text_1, ParcelRiver_Marit_FirstWin
# 1138 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1139 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Marit_3
ParcelRiver_Marit_1:
# 1142 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Marit_8
ParcelRiver_Marit_6:
# 1145 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Marit_13
ParcelRiver_Marit_11:
# 1148 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Marit_18
ParcelRiver_Marit_16:
# 1151 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Marit_2:
# 1140 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R2
	goto ParcelRiver_Marit_1

ParcelRiver_Marit_3:
# 1139 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R2
	goto_if 0, ParcelRiver_Marit_2
	goto ParcelRiver_Marit_1

ParcelRiver_Marit_7:
# 1143 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R3
	goto ParcelRiver_Marit_6

ParcelRiver_Marit_8:
# 1142 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R3
	goto_if 0, ParcelRiver_Marit_7
	goto ParcelRiver_Marit_6

ParcelRiver_Marit_12:
# 1146 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R4
	goto ParcelRiver_Marit_11

ParcelRiver_Marit_13:
# 1145 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R4
	goto_if 0, ParcelRiver_Marit_12
	goto ParcelRiver_Marit_11

ParcelRiver_Marit_17:
# 1149 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R5
	goto ParcelRiver_Marit_16

ParcelRiver_Marit_18:
# 1148 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R5
	goto_if 0, ParcelRiver_Marit_17
	goto ParcelRiver_Marit_16


ParcelRiver_Marit_FirstWin::
# 1155 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
# 1156 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R2::
# 1160 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1161 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1162 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_0, MSGBOX_YESNO
# 1163 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R2_2
# 1168 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R2, ParcelRiver_Marit_R2_Text_2
# 1169 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_3, MSGBOX_DEFAULT
# 1170 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R2_2:
# 1164 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1165 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R3::
# 1174 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1175 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1176 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R3_Text_0, MSGBOX_YESNO
# 1177 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R3_2
# 1182 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R3, ParcelRiver_Marit_R3_Text_1
# 1183 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R3_Text_2, MSGBOX_DEFAULT
# 1184 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R3_2:
# 1178 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1179 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R4::
# 1188 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1189 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1190 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R4_Text_0, MSGBOX_YESNO
# 1191 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R4_2
# 1196 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R4, ParcelRiver_Marit_R4_Text_1
# 1197 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R4_Text_2, MSGBOX_DEFAULT
# 1198 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R4_2:
# 1192 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1193 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R5::
# 1202 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1203 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1204 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R5_Text_0, MSGBOX_YESNO
# 1205 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R5_2
# 1210 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R5, ParcelRiver_Marit_R5_Text_1
# 1211 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R5_Text_2, MSGBOX_DEFAULT
# 1212 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R5_2:
# 1206 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1207 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal::
# 1216 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_NJAL, ParcelRiver_Njal_Text_0, ParcelRiver_Njal_Text_1, ParcelRiver_Njal_FirstWin
# 1220 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1221 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Njal_3
ParcelRiver_Njal_1:
# 1224 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Njal_8
ParcelRiver_Njal_6:
# 1227 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Njal_13
ParcelRiver_Njal_11:
# 1230 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Njal_18
ParcelRiver_Njal_16:
# 1233 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Njal_2:
# 1222 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R2
	goto ParcelRiver_Njal_1

ParcelRiver_Njal_3:
# 1221 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R2
	goto_if 0, ParcelRiver_Njal_2
	goto ParcelRiver_Njal_1

ParcelRiver_Njal_7:
# 1225 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R3
	goto ParcelRiver_Njal_6

ParcelRiver_Njal_8:
# 1224 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R3
	goto_if 0, ParcelRiver_Njal_7
	goto ParcelRiver_Njal_6

ParcelRiver_Njal_12:
# 1228 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R4
	goto ParcelRiver_Njal_11

ParcelRiver_Njal_13:
# 1227 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R4
	goto_if 0, ParcelRiver_Njal_12
	goto ParcelRiver_Njal_11

ParcelRiver_Njal_17:
# 1231 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R5
	goto ParcelRiver_Njal_16

ParcelRiver_Njal_18:
# 1230 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R5
	goto_if 0, ParcelRiver_Njal_17
	goto ParcelRiver_Njal_16


ParcelRiver_Njal_FirstWin::
# 1237 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
# 1238 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R2::
# 1242 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1243 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1244 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_0, MSGBOX_YESNO
# 1245 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R2_2
# 1250 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R2, ParcelRiver_Njal_R2_Text_2
# 1251 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_3, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R2_2:
# 1246 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1247 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R3::
# 1256 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1257 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1258 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R3_Text_0, MSGBOX_YESNO
# 1259 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R3_2
# 1264 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R3, ParcelRiver_Njal_R3_Text_1
# 1265 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R3_Text_2, MSGBOX_DEFAULT
# 1266 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R3_2:
# 1260 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1261 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R4::
# 1270 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1271 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1272 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R4_Text_0, MSGBOX_YESNO
# 1273 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R4_2
# 1278 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R4, ParcelRiver_Njal_R4_Text_1
# 1279 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R4_Text_2, MSGBOX_DEFAULT
# 1280 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R4_2:
# 1274 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1275 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R5::
# 1284 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1285 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1286 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R5_Text_0, MSGBOX_YESNO
# 1287 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R5_2
# 1292 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R5, ParcelRiver_Njal_R5_Text_1
# 1293 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R5_Text_2, MSGBOX_DEFAULT
# 1294 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R5_2:
# 1288 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1289 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar::
# 1298 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_OTTAR, ParcelRiver_Ottar_Text_0, ParcelRiver_Ottar_Text_1, ParcelRiver_Ottar_FirstWin
# 1302 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1303 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Ottar_3
ParcelRiver_Ottar_1:
# 1306 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Ottar_8
ParcelRiver_Ottar_6:
# 1309 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Ottar_13
ParcelRiver_Ottar_11:
# 1312 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Ottar_18
ParcelRiver_Ottar_16:
# 1315 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Ottar_2:
# 1304 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R2
	goto ParcelRiver_Ottar_1

ParcelRiver_Ottar_3:
# 1303 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R2
	goto_if 0, ParcelRiver_Ottar_2
	goto ParcelRiver_Ottar_1

ParcelRiver_Ottar_7:
# 1307 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R3
	goto ParcelRiver_Ottar_6

ParcelRiver_Ottar_8:
# 1306 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R3
	goto_if 0, ParcelRiver_Ottar_7
	goto ParcelRiver_Ottar_6

ParcelRiver_Ottar_12:
# 1310 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R4
	goto ParcelRiver_Ottar_11

ParcelRiver_Ottar_13:
# 1309 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R4
	goto_if 0, ParcelRiver_Ottar_12
	goto ParcelRiver_Ottar_11

ParcelRiver_Ottar_17:
# 1313 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R5
	goto ParcelRiver_Ottar_16

ParcelRiver_Ottar_18:
# 1312 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R5
	goto_if 0, ParcelRiver_Ottar_17
	goto ParcelRiver_Ottar_16


ParcelRiver_Ottar_FirstWin::
# 1319 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
# 1320 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R2::
# 1324 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1325 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1326 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_0, MSGBOX_YESNO
# 1327 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R2_2
# 1332 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R2, ParcelRiver_Ottar_R2_Text_2
# 1333 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_3, MSGBOX_DEFAULT
# 1334 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R2_2:
# 1328 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1329 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R3::
# 1338 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1339 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1340 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R3_Text_0, MSGBOX_YESNO
# 1341 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R3_2
# 1346 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R3, ParcelRiver_Ottar_R3_Text_1
# 1347 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R3_Text_2, MSGBOX_DEFAULT
# 1348 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R3_2:
# 1342 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1343 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R4::
# 1352 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1353 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1354 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R4_Text_0, MSGBOX_YESNO
# 1355 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R4_2
# 1360 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R4, ParcelRiver_Ottar_R4_Text_1
# 1361 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R4_Text_2, MSGBOX_DEFAULT
# 1362 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R4_2:
# 1356 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1357 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R5::
# 1366 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1367 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1368 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R5_Text_0, MSGBOX_YESNO
# 1369 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R5_2
# 1374 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R5, ParcelRiver_Ottar_R5_Text_1
# 1375 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R5_Text_2, MSGBOX_DEFAULT
# 1376 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R5_2:
# 1370 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1371 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal::
# 1380 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_PAAL, ParcelRiver_Paal_Text_0, ParcelRiver_Paal_Text_1, ParcelRiver_Paal_FirstWin
# 1384 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1385 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Paal_3
ParcelRiver_Paal_1:
# 1388 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Paal_8
ParcelRiver_Paal_6:
# 1391 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Paal_13
ParcelRiver_Paal_11:
# 1394 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Paal_18
ParcelRiver_Paal_16:
# 1397 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Paal_2:
# 1386 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R2
	goto ParcelRiver_Paal_1

ParcelRiver_Paal_3:
# 1385 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R2
	goto_if 0, ParcelRiver_Paal_2
	goto ParcelRiver_Paal_1

ParcelRiver_Paal_7:
# 1389 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R3
	goto ParcelRiver_Paal_6

ParcelRiver_Paal_8:
# 1388 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R3
	goto_if 0, ParcelRiver_Paal_7
	goto ParcelRiver_Paal_6

ParcelRiver_Paal_12:
# 1392 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R4
	goto ParcelRiver_Paal_11

ParcelRiver_Paal_13:
# 1391 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R4
	goto_if 0, ParcelRiver_Paal_12
	goto ParcelRiver_Paal_11

ParcelRiver_Paal_17:
# 1395 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R5
	goto ParcelRiver_Paal_16

ParcelRiver_Paal_18:
# 1394 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R5
	goto_if 0, ParcelRiver_Paal_17
	goto ParcelRiver_Paal_16


ParcelRiver_Paal_FirstWin::
# 1401 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
# 1402 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R2::
# 1406 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1407 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1408 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_0, MSGBOX_YESNO
# 1409 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R2_2
# 1414 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R2, ParcelRiver_Paal_R2_Text_2
# 1415 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_3, MSGBOX_DEFAULT
# 1416 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R2_2:
# 1410 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1411 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R3::
# 1420 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1421 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1422 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R3_Text_0, MSGBOX_YESNO
# 1423 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R3_2
# 1428 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R3, ParcelRiver_Paal_R3_Text_1
# 1429 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R3_Text_2, MSGBOX_DEFAULT
# 1430 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R3_2:
# 1424 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1425 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R4::
# 1434 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1435 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1436 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R4_Text_0, MSGBOX_YESNO
# 1437 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R4_2
# 1442 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R4, ParcelRiver_Paal_R2_Text_2
# 1443 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R4_Text_1, MSGBOX_DEFAULT
# 1444 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R4_2:
# 1438 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1439 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R5::
# 1448 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1449 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1450 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R5_Text_0, MSGBOX_YESNO
# 1451 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R5_2
# 1456 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R5, ParcelRiver_Paal_R2_Text_2
# 1457 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R5_Text_1, MSGBOX_DEFAULT
# 1458 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R5_2:
# 1452 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1453 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna::
# 1462 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_RAGNA, ParcelRiver_Ragna_Text_0, ParcelRiver_Ragna_Text_1, ParcelRiver_Ragna_FirstWin
# 1466 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1467 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Ragna_3
ParcelRiver_Ragna_1:
# 1470 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Ragna_8
ParcelRiver_Ragna_6:
# 1473 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Ragna_13
ParcelRiver_Ragna_11:
# 1476 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Ragna_18
ParcelRiver_Ragna_16:
# 1479 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Ragna_2:
# 1468 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R2
	goto ParcelRiver_Ragna_1

ParcelRiver_Ragna_3:
# 1467 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R2
	goto_if 0, ParcelRiver_Ragna_2
	goto ParcelRiver_Ragna_1

ParcelRiver_Ragna_7:
# 1471 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R3
	goto ParcelRiver_Ragna_6

ParcelRiver_Ragna_8:
# 1470 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R3
	goto_if 0, ParcelRiver_Ragna_7
	goto ParcelRiver_Ragna_6

ParcelRiver_Ragna_12:
# 1474 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R4
	goto ParcelRiver_Ragna_11

ParcelRiver_Ragna_13:
# 1473 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R4
	goto_if 0, ParcelRiver_Ragna_12
	goto ParcelRiver_Ragna_11

ParcelRiver_Ragna_17:
# 1477 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R5
	goto ParcelRiver_Ragna_16

ParcelRiver_Ragna_18:
# 1476 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R5
	goto_if 0, ParcelRiver_Ragna_17
	goto ParcelRiver_Ragna_16


ParcelRiver_Ragna_FirstWin::
# 1483 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
# 1484 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R2::
# 1488 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1489 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1490 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_0, MSGBOX_YESNO
# 1491 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R2_2
# 1496 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R2, ParcelRiver_Ragna_R2_Text_2
# 1497 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_3, MSGBOX_DEFAULT
# 1498 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R2_2:
# 1492 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1493 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R3::
# 1502 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1503 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1504 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R3_Text_0, MSGBOX_YESNO
# 1505 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R3_2
# 1510 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R3, ParcelRiver_Ragna_R3_Text_1
# 1511 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R3_Text_2, MSGBOX_DEFAULT
# 1512 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R3_2:
# 1506 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1507 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R4::
# 1516 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1517 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1518 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R4_Text_0, MSGBOX_YESNO
# 1519 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R4_2
# 1524 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R4, ParcelRiver_Ragna_R4_Text_1
# 1525 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R4_Text_2, MSGBOX_DEFAULT
# 1526 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R4_2:
# 1520 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1521 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R5::
# 1530 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1531 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1532 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R5_Text_0, MSGBOX_YESNO
# 1533 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R5_2
# 1538 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R5, ParcelRiver_Ragna_R3_Text_1
# 1539 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R5_Text_1, MSGBOX_DEFAULT
# 1540 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R5_2:
# 1534 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1535 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd::
# 1544 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_SIGURD, ParcelRiver_Sigurd_Text_0, ParcelRiver_Sigurd_Text_1, ParcelRiver_Sigurd_FirstWin
# 1548 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1549 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Sigurd_3
ParcelRiver_Sigurd_1:
# 1552 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Sigurd_8
ParcelRiver_Sigurd_6:
# 1555 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Sigurd_13
ParcelRiver_Sigurd_11:
# 1558 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Sigurd_18
ParcelRiver_Sigurd_16:
# 1561 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Sigurd_2:
# 1550 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R2
	goto ParcelRiver_Sigurd_1

ParcelRiver_Sigurd_3:
# 1549 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R2
	goto_if 0, ParcelRiver_Sigurd_2
	goto ParcelRiver_Sigurd_1

ParcelRiver_Sigurd_7:
# 1553 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R3
	goto ParcelRiver_Sigurd_6

ParcelRiver_Sigurd_8:
# 1552 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R3
	goto_if 0, ParcelRiver_Sigurd_7
	goto ParcelRiver_Sigurd_6

ParcelRiver_Sigurd_12:
# 1556 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R4
	goto ParcelRiver_Sigurd_11

ParcelRiver_Sigurd_13:
# 1555 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R4
	goto_if 0, ParcelRiver_Sigurd_12
	goto ParcelRiver_Sigurd_11

ParcelRiver_Sigurd_17:
# 1559 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R5
	goto ParcelRiver_Sigurd_16

ParcelRiver_Sigurd_18:
# 1558 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R5
	goto_if 0, ParcelRiver_Sigurd_17
	goto ParcelRiver_Sigurd_16


ParcelRiver_Sigurd_FirstWin::
# 1565 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
# 1566 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R2::
# 1570 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1571 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1572 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_0, MSGBOX_YESNO
# 1573 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R2_2
# 1578 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R2, ParcelRiver_Sigurd_R2_Text_2
# 1579 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_3, MSGBOX_DEFAULT
# 1580 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R2_2:
# 1574 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1575 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R3::
# 1584 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1585 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1586 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R3_Text_0, MSGBOX_YESNO
# 1587 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R3_2
# 1592 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R3, ParcelRiver_Sigurd_R3_Text_1
# 1593 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R3_Text_2, MSGBOX_DEFAULT
# 1594 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R3_2:
# 1588 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1589 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R4::
# 1598 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1599 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1600 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R4_Text_0, MSGBOX_YESNO
# 1601 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R4_2
# 1606 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R4, ParcelRiver_Sigurd_R4_Text_1
# 1607 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R4_Text_2, MSGBOX_DEFAULT
# 1608 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R4_2:
# 1602 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1603 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R5::
# 1612 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1613 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1614 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R5_Text_0, MSGBOX_YESNO
# 1615 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R5_2
# 1620 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R5, ParcelRiver_Sigurd_R5_Text_1
# 1621 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R5_Text_2, MSGBOX_DEFAULT
# 1622 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R5_2:
# 1616 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1617 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_ItemPotion::
# 1627 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelRiver_ItemSuperRepel::
# 1628 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_SUPER_REPEL
	end


ParcelRiver_ItemGreatBall::
# 1629 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelRiver_ItemTM19::
# 1630 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_TM19
	end


ParcelRiver_SignTown::
# 1633 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignTown_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignBoard::
# 1637 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignBoard_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignMarket::
# 1641 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelRiver_T_Aud::
# 1647 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_AUD, ParcelRiver_T_Aud_Text_0, ParcelRiver_T_Aud_Text_1, ParcelRiver_T_Aud_FirstWin
# 1651 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1652 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Aud_3
ParcelRiver_T_Aud_1:
# 1655 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Aud_8
ParcelRiver_T_Aud_6:
# 1658 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Aud_13
ParcelRiver_T_Aud_11:
# 1661 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Aud_18
ParcelRiver_T_Aud_16:
# 1664 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Aud_2:
# 1653 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R2
	goto ParcelRiver_T_Aud_1

ParcelRiver_T_Aud_3:
# 1652 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R2
	goto_if 0, ParcelRiver_T_Aud_2
	goto ParcelRiver_T_Aud_1

ParcelRiver_T_Aud_7:
# 1656 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R3
	goto ParcelRiver_T_Aud_6

ParcelRiver_T_Aud_8:
# 1655 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R3
	goto_if 0, ParcelRiver_T_Aud_7
	goto ParcelRiver_T_Aud_6

ParcelRiver_T_Aud_12:
# 1659 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R4
	goto ParcelRiver_T_Aud_11

ParcelRiver_T_Aud_13:
# 1658 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R4
	goto_if 0, ParcelRiver_T_Aud_12
	goto ParcelRiver_T_Aud_11

ParcelRiver_T_Aud_17:
# 1662 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R5
	goto ParcelRiver_T_Aud_16

ParcelRiver_T_Aud_18:
# 1661 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R5
	goto_if 0, ParcelRiver_T_Aud_17
	goto ParcelRiver_T_Aud_16


ParcelRiver_T_Aud_FirstWin::
# 1668 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
# 1669 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R2::
# 1673 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1674 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1675 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_0, MSGBOX_YESNO
# 1676 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R2_2
# 1681 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R2, ParcelRiver_T_Aud_R2_Text_2
# 1682 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_3, MSGBOX_DEFAULT
# 1683 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R2_2:
# 1677 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1678 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R3::
# 1687 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1688 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1689 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R3_Text_0, MSGBOX_YESNO
# 1690 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R3_2
# 1695 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R3, ParcelRiver_T_Aud_R3_Text_1
# 1696 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R3_Text_2, MSGBOX_DEFAULT
# 1697 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R3_2:
# 1691 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1692 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R4::
# 1701 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1702 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1703 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R4_Text_0, MSGBOX_YESNO
# 1704 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R4_2
# 1709 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R4, ParcelRiver_T_Aud_R4_Text_1
# 1710 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R4_Text_2, MSGBOX_DEFAULT
# 1711 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R4_2:
# 1705 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1706 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R5::
# 1715 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1716 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1717 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R5_Text_0, MSGBOX_YESNO
# 1718 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R5_2
# 1723 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R5, ParcelRiver_T_Aud_R5_Text_1
# 1724 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R5_Text_2, MSGBOX_DEFAULT
# 1725 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R5_2:
# 1719 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1720 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen::
# 1729 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ESPEN, ParcelRiver_T_Espen_Text_0, ParcelRiver_T_Espen_Text_1, ParcelRiver_T_Espen_FirstWin
# 1733 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1734 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Espen_3
ParcelRiver_T_Espen_1:
# 1737 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Espen_8
ParcelRiver_T_Espen_6:
# 1740 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Espen_13
ParcelRiver_T_Espen_11:
# 1743 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Espen_18
ParcelRiver_T_Espen_16:
# 1746 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Espen_2:
# 1735 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R2
	goto ParcelRiver_T_Espen_1

ParcelRiver_T_Espen_3:
# 1734 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R2
	goto_if 0, ParcelRiver_T_Espen_2
	goto ParcelRiver_T_Espen_1

ParcelRiver_T_Espen_7:
# 1738 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R3
	goto ParcelRiver_T_Espen_6

ParcelRiver_T_Espen_8:
# 1737 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R3
	goto_if 0, ParcelRiver_T_Espen_7
	goto ParcelRiver_T_Espen_6

ParcelRiver_T_Espen_12:
# 1741 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R4
	goto ParcelRiver_T_Espen_11

ParcelRiver_T_Espen_13:
# 1740 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R4
	goto_if 0, ParcelRiver_T_Espen_12
	goto ParcelRiver_T_Espen_11

ParcelRiver_T_Espen_17:
# 1744 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R5
	goto ParcelRiver_T_Espen_16

ParcelRiver_T_Espen_18:
# 1743 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R5
	goto_if 0, ParcelRiver_T_Espen_17
	goto ParcelRiver_T_Espen_16


ParcelRiver_T_Espen_FirstWin::
# 1750 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
# 1751 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R2::
# 1755 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1756 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1757 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_0, MSGBOX_YESNO
# 1758 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R2_2
# 1763 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R2, ParcelRiver_T_Espen_R2_Text_2
# 1764 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_3, MSGBOX_DEFAULT
# 1765 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R2_2:
# 1759 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1760 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R3::
# 1769 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1770 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1771 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R3_Text_0, MSGBOX_YESNO
# 1772 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R3_2
# 1777 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R3, ParcelRiver_T_Espen_R3_Text_1
# 1778 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R3_Text_2, MSGBOX_DEFAULT
# 1779 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R3_2:
# 1773 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1774 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R4::
# 1783 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1784 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1785 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R4_Text_0, MSGBOX_YESNO
# 1786 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R4_2
# 1791 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R4, ParcelRiver_T_Espen_R4_Text_1
# 1792 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R4_Text_2, MSGBOX_DEFAULT
# 1793 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R4_2:
# 1787 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1788 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R5::
# 1797 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1798 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1799 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R5_Text_0, MSGBOX_YESNO
# 1800 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R5_2
# 1805 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R5, ParcelRiver_T_Espen_R2_Text_2
# 1806 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R5_Text_1, MSGBOX_DEFAULT
# 1807 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R5_2:
# 1801 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1802 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve::
# 1811 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_TRYGVE, ParcelRiver_T_Trygve_Text_0, ParcelRiver_T_Trygve_Text_1, ParcelRiver_T_Trygve_FirstWin
# 1815 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1816 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Trygve_3
ParcelRiver_T_Trygve_1:
# 1819 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Trygve_8
ParcelRiver_T_Trygve_6:
# 1822 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Trygve_13
ParcelRiver_T_Trygve_11:
# 1825 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Trygve_18
ParcelRiver_T_Trygve_16:
# 1828 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Trygve_2:
# 1817 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R2
	goto ParcelRiver_T_Trygve_1

ParcelRiver_T_Trygve_3:
# 1816 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R2
	goto_if 0, ParcelRiver_T_Trygve_2
	goto ParcelRiver_T_Trygve_1

ParcelRiver_T_Trygve_7:
# 1820 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R3
	goto ParcelRiver_T_Trygve_6

ParcelRiver_T_Trygve_8:
# 1819 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R3
	goto_if 0, ParcelRiver_T_Trygve_7
	goto ParcelRiver_T_Trygve_6

ParcelRiver_T_Trygve_12:
# 1823 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R4
	goto ParcelRiver_T_Trygve_11

ParcelRiver_T_Trygve_13:
# 1822 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R4
	goto_if 0, ParcelRiver_T_Trygve_12
	goto ParcelRiver_T_Trygve_11

ParcelRiver_T_Trygve_17:
# 1826 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R5
	goto ParcelRiver_T_Trygve_16

ParcelRiver_T_Trygve_18:
# 1825 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R5
	goto_if 0, ParcelRiver_T_Trygve_17
	goto ParcelRiver_T_Trygve_16


ParcelRiver_T_Trygve_FirstWin::
# 1832 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
# 1833 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R2::
# 1837 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1838 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1839 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_0, MSGBOX_YESNO
# 1840 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R2_2
# 1845 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R2, ParcelRiver_T_Trygve_R2_Text_2
# 1846 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_3, MSGBOX_DEFAULT
# 1847 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R2_2:
# 1841 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1842 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R3::
# 1851 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1852 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1853 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R3_Text_0, MSGBOX_YESNO
# 1854 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R3_2
# 1859 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R3, ParcelRiver_T_Trygve_R3_Text_1
# 1860 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R3_Text_2, MSGBOX_DEFAULT
# 1861 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R3_2:
# 1855 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1856 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R4::
# 1865 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1866 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1867 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R4_Text_0, MSGBOX_YESNO
# 1868 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R4_2
# 1873 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R4, ParcelRiver_T_Trygve_R3_Text_1
# 1874 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R4_Text_1, MSGBOX_DEFAULT
# 1875 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R4_2:
# 1869 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1870 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R5::
# 1879 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1880 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1881 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R5_Text_0, MSGBOX_YESNO
# 1882 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R5_2
# 1887 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R5, ParcelRiver_T_Trygve_R5_Text_1
# 1888 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R5_Text_2, MSGBOX_DEFAULT
# 1889 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R5_2:
# 1883 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1884 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_BeaverStump::
# 1895 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1896 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER, ParcelRiver_BeaverStump_3
ParcelRiver_BeaverStump_1:
# 1902 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_BeaverStump_Text_1, MSGBOX_SIGN
# 1903 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_BeaverStump_2:
# 1897 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_BeaverStump_Text_0, MSGBOX_SIGN
# 1898 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER_SEEN
# 1899 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_BeaverStump_3:
# 1896 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BEAVER_SEEN, ParcelRiver_BeaverStump_2
	goto ParcelRiver_BeaverStump_1


ParcelRiver_PerrinScene::
# 1909 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_4, ParcelRiver_PerrinScene_2
# 1913 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 1914 "data/maps/ParcelRiver/scripts.pory"
	playse SE_PIN
# 1915 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1916 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1917 "data/maps/ParcelRiver/scripts.pory"
	applymovement 34, Movement_ParcelRiver_PerrinIn
# 1918 "data/maps/ParcelRiver/scripts.pory"
	waitmovement 0
# 1919 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1920 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_4, ParcelRiver_PerrinScene_Text_2
# 1921 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1922 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1923 "data/maps/ParcelRiver/scripts.pory"
	applymovement 34, Movement_ParcelRiver_PerrinOut
# 1924 "data/maps/ParcelRiver/scripts.pory"
	waitmovement 0
# 1925 "data/maps/ParcelRiver/scripts.pory"
	removeobject 34
# 1926 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_PERRIN_4
# 1927 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1928 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_PerrinScene_2:
# 1910 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelRiver_PerrinTalk::
# 1932 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1933 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1934 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1935 "data/maps/ParcelRiver/scripts.pory"
	release
	end


# 1938 "data/maps/ParcelRiver/scripts.pory"
Movement_ParcelRiver_PerrinIn:
# 1938 "data/maps/ParcelRiver/scripts.pory"
	walk_down
# 1938 "data/maps/ParcelRiver/scripts.pory"
	walk_down
	step_end

# 1939 "data/maps/ParcelRiver/scripts.pory"
Movement_ParcelRiver_PerrinOut:
# 1939 "data/maps/ParcelRiver/scripts.pory"
	walk_up
# 1939 "data/maps/ParcelRiver/scripts.pory"
	walk_up
	step_end

ParcelRiver_Epilogue::
# 1943 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 1944 "data/maps/ParcelRiver/scripts.pory"
	delay 20
# 1945 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Epilogue_Text_0, MSGBOX_DEFAULT
# 1946 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Epilogue_Text_1, MSGBOX_DEFAULT
# 1947 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1948 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 4
# 1949 "data/maps/ParcelRiver/scripts.pory"
	warp MAP_PARCEL_HIGHLANDS, 20, 68
# 1950 "data/maps/ParcelRiver/scripts.pory"
	waitstate
	end


ParcelRiver_ToMillWood::
# 1956 "data/maps/ParcelRiver/scripts.pory"
	warp MAP_PARCEL_RIVER_MILL_WOOD, 36, 37
# 1957 "data/maps/ParcelRiver/scripts.pory"
	waitstate
	end


ParcelRiver_Hives::
# 1962 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HIVES, ParcelRiver_Hives_2
# 1965 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Hives_Text_0, MSGBOX_SIGN
# 1966 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_HIVES_FOUND
	end

ParcelRiver_Hives_2:
	end


ParcelRiver_SurveyStake::
# 1972 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SurveyStake_Text_0, MSGBOX_SIGN
# 1973 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 3
# 1974 "data/maps/ParcelRiver/scripts.pory"
	special SkaldSurveyStake
# 1975 "data/maps/ParcelRiver/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1976 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelRiver_SurveyStake_3
ParcelRiver_SurveyStake_1:
	end

ParcelRiver_SurveyStake_2:
# 1977 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SurveyStake_Text_1, MSGBOX_SIGN
# 1978 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_SECOND_3
	goto ParcelRiver_SurveyStake_1

ParcelRiver_SurveyStake_3:
# 1976 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_3, ParcelRiver_SurveyStake_2
	goto ParcelRiver_SurveyStake_1


ParcelRiver_PairMeter::
# 1986 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1987 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PairMeter_2
# 1992 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_PairMeter_3
# 1998 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_8, MSGBOX_DEFAULT
# 1999 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_9, MSGBOX_DEFAULT
# 2000 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_10, MSGBOX_DEFAULT
# 2001 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_11, MSGBOX_DEFAULT
ParcelRiver_PairMeter_1:
# 2003 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PairMeter_2:
# 1988 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_0, MSGBOX_DEFAULT
# 1989 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_1, MSGBOX_DEFAULT
# 1990 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_2, MSGBOX_DEFAULT
# 1991 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_3, MSGBOX_DEFAULT
	goto ParcelRiver_PairMeter_1

ParcelRiver_PairMeter_3:
# 1993 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_4, MSGBOX_DEFAULT
# 1994 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_5, MSGBOX_DEFAULT
# 1995 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_6, MSGBOX_DEFAULT
# 1996 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_7, MSGBOX_DEFAULT
	goto ParcelRiver_PairMeter_1


ParcelRiver_PairFord::
# 2008 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2009 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PairFord_2
# 2015 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_PairFord_3
# 2021 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_9, MSGBOX_DEFAULT
# 2022 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_10, MSGBOX_DEFAULT
# 2023 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_11, MSGBOX_DEFAULT
# 2024 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_12, MSGBOX_DEFAULT
ParcelRiver_PairFord_1:
# 2026 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PairFord_2:
# 2010 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_0, MSGBOX_DEFAULT
# 2011 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_1, MSGBOX_DEFAULT
# 2012 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_2, MSGBOX_DEFAULT
# 2013 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_3, MSGBOX_DEFAULT
# 2014 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_4, MSGBOX_DEFAULT
	goto ParcelRiver_PairFord_1

ParcelRiver_PairFord_3:
# 2016 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_5, MSGBOX_DEFAULT
# 2017 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_6, MSGBOX_DEFAULT
# 2018 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_7, MSGBOX_DEFAULT
# 2019 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_8, MSGBOX_DEFAULT
	goto ParcelRiver_PairFord_1


ParcelRiver_Stringer::
# 2033 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2034 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 2035 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Stringer_2
# 2037 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Stringer_3
# 2044 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_3, MSGBOX_DEFAULT
ParcelRiver_Stringer_1:
# 2046 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Stringer_2:
# 2036 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelRiver_Stringer_1

ParcelRiver_Stringer_3:
# 2038 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_CH_SPOKE, ParcelRiver_Stringer_7
# 2041 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_2, MSGBOX_DEFAULT
	goto ParcelRiver_Stringer_1

ParcelRiver_Stringer_7:
# 2039 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelRiver_Stringer_1


ParcelRiver_FordBoy::
# 2053 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2054 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 2055 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK_DONE, ParcelRiver_FordBoy_2
# 2057 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK, ParcelRiver_FordBoy_3
# 2066 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_3, MSGBOX_DEFAULT
# 2067 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BOOK
ParcelRiver_FordBoy_1:
# 2069 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_FordBoy_2:
# 2056 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_0, MSGBOX_DEFAULT
	goto ParcelRiver_FordBoy_1

ParcelRiver_FordBoy_3:
# 2058 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK_FOUND, ParcelRiver_FordBoy_7
# 2063 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_2, MSGBOX_DEFAULT
	goto ParcelRiver_FordBoy_1

ParcelRiver_FordBoy_7:
# 2059 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_1, MSGBOX_DEFAULT
# 2060 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_NET_BALL, 3
# 2061 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BOOK_DONE
	goto ParcelRiver_FordBoy_1


ParcelRiver_FindDepth::
# 2076 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEPTH, ParcelRiver_FindDepth_4
ParcelRiver_FindDepth_3:
# 2080 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FindDepth_Text_1, MSGBOX_SIGN
ParcelRiver_FindDepth_1:
	end

ParcelRiver_FindDepth_2:
# 2077 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FindDepth_Text_0, MSGBOX_SIGN
# 2078 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DEPTH_FOUND
	goto ParcelRiver_FindDepth_1

ParcelRiver_FindDepth_4:
# 2076 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEPTH_FOUND, ParcelRiver_FindDepth_2
	goto ParcelRiver_FindDepth_3


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
# 141 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: ILEX signed you off, and I\n"
	.string "signed under you at the hearing. The\l"
	.string "river's in the review with the coast.\l"
	.string "Both or neither, I told them. They took\l"
	.string "both.$"

ParcelRiver_Harland_Text_1:
# 147 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: ILEX signed you off. Good.\p"
	.string "Stay the night. On the boat. The river's\n"
	.string "different in the dark, and you've only\l"
	.string "read it in daylight.$"

ParcelRiver_Harland_Text_2:
# 148 "data/maps/ParcelRiver/scripts.pory"
	.string "Stay the night?$"

ParcelRiver_Harland_Text_3:
# 150 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Offer stands.$"

ParcelRiver_Harland_Text_4:
# 156 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Hear that? That's the cut. Day\n"
	.string "and night, same note. Used to be the\l"
	.string "water had a dozen voices along here.$"

ParcelRiver_Harland_Text_5:
# 157 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: My father could tell the pools\n"
	.string "apart with his eyes shut. I can't. There\l"
	.string "aren't any.$"

ParcelRiver_Harland_Text_6:
# 158 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: The note on this boat comes\n"
	.string "due in spring. If the catch holds, I\l"
	.string "keep her. If it doesn't, a MEREHOLT\l"
	.string "outfit I've never met owns a boat my\l"
	.string "grandfather built.\p"
	.string "That's what 'relief' bought me. I'm not\n"
	.string "blaming you. I'm telling you the price.$"

ParcelRiver_Harland_Text_7:
# 159 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The upstream reach is still\n"
	.string "clean. ILEX says it can come back.$"

ParcelRiver_Harland_Text_8:
# 160 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Then write it so somebody with\n"
	.string "a pen believes it. I've tried the other\l"
	.string "way.\p"
	.string "Go to sleep, RANGER. River's not going\n"
	.string "anywhere. Yet.$"

ParcelRiver_Harland_Text_9:
# 164 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Morning. Coffee's bad. Catch\n"
	.string "was four. Go on, you've got a mountain\l"
	.string "to climb, I hear.$"

ParcelRiver_Harland_Text_10:
# 169 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Catch was four. Same as\n"
	.string "yesterday. Go on.$"

ParcelRiver_Harland_Text_11:
# 177 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Read me right when you write\n"
	.string "it.$"

ParcelRiver_Harland_Text_12:
# 181 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: You're the one with the\n"
	.string "notebook. Word came up the river ahead\l"
	.string "of you.\p"
	.string "Come to tell me the fishing's poor. As if\n"
	.string "I can't read my own water.$"

ParcelRiver_Harland_Text_13:
# 182 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The catch is down because\n"
	.string "the river is. The cut. The bloom off the\l"
	.string "fields.$"

ParcelRiver_Harland_Text_14:
# 183 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: I KNOW why it's down. Knew\n"
	.string "before you could walk.\p"
	.string "My father fished this. His father\n"
	.string "helped build half that old dam your\l"
	.string "people keep photographing, back when\l"
	.string "building it was the work.$"

ParcelRiver_Harland_Text_15:
# 184 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: And the Board says straighten\n"
	.string "the cut and the floods stop taking my\l"
	.string "gear. The FOUNDATION carries the note\l"
	.string "on the boat so I keep working while it\l"
	.string "all gets sorted.\p"
	.string "So what is it you'd have me do? Tie up\n"
	.string "and starve on principle?$"

ParcelRiver_Harland_Text_16:
# 185 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: …Who holds the note on the\n"
	.string "boat?$"

ParcelRiver_Harland_Text_17:
# 186 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: A MEREHOLT outfit. Coastal\n"
	.string "lending.\p"
	.string "Same crest as the fertiliser sacks.\n"
	.string "Same crest as the Board. Hadn't set\l"
	.string "those side by side before. Don't care\l"
	.string "for how they line up.$"

ParcelRiver_Harland_Text_18:
# 187 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Write your report, RANGER.\n"
	.string "Read me right when you do.\p"
	.string "I'm not your villain. I'm the man they'll\n"
	.string "send the bill to.$"

ParcelRiver_Farmer_Text_0:
# 198 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: ILEX's buffer strip, two rows,\n"
	.string "got written into the allocation. The\l"
	.string "fund paid. I didn't believe the fund. I\l"
	.string "believed it when the cheque cleared.\l"
	.string "The strip's going in. Two rows.$"

ParcelRiver_Farmer_Text_1:
# 203 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: ILEX put a buffer strip in her\n"
	.string "report. Two rows. Named a fund that'd\l"
	.string "pay for it.\p"
	.string "I'll believe the fund when it's in my\n"
	.string "hand. But she wrote it down. Nobody else\l"
	.string "has.$"

ParcelRiver_Farmer_Text_2:
# 207 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: Mind the rows, RANGER.\p"
	.string "They tell me my runoff greens the\n"
	.string "water. Likely true. They also tell me\l"
	.string "grow more for less, or sell to the\l"
	.string "FOUNDATION buyer at the FOUNDATION's\l"
	.string "number.$"

ParcelRiver_Farmer_Text_3:
# 208 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: I'd put a buffer strip along\n"
	.string "the bank tomorrow. Costs me two rows\l"
	.string "and a season's yield.\p"
	.string "You find me the one who'll pay for those\n"
	.string "two rows, and I'll dig it before you've\l"
	.string "walked home.$"

ParcelRiver_Ilex_Text_0:
# 218 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Stressed, not shifted, and the\n"
	.string "hearing kept the difference. I held it\l"
	.string "like a coal for you. Now you hold it for\l"
	.string "the next one.$"

ParcelRiver_Ilex_Text_1:
# 223 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Stressed, not shifted. Hold that\n"
	.string "difference like a coal.\p"
	.string "Most of the country you'll meet from\n"
	.string "here has already chosen. This river\l"
	.string "hasn't. Yet.$"

ParcelRiver_Ilex_Text_2:
# 231 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: The cut. The old dam. The bloom.\n"
	.string "The clean reach. The Board's sign. The\l"
	.string "man on the boat.\p"
	.string "Put a name on the river.$"

ParcelRiver_Ilex_Text_3:
# 233 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: STRESSED.\p"
	.string "The engineers are thinning. The cut\n"
	.string "took the slack water. The bloom is\l"
	.string "climbing. But the sensitive guild is\l"
	.string "still in that upstream reach. The web\l"
	.string "hasn't simplified yet.$"

ParcelRiver_Ilex_Text_4:
# 234 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Which means this is the rarest\n"
	.string "reading you will ever file. The one where\l"
	.string "doing the right thing in time still does\l"
	.string "something.$"

ParcelRiver_Ilex_Text_5:
# 235 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: So we intervene. Pull the\n"
	.string "cut, mend the dam…$"

ParcelRiver_Ilex_Text_6:
# 236 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Some of it. Not all of it, and not\n"
	.string "by signing the Board's plan.\p"
	.string "Relieve what's reversible: the buffer\n"
	.string "strip, the bloom, the fish passage.\l"
	.string "Refuse what isn't, dressed as relief:\l"
	.string "another straightened mile, another\l"
	.string "'flood control' that finishes the slack\l"
	.string "water.$"

ParcelRiver_Ilex_Text_7:
# 237 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: A stressed river doesn't need a\n"
	.string "hero. It needs someone who can tell the\l"
	.string "two apart and has the spine to say so\l"
	.string "out loud. You said so in the hall. I heard\l"
	.string "you.$"

ParcelRiver_Ilex_Text_8:
# 240 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Watershed Certification. HALE\n"
	.string "would make you walk back for it. I won't.\p"
	.string "You read the window. Now you keep it\n"
	.string "open.$"

ParcelRiver_Ilex_Text_9:
# 249 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Don't classify a river from one\n"
	.string "bend. Walk the bank: the cut, the old\l"
	.string "dam, the bloom off the fields, the clean\l"
	.string "water above the town. Read the Board's\l"
	.string "sign. Hear the man on the boat.\p"
	.string "Then come put a name to it.$"

ParcelRiver_Dorsey_Text_0:
# 259 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Phase 2 goes ahead. Six farms\n"
	.string "kept dry. You'd have done it too,\l"
	.string "RANGER, with a different word on the\l"
	.string "sign. I've stopped saying 'flood\l"
	.string "control'. I say 'the sluice'. It's the\l"
	.string "same sluice.$"

ParcelRiver_Dorsey_Text_1:
# 267 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: You've walked the bank. I can\n"
	.string "see it on your boots.\p"
	.string "Phase 2 is flood control, RANGER. Six\n"
	.string "farms lost gear last spring. The Board's\l"
	.string "plan stops that. Your ILEX calls it\l"
	.string "'finishing the slack water'. I call it\l"
	.string "keeping people's sheds dry.$"

ParcelRiver_Dorsey_Text_2:
# 268 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Come to the hall. There's a\n"
	.string "meeting. Say your piece in front of\l"
	.string "them, not behind my back. I'd rather\l"
	.string "lose an argument in public than win one\l"
	.string "in a report.$"

ParcelRiver_Dorsey_Text_3:
# 272 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: RANGER! Market day. Best day\n"
	.string "to see ELVSUND. Eggs, trout, the first\l"
	.string "greens.\p"
	.string "Trout's down this year. The Board has a\n"
	.string "plan for that. Phase 2. You'll have seen\l"
	.string "the notice.$"

ParcelRiver_Dorsey_Text_4:
# 273 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Walk the bank first, then come\n"
	.string "and tell me what you think. I mean that.\l"
	.string "I grew up two valleys over. My father's\l"
	.string "fields flooded every spring and nobody\l"
	.string "came.\p"
	.string "I came.$"

ParcelRiver_Aide_Text_0:
# 281 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: Phase 2 consultation reopened by\n"
	.string "order. The councilman takes questions\l"
	.string "every market day now, not just when it\l"
	.string "suits. Form a line. There is one.$"

ParcelRiver_Aide_Text_1:
# 286 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: The councilman's up at HAUKFELL\n"
	.string "this week. The warming centre. He takes\l"
	.string "questions there now; nobody forms a\l"
	.string "line there either.\p"
	.string "Phase 2 consultation remains closed.\n"
	.string "I'm to say 'remains'.$"

ParcelRiver_Aide_Text_2:
# 290 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: Phase 2 consultation is closed,\n"
	.string "but the councilman takes questions on\l"
	.string "market days. Form a line. There is no\l"
	.string "line.$"

ParcelRiver_VendorEggs_Text_0:
# 300 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: He came down the next morning\n"
	.string "with six jars and no apology. I took the\l"
	.string "jars. Buy something or move along,\l"
	.string "RANGER. I've a stall.$"

ParcelRiver_VendorEggs_Text_1:
# 305 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Asleep! Against a hive! I'll give\n"
	.string "him asleep.\p"
	.string "Here. Three jars. Don't pay. You've\n"
	.string "earned honey, which is more than most\l"
	.string "people manage.$"

ParcelRiver_VendorEggs_Text_2:
# 312 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Up the bank, above the plots,\n"
	.string "where the flowers still come. Six hives.\l"
	.string "If he's not there, he's in the river, and\l"
	.string "I'll want to know that too.$"

ParcelRiver_VendorEggs_Text_3:
# 317 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: The honey's from upstream,\n"
	.string "where the flowers still come. The\l"
	.string "beekeeper's not been down in a\l"
	.string "fortnight. His hives are on the bank\l"
	.string "above the plots.\p"
	.string "I can't leave the stall. You've legs.$"

ParcelRiver_VendorEggs_Text_4:
# 323 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Eggs, greens, honey. The honey's\n"
	.string "from upstream, where the flowers still\l"
	.string "come. More of them this year, the\l"
	.string "beekeeper says. He says it like he\l"
	.string "doesn't believe it.$"

ParcelRiver_VendorEggs_Text_5:
# 327 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Eggs, greens, a jar of honey. The\n"
	.string "honey's from upstream, where the\l"
	.string "flowers still come. Buy something or\l"
	.string "move along, RANGER, I've a stall to mind.$"

ParcelRiver_VendorFish_Text_0:
# 335 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. Six trout today.\n"
	.string "Sold two to the FOUNDATION buyer at my\l"
	.string "number, not his. First time. He paid it.\l"
	.string "He looked surprised to be paying it.$"

ParcelRiver_VendorFish_Text_1:
# 340 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. Four trout\n"
	.string "today. I sold them to the FOUNDATION\l"
	.string "buyer at his number because nobody\l"
	.string "else was buying.\p"
	.string "Your ILEX wrote 'fish passage' in her\n"
	.string "report. Tell her I'll hold her to it.$"

ParcelRiver_VendorFish_Text_2:
# 344 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. I sell what he\n"
	.string "catches. There's less to sell every\l"
	.string "spring and more people asking why.\p"
	.string "I tell them the Board has a plan. The\n"
	.string "Board always has a plan.$"

ParcelRiver_OldMan_Text_0:
# 352 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: The pond above the town. The\n"
	.string "allocation gives the beaver reach a\l"
	.string "flow. Beavers don't read allocations,\l"
	.string "but water does. I'll walk up and look.\l"
	.string "Every day, till I see one.$"

ParcelRiver_OldMan_Text_1:
# 357 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: They say the ground up at\n"
	.string "HAUKFELL has let go. Houses carried\l"
	.string "down a slope by hand. I swam in a beaver\l"
	.string "pond as a boy; those people skated on\l"
	.string "ground that's water now.\p"
	.string "A ditch I can live beside. That, I\n"
	.string "couldn't.$"

ParcelRiver_OldMan_Text_2:
# 361 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: There was a pond above the\n"
	.string "town. Beaver-built. We swam in it as\l"
	.string "boys. Then the trappers, then the\l"
	.string "Board.\p"
	.string "Now it's a ditch with a stake every\n"
	.string "fifty paces. Progress, they call it. I\l"
	.string "call it a ditch.$"

ParcelRiver_Girl_Text_0:
# 369 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman gave me a ribbon.\n"
	.string "PHASE 2, in blue. Mum put it in a drawer\l"
	.string "after the hearing. She said it's history\l"
	.string "now. I don't know what that means but\l"
	.string "it's still blue.$"

ParcelRiver_Girl_Text_1:
# 374 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman's up the mountain\n"
	.string "giving out blankets with the same crest\l"
	.string "as my ribbon!\p"
	.string "Mum says the blankets are real. She said\n"
	.string "it like the ribbon isn't. It IS. It's blue.$"

ParcelRiver_Girl_Text_2:
# 378 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman gave me a ribbon!\n"
	.string "It says PHASE 2 on it. I don't know what\l"
	.string "that is but it's blue.$"

ParcelRiver_Boy_Text_0:
# 386 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Mum says I can swim below the\n"
	.string "plots again by summer. The green\l"
	.string "stuff's going. She says a ranger wrote\l"
	.string "it down and then men came and measured.\l"
	.string "I asked if writing works. She said\l"
	.string "'sometimes'.$"

ParcelRiver_Boy_Text_1:
# 391 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: A boy from HAUKFELL came down to\n"
	.string "stay with his aunt. He says the ground\l"
	.string "there goes soft and the trees lean.\p"
	.string "He says it like it's normal. I told him\n"
	.string "the green water's normal. He didn't\l"
	.string "believe me either.$"

ParcelRiver_Boy_Text_2:
# 395 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Don't swim below the plots. Mum\n"
	.string "says the water's got green stuff in it\l"
	.string "that makes your skin go funny. Above\l"
	.string "the town's fine. Above the town's\l"
	.string "freezing.$"

ParcelRiver_PondFisher_Text_0:
# 404 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: Still there. Two hands over\n"
	.string "theirs, red under white, and the river at\l"
	.string "neither. His was right in his year and\l"
	.string "theirs is right in theirs and the water's\l"
	.string "walked away from both.\p"
	.string "Take these. Catch something in the pool\n"
	.string "while there's a pool.$"

ParcelRiver_PondFisher_Text_1:
# 408 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: The pier at the pool. Red lead\n"
	.string "under the Board's white. Two hands up.$"

ParcelRiver_PondFisher_Text_2:
# 413 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: The pool below the ford had a\n"
	.string "depth mark painted on the pier, my\l"
	.string "grandfather's, in red lead. The Board\l"
	.string "painted their own over it when the\l"
	.string "gauge went in.\p"
	.string "Go and see if his is still under theirs.\n"
	.string "It'd be two hands higher, if it's there.$"

ParcelRiver_PondFisher_Text_3:
# 419 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: I fish the town pond. Stocked.\n"
	.string "The river's getting better below the\l"
	.string "plots, they say. I'll fish it when I\l"
	.string "believe them. Not yet. Soon, maybe.$"

ParcelRiver_PondFisher_Text_4:
# 424 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: Stocked pond, stocked fish. Up\n"
	.string "at HAUKFELL they've got a stocked\l"
	.string "house now, they tell me. A grant and a\l"
	.string "house in the valley.\p"
	.string "Same thing. Not the same. The fish know.\n"
	.string "The people know.$"

ParcelRiver_PondFisher_Text_5:
# 428 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: I fish the town pond now.\n"
	.string "Stocked. It's not the same, but it's not\l"
	.string "green either.$"

ParcelRiver_AnglerTrainer_Text_0:
# 438 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years on this reach. You're\n"
	.string "the first one came up here to LOOK\l"
	.string "instead of promise. Means something.$"

ParcelRiver_AnglerTrainer_Text_1:
# 443 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: That's it! That's the one. My\n"
	.string "father's. Snagged it on the gravel\l"
	.string "above town thirty years back and never\l"
	.string "found it.\p"
	.string "You went and looked. Nobody looks.$"

ParcelRiver_AnglerTrainer_Text_2:
# 444 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Take the rod. The good one. I'm\n"
	.string "done with the big water; my knees say\l"
	.string "so.\p"
	.string "Somebody ought to be pulling SEAKING\n"
	.string "out of this river who'll write down how\l"
	.string "many.$"

ParcelRiver_AnglerTrainer_Text_3:
# 451 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Above the town, on the gravel,\n"
	.string "where the water's still clear. A brass\l"
	.string "lure. You'd see it if anyone would.$"

ParcelRiver_AnglerTrainer_Text_4:
# 457 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years I worked this reach.\n"
	.string "Pulled SEAKING out by the armful, once.\p"
	.string "Now look at it. Battle me. I could use\n"
	.string "the distraction.$"

ParcelRiver_AnglerTrainer_Text_5:
# 458 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Hah. You've still got the eye for\n"
	.string "it. Wish the river did.$"

ParcelRiver_AnglerTrainer_Text_6:
# 459 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The Board swears the cut'll bring\n"
	.string "the fish back. The Board swears a lot of\l"
	.string "things.\p"
	.string "You've got the eye. Do an old man a\n"
	.string "kindness. There's a brass lure on the\l"
	.string "gravel above town, my father's, lost\l"
	.string "thirty years. If anyone can spot it in\l"
	.string "that clear water, it's you.$"

ParcelRiver_Lure_Text_0:
# 466 "data/maps/ParcelRiver/scripts.pory"
	.string "Something glints on the gravel under\n"
	.string "the clear water. A brass lure, green with\l"
	.string "age, the hook long gone.\p"
	.string "Fished out.$"

ParcelRiver_Lure_Text_1:
# 471 "data/maps/ParcelRiver/scripts.pory"
	.string "Clear water over clean gravel. You can\n"
	.string "count the stones.$"

ParcelRiver_Arna_Text_0:
# 479 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: The flower plots are the best\n"
	.string "picnic in the district. Shame about the\l"
	.string "smell off the river. Battle?$"

ParcelRiver_Arna_Text_1:
# 480 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Lovely. Now go away, I'm eating.$"

ParcelRiver_Arna_Text_2:
# 495 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: ROSELIA only grow above the town\n"
	.string "now. Below it, nothing with a scent.$"

ParcelRiver_Arna_R2_Text_0:
# 506 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_Arna_R2_Text_1:
# 508 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Arna_R2_Text_2:
# 512 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: …Again, then. Later.$"

ParcelRiver_Arna_R2_Text_3:
# 513 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Arna_R3_Text_0:
# 520 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRiver_Arna_R3_Text_1:
# 526 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Right. That's the whole of it.$"

ParcelRiver_Arna_R3_Text_2:
# 527 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Arna_R4_Text_0:
# 534 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelRiver_Arna_R4_Text_1:
# 540 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Still yours.$"

ParcelRiver_Arna_R4_Text_2:
# 541 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Arna_R5_Text_0:
# 548 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Arna_R5_Text_1:
# 554 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's the one I wanted to see.$"

ParcelRiver_Arna_R5_Text_2:
# 555 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Botolv_Text_0:
# 561 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Camped on the high meadow a\n"
	.string "week. Seen the Board's boat go up and\l"
	.string "down six times. Seen you once. Battle.$"

ParcelRiver_Botolv_Text_1:
# 562 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Once was enough.$"

ParcelRiver_Botolv_Text_2:
# 577 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They're surveying the upstream\n"
	.string "reach. Stakes, every fifty paces.\l"
	.string "That's the clean bit. Why stake the\l"
	.string "clean bit?$"

ParcelRiver_Botolv_R2_Text_0:
# 588 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiver_Botolv_R2_Text_1:
# 590 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: No hurry. The water keeps.$"

ParcelRiver_Botolv_R2_Text_2:
# 594 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: That's the one I wanted to see.$"

ParcelRiver_Botolv_R2_Text_3:
# 595 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Botolv_R3_Text_0:
# 602 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelRiver_Botolv_R3_Text_1:
# 608 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: …Fair.$"

ParcelRiver_Botolv_R3_Text_2:
# 609 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Botolv_R4_Text_0:
# 616 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Botolv_R4_Text_1:
# 622 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Right. That's the whole of it.$"

ParcelRiver_Botolv_R4_Text_2:
# 623 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Botolv_R5_Text_0:
# 630 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Botolv_R5_Text_1:
# 637 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Gudrun_Text_0:
# 643 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: ILLUMISE light up over the\n"
	.string "ponds at dusk. Fewer every summer. My\l"
	.string "mum says I imagine it. Battle me and tell\l"
	.string "me I don't.$"

ParcelRiver_Gudrun_Text_1:
# 644 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You don't think I imagine it.\n"
	.string "Good.$"

ParcelRiver_Gudrun_Text_2:
# 659 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Twelve last summer. Seven this\n"
	.string "one. I count. Somebody has to.$"

ParcelRiver_Gudrun_R2_Text_0:
# 670 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiver_Gudrun_R2_Text_1:
# 672 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Gudrun_R2_Text_2:
# 676 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: …Again, then. Later.$"

ParcelRiver_Gudrun_R2_Text_3:
# 677 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Gudrun_R3_Text_0:
# 684 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Gudrun_R3_Text_1:
# 690 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: …Fair.$"

ParcelRiver_Gudrun_R3_Text_2:
# 691 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Gudrun_R4_Text_0:
# 698 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_Gudrun_R4_Text_1:
# 704 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Right. That's the whole of it.$"

ParcelRiver_Gudrun_R4_Text_2:
# 705 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Gudrun_R5_Text_0:
# 712 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiver_Gudrun_R5_Text_1:
# 719 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Havard_Text_0:
# 725 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Pond's stocked by the Board.\n"
	.string "Twice a year. You catch one, you thank\l"
	.string "the Board. Battle?$"

ParcelRiver_Havard_Text_1:
# 726 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Don't thank me. Thank the\n"
	.string "Board.$"

ParcelRiver_Havard_Text_2:
# 741 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Stocked fish don't breed. You\n"
	.string "know that, right? They put them in, we\l"
	.string "take them out. That's not a river.\l"
	.string "That's a shop.$"

ParcelRiver_Havard_R2_Text_0:
# 752 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiver_Havard_R2_Text_1:
# 754 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Another time, then.$"

ParcelRiver_Havard_R2_Text_2:
# 758 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Still yours.$"

ParcelRiver_Havard_R2_Text_3:
# 759 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Havard_R3_Text_0:
# 766 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Havard_R3_Text_1:
# 772 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: That's the one I wanted to see.$"

ParcelRiver_Havard_R3_Text_2:
# 773 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Havard_R4_Text_0:
# 780 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Havard_R4_Text_1:
# 786 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: …Fair.$"

ParcelRiver_Havard_R4_Text_2:
# 787 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Havard_R5_Text_0:
# 794 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Havard_R5_Text_1:
# 801 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Idun_Text_0:
# 807 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Cadet IDUN. ILEX has me counting\n"
	.string "larvae under stones. Spar first. Then\l"
	.string "I'll show you my count.$"

ParcelRiver_Idun_Text_1:
# 808 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Eighteen species above the town.\n"
	.string "Four below. That's my count.$"

ParcelRiver_Idun_Text_2:
# 823 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: ILEX says don't call it dead until\n"
	.string "you've turned every stone. I turned\l"
	.string "every stone. It's not dead. Yet.$"

ParcelRiver_Idun_R2_Text_0:
# 834 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelRiver_Idun_R2_Text_1:
# 836 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Another time, then.$"

ParcelRiver_Idun_R2_Text_2:
# 840 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: …Fair.$"

ParcelRiver_Idun_R2_Text_3:
# 841 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Idun_R3_Text_0:
# 848 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Idun_R3_Text_1:
# 854 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: …Again, then. Later.$"

ParcelRiver_Idun_R3_Text_2:
# 855 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Idun_R4_Text_0:
# 862 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelRiver_Idun_R4_Text_1:
# 868 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Right. That's the whole of it.$"

ParcelRiver_Idun_R4_Text_2:
# 869 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Idun_R5_Text_0:
# 876 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Idun_R5_Text_1:
# 883 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Joar_Text_0:
# 889 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: The plots have the best bugs. The\n"
	.string "farmer lets me in if I don't tread the\l"
	.string "rows. You're treading the rows.$"

ParcelRiver_Joar_Text_1:
# 890 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Fine, tread them.$"

ParcelRiver_Joar_Text_2:
# 905 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: VOLBEAT in the plots, none in the\n"
	.string "fields below. The fields below get the\l"
	.string "sacks with the crest on.$"

ParcelRiver_Joar_R2_Text_0:
# 916 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Joar_R2_Text_1:
# 918 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Another time, then.$"

ParcelRiver_Joar_R2_Text_2:
# 922 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Noted. Properly, this time.$"

ParcelRiver_Joar_R2_Text_3:
# 923 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Joar_R3_Text_0:
# 930 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Joar_R3_Text_1:
# 936 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: That's the one I wanted to see.$"

ParcelRiver_Joar_R3_Text_2:
# 937 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Joar_R4_Text_0:
# 944 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Joar_R4_Text_1:
# 950 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Still yours.$"

ParcelRiver_Joar_R4_Text_2:
# 951 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Joar_R5_Text_0:
# 958 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Joar_R5_Text_1:
# 965 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Kari_Text_0:
# 971 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The puddles by the depot are the\n"
	.string "only wet ground the Board hasn't\l"
	.string "metered. Yet. Battle!$"

ParcelRiver_Kari_Text_1:
# 972 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Metered that, didn't you.$"

ParcelRiver_Kari_Text_2:
# 987 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The depot pays by weight. Nobody\n"
	.string "asks what's in the sacks they sell you\l"
	.string "for the weight.$"

ParcelRiver_Kari_R2_Text_0:
# 998 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelRiver_Kari_R2_Text_1:
# 1000 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Fine. Same spot.$"

ParcelRiver_Kari_R2_Text_2:
# 1004 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: That's the one I wanted to see.$"

ParcelRiver_Kari_R2_Text_3:
# 1005 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Kari_R3_Text_0:
# 1012 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Kari_R3_Text_1:
# 1018 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Right. That's the whole of it.$"

ParcelRiver_Kari_R3_Text_2:
# 1019 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Kari_R4_Text_0:
# 1026 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Kari_R4_Text_1:
# 1033 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Kari_R5_Text_0:
# 1040 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_Kari_R5_Text_1:
# 1046 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: …Fair.$"

ParcelRiver_Kari_R5_Text_2:
# 1047 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Lars_Text_0:
# 1053 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The rocks by the pond are the\n"
	.string "only rocks for a mile. I'm a HIKER. I take\l"
	.string "what I can get. Battle.$"

ParcelRiver_Lars_Text_1:
# 1054 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Take that, then.$"

ParcelRiver_Lars_Text_2:
# 1069 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The mountain's north, past the\n"
	.string "clean water. It's got proper rock. And a\l"
	.string "MEREHOLT office at the top of the pass,\l"
	.string "I hear.$"

ParcelRiver_Lars_R2_Text_0:
# 1080 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_Lars_R2_Text_1:
# 1082 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Suit yourself. I'm here.$"

ParcelRiver_Lars_R2_Text_2:
# 1086 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Still yours.$"

ParcelRiver_Lars_R2_Text_3:
# 1087 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Lars_R3_Text_0:
# 1094 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRiver_Lars_R3_Text_1:
# 1100 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: …Fair.$"

ParcelRiver_Lars_R3_Text_2:
# 1101 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Lars_R4_Text_0:
# 1108 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Lars_R4_Text_1:
# 1115 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Lars_R5_Text_0:
# 1122 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_Lars_R5_Text_1:
# 1128 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's the one I wanted to see.$"

ParcelRiver_Lars_R5_Text_2:
# 1129 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Marit_Text_0:
# 1135 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: I live on the farm. The field\n"
	.string "drain runs under my window. I know what\l"
	.string "the river smells like at night. Battle?$"

ParcelRiver_Marit_Text_1:
# 1136 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Smells better than losing.$"

ParcelRiver_Marit_Text_2:
# 1151 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Dad would dig the buffer strip\n"
	.string "tomorrow. Two rows. Nobody's paying for\l"
	.string "two rows.$"

ParcelRiver_Marit_R2_Text_0:
# 1162 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiver_Marit_R2_Text_1:
# 1164 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Marit_R2_Text_2:
# 1168 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's the one I wanted to see.$"

ParcelRiver_Marit_R2_Text_3:
# 1169 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Marit_R3_Text_0:
# 1176 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Marit_R3_Text_1:
# 1182 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Noted. Properly, this time.$"

ParcelRiver_Marit_R3_Text_2:
# 1183 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Marit_R4_Text_0:
# 1190 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Marit_R4_Text_1:
# 1196 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Still yours.$"

ParcelRiver_Marit_R4_Text_2:
# 1197 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Marit_R5_Text_0:
# 1204 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Marit_R5_Text_1:
# 1210 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: …Again, then. Later.$"

ParcelRiver_Marit_R5_Text_2:
# 1211 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_Njal_Text_0:
# 1217 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: ELECTRIKE from the power line\n"
	.string "cut, north of here. Fastest thing in the\l"
	.string "valley. Battle!$"

ParcelRiver_Njal_Text_1:
# 1218 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Fast, not strong. Noted.$"

ParcelRiver_Njal_Text_2:
# 1233 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: They strung the line to the Board\n"
	.string "office last year. For the meters. The\l"
	.string "meters need power. The farms didn't.$"

ParcelRiver_Njal_R2_Text_0:
# 1244 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_Njal_R2_Text_1:
# 1246 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Another time, then.$"

ParcelRiver_Njal_R2_Text_2:
# 1250 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Noted. Properly, this time.$"

ParcelRiver_Njal_R2_Text_3:
# 1251 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Njal_R3_Text_0:
# 1258 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Njal_R3_Text_1:
# 1264 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Still yours.$"

ParcelRiver_Njal_R3_Text_2:
# 1265 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Njal_R4_Text_0:
# 1272 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRiver_Njal_R4_Text_1:
# 1278 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: …Again, then. Later.$"

ParcelRiver_Njal_R4_Text_2:
# 1279 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Njal_R5_Text_0:
# 1286 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Njal_R5_Text_1:
# 1292 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: …Fair.$"

ParcelRiver_Njal_R5_Text_2:
# 1293 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Ottar_Text_0:
# 1299 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: One SEAKING. Took me all spring.\n"
	.string "I'm not sharing the bank. Battle.$"

ParcelRiver_Ottar_Text_1:
# 1300 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Share, then.$"

ParcelRiver_Ottar_Text_2:
# 1315 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: DELL says the river used to give\n"
	.string "SEAKING by the armful. I believe him.\l"
	.string "I've seen the photographs.$"

ParcelRiver_Ottar_R2_Text_0:
# 1326 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Ottar_R2_Text_1:
# 1328 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Ottar_R2_Text_2:
# 1332 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: …Fair.$"

ParcelRiver_Ottar_R2_Text_3:
# 1333 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Ottar_R3_Text_0:
# 1340 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Ottar_R3_Text_1:
# 1346 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: That's the one I wanted to see.$"

ParcelRiver_Ottar_R3_Text_2:
# 1347 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Ottar_R4_Text_0:
# 1354 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Ottar_R4_Text_1:
# 1360 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Still yours.$"

ParcelRiver_Ottar_R4_Text_2:
# 1361 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Ottar_R5_Text_0:
# 1368 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiver_Ottar_R5_Text_1:
# 1374 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: …Again, then. Later.$"

ParcelRiver_Ottar_R5_Text_2:
# 1375 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Paal_Text_0:
# 1381 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: The bank's a highway. Board\n"
	.string "boats, Corps cadets, now you. Battle,\l"
	.string "and then walk somewhere else.$"

ParcelRiver_Paal_Text_1:
# 1382 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Walk wherever you like.$"

ParcelRiver_Paal_Text_2:
# 1397 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: There's a man on a boat down by\n"
	.string "the plots who talks to nobody. HARLAND.\l"
	.string "He talked to a RANGER once. It didn't go\l"
	.string "well, I hear.$"

ParcelRiver_Paal_R2_Text_0:
# 1408 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Paal_R2_Text_1:
# 1410 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Another time, then.$"

ParcelRiver_Paal_R2_Text_2:
# 1414 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: That's the one I wanted to see.$"

ParcelRiver_Paal_R2_Text_3:
# 1415 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Paal_R3_Text_0:
# 1422 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Paal_R3_Text_1:
# 1428 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: …Again, then. Later.$"

ParcelRiver_Paal_R3_Text_2:
# 1429 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Paal_R4_Text_0:
# 1436 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Paal_R4_Text_1:
# 1443 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Paal_R5_Text_0:
# 1450 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Paal_R5_Text_1:
# 1457 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Ragna_Text_0:
# 1463 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The river's thoughts are loud\n"
	.string "here. Fast. Angry. Below the cut it\l"
	.string "stops thinking at all. Battle me.$"

ParcelRiver_Ragna_Text_1:
# 1464 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Your thoughts are loud too.$"

ParcelRiver_Ragna_Text_2:
# 1479 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The councilman's thoughts are\n"
	.string "the loudest in the valley. He believes\l"
	.string "every word. That's the strange part.$"

ParcelRiver_Ragna_R2_Text_0:
# 1490 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiver_Ragna_R2_Text_1:
# 1492 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Suit yourself. I'm here.$"

ParcelRiver_Ragna_R2_Text_2:
# 1496 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: …Again, then. Later.$"

ParcelRiver_Ragna_R2_Text_3:
# 1497 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Ragna_R3_Text_0:
# 1504 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Ragna_R3_Text_1:
# 1510 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: …Fair.$"

ParcelRiver_Ragna_R3_Text_2:
# 1511 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Ragna_R4_Text_0:
# 1518 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Ragna_R4_Text_1:
# 1524 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Noted. Properly, this time.$"

ParcelRiver_Ragna_R4_Text_2:
# 1525 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Ragna_R5_Text_0:
# 1532 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Ragna_R5_Text_1:
# 1539 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_Sigurd_Text_0:
# 1545 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Cadet SIGURD, on the depot\n"
	.string "watch. HALE wants to know what goes in\l"
	.string "and what comes out. Spar.$"

ParcelRiver_Sigurd_Text_1:
# 1546 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Good. The sacks go in. The\n"
	.string "money comes out. That's my report.$"

ParcelRiver_Sigurd_Text_2:
# 1561 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: The depot buys at the\n"
	.string "FOUNDATION's number and sells the\l"
	.string "sacks at the FOUNDATION's number. Both\l"
	.string "numbers are the same man's.$"

ParcelRiver_Sigurd_R2_Text_0:
# 1572 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiver_Sigurd_R2_Text_1:
# 1574 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Sigurd_R2_Text_2:
# 1578 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Noted. Properly, this time.$"

ParcelRiver_Sigurd_R2_Text_3:
# 1579 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Sigurd_R3_Text_0:
# 1586 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelRiver_Sigurd_R3_Text_1:
# 1592 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Still yours.$"

ParcelRiver_Sigurd_R3_Text_2:
# 1593 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Sigurd_R4_Text_0:
# 1600 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_Sigurd_R4_Text_1:
# 1606 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: …Again, then. Later.$"

ParcelRiver_Sigurd_R4_Text_2:
# 1607 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelRiver_Sigurd_R5_Text_0:
# 1614 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Sigurd_R5_Text_1:
# 1620 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: …Fair.$"

ParcelRiver_Sigurd_R5_Text_2:
# 1621 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_SignTown_Text_0:
# 1633 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND\p"
	.string "Market Thursdays. Boats moor at the\n"
	.string "east bank. The Water Board office is\l"
	.string "open to ratepayers.$"

ParcelRiver_SignBoard_Text_0:
# 1637 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND WATER BOARD -- NOTICE\p"
	.string "Channel Improvement, Phase 2: works\n"
	.string "commence upstream of the town after\l"
	.string "the harvest. Consultation closed.\l"
	.string "Objections to the Board office. The\l"
	.string "office is closed for objections.$"

ParcelRiver_SignMarket_Text_0:
# 1641 "data/maps/ParcelRiver/scripts.pory"
	.string "MARKET DAY\p"
	.string "Eggs. Greens. Honey. Trout (limited).\n"
	.string "Councilman DORSEY will take questions\l"
	.string "at noon.$"

ParcelRiver_T_Aud_Text_0:
# 1648 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: The high meadow's the last place\n"
	.string "the flowers come up on their own. Battle\l"
	.string "me among them.$"

ParcelRiver_T_Aud_Text_1:
# 1649 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Among them, beaten.$"

ParcelRiver_T_Aud_Text_2:
# 1664 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Below the town they spray. Above\n"
	.string "the town they don't. You can draw the\l"
	.string "line with your nose.$"

ParcelRiver_T_Aud_R2_Text_0:
# 1675 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_T_Aud_R2_Text_1:
# 1677 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Another time, then.$"

ParcelRiver_T_Aud_R2_Text_2:
# 1681 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: …Fair.$"

ParcelRiver_T_Aud_R2_Text_3:
# 1682 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_T_Aud_R3_Text_0:
# 1689 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelRiver_T_Aud_R3_Text_1:
# 1695 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Right. That's the whole of it.$"

ParcelRiver_T_Aud_R3_Text_2:
# 1696 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_T_Aud_R4_Text_0:
# 1703 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRiver_T_Aud_R4_Text_1:
# 1709 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: That's the one I wanted to see.$"

ParcelRiver_T_Aud_R4_Text_2:
# 1710 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_T_Aud_R5_Text_0:
# 1717 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_T_Aud_R5_Text_1:
# 1723 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: …Again, then. Later.$"

ParcelRiver_T_Aud_R5_Text_2:
# 1724 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_T_Espen_Text_0:
# 1730 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: ELECTRIKE from the power line\n"
	.string "cut. Fastest thing on the farm. Battle!$"

ParcelRiver_T_Espen_Text_1:
# 1731 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Fast. Not fast enough.$"

ParcelRiver_T_Espen_Text_2:
# 1746 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: The line goes to the Board\n"
	.string "office for the meters. The farm got\l"
	.string "nothing off it. Dad says we got the\l"
	.string "view.$"

ParcelRiver_T_Espen_R2_Text_0:
# 1757 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_T_Espen_R2_Text_1:
# 1759 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Another time, then.$"

ParcelRiver_T_Espen_R2_Text_2:
# 1763 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Noted. Properly, this time.$"

ParcelRiver_T_Espen_R2_Text_3:
# 1764 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_T_Espen_R3_Text_0:
# 1771 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_T_Espen_R3_Text_1:
# 1777 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Right. That's the whole of it.$"

ParcelRiver_T_Espen_R3_Text_2:
# 1778 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_T_Espen_R4_Text_0:
# 1785 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_T_Espen_R4_Text_1:
# 1791 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Still yours.$"

ParcelRiver_T_Espen_R4_Text_2:
# 1792 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_T_Espen_R5_Text_0:
# 1799 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_T_Espen_R5_Text_1:
# 1806 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_T_Trygve_Text_0:
# 1812 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: One WHISCASH, out of the clean\n"
	.string "reach. Took three seasons. Battle it.$"

ParcelRiver_T_Trygve_Text_1:
# 1813 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three seasons, and that.$"

ParcelRiver_T_Trygve_Text_2:
# 1828 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They want to put the straight\n"
	.string "channel through the clean reach. Phase\l"
	.string "2. Where do they think the WHISCASH will\l"
	.string "go?$"

ParcelRiver_T_Trygve_R2_Text_0:
# 1839 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_T_Trygve_R2_Text_1:
# 1841 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Suit yourself. I'm here.$"

ParcelRiver_T_Trygve_R2_Text_2:
# 1845 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Noted. Properly, this time.$"

ParcelRiver_T_Trygve_R2_Text_3:
# 1846 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_T_Trygve_R3_Text_0:
# 1853 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelRiver_T_Trygve_R3_Text_1:
# 1859 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: …Fair.$"

ParcelRiver_T_Trygve_R3_Text_2:
# 1860 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_T_Trygve_R4_Text_0:
# 1867 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_T_Trygve_R4_Text_1:
# 1874 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_T_Trygve_R5_Text_0:
# 1881 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_T_Trygve_R5_Text_1:
# 1887 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Right. That's the whole of it.$"

ParcelRiver_T_Trygve_R5_Text_2:
# 1888 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_BeaverStump_Text_0:
# 1897 "data/maps/ParcelRiver/scripts.pory"
	.string "A sapling stump on the bank, gnawed to\n"
	.string "a point. The chips at its foot are pale.\l"
	.string "Fresh.\p"
	.string "Something is building above the town\n"
	.string "again. Written down, and the old man's\l"
	.string "name beside it.$"

ParcelRiver_BeaverStump_Text_1:
# 1902 "data/maps/ParcelRiver/scripts.pory"
	.string "A sapling stump on the bank, gnawed to\n"
	.string "a point.$"

ParcelRiver_PerrinScene_Text_0:
# 1915 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelRiver_PerrinScene_Text_1:
# 1919 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: DORSEY introduced me at the\n"
	.string "market! 'Our newest liaison.' LIAISON,\l"
	.string "WREN.\p"
	.string "Phase 2's going ahead, you know. Flood\n"
	.string "control. You can't argue with dry sheds.\l"
	.string "Battle!$"

ParcelRiver_PerrinScene_Text_2:
# 1920 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: Okay. You CAN argue with it.$"

ParcelRiver_PerrinScene_Text_3:
# 1921 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: I took the desk. Part time's\n"
	.string "full time now. It's good work. It IS.\p"
	.string "HOLLIS asked about you. She asks about\n"
	.string "everyone. It's her best trick.$"

ParcelRiver_PerrinTalk_Text_0:
# 1934 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelRiver_Epilogue_Text_0:
# 1945 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND. Market day. The WATER BOARD\n"
	.string "notice on the pole has six names under\l"
	.string "it, and the sentence they argued about\l"
	.string "for two hours is in.\p"
	.string "Read the whole river before you judge\n"
	.string "any part of it. SLUICE keeps the gate.\l"
	.string "The crossing is still the crossing.$"

ParcelRiver_Epilogue_Text_1:
# 1946 "data/maps/ParcelRiver/scripts.pory"
	.string "The gauge at the ford carries two\n"
	.string "boards now, one above the other. The\l"
	.string "old mark and the new. Children read them\l"
	.string "aloud to each other and argue about\l"
	.string "which is real.\p"
	.string "DELL is at the ford with no rod.\n"
	.string "Watching. He says he saw a red flank go\l"
	.string "up at first light. He says it every\l"
	.string "morning, and one morning it will be true.$"

ParcelRiver_Hives_Text_0:
# 1965 "data/maps/ParcelRiver/scripts.pory"
	.string "Six hives on the bank, humming. The\n"
	.string "beekeeper is asleep against the end\l"
	.string "one with a smoker in his lap, perfectly\l"
	.string "well.\p"
	.string "The flowers are out all along the bank.$"

ParcelRiver_SurveyStake_Text_0:
# 1972 "data/maps/ParcelRiver/scripts.pory"
	.string "A survey stake at the edge of the\n"
	.string "market ground, red cloth at the top, a\l"
	.string "child's blue ribbon tied under it by\l"
	.string "somebody who thought it needed\l"
	.string "company.$"

ParcelRiver_SurveyStake_Text_1:
# 1977 "data/maps/ParcelRiver/scripts.pory"
	.string "Second reading. Two boards on the\n"
	.string "gauge, old mark and new. The reach\l"
	.string "above the town still runs slack; the\l"
	.string "straightened mile was not cut.\p"
	.string "A SEAKING went up at first light, DELL\n"
	.string "says. DELL says it every morning. You\l"
	.string "write REPORTED, and the date, which is\l"
	.string "what the Survey does with hope.$"

ParcelRiver_PairMeter_Text_0:
# 1988 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: The Board's publishing both\n"
	.string "readings now. Old datum and new. Two\l"
	.string "columns.$"

ParcelRiver_PairMeter_Text_1:
# 1989 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Two columns and one river. The\n"
	.string "wet column and the honest one.$"

ParcelRiver_PairMeter_Text_2:
# 1990 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: The honest one says my\n"
	.string "allocation is a quarter of what it was.\l"
	.string "On paper. It was always a quarter in the\l"
	.string "field.$"

ParcelRiver_PairMeter_Text_3:
# 1991 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Paper's catching up with the\n"
	.string "field. Give it another forty years.$"

ParcelRiver_PairMeter_Text_4:
# 1993 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Forty-one of us signed. The\n"
	.string "reply was one paragraph. I've framed\l"
	.string "the paragraph.$"

ParcelRiver_PairMeter_Text_5:
# 1994 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: The ranger read it. Twice. Then\n"
	.string "asked SLUICE which year the datum was\l"
	.string "set.$"

ParcelRiver_PairMeter_Text_6:
# 1995 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: And?$"

ParcelRiver_PairMeter_Text_7:
# 1996 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: And SLUICE answered. In public.\n"
	.string "First Board officer to answer anything\l"
	.string "in public since the gauge went in.$"

ParcelRiver_PairMeter_Text_8:
# 1998 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: Fourteen plots metered. The\n"
	.string "meter runs when the water runs. The\l"
	.string "water runs when the Board says.$"

ParcelRiver_PairMeter_Text_9:
# 1999 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: My wheel turned for free for\n"
	.string "sixty years and now it's a 'draw'. A draw.\l"
	.string "Like a lottery.$"

ParcelRiver_PairMeter_Text_10:
# 2000 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: You're ahead of me. They've\n"
	.string "called mine an 'allocation'.$"

ParcelRiver_PairMeter_Text_11:
# 2001 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Longer word. More expensive.$"

ParcelRiver_PairFord_Text_0:
# 2010 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: OTTAR let the SEAKING go. The\n"
	.string "last one. Off the ford, at first light,\l"
	.string "nobody watching but me.$"

ParcelRiver_PairFord_Text_1:
# 2011 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: Why would he do that?$"

ParcelRiver_PairFord_Text_2:
# 2012 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The ranger's count is in the\n"
	.string "record. One fish. He said one fish in a\l"
	.string "record is a prisoner. One fish in a river\l"
	.string "is a chance.$"

ParcelRiver_PairFord_Text_3:
# 2013 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: Is it?$"

ParcelRiver_PairFord_Text_4:
# 2014 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Ask me in forty years. Write down\n"
	.string "that I said that.$"

ParcelRiver_PairFord_Text_5:
# 2016 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: The ranger stood in the\n"
	.string "shallows for an hour. Just counting.$"

ParcelRiver_PairFord_Text_6:
# 2017 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Counting what? There's nothing\n"
	.string "to count.$"

ParcelRiver_PairFord_Text_7:
# 2018 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: That's what they were\n"
	.string "counting. They wrote down nothing, with\l"
	.string "the date. Said nothing with a date is a\l"
	.string "number.$"

ParcelRiver_PairFord_Text_8:
# 2019 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: …Your great-grandfather would\n"
	.string "have liked that. He never wrote\l"
	.string "anything down and it's all gone with him.$"

ParcelRiver_PairFord_Text_9:
# 2021 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: You said the SEAKING\n"
	.string "came up to the ford. In red.$"

ParcelRiver_PairFord_Text_10:
# 2022 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Every spring. You could walk\n"
	.string "across on them, my father said. He said\l"
	.string "a lot of things.$"

ParcelRiver_PairFord_Text_11:
# 2023 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: Was that one true?$"

ParcelRiver_PairFord_Text_12:
# 2024 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The ford part. The walking part\n"
	.string "was my father.$"

ParcelRiver_Stringer_Text_0:
# 2036 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The Board publishes two columns\n"
	.string "now. Old datum, new datum. I ran them\l"
	.string "side by side without a word of comment.\p"
	.string "Best thing I never wrote. The miller\n"
	.string "framed it next to the Board's\l"
	.string "one-paragraph reply. He's got a wall\l"
	.string "going.$"

ParcelRiver_Stringer_Text_1:
# 2039 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The meeting ran as half a page.\n"
	.string "Including the ranger who stood up at\l"
	.string "the back and said refuse the\l"
	.string "straightened mile.\p"
	.string "I quoted you from memory. It was close.\n"
	.string "If it wasn't, you should have given me\l"
	.string "the sentence at Reedmere.$"

ParcelRiver_Stringer_Text_2:
# 2041 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The meeting ran as half a page.\n"
	.string "The ranger stood at the back and wrote.\l"
	.string "I put that in.\p"
	.string "Standing at the back writing is a\n"
	.string "position too. ILEX has held it for\l"
	.string "thirty years. Look where it's got the\l"
	.string "Board.$"

ParcelRiver_Stringer_Text_3:
# 2044 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The water meeting's tonight.\n"
	.string "Forty-one ratepayers and a Board that\l"
	.string "won't name a year.\p"
	.string "I asked SLUICE which year. SLUICE said\n"
	.string "ask the Board. I asked the Board. The\l"
	.string "Board doesn't comment on individual\l"
	.string "readings. I've written that sentence so\l"
	.string "often I could set it in type myself.$"

ParcelRiver_FordBoy_Text_0:
# 2056 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: I'm keeping my own book now. One\n"
	.string "line a week. DAD says that's how it\l"
	.string "starts.$"

ParcelRiver_FordBoy_Text_1:
# 2059 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Eleven years NORMAL and then they\n"
	.string "moved the mark. So the floods didn't\l"
	.string "stop. The book stopped.\p"
	.string "DAD'll want to know he was right. He\n"
	.string "won't like it. Here, for telling me\l"
	.string "straight.$"

ParcelRiver_FordBoy_Text_2:
# 2063 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: The gauge book. In the Board\n"
	.string "office, on the counter. The kept one.$"

ParcelRiver_FordBoy_Text_3:
# 2066 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: The Board's book has the real river\n"
	.string "in it. DAD says. He says there's two\l"
	.string "books, the one they show and the one\l"
	.string "they keep.\p"
	.string "You can go in the office. Read the kept\n"
	.string "one and tell me which year the floods\l"
	.string "stopped.$"

ParcelRiver_FindDepth_Text_0:
# 2077 "data/maps/ParcelRiver/scripts.pory"
	.string "The pier at the pool. The Board's depth\n"
	.string "mark in white, a date beside it. Under\l"
	.string "the white, where it has flaked, a line of\l"
	.string "old red lead two hands higher, and no\l"
	.string "date, because a man who paints his own\l"
	.string "mark does not think to date it.\p"
	.string "The water is below both marks. By a\n"
	.string "hand. By two.$"

ParcelRiver_FindDepth_Text_1:
# 2080 "data/maps/ParcelRiver/scripts.pory"
	.string "The pier at the pool. White over red, the\n"
	.string "river below both. Someone has scraped\l"
	.string "the white back a little so the red\l"
	.string "shows.$"
