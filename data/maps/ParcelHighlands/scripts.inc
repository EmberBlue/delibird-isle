ParcelHighlands_MapScripts::
# 25 "data/maps/ParcelHighlands/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ParcelHighlands_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ParcelHighlands_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/ParcelHighlands/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ParcelHighlands_SetMapVar
	.2byte 0


ParcelHighlands_SetMapVar::
# 31 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ParcelHighlands_FirstEntry::
# 37 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_ARRIVAL, ParcelHighlands_FirstEntry_2
# 41 "data/maps/ParcelHighlands/scripts.pory"
	lockall
# 42 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_FirstEntry_Text_2, MSGBOX_DEFAULT
# 45 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_ARRIVAL
# 46 "data/maps/ParcelHighlands/scripts.pory"
	releaseall
	end

ParcelHighlands_FirstEntry_2:
	end


ParcelHighlands_Thermokarst::
# 53 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 54 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 55 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 0
# 56 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 57 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Thermokarst_2
# 62 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Thermokarst_Text_1, MSGBOX_SIGN
# 63 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 64 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Thermokarst_2:
# 58 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Thermokarst_Text_0, MSGBOX_SIGN
# 59 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_DrunkenForest::
# 70 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 71 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 72 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 1
# 73 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 74 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_DrunkenForest_2
# 79 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrunkenForest_Text_1, MSGBOX_SIGN
# 80 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 81 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_DrunkenForest_2:
# 75 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrunkenForest_Text_0, MSGBOX_SIGN
# 76 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Lowlander::
# 87 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 88 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 89 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 3
# 90 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 91 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Lowlander_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_DrillSign::
# 98 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 99 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 100 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 4
# 101 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 102 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_DrillSign_Text_0, MSGBOX_SIGN
# 103 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Ilex::
# 109 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 110 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 111 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 112 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 2
# 113 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 114 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Ilex_2
# 119 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_1, MSGBOX_DEFAULT
# 120 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_2, MSGBOX_DEFAULT
# 121 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_3, MSGBOX_DEFAULT
# 122 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_4, MSGBOX_DEFAULT
# 123 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_5, MSGBOX_DEFAULT
# 124 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 125 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Ilex_2:
# 115 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Ilex_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hollis::
# 131 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 132 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 133 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 134 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 7
# 135 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 136 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Hollis_2
# 141 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_1, MSGBOX_DEFAULT
# 142 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_2, MSGBOX_DEFAULT
# 143 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_3, MSGBOX_DEFAULT
# 144 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_4, MSGBOX_DEFAULT
# 145 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_5, MSGBOX_DEFAULT
# 146 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_6, MSGBOX_DEFAULT
# 147 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 148 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hollis_2:
# 137 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hollis_Text_0, MSGBOX_DEFAULT
# 138 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Homesteader::
# 154 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 155 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 156 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 157 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 5
# 158 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskGet
# 159 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ParcelHighlands_Homesteader_2
# 164 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_1, MSGBOX_DEFAULT
# 165 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_2, MSGBOX_DEFAULT
# 166 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_3, MSGBOX_DEFAULT
# 167 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_4, MSGBOX_DEFAULT
# 168 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 169 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Homesteader_2:
# 160 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Homesteader_Text_0, MSGBOX_DEFAULT
# 161 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_Hale::
# 175 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 176 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 177 "data/maps/ParcelHighlands/scripts.pory"
	goto_if_set FLAG_SKALDMERE_HIGHLAND_CERT, ParcelHighlands_Hale_2
# 182 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8005, VAR_SKALDMERE_CH4_EVIDENCE
# 183 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 63
# 184 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereCertTaskCount
# 185 "data/maps/ParcelHighlands/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq ParcelHighlands_Hale_5
# 202 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_8, MSGBOX_DEFAULT
# 203 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_2:
# 178 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_0, MSGBOX_DEFAULT
# 179 "data/maps/ParcelHighlands/scripts.pory"
	release
	end

ParcelHighlands_Hale_5:
# 186 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_1, MSGBOX_DEFAULT
# 187 "data/maps/ParcelHighlands/scripts.pory"
	specialvar VAR_RESULT, SkaldmereClassifyHighlands
# 188 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_2, MSGBOX_DEFAULT
# 189 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_3, MSGBOX_DEFAULT
# 190 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_4, MSGBOX_DEFAULT
# 191 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_5, MSGBOX_DEFAULT
# 192 "data/maps/ParcelHighlands/scripts.pory"
	setvar VAR_0x8004, 6
# 193 "data/maps/ParcelHighlands/scripts.pory"
	special SkaldmereCertTaskMark
# 194 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_6, MSGBOX_DEFAULT
# 195 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_SKALDMERE_HIGHLAND_CERT
# 196 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_MAX_POTION, 3
# 197 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_REVIVE, 3
# 198 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_Hale_Text_7, MSGBOX_DEFAULT
# 199 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_ItemPotion::
# 208 "data/maps/ParcelHighlands/scripts.pory"
	finditem ITEM_HYPER_POTION
	end


ParcelHighlands_SurveyorTrainer::
# 215 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_SURVEYOR, ParcelHighlands_SurveyorTrainer_Text_0, ParcelHighlands_SurveyorTrainer_Text_1
# 218 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_SurveyorTrainer_Text_2, MSGBOX_DEFAULT
	end


ParcelHighlands_GymVale::
# 230 "data/maps/ParcelHighlands/scripts.pory"
	trainerbattle_single TRAINER_SKALD_GYM5, ParcelHighlands_GymVale_Text_0, ParcelHighlands_GymVale_Text_1, ParcelHighlands_GymVale_Defeated
# 234 "data/maps/ParcelHighlands/scripts.pory"
	lock
# 235 "data/maps/ParcelHighlands/scripts.pory"
	faceplayer
# 236 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Text_2, MSGBOX_DEFAULT
# 237 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_GymVale_Defeated::
# 242 "data/maps/ParcelHighlands/scripts.pory"
	setflag FLAG_BADGE05_GET
# 243 "data/maps/ParcelHighlands/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 244 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Defeated_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/ParcelHighlands/scripts.pory"
	giveitem ITEM_HM03
# 246 "data/maps/ParcelHighlands/scripts.pory"
	msgbox ParcelHighlands_GymVale_Defeated_Text_1, MSGBOX_DEFAULT
# 247 "data/maps/ParcelHighlands/scripts.pory"
	release
	end


ParcelHighlands_FirstEntry_Text_0:
# 42 "data/maps/ParcelHighlands/scripts.pory"
	.string "The trail climbs out of the trees and\n"
	.string "keeps climbing. The air should bite up\l"
	.string "here.\p"
	.string "It only aches. The cold that made this\n"
	.string "place is leaving it.$"

ParcelHighlands_FirstEntry_Text_1:
# 43 "data/maps/ParcelHighlands/scripts.pory"
	.string "Doduo slows, both heads low. The ground\n"
	.string "gives underfoot where it should be iron\l"
	.string "-- soft, where a hundred winters packed\l"
	.string "it solid.$"

ParcelHighlands_FirstEntry_Text_2:
# 44 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale's note, in pencil the damp has\n"
	.string "feathered:\p"
	.string "HIGHLAND -- READ IT HONESTLY.\n"
	.string "You are going to want to fix this. You\l"
	.string "cannot. That is the lesson.$"

ParcelHighlands_Thermokarst_Text_0:
# 58 "data/maps/ParcelHighlands/scripts.pory"
	.string "The sunk pond. Logged.$"

ParcelHighlands_Thermokarst_Text_1:
# 62 "data/maps/ParcelHighlands/scripts.pory"
	.string "A pond sits where no pond was ever\n"
	.string "drawn. The ice locked in the ground\l"
	.string "melted, the soil dropped into the\l"
	.string "hollow, and the meltwater pooled in the\l"
	.string "wound. THERMOKARST, the manual calls it.\p"
	.string "The water is new. The collapse that\n"
	.string "made it does not refill. You cannot\l"
	.string "refreeze what has already let go.$"

ParcelHighlands_DrunkenForest_Text_0:
# 75 "data/maps/ParcelHighlands/scripts.pory"
	.string "The leaning stand. Noted.$"

ParcelHighlands_DrunkenForest_Text_1:
# 79 "data/maps/ParcelHighlands/scripts.pory"
	.string "The trees lean. Not bowed by wind --\n"
	.string "each tilted at its own drunk angle,\l"
	.string "where the frozen soil that gripped\l"
	.string "their roots turned to slurry and let\l"
	.string "them go.\p"
	.string "They are not dying of cold. They are\n"
	.string "dying of warmth, slowly, on their feet. A\l"
	.string "forest losing its balance.$"

ParcelHighlands_Lowlander_Text_0:
# 91 "data/maps/ParcelHighlands/scripts.pory"
	.string "A Zigzagoon noses through the scree,\n"
	.string "perfectly at ease -- a thousand feet\l"
	.string "higher than it has any business being.\p"
	.string "It isn't lost. It's the new tenant. The\n"
	.string "cold used to keep its kind down the\l"
	.string "slope. The cold isn't keeping anything\l"
	.string "anymore.\p"
	.string "This is what a place looks like as it\n"
	.string "simplifies: the one that eats\l"
	.string "everything, everywhere, and little else\l"
	.string "beside.$"

ParcelHighlands_DrillSign_Text_0:
# 102 "data/maps/ParcelHighlands/scripts.pory"
	.string "MEREHOLT PERMAFROST -- SURVEY\n"
	.string "STATION SIX\p"
	.string "EXPLORATORY ONLY. No extraction is\n"
	.string "licensed at this site.\p"
	.string "The rig is bolted to ground that is\n"
	.string "moving. The bore runs down into the\l"
	.string "freeze -- to learn how fast it is\l"
	.string "failing, and to stand first in line for\l"
	.string "whatever the failing lays bare.$"

ParcelHighlands_Ilex_Text_0:
# 115 "data/maps/ParcelHighlands/scripts.pory"
	.string "Ilex moves a stake inward a hand's\n"
	.string "width and writes the new number. She\l"
	.string "does not explain it twice.$"

ParcelHighlands_Ilex_Text_1:
# 119 "data/maps/ParcelHighlands/scripts.pory"
	.string "Ilex kneels at a line of red cloth\n"
	.string "strung between two stakes, an arm's\l"
	.string "length apart.\p"
	.string "Ilex: Last season these stood wider.\n"
	.string "The season before, wider still.$"

ParcelHighlands_Ilex_Text_2:
# 120 "data/maps/ParcelHighlands/scripts.pory"
	.string "Ilex: This is the band the cold-lovers\n"
	.string "have left. The Sneasel. The Swinub that\l"
	.string "root the high snow. Pushed up the slope\l"
	.string "each year, into a thinner and thinner\l"
	.string "ring of cold.$"

ParcelHighlands_Ilex_Text_3:
# 121 "data/maps/ParcelHighlands/scripts.pory"
	.string "Ilex: Above this is bare rock and sky.\n"
	.string "There is no higher for them to climb.\p"
	.string "I stopped recording where they are. Now\n"
	.string "I record how much less of it there is.$"

ParcelHighlands_Ilex_Text_4:
# 122 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: And when the ring closes?$"

ParcelHighlands_Ilex_Text_5:
# 123 "data/maps/ParcelHighlands/scripts.pory"
	.string "Ilex: Then I will have a number for that,\n"
	.string "too.\p"
	.string "Downslope, the red cloth marks what is\n"
	.string "still here. Up here it marks what is\l"
	.string "leaving. It is the same cloth. That is\l"
	.string "the part they never understand.$"

ParcelHighlands_Hollis_Text_0:
# 137 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hollis: The coffee's still warm, Ranger.\n"
	.string "The offer stands.\p"
	.string "So does the ground, for now.$"

ParcelHighlands_Hollis_Text_1:
# 141 "data/maps/ParcelHighlands/scripts.pory"
	.string "A woman in a clean Foundation jacket\n"
	.string "warms her hands at a field heater. She\l"
	.string "smiles, and means it -- that is the\l"
	.string "unsettling part.\p"
	.string "Hollis: You must be the Ranger they\n"
	.string "sent up. Hollis Aune, Mereholt\l"
	.string "Foundation. Come in out of the wind.\l"
	.string "There is coffee.$"

ParcelHighlands_Hollis_Text_2:
# 142 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hollis: I know how the rig reads to you.\n"
	.string "But the thaw is coming whether we bore\l"
	.string "it or not. Better someone is here\l"
	.string "measuring it -- funding the relocation\l"
	.string "grants, the warming center, the\l"
	.string "training for what comes next.$"

ParcelHighlands_Hollis_Text_3:
# 143 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hollis: None of that is a lie. You can\n"
	.string "check every line of it. We are doing real\l"
	.string "good up here, beside the real harm.\p"
	.string "That is not a contradiction. That is\n"
	.string "just how it actually works.$"

ParcelHighlands_Hollis_Text_4:
# 144 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: I believe you. That isn't\n"
	.string "the part I'm writing down.$"

ParcelHighlands_Hollis_Text_5:
# 145 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hollis pauses, the smile unchanged.\p"
	.string "Hollis: No. I don't suppose it is.\p"
	.string "Then let me be kind plainly, so you don't\n"
	.string "mistake it for a threat. Our science is\l"
	.string "the only science up here. A survey that\l"
	.string "contradicts ours doesn't save the cold.$"

ParcelHighlands_Hollis_Text_6:
# 146 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hollis: It just defunds the coffee.\p"
	.string "She refills her cup. The heater hums.\n"
	.string "Beneath it, the ground goes on quietly\l"
	.string "moving.$"

ParcelHighlands_Homesteader_Text_0:
# 160 "data/maps/ParcelHighlands/scripts.pory"
	.string "The old woman sets another log. It sits\n"
	.string "crooked, like everything up here now.$"

ParcelHighlands_Homesteader_Text_1:
# 164 "data/maps/ParcelHighlands/scripts.pory"
	.string "An old woman stacks wood against a\n"
	.string "cabin whose near corner has sunk a\l"
	.string "hand's depth into the softening ground.\p"
	.string "Homesteader: You're not from the\n"
	.string "company. Good. I am tired of being\l"
	.string "adapted at.$"

ParcelHighlands_Homesteader_Text_2:
# 165 "data/maps/ParcelHighlands/scripts.pory"
	.string "Homesteader: Eight generations of us\n"
	.string "wintered this slope. You knew where you\l"
	.string "stood -- the ground held, the cold came,\l"
	.string "the cold went, the ground held again.\p"
	.string "Now the ground breathes. The doors\n"
	.string "won't shut true. The well runs muddy in a\l"
	.string "month it never did.$"

ParcelHighlands_Homesteader_Text_3:
# 166 "data/maps/ParcelHighlands/scripts.pory"
	.string "Homesteader: The Foundation's grant\n"
	.string "will move me somewhere warm and write\l"
	.string "resilience on the cheque. The young\l"
	.string "ones already signed. I don't blame them.$"

ParcelHighlands_Homesteader_Text_4:
# 167 "data/maps/ParcelHighlands/scripts.pory"
	.string "Homesteader: The ground is dying. They\n"
	.string "call it opportunity.\p"
	.string "I call it leaving.$"

ParcelHighlands_Hale_Text_0:
# 178 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale looks out over the slumping ground\n"
	.string "a long while before he speaks.\p"
	.string "Hale: You kept the record. That is the\n"
	.string "whole of the work up here.\p"
	.string "Someday someone reads it and knows\n"
	.string "exactly what was lost, and when -- and\l"
	.string "who was smiling while it went.$"

ParcelHighlands_Hale_Text_1:
# 186 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale stands where the trail runs out of\n"
	.string "mountain. He does not turn around.\p"
	.string "Hale: The sunk ponds. The drunk trees.\n"
	.string "The band Ilex measures. The lowlander\l"
	.string "in the scree. The drill. The woman who\l"
	.string "won't take the grant.\p"
	.string "Name it.$"

ParcelHighlands_Hale_Text_2:
# 188 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale: SHIFTED.\p"
	.string "The frozen ground was the keystone,\n"
	.string "and it is going. The cold guild is gone\l"
	.string "from everywhere but that last ring.\l"
	.string "What moves in is whatever moves in\l"
	.string "anywhere -- a poorer place, settling\l"
	.string "into being poorer.$"

ParcelHighlands_Hale_Text_3:
# 189 "data/maps/ParcelHighlands/scripts.pory"
	.string "{PLAYER}: So what do we DO. There has\n"
	.string "to be something --$"

ParcelHighlands_Hale_Text_4:
# 190 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale: There isn't. Not here. You cannot\n"
	.string "refreeze a mountain.\p"
	.string "The runoff you can slow. The cut you\n"
	.string "can fight. This you cannot put back. It\l"
	.string "is the first time you will have stood\l"
	.string "somewhere and known that for certain.$"

ParcelHighlands_Hale_Text_5:
# 191 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale: So the work changes. Not save it\n"
	.string "-- WITNESS it. Record it true, name the\l"
	.string "hand that's on it, and carry that down\l"
	.string "to a place you still can save.\p"
	.string "That is not surrender. Surrender is\n"
	.string "letting them file this as 'adaptation'\l"
	.string "and signing your name under it.$"

ParcelHighlands_Hale_Text_6:
# 194 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale knots a strip of red cloth to your\n"
	.string "pack himself -- the same cloth as a\l"
	.string "survey stake. Up here it means what it\l"
	.string "means down there: someone saw, and\l"
	.string "wrote it down.\p"
	.string "Hale: Highland Certification. The\n"
	.string "hardest one to earn, because there's no\l"
	.string "fixing it to hide behind. You didn't look\l"
	.string "away.$"

ParcelHighlands_Hale_Text_7:
# 198 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale: There's a ferry to Delibird Isle\n"
	.string "when your legs are under you. They hold\l"
	.string "a festival out there, on ground exactly\l"
	.string "like this.\p"
	.string "Go and see what people do with grief\n"
	.string "when they have agreed, together, not to\l"
	.string "name it.$"

ParcelHighlands_Hale_Text_8:
# 202 "data/maps/ParcelHighlands/scripts.pory"
	.string "Hale stands at the headwall, where the\n"
	.string "trail runs out.\p"
	.string "Hale: Don't name it from up here, looking\n"
	.string "down. Walk it first -- the thaw ponds,\l"
	.string "the leaning trees, the band Ilex works,\l"
	.string "the drill, the lowlander that's moved in,\l"
	.string "the holdout who won't go.\p"
	.string "Then come and tell me what it is. All of\n"
	.string "it, or none of it counts.$"

ParcelHighlands_SurveyorTrainer_Text_0:
# 216 "data/maps/ParcelHighlands/scripts.pory"
	.string "Kass: Foundation crew. You'll be the\n"
	.string "Ranger poking at our boreholes.\p"
	.string "Keep it sporting -- mons, not\n"
	.string "paperwork.$"

ParcelHighlands_SurveyorTrainer_Text_1:
# 217 "data/maps/ParcelHighlands/scripts.pory"
	.string "Kass: Tch. Fine.\p"
	.string "You're not wrong about the ground. I\n"
	.string "just get paid not to write it down.$"

ParcelHighlands_SurveyorTrainer_Text_2:
# 218 "data/maps/ParcelHighlands/scripts.pory"
	.string "Kass, lower:\p"
	.string "Kass: Off the record? I've moved my\n"
	.string "stakes up the slope three years\l"
	.string "running. Same line your Ilex works.\p"
	.string "We measure the same thing. They just\n"
	.string "pay me to call it opportunity.$"

ParcelHighlands_GymVale_Text_0:
# 231 "data/maps/ParcelHighlands/scripts.pory"
	.string "Vale: Highland Operations. Past this\n"
	.string "point the ground is no longer ours to\l"
	.string "fix -- only to clear people off of, in\l"
	.string "order.\p"
	.string "Nobody leaves this slope on my ledger\n"
	.string "unproven. Show me you've earned the\l"
	.string "meltwater permit.$"

ParcelHighlands_GymVale_Text_1:
# 232 "data/maps/ParcelHighlands/scripts.pory"
	.string "Vale: …Cleared. You go down with it\n"
	.string "signed.$"

ParcelHighlands_GymVale_Text_2:
# 236 "data/maps/ParcelHighlands/scripts.pory"
	.string "Vale: The ferry runs from the lowland\n"
	.string "landing. Take what you witnessed here\l"
	.string "with you.\p"
	.string "It's the only thing that leaves this\n"
	.string "slope unspoiled.$"

ParcelHighlands_GymVale_Defeated_Text_0:
# 244 "data/maps/ParcelHighlands/scripts.pory"
	.string "Vale: Vale clearance. Line item 05 --\n"
	.string "the last one Highland Operations issues\l"
	.string "before the water.\p"
	.string "It certifies you fit to cross what the\n"
	.string "thaw has put in the way.$"

ParcelHighlands_GymVale_Defeated_Text_1:
# 246 "data/maps/ParcelHighlands/scripts.pory"
	.string "Vale: SURF. A meltwater permit, in plain\n"
	.string "terms -- it moves you over the standing\l"
	.string "thaw the slope keeps making.\p"
	.string "There's more of it every season. We\n"
	.string "don't advertise that.$"
