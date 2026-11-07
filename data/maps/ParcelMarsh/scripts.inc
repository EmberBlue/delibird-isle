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
# 56 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_5, MSGBOX_DEFAULT
# 57 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Hale_2:
# 43 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_unset FLAG_SKALD_MARSH_CHOICE_DONE, ParcelMarsh_Hale_5
# 52 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_4, MSGBOX_DEFAULT
# 53 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Hale_5:
# 44 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_1, MSGBOX_DEFAULT
# 46 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_2, MSGBOX_DEFAULT
# 47 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Hale_Text_3, MSGBOX_DEFAULT
# 48 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALD_MARSH_CHOICE_DONE
# 49 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_DryChannel::
# 63 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 64 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 65 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 0
# 66 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 67 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_DryChannel_2
# 72 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DryChannel_Text_1, MSGBOX_SIGN
# 73 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 74 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_DryChannel_2:
# 68 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DryChannel_Text_0, MSGBOX_SIGN
# 69 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_DeadReeds::
# 78 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 79 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 80 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 1
# 81 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 82 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_DeadReeds_2
# 87 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DeadReeds_Text_1, MSGBOX_SIGN
# 88 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 89 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_DeadReeds_2:
# 83 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_DeadReeds_Text_0, MSGBOX_SIGN
# 84 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Edge::
# 93 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 94 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 95 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 2
# 96 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 97 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelMarsh_Edge_2
# 102 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Edge_Text_1, MSGBOX_SIGN
# 103 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 104 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Edge_2:
# 98 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Edge_Text_0, MSGBOX_SIGN
# 99 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Poliwag::
# 108 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 109 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 110 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 3
# 111 "data/maps/ParcelMarsh/scripts.pory"
	special SkaldmereCertTaskMark
# 112 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Poliwag_Text_0, MSGBOX_DEFAULT
# 113 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Poliwag_Text_1, MSGBOX_DEFAULT
# 114 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_PoliwagWatch::
# 118 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 119 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_PoliwagWatch_Text_0, MSGBOX_DEFAULT
# 120 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Heron::
# 126 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 127 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 128 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FINALE_DONE, ParcelMarsh_Heron_2
# 133 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH7_EVIDENCE
# 134 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_0x8004, 15
# 135 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 136 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ParcelMarsh_Heron_5
# 149 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_5, MSGBOX_DEFAULT
# 150 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_6, MSGBOX_DEFAULT
# 151 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_7, MSGBOX_DEFAULT
# 152 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_8, MSGBOX_DEFAULT
# 153 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_9, MSGBOX_DEFAULT
# 154 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_10, MSGBOX_DEFAULT
# 155 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_11, MSGBOX_DEFAULT
# 156 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_12, MSGBOX_DEFAULT
# 157 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_HERON, ParcelMarsh_Heron_Text_13
# 158 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_14, MSGBOX_DEFAULT
# 159 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_15, MSGBOX_DEFAULT
# 160 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_16, MSGBOX_DEFAULT
# 161 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_17, MSGBOX_YESNO
# 162 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_Heron_8
# 167 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_19, MSGBOX_DEFAULT
# 168 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 169 "data/maps/ParcelMarsh/scripts.pory"
	delay 30
# 170 "data/maps/ParcelMarsh/scripts.pory"
	bufferpartymonnick 0, 0
# 171 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_20, MSGBOX_DEFAULT
# 172 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyCorridor
# 173 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_21, MSGBOX_DEFAULT
# 174 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_22, MSGBOX_DEFAULT
# 175 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 176 "data/maps/ParcelMarsh/scripts.pory"
	playse SE_PIN
# 177 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_23, MSGBOX_DEFAULT
# 178 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_FINALE_DONE
# 179 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_2:
# 129 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_5:
# 137 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HERON_MET, ParcelMarsh_Heron_11
# 142 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_3, MSGBOX_DEFAULT
# 144 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_4, MSGBOX_DEFAULT
# 145 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_HERON_MET
# 146 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_8:
# 163 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_18, MSGBOX_DEFAULT
# 164 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_Heron_11:
# 138 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Heron_Text_1, MSGBOX_DEFAULT
# 139 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Item::
# 184 "data/maps/ParcelMarsh/scripts.pory"
	finditem ITEM_MAX_REVIVE
	end


ParcelMarsh_ItemFullRestore::
# 185 "data/maps/ParcelMarsh/scripts.pory"
	finditem ITEM_FULL_RESTORE
	end


ParcelMarsh_Leave::
# 188 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 189 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Leave_Text_0, MSGBOX_DEFAULT
# 190 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 191 "data/maps/ParcelMarsh/scripts.pory"
	warp MAP_PARCEL_FERNWICK, 11, 16
# 192 "data/maps/ParcelMarsh/scripts.pory"
	waitstate
	end


ParcelMarsh_GateAune::
# 197 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GATE_MARSH, ParcelMarsh_GateAune_Text_0, ParcelMarsh_GateAune_Text_1, ParcelMarsh_GateAune_Defeated
# 201 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 202 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 203 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_GateAune_Text_2, MSGBOX_DEFAULT
# 204 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_GateAune_Defeated::
# 208 "data/maps/ParcelMarsh/scripts.pory"
	setflag FLAG_SKALDMERE_GATE_MARSH
# 209 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_GateAune_Defeated_Text_0, MSGBOX_DEFAULT
# 210 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA::
# 214 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MARSH_SEC_A, ParcelMarsh_SecA_Text_0, ParcelMarsh_SecA_Text_1, ParcelMarsh_SecA_FirstWin
# 218 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 219 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMarsh_SecA_3
ParcelMarsh_SecA_1:
# 222 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMarsh_SecA_8
ParcelMarsh_SecA_6:
# 225 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMarsh_SecA_13
ParcelMarsh_SecA_11:
# 228 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMarsh_SecA_18
ParcelMarsh_SecA_16:
# 231 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_Text_2, MSGBOX_DEFAULT
	end

ParcelMarsh_SecA_2:
# 220 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R2
	goto ParcelMarsh_SecA_1

ParcelMarsh_SecA_3:
# 219 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R2
	goto_if 0, ParcelMarsh_SecA_2
	goto ParcelMarsh_SecA_1

ParcelMarsh_SecA_7:
# 223 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R3
	goto ParcelMarsh_SecA_6

ParcelMarsh_SecA_8:
# 222 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R3
	goto_if 0, ParcelMarsh_SecA_7
	goto ParcelMarsh_SecA_6

ParcelMarsh_SecA_12:
# 226 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R4
	goto ParcelMarsh_SecA_11

ParcelMarsh_SecA_13:
# 225 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R4
	goto_if 0, ParcelMarsh_SecA_12
	goto ParcelMarsh_SecA_11

ParcelMarsh_SecA_17:
# 229 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecA_R5
	goto ParcelMarsh_SecA_16

ParcelMarsh_SecA_18:
# 228 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_A_R5
	goto_if 0, ParcelMarsh_SecA_17
	goto ParcelMarsh_SecA_16


ParcelMarsh_SecA_FirstWin::
# 235 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_Text_2, MSGBOX_DEFAULT
# 236 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R2::
# 240 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 241 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 242 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_0, MSGBOX_YESNO
# 243 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R2_2
# 248 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R2, ParcelMarsh_SecA_R2_Text_2
# 249 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_3, MSGBOX_DEFAULT
# 250 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R2_2:
# 244 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 245 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R3::
# 254 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 255 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 256 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R3_Text_0, MSGBOX_YESNO
# 257 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R3_2
# 262 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R3, ParcelMarsh_SecA_R3_Text_1
# 263 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R3_Text_2, MSGBOX_DEFAULT
# 264 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R3_2:
# 258 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R4::
# 268 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 269 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 270 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R4_Text_0, MSGBOX_YESNO
# 271 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R4_2
# 276 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R4, ParcelMarsh_SecA_R4_Text_1
# 277 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R4_Text_2, MSGBOX_DEFAULT
# 278 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R4_2:
# 272 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 273 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecA_R5::
# 282 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 283 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 284 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R5_Text_0, MSGBOX_YESNO
# 285 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecA_R5_2
# 290 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_A_R5, ParcelMarsh_SecA_R5_Text_1
# 291 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R5_Text_2, MSGBOX_DEFAULT
# 292 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecA_R5_2:
# 286 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecA_R2_Text_1, MSGBOX_DEFAULT
# 287 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB::
# 296 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_single TRAINER_SKALD_MARSH_SEC_B, ParcelMarsh_SecB_Text_0, ParcelMarsh_SecB_Text_1, ParcelMarsh_SecB_FirstWin
# 300 "data/maps/ParcelMarsh/scripts.pory"
	specialvar VAR_RESULT, SkaldRematchTier
# 301 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge ParcelMarsh_SecB_3
ParcelMarsh_SecB_1:
# 304 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ParcelMarsh_SecB_8
ParcelMarsh_SecB_6:
# 307 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ParcelMarsh_SecB_13
ParcelMarsh_SecB_11:
# 310 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge ParcelMarsh_SecB_18
ParcelMarsh_SecB_16:
# 313 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_Text_2, MSGBOX_DEFAULT
	end

ParcelMarsh_SecB_2:
# 302 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R2
	goto ParcelMarsh_SecB_1

ParcelMarsh_SecB_3:
# 301 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R2
	goto_if 0, ParcelMarsh_SecB_2
	goto ParcelMarsh_SecB_1

ParcelMarsh_SecB_7:
# 305 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R3
	goto ParcelMarsh_SecB_6

ParcelMarsh_SecB_8:
# 304 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R3
	goto_if 0, ParcelMarsh_SecB_7
	goto ParcelMarsh_SecB_6

ParcelMarsh_SecB_12:
# 308 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R4
	goto ParcelMarsh_SecB_11

ParcelMarsh_SecB_13:
# 307 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R4
	goto_if 0, ParcelMarsh_SecB_12
	goto ParcelMarsh_SecB_11

ParcelMarsh_SecB_17:
# 311 "data/maps/ParcelMarsh/scripts.pory"
	goto ParcelMarsh_SecB_R5
	goto ParcelMarsh_SecB_16

ParcelMarsh_SecB_18:
# 310 "data/maps/ParcelMarsh/scripts.pory"
	checktrainerflag TRAINER_SKALD_MARSH_SEC_B_R5
	goto_if 0, ParcelMarsh_SecB_17
	goto ParcelMarsh_SecB_16


ParcelMarsh_SecB_FirstWin::
# 317 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_Text_2, MSGBOX_DEFAULT
# 318 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R2::
# 322 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 323 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 324 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_0, MSGBOX_YESNO
# 325 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R2_2
# 330 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R2, ParcelMarsh_SecB_R2_Text_2
# 331 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_3, MSGBOX_DEFAULT
# 332 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R2_2:
# 326 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 327 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R3::
# 336 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 337 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 338 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R3_Text_0, MSGBOX_YESNO
# 339 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R3_2
# 344 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R3, ParcelMarsh_SecB_R3_Text_1
# 345 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R3_Text_2, MSGBOX_DEFAULT
# 346 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R3_2:
# 340 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 341 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R4::
# 350 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 351 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 352 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R4_Text_0, MSGBOX_YESNO
# 353 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R4_2
# 358 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R4, ParcelMarsh_SecB_R3_Text_1
# 359 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R4_Text_1, MSGBOX_DEFAULT
# 360 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R4_2:
# 354 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 355 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_SecB_R5::
# 364 "data/maps/ParcelMarsh/scripts.pory"
	lock
# 365 "data/maps/ParcelMarsh/scripts.pory"
	faceplayer
# 366 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R5_Text_0, MSGBOX_YESNO
# 367 "data/maps/ParcelMarsh/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ParcelMarsh_SecB_R5_2
# 372 "data/maps/ParcelMarsh/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_MARSH_SEC_B_R5, ParcelMarsh_SecB_R5_Text_1
# 373 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R5_Text_2, MSGBOX_DEFAULT
# 374 "data/maps/ParcelMarsh/scripts.pory"
	release
	end

ParcelMarsh_SecB_R5_2:
# 368 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_SecB_R2_Text_1, MSGBOX_DEFAULT
# 369 "data/maps/ParcelMarsh/scripts.pory"
	release
	end


ParcelMarsh_Epilogue::
# 381 "data/maps/ParcelMarsh/scripts.pory"
	lockall
# 382 "data/maps/ParcelMarsh/scripts.pory"
	delay 20
# 383 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_Epilogue_Text_0, MSGBOX_DEFAULT
# 384 "data/maps/ParcelMarsh/scripts.pory"
	closemessage
# 385 "data/maps/ParcelMarsh/scripts.pory"
	setvar VAR_SKALD_EPILOGUE, 7
# 386 "data/maps/ParcelMarsh/scripts.pory"
	warp MAP_PARCEL_COAST, 30, 53
# 387 "data/maps/ParcelMarsh/scripts.pory"
	waitstate
	end


ParcelMarsh_HeronCount::
# 391 "data/maps/ParcelMarsh/scripts.pory"
	goto_if_unset FLAG_SKALDMERE_EPILOGUE_DONE, ParcelMarsh_HeronCount_2
# 394 "data/maps/ParcelMarsh/scripts.pory"
	msgbox ParcelMarsh_HeronCount_Text_0, MSGBOX_SIGN
	end

ParcelMarsh_HeronCount_2:
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
	.string "HALE: That's the only done there is.\p"
	.string "They'll bury it, some of them. And some\n"
	.string "of them will read it. And a few of those\l"
	.string "will be standing where you're standing\l"
	.string "now, one day, with a notebook of their\l"
	.string "own.\p"
	.string "That's the work. Not the winning. The\n"
	.string "witnessing, and the writing it down.$"

ParcelMarsh_Hale_Text_3:
# 47 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: Come on. Station's a long walk and\n"
	.string "I'm not as young as the road thinks I\l"
	.string "am.\p"
	.string "When you're ready, the coast office will\n"
	.string "want to see the author. Let them.\l"
	.string "You've earned watching their faces.$"

ParcelMarsh_Hale_Text_4:
# 52 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: The record exists. Honest, in your\n"
	.string "hand. It's the only kind that ever\l"
	.string "changed anything.$"

ParcelMarsh_Hale_Text_5:
# 56 "data/maps/ParcelMarsh/scripts.pory"
	.string "HALE: I'll be here. Past the water it's\n"
	.string "yours.$"

ParcelMarsh_DryChannel_Text_0:
# 68 "data/maps/ParcelMarsh/scripts.pory"
	.string "The drying channel. In the notebook.$"

ParcelMarsh_DryChannel_Text_1:
# 72 "data/maps/ParcelMarsh/scripts.pory"
	.string "The channel that feeds the marsh from\n"
	.string "the north runs over cracked grey mud at\l"
	.string "its edges. It should run cold and full to\l"
	.string "the bank.\p"
	.string "The marsh is losing its water from the\n"
	.string "top, a little less every season, from\l"
	.string "everything upstream that this whole\l"
	.string "journey has written down. Written down.$"

ParcelMarsh_DeadReeds_Text_0:
# 83 "data/maps/ParcelMarsh/scripts.pory"
	.string "The dead reeds. In the notebook.$"

ParcelMarsh_DeadReeds_Text_1:
# 87 "data/maps/ParcelMarsh/scripts.pory"
	.string "A band of fine sedge gone straw-pale\n"
	.string "and brittle: the reeds that need their\l"
	.string "feet wet the year round. They're the\l"
	.string "first to feel a marsh begin to leave.\p"
	.string "The small things first. The big things\n"
	.string "only confirm it. Written down.$"

ParcelMarsh_Edge_Text_0:
# 98 "data/maps/ParcelMarsh/scripts.pory"
	.string "The graded edge. In the notebook.$"

ParcelMarsh_Edge_Text_1:
# 102 "data/maps/ParcelMarsh/scripts.pory"
	.string "On the east side the wild stops in a\n"
	.string "straight line. Graded ground, a survey\l"
	.string "flag, the start of a road to nothing\l"
	.string "yet.\p"
	.string "Nobody has taken this marsh. Someone\n"
	.string "has simply begun to stand at its edge\l"
	.string "and wait. That's all it takes now.\l"
	.string "Written down.$"

ParcelMarsh_Poliwag_Text_0:
# 112 "data/maps/ParcelMarsh/scripts.pory"
	.string "The POLIWAG press together where the\n"
	.string "stream still runs, fewer than the bank\l"
	.string "was worn for. They flinch, and hold their\l"
	.string "ground, because there's no ground left\l"
	.string "behind them to take.$"

ParcelMarsh_Poliwag_Text_1:
# 113 "data/maps/ParcelMarsh/scripts.pory"
	.string "On the bridge, the first morning, you\n"
	.string "thought something was chasing them\l"
	.string "upstream. Nothing was. The water in\l"
	.string "front of them was running out. It has\l"
	.string "been running out their whole lives, and\l"
	.string "yours. Written down.$"

ParcelMarsh_PoliwagWatch_Text_0:
# 119 "data/maps/ParcelMarsh/scripts.pory"
	.string "POLIWAG: …$"

ParcelMarsh_Heron_Text_0:
# 129 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Forty-one this morning.\n"
	.string "Thirty-nine yesterday. Don't read\l"
	.string "anything into two. I never let you read\l"
	.string "anything into two.$"

ParcelMarsh_Heron_Text_1:
# 138 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Not yet. The drying channel. The\n"
	.string "dead reeds. The edge they've cut. And\l"
	.string "them, the frogs, last of all.\p"
	.string "Read the whole place. Then we'll talk\n"
	.string "about the part of it that's me.$"

ParcelMarsh_Heron_Text_2:
# 142 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: You found me. Of course you did.\n"
	.string "I taught you how to find the things\l"
	.string "that don't want finding.$"

ParcelMarsh_Heron_Text_3:
# 143 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: …DR. HERON.$"

ParcelMarsh_Heron_Text_4:
# 144 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Don't. Not yet.\p"
	.string "You came to read a place, not a person.\n"
	.string "So read the place first, all of it, the\l"
	.string "way I taught you. Then come back to me.\l"
	.string "I'm not going anywhere. I've seen to\l"
	.string "that.$"

ParcelMarsh_Heron_Text_5:
# 149 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: COLLAPSING. You don't have to\n"
	.string "say it; I can see you've already written\l"
	.string "it. The keystone's going. The web's\l"
	.string "thinning. The edge is leaning in.\p"
	.string "I should know how long they can hang\n"
	.string "on. I built half my name on the number.$"

ParcelMarsh_Heron_Text_6:
# 150 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: The recovery model on the\n"
	.string "coast. The curves. They're yours.$"

ParcelMarsh_Heron_Text_7:
# 151 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: They're mine.\p"
	.string "Forty years ago. A marsh like this one,\n"
	.string "north of MAHOGANY. The POLIWAG were\l"
	.string "going under and the law would not lift a\l"
	.string "finger for a number that small. So I\l"
	.string "made the number bigger. I wrote down a\l"
	.string "recovery that hadn't happened yet.$"

ParcelMarsh_Heron_Text_8:
# 152 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: It worked. The preserve was\n"
	.string "protected. The frogs held on, barely,\l"
	.string "but they held. And for thirty years I\l"
	.string "told myself a lie with a good heart and\l"
	.string "good results was near enough to the\l"
	.string "truth.$"

ParcelMarsh_Heron_Text_9:
# 153 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Then the concern read my\n"
	.string "beautiful lie and saw the shape of a\l"
	.string "key. If one marsh bounces back, they all\l"
	.string "do. If they all do, then nothing you\l"
	.string "take can't be given back later.\p"
	.string "My little mercy became their permission.\n"
	.string "For everything.$"

ParcelMarsh_Heron_Text_10:
# 154 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: You could have said.\n"
	.string "Somewhere, sometime, you could have\l"
	.string "said…$"

ParcelMarsh_Heron_Text_11:
# 155 "data/maps/ParcelMarsh/scripts.pory"
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
# 156 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: You came to read me too. Then\n"
	.string "read me all the way. Patient, now. Wait\l"
	.string "for the thing to show itself. The way I\l"
	.string "taught you.$"

ParcelMarsh_Heron_Text_13:
# 157 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: …There. All of me, in the open.\n"
	.string "The good years and the bought ones\l"
	.string "both.$"

ParcelMarsh_Heron_Text_14:
# 158 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: I can't give you the rest. Some\n"
	.string "of it I can't say aloud even now. But\l"
	.string "it's in the notebook. The margins. You\l"
	.string "can read them at last. You couldn't,\l"
	.string "when I sent it ahead. That was the\l"
	.string "whole point of sending it ahead.$"

ParcelMarsh_Heron_Text_15:
# 159 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: I came here to do the one honest\n"
	.string "thing I had left. Count them. Truly, this\l"
	.string "time. Write down how many, and the day\l"
	.string "the last one goes.\p"
	.string "I'm not leaving this marsh. Don't spend\n"
	.string "your breath on it.$"

ParcelMarsh_Heron_Text_16:
# 160 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: So finish it. Take the record,\n"
	.string "mine, and ILEX's long cloth, and yours,\l"
	.string "and put it somewhere it can't be unsaid.\p"
	.string "It will cost you. It will cost the\n"
	.string "MAHOGANY frogs the protection my lie\l"
	.string "bought them. It will cost me the last of\l"
	.string "the name. HOLLIS will have told you the\l"
	.string "price. HOLLIS is never wrong about a\l"
	.string "price.$"

ParcelMarsh_Heron_Text_17:
# 161 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Honesty isn't free. Pay for it\n"
	.string "anyway, and keep the receipt.\p"
	.string "Well? Will you file it true?$"

ParcelMarsh_Heron_Text_18:
# 163 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Then sit with it until you can.\n"
	.string "I'm not going anywhere. Neither, for a\l"
	.string "while yet, are they.$"

ParcelMarsh_Heron_Text_19:
# 167 "data/maps/ParcelMarsh/scripts.pory"
	.string "{PLAYER}: It's true. That's all it has\n"
	.string "to be.$"

ParcelMarsh_Heron_Text_20:
# 171 "data/maps/ParcelMarsh/scripts.pory"
	.string "The last survey. The woman who taught\n"
	.string "you the verb watches you do it, and\l"
	.string "{STR_VAR_1} stays quiet at your\l"
	.string "shoulder.\p"
	.string "The failing keystone. The thinning web.\n"
	.string "The edge leaning in. Read the way six\l"
	.string "broken places taught you to read, and\l"
	.string "written down true.$"

ParcelMarsh_Heron_Text_21:
# 173 "data/maps/ParcelMarsh/scripts.pory"
	.string "No certification this time. No red cloth\n"
	.string "from anyone's hand. The last strip ties\l"
	.string "to your own pack, and nobody signs it.\p"
	.string "The notebook was your teacher's eye.\n"
	.string "The first words in your own hand go\l"
	.string "under hers. They're not the same hand.\l"
	.string "That's the point.$"

ParcelMarsh_Heron_Text_22:
# 174 "data/maps/ParcelMarsh/scripts.pory"
	.string "HERON: Go on. HALE's at the road. He'll\n"
	.string "pretend he wasn't worried. Let him.$"

ParcelMarsh_Heron_Text_23:
# 177 "data/maps/ParcelMarsh/scripts.pory"
	.string "In the last of the running water a\n"
	.string "single POLIWAG slips upstream in a\l"
	.string "tight, tired line. The way they did at\l"
	.string "the bridge, the first morning, before\l"
	.string "you had the word for it.\p"
	.string "You have the word now.$"

ParcelMarsh_Leave_Text_0:
# 189 "data/maps/ParcelMarsh/scripts.pory"
	.string "The road east leads back out of the\n"
	.string "wilderness to FERNWICK, and whatever\l"
	.string "the record does next.$"

ParcelMarsh_GateAune_Text_0:
# 198 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: Director, MEREHOLT. I came out to\n"
	.string "the end of the road to see what's worth\l"
	.string "the paperwork.\p"
	.string "Nothing past me is cleared until I clear\n"
	.string "it. Show me why you should reach the\l"
	.string "water at all.$"

ParcelMarsh_GateAune_Text_1:
# 199 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: …Sufficient. The last gate logs\n"
	.string "you. Go and read what's left to read.$"

ParcelMarsh_GateAune_Text_2:
# 203 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: You're entered. The final\n"
	.string "clearance, against your card.\p"
	.string "What you find past here is no longer the\n"
	.string "regime's to grant or deny. It was only\l"
	.string "ever yours to record.$"

ParcelMarsh_GateAune_Defeated_Text_0:
# 209 "data/maps/ParcelMarsh/scripts.pory"
	.string "AUNE: Marsh clearance, granted. The\n"
	.string "last one MEREHOLT has to give.\p"
	.string "Everything that matters now is\n"
	.string "downstream of this, and out of our\l"
	.string "hands. Funny, that.$"

ParcelMarsh_SecA_Text_0:
# 215 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Road's closed. Director's orders.\n"
	.string "You can argue with me or with her. Me\l"
	.string "first.$"

ParcelMarsh_SecA_Text_1:
# 216 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: …Her, then.$"

ParcelMarsh_SecA_Text_2:
# 231 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: We graded fifty metres of road to\n"
	.string "nowhere and posted two guards on it.\l"
	.string "Ask me what we're guarding. Go on. I\l"
	.string "don't know either.$"

ParcelMarsh_SecA_R2_Text_0:
# 242 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: I kept the team up for this. Again?$"

ParcelMarsh_SecA_R2_Text_1:
# 244 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Suit yourself. I'm here.$"

ParcelMarsh_SecA_R2_Text_2:
# 248 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Noted. Properly, this time.$"

ParcelMarsh_SecA_R2_Text_3:
# 249 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: That's two to you. Get the next\n"
	.string "stamp and come back.$"

ParcelMarsh_SecA_R3_Text_0:
# 256 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelMarsh_SecA_R3_Text_1:
# 262 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: …Fair.$"

ParcelMarsh_SecA_R3_Text_2:
# 263 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMarsh_SecA_R4_Text_0:
# 270 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Seven stamps. I've one more fight\n"
	.string "in me that's worth the name. Yes?$"

ParcelMarsh_SecA_R4_Text_1:
# 276 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Still yours.$"

ParcelMarsh_SecA_R4_Text_2:
# 277 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMarsh_SecA_R5_Text_0:
# 284 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: They read your name at the\n"
	.string "hearing. I'd like to read it myself.\l"
	.string "Battle?$"

ParcelMarsh_SecA_R5_Text_1:
# 290 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: Right. That's the whole of it.$"

ParcelMarsh_SecA_R5_Text_2:
# 291 "data/maps/ParcelMarsh/scripts.pory"
	.string "VIG: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelMarsh_SecB_Text_0:
# 297 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Survey flag's ours. Everything\n"
	.string "past the flag is 'pending'. You're\l"
	.string "pending. Battle.$"

ParcelMarsh_SecB_Text_1:
# 298 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Pending, still.$"

ParcelMarsh_SecB_Text_2:
# 313 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: There's an old woman in there.\n"
	.string "Past the water. The director knows. The\l"
	.string "director's not in a hurry. That's the\l"
	.string "strange part.$"

ParcelMarsh_SecB_R2_Text_0:
# 324 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: You again. I've had time to think\n"
	.string "about last time. Go again?$"

ParcelMarsh_SecB_R2_Text_1:
# 326 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Fine. Same spot.$"

ParcelMarsh_SecB_R2_Text_2:
# 330 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Noted. Properly, this time.$"

ParcelMarsh_SecB_R2_Text_3:
# 331 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Come back with more clearances.\n"
	.string "I'll have more for you.$"

ParcelMarsh_SecB_R3_Text_0:
# 338 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Three stamps, then five. Fine. Me\n"
	.string "next?$"

ParcelMarsh_SecB_R3_Text_1:
# 344 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Still yours.$"

ParcelMarsh_SecB_R3_Text_2:
# 345 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Three. I'll be stronger when the\n"
	.string "coast's done with you.$"

ParcelMarsh_SecB_R4_Text_0:
# 352 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: I don't care about the paper. I\n"
	.string "care about the one I lost. Go?$"

ParcelMarsh_SecB_R4_Text_1:
# 359 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: Four. There's one more, after.\n"
	.string "Whatever after is.$"

ParcelMarsh_SecB_R5_Text_0:
# 366 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: I heard what you filed. Then show\n"
	.string "me what filed it?$"

ParcelMarsh_SecB_R5_Text_1:
# 372 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: That's the one I wanted to see.$"

ParcelMarsh_SecB_R5_Text_2:
# 373 "data/maps/ParcelMarsh/scripts.pory"
	.string "TOVA: That's all I've got. It was enough\n"
	.string "to see it done.$"

ParcelMarsh_Epilogue_Text_0:
# 383 "data/maps/ParcelMarsh/scripts.pory"
	.string "The marsh. The count in the notebook\n"
	.string "runs to the last day in her hand, steady\l"
	.string "to the end. Forty-one. Forty-one.\l"
	.string "Thirty-nine. Forty.\p"
	.string "No entry after it. A strip of red cloth\n"
	.string "on the reeds, and nobody to sign it.\p"
	.string "The POLIWAG hold where the stream still\n"
	.string "runs. The corridor listing went through\l"
	.string "on the day she stopped writing.$"

ParcelMarsh_HeronCount_Text_0:
# 394 "data/maps/ParcelMarsh/scripts.pory"
	.string "The notebook she kept here, open to\n"
	.string "the last page. A count, steady to the\l"
	.string "end: forty-one, forty-one, thirty-nine,\l"
	.string "forty.\p"
	.string "No entry after it.$"
