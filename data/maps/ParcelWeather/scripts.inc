ParcelWeather_MapScripts::
# 11 "data/maps/ParcelWeather/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelWeather_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/ParcelWeather/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelWeather_FirstEntry
	.2byte 0


ParcelWeather_FirstEntry::
# 17 "data/maps/ParcelWeather/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_ARRIVAL, ParcelWeather_FirstEntry_2
# 21 "data/maps/ParcelWeather/scripts.pory"
	lockall
# 22 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_FirstEntry_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALDMERE_WEATHER_ARRIVAL
# 25 "data/maps/ParcelWeather/scripts.pory"
	releaseall
	end

ParcelWeather_FirstEntry_2:
	end


ParcelWeather_Rain::
# 31 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_RAIN, ParcelWeather_Rain_Text_0, ParcelWeather_Rain_Text_1, ParcelWeather_Rain_FirstWin
# 35 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 36 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Rain_3
ParcelWeather_Rain_1:
# 39 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Rain_8
ParcelWeather_Rain_6:
# 42 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Rain_13
ParcelWeather_Rain_11:
# 45 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Rain_18
ParcelWeather_Rain_16:
# 48 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Rain_2:
# 37 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R2
	goto ParcelWeather_Rain_1

ParcelWeather_Rain_3:
# 36 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R2
	goto_if 0, ParcelWeather_Rain_2
	goto ParcelWeather_Rain_1

ParcelWeather_Rain_7:
# 40 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R3
	goto ParcelWeather_Rain_6

ParcelWeather_Rain_8:
# 39 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R3
	goto_if 0, ParcelWeather_Rain_7
	goto ParcelWeather_Rain_6

ParcelWeather_Rain_12:
# 43 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R4
	goto ParcelWeather_Rain_11

ParcelWeather_Rain_13:
# 42 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R4
	goto_if 0, ParcelWeather_Rain_12
	goto ParcelWeather_Rain_11

ParcelWeather_Rain_17:
# 46 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Rain_R5
	goto ParcelWeather_Rain_16

ParcelWeather_Rain_18:
# 45 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_RAIN_R5
	goto_if 0, ParcelWeather_Rain_17
	goto ParcelWeather_Rain_16


ParcelWeather_Rain_FirstWin::
# 52 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_Text_2, MSGBOX_DEFAULT
# 53 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R2::
# 57 "data/maps/ParcelWeather/scripts.pory"
	lock
# 58 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 59 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_0, MSGBOX_YESNO
# 60 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R2_2
# 65 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R2, ParcelWeather_Rain_R2_Text_2
# 66 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_3, MSGBOX_DEFAULT
# 67 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R2_2:
# 61 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R3::
# 71 "data/maps/ParcelWeather/scripts.pory"
	lock
# 72 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 73 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R3_Text_0, MSGBOX_YESNO
# 74 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R3_2
# 79 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R3, ParcelWeather_Rain_R2_Text_2
# 80 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R3_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R3_2:
# 75 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 76 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R4::
# 85 "data/maps/ParcelWeather/scripts.pory"
	lock
# 86 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 87 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R4_Text_0, MSGBOX_YESNO
# 88 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R4_2
# 93 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R4, ParcelWeather_Rain_R4_Text_1
# 94 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R4_Text_2, MSGBOX_DEFAULT
# 95 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R4_2:
# 89 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Rain_R5::
# 99 "data/maps/ParcelWeather/scripts.pory"
	lock
# 100 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 101 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R5_Text_0, MSGBOX_YESNO
# 102 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Rain_R5_2
# 107 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_RAIN_R5, ParcelWeather_Rain_R4_Text_1
# 108 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R5_Text_1, MSGBOX_DEFAULT
# 109 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Rain_R5_2:
# 103 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Rain_R2_Text_1, MSGBOX_DEFAULT
# 104 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun::
# 113 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SUN, ParcelWeather_Sun_Text_0, ParcelWeather_Sun_Text_1, ParcelWeather_Sun_FirstWin
# 117 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 118 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Sun_3
ParcelWeather_Sun_1:
# 121 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Sun_8
ParcelWeather_Sun_6:
# 124 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Sun_13
ParcelWeather_Sun_11:
# 127 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Sun_18
ParcelWeather_Sun_16:
# 130 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Sun_2:
# 119 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R2
	goto ParcelWeather_Sun_1

ParcelWeather_Sun_3:
# 118 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R2
	goto_if 0, ParcelWeather_Sun_2
	goto ParcelWeather_Sun_1

ParcelWeather_Sun_7:
# 122 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R3
	goto ParcelWeather_Sun_6

ParcelWeather_Sun_8:
# 121 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R3
	goto_if 0, ParcelWeather_Sun_7
	goto ParcelWeather_Sun_6

ParcelWeather_Sun_12:
# 125 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R4
	goto ParcelWeather_Sun_11

ParcelWeather_Sun_13:
# 124 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R4
	goto_if 0, ParcelWeather_Sun_12
	goto ParcelWeather_Sun_11

ParcelWeather_Sun_17:
# 128 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sun_R5
	goto ParcelWeather_Sun_16

ParcelWeather_Sun_18:
# 127 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SUN_R5
	goto_if 0, ParcelWeather_Sun_17
	goto ParcelWeather_Sun_16


ParcelWeather_Sun_FirstWin::
# 134 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_Text_2, MSGBOX_DEFAULT
# 135 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R2::
# 139 "data/maps/ParcelWeather/scripts.pory"
	lock
# 140 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 141 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_0, MSGBOX_YESNO
# 142 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R2_2
# 147 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R2, ParcelWeather_Sun_R2_Text_2
# 148 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_3, MSGBOX_DEFAULT
# 149 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R2_2:
# 143 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 144 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R3::
# 153 "data/maps/ParcelWeather/scripts.pory"
	lock
# 154 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 155 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R3_Text_0, MSGBOX_YESNO
# 156 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R3_2
# 161 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R3, ParcelWeather_Sun_R3_Text_1
# 162 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R3_Text_2, MSGBOX_DEFAULT
# 163 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R3_2:
# 157 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 158 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R4::
# 167 "data/maps/ParcelWeather/scripts.pory"
	lock
# 168 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 169 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R4_Text_0, MSGBOX_YESNO
# 170 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R4_2
# 175 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R4, ParcelWeather_Sun_R4_Text_1
# 176 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R4_Text_2, MSGBOX_DEFAULT
# 177 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R4_2:
# 171 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 172 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sun_R5::
# 181 "data/maps/ParcelWeather/scripts.pory"
	lock
# 182 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 183 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R5_Text_0, MSGBOX_YESNO
# 184 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sun_R5_2
# 189 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SUN_R5, ParcelWeather_Sun_R3_Text_1
# 190 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R5_Text_1, MSGBOX_DEFAULT
# 191 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sun_R5_2:
# 185 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sun_R2_Text_1, MSGBOX_DEFAULT
# 186 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand::
# 195 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SAND, ParcelWeather_Sand_Text_0, ParcelWeather_Sand_Text_1, ParcelWeather_Sand_FirstWin
# 199 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 200 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Sand_3
ParcelWeather_Sand_1:
# 203 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Sand_8
ParcelWeather_Sand_6:
# 206 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Sand_13
ParcelWeather_Sand_11:
# 209 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Sand_18
ParcelWeather_Sand_16:
# 212 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Sand_2:
# 201 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R2
	goto ParcelWeather_Sand_1

ParcelWeather_Sand_3:
# 200 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R2
	goto_if 0, ParcelWeather_Sand_2
	goto ParcelWeather_Sand_1

ParcelWeather_Sand_7:
# 204 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R3
	goto ParcelWeather_Sand_6

ParcelWeather_Sand_8:
# 203 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R3
	goto_if 0, ParcelWeather_Sand_7
	goto ParcelWeather_Sand_6

ParcelWeather_Sand_12:
# 207 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R4
	goto ParcelWeather_Sand_11

ParcelWeather_Sand_13:
# 206 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R4
	goto_if 0, ParcelWeather_Sand_12
	goto ParcelWeather_Sand_11

ParcelWeather_Sand_17:
# 210 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Sand_R5
	goto ParcelWeather_Sand_16

ParcelWeather_Sand_18:
# 209 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_SAND_R5
	goto_if 0, ParcelWeather_Sand_17
	goto ParcelWeather_Sand_16


ParcelWeather_Sand_FirstWin::
# 216 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_Text_2, MSGBOX_DEFAULT
# 217 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R2::
# 221 "data/maps/ParcelWeather/scripts.pory"
	lock
# 222 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 223 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_0, MSGBOX_YESNO
# 224 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R2_2
# 229 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R2, ParcelWeather_Sand_R2_Text_2
# 230 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_3, MSGBOX_DEFAULT
# 231 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R2_2:
# 225 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 226 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R3::
# 235 "data/maps/ParcelWeather/scripts.pory"
	lock
# 236 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 237 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R3_Text_0, MSGBOX_YESNO
# 238 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R3_2
# 243 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R3, ParcelWeather_Sand_R3_Text_1
# 244 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R3_Text_2, MSGBOX_DEFAULT
# 245 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R3_2:
# 239 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 240 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R4::
# 249 "data/maps/ParcelWeather/scripts.pory"
	lock
# 250 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 251 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R4_Text_0, MSGBOX_YESNO
# 252 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R4_2
# 257 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R4, ParcelWeather_Sand_R3_Text_1
# 258 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R4_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R4_2:
# 253 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 254 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Sand_R5::
# 263 "data/maps/ParcelWeather/scripts.pory"
	lock
# 264 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 265 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R5_Text_0, MSGBOX_YESNO
# 266 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Sand_R5_2
# 271 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_SAND_R5, ParcelWeather_Sand_R3_Text_1
# 272 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R5_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Sand_R5_2:
# 267 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Sand_R2_Text_1, MSGBOX_DEFAULT
# 268 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice::
# 277 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_ICE, ParcelWeather_Ice_Text_0, ParcelWeather_Ice_Text_1, ParcelWeather_Ice_FirstWin
# 281 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 282 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Ice_3
ParcelWeather_Ice_1:
# 285 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Ice_8
ParcelWeather_Ice_6:
# 288 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Ice_13
ParcelWeather_Ice_11:
# 291 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Ice_18
ParcelWeather_Ice_16:
# 294 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Ice_2:
# 283 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R2
	goto ParcelWeather_Ice_1

ParcelWeather_Ice_3:
# 282 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R2
	goto_if 0, ParcelWeather_Ice_2
	goto ParcelWeather_Ice_1

ParcelWeather_Ice_7:
# 286 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R3
	goto ParcelWeather_Ice_6

ParcelWeather_Ice_8:
# 285 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R3
	goto_if 0, ParcelWeather_Ice_7
	goto ParcelWeather_Ice_6

ParcelWeather_Ice_12:
# 289 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R4
	goto ParcelWeather_Ice_11

ParcelWeather_Ice_13:
# 288 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R4
	goto_if 0, ParcelWeather_Ice_12
	goto ParcelWeather_Ice_11

ParcelWeather_Ice_17:
# 292 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ice_R5
	goto ParcelWeather_Ice_16

ParcelWeather_Ice_18:
# 291 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_ICE_R5
	goto_if 0, ParcelWeather_Ice_17
	goto ParcelWeather_Ice_16


ParcelWeather_Ice_FirstWin::
# 298 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_Text_2, MSGBOX_DEFAULT
# 299 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R2::
# 303 "data/maps/ParcelWeather/scripts.pory"
	lock
# 304 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 305 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_0, MSGBOX_YESNO
# 306 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R2_2
# 311 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R2, ParcelWeather_Ice_R2_Text_2
# 312 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_3, MSGBOX_DEFAULT
# 313 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R2_2:
# 307 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 308 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R3::
# 317 "data/maps/ParcelWeather/scripts.pory"
	lock
# 318 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 319 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R3_Text_0, MSGBOX_YESNO
# 320 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R3_2
# 325 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R3, ParcelWeather_Ice_R3_Text_1
# 326 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R3_Text_2, MSGBOX_DEFAULT
# 327 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R3_2:
# 321 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 322 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R4::
# 331 "data/maps/ParcelWeather/scripts.pory"
	lock
# 332 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 333 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R4_Text_0, MSGBOX_YESNO
# 334 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R4_2
# 339 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R4, ParcelWeather_Ice_R4_Text_1
# 340 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R4_Text_2, MSGBOX_DEFAULT
# 341 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R4_2:
# 335 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 336 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ice_R5::
# 345 "data/maps/ParcelWeather/scripts.pory"
	lock
# 346 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 347 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R5_Text_0, MSGBOX_YESNO
# 348 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ice_R5_2
# 353 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_ICE_R5, ParcelWeather_Ice_R5_Text_1
# 354 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R5_Text_2, MSGBOX_DEFAULT
# 355 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ice_R5_2:
# 349 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ice_R2_Text_1, MSGBOX_DEFAULT
# 350 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask::
# 361 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_ASK, ParcelWeather_Ask_Text_0, ParcelWeather_Ask_Text_1, ParcelWeather_Ask_FirstWin
# 365 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 366 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Ask_3
ParcelWeather_Ask_1:
# 369 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Ask_8
ParcelWeather_Ask_6:
# 372 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Ask_13
ParcelWeather_Ask_11:
# 375 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Ask_18
ParcelWeather_Ask_16:
# 378 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Ask_2:
# 367 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R2
	goto ParcelWeather_Ask_1

ParcelWeather_Ask_3:
# 366 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R2
	goto_if 0, ParcelWeather_Ask_2
	goto ParcelWeather_Ask_1

ParcelWeather_Ask_7:
# 370 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R3
	goto ParcelWeather_Ask_6

ParcelWeather_Ask_8:
# 369 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R3
	goto_if 0, ParcelWeather_Ask_7
	goto ParcelWeather_Ask_6

ParcelWeather_Ask_12:
# 373 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R4
	goto ParcelWeather_Ask_11

ParcelWeather_Ask_13:
# 372 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R4
	goto_if 0, ParcelWeather_Ask_12
	goto ParcelWeather_Ask_11

ParcelWeather_Ask_17:
# 376 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ask_R5
	goto ParcelWeather_Ask_16

ParcelWeather_Ask_18:
# 375 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_ASK_R5
	goto_if 0, ParcelWeather_Ask_17
	goto ParcelWeather_Ask_16


ParcelWeather_Ask_FirstWin::
# 382 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_Text_2, MSGBOX_DEFAULT
# 383 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R2::
# 387 "data/maps/ParcelWeather/scripts.pory"
	lock
# 388 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 389 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_0, MSGBOX_YESNO
# 390 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R2_2
# 395 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R2, ParcelWeather_Ask_R2_Text_2
# 396 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_3, MSGBOX_DEFAULT
# 397 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R2_2:
# 391 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 392 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R3::
# 401 "data/maps/ParcelWeather/scripts.pory"
	lock
# 402 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 403 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R3_Text_0, MSGBOX_YESNO
# 404 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R3_2
# 409 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R3, ParcelWeather_Ask_R3_Text_1
# 410 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R3_Text_2, MSGBOX_DEFAULT
# 411 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R3_2:
# 405 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 406 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R4::
# 415 "data/maps/ParcelWeather/scripts.pory"
	lock
# 416 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 417 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R4_Text_0, MSGBOX_YESNO
# 418 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R4_2
# 423 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R4, ParcelWeather_Ask_R4_Text_1
# 424 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R4_Text_2, MSGBOX_DEFAULT
# 425 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R4_2:
# 419 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 420 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ask_R5::
# 429 "data/maps/ParcelWeather/scripts.pory"
	lock
# 430 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 431 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R5_Text_0, MSGBOX_YESNO
# 432 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ask_R5_2
# 437 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_ASK_R5, ParcelWeather_Ask_R5_Text_1
# 438 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R5_Text_2, MSGBOX_DEFAULT
# 439 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ask_R5_2:
# 433 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ask_R2_Text_1, MSGBOX_DEFAULT
# 434 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit::
# 443 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_BRIT, ParcelWeather_Brit_Text_0, ParcelWeather_Brit_Text_1, ParcelWeather_Brit_FirstWin
# 447 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 448 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Brit_3
ParcelWeather_Brit_1:
# 451 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Brit_8
ParcelWeather_Brit_6:
# 454 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Brit_13
ParcelWeather_Brit_11:
# 457 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Brit_18
ParcelWeather_Brit_16:
# 460 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Brit_2:
# 449 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R2
	goto ParcelWeather_Brit_1

ParcelWeather_Brit_3:
# 448 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R2
	goto_if 0, ParcelWeather_Brit_2
	goto ParcelWeather_Brit_1

ParcelWeather_Brit_7:
# 452 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R3
	goto ParcelWeather_Brit_6

ParcelWeather_Brit_8:
# 451 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R3
	goto_if 0, ParcelWeather_Brit_7
	goto ParcelWeather_Brit_6

ParcelWeather_Brit_12:
# 455 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R4
	goto ParcelWeather_Brit_11

ParcelWeather_Brit_13:
# 454 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R4
	goto_if 0, ParcelWeather_Brit_12
	goto ParcelWeather_Brit_11

ParcelWeather_Brit_17:
# 458 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Brit_R5
	goto ParcelWeather_Brit_16

ParcelWeather_Brit_18:
# 457 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_BRIT_R5
	goto_if 0, ParcelWeather_Brit_17
	goto ParcelWeather_Brit_16


ParcelWeather_Brit_FirstWin::
# 464 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_Text_2, MSGBOX_DEFAULT
# 465 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R2::
# 469 "data/maps/ParcelWeather/scripts.pory"
	lock
# 470 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 471 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_0, MSGBOX_YESNO
# 472 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R2_2
# 477 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R2, ParcelWeather_Brit_R2_Text_2
# 478 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_3, MSGBOX_DEFAULT
# 479 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R2_2:
# 473 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 474 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R3::
# 483 "data/maps/ParcelWeather/scripts.pory"
	lock
# 484 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 485 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R3_Text_0, MSGBOX_YESNO
# 486 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R3_2
# 491 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R3, ParcelWeather_Brit_R3_Text_1
# 492 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R3_Text_2, MSGBOX_DEFAULT
# 493 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R3_2:
# 487 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 488 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R4::
# 497 "data/maps/ParcelWeather/scripts.pory"
	lock
# 498 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 499 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R4_Text_0, MSGBOX_YESNO
# 500 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R4_2
# 505 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R4, ParcelWeather_Brit_R4_Text_1
# 506 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R4_Text_2, MSGBOX_DEFAULT
# 507 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R4_2:
# 501 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 502 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Brit_R5::
# 511 "data/maps/ParcelWeather/scripts.pory"
	lock
# 512 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 513 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R5_Text_0, MSGBOX_YESNO
# 514 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Brit_R5_2
# 519 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_BRIT_R5, ParcelWeather_Brit_R2_Text_2
# 520 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R5_Text_1, MSGBOX_DEFAULT
# 521 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Brit_R5_2:
# 515 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Brit_R2_Text_1, MSGBOX_DEFAULT
# 516 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato::
# 525 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_CATO, ParcelWeather_Cato_Text_0, ParcelWeather_Cato_Text_1, ParcelWeather_Cato_FirstWin
# 529 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 530 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Cato_3
ParcelWeather_Cato_1:
# 533 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Cato_8
ParcelWeather_Cato_6:
# 536 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Cato_13
ParcelWeather_Cato_11:
# 539 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Cato_18
ParcelWeather_Cato_16:
# 542 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Cato_2:
# 531 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R2
	goto ParcelWeather_Cato_1

ParcelWeather_Cato_3:
# 530 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R2
	goto_if 0, ParcelWeather_Cato_2
	goto ParcelWeather_Cato_1

ParcelWeather_Cato_7:
# 534 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R3
	goto ParcelWeather_Cato_6

ParcelWeather_Cato_8:
# 533 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R3
	goto_if 0, ParcelWeather_Cato_7
	goto ParcelWeather_Cato_6

ParcelWeather_Cato_12:
# 537 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R4
	goto ParcelWeather_Cato_11

ParcelWeather_Cato_13:
# 536 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R4
	goto_if 0, ParcelWeather_Cato_12
	goto ParcelWeather_Cato_11

ParcelWeather_Cato_17:
# 540 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Cato_R5
	goto ParcelWeather_Cato_16

ParcelWeather_Cato_18:
# 539 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_CATO_R5
	goto_if 0, ParcelWeather_Cato_17
	goto ParcelWeather_Cato_16


ParcelWeather_Cato_FirstWin::
# 546 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_Text_2, MSGBOX_DEFAULT
# 547 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R2::
# 551 "data/maps/ParcelWeather/scripts.pory"
	lock
# 552 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 553 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_0, MSGBOX_YESNO
# 554 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R2_2
# 559 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R2, ParcelWeather_Cato_R2_Text_2
# 560 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_3, MSGBOX_DEFAULT
# 561 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R2_2:
# 555 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 556 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R3::
# 565 "data/maps/ParcelWeather/scripts.pory"
	lock
# 566 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 567 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R3_Text_0, MSGBOX_YESNO
# 568 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R3_2
# 573 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R3, ParcelWeather_Cato_R3_Text_1
# 574 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R3_Text_2, MSGBOX_DEFAULT
# 575 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R3_2:
# 569 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 570 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R4::
# 579 "data/maps/ParcelWeather/scripts.pory"
	lock
# 580 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 581 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R4_Text_0, MSGBOX_YESNO
# 582 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R4_2
# 587 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R4, ParcelWeather_Cato_R4_Text_1
# 588 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R4_Text_2, MSGBOX_DEFAULT
# 589 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R4_2:
# 583 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 584 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Cato_R5::
# 593 "data/maps/ParcelWeather/scripts.pory"
	lock
# 594 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 595 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R5_Text_0, MSGBOX_YESNO
# 596 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Cato_R5_2
# 601 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_CATO_R5, ParcelWeather_Cato_R3_Text_1
# 602 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R5_Text_1, MSGBOX_DEFAULT
# 603 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Cato_R5_2:
# 597 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Cato_R2_Text_1, MSGBOX_DEFAULT
# 598 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis::
# 607 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_DIS, ParcelWeather_Dis_Text_0, ParcelWeather_Dis_Text_1, ParcelWeather_Dis_FirstWin
# 611 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 612 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Dis_3
ParcelWeather_Dis_1:
# 615 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Dis_8
ParcelWeather_Dis_6:
# 618 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Dis_13
ParcelWeather_Dis_11:
# 621 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Dis_18
ParcelWeather_Dis_16:
# 624 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Dis_2:
# 613 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R2
	goto ParcelWeather_Dis_1

ParcelWeather_Dis_3:
# 612 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R2
	goto_if 0, ParcelWeather_Dis_2
	goto ParcelWeather_Dis_1

ParcelWeather_Dis_7:
# 616 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R3
	goto ParcelWeather_Dis_6

ParcelWeather_Dis_8:
# 615 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R3
	goto_if 0, ParcelWeather_Dis_7
	goto ParcelWeather_Dis_6

ParcelWeather_Dis_12:
# 619 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R4
	goto ParcelWeather_Dis_11

ParcelWeather_Dis_13:
# 618 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R4
	goto_if 0, ParcelWeather_Dis_12
	goto ParcelWeather_Dis_11

ParcelWeather_Dis_17:
# 622 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Dis_R5
	goto ParcelWeather_Dis_16

ParcelWeather_Dis_18:
# 621 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_DIS_R5
	goto_if 0, ParcelWeather_Dis_17
	goto ParcelWeather_Dis_16


ParcelWeather_Dis_FirstWin::
# 628 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_Text_2, MSGBOX_DEFAULT
# 629 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R2::
# 633 "data/maps/ParcelWeather/scripts.pory"
	lock
# 634 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 635 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_0, MSGBOX_YESNO
# 636 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R2_2
# 641 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R2, ParcelWeather_Dis_R2_Text_2
# 642 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_3, MSGBOX_DEFAULT
# 643 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R2_2:
# 637 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 638 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R3::
# 647 "data/maps/ParcelWeather/scripts.pory"
	lock
# 648 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 649 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R3_Text_0, MSGBOX_YESNO
# 650 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R3_2
# 655 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R3, ParcelWeather_Dis_R3_Text_1
# 656 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R3_Text_2, MSGBOX_DEFAULT
# 657 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R3_2:
# 651 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 652 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R4::
# 661 "data/maps/ParcelWeather/scripts.pory"
	lock
# 662 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 663 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R4_Text_0, MSGBOX_YESNO
# 664 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R4_2
# 669 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R4, ParcelWeather_Dis_R4_Text_1
# 670 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R4_Text_2, MSGBOX_DEFAULT
# 671 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R4_2:
# 665 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 666 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Dis_R5::
# 675 "data/maps/ParcelWeather/scripts.pory"
	lock
# 676 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 677 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R5_Text_0, MSGBOX_YESNO
# 678 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Dis_R5_2
# 683 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_DIS_R5, ParcelWeather_Dis_R3_Text_1
# 684 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R5_Text_1, MSGBOX_DEFAULT
# 685 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Dis_R5_2:
# 679 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Dis_R2_Text_1, MSGBOX_DEFAULT
# 680 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba::
# 689 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_EBBA, ParcelWeather_Ebba_Text_0, ParcelWeather_Ebba_Text_1, ParcelWeather_Ebba_FirstWin
# 693 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 694 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Ebba_3
ParcelWeather_Ebba_1:
# 697 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Ebba_8
ParcelWeather_Ebba_6:
# 700 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Ebba_13
ParcelWeather_Ebba_11:
# 703 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Ebba_18
ParcelWeather_Ebba_16:
# 706 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Ebba_2:
# 695 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R2
	goto ParcelWeather_Ebba_1

ParcelWeather_Ebba_3:
# 694 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R2
	goto_if 0, ParcelWeather_Ebba_2
	goto ParcelWeather_Ebba_1

ParcelWeather_Ebba_7:
# 698 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R3
	goto ParcelWeather_Ebba_6

ParcelWeather_Ebba_8:
# 697 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R3
	goto_if 0, ParcelWeather_Ebba_7
	goto ParcelWeather_Ebba_6

ParcelWeather_Ebba_12:
# 701 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R4
	goto ParcelWeather_Ebba_11

ParcelWeather_Ebba_13:
# 700 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R4
	goto_if 0, ParcelWeather_Ebba_12
	goto ParcelWeather_Ebba_11

ParcelWeather_Ebba_17:
# 704 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Ebba_R5
	goto ParcelWeather_Ebba_16

ParcelWeather_Ebba_18:
# 703 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_EBBA_R5
	goto_if 0, ParcelWeather_Ebba_17
	goto ParcelWeather_Ebba_16


ParcelWeather_Ebba_FirstWin::
# 710 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_Text_2, MSGBOX_DEFAULT
# 711 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R2::
# 715 "data/maps/ParcelWeather/scripts.pory"
	lock
# 716 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 717 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_0, MSGBOX_YESNO
# 718 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R2_2
# 723 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R2, ParcelWeather_Ebba_R2_Text_2
# 724 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_3, MSGBOX_DEFAULT
# 725 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R2_2:
# 719 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 720 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R3::
# 729 "data/maps/ParcelWeather/scripts.pory"
	lock
# 730 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 731 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R3_Text_0, MSGBOX_YESNO
# 732 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R3_2
# 737 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R3, ParcelWeather_Ebba_R3_Text_1
# 738 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R3_Text_2, MSGBOX_DEFAULT
# 739 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R3_2:
# 733 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 734 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R4::
# 743 "data/maps/ParcelWeather/scripts.pory"
	lock
# 744 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 745 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R4_Text_0, MSGBOX_YESNO
# 746 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R4_2
# 751 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R4, ParcelWeather_Ebba_R4_Text_1
# 752 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R4_Text_2, MSGBOX_DEFAULT
# 753 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R4_2:
# 747 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 748 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Ebba_R5::
# 757 "data/maps/ParcelWeather/scripts.pory"
	lock
# 758 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 759 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R5_Text_0, MSGBOX_YESNO
# 760 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Ebba_R5_2
# 765 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_EBBA_R5, ParcelWeather_Ebba_R2_Text_2
# 766 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R5_Text_1, MSGBOX_DEFAULT
# 767 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Ebba_R5_2:
# 761 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Ebba_R2_Text_1, MSGBOX_DEFAULT
# 762 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode::
# 771 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_FINN2, ParcelWeather_Frode_Text_0, ParcelWeather_Frode_Text_1, ParcelWeather_Frode_FirstWin
# 775 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 776 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Frode_3
ParcelWeather_Frode_1:
# 779 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Frode_8
ParcelWeather_Frode_6:
# 782 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Frode_13
ParcelWeather_Frode_11:
# 785 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Frode_18
ParcelWeather_Frode_16:
# 788 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Frode_2:
# 777 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R2
	goto ParcelWeather_Frode_1

ParcelWeather_Frode_3:
# 776 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R2
	goto_if 0, ParcelWeather_Frode_2
	goto ParcelWeather_Frode_1

ParcelWeather_Frode_7:
# 780 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R3
	goto ParcelWeather_Frode_6

ParcelWeather_Frode_8:
# 779 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R3
	goto_if 0, ParcelWeather_Frode_7
	goto ParcelWeather_Frode_6

ParcelWeather_Frode_12:
# 783 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R4
	goto ParcelWeather_Frode_11

ParcelWeather_Frode_13:
# 782 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R4
	goto_if 0, ParcelWeather_Frode_12
	goto ParcelWeather_Frode_11

ParcelWeather_Frode_17:
# 786 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Frode_R5
	goto ParcelWeather_Frode_16

ParcelWeather_Frode_18:
# 785 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_FINN2_R5
	goto_if 0, ParcelWeather_Frode_17
	goto ParcelWeather_Frode_16


ParcelWeather_Frode_FirstWin::
# 792 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_Text_2, MSGBOX_DEFAULT
# 793 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R2::
# 797 "data/maps/ParcelWeather/scripts.pory"
	lock
# 798 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 799 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_0, MSGBOX_YESNO
# 800 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R2_2
# 805 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R2, ParcelWeather_Frode_R2_Text_2
# 806 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_3, MSGBOX_DEFAULT
# 807 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R2_2:
# 801 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 802 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R3::
# 811 "data/maps/ParcelWeather/scripts.pory"
	lock
# 812 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 813 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R3_Text_0, MSGBOX_YESNO
# 814 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R3_2
# 819 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R3, ParcelWeather_Frode_R3_Text_1
# 820 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R3_Text_2, MSGBOX_DEFAULT
# 821 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R3_2:
# 815 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 816 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R4::
# 825 "data/maps/ParcelWeather/scripts.pory"
	lock
# 826 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 827 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R4_Text_0, MSGBOX_YESNO
# 828 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R4_2
# 833 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R4, ParcelWeather_Frode_R4_Text_1
# 834 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R4_Text_2, MSGBOX_DEFAULT
# 835 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R4_2:
# 829 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 830 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Frode_R5::
# 839 "data/maps/ParcelWeather/scripts.pory"
	lock
# 840 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 841 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R5_Text_0, MSGBOX_YESNO
# 842 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Frode_R5_2
# 847 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_FINN2_R5, ParcelWeather_Frode_R4_Text_1
# 848 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R5_Text_1, MSGBOX_DEFAULT
# 849 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Frode_R5_2:
# 843 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Frode_R2_Text_1, MSGBOX_DEFAULT
# 844 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Gaute::
# 853 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_GAUTE, ParcelWeather_Gaute_Text_0, ParcelWeather_Gaute_Text_1
# 856 "data/maps/ParcelWeather/scripts.pory"
	lock
# 857 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 858 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER_DONE, ParcelWeather_Gaute_2
# 863 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALD_Q_DRAWER_SEEN, ParcelWeather_Gaute_5
# 870 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_4, MSGBOX_DEFAULT
# 871 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER
# 872 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Gaute_2:
# 859 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_2, MSGBOX_DEFAULT
# 860 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Gaute_5:
# 864 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Gaute_Text_3, MSGBOX_DEFAULT
# 865 "data/maps/ParcelWeather/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
# 866 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALD_Q_DRAWER_DONE
# 867 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege::
# 876 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_HEGE, ParcelWeather_Hege_Text_0, ParcelWeather_Hege_Text_1, ParcelWeather_Hege_FirstWin
# 880 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 881 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_Hege_3
ParcelWeather_Hege_1:
# 884 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_Hege_8
ParcelWeather_Hege_6:
# 887 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_Hege_13
ParcelWeather_Hege_11:
# 890 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_Hege_18
ParcelWeather_Hege_16:
# 893 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_Hege_2:
# 882 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R2
	goto ParcelWeather_Hege_1

ParcelWeather_Hege_3:
# 881 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R2
	goto_if 0, ParcelWeather_Hege_2
	goto ParcelWeather_Hege_1

ParcelWeather_Hege_7:
# 885 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R3
	goto ParcelWeather_Hege_6

ParcelWeather_Hege_8:
# 884 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R3
	goto_if 0, ParcelWeather_Hege_7
	goto ParcelWeather_Hege_6

ParcelWeather_Hege_12:
# 888 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R4
	goto ParcelWeather_Hege_11

ParcelWeather_Hege_13:
# 887 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R4
	goto_if 0, ParcelWeather_Hege_12
	goto ParcelWeather_Hege_11

ParcelWeather_Hege_17:
# 891 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_Hege_R5
	goto ParcelWeather_Hege_16

ParcelWeather_Hege_18:
# 890 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_HEGE_R5
	goto_if 0, ParcelWeather_Hege_17
	goto ParcelWeather_Hege_16


ParcelWeather_Hege_FirstWin::
# 897 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_Text_2, MSGBOX_DEFAULT
# 898 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R2::
# 902 "data/maps/ParcelWeather/scripts.pory"
	lock
# 903 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 904 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_0, MSGBOX_YESNO
# 905 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R2_2
# 910 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R2, ParcelWeather_Hege_R2_Text_2
# 911 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_3, MSGBOX_DEFAULT
# 912 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R2_2:
# 906 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 907 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R3::
# 916 "data/maps/ParcelWeather/scripts.pory"
	lock
# 917 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 918 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R3_Text_0, MSGBOX_YESNO
# 919 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R3_2
# 924 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R3, ParcelWeather_Hege_R3_Text_1
# 925 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R3_Text_2, MSGBOX_DEFAULT
# 926 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R3_2:
# 920 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 921 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R4::
# 930 "data/maps/ParcelWeather/scripts.pory"
	lock
# 931 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 932 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R4_Text_0, MSGBOX_YESNO
# 933 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R4_2
# 938 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R4, ParcelWeather_Hege_R4_Text_1
# 939 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R4_Text_2, MSGBOX_DEFAULT
# 940 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R4_2:
# 934 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 935 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_Hege_R5::
# 944 "data/maps/ParcelWeather/scripts.pory"
	lock
# 945 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 946 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R5_Text_0, MSGBOX_YESNO
# 947 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_Hege_R5_2
# 952 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_HEGE_R5, ParcelWeather_Hege_R5_Text_1
# 953 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R5_Text_2, MSGBOX_DEFAULT
# 954 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_Hege_R5_2:
# 948 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_Hege_R2_Text_1, MSGBOX_DEFAULT
# 949 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_ReturnFerry::
# 960 "data/maps/ParcelWeather/scripts.pory"
	lock
# 961 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 962 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_ReturnFerry_2
# 967 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_1, MSGBOX_YESNO
# 968 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_ReturnFerry_5
# 973 "data/maps/ParcelWeather/scripts.pory"
	closemessage
# 974 "data/maps/ParcelWeather/scripts.pory"
	playse SE_SHIP
# 975 "data/maps/ParcelWeather/scripts.pory"
	delay 40
# 976 "data/maps/ParcelWeather/scripts.pory"
	warp MAP_PARCEL_ISLE, 15, 31
# 977 "data/maps/ParcelWeather/scripts.pory"
	waitstate
	end

ParcelWeather_ReturnFerry_2:
# 963 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_0, MSGBOX_DEFAULT
# 964 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_ReturnFerry_5:
# 969 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_ReturnFerry_Text_2, MSGBOX_DEFAULT
# 970 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_ItemMaxEther::
# 980 "data/maps/ParcelWeather/scripts.pory"
	finditem ITEM_MAX_ETHER
	end


ParcelWeather_ItemRareCandy::
# 981 "data/maps/ParcelWeather/scripts.pory"
	finditem ITEM_RARE_CANDY
	end


ParcelWeather_SignGate::
# 983 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_SignGate_Text_0, MSGBOX_SIGN
	end


ParcelWeather_SignPlots::
# 987 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_SignPlots_Text_0, MSGBOX_SIGN
	end


ParcelWeather_T_Amund::
# 993 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_AMUND, ParcelWeather_T_Amund_Text_0, ParcelWeather_T_Amund_Text_1, ParcelWeather_T_Amund_FirstWin
# 997 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 998 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_T_Amund_3
ParcelWeather_T_Amund_1:
# 1001 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_T_Amund_8
ParcelWeather_T_Amund_6:
# 1004 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_T_Amund_13
ParcelWeather_T_Amund_11:
# 1007 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_T_Amund_18
ParcelWeather_T_Amund_16:
# 1010 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_T_Amund_2:
# 999 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R2
	goto ParcelWeather_T_Amund_1

ParcelWeather_T_Amund_3:
# 998 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R2
	goto_if 0, ParcelWeather_T_Amund_2
	goto ParcelWeather_T_Amund_1

ParcelWeather_T_Amund_7:
# 1002 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R3
	goto ParcelWeather_T_Amund_6

ParcelWeather_T_Amund_8:
# 1001 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R3
	goto_if 0, ParcelWeather_T_Amund_7
	goto ParcelWeather_T_Amund_6

ParcelWeather_T_Amund_12:
# 1005 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R4
	goto ParcelWeather_T_Amund_11

ParcelWeather_T_Amund_13:
# 1004 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R4
	goto_if 0, ParcelWeather_T_Amund_12
	goto ParcelWeather_T_Amund_11

ParcelWeather_T_Amund_17:
# 1008 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Amund_R5
	goto ParcelWeather_T_Amund_16

ParcelWeather_T_Amund_18:
# 1007 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_AMUND_R5
	goto_if 0, ParcelWeather_T_Amund_17
	goto ParcelWeather_T_Amund_16


ParcelWeather_T_Amund_FirstWin::
# 1014 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_Text_2, MSGBOX_DEFAULT
# 1015 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R2::
# 1019 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1020 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1021 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_0, MSGBOX_YESNO
# 1022 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R2_2
# 1027 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R2, ParcelWeather_T_Amund_R2_Text_2
# 1028 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_3, MSGBOX_DEFAULT
# 1029 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R2_2:
# 1023 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1024 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R3::
# 1033 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1034 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1035 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R3_Text_0, MSGBOX_YESNO
# 1036 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R3_2
# 1041 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R3, ParcelWeather_T_Amund_R3_Text_1
# 1042 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R3_Text_2, MSGBOX_DEFAULT
# 1043 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R3_2:
# 1037 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1038 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R4::
# 1047 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1048 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1049 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R4_Text_0, MSGBOX_YESNO
# 1050 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R4_2
# 1055 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R4, ParcelWeather_T_Amund_R2_Text_2
# 1056 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R4_Text_1, MSGBOX_DEFAULT
# 1057 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R4_2:
# 1051 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1052 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Amund_R5::
# 1061 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1062 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1063 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R5_Text_0, MSGBOX_YESNO
# 1064 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Amund_R5_2
# 1069 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_AMUND_R5, ParcelWeather_T_Amund_R5_Text_1
# 1070 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R5_Text_2, MSGBOX_DEFAULT
# 1071 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Amund_R5_2:
# 1065 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Amund_R2_Text_1, MSGBOX_DEFAULT
# 1066 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild::
# 1075 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_RAGNHILD, ParcelWeather_T_Ragnhild_Text_0, ParcelWeather_T_Ragnhild_Text_1, ParcelWeather_T_Ragnhild_FirstWin
# 1079 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1080 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_T_Ragnhild_3
ParcelWeather_T_Ragnhild_1:
# 1083 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_T_Ragnhild_8
ParcelWeather_T_Ragnhild_6:
# 1086 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_T_Ragnhild_13
ParcelWeather_T_Ragnhild_11:
# 1089 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_T_Ragnhild_18
ParcelWeather_T_Ragnhild_16:
# 1092 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_T_Ragnhild_2:
# 1081 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R2
	goto ParcelWeather_T_Ragnhild_1

ParcelWeather_T_Ragnhild_3:
# 1080 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R2
	goto_if 0, ParcelWeather_T_Ragnhild_2
	goto ParcelWeather_T_Ragnhild_1

ParcelWeather_T_Ragnhild_7:
# 1084 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R3
	goto ParcelWeather_T_Ragnhild_6

ParcelWeather_T_Ragnhild_8:
# 1083 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R3
	goto_if 0, ParcelWeather_T_Ragnhild_7
	goto ParcelWeather_T_Ragnhild_6

ParcelWeather_T_Ragnhild_12:
# 1087 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R4
	goto ParcelWeather_T_Ragnhild_11

ParcelWeather_T_Ragnhild_13:
# 1086 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R4
	goto_if 0, ParcelWeather_T_Ragnhild_12
	goto ParcelWeather_T_Ragnhild_11

ParcelWeather_T_Ragnhild_17:
# 1090 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Ragnhild_R5
	goto ParcelWeather_T_Ragnhild_16

ParcelWeather_T_Ragnhild_18:
# 1089 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_RAGNHILD_R5
	goto_if 0, ParcelWeather_T_Ragnhild_17
	goto ParcelWeather_T_Ragnhild_16


ParcelWeather_T_Ragnhild_FirstWin::
# 1096 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_Text_2, MSGBOX_DEFAULT
# 1097 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R2::
# 1101 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1102 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1103 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_0, MSGBOX_YESNO
# 1104 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R2_2
# 1109 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R2, ParcelWeather_T_Ragnhild_R2_Text_2
# 1110 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_3, MSGBOX_DEFAULT
# 1111 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R2_2:
# 1105 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1106 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R3::
# 1115 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1116 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1117 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R3_Text_0, MSGBOX_YESNO
# 1118 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R3_2
# 1123 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R3, ParcelWeather_T_Ragnhild_R3_Text_1
# 1124 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R3_Text_2, MSGBOX_DEFAULT
# 1125 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R3_2:
# 1119 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1120 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R4::
# 1129 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1130 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1131 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R4_Text_0, MSGBOX_YESNO
# 1132 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R4_2
# 1137 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R4, ParcelWeather_T_Ragnhild_R4_Text_1
# 1138 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R4_Text_2, MSGBOX_DEFAULT
# 1139 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R4_2:
# 1133 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1134 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Ragnhild_R5::
# 1143 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1144 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1145 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R5_Text_0, MSGBOX_YESNO
# 1146 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Ragnhild_R5_2
# 1151 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_RAGNHILD_R5, ParcelWeather_T_Ragnhild_R3_Text_1
# 1152 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R5_Text_1, MSGBOX_DEFAULT
# 1153 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Ragnhild_R5_2:
# 1147 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Ragnhild_R2_Text_1, MSGBOX_DEFAULT
# 1148 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind::
# 1157 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_single TRAINER_SKALD_WEA_OYVIND, ParcelWeather_T_Oyvind_Text_0, ParcelWeather_T_Oyvind_Text_1, ParcelWeather_T_Oyvind_FirstWin
# 1161 "data/maps/ParcelWeather/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 1162 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelWeather_T_Oyvind_3
ParcelWeather_T_Oyvind_1:
# 1165 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelWeather_T_Oyvind_8
ParcelWeather_T_Oyvind_6:
# 1168 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelWeather_T_Oyvind_13
ParcelWeather_T_Oyvind_11:
# 1171 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelWeather_T_Oyvind_18
ParcelWeather_T_Oyvind_16:
# 1174 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_Text_2, MSGBOX_DEFAULT
	end

ParcelWeather_T_Oyvind_2:
# 1163 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R2
	goto ParcelWeather_T_Oyvind_1

ParcelWeather_T_Oyvind_3:
# 1162 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R2
	goto_if 0, ParcelWeather_T_Oyvind_2
	goto ParcelWeather_T_Oyvind_1

ParcelWeather_T_Oyvind_7:
# 1166 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R3
	goto ParcelWeather_T_Oyvind_6

ParcelWeather_T_Oyvind_8:
# 1165 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R3
	goto_if 0, ParcelWeather_T_Oyvind_7
	goto ParcelWeather_T_Oyvind_6

ParcelWeather_T_Oyvind_12:
# 1169 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R4
	goto ParcelWeather_T_Oyvind_11

ParcelWeather_T_Oyvind_13:
# 1168 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R4
	goto_if 0, ParcelWeather_T_Oyvind_12
	goto ParcelWeather_T_Oyvind_11

ParcelWeather_T_Oyvind_17:
# 1172 "data/maps/ParcelWeather/scripts.pory"
	goto ParcelWeather_T_Oyvind_R5
	goto ParcelWeather_T_Oyvind_16

ParcelWeather_T_Oyvind_18:
# 1171 "data/maps/ParcelWeather/scripts.pory"
	checktrainerflag TRAINER_SKALD_WEA_OYVIND_R5
	goto_if 0, ParcelWeather_T_Oyvind_17
	goto ParcelWeather_T_Oyvind_16


ParcelWeather_T_Oyvind_FirstWin::
# 1178 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_Text_2, MSGBOX_DEFAULT
# 1179 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R2::
# 1183 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1184 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1185 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_0, MSGBOX_YESNO
# 1186 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R2_2
# 1191 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R2, ParcelWeather_T_Oyvind_R2_Text_2
# 1192 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_3, MSGBOX_DEFAULT
# 1193 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R2_2:
# 1187 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1188 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R3::
# 1197 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1198 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1199 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R3_Text_0, MSGBOX_YESNO
# 1200 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R3_2
# 1205 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R3, ParcelWeather_T_Oyvind_R3_Text_1
# 1206 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R3_Text_2, MSGBOX_DEFAULT
# 1207 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R3_2:
# 1201 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1202 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R4::
# 1211 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1212 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1213 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R4_Text_0, MSGBOX_YESNO
# 1214 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R4_2
# 1219 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R4, ParcelWeather_T_Oyvind_R4_Text_1
# 1220 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R4_Text_2, MSGBOX_DEFAULT
# 1221 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R4_2:
# 1215 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1216 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_T_Oyvind_R5::
# 1225 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1226 "data/maps/ParcelWeather/scripts.pory"
	faceplayer
# 1227 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R5_Text_0, MSGBOX_YESNO
# 1228 "data/maps/ParcelWeather/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelWeather_T_Oyvind_R5_2
# 1233 "data/maps/ParcelWeather/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_WEA_OYVIND_R5, ParcelWeather_T_Oyvind_R5_Text_1
# 1234 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R5_Text_2, MSGBOX_DEFAULT
# 1235 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_T_Oyvind_R5_2:
# 1229 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_T_Oyvind_R2_Text_1, MSGBOX_DEFAULT
# 1230 "data/maps/ParcelWeather/scripts.pory"
	release
	end


ParcelWeather_PairGauge::
# 1242 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1243 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_PairGauge_2
# 1248 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeather_PairGauge_3
# 1255 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_9, MSGBOX_DEFAULT
# 1256 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_10, MSGBOX_DEFAULT
# 1257 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_11, MSGBOX_DEFAULT
# 1258 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_12, MSGBOX_DEFAULT
ParcelWeather_PairGauge_1:
# 1260 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_PairGauge_2:
# 1244 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_0, MSGBOX_DEFAULT
# 1245 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_1, MSGBOX_DEFAULT
# 1246 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_2, MSGBOX_DEFAULT
# 1247 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_3, MSGBOX_DEFAULT
	goto ParcelWeather_PairGauge_1

ParcelWeather_PairGauge_3:
# 1249 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_4, MSGBOX_DEFAULT
# 1250 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_5, MSGBOX_DEFAULT
# 1251 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_6, MSGBOX_DEFAULT
# 1252 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_7, MSGBOX_DEFAULT
# 1253 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairGauge_Text_8, MSGBOX_DEFAULT
	goto ParcelWeather_PairGauge_1


ParcelWeather_PairYard::
# 1265 "data/maps/ParcelWeather/scripts.pory"
	lock
# 1266 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelWeather_PairYard_2
# 1272 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WEATHER_CLEARED, ParcelWeather_PairYard_3
# 1278 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_9, MSGBOX_DEFAULT
# 1279 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_10, MSGBOX_DEFAULT
# 1280 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_11, MSGBOX_DEFAULT
# 1281 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_12, MSGBOX_DEFAULT
# 1282 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_13, MSGBOX_DEFAULT
ParcelWeather_PairYard_1:
# 1284 "data/maps/ParcelWeather/scripts.pory"
	release
	end

ParcelWeather_PairYard_2:
# 1267 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_0, MSGBOX_DEFAULT
# 1268 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_1, MSGBOX_DEFAULT
# 1269 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_2, MSGBOX_DEFAULT
# 1270 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_3, MSGBOX_DEFAULT
# 1271 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_4, MSGBOX_DEFAULT
	goto ParcelWeather_PairYard_1

ParcelWeather_PairYard_3:
# 1273 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_5, MSGBOX_DEFAULT
# 1274 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_6, MSGBOX_DEFAULT
# 1275 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_7, MSGBOX_DEFAULT
# 1276 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PairYard_Text_8, MSGBOX_DEFAULT
	goto ParcelWeather_PairYard_1


ParcelWeather_PageFortyOne::
# 1291 "data/maps/ParcelWeather/scripts.pory"
	goto_if_set FLAG_SKALD_Q_FORTYONE, ParcelWeather_PageFortyOne_4
ParcelWeather_PageFortyOne_3:
# 1295 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PageFortyOne_Text_1, MSGBOX_SIGN
ParcelWeather_PageFortyOne_1:
	end

ParcelWeather_PageFortyOne_2:
# 1292 "data/maps/ParcelWeather/scripts.pory"
	msgbox ParcelWeather_PageFortyOne_Text_0, MSGBOX_SIGN
# 1293 "data/maps/ParcelWeather/scripts.pory"
	setflag FLAG_SKALD_Q_FORTYONE_FOUND
	goto ParcelWeather_PageFortyOne_1

ParcelWeather_PageFortyOne_4:
# 1291 "data/maps/ParcelWeather/scripts.pory"
	goto_if_unset FLAG_SKALD_Q_FORTYONE_FOUND, ParcelWeather_PageFortyOne_2
	goto ParcelWeather_PageFortyOne_3


ParcelWeather_FirstEntry_Text_0:
# 22 "data/maps/ParcelWeather/scripts.pory"
	.string "A sign over the landing: MEREHOLT\n"
	.string "CLIMATE FUTURES -- ATMOSPHERIC\l"
	.string "DIVISION. Managing tomorrow's weather,\l"
	.string "today.\p"
	.string "Fans. Instruments. Four plots up the\n"
	.string "slope, each under its own private sky:\l"
	.string "rain on one, a fine afternoon on the\l"
	.string "next, sand, frost.$"

ParcelWeather_FirstEntry_Text_1:
# 23 "data/maps/ParcelWeather/scripts.pory"
	.string "The whole journey has been the real\n"
	.string "weather. The thaw, the bloom, the\l"
	.string "failing marsh.\p"
	.string "These are the people paid to call it\n"
	.string "adjustable. Beat them on their own\l"
	.string "plots. Then take what they know\l"
	.string "somewhere it might do some good.$"

ParcelWeather_Rain_Text_0:
# 32 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Hydrology Division. I don't\n"
	.string "forecast the rain, RANGER. I make it.\l"
	.string "Stand under this and learn.$"

ParcelWeather_Rain_Text_1:
# 33 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: …Hm. The model held. The team\n"
	.string "didn't. I hate when those come apart\l"
	.string "separately.$"

ParcelWeather_Rain_Text_2:
# 48 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: We can drop a monsoon on a\n"
	.string "test plot to order. People see the demo\l"
	.string "and assume we can end a drought.\p"
	.string "We can't. We can only move the misery to\n"
	.string "someone else's map. But the demo is\l"
	.string "what gets funded.$"

ParcelWeather_Rain_R2_Text_0:
# 59 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Didn't think you'd come back\n"
	.string "through. Good. Again?$"

ParcelWeather_Rain_R2_Text_1:
# 61 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWeather_Rain_R2_Text_2:
# 65 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Right. That's the whole of it.$"

ParcelWeather_Rain_R2_Text_3:
# 66 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: That's two to you. Get the\n"
	.string "next stamp and come back.$"

ParcelWeather_Rain_R3_Text_0:
# 73 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWeather_Rain_R3_Text_1:
# 80 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Rain_R4_Text_0:
# 87 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: I don't care about the paper.\n"
	.string "I care about the one I lost. Go?$"

ParcelWeather_Rain_R4_Text_1:
# 93 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Still yours.$"

ParcelWeather_Rain_R4_Text_2:
# 94 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Rain_R5_Text_0:
# 101 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: After everything, one more.\n"
	.string "For the ledger. Yes?$"

ParcelWeather_Rain_R5_Text_1:
# 108 "data/maps/ParcelWeather/scripts.pory"
	.string "MARLOWE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWeather_Sun_Text_0:
# 114 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Solar Forcing. I keep this plot\n"
	.string "in a permanent fine afternoon. Nothing\l"
	.string "dies of a fine afternoon. Until it does.$"

ParcelWeather_Sun_Text_1:
# 115 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Bright work. You don't wilt. Most\n"
	.string "do, in my weather.$"

ParcelWeather_Sun_Text_2:
# 130 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: A little more sun, a longer\n"
	.string "season, a bigger yield. That's the pitch.\l"
	.string "They leave out the part where the soil\l"
	.string "cooks and the water leaves.\p"
	.string "Pleasant is not the same as alive. I tell\n"
	.string "them. They like pleasant.$"

ParcelWeather_Sun_R2_Text_0:
# 141 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWeather_Sun_R2_Text_1:
# 143 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Another time, then.$"

ParcelWeather_Sun_R2_Text_2:
# 147 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Right. That's the whole of it.$"

ParcelWeather_Sun_R2_Text_3:
# 148 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Sun_R3_Text_0:
# 155 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWeather_Sun_R3_Text_1:
# 161 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Still yours.$"

ParcelWeather_Sun_R3_Text_2:
# 162 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Sun_R4_Text_0:
# 169 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Seven stamps. I've one more\n"
	.string "fight in me that's worth the name. Yes?$"

ParcelWeather_Sun_R4_Text_1:
# 175 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: …Again, then. Later.$"

ParcelWeather_Sun_R4_Text_2:
# 176 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Sun_R5_Text_0:
# 183 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWeather_Sun_R5_Text_1:
# 190 "data/maps/ParcelWeather/scripts.pory"
	.string "HELIO: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_Sand_Text_0:
# 196 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Aridity Division. This plot used\n"
	.string "to be marsh. I made it a desert in a\l"
	.string "season, for science. Watch your\l"
	.string "footing.$"

ParcelWeather_Sand_Text_1:
# 197 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Grit, you've got. Fitting. It's the\n"
	.string "only thing that grows in my conditions.$"

ParcelWeather_Sand_Text_2:
# 212 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: My job is proving a dried-out\n"
	.string "place can still 'support managed use'.\l"
	.string "It can support a sandstorm and a\l"
	.string "lawsuit, mostly.\p"
	.string "You can take a wetland apart fast.\n"
	.string "Putting one back is not in my budget\l"
	.string "line.$"

ParcelWeather_Sand_R2_Text_0:
# 223 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I kept the team up for this.\n"
	.string "Again?$"

ParcelWeather_Sand_R2_Text_1:
# 225 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Fine. Same spot.$"

ParcelWeather_Sand_R2_Text_2:
# 229 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Still yours.$"

ParcelWeather_Sand_R2_Text_3:
# 230 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Sand_R3_Text_0:
# 237 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWeather_Sand_R3_Text_1:
# 243 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: Noted. Properly, this time.$"

ParcelWeather_Sand_R3_Text_2:
# 244 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Sand_R4_Text_0:
# 251 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWeather_Sand_R4_Text_1:
# 258 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_Sand_R5_Text_0:
# 265 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelWeather_Sand_R5_Text_1:
# 272 "data/maps/ParcelWeather/scripts.pory"
	.string "DUNE: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Ice_Text_0:
# 278 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Cryosphere Division. I keep one\n"
	.string "plot frozen while the world thaws. It\l"
	.string "costs a fortune. That's rather the\l"
	.string "point.$"

ParcelWeather_Ice_Text_1:
# 279 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Cold-blooded battling. I\n"
	.string "approve. The warm-hearted ones never\l"
	.string "last my hail.$"

ParcelWeather_Ice_Text_2:
# 294 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I can hold ice on a single square\n"
	.string "against the whole summer, if you pay\l"
	.string "the power bill.\p"
	.string "That's what 'climate resilience' means\n"
	.string "once you read the invoice. A frozen plot\l"
	.string "for whoever can afford one.$"

ParcelWeather_Ice_R2_Text_0:
# 305 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWeather_Ice_R2_Text_1:
# 307 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: No hurry. The water keeps.$"

ParcelWeather_Ice_R2_Text_2:
# 311 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Still yours.$"

ParcelWeather_Ice_R2_Text_3:
# 312 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Ice_R3_Text_0:
# 319 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWeather_Ice_R3_Text_1:
# 325 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: That's the one I wanted to see.$"

ParcelWeather_Ice_R3_Text_2:
# 326 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Ice_R4_Text_0:
# 333 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: I've watched you walk past\n"
	.string "twice. Not a third time. Battle?$"

ParcelWeather_Ice_R4_Text_1:
# 339 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Right. That's the whole of it.$"

ParcelWeather_Ice_R4_Text_2:
# 340 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Ice_R5_Text_0:
# 347 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelWeather_Ice_R5_Text_1:
# 353 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: …Fair.$"

ParcelWeather_Ice_R5_Text_2:
# 354 "data/maps/ParcelWeather/scripts.pory"
	.string "FROSK: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_Ask_Text_0:
# 362 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Breeder, Hydrology plot. My\n"
	.string "CASTFORM changes with the plot. So do\l"
	.string "I. Battle.$"

ParcelWeather_Ask_Text_1:
# 363 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Changed again.$"

ParcelWeather_Ask_Text_2:
# 378 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: CASTFORM's the station mascot. It\n"
	.string "becomes whatever sky you put it under.\l"
	.string "The director says that's the whole\l"
	.string "philosophy. He doesn't say it like a\l"
	.string "compliment.$"

ParcelWeather_Ask_R2_Text_0:
# 389 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: I kept the team up for this. Again?$"

ParcelWeather_Ask_R2_Text_1:
# 391 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: No hurry. The water keeps.$"

ParcelWeather_Ask_R2_Text_2:
# 395 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Right. That's the whole of it.$"

ParcelWeather_Ask_R2_Text_3:
# 396 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Ask_R3_Text_0:
# 403 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWeather_Ask_R3_Text_1:
# 409 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: …Fair.$"

ParcelWeather_Ask_R3_Text_2:
# 410 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Ask_R4_Text_0:
# 417 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Nearly the top, they say. Not past\n"
	.string "me. Again?$"

ParcelWeather_Ask_R4_Text_1:
# 423 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: …Again, then. Later.$"

ParcelWeather_Ask_R4_Text_2:
# 424 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Ask_R5_Text_0:
# 431 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Ask_R5_Text_1:
# 437 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: Noted. Properly, this time.$"

ParcelWeather_Ask_R5_Text_2:
# 438 "data/maps/ParcelWeather/scripts.pory"
	.string "ASK: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Brit_Text_0:
# 444 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Solar plot. We're at thirty-one\n"
	.string "days without rain, on purpose. Battle\l"
	.string "before the NUMEL overheats.$"

ParcelWeather_Brit_Text_1:
# 445 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: It overheated.$"

ParcelWeather_Brit_Text_2:
# 460 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Day thirty-two tomorrow. The\n"
	.string "grass went brown on day nine. Nobody's\l"
	.string "written that down. It's not a result,\l"
	.string "it's a side effect.$"

ParcelWeather_Brit_R2_Text_0:
# 471 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Clearances or not, I want that\n"
	.string "one back. Go?$"

ParcelWeather_Brit_R2_Text_1:
# 473 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Fine. Same spot.$"

ParcelWeather_Brit_R2_Text_2:
# 477 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: …Again, then. Later.$"

ParcelWeather_Brit_R2_Text_3:
# 478 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Brit_R3_Text_0:
# 485 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: They say you don't lose any more.\n"
	.string "Let's check?$"

ParcelWeather_Brit_R3_Text_1:
# 491 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: …Fair.$"

ParcelWeather_Brit_R3_Text_2:
# 492 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Brit_R4_Text_0:
# 499 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWeather_Brit_R4_Text_1:
# 505 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Right. That's the whole of it.$"

ParcelWeather_Brit_R4_Text_2:
# 506 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Brit_R5_Text_0:
# 513 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: The region's different now. Let's\n"
	.string "see if you are?$"

ParcelWeather_Brit_R5_Text_1:
# 520 "data/maps/ParcelWeather/scripts.pory"
	.string "BRIT: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Cato_Text_0:
# 526 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Aridity plot. I shovel sand onto a\n"
	.string "marsh for a living. Battle. Please.$"

ParcelWeather_Cato_Text_1:
# 527 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Thanks. Needed that.$"

ParcelWeather_Cato_Text_2:
# 542 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: There were POLIWAG in this plot\n"
	.string "when I started. I don't know where they\l"
	.string "went. I know I'm not supposed to ask.$"

ParcelWeather_Cato_R2_Text_0:
# 553 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWeather_Cato_R2_Text_1:
# 555 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Suit yourself. I'm here.$"

ParcelWeather_Cato_R2_Text_2:
# 559 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: That's the one I wanted to see.$"

ParcelWeather_Cato_R2_Text_3:
# 560 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Cato_R3_Text_0:
# 567 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWeather_Cato_R3_Text_1:
# 573 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Noted. Properly, this time.$"

ParcelWeather_Cato_R3_Text_2:
# 574 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Cato_R4_Text_0:
# 581 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelWeather_Cato_R4_Text_1:
# 587 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Right. That's the whole of it.$"

ParcelWeather_Cato_R4_Text_2:
# 588 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_Cato_R5_Text_0:
# 595 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Cato_R5_Text_1:
# 602 "data/maps/ParcelWeather/scripts.pory"
	.string "CATO: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWeather_Dis_Text_0:
# 608 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Cryosphere plot. We keep one\n"
	.string "square frozen. It's the most expensive\l"
	.string "square on the island. Battle.$"

ParcelWeather_Dis_Text_1:
# 609 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Expensive loss.$"

ParcelWeather_Dis_Text_2:
# 624 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: The power for the ice plot comes\n"
	.string "up from the coast works. The coast\l"
	.string "works run on the catch. So the frozen\l"
	.string "square is made of fish, if you follow it\l"
	.string "back.$"

ParcelWeather_Dis_R2_Text_0:
# 635 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: I kept the team up for this. Again?$"

ParcelWeather_Dis_R2_Text_1:
# 637 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Suit yourself. I'm here.$"

ParcelWeather_Dis_R2_Text_2:
# 641 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Still yours.$"

ParcelWeather_Dis_R2_Text_3:
# 642 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Dis_R3_Text_0:
# 649 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWeather_Dis_R3_Text_1:
# 655 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Noted. Properly, this time.$"

ParcelWeather_Dis_R3_Text_2:
# 656 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_Dis_R4_Text_0:
# 663 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWeather_Dis_R4_Text_1:
# 669 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: …Again, then. Later.$"

ParcelWeather_Dis_R4_Text_2:
# 670 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Dis_R5_Text_0:
# 677 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Dis_R5_Text_1:
# 684 "data/maps/ParcelWeather/scripts.pory"
	.string "DIS: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelWeather_Ebba_Text_0:
# 690 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Corps liaison. I'm meant to\n"
	.string "observe. Observing's dull. Spar.$"

ParcelWeather_Ebba_Text_1:
# 691 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Observed.$"

ParcelWeather_Ebba_Text_2:
# 706 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: HALE sent me to count what the\n"
	.string "station publishes against what it\l"
	.string "measures. Two different numbers. Every\l"
	.string "month.$"

ParcelWeather_Ebba_R2_Text_0:
# 717 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWeather_Ebba_R2_Text_1:
# 719 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Suit yourself. I'm here.$"

ParcelWeather_Ebba_R2_Text_2:
# 723 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Right. That's the whole of it.$"

ParcelWeather_Ebba_R2_Text_3:
# 724 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Ebba_R3_Text_0:
# 731 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelWeather_Ebba_R3_Text_1:
# 737 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: That's the one I wanted to see.$"

ParcelWeather_Ebba_R3_Text_2:
# 738 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Ebba_R4_Text_0:
# 745 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelWeather_Ebba_R4_Text_1:
# 751 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Noted. Properly, this time.$"

ParcelWeather_Ebba_R4_Text_2:
# 752 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Ebba_R5_Text_0:
# 759 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: After everything, one more. For\n"
	.string "the ledger. Yes?$"

ParcelWeather_Ebba_R5_Text_1:
# 766 "data/maps/ParcelWeather/scripts.pory"
	.string "EBBA: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWeather_Frode_Text_0:
# 772 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I study the old ground under the\n"
	.string "plots. Pollen. Peat. What the weather\l"
	.string "WAS. Nobody funds what was. Battle.$"

ParcelWeather_Frode_Text_1:
# 773 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: What was, lost to what is.$"

ParcelWeather_Frode_Text_2:
# 788 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: The peat says this slope had a\n"
	.string "marsh for nine thousand years. The\l"
	.string "plot's had sand for one. Guess which\l"
	.string "one's in the brochure.$"

ParcelWeather_Frode_R2_Text_0:
# 799 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I kept the team up for this.\n"
	.string "Again?$"

ParcelWeather_Frode_R2_Text_1:
# 801 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWeather_Frode_R2_Text_2:
# 805 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: That's the one I wanted to see.$"

ParcelWeather_Frode_R2_Text_3:
# 806 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_Frode_R3_Text_0:
# 813 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: I've been training against the\n"
	.string "lake. You're the test. Yes?$"

ParcelWeather_Frode_R3_Text_1:
# 819 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Still yours.$"

ParcelWeather_Frode_R3_Text_2:
# 820 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Frode_R4_Text_0:
# 827 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWeather_Frode_R4_Text_1:
# 833 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: …Again, then. Later.$"

ParcelWeather_Frode_R4_Text_2:
# 834 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_Frode_R5_Text_0:
# 841 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWeather_Frode_R5_Text_1:
# 848 "data/maps/ParcelWeather/scripts.pory"
	.string "FRODE: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWeather_Gaute_Text_0:
# 854 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: I fly the instrument birds.\n"
	.string "SWELLOW with sensors. They hate it.\l"
	.string "Battle.$"

ParcelWeather_Gaute_Text_1:
# 855 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: They'd have won.$"

ParcelWeather_Gaute_Text_2:
# 859 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: Two of us who've read the\n"
	.string "drawer. The director and you. I only fly\l"
	.string "the birds.$"

ParcelWeather_Gaute_Text_3:
# 864 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: Rain up a third. Frost days\n"
	.string "halved. Nobody signed it. …Not mad,\l"
	.string "then.\p"
	.string "Take these. The director leaves them\n"
	.string "for people who've read the drawer.\l"
	.string "There's been two of us.$"

ParcelWeather_Gaute_Text_4:
# 870 "data/maps/ParcelWeather/scripts.pory"
	.string "GAUTE: The birds read the real sky, over\n"
	.string "the fence. The plots read the pretend\l"
	.string "sky. The director keeps both sets. He\l"
	.string "only publishes one.\p"
	.string "The real one's in a drawer in the\n"
	.string "institute, ground floor, under the\l"
	.string "mission board. Read it. Then tell me I'm\l"
	.string "not mad.$"

ParcelWeather_Hege_Text_0:
# 877 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The bridge is the best place to\n"
	.string "think. The water doesn't care what the\l"
	.string "plots say. Battle me on it.$"

ParcelWeather_Hege_Text_1:
# 878 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The water still doesn't care.$"

ParcelWeather_Hege_Text_2:
# 893 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: The director isn't a liar. That's\n"
	.string "what's hard. He knows exactly what the\l"
	.string "station is. He runs it anyway, so\l"
	.string "somebody honest does.$"

ParcelWeather_Hege_R2_Text_0:
# 904 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelWeather_Hege_R2_Text_1:
# 906 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Another time, then.$"

ParcelWeather_Hege_R2_Text_2:
# 910 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: …Again, then. Later.$"

ParcelWeather_Hege_R2_Text_3:
# 911 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_Hege_R3_Text_0:
# 918 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Word gets up the river. Half a\n"
	.string "region signed off on you. Show me?$"

ParcelWeather_Hege_R3_Text_1:
# 924 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: That's the one I wanted to see.$"

ParcelWeather_Hege_R3_Text_2:
# 925 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_Hege_R4_Text_0:
# 932 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Full strength, no excuses, mine or\n"
	.string "yours. Rematch?$"

ParcelWeather_Hege_R4_Text_1:
# 938 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Noted. Properly, this time.$"

ParcelWeather_Hege_R4_Text_2:
# 939 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_Hege_R5_Text_0:
# 946 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Last one. I've put everything\n"
	.string "I've got into this team. Go?$"

ParcelWeather_Hege_R5_Text_1:
# 952 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: …Fair.$"

ParcelWeather_Hege_R5_Text_2:
# 953 "data/maps/ParcelWeather/scripts.pory"
	.string "HEGE: Five. Write that one down too. I'll\n"
	.string "know you did.$"

ParcelWeather_ReturnFerry_Text_0:
# 963 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Back to SALTWICK? The\n"
	.string "station's logbooks are in the review,\l"
	.string "both of them. VANE handed them over\l"
	.string "himself. Honest air out there, and now a\l"
	.string "bit in here too.$"

ParcelWeather_ReturnFerry_Text_1:
# 967 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Back to SALTWICK, RANGER?\n"
	.string "Honest air out there, at least.\l"
	.string "Whatever they sell in here, it isn't\l"
	.string "that.$"

ParcelWeather_ReturnFerry_Text_2:
# 969 "data/maps/ParcelWeather/scripts.pory"
	.string "SAILOR: Take your time. Mind the fans.$"

ParcelWeather_SignGate_Text_0:
# 983 "data/maps/ParcelWeather/scripts.pory"
	.string "MEREHOLT CLIMATE FUTURES --\n"
	.string "ATMOSPHERIC DIVISION\p"
	.string "Managing tomorrow's weather, today.\n"
	.string "Visitors report to the institute. Plots\l"
	.string "are live: do not enter a plot during a\l"
	.string "demonstration.$"

ParcelWeather_SignPlots_Text_0:
# 987 "data/maps/ParcelWeather/scripts.pory"
	.string "TEST PLOTS. North-west: Aridity.\n"
	.string "North-east: Solar Forcing. East slope:\l"
	.string "Cryosphere. River: Hydrology.\p"
	.string "The real sky is not a plot.$"

ParcelWeather_T_Amund_Text_0:
# 994 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Up the east slope. The frost\n"
	.string "plot's behind me. It hums. Battle.$"

ParcelWeather_T_Amund_Text_1:
# 995 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Humming's louder than I am,\n"
	.string "apparently.$"

ParcelWeather_T_Amund_Text_2:
# 1010 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: One frozen square on a warming\n"
	.string "hill. I asked what it's for.\l"
	.string "'Demonstration.' Of what? Nobody said.$"

ParcelWeather_T_Amund_R2_Text_0:
# 1021 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Back this way? I've not been\n"
	.string "idle. Rematch?$"

ParcelWeather_T_Amund_R2_Text_1:
# 1023 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Another time, then.$"

ParcelWeather_T_Amund_R2_Text_2:
# 1027 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Still yours.$"

ParcelWeather_T_Amund_R2_Text_3:
# 1028 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelWeather_T_Amund_R3_Text_0:
# 1035 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: I moved the whole team on. Let's\n"
	.string "see if you have?$"

ParcelWeather_T_Amund_R3_Text_1:
# 1041 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: That's the one I wanted to see.$"

ParcelWeather_T_Amund_R3_Text_2:
# 1042 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelWeather_T_Amund_R4_Text_0:
# 1049 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelWeather_T_Amund_R4_Text_1:
# 1056 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: When it's all filed, come and find\n"
	.string "me. Once more.$"

ParcelWeather_T_Amund_R5_Text_0:
# 1063 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelWeather_T_Amund_R5_Text_1:
# 1069 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: …Again, then. Later.$"

ParcelWeather_T_Amund_R5_Text_2:
# 1070 "data/maps/ParcelWeather/scripts.pory"
	.string "AMUND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_T_Ragnhild_Text_0:
# 1076 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Breeder, east plots.\n"
	.string "CASTFORM for the demos, LUDICOLO for\l"
	.string "the rain. Battle.$"

ParcelWeather_T_Ragnhild_Text_1:
# 1077 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Rained on.$"

ParcelWeather_T_Ragnhild_Text_2:
# 1092 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: The station publishes the\n"
	.string "plot weather. The real weather goes in a\l"
	.string "drawer. I've seen the drawer.$"

ParcelWeather_T_Ragnhild_R2_Text_0:
# 1103 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelWeather_T_Ragnhild_R2_Text_1:
# 1105 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Later, then. I'm not going\n"
	.string "anywhere.$"

ParcelWeather_T_Ragnhild_R2_Text_2:
# 1109 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: …Fair.$"

ParcelWeather_T_Ragnhild_R2_Text_3:
# 1110 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Come back with more\n"
	.string "clearances. I'll have more for you.$"

ParcelWeather_T_Ragnhild_R3_Text_0:
# 1117 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelWeather_T_Ragnhild_R3_Text_1:
# 1123 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: That's the one I wanted to\n"
	.string "see.$"

ParcelWeather_T_Ragnhild_R3_Text_2:
# 1124 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: One more in me. After the\n"
	.string "high ground.$"

ParcelWeather_T_Ragnhild_R4_Text_0:
# 1131 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Full strength, no excuses,\n"
	.string "mine or yours. Rematch?$"

ParcelWeather_T_Ragnhild_R4_Text_1:
# 1137 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Noted. Properly, this time.$"

ParcelWeather_T_Ragnhild_R4_Text_2:
# 1138 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_T_Ragnhild_R5_Text_0:
# 1145 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: Last one. I've put\n"
	.string "everything I've got into this team. Go?$"

ParcelWeather_T_Ragnhild_R5_Text_1:
# 1152 "data/maps/ParcelWeather/scripts.pory"
	.string "RAGNHILD: That's all I've got. It was\n"
	.string "enough to see it done.$"

ParcelWeather_T_Oyvind_Text_0:
# 1158 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Instrument birds. XATU reads\n"
	.string "the sky better than the plots do.\l"
	.string "Battle before it tells me how this ends.$"

ParcelWeather_T_Oyvind_Text_1:
# 1159 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: It told me.$"

ParcelWeather_T_Oyvind_Text_2:
# 1174 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: XATU watches the real sky over\n"
	.string "the fence. The real sky's not for sale.\l"
	.string "The plots are.$"

ParcelWeather_T_Oyvind_R2_Text_0:
# 1185 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: You again. I've had time to\n"
	.string "think about last time. Go again?$"

ParcelWeather_T_Oyvind_R2_Text_1:
# 1187 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Suit yourself. I'm here.$"

ParcelWeather_T_Oyvind_R2_Text_2:
# 1191 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Right. That's the whole of it.$"

ParcelWeather_T_Oyvind_R2_Text_3:
# 1192 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelWeather_T_Oyvind_R3_Text_0:
# 1199 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: They say you don't lose any\n"
	.string "more. Let's check?$"

ParcelWeather_T_Oyvind_R3_Text_1:
# 1205 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: …Fair.$"

ParcelWeather_T_Oyvind_R3_Text_2:
# 1206 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: One more in me. After the high\n"
	.string "ground.$"

ParcelWeather_T_Oyvind_R4_Text_0:
# 1213 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Nearly the top, they say. Not\n"
	.string "past me. Again?$"

ParcelWeather_T_Oyvind_R4_Text_1:
# 1219 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: That's the one I wanted to see.$"

ParcelWeather_T_Oyvind_R4_Text_2:
# 1220 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelWeather_T_Oyvind_R5_Text_0:
# 1227 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: The region's different now.\n"
	.string "Let's see if you are?$"

ParcelWeather_T_Oyvind_R5_Text_1:
# 1233 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Still yours.$"

ParcelWeather_T_Oyvind_R5_Text_2:
# 1234 "data/maps/ParcelWeather/scripts.pory"
	.string "OYVIND: Five. Write that one down too.\n"
	.string "I'll know you did.$"

ParcelWeather_PairGauge_Text_0:
# 1244 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: The Council wants the\n"
	.string "Station's series. All forty years,\l"
	.string "certified. For the review.$"

ParcelWeather_PairGauge_Text_1:
# 1245 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Then they'll get the brackets\n"
	.string "too. The brackets are the series.$"

ParcelWeather_PairGauge_Text_2:
# 1246 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: They won't like the\n"
	.string "brackets.$"

ParcelWeather_PairGauge_Text_3:
# 1247 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Nobody likes the brackets.\n"
	.string "VANE says that's how you know they're\l"
	.string "true. Pack the book. Carefully. It's the\l"
	.string "only one.$"

ParcelWeather_PairGauge_Text_4:
# 1249 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: VANE cleared the ranger. First\n"
	.string "one through the gauntlet in two years\l"
	.string "who read the instruments before\l"
	.string "fighting the instrument-keepers.$"

ParcelWeather_PairGauge_Text_5:
# 1250 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: Is that the order it's\n"
	.string "meant to go?$"

ParcelWeather_PairGauge_Text_6:
# 1251 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: It's the order VANE's always\n"
	.string "said. Nobody listened. Now one did.$"

ParcelWeather_PairGauge_Text_7:
# 1252 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: What did the ranger read?$"

ParcelWeather_PairGauge_Text_8:
# 1253 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Everything with a date on it.\n"
	.string "Then asked why the fifth gauge was\l"
	.string "drawn where the falls aren't.$"

ParcelWeather_PairGauge_Text_9:
# 1255 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: The ice-out book's missing\n"
	.string "a year. Someone tore the page.$"

ParcelWeather_PairGauge_Text_10:
# 1256 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: Nobody tore it. It was the year\n"
	.string "with no ice. The clerk couldn't bring\l"
	.string "himself to write it and left the page.$"

ParcelWeather_PairGauge_Text_11:
# 1257 "data/maps/ParcelWeather/scripts.pory"
	.string "TECHNICIAN: So the gap's the reading.$"

ParcelWeather_PairGauge_Text_12:
# 1258 "data/maps/ParcelWeather/scripts.pory"
	.string "KEEPER: The gap's the reading. I've\n"
	.string "started putting the gaps in brackets.\l"
	.string "It's the only way the column stays a\l"
	.string "column.$"

ParcelWeather_PairYard_Text_0:
# 1267 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: VANE's been asked to testify. In\n"
	.string "the review. With the book.$"

ParcelWeather_PairYard_Text_1:
# 1268 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: VANE hates rooms.$"

ParcelWeather_PairYard_Text_2:
# 1269 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: VANE hates rooms that don't have\n"
	.string "weather in them. This one will. The\l"
	.string "ranger made sure the windows are the\l"
	.string "evidence.$"

ParcelWeather_PairYard_Text_3:
# 1270 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: I don't understand that.$"

ParcelWeather_PairYard_Text_4:
# 1271 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: Eat your breakfast. You will.$"

ParcelWeather_PairYard_Text_5:
# 1273 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: The ranger walked down slow.$"

ParcelWeather_PairYard_Text_6:
# 1274 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: Told you.$"

ParcelWeather_PairYard_Text_7:
# 1275 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: Stopped at the gate stake and\n"
	.string "read the whole thing. Then looked back\l"
	.string "at the yard like it had said something.$"

ParcelWeather_PairYard_Text_8:
# 1276 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: It had. The yard's been saying it\n"
	.string "for forty years. Takes a certain kind of\l"
	.string "ear.$"

ParcelWeather_PairYard_Text_9:
# 1278 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: The gauntlet four eat like a\n"
	.string "landslide. Four breakfasts before the\l"
	.string "fog's off the yard.$"

ParcelWeather_PairYard_Text_10:
# 1279 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: They say the ranger's coming up\n"
	.string "the road. On foot. Alone.$"

ParcelWeather_PairYard_Text_11:
# 1280 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: They all come up alone. It's the\n"
	.string "going down that tells you anything.$"

ParcelWeather_PairYard_Text_12:
# 1281 "data/maps/ParcelWeather/scripts.pory"
	.string "CADET: How?$"

ParcelWeather_PairYard_Text_13:
# 1282 "data/maps/ParcelWeather/scripts.pory"
	.string "COOK: The ones who read the yard on the\n"
	.string "way down walk slower. Watch for it.$"

ParcelWeather_PageFortyOne_Text_0:
# 1292 "data/maps/ParcelWeather/scripts.pory"
	.string "A page from a ledger, pinned under a\n"
	.string "stone by somebody who found it before\l"
	.string "you and did not know what to do with it.\l"
	.string "Page forty-one. ICE OUT: and no date.\l"
	.string "NO ICE, underlined twice, and a question\l"
	.string "mark rubbed to a ghost.\p"
	.string "You fold it into the notebook. It is the\n"
	.string "loudest page you have carried.$"

ParcelWeather_PageFortyOne_Text_1:
# 1295 "data/maps/ParcelWeather/scripts.pory"
	.string "A stone where a page was. Somebody has\n"
	.string "written on the stone, small: 41.$"
