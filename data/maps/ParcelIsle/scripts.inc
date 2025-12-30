ParcelIsle_MapScripts::
# 2 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ParcelIsle_SetVisited
# 3 "data/maps/ParcelIsle/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ParcelIsle_SetVisited
	.byte 0


ParcelIsle_SetVisited::
# 7 "data/maps/ParcelIsle/scripts.pory"
	setflag FLAG_VISITED_PARCEL_ISLE
	end


ShowVisitedFlag_ParcelIsle::
# 16 "data/maps/ParcelIsle/scripts.pory"
	goto_if_set FLAG_VISITED_PARCEL_ISLE, ShowVisitedFlag_ParcelIsle_2
# 19 "data/maps/ParcelIsle/scripts.pory"
	msgbox ShowVisitedFlag_ParcelIsle_Text_1, MSGBOX_DEFAULT
ShowVisitedFlag_ParcelIsle_1:
	end

ShowVisitedFlag_ParcelIsle_2:
# 17 "data/maps/ParcelIsle/scripts.pory"
	msgbox ShowVisitedFlag_ParcelIsle_Text_0, MSGBOX_DEFAULT
	goto ShowVisitedFlag_ParcelIsle_1


# 24 "data/maps/ParcelIsle/scripts.pory"
Movement_DelibirdRun:
# 25 "data/maps/ParcelIsle/scripts.pory"
	walk_left
# 26 "data/maps/ParcelIsle/scripts.pory"
	walk_left
# 27 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 28 "data/maps/ParcelIsle/scripts.pory"
	walk_up
# 29 "data/maps/ParcelIsle/scripts.pory"
	walk_right
# 30 "data/maps/ParcelIsle/scripts.pory"
	walk_right
# 31 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 32 "data/maps/ParcelIsle/scripts.pory"
	walk_down
# 33 "data/maps/ParcelIsle/scripts.pory"
	step_end

Delibird_Interact::
# 37 "data/maps/ParcelIsle/scripts.pory"
	lock
# 38 "data/maps/ParcelIsle/scripts.pory"
	faceplayer
# 39 "data/maps/ParcelIsle/scripts.pory"
	msgbox Delibird_Interact_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/ParcelIsle/scripts.pory"
	applymovement 1, Movement_DelibirdRun
# 41 "data/maps/ParcelIsle/scripts.pory"
	waitmovement 0
# 42 "data/maps/ParcelIsle/scripts.pory"
	release
	end


ShowVisitedFlag_ParcelIsle_Text_0:
# 17 "data/maps/ParcelIsle/scripts.pory"
	.string "Parcel Isle visited flag is SET.$"

ShowVisitedFlag_ParcelIsle_Text_1:
# 19 "data/maps/ParcelIsle/scripts.pory"
	.string "Parcel Isle visited flag is NOT set.$"

Delibird_Interact_Text_0:
# 39 "data/maps/ParcelIsle/scripts.pory"
	.string "Delibird chirps excitedly and dashes around!$"
