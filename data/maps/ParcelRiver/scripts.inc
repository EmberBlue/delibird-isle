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
# 34 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_VISITED_PARCEL_RIVER
# 36 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_OnTransition_2
# 39 "data/maps/ParcelRiver/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelRiver_OnTransition_1:
	end

ParcelRiver_OnTransition_2:
# 37 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelRiver_OnTransition_1


ParcelRiver_FirstEntry::
# 46 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_RIVER_ARRIVAL, ParcelRiver_FirstEntry_2
# 50 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 51 "data/maps/ParcelRiver/scripts.pory"
	bufferpartymonnick 0, 0
# 52 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_1, MSGBOX_DEFAULT
# 54 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FirstEntry_Text_2, MSGBOX_DEFAULT
# 55 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_RIVER_ARRIVAL
# 56 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_FirstEntry_2:
	end


ParcelRiver_ChannelCut::
# 62 "data/maps/ParcelRiver/scripts.pory"
	lock
# 63 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 64 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 0
# 65 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 66 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_ChannelCut_2
# 71 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_1, MSGBOX_SIGN
# 72 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 73 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_ChannelCut_2:
# 67 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_ChannelCut_Text_0, MSGBOX_SIGN
# 68 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_DamRelic::
# 77 "data/maps/ParcelRiver/scripts.pory"
	lock
# 78 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 79 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 1
# 80 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 81 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_DamRelic_2
# 86 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_1, MSGBOX_SIGN
# 87 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 88 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_DamRelic_2:
# 82 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_DamRelic_Text_0, MSGBOX_SIGN
# 83 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_RunoffStain::
# 92 "data/maps/ParcelRiver/scripts.pory"
	lock
# 93 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 94 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 2
# 95 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 96 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_RunoffStain_2
# 101 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_1, MSGBOX_SIGN
# 102 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 103 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_RunoffStain_2:
# 97 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_RunoffStain_Text_0, MSGBOX_SIGN
# 98 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_CleanReach::
# 107 "data/maps/ParcelRiver/scripts.pory"
	lock
# 108 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 109 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 3
# 110 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 111 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_CleanReach_2
# 116 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_1, MSGBOX_SIGN
# 117 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 118 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_CleanReach_2:
# 112 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_CleanReach_Text_0, MSGBOX_SIGN
# 113 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_IrrigationBoard::
# 122 "data/maps/ParcelRiver/scripts.pory"
	lock
# 123 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 124 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 4
# 125 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 126 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_IrrigationBoard_2
# 131 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_1, MSGBOX_SIGN
# 132 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 133 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_IrrigationBoard_2:
# 127 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_IrrigationBoard_Text_0, MSGBOX_SIGN
# 128 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Harland::
# 139 "data/maps/ParcelRiver/scripts.pory"
	lock
# 140 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 141 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Harland_2
# 146 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Harland_5
# 174 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 175 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 5
# 176 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 177 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelRiver_Harland_8
# 182 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_12, MSGBOX_DEFAULT
# 183 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_13, MSGBOX_DEFAULT
# 184 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_14, MSGBOX_DEFAULT
# 185 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_15, MSGBOX_DEFAULT
# 186 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_16, MSGBOX_DEFAULT
# 187 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_17, MSGBOX_DEFAULT
# 188 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_18, MSGBOX_DEFAULT
# 189 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 190 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_2:
# 142 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_0, MSGBOX_DEFAULT
# 143 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_5:
# 147 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_RIV_NIGHT_DONE, ParcelRiver_Harland_11
# 170 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_10, MSGBOX_DEFAULT
# 171 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_8:
# 178 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_11, MSGBOX_DEFAULT
# 179 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_11:
# 148 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_1, MSGBOX_DEFAULT
# 149 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_2, MSGBOX_YESNO
# 150 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Harland_14
# 155 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 156 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_4, MSGBOX_DEFAULT
# 158 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_5, MSGBOX_DEFAULT
# 159 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_6, MSGBOX_DEFAULT
# 160 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_7, MSGBOX_DEFAULT
# 161 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_8, MSGBOX_DEFAULT
# 162 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 163 "data/maps/ParcelRiver/scripts.pory"
	delay 60
# 164 "data/maps/ParcelRiver/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_9, MSGBOX_DEFAULT
# 166 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_RIV_NIGHT_DONE
# 167 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Harland_14:
# 151 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Harland_Text_3, MSGBOX_DEFAULT
# 152 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Farmer::
# 196 "data/maps/ParcelRiver/scripts.pory"
	lock
# 197 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 198 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Farmer_2
# 203 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Farmer_5
# 208 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_2, MSGBOX_DEFAULT
# 209 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_3, MSGBOX_DEFAULT
# 210 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Farmer_2:
# 199 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_0, MSGBOX_DEFAULT
# 200 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Farmer_5:
# 204 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Farmer_Text_1, MSGBOX_DEFAULT
# 205 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ilex::
# 216 "data/maps/ParcelRiver/scripts.pory"
	lock
# 217 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 218 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Ilex_2
# 223 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Ilex_5
# 228 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 229 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 230 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 231 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelRiver_Ilex_8
# 250 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_9, MSGBOX_DEFAULT
# 251 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_2:
# 219 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_0, MSGBOX_DEFAULT
# 220 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_5:
# 224 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_1, MSGBOX_DEFAULT
# 225 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ilex_8:
# 232 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_2, MSGBOX_DEFAULT
# 233 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyRiver
# 234 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_3, MSGBOX_DEFAULT
# 235 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_4, MSGBOX_DEFAULT
# 236 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_5, MSGBOX_DEFAULT
# 237 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_6, MSGBOX_DEFAULT
# 238 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_7, MSGBOX_DEFAULT
# 239 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 6
# 240 "data/maps/ParcelRiver/scripts.pory"
	special SkaldmereCertTaskMark
# 241 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ilex_Text_8, MSGBOX_DEFAULT
# 242 "data/maps/ParcelRiver/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 243 "data/maps/ParcelRiver/scripts.pory"
	waitfanfare
# 244 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALDMERE_WATERSHED_CERT
# 245 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 246 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_REVIVE, 2
# 247 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Dorsey::
# 257 "data/maps/ParcelRiver/scripts.pory"
	lock
# 258 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 259 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Dorsey_2
# 264 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH3_EVIDENCE
# 265 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 63
# 266 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 267 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Dorsey_5
# 273 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_3, MSGBOX_DEFAULT
# 274 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_4, MSGBOX_DEFAULT
# 275 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Dorsey_2:
# 260 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_0, MSGBOX_DEFAULT
# 261 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Dorsey_5:
# 268 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_1, MSGBOX_DEFAULT
# 269 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Dorsey_Text_2, MSGBOX_DEFAULT
# 270 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Aide::
# 279 "data/maps/ParcelRiver/scripts.pory"
	lock
# 280 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 281 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Aide_2
# 286 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_Aide_5
# 291 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_2, MSGBOX_DEFAULT
# 292 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Aide_2:
# 282 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_0, MSGBOX_DEFAULT
# 283 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Aide_5:
# 287 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Aide_Text_1, MSGBOX_DEFAULT
# 288 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorEggs::
# 298 "data/maps/ParcelRiver/scripts.pory"
	lock
# 299 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 300 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HIVES_DONE, ParcelRiver_VendorEggs_2
# 305 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HIVES_FOUND, ParcelRiver_VendorEggs_5
# 312 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_HIVES, ParcelRiver_VendorEggs_8
# 317 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_RIVER_ARRIVAL, ParcelRiver_VendorEggs_11
# 323 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_VendorEggs_14
# 328 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_5, MSGBOX_DEFAULT
# 329 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_2:
# 301 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_0, MSGBOX_DEFAULT
# 302 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_5:
# 306 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_1, MSGBOX_DEFAULT
# 307 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_HONEY, 3
# 308 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_HIVES_DONE
# 309 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_8:
# 313 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_2, MSGBOX_DEFAULT
# 314 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_11:
# 318 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_3, MSGBOX_DEFAULT
# 319 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_HIVES
# 320 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorEggs_14:
# 324 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorEggs_Text_4, MSGBOX_DEFAULT
# 325 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_VendorFish::
# 333 "data/maps/ParcelRiver/scripts.pory"
	lock
# 334 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 335 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_VendorFish_2
# 340 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_VendorFish_5
# 345 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_2, MSGBOX_DEFAULT
# 346 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorFish_2:
# 336 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_0, MSGBOX_DEFAULT
# 337 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_VendorFish_5:
# 341 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_VendorFish_Text_1, MSGBOX_DEFAULT
# 342 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_OldMan::
# 350 "data/maps/ParcelRiver/scripts.pory"
	lock
# 351 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 352 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_OldMan_2
# 357 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_OldMan_5
# 362 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_2, MSGBOX_DEFAULT
# 363 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_OldMan_2:
# 353 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_0, MSGBOX_DEFAULT
# 354 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_OldMan_5:
# 358 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_OldMan_Text_1, MSGBOX_DEFAULT
# 359 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Girl::
# 367 "data/maps/ParcelRiver/scripts.pory"
	lock
# 368 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 369 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Girl_2
# 374 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_Girl_5
# 379 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_2, MSGBOX_DEFAULT
# 380 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Girl_2:
# 370 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_0, MSGBOX_DEFAULT
# 371 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Girl_5:
# 375 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Girl_Text_1, MSGBOX_DEFAULT
# 376 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Boy::
# 384 "data/maps/ParcelRiver/scripts.pory"
	lock
# 385 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 386 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Boy_2
# 391 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_Boy_5
# 396 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_2, MSGBOX_DEFAULT
# 397 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Boy_2:
# 387 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_0, MSGBOX_DEFAULT
# 388 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Boy_5:
# 392 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Boy_Text_1, MSGBOX_DEFAULT
# 393 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_PondFisher::
# 401 "data/maps/ParcelRiver/scripts.pory"
	lock
# 402 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 403 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEPTH, ParcelRiver_PondFisher_5
ParcelRiver_PondFisher_4:
# 413 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEPTH_DONE, ParcelRiver_PondFisher_3
# 419 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PondFisher_9
# 424 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelRiver_PondFisher_16
# 429 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_5, MSGBOX_DEFAULT
# 430 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_2:
# 404 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEPTH_FOUND, ParcelRiver_PondFisher_12
# 409 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_1, MSGBOX_DEFAULT
ParcelRiver_PondFisher_11:
# 411 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_3:
# 414 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_2, MSGBOX_DEFAULT
# 415 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DEPTH
# 416 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_5:
# 403 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEPTH_DONE, ParcelRiver_PondFisher_2
	goto ParcelRiver_PondFisher_4

ParcelRiver_PondFisher_9:
# 420 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_3, MSGBOX_DEFAULT
# 421 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PondFisher_12:
# 405 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_0, MSGBOX_DEFAULT
# 406 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_GREAT_BALL, 3
# 407 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DEPTH_DONE
	goto ParcelRiver_PondFisher_11

ParcelRiver_PondFisher_16:
# 425 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PondFisher_Text_4, MSGBOX_DEFAULT
# 426 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_AnglerTrainer::
# 436 "data/maps/ParcelRiver/scripts.pory"
	lock
# 437 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 438 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_DONE, ParcelRiver_AnglerTrainer_2
# 443 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL_LURE, ParcelRiver_AnglerTrainer_5
# 451 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_AnglerTrainer_8
# 456 "data/maps/ParcelRiver/scripts.pory"
	release
# 457 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ANGLER, ParcelRiver_AnglerTrainer_Text_4, ParcelRiver_AnglerTrainer_Text_5
# 460 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_6, MSGBOX_DEFAULT
# 461 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL
	end

ParcelRiver_AnglerTrainer_2:
# 439 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_0, MSGBOX_DEFAULT
# 440 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_5:
# 444 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_1, MSGBOX_DEFAULT
# 445 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_2, MSGBOX_DEFAULT
# 446 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 447 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_DONE
# 448 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_AnglerTrainer_8:
# 452 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_AnglerTrainer_Text_3, MSGBOX_DEFAULT
# 453 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lure::
# 465 "data/maps/ParcelRiver/scripts.pory"
	lock
# 466 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DELL, ParcelRiver_Lure_3
ParcelRiver_Lure_1:
# 472 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_1, MSGBOX_SIGN
# 473 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_2:
# 467 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lure_Text_0, MSGBOX_SIGN
# 468 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DELL_LURE
# 469 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lure_3:
# 466 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DELL_LURE, ParcelRiver_Lure_2
	goto ParcelRiver_Lure_1


ParcelRiver_Arna::
# 479 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ARNA, ParcelRiver_Arna_Text_0, ParcelRiver_Arna_Text_1, ParcelRiver_Arna_FirstWin
# 483 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 484 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Arna_3
ParcelRiver_Arna_1:
# 487 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Arna_8
ParcelRiver_Arna_6:
# 490 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Arna_13
ParcelRiver_Arna_11:
# 493 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Arna_18
ParcelRiver_Arna_16:
# 496 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Arna_2:
# 485 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R2
	goto ParcelRiver_Arna_1

ParcelRiver_Arna_3:
# 484 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R2
	goto_if 0, ParcelRiver_Arna_2
	goto ParcelRiver_Arna_1

ParcelRiver_Arna_7:
# 488 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R3
	goto ParcelRiver_Arna_6

ParcelRiver_Arna_8:
# 487 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R3
	goto_if 0, ParcelRiver_Arna_7
	goto ParcelRiver_Arna_6

ParcelRiver_Arna_12:
# 491 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R4
	goto ParcelRiver_Arna_11

ParcelRiver_Arna_13:
# 490 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R4
	goto_if 0, ParcelRiver_Arna_12
	goto ParcelRiver_Arna_11

ParcelRiver_Arna_17:
# 494 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Arna_R5
	goto ParcelRiver_Arna_16

ParcelRiver_Arna_18:
# 493 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ARNA_R5
	goto_if 0, ParcelRiver_Arna_17
	goto ParcelRiver_Arna_16


ParcelRiver_Arna_FirstWin::
# 500 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_Text_2, MSGBOX_DEFAULT
# 501 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R2::
# 505 "data/maps/ParcelRiver/scripts.pory"
	lock
# 506 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 507 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_0, MSGBOX_YESNO
# 508 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R2_2
# 513 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R2, ParcelRiver_Arna_R2_Text_2
# 514 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_3, MSGBOX_DEFAULT
# 515 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R2_2:
# 509 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 510 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R3::
# 519 "data/maps/ParcelRiver/scripts.pory"
	lock
# 520 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 521 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R3_Text_0, MSGBOX_YESNO
# 522 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R3_2
# 527 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R3, ParcelRiver_Arna_R3_Text_1
# 528 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R3_Text_2, MSGBOX_DEFAULT
# 529 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R3_2:
# 523 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 524 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R4::
# 533 "data/maps/ParcelRiver/scripts.pory"
	lock
# 534 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 535 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R4_Text_0, MSGBOX_YESNO
# 536 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R4_2
# 541 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R4, ParcelRiver_Arna_R4_Text_1
# 542 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R4_Text_2, MSGBOX_DEFAULT
# 543 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R4_2:
# 537 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 538 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Arna_R5::
# 547 "data/maps/ParcelRiver/scripts.pory"
	lock
# 548 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 549 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R5_Text_0, MSGBOX_YESNO
# 550 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Arna_R5_2
# 555 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ARNA_R5, ParcelRiver_Arna_R5_Text_1
# 556 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R5_Text_2, MSGBOX_DEFAULT
# 557 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Arna_R5_2:
# 551 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Arna_R2_Text_1, MSGBOX_DEFAULT
# 552 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv::
# 561 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_BOTOLV, ParcelRiver_Botolv_Text_0, ParcelRiver_Botolv_Text_1, ParcelRiver_Botolv_FirstWin
# 565 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 566 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Botolv_3
ParcelRiver_Botolv_1:
# 569 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Botolv_8
ParcelRiver_Botolv_6:
# 572 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Botolv_13
ParcelRiver_Botolv_11:
# 575 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Botolv_18
ParcelRiver_Botolv_16:
# 578 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Botolv_2:
# 567 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R2
	goto ParcelRiver_Botolv_1

ParcelRiver_Botolv_3:
# 566 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R2
	goto_if 0, ParcelRiver_Botolv_2
	goto ParcelRiver_Botolv_1

ParcelRiver_Botolv_7:
# 570 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R3
	goto ParcelRiver_Botolv_6

ParcelRiver_Botolv_8:
# 569 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R3
	goto_if 0, ParcelRiver_Botolv_7
	goto ParcelRiver_Botolv_6

ParcelRiver_Botolv_12:
# 573 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R4
	goto ParcelRiver_Botolv_11

ParcelRiver_Botolv_13:
# 572 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R4
	goto_if 0, ParcelRiver_Botolv_12
	goto ParcelRiver_Botolv_11

ParcelRiver_Botolv_17:
# 576 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Botolv_R5
	goto ParcelRiver_Botolv_16

ParcelRiver_Botolv_18:
# 575 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_BOTOLV_R5
	goto_if 0, ParcelRiver_Botolv_17
	goto ParcelRiver_Botolv_16


ParcelRiver_Botolv_FirstWin::
# 582 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_Text_2, MSGBOX_DEFAULT
# 583 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R2::
# 587 "data/maps/ParcelRiver/scripts.pory"
	lock
# 588 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 589 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_0, MSGBOX_YESNO
# 590 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R2_2
# 595 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R2, ParcelRiver_Botolv_R2_Text_2
# 596 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_3, MSGBOX_DEFAULT
# 597 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R2_2:
# 591 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 592 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R3::
# 601 "data/maps/ParcelRiver/scripts.pory"
	lock
# 602 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 603 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R3_Text_0, MSGBOX_YESNO
# 604 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R3_2
# 609 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R3, ParcelRiver_Botolv_R3_Text_1
# 610 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R3_Text_2, MSGBOX_DEFAULT
# 611 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R3_2:
# 605 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 606 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R4::
# 615 "data/maps/ParcelRiver/scripts.pory"
	lock
# 616 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 617 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R4_Text_0, MSGBOX_YESNO
# 618 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R4_2
# 623 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R4, ParcelRiver_Botolv_R4_Text_1
# 624 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R4_Text_2, MSGBOX_DEFAULT
# 625 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R4_2:
# 619 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 620 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Botolv_R5::
# 629 "data/maps/ParcelRiver/scripts.pory"
	lock
# 630 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 631 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R5_Text_0, MSGBOX_YESNO
# 632 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Botolv_R5_2
# 637 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_BOTOLV_R5, ParcelRiver_Botolv_R4_Text_1
# 638 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R5_Text_1, MSGBOX_DEFAULT
# 639 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Botolv_R5_2:
# 633 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Botolv_R2_Text_1, MSGBOX_DEFAULT
# 634 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun::
# 643 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_GUDRUN, ParcelRiver_Gudrun_Text_0, ParcelRiver_Gudrun_Text_1, ParcelRiver_Gudrun_FirstWin
# 647 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 648 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Gudrun_3
ParcelRiver_Gudrun_1:
# 651 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Gudrun_8
ParcelRiver_Gudrun_6:
# 654 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Gudrun_13
ParcelRiver_Gudrun_11:
# 657 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Gudrun_18
ParcelRiver_Gudrun_16:
# 660 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Gudrun_2:
# 649 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R2
	goto ParcelRiver_Gudrun_1

ParcelRiver_Gudrun_3:
# 648 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R2
	goto_if 0, ParcelRiver_Gudrun_2
	goto ParcelRiver_Gudrun_1

ParcelRiver_Gudrun_7:
# 652 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R3
	goto ParcelRiver_Gudrun_6

ParcelRiver_Gudrun_8:
# 651 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R3
	goto_if 0, ParcelRiver_Gudrun_7
	goto ParcelRiver_Gudrun_6

ParcelRiver_Gudrun_12:
# 655 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R4
	goto ParcelRiver_Gudrun_11

ParcelRiver_Gudrun_13:
# 654 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R4
	goto_if 0, ParcelRiver_Gudrun_12
	goto ParcelRiver_Gudrun_11

ParcelRiver_Gudrun_17:
# 658 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Gudrun_R5
	goto ParcelRiver_Gudrun_16

ParcelRiver_Gudrun_18:
# 657 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_GUDRUN_R5
	goto_if 0, ParcelRiver_Gudrun_17
	goto ParcelRiver_Gudrun_16


ParcelRiver_Gudrun_FirstWin::
# 664 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_Text_2, MSGBOX_DEFAULT
# 665 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R2::
# 669 "data/maps/ParcelRiver/scripts.pory"
	lock
# 670 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 671 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_0, MSGBOX_YESNO
# 672 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R2_2
# 677 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R2, ParcelRiver_Gudrun_R2_Text_2
# 678 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_3, MSGBOX_DEFAULT
# 679 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R2_2:
# 673 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 674 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R3::
# 683 "data/maps/ParcelRiver/scripts.pory"
	lock
# 684 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 685 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R3_Text_0, MSGBOX_YESNO
# 686 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R3_2
# 691 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R3, ParcelRiver_Gudrun_R3_Text_1
# 692 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R3_Text_2, MSGBOX_DEFAULT
# 693 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R3_2:
# 687 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 688 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R4::
# 697 "data/maps/ParcelRiver/scripts.pory"
	lock
# 698 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 699 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R4_Text_0, MSGBOX_YESNO
# 700 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R4_2
# 705 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R4, ParcelRiver_Gudrun_R4_Text_1
# 706 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R4_Text_2, MSGBOX_DEFAULT
# 707 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R4_2:
# 701 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 702 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Gudrun_R5::
# 711 "data/maps/ParcelRiver/scripts.pory"
	lock
# 712 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 713 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R5_Text_0, MSGBOX_YESNO
# 714 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Gudrun_R5_2
# 719 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_GUDRUN_R5, ParcelRiver_Gudrun_R3_Text_1
# 720 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R5_Text_1, MSGBOX_DEFAULT
# 721 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Gudrun_R5_2:
# 715 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Gudrun_R2_Text_1, MSGBOX_DEFAULT
# 716 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard::
# 725 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_HAVARD, ParcelRiver_Havard_Text_0, ParcelRiver_Havard_Text_1, ParcelRiver_Havard_FirstWin
# 729 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 730 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Havard_3
ParcelRiver_Havard_1:
# 733 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Havard_8
ParcelRiver_Havard_6:
# 736 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Havard_13
ParcelRiver_Havard_11:
# 739 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Havard_18
ParcelRiver_Havard_16:
# 742 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Havard_2:
# 731 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R2
	goto ParcelRiver_Havard_1

ParcelRiver_Havard_3:
# 730 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R2
	goto_if 0, ParcelRiver_Havard_2
	goto ParcelRiver_Havard_1

ParcelRiver_Havard_7:
# 734 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R3
	goto ParcelRiver_Havard_6

ParcelRiver_Havard_8:
# 733 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R3
	goto_if 0, ParcelRiver_Havard_7
	goto ParcelRiver_Havard_6

ParcelRiver_Havard_12:
# 737 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R4
	goto ParcelRiver_Havard_11

ParcelRiver_Havard_13:
# 736 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R4
	goto_if 0, ParcelRiver_Havard_12
	goto ParcelRiver_Havard_11

ParcelRiver_Havard_17:
# 740 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Havard_R5
	goto ParcelRiver_Havard_16

ParcelRiver_Havard_18:
# 739 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_HAVARD_R5
	goto_if 0, ParcelRiver_Havard_17
	goto ParcelRiver_Havard_16


ParcelRiver_Havard_FirstWin::
# 746 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_Text_2, MSGBOX_DEFAULT
# 747 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R2::
# 751 "data/maps/ParcelRiver/scripts.pory"
	lock
# 752 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 753 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_0, MSGBOX_YESNO
# 754 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R2_2
# 759 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R2, ParcelRiver_Havard_R2_Text_2
# 760 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_3, MSGBOX_DEFAULT
# 761 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R2_2:
# 755 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 756 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R3::
# 765 "data/maps/ParcelRiver/scripts.pory"
	lock
# 766 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 767 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R3_Text_0, MSGBOX_YESNO
# 768 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R3_2
# 773 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R3, ParcelRiver_Havard_R3_Text_1
# 774 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R3_Text_2, MSGBOX_DEFAULT
# 775 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R3_2:
# 769 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 770 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R4::
# 779 "data/maps/ParcelRiver/scripts.pory"
	lock
# 780 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 781 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R4_Text_0, MSGBOX_YESNO
# 782 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R4_2
# 787 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R4, ParcelRiver_Havard_R4_Text_1
# 788 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R4_Text_2, MSGBOX_DEFAULT
# 789 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R4_2:
# 783 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 784 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Havard_R5::
# 793 "data/maps/ParcelRiver/scripts.pory"
	lock
# 794 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 795 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R5_Text_0, MSGBOX_YESNO
# 796 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Havard_R5_2
# 801 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_HAVARD_R5, ParcelRiver_Havard_R2_Text_2
# 802 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R5_Text_1, MSGBOX_DEFAULT
# 803 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Havard_R5_2:
# 797 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Havard_R2_Text_1, MSGBOX_DEFAULT
# 798 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun::
# 807 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_IDUN, ParcelRiver_Idun_Text_0, ParcelRiver_Idun_Text_1, ParcelRiver_Idun_FirstWin
# 811 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 812 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Idun_3
ParcelRiver_Idun_1:
# 815 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Idun_8
ParcelRiver_Idun_6:
# 818 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Idun_13
ParcelRiver_Idun_11:
# 821 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Idun_18
ParcelRiver_Idun_16:
# 824 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Idun_2:
# 813 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R2
	goto ParcelRiver_Idun_1

ParcelRiver_Idun_3:
# 812 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R2
	goto_if 0, ParcelRiver_Idun_2
	goto ParcelRiver_Idun_1

ParcelRiver_Idun_7:
# 816 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R3
	goto ParcelRiver_Idun_6

ParcelRiver_Idun_8:
# 815 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R3
	goto_if 0, ParcelRiver_Idun_7
	goto ParcelRiver_Idun_6

ParcelRiver_Idun_12:
# 819 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R4
	goto ParcelRiver_Idun_11

ParcelRiver_Idun_13:
# 818 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R4
	goto_if 0, ParcelRiver_Idun_12
	goto ParcelRiver_Idun_11

ParcelRiver_Idun_17:
# 822 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Idun_R5
	goto ParcelRiver_Idun_16

ParcelRiver_Idun_18:
# 821 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_IDUN_R5
	goto_if 0, ParcelRiver_Idun_17
	goto ParcelRiver_Idun_16


ParcelRiver_Idun_FirstWin::
# 828 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_Text_2, MSGBOX_DEFAULT
# 829 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R2::
# 833 "data/maps/ParcelRiver/scripts.pory"
	lock
# 834 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 835 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_0, MSGBOX_YESNO
# 836 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R2_2
# 841 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R2, ParcelRiver_Idun_R2_Text_2
# 842 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_3, MSGBOX_DEFAULT
# 843 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R2_2:
# 837 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 838 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R3::
# 847 "data/maps/ParcelRiver/scripts.pory"
	lock
# 848 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 849 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R3_Text_0, MSGBOX_YESNO
# 850 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R3_2
# 855 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R3, ParcelRiver_Idun_R3_Text_1
# 856 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R3_Text_2, MSGBOX_DEFAULT
# 857 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R3_2:
# 851 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 852 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R4::
# 861 "data/maps/ParcelRiver/scripts.pory"
	lock
# 862 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 863 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R4_Text_0, MSGBOX_YESNO
# 864 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R4_2
# 869 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R4, ParcelRiver_Idun_R4_Text_1
# 870 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R4_Text_2, MSGBOX_DEFAULT
# 871 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R4_2:
# 865 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 866 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Idun_R5::
# 875 "data/maps/ParcelRiver/scripts.pory"
	lock
# 876 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 877 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R5_Text_0, MSGBOX_YESNO
# 878 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Idun_R5_2
# 883 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_IDUN_R5, ParcelRiver_Idun_R4_Text_1
# 884 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R5_Text_1, MSGBOX_DEFAULT
# 885 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Idun_R5_2:
# 879 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Idun_R2_Text_1, MSGBOX_DEFAULT
# 880 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar::
# 889 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_JOAR, ParcelRiver_Joar_Text_0, ParcelRiver_Joar_Text_1, ParcelRiver_Joar_FirstWin
# 893 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 894 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Joar_3
ParcelRiver_Joar_1:
# 897 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Joar_8
ParcelRiver_Joar_6:
# 900 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Joar_13
ParcelRiver_Joar_11:
# 903 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Joar_18
ParcelRiver_Joar_16:
# 906 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Joar_2:
# 895 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R2
	goto ParcelRiver_Joar_1

ParcelRiver_Joar_3:
# 894 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R2
	goto_if 0, ParcelRiver_Joar_2
	goto ParcelRiver_Joar_1

ParcelRiver_Joar_7:
# 898 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R3
	goto ParcelRiver_Joar_6

ParcelRiver_Joar_8:
# 897 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R3
	goto_if 0, ParcelRiver_Joar_7
	goto ParcelRiver_Joar_6

ParcelRiver_Joar_12:
# 901 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R4
	goto ParcelRiver_Joar_11

ParcelRiver_Joar_13:
# 900 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R4
	goto_if 0, ParcelRiver_Joar_12
	goto ParcelRiver_Joar_11

ParcelRiver_Joar_17:
# 904 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Joar_R5
	goto ParcelRiver_Joar_16

ParcelRiver_Joar_18:
# 903 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_JOAR_R5
	goto_if 0, ParcelRiver_Joar_17
	goto ParcelRiver_Joar_16


ParcelRiver_Joar_FirstWin::
# 910 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_Text_2, MSGBOX_DEFAULT
# 911 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R2::
# 915 "data/maps/ParcelRiver/scripts.pory"
	lock
# 916 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 917 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_0, MSGBOX_YESNO
# 918 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R2_2
# 923 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R2, ParcelRiver_Joar_R2_Text_2
# 924 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_3, MSGBOX_DEFAULT
# 925 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R2_2:
# 919 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 920 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R3::
# 929 "data/maps/ParcelRiver/scripts.pory"
	lock
# 930 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 931 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R3_Text_0, MSGBOX_YESNO
# 932 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R3_2
# 937 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R3, ParcelRiver_Joar_R3_Text_1
# 938 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R3_Text_2, MSGBOX_DEFAULT
# 939 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R3_2:
# 933 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 934 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R4::
# 943 "data/maps/ParcelRiver/scripts.pory"
	lock
# 944 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 945 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R4_Text_0, MSGBOX_YESNO
# 946 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R4_2
# 951 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R4, ParcelRiver_Joar_R4_Text_1
# 952 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R4_Text_2, MSGBOX_DEFAULT
# 953 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R4_2:
# 947 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 948 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Joar_R5::
# 957 "data/maps/ParcelRiver/scripts.pory"
	lock
# 958 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 959 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R5_Text_0, MSGBOX_YESNO
# 960 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Joar_R5_2
# 965 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_JOAR_R5, ParcelRiver_Joar_R4_Text_1
# 966 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R5_Text_1, MSGBOX_DEFAULT
# 967 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Joar_R5_2:
# 961 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Joar_R2_Text_1, MSGBOX_DEFAULT
# 962 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari::
# 971 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_KARI, ParcelRiver_Kari_Text_0, ParcelRiver_Kari_Text_1, ParcelRiver_Kari_FirstWin
# 975 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 976 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Kari_3
ParcelRiver_Kari_1:
# 979 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Kari_8
ParcelRiver_Kari_6:
# 982 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Kari_13
ParcelRiver_Kari_11:
# 985 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Kari_18
ParcelRiver_Kari_16:
# 988 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Kari_2:
# 977 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R2
	goto ParcelRiver_Kari_1

ParcelRiver_Kari_3:
# 976 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R2
	goto_if 0, ParcelRiver_Kari_2
	goto ParcelRiver_Kari_1

ParcelRiver_Kari_7:
# 980 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R3
	goto ParcelRiver_Kari_6

ParcelRiver_Kari_8:
# 979 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R3
	goto_if 0, ParcelRiver_Kari_7
	goto ParcelRiver_Kari_6

ParcelRiver_Kari_12:
# 983 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R4
	goto ParcelRiver_Kari_11

ParcelRiver_Kari_13:
# 982 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R4
	goto_if 0, ParcelRiver_Kari_12
	goto ParcelRiver_Kari_11

ParcelRiver_Kari_17:
# 986 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Kari_R5
	goto ParcelRiver_Kari_16

ParcelRiver_Kari_18:
# 985 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_KARI_R5
	goto_if 0, ParcelRiver_Kari_17
	goto ParcelRiver_Kari_16


ParcelRiver_Kari_FirstWin::
# 992 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_Text_2, MSGBOX_DEFAULT
# 993 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R2::
# 997 "data/maps/ParcelRiver/scripts.pory"
	lock
# 998 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 999 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_0, MSGBOX_YESNO
# 1000 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R2_2
# 1005 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R2, ParcelRiver_Kari_R2_Text_2
# 1006 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_3, MSGBOX_DEFAULT
# 1007 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R2_2:
# 1001 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1002 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R3::
# 1011 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1012 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1013 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R3_Text_0, MSGBOX_YESNO
# 1014 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R3_2
# 1019 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R3, ParcelRiver_Kari_R3_Text_1
# 1020 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R3_Text_2, MSGBOX_DEFAULT
# 1021 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R3_2:
# 1015 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1016 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R4::
# 1025 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1026 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1027 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R4_Text_0, MSGBOX_YESNO
# 1028 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R4_2
# 1033 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R4, ParcelRiver_Kari_R3_Text_1
# 1034 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R4_Text_1, MSGBOX_DEFAULT
# 1035 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R4_2:
# 1029 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1030 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Kari_R5::
# 1039 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1040 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1041 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R5_Text_0, MSGBOX_YESNO
# 1042 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Kari_R5_2
# 1047 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_KARI_R5, ParcelRiver_Kari_R5_Text_1
# 1048 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R5_Text_2, MSGBOX_DEFAULT
# 1049 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Kari_R5_2:
# 1043 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Kari_R2_Text_1, MSGBOX_DEFAULT
# 1044 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars::
# 1053 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_LARS, ParcelRiver_Lars_Text_0, ParcelRiver_Lars_Text_1, ParcelRiver_Lars_FirstWin
# 1057 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1058 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Lars_3
ParcelRiver_Lars_1:
# 1061 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Lars_8
ParcelRiver_Lars_6:
# 1064 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Lars_13
ParcelRiver_Lars_11:
# 1067 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Lars_18
ParcelRiver_Lars_16:
# 1070 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Lars_2:
# 1059 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R2
	goto ParcelRiver_Lars_1

ParcelRiver_Lars_3:
# 1058 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R2
	goto_if 0, ParcelRiver_Lars_2
	goto ParcelRiver_Lars_1

ParcelRiver_Lars_7:
# 1062 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R3
	goto ParcelRiver_Lars_6

ParcelRiver_Lars_8:
# 1061 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R3
	goto_if 0, ParcelRiver_Lars_7
	goto ParcelRiver_Lars_6

ParcelRiver_Lars_12:
# 1065 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R4
	goto ParcelRiver_Lars_11

ParcelRiver_Lars_13:
# 1064 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R4
	goto_if 0, ParcelRiver_Lars_12
	goto ParcelRiver_Lars_11

ParcelRiver_Lars_17:
# 1068 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Lars_R5
	goto ParcelRiver_Lars_16

ParcelRiver_Lars_18:
# 1067 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_LARS_R5
	goto_if 0, ParcelRiver_Lars_17
	goto ParcelRiver_Lars_16


ParcelRiver_Lars_FirstWin::
# 1074 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_Text_2, MSGBOX_DEFAULT
# 1075 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R2::
# 1079 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1080 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1081 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_0, MSGBOX_YESNO
# 1082 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R2_2
# 1087 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R2, ParcelRiver_Lars_R2_Text_2
# 1088 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_3, MSGBOX_DEFAULT
# 1089 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R2_2:
# 1083 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1084 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R3::
# 1093 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1094 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1095 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R3_Text_0, MSGBOX_YESNO
# 1096 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R3_2
# 1101 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R3, ParcelRiver_Lars_R3_Text_1
# 1102 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R3_Text_2, MSGBOX_DEFAULT
# 1103 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R3_2:
# 1097 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1098 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R4::
# 1107 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1108 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1109 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R4_Text_0, MSGBOX_YESNO
# 1110 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R4_2
# 1115 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R4, ParcelRiver_Lars_R2_Text_2
# 1116 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R4_Text_1, MSGBOX_DEFAULT
# 1117 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R4_2:
# 1111 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1112 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Lars_R5::
# 1121 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1122 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1123 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R5_Text_0, MSGBOX_YESNO
# 1124 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Lars_R5_2
# 1129 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_LARS_R5, ParcelRiver_Lars_R5_Text_1
# 1130 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R5_Text_2, MSGBOX_DEFAULT
# 1131 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Lars_R5_2:
# 1125 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Lars_R2_Text_1, MSGBOX_DEFAULT
# 1126 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit::
# 1135 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_MARIT, ParcelRiver_Marit_Text_0, ParcelRiver_Marit_Text_1, ParcelRiver_Marit_FirstWin
# 1139 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1140 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Marit_3
ParcelRiver_Marit_1:
# 1143 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Marit_8
ParcelRiver_Marit_6:
# 1146 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Marit_13
ParcelRiver_Marit_11:
# 1149 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Marit_18
ParcelRiver_Marit_16:
# 1152 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Marit_2:
# 1141 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R2
	goto ParcelRiver_Marit_1

ParcelRiver_Marit_3:
# 1140 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R2
	goto_if 0, ParcelRiver_Marit_2
	goto ParcelRiver_Marit_1

ParcelRiver_Marit_7:
# 1144 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R3
	goto ParcelRiver_Marit_6

ParcelRiver_Marit_8:
# 1143 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R3
	goto_if 0, ParcelRiver_Marit_7
	goto ParcelRiver_Marit_6

ParcelRiver_Marit_12:
# 1147 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R4
	goto ParcelRiver_Marit_11

ParcelRiver_Marit_13:
# 1146 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R4
	goto_if 0, ParcelRiver_Marit_12
	goto ParcelRiver_Marit_11

ParcelRiver_Marit_17:
# 1150 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Marit_R5
	goto ParcelRiver_Marit_16

ParcelRiver_Marit_18:
# 1149 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_MARIT_R5
	goto_if 0, ParcelRiver_Marit_17
	goto ParcelRiver_Marit_16


ParcelRiver_Marit_FirstWin::
# 1156 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_Text_2, MSGBOX_DEFAULT
# 1157 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R2::
# 1161 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1162 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1163 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_0, MSGBOX_YESNO
# 1164 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R2_2
# 1169 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R2, ParcelRiver_Marit_R2_Text_2
# 1170 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_3, MSGBOX_DEFAULT
# 1171 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R2_2:
# 1165 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1166 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R3::
# 1175 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1176 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1177 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R3_Text_0, MSGBOX_YESNO
# 1178 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R3_2
# 1183 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R3, ParcelRiver_Marit_R3_Text_1
# 1184 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R3_Text_2, MSGBOX_DEFAULT
# 1185 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R3_2:
# 1179 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1180 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R4::
# 1189 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1190 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1191 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R4_Text_0, MSGBOX_YESNO
# 1192 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R4_2
# 1197 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R4, ParcelRiver_Marit_R4_Text_1
# 1198 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R4_Text_2, MSGBOX_DEFAULT
# 1199 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R4_2:
# 1193 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1194 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Marit_R5::
# 1203 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1204 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1205 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R5_Text_0, MSGBOX_YESNO
# 1206 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Marit_R5_2
# 1211 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_MARIT_R5, ParcelRiver_Marit_R5_Text_1
# 1212 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R5_Text_2, MSGBOX_DEFAULT
# 1213 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Marit_R5_2:
# 1207 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Marit_R2_Text_1, MSGBOX_DEFAULT
# 1208 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal::
# 1217 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_NJAL, ParcelRiver_Njal_Text_0, ParcelRiver_Njal_Text_1, ParcelRiver_Njal_FirstWin
# 1221 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1222 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Njal_3
ParcelRiver_Njal_1:
# 1225 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Njal_8
ParcelRiver_Njal_6:
# 1228 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Njal_13
ParcelRiver_Njal_11:
# 1231 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Njal_18
ParcelRiver_Njal_16:
# 1234 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Njal_2:
# 1223 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R2
	goto ParcelRiver_Njal_1

ParcelRiver_Njal_3:
# 1222 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R2
	goto_if 0, ParcelRiver_Njal_2
	goto ParcelRiver_Njal_1

ParcelRiver_Njal_7:
# 1226 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R3
	goto ParcelRiver_Njal_6

ParcelRiver_Njal_8:
# 1225 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R3
	goto_if 0, ParcelRiver_Njal_7
	goto ParcelRiver_Njal_6

ParcelRiver_Njal_12:
# 1229 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R4
	goto ParcelRiver_Njal_11

ParcelRiver_Njal_13:
# 1228 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R4
	goto_if 0, ParcelRiver_Njal_12
	goto ParcelRiver_Njal_11

ParcelRiver_Njal_17:
# 1232 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Njal_R5
	goto ParcelRiver_Njal_16

ParcelRiver_Njal_18:
# 1231 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_NJAL_R5
	goto_if 0, ParcelRiver_Njal_17
	goto ParcelRiver_Njal_16


ParcelRiver_Njal_FirstWin::
# 1238 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_Text_2, MSGBOX_DEFAULT
# 1239 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R2::
# 1243 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1244 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1245 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_0, MSGBOX_YESNO
# 1246 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R2_2
# 1251 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R2, ParcelRiver_Njal_R2_Text_2
# 1252 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_3, MSGBOX_DEFAULT
# 1253 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R2_2:
# 1247 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1248 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R3::
# 1257 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1258 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1259 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R3_Text_0, MSGBOX_YESNO
# 1260 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R3_2
# 1265 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R3, ParcelRiver_Njal_R3_Text_1
# 1266 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R3_Text_2, MSGBOX_DEFAULT
# 1267 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R3_2:
# 1261 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1262 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R4::
# 1271 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1272 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1273 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R4_Text_0, MSGBOX_YESNO
# 1274 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R4_2
# 1279 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R4, ParcelRiver_Njal_R4_Text_1
# 1280 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R4_Text_2, MSGBOX_DEFAULT
# 1281 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R4_2:
# 1275 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1276 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Njal_R5::
# 1285 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1286 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1287 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R5_Text_0, MSGBOX_YESNO
# 1288 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Njal_R5_2
# 1293 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_NJAL_R5, ParcelRiver_Njal_R5_Text_1
# 1294 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R5_Text_2, MSGBOX_DEFAULT
# 1295 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Njal_R5_2:
# 1289 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Njal_R2_Text_1, MSGBOX_DEFAULT
# 1290 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar::
# 1299 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_OTTAR, ParcelRiver_Ottar_Text_0, ParcelRiver_Ottar_Text_1, ParcelRiver_Ottar_FirstWin
# 1303 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1304 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Ottar_3
ParcelRiver_Ottar_1:
# 1307 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Ottar_8
ParcelRiver_Ottar_6:
# 1310 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Ottar_13
ParcelRiver_Ottar_11:
# 1313 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Ottar_18
ParcelRiver_Ottar_16:
# 1316 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Ottar_2:
# 1305 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R2
	goto ParcelRiver_Ottar_1

ParcelRiver_Ottar_3:
# 1304 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R2
	goto_if 0, ParcelRiver_Ottar_2
	goto ParcelRiver_Ottar_1

ParcelRiver_Ottar_7:
# 1308 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R3
	goto ParcelRiver_Ottar_6

ParcelRiver_Ottar_8:
# 1307 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R3
	goto_if 0, ParcelRiver_Ottar_7
	goto ParcelRiver_Ottar_6

ParcelRiver_Ottar_12:
# 1311 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R4
	goto ParcelRiver_Ottar_11

ParcelRiver_Ottar_13:
# 1310 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R4
	goto_if 0, ParcelRiver_Ottar_12
	goto ParcelRiver_Ottar_11

ParcelRiver_Ottar_17:
# 1314 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ottar_R5
	goto ParcelRiver_Ottar_16

ParcelRiver_Ottar_18:
# 1313 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_OTTAR_R5
	goto_if 0, ParcelRiver_Ottar_17
	goto ParcelRiver_Ottar_16


ParcelRiver_Ottar_FirstWin::
# 1320 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_Text_2, MSGBOX_DEFAULT
# 1321 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R2::
# 1325 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1326 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1327 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_0, MSGBOX_YESNO
# 1328 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R2_2
# 1333 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R2, ParcelRiver_Ottar_R2_Text_2
# 1334 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_3, MSGBOX_DEFAULT
# 1335 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R2_2:
# 1329 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1330 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R3::
# 1339 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1340 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1341 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R3_Text_0, MSGBOX_YESNO
# 1342 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R3_2
# 1347 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R3, ParcelRiver_Ottar_R3_Text_1
# 1348 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R3_Text_2, MSGBOX_DEFAULT
# 1349 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R3_2:
# 1343 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1344 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R4::
# 1353 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1354 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1355 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R4_Text_0, MSGBOX_YESNO
# 1356 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R4_2
# 1361 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R4, ParcelRiver_Ottar_R4_Text_1
# 1362 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R4_Text_2, MSGBOX_DEFAULT
# 1363 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R4_2:
# 1357 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1358 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ottar_R5::
# 1367 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1368 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1369 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R5_Text_0, MSGBOX_YESNO
# 1370 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ottar_R5_2
# 1375 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_OTTAR_R5, ParcelRiver_Ottar_R5_Text_1
# 1376 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R5_Text_2, MSGBOX_DEFAULT
# 1377 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ottar_R5_2:
# 1371 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ottar_R2_Text_1, MSGBOX_DEFAULT
# 1372 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal::
# 1381 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_PAAL, ParcelRiver_Paal_Text_0, ParcelRiver_Paal_Text_1, ParcelRiver_Paal_FirstWin
# 1385 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1386 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Paal_3
ParcelRiver_Paal_1:
# 1389 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Paal_8
ParcelRiver_Paal_6:
# 1392 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Paal_13
ParcelRiver_Paal_11:
# 1395 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Paal_18
ParcelRiver_Paal_16:
# 1398 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Paal_2:
# 1387 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R2
	goto ParcelRiver_Paal_1

ParcelRiver_Paal_3:
# 1386 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R2
	goto_if 0, ParcelRiver_Paal_2
	goto ParcelRiver_Paal_1

ParcelRiver_Paal_7:
# 1390 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R3
	goto ParcelRiver_Paal_6

ParcelRiver_Paal_8:
# 1389 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R3
	goto_if 0, ParcelRiver_Paal_7
	goto ParcelRiver_Paal_6

ParcelRiver_Paal_12:
# 1393 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R4
	goto ParcelRiver_Paal_11

ParcelRiver_Paal_13:
# 1392 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R4
	goto_if 0, ParcelRiver_Paal_12
	goto ParcelRiver_Paal_11

ParcelRiver_Paal_17:
# 1396 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Paal_R5
	goto ParcelRiver_Paal_16

ParcelRiver_Paal_18:
# 1395 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_PAAL_R5
	goto_if 0, ParcelRiver_Paal_17
	goto ParcelRiver_Paal_16


ParcelRiver_Paal_FirstWin::
# 1402 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_Text_2, MSGBOX_DEFAULT
# 1403 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R2::
# 1407 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1408 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1409 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_0, MSGBOX_YESNO
# 1410 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R2_2
# 1415 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R2, ParcelRiver_Paal_R2_Text_2
# 1416 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_3, MSGBOX_DEFAULT
# 1417 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R2_2:
# 1411 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1412 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R3::
# 1421 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1422 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1423 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R3_Text_0, MSGBOX_YESNO
# 1424 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R3_2
# 1429 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R3, ParcelRiver_Paal_R3_Text_1
# 1430 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R3_Text_2, MSGBOX_DEFAULT
# 1431 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R3_2:
# 1425 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1426 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R4::
# 1435 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1436 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1437 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R4_Text_0, MSGBOX_YESNO
# 1438 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R4_2
# 1443 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R4, ParcelRiver_Paal_R2_Text_2
# 1444 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R4_Text_1, MSGBOX_DEFAULT
# 1445 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R4_2:
# 1439 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1440 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Paal_R5::
# 1449 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1450 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1451 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R5_Text_0, MSGBOX_YESNO
# 1452 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Paal_R5_2
# 1457 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_PAAL_R5, ParcelRiver_Paal_R2_Text_2
# 1458 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R5_Text_1, MSGBOX_DEFAULT
# 1459 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Paal_R5_2:
# 1453 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Paal_R2_Text_1, MSGBOX_DEFAULT
# 1454 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna::
# 1463 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_RAGNA, ParcelRiver_Ragna_Text_0, ParcelRiver_Ragna_Text_1, ParcelRiver_Ragna_FirstWin
# 1467 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1468 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Ragna_3
ParcelRiver_Ragna_1:
# 1471 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Ragna_8
ParcelRiver_Ragna_6:
# 1474 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Ragna_13
ParcelRiver_Ragna_11:
# 1477 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Ragna_18
ParcelRiver_Ragna_16:
# 1480 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Ragna_2:
# 1469 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R2
	goto ParcelRiver_Ragna_1

ParcelRiver_Ragna_3:
# 1468 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R2
	goto_if 0, ParcelRiver_Ragna_2
	goto ParcelRiver_Ragna_1

ParcelRiver_Ragna_7:
# 1472 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R3
	goto ParcelRiver_Ragna_6

ParcelRiver_Ragna_8:
# 1471 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R3
	goto_if 0, ParcelRiver_Ragna_7
	goto ParcelRiver_Ragna_6

ParcelRiver_Ragna_12:
# 1475 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R4
	goto ParcelRiver_Ragna_11

ParcelRiver_Ragna_13:
# 1474 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R4
	goto_if 0, ParcelRiver_Ragna_12
	goto ParcelRiver_Ragna_11

ParcelRiver_Ragna_17:
# 1478 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Ragna_R5
	goto ParcelRiver_Ragna_16

ParcelRiver_Ragna_18:
# 1477 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_RAGNA_R5
	goto_if 0, ParcelRiver_Ragna_17
	goto ParcelRiver_Ragna_16


ParcelRiver_Ragna_FirstWin::
# 1484 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_Text_2, MSGBOX_DEFAULT
# 1485 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R2::
# 1489 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1490 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1491 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_0, MSGBOX_YESNO
# 1492 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R2_2
# 1497 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R2, ParcelRiver_Ragna_R2_Text_2
# 1498 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_3, MSGBOX_DEFAULT
# 1499 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R2_2:
# 1493 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1494 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R3::
# 1503 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1504 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1505 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R3_Text_0, MSGBOX_YESNO
# 1506 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R3_2
# 1511 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R3, ParcelRiver_Ragna_R3_Text_1
# 1512 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R3_Text_2, MSGBOX_DEFAULT
# 1513 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R3_2:
# 1507 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1508 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R4::
# 1517 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1518 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1519 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R4_Text_0, MSGBOX_YESNO
# 1520 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R4_2
# 1525 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R4, ParcelRiver_Ragna_R4_Text_1
# 1526 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R4_Text_2, MSGBOX_DEFAULT
# 1527 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R4_2:
# 1521 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1522 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Ragna_R5::
# 1531 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1532 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1533 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R5_Text_0, MSGBOX_YESNO
# 1534 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Ragna_R5_2
# 1539 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_RAGNA_R5, ParcelRiver_Ragna_R3_Text_1
# 1540 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R5_Text_1, MSGBOX_DEFAULT
# 1541 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Ragna_R5_2:
# 1535 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Ragna_R2_Text_1, MSGBOX_DEFAULT
# 1536 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd::
# 1545 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_SIGURD, ParcelRiver_Sigurd_Text_0, ParcelRiver_Sigurd_Text_1, ParcelRiver_Sigurd_FirstWin
# 1549 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1550 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_Sigurd_3
ParcelRiver_Sigurd_1:
# 1553 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_Sigurd_8
ParcelRiver_Sigurd_6:
# 1556 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_Sigurd_13
ParcelRiver_Sigurd_11:
# 1559 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_Sigurd_18
ParcelRiver_Sigurd_16:
# 1562 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_Sigurd_2:
# 1551 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R2
	goto ParcelRiver_Sigurd_1

ParcelRiver_Sigurd_3:
# 1550 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R2
	goto_if 0, ParcelRiver_Sigurd_2
	goto ParcelRiver_Sigurd_1

ParcelRiver_Sigurd_7:
# 1554 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R3
	goto ParcelRiver_Sigurd_6

ParcelRiver_Sigurd_8:
# 1553 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R3
	goto_if 0, ParcelRiver_Sigurd_7
	goto ParcelRiver_Sigurd_6

ParcelRiver_Sigurd_12:
# 1557 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R4
	goto ParcelRiver_Sigurd_11

ParcelRiver_Sigurd_13:
# 1556 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R4
	goto_if 0, ParcelRiver_Sigurd_12
	goto ParcelRiver_Sigurd_11

ParcelRiver_Sigurd_17:
# 1560 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_Sigurd_R5
	goto ParcelRiver_Sigurd_16

ParcelRiver_Sigurd_18:
# 1559 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_SIGURD_R5
	goto_if 0, ParcelRiver_Sigurd_17
	goto ParcelRiver_Sigurd_16


ParcelRiver_Sigurd_FirstWin::
# 1566 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_Text_2, MSGBOX_DEFAULT
# 1567 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R2::
# 1571 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1572 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1573 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_0, MSGBOX_YESNO
# 1574 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R2_2
# 1579 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R2, ParcelRiver_Sigurd_R2_Text_2
# 1580 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_3, MSGBOX_DEFAULT
# 1581 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R2_2:
# 1575 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1576 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R3::
# 1585 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1586 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1587 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R3_Text_0, MSGBOX_YESNO
# 1588 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R3_2
# 1593 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R3, ParcelRiver_Sigurd_R3_Text_1
# 1594 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R3_Text_2, MSGBOX_DEFAULT
# 1595 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R3_2:
# 1589 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1590 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R4::
# 1599 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1600 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1601 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R4_Text_0, MSGBOX_YESNO
# 1602 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R4_2
# 1607 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R4, ParcelRiver_Sigurd_R4_Text_1
# 1608 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R4_Text_2, MSGBOX_DEFAULT
# 1609 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R4_2:
# 1603 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1604 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_Sigurd_R5::
# 1613 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1614 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1615 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R5_Text_0, MSGBOX_YESNO
# 1616 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_Sigurd_R5_2
# 1621 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_SIGURD_R5, ParcelRiver_Sigurd_R5_Text_1
# 1622 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R5_Text_2, MSGBOX_DEFAULT
# 1623 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Sigurd_R5_2:
# 1617 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Sigurd_R2_Text_1, MSGBOX_DEFAULT
# 1618 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_ItemPotion::
# 1628 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelRiver_ItemSuperRepel::
# 1629 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_SUPER_REPEL
	end


ParcelRiver_ItemGreatBall::
# 1630 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelRiver_ItemTM19::
# 1631 "data/maps/ParcelRiver/scripts.pory"
	finditem ITEM_TM19
	end


ParcelRiver_SignTown::
# 1634 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignTown_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignBoard::
# 1638 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignBoard_Text_0, MSGBOX_SIGN
	end


ParcelRiver_SignMarket::
# 1642 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SignMarket_Text_0, MSGBOX_SIGN
	end


ParcelRiver_T_Aud::
# 1648 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_AUD, ParcelRiver_T_Aud_Text_0, ParcelRiver_T_Aud_Text_1, ParcelRiver_T_Aud_FirstWin
# 1652 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1653 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Aud_3
ParcelRiver_T_Aud_1:
# 1656 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Aud_8
ParcelRiver_T_Aud_6:
# 1659 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Aud_13
ParcelRiver_T_Aud_11:
# 1662 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Aud_18
ParcelRiver_T_Aud_16:
# 1665 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Aud_2:
# 1654 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R2
	goto ParcelRiver_T_Aud_1

ParcelRiver_T_Aud_3:
# 1653 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R2
	goto_if 0, ParcelRiver_T_Aud_2
	goto ParcelRiver_T_Aud_1

ParcelRiver_T_Aud_7:
# 1657 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R3
	goto ParcelRiver_T_Aud_6

ParcelRiver_T_Aud_8:
# 1656 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R3
	goto_if 0, ParcelRiver_T_Aud_7
	goto ParcelRiver_T_Aud_6

ParcelRiver_T_Aud_12:
# 1660 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R4
	goto ParcelRiver_T_Aud_11

ParcelRiver_T_Aud_13:
# 1659 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R4
	goto_if 0, ParcelRiver_T_Aud_12
	goto ParcelRiver_T_Aud_11

ParcelRiver_T_Aud_17:
# 1663 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Aud_R5
	goto ParcelRiver_T_Aud_16

ParcelRiver_T_Aud_18:
# 1662 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_AUD_R5
	goto_if 0, ParcelRiver_T_Aud_17
	goto ParcelRiver_T_Aud_16


ParcelRiver_T_Aud_FirstWin::
# 1669 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_Text_2, MSGBOX_DEFAULT
# 1670 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R2::
# 1674 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1675 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1676 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_0, MSGBOX_YESNO
# 1677 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R2_2
# 1682 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R2, ParcelRiver_T_Aud_R2_Text_2
# 1683 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_3, MSGBOX_DEFAULT
# 1684 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R2_2:
# 1678 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1679 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R3::
# 1688 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1689 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1690 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R3_Text_0, MSGBOX_YESNO
# 1691 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R3_2
# 1696 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R3, ParcelRiver_T_Aud_R3_Text_1
# 1697 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R3_Text_2, MSGBOX_DEFAULT
# 1698 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R3_2:
# 1692 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1693 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R4::
# 1702 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1703 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1704 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R4_Text_0, MSGBOX_YESNO
# 1705 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R4_2
# 1710 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R4, ParcelRiver_T_Aud_R4_Text_1
# 1711 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R4_Text_2, MSGBOX_DEFAULT
# 1712 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R4_2:
# 1706 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1707 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Aud_R5::
# 1716 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1717 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1718 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R5_Text_0, MSGBOX_YESNO
# 1719 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Aud_R5_2
# 1724 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_AUD_R5, ParcelRiver_T_Aud_R5_Text_1
# 1725 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R5_Text_2, MSGBOX_DEFAULT
# 1726 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Aud_R5_2:
# 1720 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Aud_R2_Text_1, MSGBOX_DEFAULT
# 1721 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen::
# 1730 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_ESPEN, ParcelRiver_T_Espen_Text_0, ParcelRiver_T_Espen_Text_1, ParcelRiver_T_Espen_FirstWin
# 1734 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1735 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Espen_3
ParcelRiver_T_Espen_1:
# 1738 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Espen_8
ParcelRiver_T_Espen_6:
# 1741 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Espen_13
ParcelRiver_T_Espen_11:
# 1744 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Espen_18
ParcelRiver_T_Espen_16:
# 1747 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Espen_2:
# 1736 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R2
	goto ParcelRiver_T_Espen_1

ParcelRiver_T_Espen_3:
# 1735 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R2
	goto_if 0, ParcelRiver_T_Espen_2
	goto ParcelRiver_T_Espen_1

ParcelRiver_T_Espen_7:
# 1739 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R3
	goto ParcelRiver_T_Espen_6

ParcelRiver_T_Espen_8:
# 1738 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R3
	goto_if 0, ParcelRiver_T_Espen_7
	goto ParcelRiver_T_Espen_6

ParcelRiver_T_Espen_12:
# 1742 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R4
	goto ParcelRiver_T_Espen_11

ParcelRiver_T_Espen_13:
# 1741 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R4
	goto_if 0, ParcelRiver_T_Espen_12
	goto ParcelRiver_T_Espen_11

ParcelRiver_T_Espen_17:
# 1745 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Espen_R5
	goto ParcelRiver_T_Espen_16

ParcelRiver_T_Espen_18:
# 1744 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_ESPEN_R5
	goto_if 0, ParcelRiver_T_Espen_17
	goto ParcelRiver_T_Espen_16


ParcelRiver_T_Espen_FirstWin::
# 1751 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_Text_2, MSGBOX_DEFAULT
# 1752 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R2::
# 1756 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1757 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1758 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_0, MSGBOX_YESNO
# 1759 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R2_2
# 1764 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R2, ParcelRiver_T_Espen_R2_Text_2
# 1765 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_3, MSGBOX_DEFAULT
# 1766 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R2_2:
# 1760 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1761 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R3::
# 1770 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1771 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1772 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R3_Text_0, MSGBOX_YESNO
# 1773 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R3_2
# 1778 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R3, ParcelRiver_T_Espen_R3_Text_1
# 1779 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R3_Text_2, MSGBOX_DEFAULT
# 1780 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R3_2:
# 1774 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1775 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R4::
# 1784 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1785 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1786 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R4_Text_0, MSGBOX_YESNO
# 1787 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R4_2
# 1792 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R4, ParcelRiver_T_Espen_R4_Text_1
# 1793 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R4_Text_2, MSGBOX_DEFAULT
# 1794 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R4_2:
# 1788 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1789 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Espen_R5::
# 1798 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1799 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1800 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R5_Text_0, MSGBOX_YESNO
# 1801 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Espen_R5_2
# 1806 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_ESPEN_R5, ParcelRiver_T_Espen_R2_Text_2
# 1807 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R5_Text_1, MSGBOX_DEFAULT
# 1808 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Espen_R5_2:
# 1802 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Espen_R2_Text_1, MSGBOX_DEFAULT
# 1803 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve::
# 1812 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RIV_TRYGVE, ParcelRiver_T_Trygve_Text_0, ParcelRiver_T_Trygve_Text_1, ParcelRiver_T_Trygve_FirstWin
# 1816 "data/maps/ParcelRiver/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1817 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelRiver_T_Trygve_3
ParcelRiver_T_Trygve_1:
# 1820 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelRiver_T_Trygve_8
ParcelRiver_T_Trygve_6:
# 1823 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelRiver_T_Trygve_13
ParcelRiver_T_Trygve_11:
# 1826 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelRiver_T_Trygve_18
ParcelRiver_T_Trygve_16:
# 1829 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
	end

ParcelRiver_T_Trygve_2:
# 1818 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R2
	goto ParcelRiver_T_Trygve_1

ParcelRiver_T_Trygve_3:
# 1817 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R2
	goto_if 0, ParcelRiver_T_Trygve_2
	goto ParcelRiver_T_Trygve_1

ParcelRiver_T_Trygve_7:
# 1821 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R3
	goto ParcelRiver_T_Trygve_6

ParcelRiver_T_Trygve_8:
# 1820 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R3
	goto_if 0, ParcelRiver_T_Trygve_7
	goto ParcelRiver_T_Trygve_6

ParcelRiver_T_Trygve_12:
# 1824 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R4
	goto ParcelRiver_T_Trygve_11

ParcelRiver_T_Trygve_13:
# 1823 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R4
	goto_if 0, ParcelRiver_T_Trygve_12
	goto ParcelRiver_T_Trygve_11

ParcelRiver_T_Trygve_17:
# 1827 "data/maps/ParcelRiver/scripts.pory"
	goto ParcelRiver_T_Trygve_R5
	goto ParcelRiver_T_Trygve_16

ParcelRiver_T_Trygve_18:
# 1826 "data/maps/ParcelRiver/scripts.pory"
	checktrainerflag TRAINER_SKALD_RIV_TRYGVE_R5
	goto_if 0, ParcelRiver_T_Trygve_17
	goto ParcelRiver_T_Trygve_16


ParcelRiver_T_Trygve_FirstWin::
# 1833 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_Text_2, MSGBOX_DEFAULT
# 1834 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R2::
# 1838 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1839 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1840 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_0, MSGBOX_YESNO
# 1841 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R2_2
# 1846 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R2, ParcelRiver_T_Trygve_R2_Text_2
# 1847 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_3, MSGBOX_DEFAULT
# 1848 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R2_2:
# 1842 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1843 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R3::
# 1852 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1853 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1854 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R3_Text_0, MSGBOX_YESNO
# 1855 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R3_2
# 1860 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R3, ParcelRiver_T_Trygve_R3_Text_1
# 1861 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R3_Text_2, MSGBOX_DEFAULT
# 1862 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R3_2:
# 1856 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1857 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R4::
# 1866 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1867 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1868 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R4_Text_0, MSGBOX_YESNO
# 1869 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R4_2
# 1874 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R4, ParcelRiver_T_Trygve_R3_Text_1
# 1875 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R4_Text_1, MSGBOX_DEFAULT
# 1876 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R4_2:
# 1870 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1871 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_T_Trygve_R5::
# 1880 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1881 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1882 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R5_Text_0, MSGBOX_YESNO
# 1883 "data/maps/ParcelRiver/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelRiver_T_Trygve_R5_2
# 1888 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RIV_TRYGVE_R5, ParcelRiver_T_Trygve_R5_Text_1
# 1889 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R5_Text_2, MSGBOX_DEFAULT
# 1890 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_T_Trygve_R5_2:
# 1884 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_T_Trygve_R2_Text_1, MSGBOX_DEFAULT
# 1885 "data/maps/ParcelRiver/scripts.pory"
	release
	end


ParcelRiver_BeaverStump::
# 1896 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1897 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BEAVER, ParcelRiver_BeaverStump_3
ParcelRiver_BeaverStump_1:
# 1903 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_BeaverStump_Text_1, MSGBOX_SIGN
# 1904 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_BeaverStump_2:
# 1898 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_BeaverStump_Text_0, MSGBOX_SIGN
# 1899 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BEAVER_SEEN
# 1900 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_BeaverStump_3:
# 1897 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_BEAVER_SEEN, ParcelRiver_BeaverStump_2
	goto ParcelRiver_BeaverStump_1


ParcelRiver_PerrinScene::
# 1910 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_PERRIN_4, ParcelRiver_PerrinScene_2
# 1914 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 1915 "data/maps/ParcelRiver/scripts.pory"
	playse SE_PIN
# 1916 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_0, MSGBOX_DEFAULT
# 1917 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1918 "data/maps/ParcelRiver/scripts.pory"
	applymovement 34, Movement_ParcelRiver_PerrinIn
# 1919 "data/maps/ParcelRiver/scripts.pory"
	waitmovement 0
# 1920 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_1, MSGBOX_DEFAULT
# 1921 "data/maps/ParcelRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_PERRIN_4, ParcelRiver_PerrinScene_Text_2
# 1922 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinScene_Text_3, MSGBOX_DEFAULT
# 1923 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1924 "data/maps/ParcelRiver/scripts.pory"
	applymovement 34, Movement_ParcelRiver_PerrinOut
# 1925 "data/maps/ParcelRiver/scripts.pory"
	waitmovement 0
# 1926 "data/maps/ParcelRiver/scripts.pory"
	removeobject 34
# 1927 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_PERRIN_4
# 1928 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_5, 1
# 1929 "data/maps/ParcelRiver/scripts.pory"
	releaseall
	end

ParcelRiver_PerrinScene_2:
# 1911 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_TEMP_5, 1
	end


ParcelRiver_PerrinTalk::
# 1933 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1934 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 1935 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PerrinTalk_Text_0, MSGBOX_DEFAULT
# 1936 "data/maps/ParcelRiver/scripts.pory"
	release
	end


# 1939 "data/maps/ParcelRiver/scripts.pory"
Movement_ParcelRiver_PerrinIn:
# 1939 "data/maps/ParcelRiver/scripts.pory"
	walk_down
# 1939 "data/maps/ParcelRiver/scripts.pory"
	walk_down
	step_end

# 1940 "data/maps/ParcelRiver/scripts.pory"
Movement_ParcelRiver_PerrinOut:
# 1940 "data/maps/ParcelRiver/scripts.pory"
	walk_up
# 1940 "data/maps/ParcelRiver/scripts.pory"
	walk_up
	step_end

ParcelRiver_Epilogue::
# 1944 "data/maps/ParcelRiver/scripts.pory"
	lockall
# 1945 "data/maps/ParcelRiver/scripts.pory"
	delay 20
# 1946 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Epilogue_Text_0, MSGBOX_DEFAULT
# 1947 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Epilogue_Text_1, MSGBOX_DEFAULT
# 1948 "data/maps/ParcelRiver/scripts.pory"
	closemessage
# 1949 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 4
# 1950 "data/maps/ParcelRiver/scripts.pory"
	warp MAP_PARCEL_HIGHLANDS, 20, 68
# 1951 "data/maps/ParcelRiver/scripts.pory"
	waitstate
	end


ParcelRiver_ToMillWood::
# 1957 "data/maps/ParcelRiver/scripts.pory"
	warp MAP_PARCEL_RIVER_MILL_WOOD, 36, 37
# 1958 "data/maps/ParcelRiver/scripts.pory"
	waitstate
	end


ParcelRiver_Hives::
# 1963 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_HIVES, ParcelRiver_Hives_2
# 1966 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Hives_Text_0, MSGBOX_SIGN
# 1967 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_HIVES_FOUND
	end

ParcelRiver_Hives_2:
	end


ParcelRiver_SurveyStake::
# 1973 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SurveyStake_Text_0, MSGBOX_SIGN
# 1974 "data/maps/ParcelRiver/scripts.pory"
	setvar VAR_0x8004, 3
# 1975 "data/maps/ParcelRiver/scripts.pory"
	special SkaldSurveyStake
# 1976 "data/maps/ParcelRiver/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 1977 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelRiver_SurveyStake_3
ParcelRiver_SurveyStake_1:
	end

ParcelRiver_SurveyStake_2:
# 1978 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_SurveyStake_Text_1, MSGBOX_SIGN
# 1979 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_SECOND_3
	goto ParcelRiver_SurveyStake_1

ParcelRiver_SurveyStake_3:
# 1977 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_3, ParcelRiver_SurveyStake_2
	goto ParcelRiver_SurveyStake_1


ParcelRiver_PairMeter::
# 1987 "data/maps/ParcelRiver/scripts.pory"
	lock
# 1988 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PairMeter_2
# 1993 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_PairMeter_3
# 1999 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_8, MSGBOX_DEFAULT
# 2000 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_9, MSGBOX_DEFAULT
# 2001 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_10, MSGBOX_DEFAULT
# 2002 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_11, MSGBOX_DEFAULT
ParcelRiver_PairMeter_1:
# 2004 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PairMeter_2:
# 1989 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_0, MSGBOX_DEFAULT
# 1990 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_1, MSGBOX_DEFAULT
# 1991 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_2, MSGBOX_DEFAULT
# 1992 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_3, MSGBOX_DEFAULT
	goto ParcelRiver_PairMeter_1

ParcelRiver_PairMeter_3:
# 1994 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_4, MSGBOX_DEFAULT
# 1995 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_5, MSGBOX_DEFAULT
# 1996 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_6, MSGBOX_DEFAULT
# 1997 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairMeter_Text_7, MSGBOX_DEFAULT
	goto ParcelRiver_PairMeter_1


ParcelRiver_PairFord::
# 2009 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2010 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PairFord_2
# 2016 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_PairFord_3
# 2022 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_9, MSGBOX_DEFAULT
# 2023 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_10, MSGBOX_DEFAULT
# 2024 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_11, MSGBOX_DEFAULT
# 2025 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_12, MSGBOX_DEFAULT
ParcelRiver_PairFord_1:
# 2027 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PairFord_2:
# 2011 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_0, MSGBOX_DEFAULT
# 2012 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_1, MSGBOX_DEFAULT
# 2013 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_2, MSGBOX_DEFAULT
# 2014 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_3, MSGBOX_DEFAULT
# 2015 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_4, MSGBOX_DEFAULT
	goto ParcelRiver_PairFord_1

ParcelRiver_PairFord_3:
# 2017 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_5, MSGBOX_DEFAULT
# 2018 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_6, MSGBOX_DEFAULT
# 2019 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_7, MSGBOX_DEFAULT
# 2020 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairFord_Text_8, MSGBOX_DEFAULT
	goto ParcelRiver_PairFord_1


ParcelRiver_Stringer::
# 2034 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2035 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 2036 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_Stringer_2
# 2038 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_Stringer_3
# 2045 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_3, MSGBOX_DEFAULT
ParcelRiver_Stringer_1:
# 2047 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_Stringer_2:
# 2037 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_0, MSGBOX_DEFAULT
	goto ParcelRiver_Stringer_1

ParcelRiver_Stringer_3:
# 2039 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_CH_SPOKE, ParcelRiver_Stringer_7
# 2042 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_2, MSGBOX_DEFAULT
	goto ParcelRiver_Stringer_1

ParcelRiver_Stringer_7:
# 2040 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Stringer_Text_1, MSGBOX_DEFAULT
	goto ParcelRiver_Stringer_1


ParcelRiver_FordBoy::
# 2054 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2055 "data/maps/ParcelRiver/scripts.pory"
	faceplayer
# 2056 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK_DONE, ParcelRiver_FordBoy_2
# 2058 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK, ParcelRiver_FordBoy_3
# 2067 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_3, MSGBOX_DEFAULT
# 2068 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BOOK
ParcelRiver_FordBoy_1:
# 2070 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_FordBoy_2:
# 2057 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_0, MSGBOX_DEFAULT
	goto ParcelRiver_FordBoy_1

ParcelRiver_FordBoy_3:
# 2059 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_BOOK_FOUND, ParcelRiver_FordBoy_7
# 2064 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_2, MSGBOX_DEFAULT
	goto ParcelRiver_FordBoy_1

ParcelRiver_FordBoy_7:
# 2060 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FordBoy_Text_1, MSGBOX_DEFAULT
# 2061 "data/maps/ParcelRiver/scripts.pory"
	giveitem ITEM_NET_BALL, 3
# 2062 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_BOOK_DONE
	goto ParcelRiver_FordBoy_1


ParcelRiver_FindDepth::
# 2077 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DEPTH, ParcelRiver_FindDepth_4
ParcelRiver_FindDepth_3:
# 2081 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FindDepth_Text_1, MSGBOX_SIGN
ParcelRiver_FindDepth_1:
	end

ParcelRiver_FindDepth_2:
# 2078 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_FindDepth_Text_0, MSGBOX_SIGN
# 2079 "data/maps/ParcelRiver/scripts.pory"
	setflag FLAG_SKALD_Q_DEPTH_FOUND
	goto ParcelRiver_FindDepth_1

ParcelRiver_FindDepth_4:
# 2077 "data/maps/ParcelRiver/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_DEPTH_FOUND, ParcelRiver_FindDepth_2
	goto ParcelRiver_FindDepth_3


ParcelRiver_PairRace::
# 2087 "data/maps/ParcelRiver/scripts.pory"
	lock
# 2088 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelRiver_PairRace_2
# 2092 "data/maps/ParcelRiver/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WATERSHED_CERT, ParcelRiver_PairRace_3
# 2098 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_7, MSGBOX_DEFAULT
# 2099 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_8, MSGBOX_DEFAULT
# 2100 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_9, MSGBOX_DEFAULT
# 2101 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_10, MSGBOX_DEFAULT
ParcelRiver_PairRace_1:
# 2103 "data/maps/ParcelRiver/scripts.pory"
	release
	end

ParcelRiver_PairRace_2:
# 2089 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_0, MSGBOX_DEFAULT
# 2090 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_1, MSGBOX_DEFAULT
# 2091 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_2, MSGBOX_DEFAULT
	goto ParcelRiver_PairRace_1

ParcelRiver_PairRace_3:
# 2093 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_3, MSGBOX_DEFAULT
# 2094 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_4, MSGBOX_DEFAULT
# 2095 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_5, MSGBOX_DEFAULT
# 2096 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_PairRace_Text_6, MSGBOX_DEFAULT
	goto ParcelRiver_PairRace_1


ParcelRiver_Board1::
# 2110 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Board1_Text_0, MSGBOX_SIGN
	end


ParcelRiver_Board2::
# 2115 "data/maps/ParcelRiver/scripts.pory"
	msgbox ParcelRiver_Board2_Text_0, MSGBOX_SIGN
	end


ParcelRiver_FirstEntry_Text_0:
# 52 "data/maps/ParcelRiver/scripts.pory"
	.string "The land lifts and the trees thin. The\n"
	.string "water that fouled the basin runs out of\l"
	.string "here, clearer than below. Not clear.$"

ParcelRiver_FirstEntry_Text_1:
# 53 "data/maps/ParcelRiver/scripts.pory"
	.string "Market stalls up the street. Nets on a\n"
	.string "rail. A crop running green right down to\l"
	.string "the bank. {STR_VAR_1} takes the\l"
	.string "road ahead and doesn't hurry.$"

ParcelRiver_FirstEntry_Text_2:
# 54 "data/maps/ParcelRiver/scripts.pory"
	.string "HALE's note, folded in the kit:\n"
	.string "WATERSHED. LIVING SYSTEM, ACTIVE USE.\p"
	.string "Read the whole river before you judge\n"
	.string "any part of it.$"

ParcelRiver_ChannelCut_Text_0:
# 67 "data/maps/ParcelRiver/scripts.pory"
	.string "The straightened mile. In the notebook.$"

ParcelRiver_ChannelCut_Text_1:
# 71 "data/maps/ParcelRiver/scripts.pory"
	.string "Here the bank is cut straight as a rule,\n"
	.string "the bends dredged out, the slack water\l"
	.string "gone with them.\p"
	.string "Board stakes every fifty paces.\n"
	.string "Nothing slows down here anymore, and\l"
	.string "nothing stays. Written down.$"

ParcelRiver_DamRelic_Text_0:
# 82 "data/maps/ParcelRiver/scripts.pory"
	.string "The old dam. In the notebook.$"

ParcelRiver_DamRelic_Text_1:
# 86 "data/maps/ParcelRiver/scripts.pory"
	.string "A tangle of grey timber across the\n"
	.string "current, gapped in the middle. Not built.\l"
	.string "Chewed.\p"
	.string "The engineers who kept it are gone from\n"
	.string "this reach; nothing has patched it in\l"
	.string "years. The pond it held is a channel now.\l"
	.string "Written down.$"

ParcelRiver_RunoffStain_Text_0:
# 97 "data/maps/ParcelRiver/scripts.pory"
	.string "The bloom. In the notebook.$"

ParcelRiver_RunoffStain_Text_1:
# 101 "data/maps/ParcelRiver/scripts.pory"
	.string "Below the plots the water goes green\n"
	.string "and thick, a scum of it against the bank\l"
	.string "where the field drain comes in.\p"
	.string "It smells of fertiliser, sweet and\n"
	.string "wrong. Written down.$"

ParcelRiver_CleanReach_Text_0:
# 112 "data/maps/ParcelRiver/scripts.pory"
	.string "The clean reach. The baseline. In the\n"
	.string "notebook.$"

ParcelRiver_CleanReach_Text_1:
# 116 "data/maps/ParcelRiver/scripts.pory"
	.string "Above the town the river braids over\n"
	.string "gravel, cold and quick and clear to the\l"
	.string "bottom. Larvae under every stone. A\l"
	.string "SURSKIT on the eddy.\p"
	.string "This is what the whole river was. It is\n"
	.string "still here. Written down, and underlined.$"

ParcelRiver_IrrigationBoard_Text_0:
# 127 "data/maps/ParcelRiver/scripts.pory"
	.string "The Board's notice. In the notebook.$"

ParcelRiver_IrrigationBoard_Text_1:
# 131 "data/maps/ParcelRiver/scripts.pory"
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
	.string "HARLAND: ILEX signed you off, and I\n"
	.string "signed under you at the hearing. The\l"
	.string "river's in the review with the coast.\l"
	.string "Both or neither, I told them. They took\l"
	.string "both.$"

ParcelRiver_Harland_Text_1:
# 148 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: ILEX signed you off. Good.\p"
	.string "Stay the night. On the boat. The river's\n"
	.string "different in the dark, and you've only\l"
	.string "read it in daylight.$"

ParcelRiver_Harland_Text_2:
# 149 "data/maps/ParcelRiver/scripts.pory"
	.string "Stay the night?$"

ParcelRiver_Harland_Text_3:
# 151 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Offer stands.$"

ParcelRiver_Harland_Text_4:
# 157 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Hear that? That's the cut. Day\n"
	.string "and night, same note. Used to be the\l"
	.string "water had a dozen voices along here.$"

ParcelRiver_Harland_Text_5:
# 158 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: My father could tell the pools\n"
	.string "apart with his eyes shut. I can't. There\l"
	.string "aren't any.$"

ParcelRiver_Harland_Text_6:
# 159 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: The note on this boat comes\n"
	.string "due in spring. If the catch holds, I\l"
	.string "keep her. If it doesn't, a MEREHOLT\l"
	.string "outfit I've never met owns a boat my\l"
	.string "grandfather built.\p"
	.string "That's what 'relief' bought me. I'm not\n"
	.string "blaming you. I'm telling you the price.$"

ParcelRiver_Harland_Text_7:
# 160 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The upstream reach is still\n"
	.string "clean. ILEX says it can come back.$"

ParcelRiver_Harland_Text_8:
# 161 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Then write it so somebody with\n"
	.string "a pen believes it. I've tried the other\l"
	.string "way.\p"
	.string "Go to sleep, RANGER. River's not going\n"
	.string "anywhere. Yet.$"

ParcelRiver_Harland_Text_9:
# 165 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Morning. Coffee's bad. Catch\n"
	.string "was four. Go on, you've got a mountain\l"
	.string "to climb, I hear.$"

ParcelRiver_Harland_Text_10:
# 170 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Catch was four. Same as\n"
	.string "yesterday. Go on.$"

ParcelRiver_Harland_Text_11:
# 178 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Read me right when you write\n"
	.string "it.$"

ParcelRiver_Harland_Text_12:
# 182 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: You're the one with the\n"
	.string "notebook. Word came up the river ahead\l"
	.string "of you.\p"
	.string "Come to tell me the fishing's poor. As if\n"
	.string "I can't read my own water.$"

ParcelRiver_Harland_Text_13:
# 183 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: The catch is down because\n"
	.string "the river is. The cut. The bloom off the\l"
	.string "fields.$"

ParcelRiver_Harland_Text_14:
# 184 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: I KNOW why it's down. Knew\n"
	.string "before you could walk.\p"
	.string "My father fished this. His father\n"
	.string "helped build half that old dam your\l"
	.string "people keep photographing, back when\l"
	.string "building it was the work.$"

ParcelRiver_Harland_Text_15:
# 185 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: And the Board says straighten\n"
	.string "the cut and the floods stop taking my\l"
	.string "gear. The FOUNDATION carries the note\l"
	.string "on the boat so I keep working while it\l"
	.string "all gets sorted.\p"
	.string "So what is it you'd have me do? Tie up\n"
	.string "and starve on principle?$"

ParcelRiver_Harland_Text_16:
# 186 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: …Who holds the note on the\n"
	.string "boat?$"

ParcelRiver_Harland_Text_17:
# 187 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: A MEREHOLT outfit. Coastal\n"
	.string "lending.\p"
	.string "Same crest as the fertiliser sacks.\n"
	.string "Same crest as the Board. Hadn't set\l"
	.string "those side by side before. Don't care\l"
	.string "for how they line up.$"

ParcelRiver_Harland_Text_18:
# 188 "data/maps/ParcelRiver/scripts.pory"
	.string "HARLAND: Write your report, RANGER.\n"
	.string "Read me right when you do.\p"
	.string "I'm not your villain. I'm the man they'll\n"
	.string "send the bill to.$"

ParcelRiver_Farmer_Text_0:
# 199 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: ILEX's buffer strip, two rows,\n"
	.string "got written into the allocation. The\l"
	.string "fund paid. I didn't believe the fund. I\l"
	.string "believed it when the cheque cleared.\l"
	.string "The strip's going in. Two rows.$"

ParcelRiver_Farmer_Text_1:
# 204 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: ILEX put a buffer strip in her\n"
	.string "report. Two rows. Named a fund that'd\l"
	.string "pay for it.\p"
	.string "I'll believe the fund when it's in my\n"
	.string "hand. But she wrote it down. Nobody else\l"
	.string "has.$"

ParcelRiver_Farmer_Text_2:
# 208 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: Mind the rows, RANGER.\p"
	.string "They tell me my runoff greens the\n"
	.string "water. Likely true. They also tell me\l"
	.string "grow more for less, or sell to the\l"
	.string "FOUNDATION buyer at the FOUNDATION's\l"
	.string "number.$"

ParcelRiver_Farmer_Text_3:
# 209 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: I'd put a buffer strip along\n"
	.string "the bank tomorrow. Costs me two rows\l"
	.string "and a season's yield.\p"
	.string "You find me the one who'll pay for those\n"
	.string "two rows, and I'll dig it before you've\l"
	.string "walked home.$"

ParcelRiver_Ilex_Text_0:
# 219 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Stressed, not shifted, and the\n"
	.string "hearing kept the difference. I held it\l"
	.string "like a coal for you. Now you hold it for\l"
	.string "the next one.$"

ParcelRiver_Ilex_Text_1:
# 224 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Stressed, not shifted. Hold that\n"
	.string "difference like a coal.\p"
	.string "Most of the country you'll meet from\n"
	.string "here has already chosen. This river\l"
	.string "hasn't. Yet.$"

ParcelRiver_Ilex_Text_2:
# 232 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: The cut. The old dam. The bloom.\n"
	.string "The clean reach. The Board's sign. The\l"
	.string "man on the boat.\p"
	.string "Put a name on the river.$"

ParcelRiver_Ilex_Text_3:
# 234 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: STRESSED.\p"
	.string "The engineers are thinning. The cut\n"
	.string "took the slack water. The bloom is\l"
	.string "climbing. But the sensitive guild is\l"
	.string "still in that upstream reach. The web\l"
	.string "hasn't simplified yet.$"

ParcelRiver_Ilex_Text_4:
# 235 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Which means this is the rarest\n"
	.string "reading you will ever file. The one where\l"
	.string "doing the right thing in time still does\l"
	.string "something.$"

ParcelRiver_Ilex_Text_5:
# 236 "data/maps/ParcelRiver/scripts.pory"
	.string "{PLAYER}: So we intervene. Pull the\n"
	.string "cut, mend the dam…$"

ParcelRiver_Ilex_Text_6:
# 237 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Some of it. Not all of it, and not\n"
	.string "by signing the Board's plan.\p"
	.string "Relieve what's reversible: the buffer\n"
	.string "strip, the bloom, the fish passage.\l"
	.string "Refuse what isn't, dressed as relief:\l"
	.string "another straightened mile, another\l"
	.string "'flood control' that finishes the slack\l"
	.string "water.$"

ParcelRiver_Ilex_Text_7:
# 238 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: A stressed river doesn't need a\n"
	.string "hero. It needs someone who can tell the\l"
	.string "two apart and has the spine to say so\l"
	.string "out loud. You said so in the hall. I heard\l"
	.string "you.$"

ParcelRiver_Ilex_Text_8:
# 241 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Watershed Certification. HALE\n"
	.string "would make you walk back for it. I won't.\p"
	.string "You read the window. Now you keep it\n"
	.string "open.$"

ParcelRiver_Ilex_Text_9:
# 250 "data/maps/ParcelRiver/scripts.pory"
	.string "ILEX: Don't classify a river from one\n"
	.string "bend. Walk the bank: the cut, the old\l"
	.string "dam, the bloom off the fields, the clean\l"
	.string "water above the town. Read the Board's\l"
	.string "sign. Hear the man on the boat.\p"
	.string "Then come put a name to it.$"

ParcelRiver_Dorsey_Text_0:
# 260 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Phase 2 goes ahead. Six farms\n"
	.string "kept dry. You'd have done it too,\l"
	.string "RANGER, with a different word on the\l"
	.string "sign. I've stopped saying 'flood\l"
	.string "control'. I say 'the sluice'. It's the\l"
	.string "same sluice.$"

ParcelRiver_Dorsey_Text_1:
# 268 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: You've walked the bank. I can\n"
	.string "see it on your boots.\p"
	.string "Phase 2 is flood control, RANGER. Six\n"
	.string "farms lost gear last spring. The Board's\l"
	.string "plan stops that. Your ILEX calls it\l"
	.string "'finishing the slack water'. I call it\l"
	.string "keeping people's sheds dry.$"

ParcelRiver_Dorsey_Text_2:
# 269 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Come to the hall. There's a\n"
	.string "meeting. Say your piece in front of\l"
	.string "them, not behind my back. I'd rather\l"
	.string "lose an argument in public than win one\l"
	.string "in a report.$"

ParcelRiver_Dorsey_Text_3:
# 273 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: RANGER! Market day. Best day\n"
	.string "to see ELVSUND. Eggs, trout, the first\l"
	.string "greens.\p"
	.string "Trout's down this year. The Board has a\n"
	.string "plan for that. Phase 2. You'll have seen\l"
	.string "the notice.$"

ParcelRiver_Dorsey_Text_4:
# 274 "data/maps/ParcelRiver/scripts.pory"
	.string "DORSEY: Walk the bank first, then come\n"
	.string "and tell me what you think. I mean that.\l"
	.string "I grew up two valleys over. My father's\l"
	.string "fields flooded every spring and nobody\l"
	.string "came.\p"
	.string "I came.$"

ParcelRiver_Aide_Text_0:
# 282 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: Phase 2 consultation reopened by\n"
	.string "order. The councilman takes questions\l"
	.string "every market day now, not just when it\l"
	.string "suits. Form a line. There is one.$"

ParcelRiver_Aide_Text_1:
# 287 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: The councilman's up at HAUKFELL\n"
	.string "this week. The warming centre. He takes\l"
	.string "questions there now; nobody forms a\l"
	.string "line there either.\p"
	.string "Phase 2 consultation remains closed.\n"
	.string "I'm to say 'remains'.$"

ParcelRiver_Aide_Text_2:
# 291 "data/maps/ParcelRiver/scripts.pory"
	.string "AIDE: Phase 2 consultation is closed,\n"
	.string "but the councilman takes questions on\l"
	.string "market days. Form a line. There is no\l"
	.string "line.$"

ParcelRiver_VendorEggs_Text_0:
# 301 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: He came down the next morning\n"
	.string "with six jars and no apology. I took the\l"
	.string "jars. Buy something or move along,\l"
	.string "RANGER. I've a stall.$"

ParcelRiver_VendorEggs_Text_1:
# 306 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Asleep! Against a hive! I'll give\n"
	.string "him asleep.\p"
	.string "Here. Three jars. Don't pay. You've\n"
	.string "earned honey, which is more than most\l"
	.string "people manage.$"

ParcelRiver_VendorEggs_Text_2:
# 313 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Up the bank, above the plots,\n"
	.string "where the flowers still come. Six hives.\l"
	.string "If he's not there, he's in the river, and\l"
	.string "I'll want to know that too.$"

ParcelRiver_VendorEggs_Text_3:
# 318 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: The honey's from upstream,\n"
	.string "where the flowers still come. The\l"
	.string "beekeeper's not been down in a\l"
	.string "fortnight. His hives are on the bank\l"
	.string "above the plots.\p"
	.string "I can't leave the stall. You've legs.$"

ParcelRiver_VendorEggs_Text_4:
# 324 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Eggs, greens, honey. The honey's\n"
	.string "from upstream, where the flowers still\l"
	.string "come. More of them this year, the\l"
	.string "beekeeper says. He says it like he\l"
	.string "doesn't believe it.$"

ParcelRiver_VendorEggs_Text_5:
# 328 "data/maps/ParcelRiver/scripts.pory"
	.string "WOMAN: Eggs, greens, a jar of honey. The\n"
	.string "honey's from upstream, where the\l"
	.string "flowers still come. Buy something or\l"
	.string "move along, RANGER, I've a stall to mind.$"

ParcelRiver_VendorFish_Text_0:
# 336 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. Six trout today.\n"
	.string "Sold two to the FOUNDATION buyer at my\l"
	.string "number, not his. First time. He paid it.\l"
	.string "He looked surprised to be paying it.$"

ParcelRiver_VendorFish_Text_1:
# 341 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. Four trout\n"
	.string "today. I sold them to the FOUNDATION\l"
	.string "buyer at his number because nobody\l"
	.string "else was buying.\p"
	.string "Your ILEX wrote 'fish passage' in her\n"
	.string "report. Tell her I'll hold her to it.$"

ParcelRiver_VendorFish_Text_2:
# 345 "data/maps/ParcelRiver/scripts.pory"
	.string "MAN: HARLAND's cousin. I sell what he\n"
	.string "catches. There's less to sell every\l"
	.string "spring and more people asking why.\p"
	.string "I tell them the Board has a plan. The\n"
	.string "Board always has a plan.$"

ParcelRiver_OldMan_Text_0:
# 353 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: The pond above the town. The\n"
	.string "allocation gives the beaver reach a\l"
	.string "flow. Beavers don't read allocations,\l"
	.string "but water does. I'll walk up and look.\l"
	.string "Every day, till I see one.$"

ParcelRiver_OldMan_Text_1:
# 358 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: They say the ground up at\n"
	.string "HAUKFELL has let go. Houses carried\l"
	.string "down a slope by hand. I swam in a beaver\l"
	.string "pond as a boy; those people skated on\l"
	.string "ground that's water now.\p"
	.string "A ditch I can live beside. That, I\n"
	.string "couldn't.$"

ParcelRiver_OldMan_Text_2:
# 362 "data/maps/ParcelRiver/scripts.pory"
	.string "OLD MAN: There was a pond above the\n"
	.string "town. Beaver-built. We swam in it as\l"
	.string "boys. Then the trappers, then the\l"
	.string "Board.\p"
	.string "Now it's a ditch with a stake every\n"
	.string "fifty paces. Progress, they call it. I\l"
	.string "call it a ditch.$"

ParcelRiver_Girl_Text_0:
# 370 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman gave me a ribbon.\n"
	.string "PHASE 2, in blue. Mum put it in a drawer\l"
	.string "after the hearing. She said it's history\l"
	.string "now. I don't know what that means but\l"
	.string "it's still blue.$"

ParcelRiver_Girl_Text_1:
# 375 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman's up the mountain\n"
	.string "giving out blankets with the same crest\l"
	.string "as my ribbon!\p"
	.string "Mum says the blankets are real. She said\n"
	.string "it like the ribbon isn't. It IS. It's blue.$"

ParcelRiver_Girl_Text_2:
# 379 "data/maps/ParcelRiver/scripts.pory"
	.string "GIRL: The councilman gave me a ribbon!\n"
	.string "It says PHASE 2 on it. I don't know what\l"
	.string "that is but it's blue.$"

ParcelRiver_Boy_Text_0:
# 387 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Mum says I can swim below the\n"
	.string "plots again by summer. The green\l"
	.string "stuff's going. She says a ranger wrote\l"
	.string "it down and then men came and measured.\l"
	.string "I asked if writing works. She said\l"
	.string "'sometimes'.$"

ParcelRiver_Boy_Text_1:
# 392 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: A boy from HAUKFELL came down to\n"
	.string "stay with his aunt. He says the ground\l"
	.string "there goes soft and the trees lean.\p"
	.string "He says it like it's normal. I told him\n"
	.string "the green water's normal. He didn't\l"
	.string "believe me either.$"

ParcelRiver_Boy_Text_2:
# 396 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Don't swim below the plots. Mum\n"
	.string "says the water's got green stuff in it\l"
	.string "that makes your skin go funny. Above\l"
	.string "the town's fine. Above the town's\l"
	.string "freezing.$"

ParcelRiver_PondFisher_Text_0:
# 405 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: Still there. Two hands over\n"
	.string "theirs, red under white, and the river at\l"
	.string "neither. His was right in his year and\l"
	.string "theirs is right in theirs and the water's\l"
	.string "walked away from both.\p"
	.string "Take these. Catch something in the pool\n"
	.string "while there's a pool.$"

ParcelRiver_PondFisher_Text_1:
# 409 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: The pier at the pool. Red lead\n"
	.string "under the Board's white. Two hands up.$"

ParcelRiver_PondFisher_Text_2:
# 414 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: The pool below the ford had a\n"
	.string "depth mark painted on the pier, my\l"
	.string "grandfather's, in red lead. The Board\l"
	.string "painted their own over it when the\l"
	.string "gauge went in.\p"
	.string "Go and see if his is still under theirs.\n"
	.string "It'd be two hands higher, if it's there.$"

ParcelRiver_PondFisher_Text_3:
# 420 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: I fish the town pond. Stocked.\n"
	.string "The river's getting better below the\l"
	.string "plots, they say. I'll fish it when I\l"
	.string "believe them. Not yet. Soon, maybe.$"

ParcelRiver_PondFisher_Text_4:
# 425 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: Stocked pond, stocked fish. Up\n"
	.string "at HAUKFELL they've got a stocked\l"
	.string "house now, they tell me. A grant and a\l"
	.string "house in the valley.\p"
	.string "Same thing. Not the same. The fish know.\n"
	.string "The people know.$"

ParcelRiver_PondFisher_Text_5:
# 429 "data/maps/ParcelRiver/scripts.pory"
	.string "FISHER: I fish the town pond now.\n"
	.string "Stocked. It's not the same, but it's not\l"
	.string "green either.$"

ParcelRiver_AnglerTrainer_Text_0:
# 439 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years on this reach. You're\n"
	.string "the first one came up here to LOOK\l"
	.string "instead of promise. Means something.$"

ParcelRiver_AnglerTrainer_Text_1:
# 444 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: That's it! That's the one. My\n"
	.string "father's. Snagged it on the gravel\l"
	.string "above town thirty years back and never\l"
	.string "found it.\p"
	.string "You went and looked. Nobody looks.$"

ParcelRiver_AnglerTrainer_Text_2:
# 445 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Take the rod. The good one. I'm\n"
	.string "done with the big water; my knees say\l"
	.string "so.\p"
	.string "Somebody ought to be pulling SEAKING\n"
	.string "out of this river who'll write down how\l"
	.string "many.$"

ParcelRiver_AnglerTrainer_Text_3:
# 452 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Above the town, on the gravel,\n"
	.string "where the water's still clear. A brass\l"
	.string "lure. You'd see it if anyone would.$"

ParcelRiver_AnglerTrainer_Text_4:
# 458 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Forty years I worked this reach.\n"
	.string "Pulled SEAKING out by the armful, once.\p"
	.string "Now look at it. Battle me. I could use\n"
	.string "the distraction.$"

ParcelRiver_AnglerTrainer_Text_5:
# 459 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Hah. You've still got the eye for\n"
	.string "it. Wish the river did.$"

ParcelRiver_AnglerTrainer_Text_6:
# 460 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The Board swears the cut'll bring\n"
	.string "the fish back. The Board swears a lot of\l"
	.string "things.\p"
	.string "You've got the eye. Do an old man a\n"
	.string "kindness. There's a brass lure on the\l"
	.string "gravel above town, my father's, lost\l"
	.string "thirty years. If anyone can spot it in\l"
	.string "that clear water, it's you.$"

ParcelRiver_Lure_Text_0:
# 467 "data/maps/ParcelRiver/scripts.pory"
	.string "Something glints on the gravel under\n"
	.string "the clear water. A brass lure, green with\l"
	.string "age, the hook long gone.\p"
	.string "Fished out.$"

ParcelRiver_Lure_Text_1:
# 472 "data/maps/ParcelRiver/scripts.pory"
	.string "Clear water over clean gravel. You can\n"
	.string "count the stones.$"

ParcelRiver_Arna_Text_0:
# 480 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: The flower plots are the best\n"
	.string "picnic in the district. Shame about the\l"
	.string "smell off the river. Battle?$"

ParcelRiver_Arna_Text_1:
# 481 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Lovely. Now go away, I'm eating.$"

ParcelRiver_Arna_Text_2:
# 496 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: ROSELIA only grow above the town\n"
	.string "now. Below it, nothing with a scent.$"

ParcelRiver_Arna_R2_Text_0:
# 507 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_Arna_R2_Text_1:
# 509 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Arna_R2_Text_2:
# 513 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: …Again, then. Later.$"

ParcelRiver_Arna_R2_Text_3:
# 514 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Arna_R3_Text_0:
# 521 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRiver_Arna_R3_Text_1:
# 527 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Right. That's the whole of it.$"

ParcelRiver_Arna_R3_Text_2:
# 528 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Arna_R4_Text_0:
# 535 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelRiver_Arna_R4_Text_1:
# 541 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: Still yours.$"

ParcelRiver_Arna_R4_Text_2:
# 542 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Arna_R5_Text_0:
# 549 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Arna_R5_Text_1:
# 555 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's the one I wanted to see.$"

ParcelRiver_Arna_R5_Text_2:
# 556 "data/maps/ParcelRiver/scripts.pory"
	.string "ARNA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Botolv_Text_0:
# 562 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Camped on the high meadow a\n"
	.string "week. Seen the Board's boat go up and\l"
	.string "down six times. Seen you once. Battle.$"

ParcelRiver_Botolv_Text_1:
# 563 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Once was enough.$"

ParcelRiver_Botolv_Text_2:
# 578 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They're surveying the upstream\n"
	.string "reach. Stakes, every fifty paces.\l"
	.string "That's the clean bit. Why stake the\l"
	.string "clean bit?$"

ParcelRiver_Botolv_R2_Text_0:
# 589 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiver_Botolv_R2_Text_1:
# 591 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: No hurry. The water keeps.$"

ParcelRiver_Botolv_R2_Text_2:
# 595 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: That's the one I wanted to see.$"

ParcelRiver_Botolv_R2_Text_3:
# 596 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Botolv_R3_Text_0:
# 603 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelRiver_Botolv_R3_Text_1:
# 609 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: …Fair.$"

ParcelRiver_Botolv_R3_Text_2:
# 610 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Botolv_R4_Text_0:
# 617 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Botolv_R4_Text_1:
# 623 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Right. That's the whole of it.$"

ParcelRiver_Botolv_R4_Text_2:
# 624 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Botolv_R5_Text_0:
# 631 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Botolv_R5_Text_1:
# 638 "data/maps/ParcelRiver/scripts.pory"
	.string "BOTOLV: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Gudrun_Text_0:
# 644 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: ILLUMISE light up over the\n"
	.string "ponds at dusk. Fewer every summer. My\l"
	.string "mum says I imagine it. Battle me and tell\l"
	.string "me I don't.$"

ParcelRiver_Gudrun_Text_1:
# 645 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You don't think I imagine it.\n"
	.string "Good.$"

ParcelRiver_Gudrun_Text_2:
# 660 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Twelve last summer. Seven this\n"
	.string "one. I count. Somebody has to.$"

ParcelRiver_Gudrun_R2_Text_0:
# 671 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelRiver_Gudrun_R2_Text_1:
# 673 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Gudrun_R2_Text_2:
# 677 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: …Again, then. Later.$"

ParcelRiver_Gudrun_R2_Text_3:
# 678 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Gudrun_R3_Text_0:
# 685 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Gudrun_R3_Text_1:
# 691 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: …Fair.$"

ParcelRiver_Gudrun_R3_Text_2:
# 692 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Gudrun_R4_Text_0:
# 699 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_Gudrun_R4_Text_1:
# 705 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Right. That's the whole of it.$"

ParcelRiver_Gudrun_R4_Text_2:
# 706 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Gudrun_R5_Text_0:
# 713 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiver_Gudrun_R5_Text_1:
# 720 "data/maps/ParcelRiver/scripts.pory"
	.string "GUDRUN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Havard_Text_0:
# 726 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Pond's stocked by the Board.\n"
	.string "Twice a year. You catch one, you thank\l"
	.string "the Board. Battle?$"

ParcelRiver_Havard_Text_1:
# 727 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Don't thank me. Thank the\n"
	.string "Board.$"

ParcelRiver_Havard_Text_2:
# 742 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Stocked fish don't breed. You\n"
	.string "know that, right? They put them in, we\l"
	.string "take them out. That's not a river.\l"
	.string "That's a shop.$"

ParcelRiver_Havard_R2_Text_0:
# 753 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiver_Havard_R2_Text_1:
# 755 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Another time, then.$"

ParcelRiver_Havard_R2_Text_2:
# 759 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Still yours.$"

ParcelRiver_Havard_R2_Text_3:
# 760 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_Havard_R3_Text_0:
# 767 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Havard_R3_Text_1:
# 773 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: That's the one I wanted to see.$"

ParcelRiver_Havard_R3_Text_2:
# 774 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Havard_R4_Text_0:
# 781 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Havard_R4_Text_1:
# 787 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: …Fair.$"

ParcelRiver_Havard_R4_Text_2:
# 788 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Havard_R5_Text_0:
# 795 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Havard_R5_Text_1:
# 802 "data/maps/ParcelRiver/scripts.pory"
	.string "HAVARD: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Idun_Text_0:
# 808 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Cadet IDUN. ILEX has me counting\n"
	.string "larvae under stones. Spar first. Then\l"
	.string "I'll show you my count.$"

ParcelRiver_Idun_Text_1:
# 809 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Eighteen species above the town.\n"
	.string "Four below. That's my count.$"

ParcelRiver_Idun_Text_2:
# 824 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: ILEX says don't call it dead until\n"
	.string "you've turned every stone. I turned\l"
	.string "every stone. It's not dead. Yet.$"

ParcelRiver_Idun_R2_Text_0:
# 835 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelRiver_Idun_R2_Text_1:
# 837 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Another time, then.$"

ParcelRiver_Idun_R2_Text_2:
# 841 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: …Fair.$"

ParcelRiver_Idun_R2_Text_3:
# 842 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Idun_R3_Text_0:
# 849 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Idun_R3_Text_1:
# 855 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: …Again, then. Later.$"

ParcelRiver_Idun_R3_Text_2:
# 856 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Idun_R4_Text_0:
# 863 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelRiver_Idun_R4_Text_1:
# 869 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Right. That's the whole of it.$"

ParcelRiver_Idun_R4_Text_2:
# 870 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Idun_R5_Text_0:
# 877 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Idun_R5_Text_1:
# 884 "data/maps/ParcelRiver/scripts.pory"
	.string "IDUN: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Joar_Text_0:
# 890 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: The plots have the best bugs. The\n"
	.string "farmer lets me in if I don't tread the\l"
	.string "rows. You're treading the rows.$"

ParcelRiver_Joar_Text_1:
# 891 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Fine, tread them.$"

ParcelRiver_Joar_Text_2:
# 906 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: VOLBEAT in the plots, none in the\n"
	.string "fields below. The fields below get the\l"
	.string "sacks with the crest on.$"

ParcelRiver_Joar_R2_Text_0:
# 917 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Joar_R2_Text_1:
# 919 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Another time, then.$"

ParcelRiver_Joar_R2_Text_2:
# 923 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Noted. Properly, this time.$"

ParcelRiver_Joar_R2_Text_3:
# 924 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Joar_R3_Text_0:
# 931 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Joar_R3_Text_1:
# 937 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: That's the one I wanted to see.$"

ParcelRiver_Joar_R3_Text_2:
# 938 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Joar_R4_Text_0:
# 945 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Joar_R4_Text_1:
# 951 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Still yours.$"

ParcelRiver_Joar_R4_Text_2:
# 952 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Joar_R5_Text_0:
# 959 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Joar_R5_Text_1:
# 966 "data/maps/ParcelRiver/scripts.pory"
	.string "JOAR: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Kari_Text_0:
# 972 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The puddles by the depot are the\n"
	.string "only wet ground the Board hasn't\l"
	.string "metered. Yet. Battle!$"

ParcelRiver_Kari_Text_1:
# 973 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Metered that, didn't you.$"

ParcelRiver_Kari_Text_2:
# 988 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: The depot pays by weight. Nobody\n"
	.string "asks what's in the sacks they sell you\l"
	.string "for the weight.$"

ParcelRiver_Kari_R2_Text_0:
# 999 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Back this way? I've not been idle.\n"
	.string "Rematch?$"

ParcelRiver_Kari_R2_Text_1:
# 1001 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Fine. Same spot.$"

ParcelRiver_Kari_R2_Text_2:
# 1005 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: That's the one I wanted to see.$"

ParcelRiver_Kari_R2_Text_3:
# 1006 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Kari_R3_Text_0:
# 1013 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Kari_R3_Text_1:
# 1019 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Right. That's the whole of it.$"

ParcelRiver_Kari_R3_Text_2:
# 1020 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Kari_R4_Text_0:
# 1027 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Kari_R4_Text_1:
# 1034 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Kari_R5_Text_0:
# 1041 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_Kari_R5_Text_1:
# 1047 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: …Fair.$"

ParcelRiver_Kari_R5_Text_2:
# 1048 "data/maps/ParcelRiver/scripts.pory"
	.string "KARI: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Lars_Text_0:
# 1054 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The rocks by the pond are the\n"
	.string "only rocks for a mile. I'm a HIKER. I take\l"
	.string "what I can get. Battle.$"

ParcelRiver_Lars_Text_1:
# 1055 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Take that, then.$"

ParcelRiver_Lars_Text_2:
# 1070 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: The mountain's north, past the\n"
	.string "clean water. It's got proper rock. And a\l"
	.string "MEREHOLT office at the top of the pass,\l"
	.string "I hear.$"

ParcelRiver_Lars_R2_Text_0:
# 1081 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_Lars_R2_Text_1:
# 1083 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Suit yourself. I'm here.$"

ParcelRiver_Lars_R2_Text_2:
# 1087 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Still yours.$"

ParcelRiver_Lars_R2_Text_3:
# 1088 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Lars_R3_Text_0:
# 1095 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelRiver_Lars_R3_Text_1:
# 1101 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: …Fair.$"

ParcelRiver_Lars_R3_Text_2:
# 1102 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Lars_R4_Text_0:
# 1109 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Lars_R4_Text_1:
# 1116 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Lars_R5_Text_0:
# 1123 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_Lars_R5_Text_1:
# 1129 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's the one I wanted to see.$"

ParcelRiver_Lars_R5_Text_2:
# 1130 "data/maps/ParcelRiver/scripts.pory"
	.string "LARS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Marit_Text_0:
# 1136 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: I live on the farm. The field\n"
	.string "drain runs under my window. I know what\l"
	.string "the river smells like at night. Battle?$"

ParcelRiver_Marit_Text_1:
# 1137 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Smells better than losing.$"

ParcelRiver_Marit_Text_2:
# 1152 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Dad would dig the buffer strip\n"
	.string "tomorrow. Two rows. Nobody's paying for\l"
	.string "two rows.$"

ParcelRiver_Marit_R2_Text_0:
# 1163 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiver_Marit_R2_Text_1:
# 1165 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Marit_R2_Text_2:
# 1169 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's the one I wanted to see.$"

ParcelRiver_Marit_R2_Text_3:
# 1170 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Marit_R3_Text_0:
# 1177 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Marit_R3_Text_1:
# 1183 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Noted. Properly, this time.$"

ParcelRiver_Marit_R3_Text_2:
# 1184 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Marit_R4_Text_0:
# 1191 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Marit_R4_Text_1:
# 1197 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: Still yours.$"

ParcelRiver_Marit_R4_Text_2:
# 1198 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Marit_R5_Text_0:
# 1205 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_Marit_R5_Text_1:
# 1211 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: …Again, then. Later.$"

ParcelRiver_Marit_R5_Text_2:
# 1212 "data/maps/ParcelRiver/scripts.pory"
	.string "MARIT: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_Njal_Text_0:
# 1218 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: ELECTRIKE from the power line\n"
	.string "cut, north of here. Fastest thing in the\l"
	.string "valley. Battle!$"

ParcelRiver_Njal_Text_1:
# 1219 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Fast, not strong. Noted.$"

ParcelRiver_Njal_Text_2:
# 1234 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: They strung the line to the Board\n"
	.string "office last year. For the meters. The\l"
	.string "meters need power. The farms didn't.$"

ParcelRiver_Njal_R2_Text_0:
# 1245 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_Njal_R2_Text_1:
# 1247 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Another time, then.$"

ParcelRiver_Njal_R2_Text_2:
# 1251 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Noted. Properly, this time.$"

ParcelRiver_Njal_R2_Text_3:
# 1252 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Njal_R3_Text_0:
# 1259 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Njal_R3_Text_1:
# 1265 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Still yours.$"

ParcelRiver_Njal_R3_Text_2:
# 1266 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Njal_R4_Text_0:
# 1273 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRiver_Njal_R4_Text_1:
# 1279 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: …Again, then. Later.$"

ParcelRiver_Njal_R4_Text_2:
# 1280 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Njal_R5_Text_0:
# 1287 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Njal_R5_Text_1:
# 1293 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: …Fair.$"

ParcelRiver_Njal_R5_Text_2:
# 1294 "data/maps/ParcelRiver/scripts.pory"
	.string "NJAL: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelRiver_Ottar_Text_0:
# 1300 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: One SEAKING. Took me all spring.\n"
	.string "I'm not sharing the bank. Battle.$"

ParcelRiver_Ottar_Text_1:
# 1301 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Share, then.$"

ParcelRiver_Ottar_Text_2:
# 1316 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: DELL says the river used to give\n"
	.string "SEAKING by the armful. I believe him.\l"
	.string "I've seen the photographs.$"

ParcelRiver_Ottar_R2_Text_0:
# 1327 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Ottar_R2_Text_1:
# 1329 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Ottar_R2_Text_2:
# 1333 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: …Fair.$"

ParcelRiver_Ottar_R2_Text_3:
# 1334 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_Ottar_R3_Text_0:
# 1341 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Ottar_R3_Text_1:
# 1347 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: That's the one I wanted to see.$"

ParcelRiver_Ottar_R3_Text_2:
# 1348 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Ottar_R4_Text_0:
# 1355 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Ottar_R4_Text_1:
# 1361 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Still yours.$"

ParcelRiver_Ottar_R4_Text_2:
# 1362 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_Ottar_R5_Text_0:
# 1369 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: I heard what you filed. Then\n"
	.string "show me what filed it?$"

ParcelRiver_Ottar_R5_Text_1:
# 1375 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: …Again, then. Later.$"

ParcelRiver_Ottar_R5_Text_2:
# 1376 "data/maps/ParcelRiver/scripts.pory"
	.string "OTTAR: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_Paal_Text_0:
# 1382 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: The bank's a highway. Board\n"
	.string "boats, Corps cadets, now you. Battle,\l"
	.string "and then walk somewhere else.$"

ParcelRiver_Paal_Text_1:
# 1383 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Walk wherever you like.$"

ParcelRiver_Paal_Text_2:
# 1398 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: There's a man on a boat down by\n"
	.string "the plots who talks to nobody. HARLAND.\l"
	.string "He talked to a RANGER once. It didn't go\l"
	.string "well, I hear.$"

ParcelRiver_Paal_R2_Text_0:
# 1409 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelRiver_Paal_R2_Text_1:
# 1411 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Another time, then.$"

ParcelRiver_Paal_R2_Text_2:
# 1415 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: That's the one I wanted to see.$"

ParcelRiver_Paal_R2_Text_3:
# 1416 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Paal_R3_Text_0:
# 1423 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_Paal_R3_Text_1:
# 1429 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: …Again, then. Later.$"

ParcelRiver_Paal_R3_Text_2:
# 1430 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Paal_R4_Text_0:
# 1437 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelRiver_Paal_R4_Text_1:
# 1444 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Paal_R5_Text_0:
# 1451 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Paal_R5_Text_1:
# 1458 "data/maps/ParcelRiver/scripts.pory"
	.string "PAAL: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_Ragna_Text_0:
# 1464 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The river's thoughts are loud\n"
	.string "here. Fast. Angry. Below the cut it\l"
	.string "stops thinking at all. Battle me.$"

ParcelRiver_Ragna_Text_1:
# 1465 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Your thoughts are loud too.$"

ParcelRiver_Ragna_Text_2:
# 1480 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: The councilman's thoughts are\n"
	.string "the loudest in the valley. He believes\l"
	.string "every word. That's the strange part.$"

ParcelRiver_Ragna_R2_Text_0:
# 1491 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelRiver_Ragna_R2_Text_1:
# 1493 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Suit yourself. I'm here.$"

ParcelRiver_Ragna_R2_Text_2:
# 1497 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: …Again, then. Later.$"

ParcelRiver_Ragna_R2_Text_3:
# 1498 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Ragna_R3_Text_0:
# 1505 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelRiver_Ragna_R3_Text_1:
# 1511 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: …Fair.$"

ParcelRiver_Ragna_R3_Text_2:
# 1512 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_Ragna_R4_Text_0:
# 1519 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelRiver_Ragna_R4_Text_1:
# 1525 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Noted. Properly, this time.$"

ParcelRiver_Ragna_R4_Text_2:
# 1526 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_Ragna_R5_Text_0:
# 1533 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelRiver_Ragna_R5_Text_1:
# 1540 "data/maps/ParcelRiver/scripts.pory"
	.string "RAGNA: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_Sigurd_Text_0:
# 1546 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Cadet SIGURD, on the depot\n"
	.string "watch. HALE wants to know what goes in\l"
	.string "and what comes out. Spar.$"

ParcelRiver_Sigurd_Text_1:
# 1547 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Good. The sacks go in. The\n"
	.string "money comes out. That's my report.$"

ParcelRiver_Sigurd_Text_2:
# 1562 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: The depot buys at the\n"
	.string "FOUNDATION's number and sells the\l"
	.string "sacks at the FOUNDATION's number. Both\l"
	.string "numbers are the same man's.$"

ParcelRiver_Sigurd_R2_Text_0:
# 1573 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelRiver_Sigurd_R2_Text_1:
# 1575 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelRiver_Sigurd_R2_Text_2:
# 1579 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Noted. Properly, this time.$"

ParcelRiver_Sigurd_R2_Text_3:
# 1580 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_Sigurd_R3_Text_0:
# 1587 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Three stamps, then five. Fine.\n"
	.string "Me next?$"

ParcelRiver_Sigurd_R3_Text_1:
# 1593 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Still yours.$"

ParcelRiver_Sigurd_R3_Text_2:
# 1594 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_Sigurd_R4_Text_0:
# 1601 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_Sigurd_R4_Text_1:
# 1607 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: …Again, then. Later.$"

ParcelRiver_Sigurd_R4_Text_2:
# 1608 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: When it's all filed, come and\n"
	.string "find me. Once more.$"

ParcelRiver_Sigurd_R5_Text_0:
# 1615 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_Sigurd_R5_Text_1:
# 1621 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: …Fair.$"

ParcelRiver_Sigurd_R5_Text_2:
# 1622 "data/maps/ParcelRiver/scripts.pory"
	.string "SIGURD: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelRiver_SignTown_Text_0:
# 1634 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND\p"
	.string "Market Thursdays. Boats moor at the\n"
	.string "east bank. The Water Board office is\l"
	.string "open to ratepayers.$"

ParcelRiver_SignBoard_Text_0:
# 1638 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND WATER BOARD -- NOTICE\p"
	.string "Channel Improvement, Phase 2: works\n"
	.string "commence upstream of the town after\l"
	.string "the harvest. Consultation closed.\l"
	.string "Objections to the Board office. The\l"
	.string "office is closed for objections.$"

ParcelRiver_SignMarket_Text_0:
# 1642 "data/maps/ParcelRiver/scripts.pory"
	.string "MARKET DAY\p"
	.string "Eggs. Greens. Honey. Trout (limited).\n"
	.string "Councilman DORSEY will take questions\l"
	.string "at noon.$"

ParcelRiver_T_Aud_Text_0:
# 1649 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: The high meadow's the last place\n"
	.string "the flowers come up on their own. Battle\l"
	.string "me among them.$"

ParcelRiver_T_Aud_Text_1:
# 1650 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Among them, beaten.$"

ParcelRiver_T_Aud_Text_2:
# 1665 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Below the town they spray. Above\n"
	.string "the town they don't. You can draw the\l"
	.string "line with your nose.$"

ParcelRiver_T_Aud_R2_Text_0:
# 1676 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelRiver_T_Aud_R2_Text_1:
# 1678 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Another time, then.$"

ParcelRiver_T_Aud_R2_Text_2:
# 1682 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: …Fair.$"

ParcelRiver_T_Aud_R2_Text_3:
# 1683 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelRiver_T_Aud_R3_Text_0:
# 1690 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelRiver_T_Aud_R3_Text_1:
# 1696 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Right. That's the whole of it.$"

ParcelRiver_T_Aud_R3_Text_2:
# 1697 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_T_Aud_R4_Text_0:
# 1704 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelRiver_T_Aud_R4_Text_1:
# 1710 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: That's the one I wanted to see.$"

ParcelRiver_T_Aud_R4_Text_2:
# 1711 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_T_Aud_R5_Text_0:
# 1718 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelRiver_T_Aud_R5_Text_1:
# 1724 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: …Again, then. Later.$"

ParcelRiver_T_Aud_R5_Text_2:
# 1725 "data/maps/ParcelRiver/scripts.pory"
	.string "AUD: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelRiver_T_Espen_Text_0:
# 1731 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: ELECTRIKE from the power line\n"
	.string "cut. Fastest thing on the farm. Battle!$"

ParcelRiver_T_Espen_Text_1:
# 1732 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Fast. Not fast enough.$"

ParcelRiver_T_Espen_Text_2:
# 1747 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: The line goes to the Board\n"
	.string "office for the meters. The farm got\l"
	.string "nothing off it. Dad says we got the\l"
	.string "view.$"

ParcelRiver_T_Espen_R2_Text_0:
# 1758 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_T_Espen_R2_Text_1:
# 1760 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Another time, then.$"

ParcelRiver_T_Espen_R2_Text_2:
# 1764 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Noted. Properly, this time.$"

ParcelRiver_T_Espen_R2_Text_3:
# 1765 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelRiver_T_Espen_R3_Text_0:
# 1772 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelRiver_T_Espen_R3_Text_1:
# 1778 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Right. That's the whole of it.$"

ParcelRiver_T_Espen_R3_Text_2:
# 1779 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: One more in me. After the high\n"
	.string "ground.$"

ParcelRiver_T_Espen_R4_Text_0:
# 1786 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_T_Espen_R4_Text_1:
# 1792 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Still yours.$"

ParcelRiver_T_Espen_R4_Text_2:
# 1793 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelRiver_T_Espen_R5_Text_0:
# 1800 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelRiver_T_Espen_R5_Text_1:
# 1807 "data/maps/ParcelRiver/scripts.pory"
	.string "ESPEN: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_T_Trygve_Text_0:
# 1813 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: One WHISCASH, out of the clean\n"
	.string "reach. Took three seasons. Battle it.$"

ParcelRiver_T_Trygve_Text_1:
# 1814 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three seasons, and that.$"

ParcelRiver_T_Trygve_Text_2:
# 1829 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They want to put the straight\n"
	.string "channel through the clean reach. Phase\l"
	.string "2. Where do they think the WHISCASH will\l"
	.string "go?$"

ParcelRiver_T_Trygve_R2_Text_0:
# 1840 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I kept the team up for this.\n"
	.string "Again?$"

ParcelRiver_T_Trygve_R2_Text_1:
# 1842 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Suit yourself. I'm here.$"

ParcelRiver_T_Trygve_R2_Text_2:
# 1846 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Noted. Properly, this time.$"

ParcelRiver_T_Trygve_R2_Text_3:
# 1847 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelRiver_T_Trygve_R3_Text_0:
# 1854 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I moved the whole team on.\n"
	.string "Let's see if you have?$"

ParcelRiver_T_Trygve_R3_Text_1:
# 1860 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: …Fair.$"

ParcelRiver_T_Trygve_R3_Text_2:
# 1861 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelRiver_T_Trygve_R4_Text_0:
# 1868 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelRiver_T_Trygve_R4_Text_1:
# 1875 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelRiver_T_Trygve_R5_Text_0:
# 1882 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelRiver_T_Trygve_R5_Text_1:
# 1888 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Right. That's the whole of it.$"

ParcelRiver_T_Trygve_R5_Text_2:
# 1889 "data/maps/ParcelRiver/scripts.pory"
	.string "TRYGVE: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelRiver_BeaverStump_Text_0:
# 1898 "data/maps/ParcelRiver/scripts.pory"
	.string "A sapling stump on the bank, gnawed to\n"
	.string "a point. The chips at its foot are pale.\l"
	.string "Fresh.\p"
	.string "Something is building above the town\n"
	.string "again. Written down, and the old man's\l"
	.string "name beside it.$"

ParcelRiver_BeaverStump_Text_1:
# 1903 "data/maps/ParcelRiver/scripts.pory"
	.string "A sapling stump on the bank, gnawed to\n"
	.string "a point.$"

ParcelRiver_PerrinScene_Text_0:
# 1916 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: WREN!$"

ParcelRiver_PerrinScene_Text_1:
# 1920 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: DORSEY introduced me at the\n"
	.string "market! 'Our newest liaison.' LIAISON,\l"
	.string "WREN.\p"
	.string "Phase 2's going ahead, you know. Flood\n"
	.string "control. You can't argue with dry sheds.\l"
	.string "Battle!$"

ParcelRiver_PerrinScene_Text_2:
# 1921 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: Okay. You CAN argue with it.$"

ParcelRiver_PerrinScene_Text_3:
# 1922 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: I took the desk. Part time's\n"
	.string "full time now. It's good work. It IS.\p"
	.string "HOLLIS asked about you. She asks about\n"
	.string "everyone. It's her best trick.$"

ParcelRiver_PerrinTalk_Text_0:
# 1935 "data/maps/ParcelRiver/scripts.pory"
	.string "PERRIN: Hang on, I'm coming to you.$"

ParcelRiver_Epilogue_Text_0:
# 1946 "data/maps/ParcelRiver/scripts.pory"
	.string "ELVSUND. Market day. The WATER BOARD\n"
	.string "notice on the pole has six names under\l"
	.string "it, and the sentence they argued about\l"
	.string "for two hours is in.\p"
	.string "Read the whole river before you judge\n"
	.string "any part of it. SLUICE keeps the gate.\l"
	.string "The crossing is still the crossing.$"

ParcelRiver_Epilogue_Text_1:
# 1947 "data/maps/ParcelRiver/scripts.pory"
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
# 1966 "data/maps/ParcelRiver/scripts.pory"
	.string "Six hives on the bank, humming. The\n"
	.string "beekeeper is asleep against the end\l"
	.string "one with a smoker in his lap, perfectly\l"
	.string "well.\p"
	.string "The flowers are out all along the bank.$"

ParcelRiver_SurveyStake_Text_0:
# 1973 "data/maps/ParcelRiver/scripts.pory"
	.string "A survey stake at the edge of the\n"
	.string "market ground, red cloth at the top, a\l"
	.string "child's blue ribbon tied under it by\l"
	.string "somebody who thought it needed\l"
	.string "company.$"

ParcelRiver_SurveyStake_Text_1:
# 1978 "data/maps/ParcelRiver/scripts.pory"
	.string "Second reading. Two boards on the\n"
	.string "gauge, old mark and new. The reach\l"
	.string "above the town still runs slack; the\l"
	.string "straightened mile was not cut.\p"
	.string "A SEAKING went up at first light, DELL\n"
	.string "says. DELL says it every morning. You\l"
	.string "write REPORTED, and the date, which is\l"
	.string "what the Survey does with hope.$"

ParcelRiver_PairMeter_Text_0:
# 1989 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: The Board's publishing both\n"
	.string "readings now. Old datum and new. Two\l"
	.string "columns.$"

ParcelRiver_PairMeter_Text_1:
# 1990 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Two columns and one river. The\n"
	.string "wet column and the honest one.$"

ParcelRiver_PairMeter_Text_2:
# 1991 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: The honest one says my\n"
	.string "allocation is a quarter of what it was.\l"
	.string "On paper. It was always a quarter in the\l"
	.string "field.$"

ParcelRiver_PairMeter_Text_3:
# 1992 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Paper's catching up with the\n"
	.string "field. Give it another forty years.$"

ParcelRiver_PairMeter_Text_4:
# 1994 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Forty-one of us signed. The\n"
	.string "reply was one paragraph. I've framed\l"
	.string "the paragraph.$"

ParcelRiver_PairMeter_Text_5:
# 1995 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: The ranger read it. Twice. Then\n"
	.string "asked SLUICE which year the datum was\l"
	.string "set.$"

ParcelRiver_PairMeter_Text_6:
# 1996 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: And?$"

ParcelRiver_PairMeter_Text_7:
# 1997 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: And SLUICE answered. In public.\n"
	.string "First Board officer to answer anything\l"
	.string "in public since the gauge went in.$"

ParcelRiver_PairMeter_Text_8:
# 1999 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: Fourteen plots metered. The\n"
	.string "meter runs when the water runs. The\l"
	.string "water runs when the Board says.$"

ParcelRiver_PairMeter_Text_9:
# 2000 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: My wheel turned for free for\n"
	.string "sixty years and now it's a 'draw'. A draw.\l"
	.string "Like a lottery.$"

ParcelRiver_PairMeter_Text_10:
# 2001 "data/maps/ParcelRiver/scripts.pory"
	.string "FARMER: You're ahead of me. They've\n"
	.string "called mine an 'allocation'.$"

ParcelRiver_PairMeter_Text_11:
# 2002 "data/maps/ParcelRiver/scripts.pory"
	.string "MILLER: Longer word. More expensive.$"

ParcelRiver_PairFord_Text_0:
# 2011 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: OTTAR let the SEAKING go. The\n"
	.string "last one. Off the ford, at first light,\l"
	.string "nobody watching but me.$"

ParcelRiver_PairFord_Text_1:
# 2012 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: Why would he do that?$"

ParcelRiver_PairFord_Text_2:
# 2013 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The ranger's count is in the\n"
	.string "record. One fish. He said one fish in a\l"
	.string "record is a prisoner. One fish in a river\l"
	.string "is a chance.$"

ParcelRiver_PairFord_Text_3:
# 2014 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: Is it?$"

ParcelRiver_PairFord_Text_4:
# 2015 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Ask me in forty years. Write down\n"
	.string "that I said that.$"

ParcelRiver_PairFord_Text_5:
# 2017 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: The ranger stood in the\n"
	.string "shallows for an hour. Just counting.$"

ParcelRiver_PairFord_Text_6:
# 2018 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Counting what? There's nothing\n"
	.string "to count.$"

ParcelRiver_PairFord_Text_7:
# 2019 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: That's what they were\n"
	.string "counting. They wrote down nothing, with\l"
	.string "the date. Said nothing with a date is a\l"
	.string "number.$"

ParcelRiver_PairFord_Text_8:
# 2020 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: …Your great-grandfather would\n"
	.string "have liked that. He never wrote\l"
	.string "anything down and it's all gone with him.$"

ParcelRiver_PairFord_Text_9:
# 2022 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: You said the SEAKING\n"
	.string "came up to the ford. In red.$"

ParcelRiver_PairFord_Text_10:
# 2023 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: Every spring. You could walk\n"
	.string "across on them, my father said. He said\l"
	.string "a lot of things.$"

ParcelRiver_PairFord_Text_11:
# 2024 "data/maps/ParcelRiver/scripts.pory"
	.string "GRANDDAUGHTER: Was that one true?$"

ParcelRiver_PairFord_Text_12:
# 2025 "data/maps/ParcelRiver/scripts.pory"
	.string "DELL: The ford part. The walking part\n"
	.string "was my father.$"

ParcelRiver_Stringer_Text_0:
# 2037 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The Board publishes two columns\n"
	.string "now. Old datum, new datum. I ran them\l"
	.string "side by side without a word of comment.\p"
	.string "Best thing I never wrote. The miller\n"
	.string "framed it next to the Board's\l"
	.string "one-paragraph reply. He's got a wall\l"
	.string "going.$"

ParcelRiver_Stringer_Text_1:
# 2040 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The meeting ran as half a page.\n"
	.string "Including the ranger who stood up at\l"
	.string "the back and said refuse the\l"
	.string "straightened mile.\p"
	.string "I quoted you from memory. It was close.\n"
	.string "If it wasn't, you should have given me\l"
	.string "the sentence at Reedmere.$"

ParcelRiver_Stringer_Text_2:
# 2042 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The meeting ran as half a page.\n"
	.string "The ranger stood at the back and wrote.\l"
	.string "I put that in.\p"
	.string "Standing at the back writing is a\n"
	.string "position too. ILEX has held it for\l"
	.string "thirty years. Look where it's got the\l"
	.string "Board.$"

ParcelRiver_Stringer_Text_3:
# 2045 "data/maps/ParcelRiver/scripts.pory"
	.string "INGER: The water meeting's tonight.\n"
	.string "Forty-one ratepayers and a Board that\l"
	.string "won't name a year.\p"
	.string "I asked SLUICE which year. SLUICE said\n"
	.string "ask the Board. I asked the Board. The\l"
	.string "Board doesn't comment on individual\l"
	.string "readings. I've written that sentence so\l"
	.string "often I could set it in type myself.$"

ParcelRiver_FordBoy_Text_0:
# 2057 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: I'm keeping my own book now. One\n"
	.string "line a week. DAD says that's how it\l"
	.string "starts.$"

ParcelRiver_FordBoy_Text_1:
# 2060 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: Eleven years NORMAL and then they\n"
	.string "moved the mark. So the floods didn't\l"
	.string "stop. The book stopped.\p"
	.string "DAD'll want to know he was right. He\n"
	.string "won't like it. Here, for telling me\l"
	.string "straight.$"

ParcelRiver_FordBoy_Text_2:
# 2064 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: The gauge book. In the Board\n"
	.string "office, on the counter. The kept one.$"

ParcelRiver_FordBoy_Text_3:
# 2067 "data/maps/ParcelRiver/scripts.pory"
	.string "BOY: The Board's book has the real river\n"
	.string "in it. DAD says. He says there's two\l"
	.string "books, the one they show and the one\l"
	.string "they keep.\p"
	.string "You can go in the office. Read the kept\n"
	.string "one and tell me which year the floods\l"
	.string "stopped.$"

ParcelRiver_FindDepth_Text_0:
# 2078 "data/maps/ParcelRiver/scripts.pory"
	.string "The pier at the pool. The Board's depth\n"
	.string "mark in white, a date beside it. Under\l"
	.string "the white, where it has flaked, a line of\l"
	.string "old red lead two hands higher, and no\l"
	.string "date, because a man who paints his own\l"
	.string "mark does not think to date it.\p"
	.string "The water is below both marks. By a\n"
	.string "hand. By two.$"

ParcelRiver_FindDepth_Text_1:
# 2081 "data/maps/ParcelRiver/scripts.pory"
	.string "The pier at the pool. White over red, the\n"
	.string "river below both. Someone has scraped\l"
	.string "the white back a little so the red\l"
	.string "shows.$"

ParcelRiver_PairRace_Text_0:
# 2089 "data/maps/ParcelRiver/scripts.pory"
	.string "BEEKEEPER: Seven hives. One swarmed\n"
	.string "and stayed. The bank flowered for three\l"
	.string "weeks under the new allocation.$"

ParcelRiver_PairRace_Text_1:
# 2090 "data/maps/ParcelRiver/scripts.pory"
	.string "STUDENT: Three weeks is not a trend.$"

ParcelRiver_PairRace_Text_2:
# 2091 "data/maps/ParcelRiver/scripts.pory"
	.string "BEEKEEPER: Three weeks is honey. Write\n"
	.string "down the honey, then the trend. In that\l"
	.string "order, or you'll starve while you're\l"
	.string "being careful.$"

ParcelRiver_PairRace_Text_3:
# 2093 "data/maps/ParcelRiver/scripts.pory"
	.string "STUDENT: The ranger counted the hives\n"
	.string "with me. Wrote six, and the dates the\l"
	.string "flowers came.$"

ParcelRiver_PairRace_Text_4:
# 2094 "data/maps/ParcelRiver/scripts.pory"
	.string "BEEKEEPER: Six hives in a notebook.\n"
	.string "Make a difference, will it?$"

ParcelRiver_PairRace_Text_5:
# 2095 "data/maps/ParcelRiver/scripts.pory"
	.string "STUDENT: It made a difference to the\n"
	.string "farmer at the meeting. He read it out.\l"
	.string "Six hives, he said, and a Board that\l"
	.string "can't name a year.$"

ParcelRiver_PairRace_Text_6:
# 2096 "data/maps/ParcelRiver/scripts.pory"
	.string "BEEKEEPER: …Count them again next\n"
	.string "spring. In the same notebook, if you can\l"
	.string "get it.$"

ParcelRiver_PairRace_Text_7:
# 2098 "data/maps/ParcelRiver/scripts.pory"
	.string "BEEKEEPER: The hives are down a third.\n"
	.string "Flowers along the bank came and went in\l"
	.string "a week.$"

ParcelRiver_PairRace_Text_8:
# 2099 "data/maps/ParcelRiver/scripts.pory"
	.string "STUDENT: The Board's allocation\n"
	.string "starves the bank in spring. Then floods\l"
	.string "it in summer when nothing needs it.$"

ParcelRiver_PairRace_Text_9:
# 2100 "data/maps/ParcelRiver/scripts.pory"
	.string "BEEKEEPER: You've been reading.$"

ParcelRiver_PairRace_Text_10:
# 2101 "data/maps/ParcelRiver/scripts.pory"
	.string "STUDENT: I've been counting bees.\n"
	.string "Reading's what you do after.$"

ParcelRiver_Board1_Text_0:
# 2110 "data/maps/ParcelRiver/scripts.pory"
	.string "A SURVEY BOARD on the mill wall.\n"
	.string "ELVSUND. Clean-water fish for clean\l"
	.string "water: GOLDEEN and SEAKING in the\l"
	.string "riffles, BARBOACH in the gravel.\p"
	.string "The board gives the runoff reading from\n"
	.string "the fields above the town beside the\l"
	.string "fish count from the pool below it. They\l"
	.string "move together, a month apart. The\l"
	.string "fields are upstream of everything.$"

ParcelRiver_Board2_Text_0:
# 2115 "data/maps/ParcelRiver/scripts.pory"
	.string "A SURVEY BOARD by the market bridge.\n"
	.string "The river was straightened below the\l"
	.string "town for the fields. A straight river is\l"
	.string "faster, deeper, and empties its gravel,\l"
	.string "and the SEAKING need the gravel.\p"
	.string "The board shows the old bends as a\n"
	.string "dotted line over the new channel. The\l"
	.string "dotted line is where the fish were.$"
