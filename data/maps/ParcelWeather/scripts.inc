ParcelWeather_MapScripts::
# 11 "data/maps/ParcelWeather/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelWeather_SetVisited
# 12 "data/maps/ParcelWeather/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/ParcelWeather/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelWeather_FirstEntry
	.2byte 0


ParcelWeather_SetVisited::
# 18 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_VISITED_PARCEL_WEATHER
	end


ParcelWeather_FirstEntry::
# 23 "data/maps/ParcelWeather/scripts.pory"
	setvar VAR_TEMP_1, 1
# 24 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeather_FirstEntry_2
# 27 "data/maps/ParcelWeather/scripts.pory"
	lockall
# 28 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_1, MSGBOX_DEFAULT
# 30 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_ARRIVAL
# 31 "data/maps/ParcelWeather/scripts.pory"
	releaseall
	end

ParcelWeather_FirstEntry_2:
	end


ParcelWeather_Rain::
# 37 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RAIN, ParcelWeather_Rain_Text_0, ParcelWeather_Rain_Text_1, ParcelWeather_Rain_FirstWin
# 41 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 42 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Rain_3
ParcelWeather_Rain_1:
# 45 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Rain_8
ParcelWeather_Rain_6:
# 48 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Rain_13
ParcelWeather_Rain_11:
# 51 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Rain_18
ParcelWeather_Rain_16:
# 54 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Rain_2:
# 43 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R2
	goto ParcelWeather_Rain_1

ParcelWeather_Rain_3:
# 42 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R2
	goto_if 0, ParcelWeather_Rain_2
	goto ParcelWeather_Rain_1

ParcelWeather_Rain_7:
# 46 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R3
	goto ParcelWeather_Rain_6

ParcelWeather_Rain_8:
# 45 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R3
	goto_if 0, ParcelWeather_Rain_7
	goto ParcelWeather_Rain_6

ParcelWeather_Rain_12:
# 49 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R4
	goto ParcelWeather_Rain_11

ParcelWeather_Rain_13:
# 48 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R4
	goto_if 0, ParcelWeather_Rain_12
	goto ParcelWeather_Rain_11

ParcelWeather_Rain_17:
# 52 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R5
	goto ParcelWeather_Rain_16

ParcelWeather_Rain_18:
# 51 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R5
	goto_if 0, ParcelWeather_Rain_17
	goto ParcelWeather_Rain_16


ParcelWeather_Rain_FirstWin::
# 58 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_Text_2, MSGBOX_DEFAULT
# 59 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R2::
# 63 "data/maps/ParcelWeather/scripts.pory"
	lock
# 64 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 65 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_0, MSGBOX_YESNO
# 66 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R2_2
# 71 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R2, ParcelWeather_Rain_R2_Text_2
# 72 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_3, MSGBOX_DEFAULT
# 73 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R2_2:
# 67 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 68 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R3::
# 77 "data/maps/ParcelWeather/scripts.pory"
	lock
# 78 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 79 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R3_Text_0, MSGBOX_YESNO
# 80 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R3_2
# 85 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R3, ParcelWeather_Rain_R2_Text_2
# 86 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R3_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R3_2:
# 81 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 82 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R4::
# 91 "data/maps/ParcelWeather/scripts.pory"
	lock
# 92 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 93 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R4_Text_0, MSGBOX_YESNO
# 94 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R4_2
# 99 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R4, ParcelWeather_Rain_R4_Text_1
# 100 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R4_Text_2, MSGBOX_DEFAULT
# 101 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R4_2:
# 95 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 96 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R5::
# 105 "data/maps/ParcelWeather/scripts.pory"
	lock
# 106 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 107 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R5_Text_0, MSGBOX_YESNO
# 108 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R5_2
# 113 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R5, ParcelWeather_Rain_R4_Text_1
# 114 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R5_Text_1, MSGBOX_DEFAULT
# 115 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R5_2:
# 109 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun::
# 119 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUN, ParcelWeather_Sun_Text_0, ParcelWeather_Sun_Text_1, ParcelWeather_Sun_FirstWin
# 123 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 124 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Sun_3
ParcelWeather_Sun_1:
# 127 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Sun_8
ParcelWeather_Sun_6:
# 130 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Sun_13
ParcelWeather_Sun_11:
# 133 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Sun_18
ParcelWeather_Sun_16:
# 136 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Sun_2:
# 125 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R2
	goto ParcelWeather_Sun_1

ParcelWeather_Sun_3:
# 124 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R2
	goto_if 0, ParcelWeather_Sun_2
	goto ParcelWeather_Sun_1

ParcelWeather_Sun_7:
# 128 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R3
	goto ParcelWeather_Sun_6

ParcelWeather_Sun_8:
# 127 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R3
	goto_if 0, ParcelWeather_Sun_7
	goto ParcelWeather_Sun_6

ParcelWeather_Sun_12:
# 131 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R4
	goto ParcelWeather_Sun_11

ParcelWeather_Sun_13:
# 130 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R4
	goto_if 0, ParcelWeather_Sun_12
	goto ParcelWeather_Sun_11

ParcelWeather_Sun_17:
# 134 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R5
	goto ParcelWeather_Sun_16

ParcelWeather_Sun_18:
# 133 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R5
	goto_if 0, ParcelWeather_Sun_17
	goto ParcelWeather_Sun_16


ParcelWeather_Sun_FirstWin::
# 140 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_Text_2, MSGBOX_DEFAULT
# 141 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R2::
# 145 "data/maps/ParcelWeather/scripts.pory"
	lock
# 146 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_0, MSGBOX_YESNO
# 148 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R2_2
# 153 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R2, ParcelWeather_Sun_R2_Text_2
# 154 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_3, MSGBOX_DEFAULT
# 155 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R2_2:
# 149 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 150 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R3::
# 159 "data/maps/ParcelWeather/scripts.pory"
	lock
# 160 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 161 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R3_Text_0, MSGBOX_YESNO
# 162 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R3_2
# 167 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R3, ParcelWeather_Sun_R3_Text_1
# 168 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R3_Text_2, MSGBOX_DEFAULT
# 169 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R3_2:
# 163 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 164 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R4::
# 173 "data/maps/ParcelWeather/scripts.pory"
	lock
# 174 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 175 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R4_Text_0, MSGBOX_YESNO
# 176 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R4_2
# 181 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R4, ParcelWeather_Sun_R4_Text_1
# 182 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R4_Text_2, MSGBOX_DEFAULT
# 183 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R4_2:
# 177 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 178 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R5::
# 187 "data/maps/ParcelWeather/scripts.pory"
	lock
# 188 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 189 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R5_Text_0, MSGBOX_YESNO
# 190 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R5_2
# 195 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R5, ParcelWeather_Sun_R3_Text_1
# 196 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R5_Text_1, MSGBOX_DEFAULT
# 197 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R5_2:
# 191 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 192 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand::
# 201 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SAND, ParcelWeather_Sand_Text_0, ParcelWeather_Sand_Text_1, ParcelWeather_Sand_FirstWin
# 205 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 206 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Sand_3
ParcelWeather_Sand_1:
# 209 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Sand_8
ParcelWeather_Sand_6:
# 212 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Sand_13
ParcelWeather_Sand_11:
# 215 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Sand_18
ParcelWeather_Sand_16:
# 218 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Sand_2:
# 207 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R2
	goto ParcelWeather_Sand_1

ParcelWeather_Sand_3:
# 206 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R2
	goto_if 0, ParcelWeather_Sand_2
	goto ParcelWeather_Sand_1

ParcelWeather_Sand_7:
# 210 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R3
	goto ParcelWeather_Sand_6

ParcelWeather_Sand_8:
# 209 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R3
	goto_if 0, ParcelWeather_Sand_7
	goto ParcelWeather_Sand_6

ParcelWeather_Sand_12:
# 213 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R4
	goto ParcelWeather_Sand_11

ParcelWeather_Sand_13:
# 212 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R4
	goto_if 0, ParcelWeather_Sand_12
	goto ParcelWeather_Sand_11

ParcelWeather_Sand_17:
# 216 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R5
	goto ParcelWeather_Sand_16

ParcelWeather_Sand_18:
# 215 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R5
	goto_if 0, ParcelWeather_Sand_17
	goto ParcelWeather_Sand_16


ParcelWeather_Sand_FirstWin::
# 222 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_Text_2, MSGBOX_DEFAULT
# 223 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R2::
# 227 "data/maps/ParcelWeather/scripts.pory"
	lock
# 228 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 229 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_0, MSGBOX_YESNO
# 230 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R2_2
# 235 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R2, ParcelWeather_Sand_R2_Text_2
# 236 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_3, MSGBOX_DEFAULT
# 237 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R2_2:
# 231 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 232 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R3::
# 241 "data/maps/ParcelWeather/scripts.pory"
	lock
# 242 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 243 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R3_Text_0, MSGBOX_YESNO
# 244 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R3_2
# 249 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R3, ParcelWeather_Sand_R3_Text_1
# 250 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R3_Text_2, MSGBOX_DEFAULT
# 251 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R3_2:
# 245 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 246 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R4::
# 255 "data/maps/ParcelWeather/scripts.pory"
	lock
# 256 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 257 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R4_Text_0, MSGBOX_YESNO
# 258 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R4_2
# 263 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R4, ParcelWeather_Sand_R3_Text_1
# 264 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R4_Text_1, MSGBOX_DEFAULT
# 265 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R4_2:
# 259 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 260 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R5::
# 269 "data/maps/ParcelWeather/scripts.pory"
	lock
# 270 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 271 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R5_Text_0, MSGBOX_YESNO
# 272 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R5_2
# 277 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R5, ParcelWeather_Sand_R3_Text_1
# 278 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R5_Text_1, MSGBOX_DEFAULT
# 279 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R5_2:
# 273 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 274 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice::
# 283 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ICE, ParcelWeather_Ice_Text_0, ParcelWeather_Ice_Text_1, ParcelWeather_Ice_FirstWin
# 287 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 288 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Ice_3
ParcelWeather_Ice_1:
# 291 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Ice_8
ParcelWeather_Ice_6:
# 294 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Ice_13
ParcelWeather_Ice_11:
# 297 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Ice_18
ParcelWeather_Ice_16:
# 300 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Ice_2:
# 289 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R2
	goto ParcelWeather_Ice_1

ParcelWeather_Ice_3:
# 288 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R2
	goto_if 0, ParcelWeather_Ice_2
	goto ParcelWeather_Ice_1

ParcelWeather_Ice_7:
# 292 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R3
	goto ParcelWeather_Ice_6

ParcelWeather_Ice_8:
# 291 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R3
	goto_if 0, ParcelWeather_Ice_7
	goto ParcelWeather_Ice_6

ParcelWeather_Ice_12:
# 295 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R4
	goto ParcelWeather_Ice_11

ParcelWeather_Ice_13:
# 294 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R4
	goto_if 0, ParcelWeather_Ice_12
	goto ParcelWeather_Ice_11

ParcelWeather_Ice_17:
# 298 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R5
	goto ParcelWeather_Ice_16

ParcelWeather_Ice_18:
# 297 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R5
	goto_if 0, ParcelWeather_Ice_17
	goto ParcelWeather_Ice_16


ParcelWeather_Ice_FirstWin::
# 304 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_Text_2, MSGBOX_DEFAULT
# 305 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R2::
# 309 "data/maps/ParcelWeather/scripts.pory"
	lock
# 310 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 311 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_0, MSGBOX_YESNO
# 312 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R2_2
# 317 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R2, ParcelWeather_Ice_R2_Text_2
# 318 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_3, MSGBOX_DEFAULT
# 319 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R2_2:
# 313 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 314 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R3::
# 323 "data/maps/ParcelWeather/scripts.pory"
	lock
# 324 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 325 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R3_Text_0, MSGBOX_YESNO
# 326 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R3_2
# 331 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R3, ParcelWeather_Ice_R3_Text_1
# 332 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R3_Text_2, MSGBOX_DEFAULT
# 333 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R3_2:
# 327 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 328 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R4::
# 337 "data/maps/ParcelWeather/scripts.pory"
	lock
# 338 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 339 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R4_Text_0, MSGBOX_YESNO
# 340 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R4_2
# 345 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R4, ParcelWeather_Ice_R4_Text_1
# 346 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R4_Text_2, MSGBOX_DEFAULT
# 347 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R4_2:
# 341 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 342 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R5::
# 351 "data/maps/ParcelWeather/scripts.pory"
	lock
# 352 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 353 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R5_Text_0, MSGBOX_YESNO
# 354 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R5_2
# 359 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R5, ParcelWeather_Ice_R5_Text_1
# 360 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R5_Text_2, MSGBOX_DEFAULT
# 361 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R5_2:
# 355 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 356 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask::
# 367 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_ASK, ParcelWeather_Ask_Text_0, ParcelWeather_Ask_Text_1, ParcelWeather_Ask_FirstWin
# 371 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 372 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Ask_3
ParcelWeather_Ask_1:
# 375 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Ask_8
ParcelWeather_Ask_6:
# 378 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Ask_13
ParcelWeather_Ask_11:
# 381 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Ask_18
ParcelWeather_Ask_16:
# 384 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Ask_2:
# 373 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R2
	goto ParcelWeather_Ask_1

ParcelWeather_Ask_3:
# 372 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R2
	goto_if 0, ParcelWeather_Ask_2
	goto ParcelWeather_Ask_1

ParcelWeather_Ask_7:
# 376 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R3
	goto ParcelWeather_Ask_6

ParcelWeather_Ask_8:
# 375 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R3
	goto_if 0, ParcelWeather_Ask_7
	goto ParcelWeather_Ask_6

ParcelWeather_Ask_12:
# 379 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R4
	goto ParcelWeather_Ask_11

ParcelWeather_Ask_13:
# 378 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R4
	goto_if 0, ParcelWeather_Ask_12
	goto ParcelWeather_Ask_11

ParcelWeather_Ask_17:
# 382 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R5
	goto ParcelWeather_Ask_16

ParcelWeather_Ask_18:
# 381 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R5
	goto_if 0, ParcelWeather_Ask_17
	goto ParcelWeather_Ask_16


ParcelWeather_Ask_FirstWin::
# 388 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_Text_2, MSGBOX_DEFAULT
# 389 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R2::
# 393 "data/maps/ParcelWeather/scripts.pory"
	lock
# 394 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 395 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_0, MSGBOX_YESNO
# 396 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R2_2
# 401 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R2, ParcelWeather_Ask_R2_Text_2
# 402 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_3, MSGBOX_DEFAULT
# 403 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R2_2:
# 397 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 398 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R3::
# 407 "data/maps/ParcelWeather/scripts.pory"
	lock
# 408 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 409 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R3_Text_0, MSGBOX_YESNO
# 410 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R3_2
# 415 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R3, ParcelWeather_Ask_R3_Text_1
# 416 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R3_Text_2, MSGBOX_DEFAULT
# 417 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R3_2:
# 411 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 412 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R4::
# 421 "data/maps/ParcelWeather/scripts.pory"
	lock
# 422 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 423 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R4_Text_0, MSGBOX_YESNO
# 424 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R4_2
# 429 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R4, ParcelWeather_Ask_R4_Text_1
# 430 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R4_Text_2, MSGBOX_DEFAULT
# 431 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R4_2:
# 425 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 426 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R5::
# 435 "data/maps/ParcelWeather/scripts.pory"
	lock
# 436 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 437 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R5_Text_0, MSGBOX_YESNO
# 438 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R5_2
# 443 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R5, ParcelWeather_Ask_R5_Text_1
# 444 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R5_Text_2, MSGBOX_DEFAULT
# 445 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R5_2:
# 439 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 440 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit::
# 449 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_BRIT, ParcelWeather_Brit_Text_0, ParcelWeather_Brit_Text_1, ParcelWeather_Brit_FirstWin
# 453 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 454 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Brit_3
ParcelWeather_Brit_1:
# 457 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Brit_8
ParcelWeather_Brit_6:
# 460 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Brit_13
ParcelWeather_Brit_11:
# 463 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Brit_18
ParcelWeather_Brit_16:
# 466 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Brit_2:
# 455 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R2
	goto ParcelWeather_Brit_1

ParcelWeather_Brit_3:
# 454 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R2
	goto_if 0, ParcelWeather_Brit_2
	goto ParcelWeather_Brit_1

ParcelWeather_Brit_7:
# 458 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R3
	goto ParcelWeather_Brit_6

ParcelWeather_Brit_8:
# 457 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R3
	goto_if 0, ParcelWeather_Brit_7
	goto ParcelWeather_Brit_6

ParcelWeather_Brit_12:
# 461 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R4
	goto ParcelWeather_Brit_11

ParcelWeather_Brit_13:
# 460 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R4
	goto_if 0, ParcelWeather_Brit_12
	goto ParcelWeather_Brit_11

ParcelWeather_Brit_17:
# 464 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R5
	goto ParcelWeather_Brit_16

ParcelWeather_Brit_18:
# 463 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R5
	goto_if 0, ParcelWeather_Brit_17
	goto ParcelWeather_Brit_16


ParcelWeather_Brit_FirstWin::
# 470 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_Text_2, MSGBOX_DEFAULT
# 471 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R2::
# 475 "data/maps/ParcelWeather/scripts.pory"
	lock
# 476 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 477 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_0, MSGBOX_YESNO
# 478 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R2_2
# 483 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R2, ParcelWeather_Brit_R2_Text_2
# 484 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_3, MSGBOX_DEFAULT
# 485 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R2_2:
# 479 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 480 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R3::
# 489 "data/maps/ParcelWeather/scripts.pory"
	lock
# 490 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 491 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R3_Text_0, MSGBOX_YESNO
# 492 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R3_2
# 497 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R3, ParcelWeather_Brit_R3_Text_1
# 498 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R3_Text_2, MSGBOX_DEFAULT
# 499 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R3_2:
# 493 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 494 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R4::
# 503 "data/maps/ParcelWeather/scripts.pory"
	lock
# 504 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 505 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R4_Text_0, MSGBOX_YESNO
# 506 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R4_2
# 511 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R4, ParcelWeather_Brit_R4_Text_1
# 512 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R4_Text_2, MSGBOX_DEFAULT
# 513 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R4_2:
# 507 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 508 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R5::
# 517 "data/maps/ParcelWeather/scripts.pory"
	lock
# 518 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 519 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R5_Text_0, MSGBOX_YESNO
# 520 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R5_2
# 525 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R5, ParcelWeather_Brit_R2_Text_2
# 526 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R5_Text_1, MSGBOX_DEFAULT
# 527 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R5_2:
# 521 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 522 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato::
# 531 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_CATO, ParcelWeather_Cato_Text_0, ParcelWeather_Cato_Text_1, ParcelWeather_Cato_FirstWin
# 535 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 536 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Cato_3
ParcelWeather_Cato_1:
# 539 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Cato_8
ParcelWeather_Cato_6:
# 542 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Cato_13
ParcelWeather_Cato_11:
# 545 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Cato_18
ParcelWeather_Cato_16:
# 548 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Cato_2:
# 537 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R2
	goto ParcelWeather_Cato_1

ParcelWeather_Cato_3:
# 536 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R2
	goto_if 0, ParcelWeather_Cato_2
	goto ParcelWeather_Cato_1

ParcelWeather_Cato_7:
# 540 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R3
	goto ParcelWeather_Cato_6

ParcelWeather_Cato_8:
# 539 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R3
	goto_if 0, ParcelWeather_Cato_7
	goto ParcelWeather_Cato_6

ParcelWeather_Cato_12:
# 543 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R4
	goto ParcelWeather_Cato_11

ParcelWeather_Cato_13:
# 542 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R4
	goto_if 0, ParcelWeather_Cato_12
	goto ParcelWeather_Cato_11

ParcelWeather_Cato_17:
# 546 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R5
	goto ParcelWeather_Cato_16

ParcelWeather_Cato_18:
# 545 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R5
	goto_if 0, ParcelWeather_Cato_17
	goto ParcelWeather_Cato_16


ParcelWeather_Cato_FirstWin::
# 552 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_Text_2, MSGBOX_DEFAULT
# 553 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R2::
# 557 "data/maps/ParcelWeather/scripts.pory"
	lock
# 558 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 559 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_0, MSGBOX_YESNO
# 560 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R2_2
# 565 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R2, ParcelWeather_Cato_R2_Text_2
# 566 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_3, MSGBOX_DEFAULT
# 567 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R2_2:
# 561 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 562 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R3::
# 571 "data/maps/ParcelWeather/scripts.pory"
	lock
# 572 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 573 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R3_Text_0, MSGBOX_YESNO
# 574 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R3_2
# 579 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R3, ParcelWeather_Cato_R3_Text_1
# 580 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R3_Text_2, MSGBOX_DEFAULT
# 581 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R3_2:
# 575 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 576 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R4::
# 585 "data/maps/ParcelWeather/scripts.pory"
	lock
# 586 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 587 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R4_Text_0, MSGBOX_YESNO
# 588 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R4_2
# 593 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R4, ParcelWeather_Cato_R4_Text_1
# 594 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R4_Text_2, MSGBOX_DEFAULT
# 595 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R4_2:
# 589 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 590 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R5::
# 599 "data/maps/ParcelWeather/scripts.pory"
	lock
# 600 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 601 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R5_Text_0, MSGBOX_YESNO
# 602 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R5_2
# 607 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R5, ParcelWeather_Cato_R3_Text_1
# 608 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R5_Text_1, MSGBOX_DEFAULT
# 609 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R5_2:
# 603 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 604 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis::
# 613 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_DIS, ParcelWeather_Dis_Text_0, ParcelWeather_Dis_Text_1, ParcelWeather_Dis_FirstWin
# 617 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 618 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Dis_3
ParcelWeather_Dis_1:
# 621 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Dis_8
ParcelWeather_Dis_6:
# 624 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Dis_13
ParcelWeather_Dis_11:
# 627 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Dis_18
ParcelWeather_Dis_16:
# 630 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Dis_2:
# 619 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R2
	goto ParcelWeather_Dis_1

ParcelWeather_Dis_3:
# 618 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R2
	goto_if 0, ParcelWeather_Dis_2
	goto ParcelWeather_Dis_1

ParcelWeather_Dis_7:
# 622 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R3
	goto ParcelWeather_Dis_6

ParcelWeather_Dis_8:
# 621 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R3
	goto_if 0, ParcelWeather_Dis_7
	goto ParcelWeather_Dis_6

ParcelWeather_Dis_12:
# 625 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R4
	goto ParcelWeather_Dis_11

ParcelWeather_Dis_13:
# 624 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R4
	goto_if 0, ParcelWeather_Dis_12
	goto ParcelWeather_Dis_11

ParcelWeather_Dis_17:
# 628 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R5
	goto ParcelWeather_Dis_16

ParcelWeather_Dis_18:
# 627 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R5
	goto_if 0, ParcelWeather_Dis_17
	goto ParcelWeather_Dis_16


ParcelWeather_Dis_FirstWin::
# 634 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_Text_2, MSGBOX_DEFAULT
# 635 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R2::
# 639 "data/maps/ParcelWeather/scripts.pory"
	lock
# 640 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 641 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_0, MSGBOX_YESNO
# 642 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R2_2
# 647 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R2, ParcelWeather_Dis_R2_Text_2
# 648 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_3, MSGBOX_DEFAULT
# 649 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R2_2:
# 643 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 644 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R3::
# 653 "data/maps/ParcelWeather/scripts.pory"
	lock
# 654 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 655 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R3_Text_0, MSGBOX_YESNO
# 656 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R3_2
# 661 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R3, ParcelWeather_Dis_R3_Text_1
# 662 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R3_Text_2, MSGBOX_DEFAULT
# 663 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R3_2:
# 657 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 658 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R4::
# 667 "data/maps/ParcelWeather/scripts.pory"
	lock
# 668 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 669 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R4_Text_0, MSGBOX_YESNO
# 670 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R4_2
# 675 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R4, ParcelWeather_Dis_R4_Text_1
# 676 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R4_Text_2, MSGBOX_DEFAULT
# 677 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R4_2:
# 671 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 672 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R5::
# 681 "data/maps/ParcelWeather/scripts.pory"
	lock
# 682 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 683 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R5_Text_0, MSGBOX_YESNO
# 684 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R5_2
# 689 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R5, ParcelWeather_Dis_R3_Text_1
# 690 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R5_Text_1, MSGBOX_DEFAULT
# 691 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R5_2:
# 685 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 686 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba::
# 695 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_EBBA, ParcelWeather_Ebba_Text_0, ParcelWeather_Ebba_Text_1, ParcelWeather_Ebba_FirstWin
# 699 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 700 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Ebba_3
ParcelWeather_Ebba_1:
# 703 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Ebba_8
ParcelWeather_Ebba_6:
# 706 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Ebba_13
ParcelWeather_Ebba_11:
# 709 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Ebba_18
ParcelWeather_Ebba_16:
# 712 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Ebba_2:
# 701 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R2
	goto ParcelWeather_Ebba_1

ParcelWeather_Ebba_3:
# 700 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R2
	goto_if 0, ParcelWeather_Ebba_2
	goto ParcelWeather_Ebba_1

ParcelWeather_Ebba_7:
# 704 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R3
	goto ParcelWeather_Ebba_6

ParcelWeather_Ebba_8:
# 703 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R3
	goto_if 0, ParcelWeather_Ebba_7
	goto ParcelWeather_Ebba_6

ParcelWeather_Ebba_12:
# 707 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R4
	goto ParcelWeather_Ebba_11

ParcelWeather_Ebba_13:
# 706 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R4
	goto_if 0, ParcelWeather_Ebba_12
	goto ParcelWeather_Ebba_11

ParcelWeather_Ebba_17:
# 710 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R5
	goto ParcelWeather_Ebba_16

ParcelWeather_Ebba_18:
# 709 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R5
	goto_if 0, ParcelWeather_Ebba_17
	goto ParcelWeather_Ebba_16


ParcelWeather_Ebba_FirstWin::
# 716 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_Text_2, MSGBOX_DEFAULT
# 717 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R2::
# 721 "data/maps/ParcelWeather/scripts.pory"
	lock
# 722 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 723 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_0, MSGBOX_YESNO
# 724 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R2_2
# 729 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R2, ParcelWeather_Ebba_R2_Text_2
# 730 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_3, MSGBOX_DEFAULT
# 731 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R2_2:
# 725 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 726 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R3::
# 735 "data/maps/ParcelWeather/scripts.pory"
	lock
# 736 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 737 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R3_Text_0, MSGBOX_YESNO
# 738 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R3_2
# 743 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R3, ParcelWeather_Ebba_R3_Text_1
# 744 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R3_Text_2, MSGBOX_DEFAULT
# 745 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R3_2:
# 739 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 740 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R4::
# 749 "data/maps/ParcelWeather/scripts.pory"
	lock
# 750 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 751 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R4_Text_0, MSGBOX_YESNO
# 752 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R4_2
# 757 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R4, ParcelWeather_Ebba_R4_Text_1
# 758 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R4_Text_2, MSGBOX_DEFAULT
# 759 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R4_2:
# 753 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 754 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R5::
# 763 "data/maps/ParcelWeather/scripts.pory"
	lock
# 764 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 765 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R5_Text_0, MSGBOX_YESNO
# 766 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R5_2
# 771 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R5, ParcelWeather_Ebba_R2_Text_2
# 772 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R5_Text_1, MSGBOX_DEFAULT
# 773 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R5_2:
# 767 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 768 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode::
# 777 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_FINN2, ParcelWeather_Frode_Text_0, ParcelWeather_Frode_Text_1, ParcelWeather_Frode_FirstWin
# 781 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 782 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Frode_3
ParcelWeather_Frode_1:
# 785 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Frode_8
ParcelWeather_Frode_6:
# 788 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Frode_13
ParcelWeather_Frode_11:
# 791 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Frode_18
ParcelWeather_Frode_16:
# 794 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Frode_2:
# 783 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R2
	goto ParcelWeather_Frode_1

ParcelWeather_Frode_3:
# 782 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R2
	goto_if 0, ParcelWeather_Frode_2
	goto ParcelWeather_Frode_1

ParcelWeather_Frode_7:
# 786 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R3
	goto ParcelWeather_Frode_6

ParcelWeather_Frode_8:
# 785 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R3
	goto_if 0, ParcelWeather_Frode_7
	goto ParcelWeather_Frode_6

ParcelWeather_Frode_12:
# 789 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R4
	goto ParcelWeather_Frode_11

ParcelWeather_Frode_13:
# 788 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R4
	goto_if 0, ParcelWeather_Frode_12
	goto ParcelWeather_Frode_11

ParcelWeather_Frode_17:
# 792 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R5
	goto ParcelWeather_Frode_16

ParcelWeather_Frode_18:
# 791 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R5
	goto_if 0, ParcelWeather_Frode_17
	goto ParcelWeather_Frode_16


ParcelWeather_Frode_FirstWin::
# 798 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_Text_2, MSGBOX_DEFAULT
# 799 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R2::
# 803 "data/maps/ParcelWeather/scripts.pory"
	lock
# 804 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 805 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_0, MSGBOX_YESNO
# 806 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R2_2
# 811 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R2, ParcelWeather_Frode_R2_Text_2
# 812 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_3, MSGBOX_DEFAULT
# 813 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R2_2:
# 807 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 808 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R3::
# 817 "data/maps/ParcelWeather/scripts.pory"
	lock
# 818 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 819 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R3_Text_0, MSGBOX_YESNO
# 820 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R3_2
# 825 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R3, ParcelWeather_Frode_R3_Text_1
# 826 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R3_Text_2, MSGBOX_DEFAULT
# 827 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R3_2:
# 821 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 822 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R4::
# 831 "data/maps/ParcelWeather/scripts.pory"
	lock
# 832 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 833 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R4_Text_0, MSGBOX_YESNO
# 834 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R4_2
# 839 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R4, ParcelWeather_Frode_R4_Text_1
# 840 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R4_Text_2, MSGBOX_DEFAULT
# 841 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R4_2:
# 835 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 836 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R5::
# 845 "data/maps/ParcelWeather/scripts.pory"
	lock
# 846 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 847 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R5_Text_0, MSGBOX_YESNO
# 848 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R5_2
# 853 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R5, ParcelWeather_Frode_R4_Text_1
# 854 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R5_Text_1, MSGBOX_DEFAULT
# 855 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R5_2:
# 849 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 850 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Gaute::
# 859 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_GAUTE, ParcelWeather_Gaute_Text_0, ParcelWeather_Gaute_Text_1
# 862 "data/maps/ParcelWeather/scripts.pory"
	lock
# 863 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 864 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER_DONE, ParcelWeather_Gaute_2
# 869 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeather_Gaute_5
# 876 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_4, MSGBOX_DEFAULT
# 877 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER
# 878 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Gaute_2:
# 865 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_2, MSGBOX_DEFAULT
# 866 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Gaute_5:
# 870 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_3, MSGBOX_DEFAULT
# 871 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 872 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_DONE
# 873 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege::
# 882 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_HEGE, ParcelWeather_Hege_Text_0, ParcelWeather_Hege_Text_1, ParcelWeather_Hege_FirstWin
# 886 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 887 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Hege_3
ParcelWeather_Hege_1:
# 890 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Hege_8
ParcelWeather_Hege_6:
# 893 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Hege_13
ParcelWeather_Hege_11:
# 896 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Hege_18
ParcelWeather_Hege_16:
# 899 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Hege_2:
# 888 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R2
	goto ParcelWeather_Hege_1

ParcelWeather_Hege_3:
# 887 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R2
	goto_if 0, ParcelWeather_Hege_2
	goto ParcelWeather_Hege_1

ParcelWeather_Hege_7:
# 891 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R3
	goto ParcelWeather_Hege_6

ParcelWeather_Hege_8:
# 890 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R3
	goto_if 0, ParcelWeather_Hege_7
	goto ParcelWeather_Hege_6

ParcelWeather_Hege_12:
# 894 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R4
	goto ParcelWeather_Hege_11

ParcelWeather_Hege_13:
# 893 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R4
	goto_if 0, ParcelWeather_Hege_12
	goto ParcelWeather_Hege_11

ParcelWeather_Hege_17:
# 897 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R5
	goto ParcelWeather_Hege_16

ParcelWeather_Hege_18:
# 896 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R5
	goto_if 0, ParcelWeather_Hege_17
	goto ParcelWeather_Hege_16


ParcelWeather_Hege_FirstWin::
# 903 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_Text_2, MSGBOX_DEFAULT
# 904 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R2::
# 908 "data/maps/ParcelWeather/scripts.pory"
	lock
# 909 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 910 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_0, MSGBOX_YESNO
# 911 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R2_2
# 916 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R2, ParcelWeather_Hege_R2_Text_2
# 917 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_3, MSGBOX_DEFAULT
# 918 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R2_2:
# 912 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 913 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R3::
# 922 "data/maps/ParcelWeather/scripts.pory"
	lock
# 923 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 924 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R3_Text_0, MSGBOX_YESNO
# 925 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R3_2
# 930 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R3, ParcelWeather_Hege_R3_Text_1
# 931 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R3_Text_2, MSGBOX_DEFAULT
# 932 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R3_2:
# 926 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 927 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R4::
# 936 "data/maps/ParcelWeather/scripts.pory"
	lock
# 937 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 938 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R4_Text_0, MSGBOX_YESNO
# 939 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R4_2
# 944 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R4, ParcelWeather_Hege_R4_Text_1
# 945 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R4_Text_2, MSGBOX_DEFAULT
# 946 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R4_2:
# 940 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 941 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R5::
# 950 "data/maps/ParcelWeather/scripts.pory"
	lock
# 951 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 952 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R5_Text_0, MSGBOX_YESNO
# 953 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R5_2
# 958 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R5, ParcelWeather_Hege_R5_Text_1
# 959 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R5_Text_2, MSGBOX_DEFAULT
# 960 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R5_2:
# 954 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 955 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_ReturnFerry::
# 966 "data/maps/ParcelWeather/scripts.pory"
	lock
# 967 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 970 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_ReturnFerry_2
# 973 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_1, MSGBOX_YESNO
ParcelWeather_ReturnFerry_1:
# 975 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_ReturnFerry_6
# 980 "data/maps/ParcelWeather/scripts.pory"
	closemessage
# 981 "data/maps/ParcelWeather/scripts.pory"
	playse SE_SHIP
# 982 "data/maps/ParcelWeather/scripts.pory"
	delay 40
# 983 "data/maps/ParcelWeather/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 984 "data/maps/ParcelWeather/scripts.pory"
	waitstate
	end

ParcelWeather_ReturnFerry_2:
# 971 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_0, MSGBOX_YESNO
	goto ParcelWeather_ReturnFerry_1

ParcelWeather_ReturnFerry_6:
# 976 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 977 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_ItemMaxEther::
# 987 "data/maps/ParcelWeather/scripts.pory"
	finditem ITEM_MAX_ETHER
	end


ParcelWeather_ItemRareCandy::
# 988 "data/maps/ParcelWeather/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelWeather_SignGate::
# 990 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_SignGate_Text_0, MSGBOX_SIGN
	end


ParcelWeather_SignPlots::
# 994 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_SignPlots_Text_0, MSGBOX_SIGN
	end


ParcelWeather_T_Amund::
# 1000 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_AMUND, ParcelWeather_T_Amund_Text_0, ParcelWeather_T_Amund_Text_1, ParcelWeather_T_Amund_FirstWin
# 1004 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1005 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_T_Amund_3
ParcelWeather_T_Amund_1:
# 1008 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_T_Amund_8
ParcelWeather_T_Amund_6:
# 1011 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_T_Amund_13
ParcelWeather_T_Amund_11:
# 1014 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_T_Amund_18
ParcelWeather_T_Amund_16:
# 1017 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_T_Amund_2:
# 1006 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R2
	goto ParcelWeather_T_Amund_1

ParcelWeather_T_Amund_3:
# 1005 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R2
	goto_if 0, ParcelWeather_T_Amund_2
	goto ParcelWeather_T_Amund_1

ParcelWeather_T_Amund_7:
# 1009 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R3
	goto ParcelWeather_T_Amund_6

ParcelWeather_T_Amund_8:
# 1008 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R3
	goto_if 0, ParcelWeather_T_Amund_7
	goto ParcelWeather_T_Amund_6

ParcelWeather_T_Amund_12:
# 1012 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R4
	goto ParcelWeather_T_Amund_11

ParcelWeather_T_Amund_13:
# 1011 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R4
	goto_if 0, ParcelWeather_T_Amund_12
	goto ParcelWeather_T_Amund_11

ParcelWeather_T_Amund_17:
# 1015 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R5
	goto ParcelWeather_T_Amund_16

ParcelWeather_T_Amund_18:
# 1014 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R5
	goto_if 0, ParcelWeather_T_Amund_17
	goto ParcelWeather_T_Amund_16


ParcelWeather_T_Amund_FirstWin::
# 1021 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_Text_2, MSGBOX_DEFAULT
# 1022 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R2::
# 1026 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1027 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1028 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_0, MSGBOX_YESNO
# 1029 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R2_2
# 1034 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R2, ParcelWeather_T_Amund_R2_Text_2
# 1035 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_3, MSGBOX_DEFAULT
# 1036 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R2_2:
# 1030 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1031 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R3::
# 1040 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1041 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1042 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R3_Text_0, MSGBOX_YESNO
# 1043 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R3_2
# 1048 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R3, ParcelWeather_T_Amund_R3_Text_1
# 1049 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R3_Text_2, MSGBOX_DEFAULT
# 1050 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R3_2:
# 1044 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1045 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R4::
# 1054 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1055 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1056 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R4_Text_0, MSGBOX_YESNO
# 1057 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R4_2
# 1062 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R4, ParcelWeather_T_Amund_R2_Text_2
# 1063 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R4_Text_1, MSGBOX_DEFAULT
# 1064 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R4_2:
# 1058 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1059 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R5::
# 1068 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1069 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1070 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R5_Text_0, MSGBOX_YESNO
# 1071 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R5_2
# 1076 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R5, ParcelWeather_T_Amund_R5_Text_1
# 1077 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R5_Text_2, MSGBOX_DEFAULT
# 1078 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R5_2:
# 1072 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1073 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild::
# 1082 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_RAGNHILD, ParcelWeather_T_Ragnhild_Text_0, ParcelWeather_T_Ragnhild_Text_1, ParcelWeather_T_Ragnhild_FirstWin
# 1086 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1087 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_T_Ragnhild_3
ParcelWeather_T_Ragnhild_1:
# 1090 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_T_Ragnhild_8
ParcelWeather_T_Ragnhild_6:
# 1093 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_T_Ragnhild_13
ParcelWeather_T_Ragnhild_11:
# 1096 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_T_Ragnhild_18
ParcelWeather_T_Ragnhild_16:
# 1099 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_T_Ragnhild_2:
# 1088 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R2
	goto ParcelWeather_T_Ragnhild_1

ParcelWeather_T_Ragnhild_3:
# 1087 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R2
	goto_if 0, ParcelWeather_T_Ragnhild_2
	goto ParcelWeather_T_Ragnhild_1

ParcelWeather_T_Ragnhild_7:
# 1091 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R3
	goto ParcelWeather_T_Ragnhild_6

ParcelWeather_T_Ragnhild_8:
# 1090 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R3
	goto_if 0, ParcelWeather_T_Ragnhild_7
	goto ParcelWeather_T_Ragnhild_6

ParcelWeather_T_Ragnhild_12:
# 1094 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R4
	goto ParcelWeather_T_Ragnhild_11

ParcelWeather_T_Ragnhild_13:
# 1093 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R4
	goto_if 0, ParcelWeather_T_Ragnhild_12
	goto ParcelWeather_T_Ragnhild_11

ParcelWeather_T_Ragnhild_17:
# 1097 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R5
	goto ParcelWeather_T_Ragnhild_16

ParcelWeather_T_Ragnhild_18:
# 1096 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R5
	goto_if 0, ParcelWeather_T_Ragnhild_17
	goto ParcelWeather_T_Ragnhild_16


ParcelWeather_T_Ragnhild_FirstWin::
# 1103 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_Text_2, MSGBOX_DEFAULT
# 1104 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R2::
# 1108 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1109 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1110 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_0, MSGBOX_YESNO
# 1111 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R2_2
# 1116 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R2, ParcelWeather_T_Ragnhild_R2_Text_2
# 1117 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_3, MSGBOX_DEFAULT
# 1118 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R2_2:
# 1112 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1113 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R3::
# 1122 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1123 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1124 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R3_Text_0, MSGBOX_YESNO
# 1125 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R3_2
# 1130 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R3, ParcelWeather_T_Ragnhild_R3_Text_1
# 1131 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R3_Text_2, MSGBOX_DEFAULT
# 1132 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R3_2:
# 1126 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1127 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R4::
# 1136 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1137 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1138 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R4_Text_0, MSGBOX_YESNO
# 1139 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R4_2
# 1144 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R4, ParcelWeather_T_Ragnhild_R4_Text_1
# 1145 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R4_Text_2, MSGBOX_DEFAULT
# 1146 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R4_2:
# 1140 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1141 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R5::
# 1150 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1151 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1152 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R5_Text_0, MSGBOX_YESNO
# 1153 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R5_2
# 1158 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R5, ParcelWeather_T_Ragnhild_R3_Text_1
# 1159 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R5_Text_1, MSGBOX_DEFAULT
# 1160 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R5_2:
# 1154 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1155 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind::
# 1164 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_OYVIND, ParcelWeather_T_Oyvind_Text_0, ParcelWeather_T_Oyvind_Text_1, ParcelWeather_T_Oyvind_FirstWin
# 1168 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1169 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_T_Oyvind_3
ParcelWeather_T_Oyvind_1:
# 1172 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_T_Oyvind_8
ParcelWeather_T_Oyvind_6:
# 1175 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_T_Oyvind_13
ParcelWeather_T_Oyvind_11:
# 1178 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_T_Oyvind_18
ParcelWeather_T_Oyvind_16:
# 1181 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_T_Oyvind_2:
# 1170 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R2
	goto ParcelWeather_T_Oyvind_1

ParcelWeather_T_Oyvind_3:
# 1169 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R2
	goto_if 0, ParcelWeather_T_Oyvind_2
	goto ParcelWeather_T_Oyvind_1

ParcelWeather_T_Oyvind_7:
# 1173 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R3
	goto ParcelWeather_T_Oyvind_6

ParcelWeather_T_Oyvind_8:
# 1172 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R3
	goto_if 0, ParcelWeather_T_Oyvind_7
	goto ParcelWeather_T_Oyvind_6

ParcelWeather_T_Oyvind_12:
# 1176 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R4
	goto ParcelWeather_T_Oyvind_11

ParcelWeather_T_Oyvind_13:
# 1175 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R4
	goto_if 0, ParcelWeather_T_Oyvind_12
	goto ParcelWeather_T_Oyvind_11

ParcelWeather_T_Oyvind_17:
# 1179 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R5
	goto ParcelWeather_T_Oyvind_16

ParcelWeather_T_Oyvind_18:
# 1178 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R5
	goto_if 0, ParcelWeather_T_Oyvind_17
	goto ParcelWeather_T_Oyvind_16


ParcelWeather_T_Oyvind_FirstWin::
# 1185 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_Text_2, MSGBOX_DEFAULT
# 1186 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R2::
# 1190 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1191 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1192 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_0, MSGBOX_YESNO
# 1193 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R2_2
# 1198 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R2, ParcelWeather_T_Oyvind_R2_Text_2
# 1199 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_3, MSGBOX_DEFAULT
# 1200 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R2_2:
# 1194 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1195 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R3::
# 1204 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1205 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1206 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R3_Text_0, MSGBOX_YESNO
# 1207 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R3_2
# 1212 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R3, ParcelWeather_T_Oyvind_R3_Text_1
# 1213 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R3_Text_2, MSGBOX_DEFAULT
# 1214 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R3_2:
# 1208 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1209 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R4::
# 1218 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1219 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1220 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R4_Text_0, MSGBOX_YESNO
# 1221 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R4_2
# 1226 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R4, ParcelWeather_T_Oyvind_R4_Text_1
# 1227 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R4_Text_2, MSGBOX_DEFAULT
# 1228 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R4_2:
# 1222 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1223 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R5::
# 1232 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1233 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1234 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R5_Text_0, MSGBOX_YESNO
# 1235 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R5_2
# 1240 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R5, ParcelWeather_T_Oyvind_R5_Text_1
# 1241 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R5_Text_2, MSGBOX_DEFAULT
# 1242 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R5_2:
# 1236 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1237 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_PairGauge::
# 1249 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1250 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_PairGauge_2
# 1255 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeather_PairGauge_3
# 1262 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_9, MSGBOX_DEFAULT
# 1263 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_10, MSGBOX_DEFAULT
# 1264 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_11, MSGBOX_DEFAULT
# 1265 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_12, MSGBOX_DEFAULT
ParcelWeather_PairGauge_1:
# 1267 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_PairGauge_2:
# 1251 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_0, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_1, MSGBOX_DEFAULT
# 1253 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_2, MSGBOX_DEFAULT
# 1254 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_3, MSGBOX_DEFAULT
	goto ParcelWeather_PairGauge_1

ParcelWeather_PairGauge_3:
# 1256 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_4, MSGBOX_DEFAULT
# 1257 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_5, MSGBOX_DEFAULT
# 1258 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_6, MSGBOX_DEFAULT
# 1259 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_7, MSGBOX_DEFAULT
# 1260 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_8, MSGBOX_DEFAULT
	goto ParcelWeather_PairGauge_1


ParcelWeather_PairYard::
# 1272 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1273 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_PairYard_2
# 1279 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeather_PairYard_3
# 1285 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_9, MSGBOX_DEFAULT
# 1286 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_10, MSGBOX_DEFAULT
# 1287 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_11, MSGBOX_DEFAULT
# 1288 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_12, MSGBOX_DEFAULT
# 1289 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_13, MSGBOX_DEFAULT
ParcelWeather_PairYard_1:
# 1291 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_PairYard_2:
# 1274 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_0, MSGBOX_DEFAULT
# 1275 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_1, MSGBOX_DEFAULT
# 1276 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_2, MSGBOX_DEFAULT
# 1277 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_3, MSGBOX_DEFAULT
# 1278 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_4, MSGBOX_DEFAULT
	goto ParcelWeather_PairYard_1

ParcelWeather_PairYard_3:
# 1280 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_5, MSGBOX_DEFAULT
# 1281 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_6, MSGBOX_DEFAULT
# 1282 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_7, MSGBOX_DEFAULT
# 1283 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_8, MSGBOX_DEFAULT
	goto ParcelWeather_PairYard_1


ParcelWeather_PageFortyOne::
# 1298 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FORTYONE, ParcelWeather_PageFortyOne_4
ParcelWeather_PageFortyOne_3:
# 1302 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PageFortyOne_Text_1, MSGBOX_SIGN
ParcelWeather_PageFortyOne_1:
	end

ParcelWeather_PageFortyOne_2:
# 1299 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PageFortyOne_Text_0, MSGBOX_SIGN
# 1300 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALD_Q_FORTYONE_FOUND
	goto ParcelWeather_PageFortyOne_1

ParcelWeather_PageFortyOne_4:
# 1298 "data/maps/ParcelWeather/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FORTYONE_FOUND, ParcelWeather_PageFortyOne_2
	goto ParcelWeather_PageFortyOne_3


ParcelWeather_PairGate::
# 1308 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1309 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_PairGate_2
# 1315 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeather_PairGate_3
# 1322 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_10, MSGBOX_DEFAULT
# 1323 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_11, MSGBOX_DEFAULT
# 1324 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_12, MSGBOX_DEFAULT
# 1325 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_13, MSGBOX_DEFAULT
# 1326 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_14, MSGBOX_DEFAULT
ParcelWeather_PairGate_1:
# 1328 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_PairGate_2:
# 1310 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_0, MSGBOX_DEFAULT
# 1311 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_1, MSGBOX_DEFAULT
# 1312 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_2, MSGBOX_DEFAULT
# 1313 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_3, MSGBOX_DEFAULT
# 1314 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_4, MSGBOX_DEFAULT
	goto ParcelWeather_PairGate_1

ParcelWeather_PairGate_3:
# 1316 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_5, MSGBOX_DEFAULT
# 1317 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_6, MSGBOX_DEFAULT
# 1318 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_7, MSGBOX_DEFAULT
# 1319 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_8, MSGBOX_DEFAULT
# 1320 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGate_Text_9, MSGBOX_DEFAULT
	goto ParcelWeather_PairGate_1


ParcelWeather_Board1::
# 1335 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Board1_Text_0, MSGBOX_SIGN
	end


ParcelWeather_Board2::
# 1340 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Board2_Text_0, MSGBOX_SIGN
	end


ParcelWeather_Board3::
# 1347 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Board3_Text_0, MSGBOX_SIGN
	end


ParcelWeather_GateHut::
# 1354 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_GateHut_Text_0, MSGBOX_SIGN
	end


ParcelWeather_Board6::
# 1359 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Board6_Text_0, MSGBOX_SIGN
	end


ParcelWeather_Board8::
# 1364 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Board8_Text_0, MSGBOX_SIGN
	end


ParcelWeather_Board9::
# 1369 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Board9_Text_0, MSGBOX_SIGN
	end


ParcelWeather_PairFence::
# 1374 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1375 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_PairFence_2
# 1379 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FOREST_CERT, ParcelWeather_PairFence_3
# 1385 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_7, MSGBOX_DEFAULT
# 1386 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_8, MSGBOX_DEFAULT
# 1387 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_9, MSGBOX_DEFAULT
# 1388 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_10, MSGBOX_DEFAULT
# 1389 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_11, MSGBOX_DEFAULT
ParcelWeather_PairFence_1:
# 1391 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_PairFence_2:
# 1376 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_0, MSGBOX_DEFAULT
# 1377 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_1, MSGBOX_DEFAULT
# 1378 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_2, MSGBOX_DEFAULT
	goto ParcelWeather_PairFence_1

ParcelWeather_PairFence_3:
# 1380 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_3, MSGBOX_DEFAULT
# 1381 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_4, MSGBOX_DEFAULT
# 1382 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_5, MSGBOX_DEFAULT
# 1383 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairFence_Text_6, MSGBOX_DEFAULT
	goto ParcelWeather_PairFence_1


ParcelWeather_FirstEntry_Text_0:
# 28 "data/maps/ParcelWeather/scripts.pory"
	.string "A sign over the landing: MEREHOLT\n"
	.string "CLIMATE FUTURES -- ATMOSPHERIC\l"
	.string "DIVISION. Managing tomorrow's weather,\l"
	.string "today.\p"
	.string "Fans. Instruments. Four plots up the\n"
	.string "slope, each under its own private sky:\l"
	.string "rain on one, a fine afternoon on the\l"
	.string "next, sand, frost.$"

ParcelWeather_FirstEntry_Text_1:
# 29 "data/maps/ParcelWeather/scripts.pory"
	.string "The whole journey has been the real\n"
	.string "weather. The thaw, the bloom, the\l"
	.string "failing marsh.\p"
	.string "These are the people paid to call it\n"
	.string "adjustable. Beat them on their own\l"
	.string "plots. Then take what they know\l"
	.string "somewhere it might do some good.$"

ParcelWeather_Rain_Text_0:
# 38 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Hydrology Division. I don't\n"
	.string "forecast the rain, RANGER. I make it.\l"
	.string "Stand under this and learn.$"

ParcelWeather_Rain_Text_1:
# 39 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: …Hm. The model held. The team\n"
	.string "didn't. I hate when those come apart\l"
	.string "separately.$"

ParcelWeather_Rain_Text_2:
# 54 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: We can drop a monsoon on a\n"
	.string "test plot to order. People see the demo\l"
	.string "and assume we can end a drought.\p"
	.string "We can't. We can only move the misery to\n"
	.string "someone else's map. But the demo is\l"
	.string "what gets funded.$"

ParcelWeather_Rain_R2_Text_0:
# 65 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWeather_Rain_R2_Text_1:
# 67 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWeather_Rain_R2_Text_2:
# 71 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Right. That's the whole of it.$"

ParcelWeather_Rain_R2_Text_3:
# 72 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelWeather_Rain_R3_Text_0:
# 79 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWeather_Rain_R3_Text_1:
# 86 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Rain_R4_Text_0:
# 93 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelWeather_Rain_R4_Text_1:
# 99 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Still yours.$"

ParcelWeather_Rain_R4_Text_2:
# 100 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Rain_R5_Text_0:
# 107 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelWeather_Rain_R5_Text_1:
# 114 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWeather_Sun_Text_0:
# 120 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Solar Forcing. I keep this plot\n"
	.string "in a permanent fine afternoon. Nothing\l"
	.string "dies of a fine afternoon. Until it does.$"

ParcelWeather_Sun_Text_1:
# 121 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Bright work. You don't wilt. Most\n"
	.string "do, in my weather.$"

ParcelWeather_Sun_Text_2:
# 136 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: A little more sun, a longer\n"
	.string "season, a bigger yield. That's the pitch.\l"
	.string "They leave out the part where the soil\l"
	.string "cooks and the water leaves.\p"
	.string "Pleasant is not the same as alive. I tell\n"
	.string "them. They like pleasant.$"

ParcelWeather_Sun_R2_Text_0:
# 147 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWeather_Sun_R2_Text_1:
# 149 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Another time, then.$"

ParcelWeather_Sun_R2_Text_2:
# 153 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Right. That's the whole of it.$"

ParcelWeather_Sun_R2_Text_3:
# 154 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Sun_R3_Text_0:
# 161 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWeather_Sun_R3_Text_1:
# 167 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Still yours.$"

ParcelWeather_Sun_R3_Text_2:
# 168 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Sun_R4_Text_0:
# 175 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWeather_Sun_R4_Text_1:
# 181 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: …Again, then. Later.$"

ParcelWeather_Sun_R4_Text_2:
# 182 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Sun_R5_Text_0:
# 189 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWeather_Sun_R5_Text_1:
# 196 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_Sand_Text_0:
# 202 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Aridity Division. This plot used\n"
	.string "to be marsh. I made it a desert in a\l"
	.string "season, for science. Watch your\l"
	.string "footing.$"

ParcelWeather_Sand_Text_1:
# 203 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Grit, you've got. Fitting. It's the\n"
	.string "only thing that grows in my conditions.$"

ParcelWeather_Sand_Text_2:
# 218 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: My job is proving a dried-out\n"
	.string "place can still 'support managed use'.\l"
	.string "It can support a sandstorm and a\l"
	.string "lawsuit, mostly.\p"
	.string "You can take a wetland apart fast.\n"
	.string "Putting one back is not in my budget\l"
	.string "line.$"

ParcelWeather_Sand_R2_Text_0:
# 229 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I kept the team up for this.\n"
	.string "Again?$"

ParcelWeather_Sand_R2_Text_1:
# 231 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Fine. Same spot.$"

ParcelWeather_Sand_R2_Text_2:
# 235 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Still yours.$"

ParcelWeather_Sand_R2_Text_3:
# 236 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Sand_R3_Text_0:
# 243 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWeather_Sand_R3_Text_1:
# 249 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Noted. Properly, this time.$"

ParcelWeather_Sand_R3_Text_2:
# 250 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Sand_R4_Text_0:
# 257 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWeather_Sand_R4_Text_1:
# 264 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_Sand_R5_Text_0:
# 271 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelWeather_Sand_R5_Text_1:
# 278 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Ice_Text_0:
# 284 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Cryosphere Division. I keep one\n"
	.string "plot frozen while the world thaws. It\l"
	.string "costs a fortune. That's rather the\l"
	.string "point.$"

ParcelWeather_Ice_Text_1:
# 285 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Cold-blooded battling. I\n"
	.string "approve. The warm-hearted ones never\l"
	.string "last my hail.$"

ParcelWeather_Ice_Text_2:
# 300 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I can hold ice on a single square\n"
	.string "against the whole summer, if you pay\l"
	.string "the power bill.\p"
	.string "That's what 'climate resilience' means\n"
	.string "once you read the invoice. A frozen plot\l"
	.string "for whoever can afford one.$"

ParcelWeather_Ice_R2_Text_0:
# 311 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWeather_Ice_R2_Text_1:
# 313 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: No hurry. The water keeps.$"

ParcelWeather_Ice_R2_Text_2:
# 317 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Still yours.$"

ParcelWeather_Ice_R2_Text_3:
# 318 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Ice_R3_Text_0:
# 325 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWeather_Ice_R3_Text_1:
# 331 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: That's the one I wanted to see.$"

ParcelWeather_Ice_R3_Text_2:
# 332 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Ice_R4_Text_0:
# 339 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelWeather_Ice_R4_Text_1:
# 345 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Right. That's the whole of it.$"

ParcelWeather_Ice_R4_Text_2:
# 346 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Ice_R5_Text_0:
# 353 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelWeather_Ice_R5_Text_1:
# 359 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: …Fair.$"

ParcelWeather_Ice_R5_Text_2:
# 360 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_Ask_Text_0:
# 368 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Breeder, Hydrology plot. My\n"
	.string "CASTFORM changes with the plot. So do\l"
	.string "I. Battle.$"

ParcelWeather_Ask_Text_1:
# 369 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Changed again.$"

ParcelWeather_Ask_Text_2:
# 384 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: CASTFORM's the station mascot. It\n"
	.string "becomes whatever sky you put it under.\l"
	.string "The director says that's the whole\l"
	.string "philosophy. He doesn't say it like a\l"
	.string "compliment.$"

ParcelWeather_Ask_R2_Text_0:
# 395 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: I kept the team up for this. Again?$"

ParcelWeather_Ask_R2_Text_1:
# 397 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: No hurry. The water keeps.$"

ParcelWeather_Ask_R2_Text_2:
# 401 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Right. That's the whole of it.$"

ParcelWeather_Ask_R2_Text_3:
# 402 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Ask_R3_Text_0:
# 409 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWeather_Ask_R3_Text_1:
# 415 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: …Fair.$"

ParcelWeather_Ask_R3_Text_2:
# 416 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Ask_R4_Text_0:
# 423 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelWeather_Ask_R4_Text_1:
# 429 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: …Again, then. Later.$"

ParcelWeather_Ask_R4_Text_2:
# 430 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Ask_R5_Text_0:
# 437 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Ask_R5_Text_1:
# 443 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Noted. Properly, this time.$"

ParcelWeather_Ask_R5_Text_2:
# 444 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Brit_Text_0:
# 450 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Solar plot. We're at thirty-one\n"
	.string "days without rain, on purpose. Battle\l"
	.string "before the NUMEL overheats.$"

ParcelWeather_Brit_Text_1:
# 451 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: It overheated.$"

ParcelWeather_Brit_Text_2:
# 466 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Day thirty-two tomorrow. The\n"
	.string "grass went brown on day nine. Nobody's\l"
	.string "written that down. It's not a result,\l"
	.string "it's a side effect.$"

ParcelWeather_Brit_R2_Text_0:
# 477 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWeather_Brit_R2_Text_1:
# 479 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Fine. Same spot.$"

ParcelWeather_Brit_R2_Text_2:
# 483 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: …Again, then. Later.$"

ParcelWeather_Brit_R2_Text_3:
# 484 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Brit_R3_Text_0:
# 491 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWeather_Brit_R3_Text_1:
# 497 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: …Fair.$"

ParcelWeather_Brit_R3_Text_2:
# 498 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Brit_R4_Text_0:
# 505 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWeather_Brit_R4_Text_1:
# 511 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Right. That's the whole of it.$"

ParcelWeather_Brit_R4_Text_2:
# 512 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Brit_R5_Text_0:
# 519 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelWeather_Brit_R5_Text_1:
# 526 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Cato_Text_0:
# 532 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Aridity plot. I shovel sand onto a\n"
	.string "marsh for a living. Battle. Please.$"

ParcelWeather_Cato_Text_1:
# 533 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Thanks. Needed that.$"

ParcelWeather_Cato_Text_2:
# 548 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: There were POLIWAG in this plot\n"
	.string "when I started. I don't know where they\l"
	.string "went. I know I'm not supposed to ask.$"

ParcelWeather_Cato_R2_Text_0:
# 559 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWeather_Cato_R2_Text_1:
# 561 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Suit yourself. I'm here.$"

ParcelWeather_Cato_R2_Text_2:
# 565 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: That's the one I wanted to see.$"

ParcelWeather_Cato_R2_Text_3:
# 566 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Cato_R3_Text_0:
# 573 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWeather_Cato_R3_Text_1:
# 579 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Noted. Properly, this time.$"

ParcelWeather_Cato_R3_Text_2:
# 580 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Cato_R4_Text_0:
# 587 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWeather_Cato_R4_Text_1:
# 593 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Right. That's the whole of it.$"

ParcelWeather_Cato_R4_Text_2:
# 594 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_Cato_R5_Text_0:
# 601 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Cato_R5_Text_1:
# 608 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWeather_Dis_Text_0:
# 614 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Cryosphere plot. We keep one\n"
	.string "square frozen. It's the most expensive\l"
	.string "square on the island. Battle.$"

ParcelWeather_Dis_Text_1:
# 615 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Expensive loss.$"

ParcelWeather_Dis_Text_2:
# 630 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: The power for the ice plot comes\n"
	.string "up from the coast works. The coast\l"
	.string "works run on the catch. So the frozen\l"
	.string "square is made of fish, if you follow it\l"
	.string "back.$"

ParcelWeather_Dis_R2_Text_0:
# 641 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: I kept the team up for this. Again?$"

ParcelWeather_Dis_R2_Text_1:
# 643 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Suit yourself. I'm here.$"

ParcelWeather_Dis_R2_Text_2:
# 647 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Still yours.$"

ParcelWeather_Dis_R2_Text_3:
# 648 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Dis_R3_Text_0:
# 655 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWeather_Dis_R3_Text_1:
# 661 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Noted. Properly, this time.$"

ParcelWeather_Dis_R3_Text_2:
# 662 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Dis_R4_Text_0:
# 669 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWeather_Dis_R4_Text_1:
# 675 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: …Again, then. Later.$"

ParcelWeather_Dis_R4_Text_2:
# 676 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Dis_R5_Text_0:
# 683 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Dis_R5_Text_1:
# 690 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Ebba_Text_0:
# 696 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Corps liaison. I'm meant to\n"
	.string "observe. Observing's dull. Spar.$"

ParcelWeather_Ebba_Text_1:
# 697 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Observed.$"

ParcelWeather_Ebba_Text_2:
# 712 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: HALE sent me to count what the\n"
	.string "station publishes against what it\l"
	.string "measures. Two different numbers. Every\l"
	.string "month.$"

ParcelWeather_Ebba_R2_Text_0:
# 723 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWeather_Ebba_R2_Text_1:
# 725 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Suit yourself. I'm here.$"

ParcelWeather_Ebba_R2_Text_2:
# 729 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Right. That's the whole of it.$"

ParcelWeather_Ebba_R2_Text_3:
# 730 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Ebba_R3_Text_0:
# 737 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWeather_Ebba_R3_Text_1:
# 743 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: That's the one I wanted to see.$"

ParcelWeather_Ebba_R3_Text_2:
# 744 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Ebba_R4_Text_0:
# 751 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelWeather_Ebba_R4_Text_1:
# 757 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Noted. Properly, this time.$"

ParcelWeather_Ebba_R4_Text_2:
# 758 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Ebba_R5_Text_0:
# 765 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Ebba_R5_Text_1:
# 772 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWeather_Frode_Text_0:
# 778 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I study the old ground under the\n"
	.string "plots. Pollen. Peat. What the weather\l"
	.string "WAS. Nobody funds what was. Battle.$"

ParcelWeather_Frode_Text_1:
# 779 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: What was, lost to what is.$"

ParcelWeather_Frode_Text_2:
# 794 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: The peat says this slope had a\n"
	.string "marsh for nine thousand years. The\l"
	.string "plot's had sand for one. Guess which\l"
	.string "one's in the brochure.$"

ParcelWeather_Frode_R2_Text_0:
# 805 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I kept the team up for this.\n"
	.string "Again?$"

ParcelWeather_Frode_R2_Text_1:
# 807 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWeather_Frode_R2_Text_2:
# 811 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: That's the one I wanted to see.$"

ParcelWeather_Frode_R2_Text_3:
# 812 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Frode_R3_Text_0:
# 819 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWeather_Frode_R3_Text_1:
# 825 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Still yours.$"

ParcelWeather_Frode_R3_Text_2:
# 826 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Frode_R4_Text_0:
# 833 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWeather_Frode_R4_Text_1:
# 839 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: …Again, then. Later.$"

ParcelWeather_Frode_R4_Text_2:
# 840 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Frode_R5_Text_0:
# 847 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWeather_Frode_R5_Text_1:
# 854 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWeather_Gaute_Text_0:
# 860 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: I fly the instrument birds.\n"
	.string "SWELLOW with sensors. They hate it.\l"
	.string "Battle.$"

ParcelWeather_Gaute_Text_1:
# 861 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: They'd have won.$"

ParcelWeather_Gaute_Text_2:
# 865 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: Two of us who've read the\n"
	.string "drawer. The director and you. I only fly\l"
	.string "the birds.$"

ParcelWeather_Gaute_Text_3:
# 870 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: Rain up a third. Frost days\n"
	.string "halved. Nobody signed it. …Not mad,\l"
	.string "then.\p"
	.string "Take these. The director leaves them\n"
	.string "for people who've read the drawer.\l"
	.string "There's been two of us.$"

ParcelWeather_Gaute_Text_4:
# 876 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: The birds read the real sky, over\n"
	.string "the fence. The plots read the pretend\l"
	.string "sky. The director keeps both sets. He\l"
	.string "only publishes one.\p"
	.string "The real one's in a drawer in the\n"
	.string "institute, ground floor, under the\l"
	.string "mission board. Read it. Then tell me I'm\l"
	.string "not mad.$"

ParcelWeather_Hege_Text_0:
# 883 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The bridge is the best place to\n"
	.string "think. The water doesn't care what the\l"
	.string "plots say. Battle me on it.$"

ParcelWeather_Hege_Text_1:
# 884 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The water still doesn't care.$"

ParcelWeather_Hege_Text_2:
# 899 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The director isn't a liar. That's\n"
	.string "what's hard. He knows exactly what the\l"
	.string "station is. He runs it anyway, so\l"
	.string "somebody honest does.$"

ParcelWeather_Hege_R2_Text_0:
# 910 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWeather_Hege_R2_Text_1:
# 912 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Another time, then.$"

ParcelWeather_Hege_R2_Text_2:
# 916 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: …Again, then. Later.$"

ParcelWeather_Hege_R2_Text_3:
# 917 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Hege_R3_Text_0:
# 924 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWeather_Hege_R3_Text_1:
# 930 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: That's the one I wanted to see.$"

ParcelWeather_Hege_R3_Text_2:
# 931 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Hege_R4_Text_0:
# 938 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelWeather_Hege_R4_Text_1:
# 944 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Noted. Properly, this time.$"

ParcelWeather_Hege_R4_Text_2:
# 945 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_Hege_R5_Text_0:
# 952 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWeather_Hege_R5_Text_1:
# 958 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: …Fair.$"

ParcelWeather_Hege_R5_Text_2:
# 959 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWeather_ReturnFerry_Text_0:
# 971 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Back to SALTWICK? The\n"
	.string "station's logbooks are in the review,\l"
	.string "both of them. VANE handed them over\l"
	.string "himself. Honest air out there, and now a\l"
	.string "bit in here too.$"

ParcelWeather_ReturnFerry_Text_1:
# 973 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Honest air out there, at least.\l"
	.string "Whatever they sell in here, it isn't\l"
	.string "that.$"

ParcelWeather_ReturnFerry_Text_2:
# 976 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Take your time. Mind the fans.$"

ParcelWeather_SignGate_Text_0:
# 990 "data/maps/ParcelWeather/scripts.pory"
	.string "MEREHOLT CLIMATE FUTURES --\n"
	.string "ATMOSPHERIC DIVISION\p"
	.string "Managing tomorrow's weather, today.\n"
	.string "Visitors report to the institute. Plots\l"
	.string "are live: do not enter a plot during a\l"
	.string "demonstration.$"

ParcelWeather_SignPlots_Text_0:
# 994 "data/maps/ParcelWeather/scripts.pory"
	.string "TEST PLOTS. North-west: Aridity.\n"
	.string "North-east: Solar Forcing. East slope:\l"
	.string "Cryosphere. River: Hydrology.\p"
	.string "The real sky is not a plot.$"

ParcelWeather_T_Amund_Text_0:
# 1001 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Up the east slope. The frost\n"
	.string "plot's behind me. It hums. Battle.$"

ParcelWeather_T_Amund_Text_1:
# 1002 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Humming's louder than I am,\n"
	.string "apparently.$"

ParcelWeather_T_Amund_Text_2:
# 1017 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: One frozen square on a warming\n"
	.string "hill. I asked what it's for.\l"
	.string "'Demonstration.' Of what? Nobody said.$"

ParcelWeather_T_Amund_R2_Text_0:
# 1028 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWeather_T_Amund_R2_Text_1:
# 1030 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Another time, then.$"

ParcelWeather_T_Amund_R2_Text_2:
# 1034 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Still yours.$"

ParcelWeather_T_Amund_R2_Text_3:
# 1035 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_T_Amund_R3_Text_0:
# 1042 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWeather_T_Amund_R3_Text_1:
# 1048 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: That's the one I wanted to see.$"

ParcelWeather_T_Amund_R3_Text_2:
# 1049 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_T_Amund_R4_Text_0:
# 1056 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWeather_T_Amund_R4_Text_1:
# 1063 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_T_Amund_R5_Text_0:
# 1070 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelWeather_T_Amund_R5_Text_1:
# 1076 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: …Again, then. Later.$"

ParcelWeather_T_Amund_R5_Text_2:
# 1077 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_T_Ragnhild_Text_0:
# 1083 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Breeder, east plots.\n"
	.string "CASTFORM for the demos, LUDICOLO for\l"
	.string "the rain. Battle.$"

ParcelWeather_T_Ragnhild_Text_1:
# 1084 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Rained on.$"

ParcelWeather_T_Ragnhild_Text_2:
# 1099 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: The station publishes the\n"
	.string "plot weather. The real weather goes in a\l"
	.string "drawer. I've seen the drawer.$"

ParcelWeather_T_Ragnhild_R2_Text_0:
# 1110 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelWeather_T_Ragnhild_R2_Text_1:
# 1112 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWeather_T_Ragnhild_R2_Text_2:
# 1116 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: …Fair.$"

ParcelWeather_T_Ragnhild_R2_Text_3:
# 1117 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelWeather_T_Ragnhild_R3_Text_0:
# 1124 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelWeather_T_Ragnhild_R3_Text_1:
# 1130 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: That's the one I wanted to\n"
	.string "see.$"

ParcelWeather_T_Ragnhild_R3_Text_2:
# 1131 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: One more in me. After the\n"
	.string "high ground.$"

ParcelWeather_T_Ragnhild_R4_Text_0:
# 1138 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelWeather_T_Ragnhild_R4_Text_1:
# 1144 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Noted. Properly, this time.$"

ParcelWeather_T_Ragnhild_R4_Text_2:
# 1145 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_T_Ragnhild_R5_Text_0:
# 1152 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Last one. I've put\n"
	.string "everything I've got into this team. Go?$"

ParcelWeather_T_Ragnhild_R5_Text_1:
# 1159 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWeather_T_Oyvind_Text_0:
# 1165 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Instrument birds. XATU reads\n"
	.string "the sky better than the plots do.\l"
	.string "Battle before it tells me how this ends.$"

ParcelWeather_T_Oyvind_Text_1:
# 1166 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: It told me.$"

ParcelWeather_T_Oyvind_Text_2:
# 1181 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: XATU watches the real sky over\n"
	.string "the fence. The real sky's not for sale.\l"
	.string "The plots are.$"

ParcelWeather_T_Oyvind_R2_Text_0:
# 1192 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelWeather_T_Oyvind_R2_Text_1:
# 1194 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Suit yourself. I'm here.$"

ParcelWeather_T_Oyvind_R2_Text_2:
# 1198 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Right. That's the whole of it.$"

ParcelWeather_T_Oyvind_R2_Text_3:
# 1199 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_T_Oyvind_R3_Text_0:
# 1206 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelWeather_T_Oyvind_R3_Text_1:
# 1212 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: …Fair.$"

ParcelWeather_T_Oyvind_R3_Text_2:
# 1213 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_T_Oyvind_R4_Text_0:
# 1220 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWeather_T_Oyvind_R4_Text_1:
# 1226 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: That's the one I wanted to see.$"

ParcelWeather_T_Oyvind_R4_Text_2:
# 1227 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_T_Oyvind_R5_Text_0:
# 1234 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWeather_T_Oyvind_R5_Text_1:
# 1240 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Still yours.$"

ParcelWeather_T_Oyvind_R5_Text_2:
# 1241 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_PairGauge_Text_0:
# 1251 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: The Council wants the\n"
	.string "Station's series. All forty years,\l"
	.string "certified. For the review.$"

ParcelWeather_PairGauge_Text_1:
# 1252 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Then they'll get the brackets\n"
	.string "too. The brackets are the series.$"

ParcelWeather_PairGauge_Text_2:
# 1253 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: They won't like the\n"
	.string "brackets.$"

ParcelWeather_PairGauge_Text_3:
# 1254 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Nobody likes the brackets.\n"
	.string "VANE says that's how you know they're\l"
	.string "true. Pack the book. Carefully. It's the\l"
	.string "only one.$"

ParcelWeather_PairGauge_Text_4:
# 1256 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: VANE cleared the ranger. First\n"
	.string "one through the gauntlet in two years\l"
	.string "who read the instruments before\l"
	.string "fighting the instrument-keepers.$"

ParcelWeather_PairGauge_Text_5:
# 1257 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: Is that the order it's\n"
	.string "meant to go?$"

ParcelWeather_PairGauge_Text_6:
# 1258 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: It's the order VANE's always\n"
	.string "said. Nobody listened. Now one did.$"

ParcelWeather_PairGauge_Text_7:
# 1259 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: What did the ranger read?$"

ParcelWeather_PairGauge_Text_8:
# 1260 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Everything with a date on it.\n"
	.string "Then asked why the fifth gauge was\l"
	.string "drawn where the falls aren't.$"

ParcelWeather_PairGauge_Text_9:
# 1262 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: The ice-out book's missing\n"
	.string "a year. Someone tore the page.$"

ParcelWeather_PairGauge_Text_10:
# 1263 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Nobody tore it. It was the year\n"
	.string "with no ice. The clerk couldn't bring\l"
	.string "himself to write it and left the page.$"

ParcelWeather_PairGauge_Text_11:
# 1264 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: So the gap's the reading.$"

ParcelWeather_PairGauge_Text_12:
# 1265 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: The gap's the reading. I've\n"
	.string "started putting the gaps in brackets.\l"
	.string "It's the only way the column stays a\l"
	.string "column.$"

ParcelWeather_PairYard_Text_0:
# 1274 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: VANE's been asked to testify. In\n"
	.string "the review. With the book.$"

ParcelWeather_PairYard_Text_1:
# 1275 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: VANE hates rooms.$"

ParcelWeather_PairYard_Text_2:
# 1276 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: VANE hates rooms that don't have\n"
	.string "weather in them. This one will. The\l"
	.string "ranger made sure the windows are the\l"
	.string "evidence.$"

ParcelWeather_PairYard_Text_3:
# 1277 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: I don't understand that.$"

ParcelWeather_PairYard_Text_4:
# 1278 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: Eat your breakfast. You will.$"

ParcelWeather_PairYard_Text_5:
# 1280 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: The ranger walked down slow.$"

ParcelWeather_PairYard_Text_6:
# 1281 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: Told you.$"

ParcelWeather_PairYard_Text_7:
# 1282 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: Stopped at the gate stake and\n"
	.string "read the whole thing. Then looked back\l"
	.string "at the yard like it had said something.$"

ParcelWeather_PairYard_Text_8:
# 1283 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: It had. The yard's been saying it\n"
	.string "for forty years. Takes a certain kind of\l"
	.string "ear.$"

ParcelWeather_PairYard_Text_9:
# 1285 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: The gauntlet four eat like a\n"
	.string "landslide. Four breakfasts before the\l"
	.string "fog's off the yard.$"

ParcelWeather_PairYard_Text_10:
# 1286 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: They say the ranger's coming up\n"
	.string "the road. On foot. Alone.$"

ParcelWeather_PairYard_Text_11:
# 1287 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: They all come up alone. It's the\n"
	.string "going down that tells you anything.$"

ParcelWeather_PairYard_Text_12:
# 1288 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: How?$"

ParcelWeather_PairYard_Text_13:
# 1289 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: The ones who read the yard on the\n"
	.string "way down walk slower. Watch for it.$"

ParcelWeather_PageFortyOne_Text_0:
# 1299 "data/maps/ParcelWeather/scripts.pory"
	.string "A page from a ledger, pinned under a\n"
	.string "stone by somebody who found it before\l"
	.string "you and did not know what to do with it.\l"
	.string "Page forty-one. ICE OUT: and no date.\l"
	.string "NO ICE, underlined twice, and a question\l"
	.string "mark rubbed to a ghost.\p"
	.string "You fold it into the notebook. It is the\n"
	.string "loudest page you have carried.$"

ParcelWeather_PageFortyOne_Text_1:
# 1302 "data/maps/ParcelWeather/scripts.pory"
	.string "A stone where a page was. Somebody has\n"
	.string "written on the stone, small: 41.$"

ParcelWeather_PairGate_Text_0:
# 1310 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: The Council wants the series\n"
	.string "certified. All forty years. With the\l"
	.string "brackets.$"

ParcelWeather_PairGate_Text_1:
# 1311 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: You said the brackets weren't a\n"
	.string "flaw.$"

ParcelWeather_PairGate_Text_2:
# 1312 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: I said scope. I've stopped\n"
	.string "saying scope. The director took the\l"
	.string "word out of the building. He said we'd\l"
	.string "used it to mean 'the part we don't want\l"
	.string "to look at' for eleven years.$"

ParcelWeather_PairGate_Text_3:
# 1313 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: What do we say instead?$"

ParcelWeather_PairGate_Text_4:
# 1314 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: What happened. Apparently\n"
	.string "that's a technical term now.$"

ParcelWeather_PairGate_Text_5:
# 1316 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: The ranger beat the four and\n"
	.string "then the director. Then asked the\l"
	.string "director what Scenario D was.$"

ParcelWeather_PairGate_Text_6:
# 1317 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: There isn't a Scenario D.$"

ParcelWeather_PairGate_Text_7:
# 1318 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: There is now. The technician\n"
	.string "pinned it under the others. It's the\l"
	.string "over-the-fence log.$"

ParcelWeather_PairGate_Text_8:
# 1319 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: That's not a scenario. That's\n"
	.string "what happened.$"

ParcelWeather_PairGate_Text_9:
# 1320 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: Yes.$"

ParcelWeather_PairGate_Text_10:
# 1322 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: Scenario C says full\n"
	.string "management holds the sky to within a\l"
	.string "degree.$"

ParcelWeather_PairGate_Text_11:
# 1323 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: Over what period?$"

ParcelWeather_PairGate_Text_12:
# 1324 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: The funding period.$"

ParcelWeather_PairGate_Text_13:
# 1325 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: …And after?$"

ParcelWeather_PairGate_Text_14:
# 1326 "data/maps/ParcelWeather/scripts.pory"
	.string "MODELLER: After isn't in the scenario.\n"
	.string "That's not a flaw. That's a scope.$"

ParcelWeather_Board1_Text_0:
# 1335 "data/maps/ParcelWeather/scripts.pory"
	.string "A SURVEY BOARD at the Institute gate,\n"
	.string "with the Institute's permission\l"
	.string "stamped on it. The Station has measured\l"
	.string "the weather for forty years and the\l"
	.string "Survey has counted what lives in it for\l"
	.string "thirty.\p"
	.string "The board sets the two columns side by\n"
	.string "side. The temperature column rises. The\l"
	.string "count column does not keep up. That is\l"
	.string "the finding.$"

ParcelWeather_Board2_Text_0:
# 1340 "data/maps/ParcelWeather/scripts.pory"
	.string "A SURVEY BOARD, the only one with a\n"
	.string "graph. First frost by year, from the\l"
	.string "Station's own records, plotted by the\l"
	.string "Survey because the Station would not.\p"
	.string "The line walks right across the board.\n"
	.string "The last point is off the edge, on the\l"
	.string "post.$"

ParcelWeather_Board3_Text_0:
# 1347 "data/maps/ParcelWeather/scripts.pory"
	.string "A SURVEY BOARD at the Institute's wall.\n"
	.string "Rain gauge readings, the Institute's,\l"
	.string "copied by the Survey beside the WOOPER\l"
	.string "count from the pond below the gate.\p"
	.string "The two columns move together for\n"
	.string "twenty years and then stop moving\l"
	.string "together. The board draws a line at the\l"
	.string "year they parted.$"

ParcelWeather_GateHut_Text_0:
# 1354 "data/maps/ParcelWeather/scripts.pory"
	.string "The gate hut, the door swollen shut and\n"
	.string "then not. Inside, pinned to the back\l"
	.string "wall, a sheet gone brown, a column of\l"
	.string "dates and a column of readings in a\l"
	.string "careful hand, the first date\l"
	.string "twenty-three years ago: the\l"
	.string "over-the-fence readings, one a day,\l"
	.string "begun before anyone called them a log.\p"
	.string "At the bottom of the sheet: CONTINUED\n"
	.string "IN THE DRAWER. And newer still, in a\l"
	.string "third hand: CONTINUED IN THE RECORD.$"

ParcelWeather_Board6_Text_0:
# 1359 "data/maps/ParcelWeather/scripts.pory"
	.string "A SURVEY BOARD at the Station fence.\n"
	.string "The weather here is measured, not\l"
	.string "watched: the instruments on the roof\l"
	.string "write the same hour every day and have\l"
	.string "for forty years.\p"
	.string "The board records what the instruments\n"
	.string "cannot. The date the SEEDOT dropped.\l"
	.string "The date the first ELECTRIKE came down\l"
	.string "off the moor for warmth. Both earlier.$"

ParcelWeather_Board8_Text_0:
# 1364 "data/maps/ParcelWeather/scripts.pory"
	.string "A SURVEY BOARD at the moor edge. NUMEL\n"
	.string "come down to the Station's warm vents\l"
	.string "in the cold months and ELECTRIKE to\l"
	.string "the fence line. The board notes which\l"
	.string "arrived first each year.\p"
	.string "For twenty years it was the NUMEL. For\n"
	.string "the last six it has been both on the\l"
	.string "same day, earlier.$"

ParcelWeather_Board9_Text_0:
# 1369 "data/maps/ParcelWeather/scripts.pory"
	.string "A SURVEY BOARD at the Station's back\n"
	.string "fence, where the staff smoke.\l"
	.string "Over-the-fence readings were taken\l"
	.string "here before they had a name, by someone\l"
	.string "who stood exactly where you stand to\l"
	.string "be out of the wind.\p"
	.string "The board marks the spot with a brass\n"
	.string "dot. Stand on it. The Survey's rule: read\l"
	.string "from the same place.$"

ParcelWeather_PairFence_Text_0:
# 1376 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: The Director handed both\n"
	.string "logbooks to the review. The roof one\l"
	.string "and the fence one.$"

ParcelWeather_PairFence_Text_1:
# 1377 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: I didn't know there were two.$"

ParcelWeather_PairFence_Text_2:
# 1378 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: Nobody did. That was the\n"
	.string "second one's whole point. Now there's\l"
	.string "one, and the fence is in it.$"

ParcelWeather_PairFence_Text_3:
# 1380 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: The new provisional passed\n"
	.string "FOREST. First out of Saltwick in nine\l"
	.string "years, the Hall says.$"

ParcelWeather_PairFence_Text_4:
# 1381 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: Nine years. I've logged\n"
	.string "every one of them. I never thought of\l"
	.string "them as a wait.$"

ParcelWeather_PairFence_Text_5:
# 1382 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: What did you think of them as?$"

ParcelWeather_PairFence_Text_6:
# 1383 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: Weather.$"

ParcelWeather_PairFence_Text_7:
# 1385 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: Roof dish reads one point\n"
	.string "two above the century mean.$"

ParcelWeather_PairFence_Text_8:
# 1386 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: Is that a lot?$"

ParcelWeather_PairFence_Text_9:
# 1387 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: It's a number. The Station\n"
	.string "doesn't do a lot. The Station does\l"
	.string "numbers.$"

ParcelWeather_PairFence_Text_10:
# 1388 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: Who does a lot?$"

ParcelWeather_PairFence_Text_11:
# 1389 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: The people who read the\n"
	.string "numbers and then go outside. Not many.$"
