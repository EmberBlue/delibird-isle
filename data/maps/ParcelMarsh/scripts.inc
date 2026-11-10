ParcelMarsh_MapScripts::
# 17 "data/maps/ParcelMarsh/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelMarsh_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelMarsh_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/ParcelMarsh/scripts.pory"
	map_script_2 VAR_SKALD_EPILOGUE, 6, ParcelMarsh_Epilogue
# 19 "data/maps/ParcelMarsh/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ParcelMarsh_FirstEntry
	.2byte 0


ParcelMarsh_FirstEntry::
# 24 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_CORRIDOR_ARRIVAL, ParcelMarsh_FirstEntry_2
# 28 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 29 "data/maps/ParcelMarsh/scripts.pory"
	bufferpartymonnick 0, 0
# 30 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_FirstEntry_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_FirstEntry_Text_1, MSGBOX_DEFAULT
# 32 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_FirstEntry_Text_2, MSGBOX_DEFAULT
# 33 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_CORRIDOR_ARRIVAL
# 34 "data/maps/ParcelMarsh/scripts.pory"
	releaseall
	end

ParcelMarsh_FirstEntry_2:
	end


ParcelMarsh_Hale::
# 40 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 41 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 42 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMarsh_Hale_2
# 65 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_10, MSGBOX_DEFAULT
# 66 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Hale_2:
# 43 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_unset FLAG_SKALD_MARSH_CHOICE_DONE, ParcelMarsh_Hale_5
# 61 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_9, MSGBOX_DEFAULT
# 62 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Hale_5:
# 44 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_1, MSGBOX_DEFAULT
# 46 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_2, MSGBOX_YESNO
# 47 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_Hale_8
# 52 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_5, MSGBOX_DEFAULT
# 53 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_6, MSGBOX_DEFAULT
ParcelMarsh_Hale_7:
# 55 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_7, MSGBOX_DEFAULT
# 56 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_8, MSGBOX_DEFAULT
# 57 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALD_MARSH_CHOICE_DONE
# 58 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Hale_8:
# 48 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_3, MSGBOX_DEFAULT
# 49 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_4, MSGBOX_DEFAULT
# 50 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALD_CH_MAHOGANY
	goto ParcelMarsh_Hale_7


ParcelMarsh_DryChannel::
# 72 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 73 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 74 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 0
# 75 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 76 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_DryChannel_2
# 81 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DryChannel_Text_1, MSGBOX_SIGN
# 82 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 83 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_DryChannel_2:
# 77 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DryChannel_Text_0, MSGBOX_SIGN
# 78 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_DeadReeds::
# 87 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 88 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 89 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 1
# 90 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 91 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_DeadReeds_2
# 96 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DeadReeds_Text_1, MSGBOX_SIGN
# 97 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 98 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_DeadReeds_2:
# 92 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DeadReeds_Text_0, MSGBOX_SIGN
# 93 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Edge::
# 102 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 103 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 104 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 2
# 105 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 106 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_Edge_2
# 111 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Edge_Text_1, MSGBOX_SIGN
# 112 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 113 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Edge_2:
# 107 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Edge_Text_0, MSGBOX_SIGN
# 108 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Poliwag::
# 117 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 118 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 119 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 3
# 120 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 121 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Poliwag_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Poliwag_Text_1, MSGBOX_DEFAULT
# 123 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_PoliwagWatch::
# 127 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 128 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_PoliwagWatch_Text_0, MSGBOX_DEFAULT
# 129 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Heron::
# 135 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 136 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 137 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMarsh_Heron_2
# 142 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 143 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 15
# 144 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 145 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ParcelMarsh_Heron_5
# 158 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_5, MSGBOX_DEFAULT
# 159 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_6, MSGBOX_DEFAULT
# 160 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_7, MSGBOX_DEFAULT
# 161 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_8, MSGBOX_DEFAULT
# 162 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_9, MSGBOX_DEFAULT
# 163 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_10, MSGBOX_DEFAULT
# 164 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_11, MSGBOX_DEFAULT
# 165 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_12, MSGBOX_DEFAULT
# 166 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HERON, ParcelMarsh_Heron_Text_13
# 167 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_14, MSGBOX_DEFAULT
# 168 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_15, MSGBOX_DEFAULT
# 169 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_16, MSGBOX_DEFAULT
# 170 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_17, MSGBOX_DEFAULT
# 171 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_18, MSGBOX_DEFAULT
# 172 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_19, MSGBOX_DEFAULT
# 173 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_20, MSGBOX_YESNO
# 174 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_Heron_8
# 179 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_22, MSGBOX_DEFAULT
# 180 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_23, MSGBOX_DEFAULT
# 181 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_24, MSGBOX_YESNO
# 182 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_Heron_14
# 187 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_27, MSGBOX_DEFAULT
# 188 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_28, MSGBOX_DEFAULT
ParcelMarsh_Heron_13:
# 190 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 191 "data/maps/ParcelMarsh/scripts.pory"
	delay 30
# 192 "data/maps/ParcelMarsh/scripts.pory"
	bufferpartymonnick 0, 0
# 193 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_29, MSGBOX_DEFAULT
# 194 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCorridor
# 195 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_30, MSGBOX_DEFAULT
# 196 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_31, MSGBOX_DEFAULT
# 197 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 198 "data/maps/ParcelMarsh/scripts.pory"
	playse SE_PIN
# 199 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_32, MSGBOX_DEFAULT
# 200 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_FINALE_DONE
# 201 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_2:
# 138 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_5:
# 146 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HERON_MET, ParcelMarsh_Heron_11
# 151 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_2, MSGBOX_DEFAULT
# 152 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_3, MSGBOX_DEFAULT
# 153 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_4, MSGBOX_DEFAULT
# 154 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_HERON_MET
# 155 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_8:
# 175 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_21, MSGBOX_DEFAULT
# 176 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_11:
# 147 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_1, MSGBOX_DEFAULT
# 148 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_14:
# 183 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_25, MSGBOX_DEFAULT
# 184 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_26, MSGBOX_DEFAULT
# 185 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALD_CH_HOLLIS_NAMED
	goto ParcelMarsh_Heron_13


ParcelMarsh_Item::
# 206 "data/maps/ParcelMarsh/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelMarsh_ItemFullRestore::
# 207 "data/maps/ParcelMarsh/scripts.pory"
	finditem ITEM_FULL_RESTORE
	end


ParcelMarsh_Leave::
# 210 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 211 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Leave_Text_0, MSGBOX_DEFAULT
# 212 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 213 "data/maps/ParcelMarsh/scripts.pory"
	warp MAP_PARCEL_FERNWICK, 11, 16
# 214 "data/maps/ParcelMarsh/scripts.pory"
	waitstate
	end


ParcelMarsh_GateAune::
# 219 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_MARSH, ParcelMarsh_GateAune_Text_0, ParcelMarsh_GateAune_Text_1, ParcelMarsh_GateAune_Defeated
# 223 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 224 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 225 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_GateAune_Text_2, MSGBOX_DEFAULT
# 226 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_GateAune_Defeated::
# 230 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_MARSH
# 231 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_GateAune_Defeated_Text_0, MSGBOX_DEFAULT
# 232 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA::
# 236 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MARSH_SEC_A, ParcelMarsh_SecA_Text_0, ParcelMarsh_SecA_Text_1, ParcelMarsh_SecA_FirstWin
# 240 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 241 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMarsh_SecA_3
ParcelMarsh_SecA_1:
# 244 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMarsh_SecA_8
ParcelMarsh_SecA_6:
# 247 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMarsh_SecA_13
ParcelMarsh_SecA_11:
# 250 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMarsh_SecA_18
ParcelMarsh_SecA_16:
# 253 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_Text_2, MSGBOX_DEFAULT
	end

ParcelMarsh_SecA_2:
# 242 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R2
	goto ParcelMarsh_SecA_1

ParcelMarsh_SecA_3:
# 241 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R2
	goto_if 0, ParcelMarsh_SecA_2
	goto ParcelMarsh_SecA_1

ParcelMarsh_SecA_7:
# 245 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R3
	goto ParcelMarsh_SecA_6

ParcelMarsh_SecA_8:
# 244 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R3
	goto_if 0, ParcelMarsh_SecA_7
	goto ParcelMarsh_SecA_6

ParcelMarsh_SecA_12:
# 248 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R4
	goto ParcelMarsh_SecA_11

ParcelMarsh_SecA_13:
# 247 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R4
	goto_if 0, ParcelMarsh_SecA_12
	goto ParcelMarsh_SecA_11

ParcelMarsh_SecA_17:
# 251 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R5
	goto ParcelMarsh_SecA_16

ParcelMarsh_SecA_18:
# 250 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R5
	goto_if 0, ParcelMarsh_SecA_17
	goto ParcelMarsh_SecA_16


ParcelMarsh_SecA_FirstWin::
# 257 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_Text_2, MSGBOX_DEFAULT
# 258 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R2::
# 262 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 263 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 264 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_0, MSGBOX_YESNO
# 265 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R2_2
# 270 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R2, ParcelMarsh_SecA_R2_Text_2
# 271 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_3, MSGBOX_DEFAULT
# 272 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R2_2:
# 266 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 267 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R3::
# 276 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 277 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 278 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R3_Text_0, MSGBOX_YESNO
# 279 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R3_2
# 284 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R3, ParcelMarsh_SecA_R3_Text_1
# 285 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R3_Text_2, MSGBOX_DEFAULT
# 286 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R3_2:
# 280 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 281 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R4::
# 290 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 291 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 292 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R4_Text_0, MSGBOX_YESNO
# 293 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R4_2
# 298 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R4, ParcelMarsh_SecA_R4_Text_1
# 299 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R4_Text_2, MSGBOX_DEFAULT
# 300 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R4_2:
# 294 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 295 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R5::
# 304 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 305 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 306 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R5_Text_0, MSGBOX_YESNO
# 307 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R5_2
# 312 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R5, ParcelMarsh_SecA_R5_Text_1
# 313 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R5_Text_2, MSGBOX_DEFAULT
# 314 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R5_2:
# 308 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 309 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB::
# 318 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MARSH_SEC_B, ParcelMarsh_SecB_Text_0, ParcelMarsh_SecB_Text_1, ParcelMarsh_SecB_FirstWin
# 322 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 323 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMarsh_SecB_3
ParcelMarsh_SecB_1:
# 326 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMarsh_SecB_8
ParcelMarsh_SecB_6:
# 329 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMarsh_SecB_13
ParcelMarsh_SecB_11:
# 332 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMarsh_SecB_18
ParcelMarsh_SecB_16:
# 335 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_Text_2, MSGBOX_DEFAULT
	end

ParcelMarsh_SecB_2:
# 324 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R2
	goto ParcelMarsh_SecB_1

ParcelMarsh_SecB_3:
# 323 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R2
	goto_if 0, ParcelMarsh_SecB_2
	goto ParcelMarsh_SecB_1

ParcelMarsh_SecB_7:
# 327 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R3
	goto ParcelMarsh_SecB_6

ParcelMarsh_SecB_8:
# 326 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R3
	goto_if 0, ParcelMarsh_SecB_7
	goto ParcelMarsh_SecB_6

ParcelMarsh_SecB_12:
# 330 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R4
	goto ParcelMarsh_SecB_11

ParcelMarsh_SecB_13:
# 329 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R4
	goto_if 0, ParcelMarsh_SecB_12
	goto ParcelMarsh_SecB_11

ParcelMarsh_SecB_17:
# 333 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R5
	goto ParcelMarsh_SecB_16

ParcelMarsh_SecB_18:
# 332 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R5
	goto_if 0, ParcelMarsh_SecB_17
	goto ParcelMarsh_SecB_16


ParcelMarsh_SecB_FirstWin::
# 339 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_Text_2, MSGBOX_DEFAULT
# 340 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R2::
# 344 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 345 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 346 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_0, MSGBOX_YESNO
# 347 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R2_2
# 352 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R2, ParcelMarsh_SecB_R2_Text_2
# 353 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_3, MSGBOX_DEFAULT
# 354 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R2_2:
# 348 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 349 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R3::
# 358 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 359 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 360 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R3_Text_0, MSGBOX_YESNO
# 361 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R3_2
# 366 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R3, ParcelMarsh_SecB_R3_Text_1
# 367 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R3_Text_2, MSGBOX_DEFAULT
# 368 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R3_2:
# 362 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 363 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R4::
# 372 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 373 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 374 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R4_Text_0, MSGBOX_YESNO
# 375 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R4_2
# 380 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R4, ParcelMarsh_SecB_R3_Text_1
# 381 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R4_Text_1, MSGBOX_DEFAULT
# 382 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R4_2:
# 376 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 377 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R5::
# 386 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 387 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 388 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R5_Text_0, MSGBOX_YESNO
# 389 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R5_2
# 394 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R5, ParcelMarsh_SecB_R5_Text_1
# 395 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R5_Text_2, MSGBOX_DEFAULT
# 396 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R5_2:
# 390 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 391 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Epilogue::
# 403 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 404 "data/maps/ParcelMarsh/scripts.pory"
	delay 20
# 405 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Epilogue_Text_0, MSGBOX_DEFAULT
# 406 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Epilogue_Text_1, MSGBOX_DEFAULT
# 407 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 408 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 7
# 409 "data/maps/ParcelMarsh/scripts.pory"
	warp MAP_PARCEL_COAST, 30, 53
# 410 "data/maps/ParcelMarsh/scripts.pory"
	waitstate
	end


ParcelMarsh_HeronCount::
# 414 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_EPILOGUE_DONE, ParcelMarsh_HeronCount_2
# 417 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_HeronCount_Text_0, MSGBOX_SIGN
	end

ParcelMarsh_HeronCount_2:
	end


ParcelMarsh_SurveyStake::
# 423 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SurveyStake_Text_0, MSGBOX_SIGN
# 424 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 6
# 425 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldSurveyStake
# 426 "data/maps/ParcelMarsh/scripts.pory"
	msgbox gStringVar4, MSGBOX_SIGN
# 427 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALD_SECOND, ParcelMarsh_SurveyStake_3
ParcelMarsh_SurveyStake_1:
	end

ParcelMarsh_SurveyStake_2:
# 428 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SurveyStake_Text_1, MSGBOX_SIGN
# 429 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALD_SECOND_6
	goto ParcelMarsh_SurveyStake_1

ParcelMarsh_SurveyStake_3:
# 427 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_unset FLAG_SKALD_SECOND_6, ParcelMarsh_SurveyStake_2
	goto ParcelMarsh_SurveyStake_1


ParcelMarsh_Board1::
# 437 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Board1_Text_0, MSGBOX_SIGN
	end


ParcelMarsh_Board2::
# 442 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Board2_Text_0, MSGBOX_SIGN
	end


ParcelMarsh_FirstEntry_Text_0:
# 30 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: This is as far as I go. The road\n"
	.string "stops here because they haven't\l"
	.string "needed it to go further. Yet.\p"
	.string "The marsh is past the water. You'll have\n"
	.string "to swim it. Nobody's built a way in, which\l"
	.string "is the only reason it's still a marsh.$"

ParcelMarsh_FirstEntry_Text_1:
# 31 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: There's a MEREHOLT director on\n"
	.string "the road. Don't ask me why. She'll want a\l"
	.string "word. Give her one.\p"
	.string "Then read the place. All of it. And\n"
	.string "whoever you find in there, {PLAYER},\l"
	.string "you read them too. I'll be here.$"

ParcelMarsh_FirstEntry_Text_2:
# 32 "data/maps/ParcelMarsh/scripts.pory"
	.string "{STR_VAR_1} goes still, and looks at\n"
	.string "the water.$"

ParcelMarsh_Hale_Text_0:
# 44 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: Is it done?$"

ParcelMarsh_Hale_Text_1:
# 45 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: …It's true.$"

ParcelMarsh_Hale_Text_2:
# 46 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: Her Johto numbers are in there\n"
	.string "too. The MAHOGANY marsh loses its\l"
	.string "listing the day they're corrected.\p"
	.string "You can file the correction yourself, in\n"
	.string "your own hand, or file the survey and\l"
	.string "let the lawyers find the rest. They'll\l"
	.string "find it. It's a question of whose hand.\p"
	.string "Yours?$"

ParcelMarsh_Hale_Text_3:
# 48 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: All of it. In my hand.$"

ParcelMarsh_Hale_Text_4:
# 49 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: Then that's yours to carry too.\n"
	.string "Good. It should be someone who knows\l"
	.string "what it costs.$"

ParcelMarsh_Hale_Text_5:
# 52 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: The survey. The rest they'll\n"
	.string "find.$"

ParcelMarsh_Hale_Text_6:
# 53 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: They will. The frogs pay either\n"
	.string "way; you chose who says so. That's not\l"
	.string "nothing. Don't let anyone tell you it\l"
	.string "was.$"

ParcelMarsh_Hale_Text_7:
# 55 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: That's the only done there is.\p"
	.string "They'll bury it, some of them. And some\n"
	.string "of them will read it. And a few of those\l"
	.string "will be standing where you're standing\l"
	.string "now, one day, with a notebook of their\l"
	.string "own.\p"
	.string "That's the work. Not the winning. The\n"
	.string "witnessing, and the writing it down.$"

ParcelMarsh_Hale_Text_8:
# 56 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: Come on. Station's a long walk and\n"
	.string "I'm not as young as the road thinks I\l"
	.string "am.\p"
	.string "When you're ready, the coast office will\n"
	.string "want to see the author. Let them.\l"
	.string "You've earned watching their faces.$"

ParcelMarsh_Hale_Text_9:
# 61 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: The record exists. Honest, in your\n"
	.string "hand. It's the only kind that ever\l"
	.string "changed anything.$"

ParcelMarsh_Hale_Text_10:
# 65 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: I'll be here. Past the water it's\n"
	.string "yours.$"

ParcelMarsh_DryChannel_Text_0:
# 77 "data/maps/ParcelMarsh/scripts.pory"
	.string "The drying channel. In the notebook.$"

ParcelMarsh_DryChannel_Text_1:
# 81 "data/maps/ParcelMarsh/scripts.pory"
	.string "The channel that feeds the marsh from\n"
	.string "the north runs over cracked grey mud at\l"
	.string "its edges. It should run cold and full to\l"
	.string "the bank.\p"
	.string "The marsh is losing its water from the\n"
	.string "top, a little less every season, from\l"
	.string "everything upstream that this whole\l"
	.string "journey has written down. Written down.$"

ParcelMarsh_DeadReeds_Text_0:
# 92 "data/maps/ParcelMarsh/scripts.pory"
	.string "The dead reeds. In the notebook.$"

ParcelMarsh_DeadReeds_Text_1:
# 96 "data/maps/ParcelMarsh/scripts.pory"
	.string "A band of fine sedge gone straw-pale\n"
	.string "and brittle: the reeds that need their\l"
	.string "feet wet the year round. They're the\l"
	.string "first to feel a marsh begin to leave.\p"
	.string "The small things first. The big things\n"
	.string "only confirm it. Written down.$"

ParcelMarsh_Edge_Text_0:
# 107 "data/maps/ParcelMarsh/scripts.pory"
	.string "The graded edge. In the notebook.$"

ParcelMarsh_Edge_Text_1:
# 111 "data/maps/ParcelMarsh/scripts.pory"
	.string "On the east side the wild stops in a\n"
	.string "straight line. Graded ground, a survey\l"
	.string "flag, the start of a road to nothing\l"
	.string "yet.\p"
	.string "Nobody has taken this marsh. Someone\n"
	.string "has simply begun to stand at its edge\l"
	.string "and wait. That's all it takes now.\l"
	.string "Written down.$"

ParcelMarsh_Poliwag_Text_0:
# 121 "data/maps/ParcelMarsh/scripts.pory"
	.string "The POLIWAG press together where the\n"
	.string "stream still runs, fewer than the bank\l"
	.string "was worn for. They flinch, and hold their\l"
	.string "ground, because there's no ground left\l"
	.string "behind them to take.$"

ParcelMarsh_Poliwag_Text_1:
# 122 "data/maps/ParcelMarsh/scripts.pory"
	.string "On the bridge, the first morning, you\n"
	.string "thought something was chasing them\l"
	.string "upstream. Nothing was. The water in\l"
	.string "front of them was running out. It has\l"
	.string "been running out their whole lives, and\l"
	.string "yours. Written down.$"

ParcelMarsh_PoliwagWatch_Text_0:
# 128 "data/maps/ParcelMarsh/scripts.pory"
	.string "POLIWAG: …$"

ParcelMarsh_Heron_Text_0:
# 138 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Forty-one this morning.\n"
	.string "Thirty-nine yesterday. Don't read\l"
	.string "anything into two. I never let you read\l"
	.string "anything into two.$"

ParcelMarsh_Heron_Text_1:
# 147 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Not yet. The drying channel. The\n"
	.string "dead reeds. The edge they've cut. And\l"
	.string "them, the frogs, last of all.\p"
	.string "Read the whole place. Then we'll talk\n"
	.string "about the part of it that's me.$"

ParcelMarsh_Heron_Text_2:
# 151 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: You found me. Of course you did.\n"
	.string "I taught you how to find the things\l"
	.string "that don't want finding.$"

ParcelMarsh_Heron_Text_3:
# 152 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: …DR. HERON.$"

ParcelMarsh_Heron_Text_4:
# 153 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Don't. Not yet.\p"
	.string "You came to read a place, not a person.\n"
	.string "So read the place first, all of it, the\l"
	.string "way I taught you. Then come back to me.\l"
	.string "I'm not going anywhere. I've seen to\l"
	.string "that.$"

ParcelMarsh_Heron_Text_5:
# 158 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: COLLAPSING. You don't have to\n"
	.string "say it; I can see you've already written\l"
	.string "it. The keystone's going. The web's\l"
	.string "thinning. The edge is leaning in.\p"
	.string "I should know how long they can hang\n"
	.string "on. I built half my name on the number.$"

ParcelMarsh_Heron_Text_6:
# 159 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: The recovery model on the\n"
	.string "coast. The curves. They're yours.$"

ParcelMarsh_Heron_Text_7:
# 160 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: They're mine.\p"
	.string "Forty years ago. A marsh like this one,\n"
	.string "north of MAHOGANY. The POLIWAG were\l"
	.string "going under and the law would not lift a\l"
	.string "finger for a number that small. So I\l"
	.string "made the number bigger. I wrote down a\l"
	.string "recovery that hadn't happened yet.$"

ParcelMarsh_Heron_Text_8:
# 161 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: It worked. The preserve was\n"
	.string "protected. The frogs held on, barely,\l"
	.string "but they held. And for thirty years I\l"
	.string "told myself a lie with a good heart and\l"
	.string "good results was near enough to the\l"
	.string "truth.$"

ParcelMarsh_Heron_Text_9:
# 162 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Then the concern read my\n"
	.string "beautiful lie and saw the shape of a\l"
	.string "key. If one marsh bounces back, they all\l"
	.string "do. If they all do, then nothing you\l"
	.string "take can't be given back later.\p"
	.string "My little mercy became their permission.\n"
	.string "For everything.$"

ParcelMarsh_Heron_Text_10:
# 163 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: You could have said.\n"
	.string "Somewhere, sometime, you could have\l"
	.string "said…$"

ParcelMarsh_Heron_Text_11:
# 164 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Said what, to whom, on whose\n"
	.string "coin? The same hand that funds the lab\l"
	.string "holds the lie. The day I tell the truth,\l"
	.string "the work dies, the name dies, and the\l"
	.string "movement I gave my life to dies\l"
	.string "discredited by its own founder.\p"
	.string "That's how it's done now, {PLAYER}. No\n"
	.string "villains in a tower. Just people you\l"
	.string "love, standing in the door, very sorry,\l"
	.string "not moving.$"

ParcelMarsh_Heron_Text_12:
# 165 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: You came to read me too. Then\n"
	.string "read me all the way. Patient, now. Wait\l"
	.string "for the thing to show itself. The way I\l"
	.string "taught you.$"

ParcelMarsh_Heron_Text_13:
# 166 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: …There. All of me, in the open.\n"
	.string "The good years and the bought ones\l"
	.string "both.$"

ParcelMarsh_Heron_Text_14:
# 167 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: I can't give you the rest. Some\n"
	.string "of it I can't say aloud even now. But\l"
	.string "it's in the notebook. The margins. You\l"
	.string "can read them at last. You couldn't,\l"
	.string "when I sent it ahead. That was the\l"
	.string "whole point of sending it ahead.$"

ParcelMarsh_Heron_Text_15:
# 168 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: You wrote to me the winter he\n"
	.string "stopped painting. Your SMEARGLE.\l"
	.string "Eleven pages, and not one of them asked\l"
	.string "me for anything but a reason.\p"
	.string "I had no reason. I had a model. I sent\n"
	.string "you the model. I have been ashamed of\l"
	.string "that letter for longer than you have\l"
	.string "been grown.$"

ParcelMarsh_Heron_Text_16:
# 169 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: It was the only letter that\n"
	.string "didn't tell me it would be all right.$"

ParcelMarsh_Heron_Text_17:
# 170 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: No. I couldn't manage that one.\n"
	.string "Not even then.$"

ParcelMarsh_Heron_Text_18:
# 171 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: I came here to do the one honest\n"
	.string "thing I had left. Count them. Truly, this\l"
	.string "time. Write down how many, and the day\l"
	.string "the last one goes.\p"
	.string "I'm not leaving this marsh. Don't spend\n"
	.string "your breath on it.$"

ParcelMarsh_Heron_Text_19:
# 172 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: So finish it. Take the record,\n"
	.string "mine, and ILEX's long cloth, and yours,\l"
	.string "and put it somewhere it can't be unsaid.\p"
	.string "It will cost you. It will cost the\n"
	.string "MAHOGANY frogs the protection my lie\l"
	.string "bought them. It will cost me the last of\l"
	.string "the name. HOLLIS will have told you the\l"
	.string "price. HOLLIS is never wrong about a\l"
	.string "price.$"

ParcelMarsh_Heron_Text_20:
# 173 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Honesty isn't free. Pay for it\n"
	.string "anyway, and keep the receipt.\p"
	.string "Well? Will you file it true?$"

ParcelMarsh_Heron_Text_21:
# 175 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Then sit with it until you can.\n"
	.string "I'm not going anywhere. Neither, for a\l"
	.string "while yet, are they.$"

ParcelMarsh_Heron_Text_22:
# 179 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: It's true. That's all it has\n"
	.string "to be.$"

ParcelMarsh_Heron_Text_23:
# 180 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Then one more thing, and then\n"
	.string "the frogs.\p"
	.string "HOLLIS. Her name is on every renewal\n"
	.string "and every condition. She was my\l"
	.string "student. She is the one they'll put in\l"
	.string "the chair after me, and she knows it.\p"
	.string "Put her name in it and she goes down\n"
	.string "with me. Leave it out and she stays in\l"
	.string "the chair they built for her. Neither\l"
	.string "one is mercy. Which?$"

ParcelMarsh_Heron_Text_24:
# 181 "data/maps/ParcelMarsh/scripts.pory"
	.string "Her name in the record?$"

ParcelMarsh_Heron_Text_25:
# 183 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: It's hers. It goes in.$"

ParcelMarsh_Heron_Text_26:
# 184 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Yes. I'd have done the same,\n"
	.string "once. Before I learned to leave names\l"
	.string "out.\p"
	.string "Don't learn it. It took me thirty years\n"
	.string "and it was the wrong lesson.$"

ParcelMarsh_Heron_Text_27:
# 187 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: She's in the chair they\n"
	.string "built. The record can say that without\l"
	.string "her name on it.$"

ParcelMarsh_Heron_Text_28:
# 188 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Then she'll have to climb out of\n"
	.string "it herself. Some do. I didn't.\p"
	.string "You're kinder than the record. Make\n"
	.string "sure the record isn't.$"

ParcelMarsh_Heron_Text_29:
# 193 "data/maps/ParcelMarsh/scripts.pory"
	.string "The last survey. The woman who taught\n"
	.string "you the verb watches you do it, and\l"
	.string "{STR_VAR_1} stays quiet at your\l"
	.string "shoulder.\p"
	.string "The failing keystone. The thinning web.\n"
	.string "The edge leaning in. Read the way six\l"
	.string "broken places taught you to read, and\l"
	.string "written down true.$"

ParcelMarsh_Heron_Text_30:
# 195 "data/maps/ParcelMarsh/scripts.pory"
	.string "No certification this time. No red cloth\n"
	.string "from anyone's hand. The last strip ties\l"
	.string "to your own pack, and nobody signs it.\p"
	.string "The notebook was your teacher's eye.\n"
	.string "The first words in your own hand go\l"
	.string "under hers. They're not the same hand.\l"
	.string "That's the point.$"

ParcelMarsh_Heron_Text_31:
# 196 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Go on. HALE's at the road. He'll\n"
	.string "pretend he wasn't worried. Let him.$"

ParcelMarsh_Heron_Text_32:
# 199 "data/maps/ParcelMarsh/scripts.pory"
	.string "In the last of the running water a\n"
	.string "single POLIWAG slips upstream in a\l"
	.string "tight, tired line. The way they did at\l"
	.string "the bridge, the first morning, before\l"
	.string "you had the word for it.\p"
	.string "You have the word now.$"

ParcelMarsh_Leave_Text_0:
# 211 "data/maps/ParcelMarsh/scripts.pory"
	.string "The road east leads back out of the\n"
	.string "wilderness to FERNWICK, and whatever\l"
	.string "the record does next.$"

ParcelMarsh_GateAune_Text_0:
# 220 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: Director, MEREHOLT. I came out to\n"
	.string "the end of the road to see what's worth\l"
	.string "the paperwork.\p"
	.string "The regime has a form for this gate. I\n"
	.string "brought it. It has a box for the reason\l"
	.string "and the box is small, because there has\l"
	.string "never been a reason before.\p"
	.string "Nothing past me is cleared until I clear\n"
	.string "it. Show me why you should reach the\l"
	.string "water at all.$"

ParcelMarsh_GateAune_Text_1:
# 221 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: …Sufficient. The last gate logs\n"
	.string "you. Go and read what's left to read.$"

ParcelMarsh_GateAune_Text_2:
# 225 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: You're entered. The final\n"
	.string "clearance, against your card.\p"
	.string "What you find past here is no longer the\n"
	.string "regime's to grant or deny. It was only\l"
	.string "ever yours to record.$"

ParcelMarsh_GateAune_Defeated_Text_0:
# 231 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: Marsh clearance, granted. The\n"
	.string "last one MEREHOLT has to give.\p"
	.string "Everything that matters now is\n"
	.string "downstream of this, and out of our\l"
	.string "hands. Funny, that.$"

ParcelMarsh_SecA_Text_0:
# 237 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Road's closed. Director's orders.\n"
	.string "You can argue with me or with her. Me\l"
	.string "first.$"

ParcelMarsh_SecA_Text_1:
# 238 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: …Her, then.$"

ParcelMarsh_SecA_Text_2:
# 253 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: We graded fifty metres of road to\n"
	.string "nowhere and posted two guards on it.\l"
	.string "Ask me what we're guarding. Go on. I\l"
	.string "don't know either.$"

ParcelMarsh_SecA_R2_Text_0:
# 264 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: I kept the team up for this. Again?$"

ParcelMarsh_SecA_R2_Text_1:
# 266 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Suit yourself. I'm here.$"

ParcelMarsh_SecA_R2_Text_2:
# 270 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Noted. Properly, this time.$"

ParcelMarsh_SecA_R2_Text_3:
# 271 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelMarsh_SecA_R3_Text_0:
# 278 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelMarsh_SecA_R3_Text_1:
# 284 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: …Fair.$"

ParcelMarsh_SecA_R3_Text_2:
# 285 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMarsh_SecA_R4_Text_0:
# 292 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelMarsh_SecA_R4_Text_1:
# 298 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Still yours.$"

ParcelMarsh_SecA_R4_Text_2:
# 299 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMarsh_SecA_R5_Text_0:
# 306 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelMarsh_SecA_R5_Text_1:
# 312 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Right. That's the whole of it.$"

ParcelMarsh_SecA_R5_Text_2:
# 313 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelMarsh_SecB_Text_0:
# 319 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Survey flag's ours. Everything\n"
	.string "past the flag is 'pending'. You're\l"
	.string "pending. Battle.$"

ParcelMarsh_SecB_Text_1:
# 320 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Pending, still.$"

ParcelMarsh_SecB_Text_2:
# 335 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: There's an old woman in there.\n"
	.string "Past the water. The director knows. The\l"
	.string "director's not in a hurry. That's the\l"
	.string "strange part.$"

ParcelMarsh_SecB_R2_Text_0:
# 346 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelMarsh_SecB_R2_Text_1:
# 348 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Fine. Same spot.$"

ParcelMarsh_SecB_R2_Text_2:
# 352 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Noted. Properly, this time.$"

ParcelMarsh_SecB_R2_Text_3:
# 353 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelMarsh_SecB_R3_Text_0:
# 360 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelMarsh_SecB_R3_Text_1:
# 366 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Still yours.$"

ParcelMarsh_SecB_R3_Text_2:
# 367 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMarsh_SecB_R4_Text_0:
# 374 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelMarsh_SecB_R4_Text_1:
# 381 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMarsh_SecB_R5_Text_0:
# 388 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelMarsh_SecB_R5_Text_1:
# 394 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: That's the one I wanted to see.$"

ParcelMarsh_SecB_R5_Text_2:
# 395 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelMarsh_Epilogue_Text_0:
# 405 "data/maps/ParcelMarsh/scripts.pory"
	.string "The marsh. The count in the notebook\n"
	.string "runs to the last day in her hand, steady\l"
	.string "to the end. Forty-one. Forty-one.\l"
	.string "Thirty-nine. Forty.\p"
	.string "No entry after it. A strip of red cloth\n"
	.string "on the reeds, and nobody to sign it.\p"
	.string "The POLIWAG hold where the stream still\n"
	.string "runs. The corridor listing went through\l"
	.string "on the day she stopped writing.$"

ParcelMarsh_Epilogue_Text_1:
# 406 "data/maps/ParcelMarsh/scripts.pory"
	.string "Her hut is swept. The POLITOED sits in\n"
	.string "the doorway and does not go in. It has\l"
	.string "been fed; someone from the Survey\l"
	.string "comes out on the ferry days and leaves\l"
	.string "before it has to be thanked.\p"
	.string "The stone that held her sheet flat on\n"
	.string "the table is holding yours.$"

ParcelMarsh_HeronCount_Text_0:
# 417 "data/maps/ParcelMarsh/scripts.pory"
	.string "The notebook she kept here, open to\n"
	.string "the last page. A count, steady to the\l"
	.string "end: forty-one, forty-one, thirty-nine,\l"
	.string "forty.\p"
	.string "No entry after it.$"

ParcelMarsh_SurveyStake_Text_0:
# 423 "data/maps/ParcelMarsh/scripts.pory"
	.string "A survey stake at the marsh's edge.\n"
	.string "Fresh red cloth. Under it, a much older\l"
	.string "stake, the cloth gone to rust, driven by\l"
	.string "somebody else a long time ago.$"

ParcelMarsh_SurveyStake_Text_1:
# 428 "data/maps/ParcelMarsh/scripts.pory"
	.string "Second reading. Forty. Forty.\n"
	.string "Thirty-nine. Forty-two. In your hand\l"
	.string "now, under hers. The listing went\l"
	.string "through. The stream still runs. The\l"
	.string "keystone holds where it holds.\p"
	.string "You tie a strip to the older stake, the\n"
	.string "one under the first, and do not sign it.\l"
	.string "The Survey knows whose it is.$"

ParcelMarsh_Board1_Text_0:
# 437 "data/maps/ParcelMarsh/scripts.pory"
	.string "A SURVEY BOARD, older than the others\n"
	.string "and not in the Survey's hand. KEYSTONE\l"
	.string "MARSH. No gate, no crest, no path kept.\l"
	.string "Every guild present, because nothing\l"
	.string "here was ever taken apart.\p"
	.string "The board's one line: complete. Under it,\n"
	.string "newer, in pencil: at the edges,\l"
	.string "narrowing. Nobody has made that\l"
	.string "official.$"

ParcelMarsh_Board2_Text_0:
# 442 "data/maps/ParcelMarsh/scripts.pory"
	.string "A SURVEY BOARD with its red cloth gone.\n"
	.string "The POLIWAG of this marsh are the same\l"
	.string "line as the ones in the lower country\l"
	.string "and the ones on the old charts. The\l"
	.string "chart said the line recovered.\p"
	.string "The marsh says: count them yourself.\n"
	.string "The space for the count is blank. It is\l"
	.string "blank on purpose.$"
