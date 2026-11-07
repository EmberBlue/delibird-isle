ParcelFloodbasin_MapScripts::
# 32 "data/maps/ParcelFloodbasin/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelFloodbasin_OnTransition
	.byte 0


ParcelFloodbasin_OnTransition::
# 39 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_OnTransition_2
# 42 "data/maps/ParcelFloodbasin/scripts.pory"
	clearflag FLAG_TEMP_2
ParcelFloodbasin_OnTransition_1:
	end

ParcelFloodbasin_OnTransition_2:
# 40 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_TEMP_2
	goto ParcelFloodbasin_OnTransition_1


ParcelFloodbasin_FirstEntry::
# 49 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_FLOODBASIN_ARRIVAL, ParcelFloodbasin_FirstEntry_2
# 53 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 54 "data/maps/ParcelFloodbasin/scripts.pory"
	bufferpartymonnick 0, 0
# 55 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_1, MSGBOX_DEFAULT
# 57 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_2, MSGBOX_DEFAULT
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_FirstEntry_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALDMERE_FLOODBASIN_ARRIVAL
# 60 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_FirstEntry_2:
	end


ParcelFloodbasin_ReliefScene::
# 67 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_ReliefScene_2
# 67 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_ReliefScene_2
# 71 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 72 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_0, MSGBOX_DEFAULT
# 73 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_1, MSGBOX_DEFAULT
# 74 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_2, MSGBOX_DEFAULT
# 75 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 76 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyLookUp
# 77 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 78 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_3, MSGBOX_DEFAULT
# 79 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_4, MSGBOX_DEFAULT
# 80 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_5, MSGBOX_DEFAULT
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_6, MSGBOX_DEFAULT
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_7, MSGBOX_DEFAULT
# 83 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 84 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 10, Movement_FLD_DorseyFaceDown
# 85 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_ReliefScene_Text_8, MSGBOX_DEFAULT
# 87 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_SKALD_FLD_RELIEF_DONE
# 88 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
# 89 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_ReliefScene_2:
# 68 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_3, 1
	end


# 93 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyLookUp:
# 93 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
# 93 "data/maps/ParcelFloodbasin/scripts.pory"
	delay_16
	step_end

# 94 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_DorseyFaceDown:
# 94 "data/maps/ParcelFloodbasin/scripts.pory"
	face_down
	step_end

ParcelFloodbasin_Dorsey::
# 97 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 98 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 99 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 100 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 101 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 102 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Dorsey_2
# 107 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_1, MSGBOX_DEFAULT
# 108 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Dorsey_2:
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Dorsey_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide1::
# 112 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 113 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide1_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Aide2::
# 119 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 120 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Aide2_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilOldWoman::
# 126 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 127 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 128 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALD_FLD_RELIEF_DONE, ParcelFloodbasin_VilOldWoman_2
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_1, MSGBOX_DEFAULT
# 134 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilOldWoman_2:
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilOldWoman_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilMan::
# 138 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 139 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilMan_Text_0, MSGBOX_DEFAULT
# 141 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilGirl::
# 145 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 146 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 147 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilGirl_Text_0, MSGBOX_DEFAULT
# 148 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_VilFisher::
# 152 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 153 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 154 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_SKALDMERE_WETLAND_CERT, ParcelFloodbasin_VilFisher_2
# 159 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_1, MSGBOX_DEFAULT
# 160 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_VilFisher_2:
# 155 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_VilFisher_Text_0, MSGBOX_DEFAULT
# 156 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Discharge::
# 166 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 167 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 168 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 0
# 169 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 170 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Discharge_2
# 175 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_1, MSGBOX_SIGN
# 176 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 177 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Discharge_2:
# 171 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Discharge_Text_0, MSGBOX_SIGN
# 172 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_Sheen::
# 181 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 182 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 183 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 1
# 184 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 185 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Sheen_2
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_1, MSGBOX_SIGN
# 191 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 192 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Sheen_2:
# 186 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sheen_Text_0, MSGBOX_SIGN
# 187 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeadReeds::
# 196 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 197 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 198 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 2
# 199 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 200 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_DeadReeds_2
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_1, MSGBOX_SIGN
# 206 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 207 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_DeadReeds_2:
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeadReeds_Text_0, MSGBOX_SIGN
# 202 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_DeformedWooper::
# 213 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 214 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 215 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 3
# 216 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 217 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_DeformedWooper_Text_0, MSGBOX_DEFAULT
# 218 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_SickKarp::
# 222 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 223 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 224 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 4
# 225 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SickKarp_Text_0, MSGBOX_DEFAULT
# 227 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BoothSign::
# 233 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BoothSign_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Remediator::
# 238 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 239 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 240 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH2_EVIDENCE
# 241 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_0x8004, 5
# 242 "data/maps/ParcelFloodbasin/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 243 "data/maps/ParcelFloodbasin/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelFloodbasin_Remediator_2
# 248 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_1, MSGBOX_DEFAULT
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_2, MSGBOX_DEFAULT
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_3, MSGBOX_DEFAULT
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_4, MSGBOX_DEFAULT
# 252 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_5, MSGBOX_DEFAULT
# 253 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_6, MSGBOX_DEFAULT
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_7, MSGBOX_DEFAULT
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_8, MSGBOX_DEFAULT
# 256 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 257 "data/maps/ParcelFloodbasin/scripts.pory"
	delay 30
# 258 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_9, MSGBOX_DEFAULT
# 259 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_REMEDIATOR, ParcelFloodbasin_Remediator_Text_10, ParcelFloodbasin_Remediator_Text_11
# 262 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_12, MSGBOX_DEFAULT
# 263 "data/maps/ParcelFloodbasin/scripts.pory"
	special SkaldmereCertTaskMark
# 264 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end

ParcelFloodbasin_Remediator_2:
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Remediator_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


ParcelFloodbasin_BasinKidTrainer::
# 270 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_BASIN_KID, ParcelFloodbasin_BasinKidTrainer_Text_0, ParcelFloodbasin_BasinKidTrainer_Text_1
# 273 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_BasinKidTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Arve::
# 277 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_ARVE, ParcelFloodbasin_Arve_Text_0, ParcelFloodbasin_Arve_Text_1
# 280 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Arve_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Kai::
# 284 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_KAI, ParcelFloodbasin_Kai_Text_0, ParcelFloodbasin_Kai_Text_1
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Kai_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Signe::
# 291 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SIGNE, ParcelFloodbasin_Signe_Text_0, ParcelFloodbasin_Signe_Text_1
# 294 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Signe_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Leif::
# 298 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_LEIF, ParcelFloodbasin_Leif_Text_0, ParcelFloodbasin_Leif_Text_1
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Leif_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Truls::
# 305 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_TRULS, ParcelFloodbasin_Truls_Text_0, ParcelFloodbasin_Truls_Text_1
# 308 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Truls_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Halvor::
# 312 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_HALVOR, ParcelFloodbasin_Halvor_Text_0, ParcelFloodbasin_Halvor_Text_1
# 315 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Halvor_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Maja::
# 319 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_MAJA, ParcelFloodbasin_Maja_Text_0, ParcelFloodbasin_Maja_Text_1
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Maja_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Bjorn::
# 326 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_BJORN, ParcelFloodbasin_Bjorn_Text_0, ParcelFloodbasin_Bjorn_Text_1
# 329 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Bjorn_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Solveig::
# 333 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_SOLVEIG, ParcelFloodbasin_Solveig_Text_0, ParcelFloodbasin_Solveig_Text_1
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Solveig_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Nils::
# 340 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_NILS, ParcelFloodbasin_Nils_Text_0, ParcelFloodbasin_Nils_Text_1
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Nils_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Rannveig::
# 347 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_RANNVEIG, ParcelFloodbasin_Rannveig_Text_0, ParcelFloodbasin_Rannveig_Text_1
# 350 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Rannveig_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Einar::
# 354 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_EINAR, ParcelFloodbasin_Einar_Text_0, ParcelFloodbasin_Einar_Text_1
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Einar_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Sturla::
# 361 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_STURLA, ParcelFloodbasin_Sturla_Text_0, ParcelFloodbasin_Sturla_Text_1
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Sturla_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_Oskar::
# 368 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_single TRAINER_SKALD_FLD_OSKAR, ParcelFloodbasin_Oskar_Text_0, ParcelFloodbasin_Oskar_Text_1
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Oskar_Text_2, MSGBOX_DEFAULT
	end


ParcelFloodbasin_ItemRevive::
# 376 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_REVIVE
	end


ParcelFloodbasin_ItemSuperPotion::
# 377 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_SUPER_POTION
	end


ParcelFloodbasin_ItemGreatBall::
# 378 "data/maps/ParcelFloodbasin/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


ParcelFloodbasin_SignHamlet::
# 381 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_SignHamlet_Text_0, MSGBOX_SIGN
	end


ParcelFloodbasin_Checkpoint::
# 389 "data/maps/ParcelFloodbasin/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ParcelFloodbasin_Checkpoint_2
# 393 "data/maps/ParcelFloodbasin/scripts.pory"
	lockall
# 394 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_0, MSGBOX_DEFAULT
# 395 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 396 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenApproach
# 397 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 398 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FLD_FaceLeft
# 399 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 400 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_1, MSGBOX_DEFAULT
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	trainerbattle_no_intro TRAINER_SKALD_GYM3, ParcelFloodbasin_Checkpoint_Text_2
# 402 "data/maps/ParcelFloodbasin/scripts.pory"
	setflag FLAG_BADGE03_GET
# 403 "data/maps/ParcelFloodbasin/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 404 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_3, MSGBOX_DEFAULT
# 405 "data/maps/ParcelFloodbasin/scripts.pory"
	giveitem ITEM_HM06
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_Checkpoint_Text_4, MSGBOX_DEFAULT
# 407 "data/maps/ParcelFloodbasin/scripts.pory"
	closemessage
# 408 "data/maps/ParcelFloodbasin/scripts.pory"
	applymovement 6, Movement_FLD_BreenAside
# 409 "data/maps/ParcelFloodbasin/scripts.pory"
	waitmovement 0
# 410 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
# 411 "data/maps/ParcelFloodbasin/scripts.pory"
	releaseall
	end

ParcelFloodbasin_Checkpoint_2:
# 390 "data/maps/ParcelFloodbasin/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


ParcelFloodbasin_GymBreen::
# 415 "data/maps/ParcelFloodbasin/scripts.pory"
	lock
# 416 "data/maps/ParcelFloodbasin/scripts.pory"
	faceplayer
# 417 "data/maps/ParcelFloodbasin/scripts.pory"
	msgbox ParcelFloodbasin_GymBreen_Text_0, MSGBOX_DEFAULT
# 418 "data/maps/ParcelFloodbasin/scripts.pory"
	release
	end


# 421 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenApproach:
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
# 421 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_right
	step_end

# 422 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_BreenAside:
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_left
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	walk_down
# 422 "data/maps/ParcelFloodbasin/scripts.pory"
	face_up
	step_end

# 423 "data/maps/ParcelFloodbasin/scripts.pory"
Movement_FLD_FaceLeft:
# 423 "data/maps/ParcelFloodbasin/scripts.pory"
	face_left
	step_end

ParcelFloodbasin_FirstEntry_Text_0:
# 55 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The trees open onto a low, wide basin.\n"
	.string "Rain ticks on the reeds.\p"
	.string "Something is wrong with the smell.$"

ParcelFloodbasin_FirstEntry_Text_1:
# 56 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{STR_VAR_1} walks on, but slower,\n"
	.string "and keeps to the middle of the path.$"

ParcelFloodbasin_FirstEntry_Text_2:
# 57 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALE's brief, on paper: LEGACY\n"
	.string "CONTAMINATION. OWNERSHIP\l"
	.string "UNCONTESTED. ACTIVE REMEDIATION\l"
	.string "CITED.\p"
	.string "Walk the upstream. Read it for yourself.$"

ParcelFloodbasin_FirstEntry_Text_3:
# 58 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "Voices, off to the east. A lot of them.\n"
	.string "Somebody is giving a speech in the rain.$"

ParcelFloodbasin_ReliefScene_Text_0:
# 72 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: --and the Council hears you.\n"
	.string "Third flood in two years. You've been\l"
	.string "patient. Patience should be paid for.$"

ParcelFloodbasin_ReliefScene_Text_1:
# 73 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Fuel vouchers. Dry goods. The\n"
	.string "FOUNDATION's boat runs to FERNWICK\l"
	.string "twice a day until the road's clear.\l"
	.string "Nobody pays.\p"
	.string "MRS. ASKE. Your roof. I haven't\n"
	.string "forgotten. Thursday.$"

ParcelFloodbasin_ReliefScene_Text_2:
# 74 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OLD WOMAN: Bless you, councilman. Bless\n"
	.string "you.$"

ParcelFloodbasin_ReliefScene_Text_3:
# 78 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: And there's our RANGER. Good.\n"
	.string "Come down, come down. Witness this.\l"
	.string "That's your job, isn't it? Witnessing.$"

ParcelFloodbasin_ReliefScene_Text_4:
# 79 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The CORPS sends a report. I\n"
	.string "send a boat.\p"
	.string "No, don't argue, I'm not blaming you. I'm\n"
	.string "telling you what people remember. They\l"
	.string "remember the boat.$"

ParcelFloodbasin_ReliefScene_Text_5:
# 80 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: The water goes down by\n"
	.string "Thursday. It always does. Then the\l"
	.string "smell goes. Then they forget, until the\l"
	.string "next one.\p"
	.string "That's the basin. That's just the basin.$"

ParcelFloodbasin_ReliefScene_Text_6:
# 81 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: Mister DORSEY, is the water bad?\n"
	.string "Gran says don't touch it.$"

ParcelFloodbasin_ReliefScene_Text_7:
# 82 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Your gran's right, sweetheart.\n"
	.string "Not until it's gone down. Here. Take two,\l"
	.string "one for your brother.$"

ParcelFloodbasin_ReliefScene_Text_8:
# 86 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Walk the basin, RANGER. Read\n"
	.string "your stakes. When you're done, the\l"
	.string "booth by the bridge will have the\l"
	.string "remediation file ready for you. All of it.\l"
	.string "We've nothing to hide.$"

ParcelFloodbasin_Dorsey_Text_0:
# 103 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: I heard KOLE lost his temper.\n"
	.string "He's young. I'll have a word.\p"
	.string "You'll write that the FOUNDATION's man\n"
	.string "was uncooperative. Write also that the\l"
	.string "FOUNDATION's boat ran twice a day. Both\l"
	.string "are true.$"

ParcelFloodbasin_Dorsey_Text_1:
# 107 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "DORSEY: Vouchers are for residents,\n"
	.string "RANGER. You've got a CORPS stipend. Try\l"
	.string "the booth by the bridge if you want\l"
	.string "paperwork.$"

ParcelFloodbasin_Aide1_Text_0:
# 114 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Fuel vouchers on the left, dry\n"
	.string "goods on the right. Sign the sheet. Yes,\l"
	.string "the FOUNDATION keeps the sheet. For\l"
	.string "the records.$"

ParcelFloodbasin_Aide2_Text_0:
# 121 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "AIDE: Forty-one households. Forty-one\n"
	.string "signatures. The councilman likes a full\l"
	.string "sheet.$"

ParcelFloodbasin_VilOldWoman_Text_0:
# 129 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: He knows my name. Eleven\n"
	.string "years on the Council and he knows my\l"
	.string "name.\p"
	.string "The CORPS man before you didn't. I'm not\n"
	.string "saying that to be unkind.$"

ParcelFloodbasin_VilOldWoman_Text_1:
# 133 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MRS. ASKE: Wait your turn, dear. We've\n"
	.string "all been flooded.$"

ParcelFloodbasin_VilMan_Text_0:
# 140 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAN: Three floods. Three times the\n"
	.string "vouchers. Nobody's asked why the water\l"
	.string "comes up brown now.\p"
	.string "I asked. I got vouchers.$"

ParcelFloodbasin_VilGirl_Text_0:
# 147 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "GIRL: My brother found a WOOPER with\n"
	.string "the wrong feet. Gran made him put it\l"
	.string "back. It didn't go anywhere. It just\l"
	.string "sat.$"

ParcelFloodbasin_VilFisher_Text_0:
# 155 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: Vouchers stopped. Boat\n"
	.string "stopped. Water's the same.\p"
	.string "Your lot wrote something down, I hear.\n"
	.string "Does writing it down dry anything out?$"

ParcelFloodbasin_VilFisher_Text_1:
# 159 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "FISHER: I don't fish the lake anymore. I\n"
	.string "fish the top lake, past the bridge. The\l"
	.string "water's clearer up there.\p"
	.string "Clearer. Not clear.$"

ParcelFloodbasin_Discharge_Text_0:
# 171 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The discharge pipe. In the notebook.$"

ParcelFloodbasin_Discharge_Text_1:
# 175 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A concrete pipe in the bank, mouth\n"
	.string "fouled with brown crust. Stamped:\l"
	.string "DISCHARGE -- AUTHORIZED USE ONLY.\p"
	.string "The authorization is decades old. The\n"
	.string "crust is fresher than that. Written\l"
	.string "down.$"

ParcelFloodbasin_Sheen_Text_0:
# 186 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The sheen. In the notebook.$"

ParcelFloodbasin_Sheen_Text_1:
# 190 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A faint iridescence crawls on the lake,\n"
	.string "bending the rain wrong.\p"
	.string "It is not new. The cattails downstream\n"
	.string "carry the same stain at their bases.\l"
	.string "Written down.$"

ParcelFloodbasin_DeadReeds_Text_0:
# 201 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "The dead reed band. Photographed.$"

ParcelFloodbasin_DeadReeds_Text_1:
# 205 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A band of dead reeds along the bank,\n"
	.string "straw-pale. The reeds above and below\l"
	.string "it are fine.\p"
	.string "The kill line is exactly the height of\n"
	.string "the flood six months ago. Written down.$"

ParcelFloodbasin_DeformedWooper_Text_0:
# 217 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A WOOPER, low in the puddle. Two left\n"
	.string "feet.\p"
	.string "It doesn't flinch. It has been like this\n"
	.string "since it hatched, and that was recent.\l"
	.string "Written down.$"

ParcelFloodbasin_SickKarp_Text_0:
# 226 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "A grown MAGIKARP lists against the\n"
	.string "bridge piling, scales greying.\p"
	.string "It was never in the pipe. It was at the\n"
	.string "top of the food web. Poison climbs.\l"
	.string "Written down.$"

ParcelFloodbasin_BoothSign_Text_0:
# 233 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MEREHOLT FOUNDATION COMMUNITY\n"
	.string "OUTREACH\p"
	.string "Remediation underway. Please report\n"
	.string "concerns to your local representative.\p"
	.string "The paint is wet from the rain. The sign\n"
	.string "is older.$"

ParcelFloodbasin_Remediator_Text_0:
# 244 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.$"

ParcelFloodbasin_Remediator_Text_1:
# 248 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Oh. RANGER! Welcome to the active\n"
	.string "remediation site.\p"
	.string "We've been at it… some time now. The\n"
	.string "FOUNDATION does great work.$"

ParcelFloodbasin_Remediator_Text_2:
# 249 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: When was the last reading?$"

ParcelFloodbasin_Remediator_Text_3:
# 250 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: …A quarter or two. We're due.$"

ParcelFloodbasin_Remediator_Text_4:
# 251 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: The councilman said you'd\n"
	.string "have the remediation file for me.$"

ParcelFloodbasin_Remediator_Text_5:
# 252 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Did he. Well. It's at the office.\n"
	.string "The coast office.$"

ParcelFloodbasin_Remediator_Text_6:
# 253 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: Who signed off on the\n"
	.string "discharge stamp on that pipe?$"

ParcelFloodbasin_Remediator_Text_7:
# 254 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: You'd have to ask the office. I\n"
	.string "just check the boxes.$"

ParcelFloodbasin_Remediator_Text_8:
# 255 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "{PLAYER}: I'm asking. The WOOPER has\n"
	.string "two left feet.$"

ParcelFloodbasin_Remediator_Text_9:
# 258 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Move along, RANGER. This isn't\n"
	.string "your patch.$"

ParcelFloodbasin_Remediator_Text_10:
# 260 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Tch. Fine. We'll do this the loud\n"
	.string "way.$"

ParcelFloodbasin_Remediator_Text_11:
# 261 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Hmph.$"

ParcelFloodbasin_Remediator_Text_12:
# 262 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KOLE: Write up whatever you write up.\p"
	.string "This basin ran sick before you got here.\n"
	.string "It'll run sick after.$"

ParcelFloodbasin_BasinKidTrainer_Text_0:
# 271 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Gran fishes here. Used to. Wanna\n"
	.string "battle?$"

ParcelFloodbasin_BasinKidTrainer_Text_1:
# 272 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: Ohh. You're good!$"

ParcelFloodbasin_BasinKidTrainer_Text_2:
# 273 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "PIPER: She doesn't eat what she\n"
	.string "catches anymore. Sells it to the people\l"
	.string "who don't ask.$"

ParcelFloodbasin_Arve_Text_0:
# 278 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: The DUSTOX here have spots in\n"
	.string "the wrong places. I've been drawing\l"
	.string "them. Battle first.$"

ParcelFloodbasin_Arve_Text_1:
# 279 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Drawn and beaten.$"

ParcelFloodbasin_Arve_Text_2:
# 280 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "ARVE: Wrong spots, extra spots, no\n"
	.string "spots. All in the same field. My teacher\l"
	.string "says that's just variety.$"

ParcelFloodbasin_Kai_Text_0:
# 285 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Nobody sees me in the tall grass.\n"
	.string "Nobody except you, apparently.$"

ParcelFloodbasin_Kai_Text_1:
# 286 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: Seen and beaten.$"

ParcelFloodbasin_Kai_Text_2:
# 287 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "KAI: The grass by the top lake is the\n"
	.string "tallest. It's also the only grass that\l"
	.string "smells like that.$"

ParcelFloodbasin_Signe_Text_0:
# 292 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: A picnic in the rain is still a\n"
	.string "picnic. A battle in the rain is still a\l"
	.string "battle.$"

ParcelFloodbasin_Signe_Text_1:
# 293 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: Soggy on both counts.$"

ParcelFloodbasin_Signe_Text_2:
# 294 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SIGNE: I don't let my MARILL in the\n"
	.string "lower lake. It came out itchy once. Just\l"
	.string "once was enough.$"

ParcelFloodbasin_Leif_Text_0:
# 299 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: I camp on the high ground. The low\n"
	.string "ground floods. Everybody knows.\l"
	.string "Battle?$"

ParcelFloodbasin_Leif_Text_1:
# 300 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Should've camped higher.$"

ParcelFloodbasin_Leif_Text_2:
# 301 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIF: Every year the high ground's a bit\n"
	.string "higher. The water, I mean. Not the\l"
	.string "ground.$"

ParcelFloodbasin_Truls_Text_0:
# 306 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: You walked right into my sight\n"
	.string "line. Rookie.$"

ParcelFloodbasin_Truls_Text_1:
# 307 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: …Not a rookie.$"

ParcelFloodbasin_Truls_Text_2:
# 308 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "TRULS: The councilman's boat goes past\n"
	.string "twice a day. Nobody's ever asked what it\l"
	.string "brings back.$"

ParcelFloodbasin_Halvor_Text_0:
# 313 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: The pond's got a boardwalk\n"
	.string "because the pond used to be a field.\l"
	.string "Think about that. Then battle me.$"

ParcelFloodbasin_Halvor_Text_1:
# 314 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: Thought about it, did you.$"

ParcelFloodbasin_Halvor_Text_2:
# 315 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "HALVOR: My father planted this field. I\n"
	.string "fish it. That's the basin in one family.$"

ParcelFloodbasin_Maja_Text_0:
# 320 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles never dry out here\n"
	.string "anymore. My MARILL loves it. I don't.\l"
	.string "Battle!$"

ParcelFloodbasin_Maja_Text_1:
# 321 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: MARILL still loves it.$"

ParcelFloodbasin_Maja_Text_2:
# 322 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "MAJA: The puddles have a shine on them\n"
	.string "in the morning. Rainbow colours. Gran\l"
	.string "says don't look at it too long.$"

ParcelFloodbasin_Bjorn_Text_0:
# 327 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: The pump house door's open\n"
	.string "again. I didn't open it. Did you? Battle\l"
	.string "me and we'll call it even.$"

ParcelFloodbasin_Bjorn_Text_1:
# 328 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: Even, then.$"

ParcelFloodbasin_Bjorn_Text_2:
# 329 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BJORN: MEREHOLT pumped this whole\n"
	.string "basin for twenty years. Then they\l"
	.string "stopped. Then the water came back.\l"
	.string "Then the smell.$"

ParcelFloodbasin_Solveig_Text_0:
# 334 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Cadet SOLVEIG. HALE said a\n"
	.string "provisional would come through. Spar.\l"
	.string "Then I'll tell you where the stakes are.$"

ParcelFloodbasin_Solveig_Text_1:
# 335 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Good. The stakes.$"

ParcelFloodbasin_Solveig_Text_2:
# 336 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "SOLVEIG: Red cloth stakes are ours. The\n"
	.string "bare ones are the FOUNDATION's. They\l"
	.string "put theirs on the clean bank. We put\l"
	.string "ours where the water is.$"

ParcelFloodbasin_Nils_Text_0:
# 341 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: The north meadow's the only dry\n"
	.string "bit. Everyone comes up here. Everyone\l"
	.string "battles.$"

ParcelFloodbasin_Nils_Text_1:
# 342 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: Everyone loses to you,\n"
	.string "apparently.$"

ParcelFloodbasin_Nils_Text_2:
# 343 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "NILS: My WURMPLE won't eat the reeds\n"
	.string "from the low ground. Only the high. I\l"
	.string "thought they ate anything.$"

ParcelFloodbasin_Rannveig_Text_0:
# 348 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: My GLOOM smells better than\n"
	.string "the basin does. That's a low bar.\l"
	.string "Battle?$"

ParcelFloodbasin_Rannveig_Text_1:
# 349 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: Still smells better.$"

ParcelFloodbasin_Rannveig_Text_2:
# 350 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "RANNVEIG: The road north is a haul road.\n"
	.string "Trucks come down it at night. Nobody's\l"
	.string "told us what they haul.$"

ParcelFloodbasin_Einar_Text_0:
# 355 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: My MIGHTYENA's the strongest\n"
	.string "thing in the basin. Prove me wrong.$"

ParcelFloodbasin_Einar_Text_1:
# 356 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: …Proved.$"

ParcelFloodbasin_Einar_Text_2:
# 357 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "EINAR: Strongest thing in the basin.\n"
	.string "Not saying much, these days.$"

ParcelFloodbasin_Sturla_Text_0:
# 362 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: I came for the NUZLEAF. Stayed\n"
	.string "for the rain. Nobody stays for the rain.\l"
	.string "Battle.$"

ParcelFloodbasin_Sturla_Text_1:
# 363 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: Should've left with the\n"
	.string "NUZLEAF.$"

ParcelFloodbasin_Sturla_Text_2:
# 364 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "STURLA: It rains here more than it used\n"
	.string "to. Not more days. More water. Ask\l"
	.string "anyone with a roof.$"

ParcelFloodbasin_Oskar_Text_0:
# 369 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The puddle field used to be the\n"
	.string "best grazing in the district. Now it's\l"
	.string "the best puddles. Battle.$"

ParcelFloodbasin_Oskar_Text_1:
# 370 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: Best puddles. Worst battle.$"

ParcelFloodbasin_Oskar_Text_2:
# 371 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "OSKAR: The ground here doesn't drain\n"
	.string "anymore. Something underneath it is\l"
	.string "full.$"

ParcelFloodbasin_SignHamlet_Text_0:
# 381 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "LEIRVIK\p"
	.string "Flood line marked on the chapel wall.\n"
	.string "Boat times posted at the relief store.$"

ParcelFloodbasin_Checkpoint_Text_0:
# 394 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Stop there.$"

ParcelFloodbasin_Checkpoint_Text_1:
# 400 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Logistics. This is a haul road,\n"
	.string "not a hiking trail. Nobody moves up to\l"
	.string "the river neck on my road without\l"
	.string "clearing me first.\p"
	.string "MIRREN cleared you? MIRREN clears\n"
	.string "anyone who can read. I need people who\l"
	.string "can carry.$"

ParcelFloodbasin_Checkpoint_Text_2:
# 401 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: …Fine. You can carry weight.\n"
	.string "Move up.$"

ParcelFloodbasin_Checkpoint_Text_3:
# 404 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Quarry clearance. Logs you fit\n"
	.string "to move earth on division ground. Tool's\l"
	.string "bonded to it.$"

ParcelFloodbasin_Checkpoint_Text_4:
# 406 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: ROCK SMASH. The slide past me's\n"
	.string "been there since spring. Nobody's\l"
	.string "cleared it because nobody's needed to\l"
	.string "go up.\p"
	.string "Mind the loads coming down. They don't\n"
	.string "stop for paperwork.$"

ParcelFloodbasin_GymBreen_Text_0:
# 417 "data/maps/ParcelFloodbasin/scripts.pory"
	.string "BREEN: Cleared. The neck's open to you.\n"
	.string "Mind the loads coming down.$"
