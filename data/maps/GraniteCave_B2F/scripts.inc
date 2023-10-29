GraniteCave_B2F_MapScripts::
	.byte 0

GraniteCave_B2F_EventScript_Will::
	trainerbattle_single TRAINER_WILL, Will_Intro, Will_Outro
	msgbox PostBattle_Will, MSGBOX_AUTOCLOSE
	waitmessage
	end


Will_Intro::
	.string "I caught a glimpse of a creature\n"
	.string "with an enormous mouth!\p"
	.string "But its body was tiny, I wonder\n"
	.string "what it was?$"

Will_Outro::
	.string "Whatever it was, it probably would\n"
	.string "have trounced me!$"

PostBattle_Will::
	.string "I still want to find that big\n"
	.string "mouthed creature once more.\p"
	.string "I'm sure I'll find it again!$"
