#pragma once

// Defines the "big letter" representation of various ASCII characters 
// in the form of other chars, split up into 11 layers (lines), each 12 chars wide (13 with the null terminator)
	// yes this is very arbitrary, just a little side project for menu printing
	// for some of the console-based games I'm working on
// ASCII char layers are #define'd via their ASCII char number, as well as directly by their character representation or description when appropriate
// These #define strings will be returned by a massive switch statement in some get function I'll write at a later date
	// There has to be a better way to do it than this, so I'm open to suggestions

// Printable ASCII chars are from 32-127, can do those and then have some ? character for any other inputted character
	// do we want to include the DEL character? not really printable...
	// Need to add the extended ASCII chars later on as well (128-255)

// Leaving a blank "credit" comment line for each character's definition with the hopes that others might contribute improvements upon my first pass on some of these characters

// And away we go

//	32: Space
// 
//	Credit: 

#define ASCII_32_LAYER_0		"            "
#define ASCII_32_LAYER_1		"            "
#define ASCII_32_LAYER_2		"            "
#define ASCII_32_LAYER_3		"            "
#define ASCII_32_LAYER_4		"            "
#define ASCII_32_LAYER_5		"            "
#define ASCII_32_LAYER_6		"            "
#define ASCII_32_LAYER_7		"            "
#define ASCII_32_LAYER_8		"            "
#define ASCII_32_LAYER_9		"            "
#define ASCII_32_LAYER_10		"            "

#define SPACE_LAYER_0			ASCII_32_LAYER_0
#define SPACE_LAYER_1			ASCII_32_LAYER_1
#define SPACE_LAYER_2			ASCII_32_LAYER_2
#define SPACE_LAYER_3			ASCII_32_LAYER_3
#define SPACE_LAYER_4			ASCII_32_LAYER_4
#define SPACE_LAYER_5			ASCII_32_LAYER_5
#define SPACE_LAYER_6			ASCII_32_LAYER_6
#define SPACE_LAYER_7			ASCII_32_LAYER_7
#define SPACE_LAYER_8			ASCII_32_LAYER_8
#define SPACE_LAYER_9			ASCII_32_LAYER_9
#define SPACE_LAYER_10			ASCII_32_LAYER_10

//	33: !
// 
//	Credit: 

#define ASCII_33_LAYER_0		"     __     "
#define ASCII_33_LAYER_1		"    |  |    "
#define ASCII_33_LAYER_2		"    |  |    "
#define ASCII_33_LAYER_3		"    |  |    "
#define ASCII_33_LAYER_4		"    |  |    "
#define ASCII_33_LAYER_5		"    |  |    "
#define ASCII_33_LAYER_6		"    |  |    "
#define ASCII_33_LAYER_7		"    |__|    "
#define ASCII_33_LAYER_8		"            "
#define ASCII_33_LAYER_9		"     __     "
#define ASCII_33_LAYER_10		"    |__|    "

#define EXCLAMATION_LAYER_0		ASCII_33_LAYER_0
#define EXCLAMATION_LAYER_1		ASCII_33_LAYER_1
#define EXCLAMATION_LAYER_2		ASCII_33_LAYER_2
#define EXCLAMATION_LAYER_3		ASCII_33_LAYER_3
#define EXCLAMATION_LAYER_4		ASCII_33_LAYER_4
#define EXCLAMATION_LAYER_5		ASCII_33_LAYER_5
#define EXCLAMATION_LAYER_6		ASCII_33_LAYER_6
#define EXCLAMATION_LAYER_7		ASCII_33_LAYER_7
#define EXCLAMATION_LAYER_8		ASCII_33_LAYER_8
#define EXCLAMATION_LAYER_9		ASCII_33_LAYER_9
#define EXCLAMATION_LAYER_10	ASCII_33_LAYER_10

//	34: "
// 
//	Credit: 

#define ASCII_34_LAYER_0		"   __  __   "
#define ASCII_34_LAYER_1		"  |  ||  |  "
#define ASCII_34_LAYER_2		"  |  ||  |  "
#define ASCII_34_LAYER_3		"  |__||__|  "
#define ASCII_34_LAYER_4		"            "
#define ASCII_34_LAYER_5		"            "
#define ASCII_34_LAYER_6		"            "
#define ASCII_34_LAYER_7		"            "
#define ASCII_34_LAYER_8		"            "
#define ASCII_34_LAYER_9		"            "
#define ASCII_34_LAYER_10		"            "

#define DQUOTE_LAYER_0			ASCII_34_LAYER_0
#define DQUOTE_LAYER_1			ASCII_34_LAYER_1
#define DQUOTE_LAYER_2			ASCII_34_LAYER_2
#define DQUOTE_LAYER_3			ASCII_34_LAYER_3
#define DQUOTE_LAYER_4			ASCII_34_LAYER_4
#define DQUOTE_LAYER_5			ASCII_34_LAYER_5
#define DQUOTE_LAYER_6			ASCII_34_LAYER_6
#define DQUOTE_LAYER_7			ASCII_34_LAYER_7
#define DQUOTE_LAYER_8			ASCII_34_LAYER_8
#define DQUOTE_LAYER_9			ASCII_34_LAYER_9
#define DQUOTE_LAYER_10			ASCII_34_LAYER_10

//	35: #
// 
//	Credit: 

#define ASCII_35_LAYER_0		"            "
#define ASCII_35_LAYER_1		"    _  _    "
#define ASCII_35_LAYER_2		"   | || |   "
#define ASCII_35_LAYER_3		" __| || |__ "
#define ASCII_35_LAYER_4		"|__      __|"
#define ASCII_35_LAYER_5		"   | || |   "
#define ASCII_35_LAYER_6		" __| || |__ "
#define ASCII_35_LAYER_7		"|__      __|"
#define ASCII_35_LAYER_8		"   | || |   "
#define ASCII_35_LAYER_9		"   |_||_|   "
#define ASCII_35_LAYER_10		"            "

#define HASHTAG_LAYER_0			ASCII_35_LAYER_0
#define HASHTAG_LAYER_1			ASCII_35_LAYER_1
#define HASHTAG_LAYER_2			ASCII_35_LAYER_2
#define HASHTAG_LAYER_3			ASCII_35_LAYER_3
#define HASHTAG_LAYER_4			ASCII_35_LAYER_4
#define HASHTAG_LAYER_5			ASCII_35_LAYER_5
#define HASHTAG_LAYER_6			ASCII_35_LAYER_6
#define HASHTAG_LAYER_7			ASCII_35_LAYER_7
#define HASHTAG_LAYER_8			ASCII_35_LAYER_8
#define HASHTAG_LAYER_9			ASCII_35_LAYER_9
#define HASHTAG_LAYER_10		ASCII_35_LAYER_10

//	36: $
// 
//	Credit: 

#define ASCII_36_LAYER_0		"    _||     "
#define ASCII_36_LAYER_1		"   /_  _\\   "
#define ASCII_36_LAYER_2		"  | ||||_|  "
#define ASCII_36_LAYER_3		"  | |||     "
#define ASCII_36_LAYER_4		"   \\_\\|     "
#define ASCII_36_LAYER_5		"     \\\\_    "
#define ASCII_36_LAYER_6		"     |\\ \\   "
#define ASCII_36_LAYER_7		"   _ ||| |  "
#define ASCII_36_LAYER_8		"  | |||| |  "
#define ASCII_36_LAYER_9		"   \\_   /   "
#define ASCII_36_LAYER_10		"     ||     "

#define $_LAYER_0				ASCII_36_LAYER_0
#define $_LAYER_1				ASCII_36_LAYER_1
#define $_LAYER_2				ASCII_36_LAYER_2
#define $_LAYER_3				ASCII_36_LAYER_3
#define $_LAYER_4				ASCII_36_LAYER_4
#define $_LAYER_5				ASCII_36_LAYER_5
#define $_LAYER_6				ASCII_36_LAYER_6
#define $_LAYER_7				ASCII_36_LAYER_7
#define $_LAYER_8				ASCII_36_LAYER_8
#define $_LAYER_9				ASCII_36_LAYER_9
#define $_LAYER_10				ASCII_36_LAYER_10

//	37: %
// 
//	Credit: 

#define ASCII_37_LAYER_0		"          __"
#define ASCII_37_LAYER_1		"   _     / /"
#define ASCII_37_LAYER_2		" // \\\\  / / "
#define ASCII_37_LAYER_3		" || || / /  "
#define ASCII_37_LAYER_4		" \\\\_/// /   "
#define ASCII_37_LAYER_5		"     / /    "
#define ASCII_37_LAYER_6		"    / / _   "
#define ASCII_37_LAYER_7		"   / /// \\\\ "
#define ASCII_37_LAYER_8		"  / / || || "
#define ASCII_37_LAYER_9		" / /  \\\\_// "
#define ASCII_37_LAYER_10		"/_/         "

#define PERCENT_LAYER_0			ASCII_37_LAYER_0
#define PERCENT_LAYER_1			ASCII_37_LAYER_1
#define PERCENT_LAYER_2			ASCII_37_LAYER_2
#define PERCENT_LAYER_3			ASCII_37_LAYER_3
#define PERCENT_LAYER_4			ASCII_37_LAYER_4
#define PERCENT_LAYER_5			ASCII_37_LAYER_5
#define PERCENT_LAYER_6			ASCII_37_LAYER_6
#define PERCENT_LAYER_7			ASCII_37_LAYER_7
#define PERCENT_LAYER_8			ASCII_37_LAYER_8
#define PERCENT_LAYER_9			ASCII_37_LAYER_9
#define PERCENT_LAYER_10		ASCII_37_LAYER_10

//	38: &
// 
//	Credit: 

#define ASCII_38_LAYER_0		"            "
#define ASCII_38_LAYER_1		"            "
#define ASCII_38_LAYER_2		"     __     "
#define ASCII_38_LAYER_3		"   //  \\\\   "
#define ASCII_38_LAYER_4		"  ||    ||  "
#define ASCII_38_LAYER_5		"   \\\\__//   "
#define ASCII_38_LAYER_6		"   // \\\\    "
#define ASCII_38_LAYER_7		"  //   \\\\ //"
#define ASCII_38_LAYER_8		"  ||    \\// "
#define ASCII_38_LAYER_9		"  \\\\    //\\ "
#define ASCII_38_LAYER_10		"   \\\\__// \\\\"

#define AMPERSAND_LAYER_0		ASCII_37_LAYER_0
#define AMPERSAND_LAYER_1		ASCII_37_LAYER_1
#define AMPERSAND_LAYER_2		ASCII_37_LAYER_2
#define AMPERSAND_LAYER_3		ASCII_37_LAYER_3
#define AMPERSAND_LAYER_4		ASCII_37_LAYER_4
#define AMPERSAND_LAYER_5		ASCII_37_LAYER_5
#define AMPERSAND_LAYER_6		ASCII_37_LAYER_6
#define AMPERSAND_LAYER_7		ASCII_37_LAYER_7
#define AMPERSAND_LAYER_8		ASCII_37_LAYER_8
#define AMPERSAND_LAYER_9		ASCII_37_LAYER_9
#define AMPERSAND_LAYER_10		ASCII_37_LAYER_10

//	39: '
// 
//	Credit: 

#define ASCII_39_LAYER_0		"     __     "
#define ASCII_39_LAYER_1		"    |  |    "
#define ASCII_39_LAYER_2		"    |  |    "
#define ASCII_39_LAYER_3		"    |__|    "
#define ASCII_39_LAYER_4		"            "
#define ASCII_39_LAYER_5		"            "
#define ASCII_39_LAYER_6		"            "
#define ASCII_39_LAYER_7		"            "
#define ASCII_39_LAYER_8		"            "
#define ASCII_39_LAYER_9		"            "
#define ASCII_39_LAYER_10		"            "

#define SQUOTE_LAYER_0			ASCII_39_LAYER_0
#define SQUOTE_LAYER_1			ASCII_39_LAYER_1
#define SQUOTE_LAYER_2			ASCII_39_LAYER_2
#define SQUOTE_LAYER_3			ASCII_39_LAYER_3
#define SQUOTE_LAYER_4			ASCII_39_LAYER_4
#define SQUOTE_LAYER_5			ASCII_39_LAYER_5
#define SQUOTE_LAYER_6			ASCII_39_LAYER_6
#define SQUOTE_LAYER_7			ASCII_39_LAYER_7
#define SQUOTE_LAYER_8			ASCII_39_LAYER_8
#define SQUOTE_LAYER_9			ASCII_39_LAYER_9
#define SQUOTE_LAYER_10			ASCII_39_LAYER_10

//	40: (
// 
//	Credit: 

#define ASCII_40_LAYER_0		"       _    "
#define ASCII_40_LAYER_1		"      //    "
#define ASCII_40_LAYER_2		"     //     "
#define ASCII_40_LAYER_3		"    //      "
#define ASCII_40_LAYER_4		"   //       "
#define ASCII_40_LAYER_5		"   ||       "
#define ASCII_40_LAYER_6		"   ||       "
#define ASCII_40_LAYER_7		"   \\\\       "
#define ASCII_40_LAYER_8		"    \\\\      "
#define ASCII_40_LAYER_9		"     \\\\     "
#define ASCII_40_LAYER_10		"     \\_\\    "

#define LPAREN_LAYER_0			ASCII_40_LAYER_0
#define LPAREN_LAYER_1			ASCII_40_LAYER_1
#define LPAREN_LAYER_2			ASCII_40_LAYER_2
#define LPAREN_LAYER_3			ASCII_40_LAYER_3
#define LPAREN_LAYER_4			ASCII_40_LAYER_4
#define LPAREN_LAYER_5			ASCII_40_LAYER_5
#define LPAREN_LAYER_6			ASCII_40_LAYER_6
#define LPAREN_LAYER_7			ASCII_40_LAYER_7
#define LPAREN_LAYER_8			ASCII_40_LAYER_8
#define LPAREN_LAYER_9			ASCII_40_LAYER_9
#define LPAREN_LAYER_10			ASCII_40_LAYER_10

//	41: )
// 
//	Credit: 

#define ASCII_41_LAYER_0		"   _        "
#define ASCII_41_LAYER_1		"   \\\\       "
#define ASCII_41_LAYER_2		"    \\\\      "
#define ASCII_41_LAYER_3		"     \\\\     "
#define ASCII_41_LAYER_4		"      \\\\    "
#define ASCII_41_LAYER_5		"       ||   "
#define ASCII_41_LAYER_6		"       ||   "
#define ASCII_41_LAYER_7		"      //    "
#define ASCII_41_LAYER_8		"     //     "
#define ASCII_41_LAYER_9		"    //      "
#define ASCII_41_LAYER_10		"  /_/       "

#define RPAREN_LAYER_0			ASCII_41_LAYER_0
#define RPAREN_LAYER_1			ASCII_41_LAYER_1
#define RPAREN_LAYER_2			ASCII_41_LAYER_2
#define RPAREN_LAYER_3			ASCII_41_LAYER_3
#define RPAREN_LAYER_4			ASCII_41_LAYER_4
#define RPAREN_LAYER_5			ASCII_41_LAYER_5
#define RPAREN_LAYER_6			ASCII_41_LAYER_6
#define RPAREN_LAYER_7			ASCII_41_LAYER_7
#define RPAREN_LAYER_8			ASCII_41_LAYER_8
#define RPAREN_LAYER_9			ASCII_41_LAYER_9
#define RPAREN_LAYER_10			ASCII_41_LAYER_10

//	42: *
// 
//	Credit: 

#define ASCII_42_LAYER_0		"            "
#define ASCII_42_LAYER_1		"            "
#define ASCII_42_LAYER_2		"            "
#define ASCII_42_LAYER_3		"   \\\\||//   "
#define ASCII_42_LAYER_4		"  __\\||/__  "
#define ASCII_42_LAYER_5		"    /||\\    "
#define ASCII_42_LAYER_6		"   //||\\\\   "
#define ASCII_42_LAYER_7		"            "
#define ASCII_42_LAYER_8		"            "
#define ASCII_42_LAYER_9		"            "
#define ASCII_42_LAYER_10		"            "

#define ASTERISK_LAYER_0		ASCII_42_LAYER_0
#define ASTERISK_LAYER_1		ASCII_42_LAYER_1
#define ASTERISK_LAYER_2		ASCII_42_LAYER_2
#define ASTERISK_LAYER_3		ASCII_42_LAYER_3
#define ASTERISK_LAYER_4		ASCII_42_LAYER_4
#define ASTERISK_LAYER_5		ASCII_42_LAYER_5
#define ASTERISK_LAYER_6		ASCII_42_LAYER_6
#define ASTERISK_LAYER_7		ASCII_42_LAYER_7
#define ASTERISK_LAYER_8		ASCII_42_LAYER_8
#define ASTERISK_LAYER_9		ASCII_42_LAYER_9
#define ASTERISK_LAYER_10		ASCII_42_LAYER_10

//	43: +
// 
//	Credit: 

#define ASCII_43_LAYER_0		"            "
#define ASCII_43_LAYER_1		"            "
#define ASCII_43_LAYER_2		"      _     "
#define ASCII_43_LAYER_3		"     | |    "
#define ASCII_43_LAYER_4		"  ___| |___ "
#define ASCII_43_LAYER_5		" |____ ____|"
#define ASCII_43_LAYER_6		"     | |    "
#define ASCII_43_LAYER_7		"     |_|    "
#define ASCII_43_LAYER_8		"            "
#define ASCII_43_LAYER_9		"            "
#define ASCII_43_LAYER_10		"            "

#define PLUS_LAYER_0			ASCII_43_LAYER_0
#define PLUS_LAYER_1			ASCII_43_LAYER_1
#define PLUS_LAYER_2			ASCII_43_LAYER_2
#define PLUS_LAYER_3			ASCII_43_LAYER_3
#define PLUS_LAYER_4			ASCII_43_LAYER_4
#define PLUS_LAYER_5			ASCII_43_LAYER_5
#define PLUS_LAYER_6			ASCII_43_LAYER_6
#define PLUS_LAYER_7			ASCII_43_LAYER_7
#define PLUS_LAYER_8			ASCII_43_LAYER_8
#define PLUS_LAYER_9			ASCII_43_LAYER_9
#define PLUS_LAYER_10			ASCII_43_LAYER_10

//	44: ,
// 
//	Credit: 

#define ASCII_44_LAYER_0		"            "
#define ASCII_44_LAYER_1		"            "
#define ASCII_44_LAYER_2		"            "
#define ASCII_44_LAYER_3		"            "
#define ASCII_44_LAYER_4		"            "
#define ASCII_44_LAYER_5		"            "
#define ASCII_44_LAYER_6		"            "
#define ASCII_44_LAYER_7		"       __   "
#define ASCII_44_LAYER_8		"      /  |  "
#define ASCII_44_LAYER_9		"    _/  /   "
#define ASCII_44_LAYER_10		"   /___/    "

#define COMMA_LAYER_0			ASCII_44_LAYER_0
#define COMMA_LAYER_1			ASCII_44_LAYER_1
#define COMMA_LAYER_2			ASCII_44_LAYER_2
#define COMMA_LAYER_3			ASCII_44_LAYER_3
#define COMMA_LAYER_4			ASCII_44_LAYER_4
#define COMMA_LAYER_5			ASCII_44_LAYER_5
#define COMMA_LAYER_6			ASCII_44_LAYER_6
#define COMMA_LAYER_7			ASCII_44_LAYER_7
#define COMMA_LAYER_8			ASCII_44_LAYER_8
#define COMMA_LAYER_9			ASCII_44_LAYER_9
#define COMMA_LAYER_10			ASCII_44_LAYER_10

//	45: -
// 
//	Credit: 

#define ASCII_45_LAYER_0		"            "
#define ASCII_45_LAYER_1		"            "
#define ASCII_45_LAYER_2		"            "
#define ASCII_45_LAYER_3		"            "
#define ASCII_45_LAYER_4		"  _________ "
#define ASCII_45_LAYER_5		" |_________|"
#define ASCII_45_LAYER_6		"            "
#define ASCII_45_LAYER_7		"            "
#define ASCII_45_LAYER_8		"            "
#define ASCII_45_LAYER_9		"            "
#define ASCII_45_LAYER_10		"            "

#define MINUS_LAYER_0			ASCII_45_LAYER_0
#define MINUS_LAYER_1			ASCII_45_LAYER_1
#define MINUS_LAYER_2			ASCII_45_LAYER_2
#define MINUS_LAYER_3			ASCII_45_LAYER_3
#define MINUS_LAYER_4			ASCII_45_LAYER_4
#define MINUS_LAYER_5			ASCII_45_LAYER_5
#define MINUS_LAYER_6			ASCII_45_LAYER_6
#define MINUS_LAYER_7			ASCII_45_LAYER_7
#define MINUS_LAYER_8			ASCII_45_LAYER_8
#define MINUS_LAYER_9			ASCII_45_LAYER_9
#define MINUS_LAYER_10			ASCII_45_LAYER_10

//	46: .
// 
//	Credit: 

#define ASCII_46_LAYER_0		"            "
#define ASCII_46_LAYER_1		"            "
#define ASCII_46_LAYER_2		"            "
#define ASCII_46_LAYER_3		"            "
#define ASCII_46_LAYER_4		"            "
#define ASCII_46_LAYER_5		"            "
#define ASCII_46_LAYER_6		"            "
#define ASCII_46_LAYER_7		"            "
#define ASCII_46_LAYER_8		"    ___     "
#define ASCII_46_LAYER_9		"   |   |    "
#define ASCII_46_LAYER_10		"   |___|    "

#define PERIOD_LAYER_0			ASCII_46_LAYER_0
#define PERIOD_LAYER_1			ASCII_46_LAYER_1
#define PERIOD_LAYER_2			ASCII_46_LAYER_2
#define PERIOD_LAYER_3			ASCII_46_LAYER_3
#define PERIOD_LAYER_4			ASCII_46_LAYER_4
#define PERIOD_LAYER_5			ASCII_46_LAYER_5
#define PERIOD_LAYER_6			ASCII_46_LAYER_6
#define PERIOD_LAYER_7			ASCII_46_LAYER_7
#define PERIOD_LAYER_8			ASCII_46_LAYER_8
#define PERIOD_LAYER_9			ASCII_46_LAYER_9
#define PERIOD_LAYER_10			ASCII_46_LAYER_10

//	47: /
// 
//	Credit: 

#define ASCII_47_LAYER_0		"          __"
#define ASCII_47_LAYER_1		"         / /"
#define ASCII_47_LAYER_2		"        / / "
#define ASCII_47_LAYER_3		"       / /  "
#define ASCII_47_LAYER_4		"      / /   "
#define ASCII_47_LAYER_5		"     / /    "
#define ASCII_47_LAYER_6		"    / /     "
#define ASCII_47_LAYER_7		"   / /      "
#define ASCII_47_LAYER_8		"  / /       "
#define ASCII_47_LAYER_9		" / /        "
#define ASCII_47_LAYER_10		"/_/         "

#define FSLASH_LAYER_0			ASCII_47_LAYER_0
#define FSLASH_LAYER_1			ASCII_47_LAYER_1
#define FSLASH_LAYER_2			ASCII_47_LAYER_2
#define FSLASH_LAYER_3			ASCII_47_LAYER_3
#define FSLASH_LAYER_4			ASCII_47_LAYER_4
#define FSLASH_LAYER_5			ASCII_47_LAYER_5
#define FSLASH_LAYER_6			ASCII_47_LAYER_6
#define FSLASH_LAYER_7			ASCII_47_LAYER_7
#define FSLASH_LAYER_8			ASCII_47_LAYER_8
#define FSLASH_LAYER_9			ASCII_47_LAYER_9
#define FSLASH_LAYER_10			ASCII_47_LAYER_10

//	48: 0
// 
//	Credit: 

#define ASCII_48_LAYER_0		"     _      "
#define ASCII_48_LAYER_1		"   // \\\\    "
#define ASCII_48_LAYER_2		"  //   \\\\   "
#define ASCII_48_LAYER_3		" //    /\\\\  "
#define ASCII_48_LAYER_4		"//    // \\\\ "
#define ASCII_48_LAYER_5		"||   //  || "
#define ASCII_48_LAYER_6		"||  //   || "
#define ASCII_48_LAYER_7		"\\\\ //    // "
#define ASCII_48_LAYER_8		" \\\\/    //  "
#define ASCII_48_LAYER_9		"  \\\\   //   "
#define ASCII_48_LAYER_10		"   \\\\_//    "

#define ZERO_LAYER_0			ASCII_48_LAYER_0
#define ZERO_LAYER_1			ASCII_48_LAYER_1
#define ZERO_LAYER_2			ASCII_48_LAYER_2
#define ZERO_LAYER_3			ASCII_48_LAYER_3
#define ZERO_LAYER_4			ASCII_48_LAYER_4
#define ZERO_LAYER_5			ASCII_48_LAYER_5
#define ZERO_LAYER_6			ASCII_48_LAYER_6
#define ZERO_LAYER_7			ASCII_48_LAYER_7
#define ZERO_LAYER_8			ASCII_48_LAYER_8
#define ZERO_LAYER_9			ASCII_48_LAYER_9
#define ZERO_LAYER_10			ASCII_48_LAYER_10

//	49: 1
// 
//	Credit: 

#define ASCII_49_LAYER_0		"     __     "
#define ASCII_49_LAYER_1		"   /   |    "
#define ASCII_49_LAYER_2		"  //|  |    "
#define ASCII_49_LAYER_3		" /_||  |    "
#define ASCII_49_LAYER_4		"    |  |    "
#define ASCII_49_LAYER_5		"    |  |    "
#define ASCII_49_LAYER_6		"    |  |    "
#define ASCII_49_LAYER_7		"    |  |    "
#define ASCII_49_LAYER_8		"    |  |    "
#define ASCII_49_LAYER_9		"   _|  |_   "
#define ASCII_49_LAYER_10		"  |______|  "

#define ONE_LAYER_0				ASCII_49_LAYER_0
#define ONE_LAYER_1				ASCII_49_LAYER_1
#define ONE_LAYER_2				ASCII_49_LAYER_2
#define ONE_LAYER_3				ASCII_49_LAYER_3
#define ONE_LAYER_4				ASCII_49_LAYER_4
#define ONE_LAYER_5				ASCII_49_LAYER_5
#define ONE_LAYER_6				ASCII_49_LAYER_6
#define ONE_LAYER_7				ASCII_49_LAYER_7
#define ONE_LAYER_8				ASCII_49_LAYER_8
#define ONE_LAYER_9				ASCII_49_LAYER_9
#define ONE_LAYER_10			ASCII_49_LAYER_10

//	50: 2
// 
//	Credit: 

#define ASCII_50_LAYER_0		"   _____    "
#define ASCII_50_LAYER_1		"  /  _  \\   "
#define ASCII_50_LAYER_2		" /  / \\  \\  "
#define ASCII_50_LAYER_3		" |__|  |  | "
#define ASCII_50_LAYER_4		"      /  /  "
#define ASCII_50_LAYER_5		"     /  /   "
#define ASCII_50_LAYER_6		"    /  /    "
#define ASCII_50_LAYER_7		"   /  /     "
#define ASCII_50_LAYER_8		"  /  /      "
#define ASCII_50_LAYER_9		" /  /______ "
#define ASCII_50_LAYER_10		"|__________|"

#define TWO_LAYER_0				ASCII_50_LAYER_0
#define TWO_LAYER_1				ASCII_50_LAYER_1
#define TWO_LAYER_2				ASCII_50_LAYER_2
#define TWO_LAYER_3				ASCII_50_LAYER_3
#define TWO_LAYER_4				ASCII_50_LAYER_4
#define TWO_LAYER_5				ASCII_50_LAYER_5
#define TWO_LAYER_6				ASCII_50_LAYER_6
#define TWO_LAYER_7				ASCII_50_LAYER_7
#define TWO_LAYER_8				ASCII_50_LAYER_8
#define TWO_LAYER_9				ASCII_50_LAYER_9
#define TWO_LAYER_10			ASCII_50_LAYER_10

//	51: 3
// 
//	Credit: 

#define ASCII_51_LAYER_0		"  _______   "
#define ASCII_51_LAYER_1		" / ____  \\  "
#define ASCII_51_LAYER_2		"/_/    \\  \\ "
#define ASCII_51_LAYER_3		"        / / "
#define ASCII_51_LAYER_4		"       / /  "
#define ASCII_51_LAYER_5		"      < <   "
#define ASCII_51_LAYER_6		"       \\ \\  "
#define ASCII_51_LAYER_7		"        | | "
#define ASCII_51_LAYER_8		" _      / | "
#define ASCII_51_LAYER_9		"\\ \\____/ /  "
#define ASCII_51_LAYER_10		" \\______/   "

#define THREE_LAYER_0			ASCII_51_LAYER_0
#define THREE_LAYER_1			ASCII_51_LAYER_1
#define THREE_LAYER_2			ASCII_51_LAYER_2
#define THREE_LAYER_3			ASCII_51_LAYER_3
#define THREE_LAYER_4			ASCII_51_LAYER_4
#define THREE_LAYER_5			ASCII_51_LAYER_5
#define THREE_LAYER_6			ASCII_51_LAYER_6
#define THREE_LAYER_7			ASCII_51_LAYER_7
#define THREE_LAYER_8			ASCII_51_LAYER_8
#define THREE_LAYER_9			ASCII_51_LAYER_9
#define THREE_LAYER_10			ASCII_51_LAYER_10

//	52: 4
// 
//	Credit: 

#define ASCII_52_LAYER_0		"       _    "
#define ASCII_52_LAYER_1		"     /  |   "
#define ASCII_52_LAYER_2		"    /   |   "
#define ASCII_52_LAYER_3		"   / /| |   "
#define ASCII_52_LAYER_4		"  / / | |   "
#define ASCII_52_LAYER_5		" / /  | |   "
#define ASCII_52_LAYER_6		"/ /___| |__ "
#define ASCII_52_LAYER_7		"|_____   __|"
#define ASCII_52_LAYER_8		"      | |   "
#define ASCII_52_LAYER_9		"      | |   "
#define ASCII_52_LAYER_10		"      |_|   "

#define FOUR_LAYER_0			ASCII_52_LAYER_0
#define FOUR_LAYER_1			ASCII_52_LAYER_1
#define FOUR_LAYER_2			ASCII_52_LAYER_2
#define FOUR_LAYER_3			ASCII_52_LAYER_3
#define FOUR_LAYER_4			ASCII_52_LAYER_4
#define FOUR_LAYER_5			ASCII_52_LAYER_5
#define FOUR_LAYER_6			ASCII_52_LAYER_6
#define FOUR_LAYER_7			ASCII_52_LAYER_7
#define FOUR_LAYER_8			ASCII_52_LAYER_8
#define FOUR_LAYER_9			ASCII_52_LAYER_9
#define FOUR_LAYER_10			ASCII_52_LAYER_10

//	53: 5
// 
//	Credit: 

#define ASCII_53_LAYER_0		" __________ "
#define ASCII_53_LAYER_1		"| _________|"
#define ASCII_53_LAYER_2		"| |         "
#define ASCII_53_LAYER_3		"| |         "
#define ASCII_53_LAYER_4		"| |______   "
#define ASCII_53_LAYER_5		"|_______ \\  "
#define ASCII_53_LAYER_6		"        \\ \\ "
#define ASCII_53_LAYER_7		"        | | "
#define ASCII_53_LAYER_8		"        | | "
#define ASCII_53_LAYER_9		" ______/ /  "
#define ASCII_53_LAYER_10		"|_______/   "

#define FIVE_LAYER_0			ASCII_53_LAYER_0
#define FIVE_LAYER_1			ASCII_53_LAYER_1
#define FIVE_LAYER_2			ASCII_53_LAYER_2
#define FIVE_LAYER_3			ASCII_53_LAYER_3
#define FIVE_LAYER_4			ASCII_53_LAYER_4
#define FIVE_LAYER_5			ASCII_53_LAYER_5
#define FIVE_LAYER_6			ASCII_53_LAYER_6
#define FIVE_LAYER_7			ASCII_53_LAYER_7
#define FIVE_LAYER_8			ASCII_53_LAYER_8
#define FIVE_LAYER_9			ASCII_53_LAYER_9
#define FIVE_LAYER_10			ASCII_53_LAYER_10

//	54: 6
// 
//	Credit: 

#define ASCII_54_LAYER_0		"        _   "
#define ASCII_54_LAYER_1		"      / _|  "
#define ASCII_54_LAYER_2		"     //     "
#define ASCII_54_LAYER_3		"    //      "
#define ASCII_54_LAYER_4		"   //_      "
#define ASCII_54_LAYER_5		"  /  _\\     "
#define ASCII_54_LAYER_6		" | /  \\\\    "
#define ASCII_54_LAYER_7		" |/    \\\\   "
#define ASCII_54_LAYER_8		" ||    ||   "
#define ASCII_54_LAYER_9		" \\\\    //   "
#define ASCII_54_LAYER_10		"  \\\\__//    "

#define SIX_LAYER_0				ASCII_54_LAYER_0
#define SIX_LAYER_1				ASCII_54_LAYER_1
#define SIX_LAYER_2				ASCII_54_LAYER_2
#define SIX_LAYER_3				ASCII_54_LAYER_3
#define SIX_LAYER_4				ASCII_54_LAYER_4
#define SIX_LAYER_5				ASCII_54_LAYER_5
#define SIX_LAYER_6				ASCII_54_LAYER_6
#define SIX_LAYER_7				ASCII_54_LAYER_7
#define SIX_LAYER_8				ASCII_54_LAYER_8
#define SIX_LAYER_9				ASCII_54_LAYER_9
#define SIX_LAYER_10			ASCII_54_LAYER_10

//	55: 7
// 
//	Credit: 

#define ASCII_55_LAYER_0		" ___________"
#define ASCII_55_LAYER_1		"|________  /"
#define ASCII_55_LAYER_2		"        / / "
#define ASCII_55_LAYER_3		"       / /  "
#define ASCII_55_LAYER_4		"      / /   "
#define ASCII_55_LAYER_5		"     / /    "
#define ASCII_55_LAYER_6		"    / /     "
#define ASCII_55_LAYER_7		"   / /      "
#define ASCII_55_LAYER_8		"  / /       "
#define ASCII_55_LAYER_9		" / /        "
#define ASCII_55_LAYER_10		"/_/         "

#define SEVEN_LAYER_0			ASCII_55_LAYER_0
#define SEVEN_LAYER_1			ASCII_55_LAYER_1
#define SEVEN_LAYER_2			ASCII_55_LAYER_2
#define SEVEN_LAYER_3			ASCII_55_LAYER_3
#define SEVEN_LAYER_4			ASCII_55_LAYER_4
#define SEVEN_LAYER_5			ASCII_55_LAYER_5
#define SEVEN_LAYER_6			ASCII_55_LAYER_6
#define SEVEN_LAYER_7			ASCII_55_LAYER_7
#define SEVEN_LAYER_8			ASCII_55_LAYER_8
#define SEVEN_LAYER_9			ASCII_55_LAYER_9
#define SEVEN_LAYER_10			ASCII_55_LAYER_10

//	56: 8
// 
//	Credit: 

#define ASCII_56_LAYER_0		"      __    "
#define ASCII_56_LAYER_1		"    //  \\\\  "
#define ASCII_56_LAYER_2		"   //    \\\\ "
#define ASCII_56_LAYER_3		"   ||    || "
#define ASCII_56_LAYER_4		"   \\\\    // "
#define ASCII_56_LAYER_5		"    \\\\__//  "
#define ASCII_56_LAYER_6		"    //  \\\\  "
#define ASCII_56_LAYER_7		"   //    \\\\ "
#define ASCII_56_LAYER_8		"   ||    || "
#define ASCII_56_LAYER_9		"   \\\\    // "
#define ASCII_56_LAYER_10		"    \\\\__//  "

#define EIGHT_LAYER_0			ASCII_56_LAYER_0
#define EIGHT_LAYER_1			ASCII_56_LAYER_1
#define EIGHT_LAYER_2			ASCII_56_LAYER_2
#define EIGHT_LAYER_3			ASCII_56_LAYER_3
#define EIGHT_LAYER_4			ASCII_56_LAYER_4
#define EIGHT_LAYER_5			ASCII_56_LAYER_5
#define EIGHT_LAYER_6			ASCII_56_LAYER_6
#define EIGHT_LAYER_7			ASCII_56_LAYER_7
#define EIGHT_LAYER_8			ASCII_56_LAYER_8
#define EIGHT_LAYER_9			ASCII_56_LAYER_9
#define EIGHT_LAYER_10			ASCII_56_LAYER_10

//	57: 9
// 
//	Credit: 

#define ASCII_57_LAYER_0		"     __     "
#define ASCII_57_LAYER_1		"   //  \\\\   "
#define ASCII_57_LAYER_2		"  //    \\\\  "
#define ASCII_57_LAYER_3		"  ||    ||  "
#define ASCII_57_LAYER_4		"  \\\\    /|  "
#define ASCII_57_LAYER_5		"   \\\\__/ |  "
#define ASCII_57_LAYER_6		"       | |  "
#define ASCII_57_LAYER_7		"       | |  "
#define ASCII_57_LAYER_8		"       | |  "
#define ASCII_57_LAYER_9		"       | |  "
#define ASCII_57_LAYER_10		"       |_|  "

#define NINE_LAYER_0			ASCII_57_LAYER_0
#define NINE_LAYER_1			ASCII_57_LAYER_1
#define NINE_LAYER_2			ASCII_57_LAYER_2
#define NINE_LAYER_3			ASCII_57_LAYER_3
#define NINE_LAYER_4			ASCII_57_LAYER_4
#define NINE_LAYER_5			ASCII_57_LAYER_5
#define NINE_LAYER_6			ASCII_57_LAYER_6
#define NINE_LAYER_7			ASCII_57_LAYER_7
#define NINE_LAYER_8			ASCII_57_LAYER_8
#define NINE_LAYER_9			ASCII_57_LAYER_9
#define NINE_LAYER_10			ASCII_57_LAYER_10

//	58: :
// 
//	Credit: 

#define ASCII_58_LAYER_0		"            "
#define ASCII_58_LAYER_1		"            "
#define ASCII_58_LAYER_2		"            "
#define ASCII_58_LAYER_3		"            "
#define ASCII_58_LAYER_4		"    ___     "
#define ASCII_58_LAYER_5		"   |   |    "
#define ASCII_58_LAYER_6		"   |___|    "
#define ASCII_58_LAYER_7		"            "
#define ASCII_58_LAYER_8		"    ___     "
#define ASCII_58_LAYER_9		"   |   |    "
#define ASCII_58_LAYER_10		"   |___|    "

#define COLON_LAYER_0			ASCII_58_LAYER_0
#define COLON_LAYER_1			ASCII_58_LAYER_1
#define COLON_LAYER_2			ASCII_58_LAYER_2
#define COLON_LAYER_3			ASCII_58_LAYER_3
#define COLON_LAYER_4			ASCII_58_LAYER_4
#define COLON_LAYER_5			ASCII_58_LAYER_5
#define COLON_LAYER_6			ASCII_58_LAYER_6
#define COLON_LAYER_7			ASCII_58_LAYER_7
#define COLON_LAYER_8			ASCII_58_LAYER_8
#define COLON_LAYER_9			ASCII_58_LAYER_9
#define COLON_LAYER_10			ASCII_58_LAYER_10

//	59: ;
// 
//	Credit: 

#define ASCII_59_LAYER_0		"            "
#define ASCII_59_LAYER_1		"            "
#define ASCII_59_LAYER_2		"            "
#define ASCII_59_LAYER_3		"            "
#define ASCII_59_LAYER_4		"    ___     "
#define ASCII_59_LAYER_5		"   |   |    "
#define ASCII_59_LAYER_6		"   |___|    "
#define ASCII_59_LAYER_7		"    ___     "
#define ASCII_59_LAYER_8		"   |   |    "
#define ASCII_59_LAYER_9		"   |   |    "
#define ASCII_59_LAYER_10		"   /__/     "

#define SEMICOLON_LAYER_0		ASCII_59_LAYER_0
#define SEMICOLON_LAYER_1		ASCII_59_LAYER_1
#define SEMICOLON_LAYER_2		ASCII_59_LAYER_2
#define SEMICOLON_LAYER_3		ASCII_59_LAYER_3
#define SEMICOLON_LAYER_4		ASCII_59_LAYER_4
#define SEMICOLON_LAYER_5		ASCII_59_LAYER_5
#define SEMICOLON_LAYER_6		ASCII_59_LAYER_6
#define SEMICOLON_LAYER_7		ASCII_59_LAYER_7
#define SEMICOLON_LAYER_8		ASCII_59_LAYER_8
#define SEMICOLON_LAYER_9		ASCII_59_LAYER_9
#define SEMICOLON_LAYER_10		ASCII_59_LAYER_10

//	60: <
// 
//	Credit: 

#define ASCII_60_LAYER_0		"            "
#define ASCII_60_LAYER_1		"       //   "
#define ASCII_60_LAYER_2		"     //     "
#define ASCII_60_LAYER_3		"   //       "
#define ASCII_60_LAYER_4		" //         "
#define ASCII_60_LAYER_5		"<<          "
#define ASCII_60_LAYER_6		" \\\\         "
#define ASCII_60_LAYER_7		"   \\\\       "
#define ASCII_60_LAYER_8		"     \\\\     "
#define ASCII_60_LAYER_9		"       \\\\   "
#define ASCII_60_LAYER_10		"            "

#define LESSTHAN_LAYER_0		ASCII_60_LAYER_0
#define LESSTHAN_LAYER_1		ASCII_60_LAYER_1
#define LESSTHAN_LAYER_2		ASCII_60_LAYER_2
#define LESSTHAN_LAYER_3		ASCII_60_LAYER_3
#define LESSTHAN_LAYER_4		ASCII_60_LAYER_4
#define LESSTHAN_LAYER_5		ASCII_60_LAYER_5
#define LESSTHAN_LAYER_6		ASCII_60_LAYER_6
#define LESSTHAN_LAYER_7		ASCII_60_LAYER_7
#define LESSTHAN_LAYER_8		ASCII_60_LAYER_8
#define LESSTHAN_LAYER_9		ASCII_60_LAYER_9
#define LESSTHAN_LAYER_10		ASCII_60_LAYER_10

//	61: =
// 
//	Credit: 

#define ASCII_61_LAYER_0		"            "
#define ASCII_61_LAYER_1		"            "
#define ASCII_61_LAYER_2		"            "
#define ASCII_61_LAYER_3		"   _______  "
#define ASCII_61_LAYER_4		"  |_______| "
#define ASCII_61_LAYER_5		"   _______  "
#define ASCII_61_LAYER_6		"  |_______| "
#define ASCII_61_LAYER_7		"            "
#define ASCII_61_LAYER_8		"            "
#define ASCII_61_LAYER_9		"            "
#define ASCII_61_LAYER_10		"            "

#define EQUALS_LAYER_0			ASCII_61_LAYER_0
#define EQUALS_LAYER_1			ASCII_61_LAYER_1
#define EQUALS_LAYER_2			ASCII_61_LAYER_2
#define EQUALS_LAYER_3			ASCII_61_LAYER_3
#define EQUALS_LAYER_4			ASCII_61_LAYER_4
#define EQUALS_LAYER_5			ASCII_61_LAYER_5
#define EQUALS_LAYER_6			ASCII_61_LAYER_6
#define EQUALS_LAYER_7			ASCII_61_LAYER_7
#define EQUALS_LAYER_8			ASCII_61_LAYER_8
#define EQUALS_LAYER_9			ASCII_61_LAYER_9
#define EQUALS_LAYER_10			ASCII_61_LAYER_10

//	62: >
// 
//	Credit: 

#define ASCII_62_LAYER_0		"            "
#define ASCII_62_LAYER_1		" \\\\         "
#define ASCII_62_LAYER_2		"   \\\\       "
#define ASCII_62_LAYER_3		"     \\\\     "
#define ASCII_62_LAYER_4		"       \\\\   "
#define ASCII_62_LAYER_5		"         >> "
#define ASCII_62_LAYER_6		"       //   "
#define ASCII_62_LAYER_7		"     //     "
#define ASCII_62_LAYER_8		"   //       "
#define ASCII_62_LAYER_9		" //         "
#define ASCII_62_LAYER_10		"            "

#define GREATERTHAN_LAYER_0		ASCII_62_LAYER_0
#define GREATERTHAN_LAYER_1		ASCII_62_LAYER_1
#define GREATERTHAN_LAYER_2		ASCII_62_LAYER_2
#define GREATERTHAN_LAYER_3		ASCII_62_LAYER_3
#define GREATERTHAN_LAYER_4		ASCII_62_LAYER_4
#define GREATERTHAN_LAYER_5		ASCII_62_LAYER_5
#define GREATERTHAN_LAYER_6		ASCII_62_LAYER_6
#define GREATERTHAN_LAYER_7		ASCII_62_LAYER_7
#define GREATERTHAN_LAYER_8		ASCII_62_LAYER_8
#define GREATERTHAN_LAYER_9		ASCII_62_LAYER_9
#define GREATERTHAN_LAYER_10	ASCII_62_LAYER_10

//	63: ?
// 
//	Credit: 

#define ASCII_63_LAYER_0		"  _______   "
#define ASCII_63_LAYER_1		" /  ___  \\  "
#define ASCII_63_LAYER_2		"|__|   \\  \\ "
#define ASCII_63_LAYER_3		"       |  | "
#define ASCII_63_LAYER_4		"      /  /  "
#define ASCII_63_LAYER_5		"     /  /   "
#define ASCII_63_LAYER_6		"    /  /    "
#define ASCII_63_LAYER_7		"   |__|     "
#define ASCII_63_LAYER_8		"            "
#define ASCII_63_LAYER_9		"    __      "
#define ASCII_63_LAYER_10		"   |__|     "

#define QUESTIONMARK_LAYER_0	ASCII_63_LAYER_0
#define QUESTIONMARK_LAYER_1	ASCII_63_LAYER_1
#define QUESTIONMARK_LAYER_2	ASCII_63_LAYER_2
#define QUESTIONMARK_LAYER_3	ASCII_63_LAYER_3
#define QUESTIONMARK_LAYER_4	ASCII_63_LAYER_4
#define QUESTIONMARK_LAYER_5	ASCII_63_LAYER_5
#define QUESTIONMARK_LAYER_6	ASCII_63_LAYER_6
#define QUESTIONMARK_LAYER_7	ASCII_63_LAYER_7
#define QUESTIONMARK_LAYER_8	ASCII_63_LAYER_8
#define QUESTIONMARK_LAYER_9	ASCII_63_LAYER_9
#define QUESTIONMARK_LAYER_10	ASCII_63_LAYER_10

//	64: @
// 
//	Credit: 

#define ASCII_64_LAYER_0		"     __     "
#define ASCII_64_LAYER_1		"   /____\\   "
#define ASCII_64_LAYER_2		"  // __ \\\\  "
#define ASCII_64_LAYER_3		" // /__\\ \\\\ "
#define ASCII_64_LAYER_4		"|| //  \\\\ ||"
#define ASCII_64_LAYER_5		"|| ||  || ||"
#define ASCII_64_LAYER_6		"|| \\\\__|\\ ||"
#define ASCII_64_LAYER_7		" \\\\ \\__/\\\\//"
#define ASCII_64_LAYER_8		"  \\\\____    "
#define ASCII_64_LAYER_9		"   \\____/   "
#define ASCII_64_LAYER_10		"            "

#define ATSYMBOL_LAYER_0		ASCII_64_LAYER_0
#define ATSYMBOL_LAYER_1		ASCII_64_LAYER_1
#define ATSYMBOL_LAYER_2		ASCII_64_LAYER_2
#define ATSYMBOL_LAYER_3		ASCII_64_LAYER_3
#define ATSYMBOL_LAYER_4		ASCII_64_LAYER_4
#define ATSYMBOL_LAYER_5		ASCII_64_LAYER_5
#define ATSYMBOL_LAYER_6		ASCII_64_LAYER_6
#define ATSYMBOL_LAYER_7		ASCII_64_LAYER_7
#define ATSYMBOL_LAYER_8		ASCII_64_LAYER_8
#define ATSYMBOL_LAYER_9		ASCII_64_LAYER_9
#define ATSYMBOL_LAYER_10		ASCII_64_LAYER_10

//	65: A
// 
//	Credit: 

#define ASCII_65_LAYER_0		"     __     "
#define ASCII_65_LAYER_1		"    /  \\    "
#define ASCII_65_LAYER_2		"   / /\\ \\   "
#define ASCII_65_LAYER_3		"  / /  \\ \\  "
#define ASCII_65_LAYER_4		" / /____\\ \\ "
#define ASCII_65_LAYER_5		"/ /______\\ \\"
#define ASCII_65_LAYER_6		"| |      | |"
#define ASCII_65_LAYER_7		"| |      | |"
#define ASCII_65_LAYER_8		"| |      | |"
#define ASCII_65_LAYER_9		"| |      | |"
#define ASCII_65_LAYER_10		"|_|      |_|"

#define A_LAYER_0				ASCII_65_LAYER_0
#define A_LAYER_1				ASCII_65_LAYER_1
#define A_LAYER_2				ASCII_65_LAYER_2
#define A_LAYER_3				ASCII_65_LAYER_3
#define A_LAYER_4				ASCII_65_LAYER_4
#define A_LAYER_5				ASCII_65_LAYER_5
#define A_LAYER_6				ASCII_65_LAYER_6
#define A_LAYER_7				ASCII_65_LAYER_7
#define A_LAYER_8				ASCII_65_LAYER_8
#define A_LAYER_9				ASCII_65_LAYER_9
#define A_LAYER_10				ASCII_65_LAYER_10

//	66: B
// 
//	Credit: 

#define ASCII_66_LAYER_0		" ________   "
#define ASCII_66_LAYER_1		"||       \\\\ "
#define ASCII_66_LAYER_2		"||        \\\\"
#define ASCII_66_LAYER_3		"||        ||"
#define ASCII_66_LAYER_4		"||        //"
#define ASCII_66_LAYER_5		"||_______// "
#define ASCII_66_LAYER_6		"||       \\\\ "
#define ASCII_66_LAYER_7		"||        \\\\"
#define ASCII_66_LAYER_8		"||        ||"
#define ASCII_66_LAYER_9		"||        //"
#define ASCII_66_LAYER_10		"||_______// "

#define B_LAYER_0				ASCII_66_LAYER_0
#define B_LAYER_1				ASCII_66_LAYER_1
#define B_LAYER_2				ASCII_66_LAYER_2
#define B_LAYER_3				ASCII_66_LAYER_3
#define B_LAYER_4				ASCII_66_LAYER_4
#define B_LAYER_5				ASCII_66_LAYER_5
#define B_LAYER_6				ASCII_66_LAYER_6
#define B_LAYER_7				ASCII_66_LAYER_7
#define B_LAYER_8				ASCII_66_LAYER_8
#define B_LAYER_9				ASCII_66_LAYER_9
#define B_LAYER_10				ASCII_66_LAYER_10

//	67: C
// 
//	Credit: 

#define ASCII_67_LAYER_0		"     ______ "
#define ASCII_67_LAYER_1		"    / _____|"
#define ASCII_67_LAYER_2		"   //       "
#define ASCII_67_LAYER_3		"  //        "
#define ASCII_67_LAYER_4		" //         "
#define ASCII_67_LAYER_5		"||          "
#define ASCII_67_LAYER_6		"||          "
#define ASCII_67_LAYER_7		" \\\\         "
#define ASCII_67_LAYER_8		"  \\\\        "
#define ASCII_67_LAYER_9		"   \\\\______ "
#define ASCII_67_LAYER_10		"    \\ _____|"

#define C_LAYER_0				ASCII_67_LAYER_0
#define C_LAYER_1				ASCII_67_LAYER_1
#define C_LAYER_2				ASCII_67_LAYER_2
#define C_LAYER_3				ASCII_67_LAYER_3
#define C_LAYER_4				ASCII_67_LAYER_4
#define C_LAYER_5				ASCII_67_LAYER_5
#define C_LAYER_6				ASCII_67_LAYER_6
#define C_LAYER_7				ASCII_67_LAYER_7
#define C_LAYER_8				ASCII_67_LAYER_8
#define C_LAYER_9				ASCII_67_LAYER_9
#define C_LAYER_10				ASCII_67_LAYER_10

//	68: D
// 
//	Credit: 

#define ASCII_68_LAYER_0		" ______     "
#define ASCII_68_LAYER_1		"||     \\\\   "
#define ASCII_68_LAYER_2		"||      \\\\  "
#define ASCII_68_LAYER_3		"||       \\\\ "
#define ASCII_68_LAYER_4		"||        \\\\"
#define ASCII_68_LAYER_5		"||        ||"
#define ASCII_68_LAYER_6		"||        ||"
#define ASCII_68_LAYER_7		"||        //"
#define ASCII_68_LAYER_8		"||       // "
#define ASCII_68_LAYER_9		"||      //  "
#define ASCII_68_LAYER_10		"||_____//   "

#define D_LAYER_0				ASCII_68_LAYER_0
#define D_LAYER_1				ASCII_68_LAYER_1
#define D_LAYER_2				ASCII_68_LAYER_2
#define D_LAYER_3				ASCII_68_LAYER_3
#define D_LAYER_4				ASCII_68_LAYER_4
#define D_LAYER_5				ASCII_68_LAYER_5
#define D_LAYER_6				ASCII_68_LAYER_6
#define D_LAYER_7				ASCII_68_LAYER_7
#define D_LAYER_8				ASCII_68_LAYER_8
#define D_LAYER_9				ASCII_68_LAYER_9
#define D_LAYER_10				ASCII_68_LAYER_10

//	69: E
// 
//	Credit: 

#define ASCII_69_LAYER_0		" __________ "
#define ASCII_69_LAYER_1		"|  ________|"
#define ASCII_69_LAYER_2		"| |         "
#define ASCII_69_LAYER_3		"| |         "
#define ASCII_69_LAYER_4		"| |________ "
#define ASCII_69_LAYER_5		"|  ________|"
#define ASCII_69_LAYER_6		"| |         "
#define ASCII_69_LAYER_7		"| |         "
#define ASCII_69_LAYER_8		"| |         "
#define ASCII_69_LAYER_9		"| |________ "
#define ASCII_69_LAYER_10		"|__________|"

#define E_LAYER_0				ASCII_69_LAYER_0
#define E_LAYER_1				ASCII_69_LAYER_1
#define E_LAYER_2				ASCII_69_LAYER_2
#define E_LAYER_3				ASCII_69_LAYER_3
#define E_LAYER_4				ASCII_69_LAYER_4
#define E_LAYER_5				ASCII_69_LAYER_5
#define E_LAYER_6				ASCII_69_LAYER_6
#define E_LAYER_7				ASCII_69_LAYER_7
#define E_LAYER_8				ASCII_69_LAYER_8
#define E_LAYER_9				ASCII_69_LAYER_9
#define E_LAYER_10				ASCII_69_LAYER_10

//	70: F
// 
//	Credit: 

#define ASCII_70_LAYER_0		" __________ "
#define ASCII_70_LAYER_1		"|  ________|"
#define ASCII_70_LAYER_2		"| |         "
#define ASCII_70_LAYER_3		"| |         "
#define ASCII_70_LAYER_4		"| |________ "
#define ASCII_70_LAYER_5		"|  ________|"
#define ASCII_70_LAYER_6		"| |         "
#define ASCII_70_LAYER_7		"| |         "
#define ASCII_70_LAYER_8		"| |         "
#define ASCII_70_LAYER_9		"| |         "
#define ASCII_70_LAYER_10		"|_|         "

#define F_LAYER_0				ASCII_70_LAYER_0
#define F_LAYER_1				ASCII_70_LAYER_1
#define F_LAYER_2				ASCII_70_LAYER_2
#define F_LAYER_3				ASCII_70_LAYER_3
#define F_LAYER_4				ASCII_70_LAYER_4
#define F_LAYER_5				ASCII_70_LAYER_5
#define F_LAYER_6				ASCII_70_LAYER_6
#define F_LAYER_7				ASCII_70_LAYER_7
#define F_LAYER_8				ASCII_70_LAYER_8
#define F_LAYER_9				ASCII_70_LAYER_9
#define F_LAYER_10				ASCII_70_LAYER_10

//	71: G
// 
//	Credit: 

#define ASCII_71_LAYER_0		"     ______ "
#define ASCII_71_LAYER_1		"    / _____|"
#define ASCII_71_LAYER_2		"   //       "
#define ASCII_71_LAYER_3		"  //        "
#define ASCII_71_LAYER_4		" //    ____ "
#define ASCII_71_LAYER_5		"||    |___ |"
#define ASCII_71_LAYER_6		"||       | |"
#define ASCII_71_LAYER_7		" \\\\      | |"
#define ASCII_71_LAYER_8		"  \\\\     | |"
#define ASCII_71_LAYER_9		"   \\\\____| |"
#define ASCII_71_LAYER_10		"    \\______/"

#define G_LAYER_0				ASCII_71_LAYER_0
#define G_LAYER_1				ASCII_71_LAYER_1
#define G_LAYER_2				ASCII_71_LAYER_2
#define G_LAYER_3				ASCII_71_LAYER_3
#define G_LAYER_4				ASCII_71_LAYER_4
#define G_LAYER_5				ASCII_71_LAYER_5
#define G_LAYER_6				ASCII_71_LAYER_6
#define G_LAYER_7				ASCII_71_LAYER_7
#define G_LAYER_8				ASCII_71_LAYER_8
#define G_LAYER_9				ASCII_71_LAYER_9
#define G_LAYER_10				ASCII_71_LAYER_10

//	72: H
// 
//	Credit: 

#define ASCII_72_LAYER_0		" __      __ "
#define ASCII_72_LAYER_1		"|  |    |  |"
#define ASCII_72_LAYER_2		"|  |    |  |"
#define ASCII_72_LAYER_3		"|  |    |  |"
#define ASCII_72_LAYER_4		"|  |____|  |"
#define ASCII_72_LAYER_5		"|          |"
#define ASCII_72_LAYER_6		"|   ____   |"
#define ASCII_72_LAYER_7		"|  |    |  |"
#define ASCII_72_LAYER_8		"|  |    |  |"
#define ASCII_72_LAYER_9		"|  |    |  |"
#define ASCII_72_LAYER_10		"|__|    |__|"

#define H_LAYER_0				ASCII_72_LAYER_0
#define H_LAYER_1				ASCII_72_LAYER_1
#define H_LAYER_2				ASCII_72_LAYER_2
#define H_LAYER_3				ASCII_72_LAYER_3
#define H_LAYER_4				ASCII_72_LAYER_4
#define H_LAYER_5				ASCII_72_LAYER_5
#define H_LAYER_6				ASCII_72_LAYER_6
#define H_LAYER_7				ASCII_72_LAYER_7
#define H_LAYER_8				ASCII_72_LAYER_8
#define H_LAYER_9				ASCII_72_LAYER_9
#define H_LAYER_10				ASCII_72_LAYER_10

//	73: I
// 
//	Credit: 

#define ASCII_73_LAYER_0		" __________ "
#define ASCII_73_LAYER_1		"|___    ___|"
#define ASCII_73_LAYER_2		"    |  |    "
#define ASCII_73_LAYER_3		"    |  |    "
#define ASCII_73_LAYER_4		"    |  |    "
#define ASCII_73_LAYER_5		"    |  |    "
#define ASCII_73_LAYER_6		"    |  |    "
#define ASCII_73_LAYER_7		"    |  |    "
#define ASCII_73_LAYER_8		"    |  |    "
#define ASCII_73_LAYER_9		" ___|  |___ "
#define ASCII_73_LAYER_10		"|__________|"

#define I_LAYER_0				ASCII_73_LAYER_0
#define I_LAYER_1				ASCII_73_LAYER_1
#define I_LAYER_2				ASCII_73_LAYER_2
#define I_LAYER_3				ASCII_73_LAYER_3
#define I_LAYER_4				ASCII_73_LAYER_4
#define I_LAYER_5				ASCII_73_LAYER_5
#define I_LAYER_6				ASCII_73_LAYER_6
#define I_LAYER_7				ASCII_73_LAYER_7
#define I_LAYER_8				ASCII_73_LAYER_8
#define I_LAYER_9				ASCII_73_LAYER_9
#define I_LAYER_10				ASCII_73_LAYER_10

//	74: J
// 
//	Credit: 

#define ASCII_74_LAYER_0		"   ________ "
#define ASCII_74_LAYER_1		"  |__    __|"
#define ASCII_74_LAYER_2		"     |  |   "
#define ASCII_74_LAYER_3		"     |  |   "
#define ASCII_74_LAYER_4		"     |  |   "
#define ASCII_74_LAYER_5		"     |  |   "
#define ASCII_74_LAYER_6		"     |  |   "
#define ASCII_74_LAYER_7		" __  |  |   "
#define ASCII_74_LAYER_8		"|  | |  |   "
#define ASCII_74_LAYER_9		"|  |_/  /   "
#define ASCII_74_LAYER_10		" \\_____/    "

#define J_LAYER_0				ASCII_74_LAYER_0
#define J_LAYER_1				ASCII_74_LAYER_1
#define J_LAYER_2				ASCII_74_LAYER_2
#define J_LAYER_3				ASCII_74_LAYER_3
#define J_LAYER_4				ASCII_74_LAYER_4
#define J_LAYER_5				ASCII_74_LAYER_5
#define J_LAYER_6				ASCII_74_LAYER_6
#define J_LAYER_7				ASCII_74_LAYER_7
#define J_LAYER_8				ASCII_74_LAYER_8
#define J_LAYER_9				ASCII_74_LAYER_9
#define J_LAYER_10				ASCII_74_LAYER_10

//	75: K
// 
//	Credit: 

#define ASCII_75_LAYER_0		"  _     __  "
#define ASCII_75_LAYER_1		" | |   / /  "
#define ASCII_75_LAYER_2		" | |  / /   "
#define ASCII_75_LAYER_3		" | | / /    "
#define ASCII_75_LAYER_4		" | |/ /     "
#define ASCII_75_LAYER_5		" |   <      "
#define ASCII_75_LAYER_6		" | |\\ \\     "
#define ASCII_75_LAYER_7		" | | \\ \\    "
#define ASCII_75_LAYER_8		" | |  \\ \\   "
#define ASCII_75_LAYER_9		" | |   \\ \\  "
#define ASCII_75_LAYER_10		" |_|    \\_\\ "

//	76: L
// 
//	Credit: 

#define ASCII_76_LAYER_0		" __         "
#define ASCII_76_LAYER_1		"|  |        "
#define ASCII_76_LAYER_2		"|  |        "
#define ASCII_76_LAYER_3		"|  |        "
#define ASCII_76_LAYER_4		"|  |        "
#define ASCII_76_LAYER_5		"|  |        "
#define ASCII_76_LAYER_6		"|  |        "
#define ASCII_76_LAYER_7		"|  |        "
#define ASCII_76_LAYER_8		"|  |        "
#define ASCII_76_LAYER_9		"|  |_______ "
#define ASCII_76_LAYER_10		"|__________|"

#define L_LAYER_0				ASCII_76_LAYER_0
#define L_LAYER_1				ASCII_76_LAYER_1
#define L_LAYER_2				ASCII_76_LAYER_2
#define L_LAYER_3				ASCII_76_LAYER_3
#define L_LAYER_4				ASCII_76_LAYER_4
#define L_LAYER_5				ASCII_76_LAYER_5
#define L_LAYER_6				ASCII_76_LAYER_6
#define L_LAYER_7				ASCII_76_LAYER_7
#define L_LAYER_8				ASCII_76_LAYER_8
#define L_LAYER_9				ASCII_76_LAYER_9
#define L_LAYER_10				ASCII_76_LAYER_10

//	77: M
// 
//	Credit: 

#define ASCII_77_LAYER_0		" ___    ___ "
#define ASCII_77_LAYER_1		"|   \\  /   |"
#define ASCII_77_LAYER_2		"|    \\/    |"
#define ASCII_77_LAYER_3		"| |\\    /| |"
#define ASCII_77_LAYER_4		"| | \\  / | |"
#define ASCII_77_LAYER_5		"| |  \\/  | |"
#define ASCII_77_LAYER_6		"| |      | |"
#define ASCII_77_LAYER_7		"| |      | |"
#define ASCII_77_LAYER_8		"| |      | |"
#define ASCII_77_LAYER_9		"| |      | |"
#define ASCII_77_LAYER_10		"|_|      |_|"

#define M_LAYER_0				ASCII_77_LAYER_0
#define M_LAYER_1				ASCII_77_LAYER_1
#define M_LAYER_2				ASCII_77_LAYER_2
#define M_LAYER_3				ASCII_77_LAYER_3
#define M_LAYER_4				ASCII_77_LAYER_4
#define M_LAYER_5				ASCII_77_LAYER_5
#define M_LAYER_6				ASCII_77_LAYER_6
#define M_LAYER_7				ASCII_77_LAYER_7
#define M_LAYER_8				ASCII_77_LAYER_8
#define M_LAYER_9				ASCII_77_LAYER_9
#define M_LAYER_10				ASCII_77_LAYER_10

//	78: N
// 
//	Credit: 

#define ASCII_78_LAYER_0		" _        _ "
#define ASCII_78_LAYER_1		"| \\      | |"
#define ASCII_78_LAYER_2		"|  \\     | |"
#define ASCII_78_LAYER_3		"| |\\\\    | |"
#define ASCII_78_LAYER_4		"| | \\\\   | |"
#define ASCII_78_LAYER_5		"| |  \\\\  | |"
#define ASCII_78_LAYER_6		"| |   \\\\ | |"
#define ASCII_78_LAYER_7		"| |    \\\\| |"
#define ASCII_78_LAYER_8		"| |     \\  |"
#define ASCII_78_LAYER_9		"| |      \\ |"
#define ASCII_78_LAYER_10		"|_|      |_|"

#define N_LAYER_0				ASCII_78_LAYER_0
#define N_LAYER_1				ASCII_78_LAYER_1
#define N_LAYER_2				ASCII_78_LAYER_2
#define N_LAYER_3				ASCII_78_LAYER_3
#define N_LAYER_4				ASCII_78_LAYER_4
#define N_LAYER_5				ASCII_78_LAYER_5
#define N_LAYER_6				ASCII_78_LAYER_6
#define N_LAYER_7				ASCII_78_LAYER_7
#define N_LAYER_8				ASCII_78_LAYER_8
#define N_LAYER_9				ASCII_78_LAYER_9
#define N_LAYER_10				ASCII_78_LAYER_10

//	79: O
// 
//	Credit: 

#define ASCII_79_LAYER_0		"   ______   "
#define ASCII_79_LAYER_1		"  /______\\  "
#define ASCII_79_LAYER_2		" //      \\\\ "
#define ASCII_79_LAYER_3		"//        \\\\"
#define ASCII_79_LAYER_4		"||        ||"
#define ASCII_79_LAYER_5		"||        ||"
#define ASCII_79_LAYER_6		"||        ||"
#define ASCII_79_LAYER_7		"\\\\        //"
#define ASCII_79_LAYER_8		" \\\\      // "
#define ASCII_79_LAYER_9		"  \\\\____//  "
#define ASCII_79_LAYER_10		"   \\____/   "

#define O_LAYER_0				ASCII_79_LAYER_0
#define O_LAYER_1				ASCII_79_LAYER_1
#define O_LAYER_2				ASCII_79_LAYER_2
#define O_LAYER_3				ASCII_79_LAYER_3
#define O_LAYER_4				ASCII_79_LAYER_4
#define O_LAYER_5				ASCII_79_LAYER_5
#define O_LAYER_6				ASCII_79_LAYER_6
#define O_LAYER_7				ASCII_79_LAYER_7
#define O_LAYER_8				ASCII_79_LAYER_8
#define O_LAYER_9				ASCII_79_LAYER_9
#define O_LAYER_10				ASCII_79_LAYER_10

//	80: P
// 
//	Credit: 

#define ASCII_80_LAYER_0		"  ______    "
#define ASCII_80_LAYER_1		" | ____ \\   "
#define ASCII_80_LAYER_2		" ||     \\\\  "
#define ASCII_80_LAYER_3		" ||      || "
#define ASCII_80_LAYER_4		" ||_____//  "
#define ASCII_80_LAYER_5		" | _____/   "
#define ASCII_80_LAYER_6		" ||         "
#define ASCII_80_LAYER_7		" ||         "
#define ASCII_80_LAYER_8		" ||         "
#define ASCII_80_LAYER_9		" ||         "
#define ASCII_80_LAYER_10		" ||         "

#define P_LAYER_0				ASCII_80_LAYER_0
#define P_LAYER_1				ASCII_80_LAYER_1
#define P_LAYER_2				ASCII_80_LAYER_2
#define P_LAYER_3				ASCII_80_LAYER_3
#define P_LAYER_4				ASCII_80_LAYER_4
#define P_LAYER_5				ASCII_80_LAYER_5
#define P_LAYER_6				ASCII_80_LAYER_6
#define P_LAYER_7				ASCII_80_LAYER_7
#define P_LAYER_8				ASCII_80_LAYER_8
#define P_LAYER_9				ASCII_80_LAYER_9
#define P_LAYER_10				ASCII_80_LAYER_10

//	81: Q
// 
//	Credit: 

#define ASCII_81_LAYER_0		"            "
#define ASCII_81_LAYER_1		"   ______   "
#define ASCII_81_LAYER_2		"  / ____ \\  "
#define ASCII_81_LAYER_3		" //      \\\\ "
#define ASCII_81_LAYER_4		" ||       ||"
#define ASCII_81_LAYER_5		" ||       ||"
#define ASCII_81_LAYER_6		" ||       ||"
#define ASCII_81_LAYER_7		" \\\\_______//"
#define ASCII_81_LAYER_8		"  \\ __ __ / "
#define ASCII_81_LAYER_9		"      \\\\___ "
#define ASCII_81_LAYER_10		"       \\___|"

#define Q_LAYER_0				ASCII_81_LAYER_0
#define Q_LAYER_1				ASCII_81_LAYER_1
#define Q_LAYER_2				ASCII_81_LAYER_2
#define Q_LAYER_3				ASCII_81_LAYER_3
#define Q_LAYER_4				ASCII_81_LAYER_4
#define Q_LAYER_5				ASCII_81_LAYER_5
#define Q_LAYER_6				ASCII_81_LAYER_6
#define Q_LAYER_7				ASCII_81_LAYER_7
#define Q_LAYER_8				ASCII_81_LAYER_8
#define Q_LAYER_9				ASCII_81_LAYER_9
#define Q_LAYER_10				ASCII_81_LAYER_10

//	82: R
// 
//	Credit: 

#define ASCII_82_LAYER_0		"  ______    "
#define ASCII_82_LAYER_1		" | ____ \\   "
#define ASCII_82_LAYER_2		" ||     \\\\  "
#define ASCII_82_LAYER_3		" ||      || "
#define ASCII_82_LAYER_4		" ||_____//  "
#define ASCII_82_LAYER_5		" |  ____/   "
#define ASCII_82_LAYER_6		" ||\\\\       "
#define ASCII_82_LAYER_7		" || \\\\      "
#define ASCII_82_LAYER_8		" ||  \\\\     "
#define ASCII_82_LAYER_9		" ||   \\\\    "
#define ASCII_82_LAYER_10		" ||    \\\\   "

//	83: S
// 
//	Credit: 

#define ASCII_83_LAYER_0		"    ____    "
#define ASCII_83_LAYER_1		"   / __ \\   "
#define ASCII_83_LAYER_2		"  | |  |_|  "
#define ASCII_83_LAYER_3		"  | |       "
#define ASCII_83_LAYER_4		"   \\ \\      "
#define ASCII_83_LAYER_5		"    \\ \\     "
#define ASCII_83_LAYER_6		"     \\ \\    "
#define ASCII_83_LAYER_7		"      \\ \\   "
#define ASCII_83_LAYER_8		"   _   | |  "
#define ASCII_83_LAYER_9		"  | |  | |  "
#define ASCII_83_LAYER_10		"   \\____/   "

#define S_LAYER_0				ASCII_83_LAYER_0
#define S_LAYER_1				ASCII_83_LAYER_1
#define S_LAYER_2				ASCII_83_LAYER_2
#define S_LAYER_3				ASCII_83_LAYER_3
#define S_LAYER_4				ASCII_83_LAYER_4
#define S_LAYER_5				ASCII_83_LAYER_5
#define S_LAYER_6				ASCII_83_LAYER_6
#define S_LAYER_7				ASCII_83_LAYER_7
#define S_LAYER_8				ASCII_83_LAYER_8
#define S_LAYER_9				ASCII_83_LAYER_9
#define S_LAYER_10				ASCII_83_LAYER_10

//	84: T
// 
//	Credit: 

#define ASCII_84_LAYER_0		" __________ "
#define ASCII_84_LAYER_1		"|          |"
#define ASCII_84_LAYER_2		"|___    ___|"
#define ASCII_84_LAYER_3		"    |  |    "
#define ASCII_84_LAYER_4		"    |  |    "
#define ASCII_84_LAYER_5		"    |  |    "
#define ASCII_84_LAYER_6		"    |  |    "
#define ASCII_84_LAYER_7		"    |  |    "
#define ASCII_84_LAYER_8		"    |  |    "
#define ASCII_84_LAYER_9		"    |  |    "
#define ASCII_84_LAYER_10		"    |__|    "

#define T_LAYER_0				ASCII_84_LAYER_0
#define T_LAYER_1				ASCII_84_LAYER_1
#define T_LAYER_2				ASCII_84_LAYER_2
#define T_LAYER_3				ASCII_84_LAYER_3
#define T_LAYER_4				ASCII_84_LAYER_4
#define T_LAYER_5				ASCII_84_LAYER_5
#define T_LAYER_6				ASCII_84_LAYER_6
#define T_LAYER_7				ASCII_84_LAYER_7
#define T_LAYER_8				ASCII_84_LAYER_8
#define T_LAYER_9				ASCII_84_LAYER_9
#define T_LAYER_10				ASCII_84_LAYER_10

//	85: U
// 
//	Credit: 

#define ASCII_85_LAYER_0		"||        ||"
#define ASCII_85_LAYER_1		"||        ||"
#define ASCII_85_LAYER_2		"||        ||"
#define ASCII_85_LAYER_3		"||        ||"
#define ASCII_85_LAYER_4		"||        ||"
#define ASCII_85_LAYER_5		"||        ||"
#define ASCII_85_LAYER_6		"||        ||"
#define ASCII_85_LAYER_7		"||        ||"
#define ASCII_85_LAYER_8		"\\\\        //"
#define ASCII_85_LAYER_9		" \\\\______// "
#define ASCII_85_LAYER_10		"  \\______/  "

#define U_LAYER_0				ASCII_85_LAYER_0
#define U_LAYER_1				ASCII_85_LAYER_1
#define U_LAYER_2				ASCII_85_LAYER_2
#define U_LAYER_3				ASCII_85_LAYER_3
#define U_LAYER_4				ASCII_85_LAYER_4
#define U_LAYER_5				ASCII_85_LAYER_5
#define U_LAYER_6				ASCII_85_LAYER_6
#define U_LAYER_7				ASCII_85_LAYER_7
#define U_LAYER_8				ASCII_85_LAYER_8
#define U_LAYER_9				ASCII_85_LAYER_9
#define U_LAYER_10				ASCII_85_LAYER_10

//	86: V
// 
//	Credit: 

#define ASCII_86_LAYER_0		" _        _ "
#define ASCII_86_LAYER_1		"| |      | |"
#define ASCII_86_LAYER_2		"| |      | |"
#define ASCII_86_LAYER_3		"| |      | |"
#define ASCII_86_LAYER_4		"| |      | |"
#define ASCII_86_LAYER_5		"\\ \\      / /"
#define ASCII_86_LAYER_6		" \\ \\    / / "
#define ASCII_86_LAYER_7		"  \\ \\  / /  "
#define ASCII_86_LAYER_8		"   \\ \\/ /   "
#define ASCII_86_LAYER_9		"    \\  /    "
#define ASCII_86_LAYER_10		"     \\/     "

#define V_LAYER_0				ASCII_86_LAYER_0
#define V_LAYER_1				ASCII_86_LAYER_1
#define V_LAYER_2				ASCII_86_LAYER_2
#define V_LAYER_3				ASCII_86_LAYER_3
#define V_LAYER_4				ASCII_86_LAYER_4
#define V_LAYER_5				ASCII_86_LAYER_5
#define V_LAYER_6				ASCII_86_LAYER_6
#define V_LAYER_7				ASCII_86_LAYER_7
#define V_LAYER_8				ASCII_86_LAYER_8
#define V_LAYER_9				ASCII_86_LAYER_9
#define V_LAYER_10				ASCII_86_LAYER_10

//	87: W
// 
//	Credit: 

#define ASCII_87_LAYER_0		" _        _ "
#define ASCII_87_LAYER_1		"| |      | |"
#define ASCII_87_LAYER_2		"| |      | |"
#define ASCII_87_LAYER_3		"| |      | |"
#define ASCII_87_LAYER_4		"| |      | |"
#define ASCII_87_LAYER_5		"| |      | |"
#define ASCII_87_LAYER_6		"| |  /\\  | |"
#define ASCII_87_LAYER_7		"| | /  \\ | |"
#define ASCII_87_LAYER_8		"\\ |/    \\| /"
#define ASCII_87_LAYER_9		" \\   /\\   / "
#define ASCII_87_LAYER_10		"  \\_/  \\_/  "

#define W_LAYER_0				ASCII_87_LAYER_0
#define W_LAYER_1				ASCII_87_LAYER_1
#define W_LAYER_2				ASCII_87_LAYER_2
#define W_LAYER_3				ASCII_87_LAYER_3
#define W_LAYER_4				ASCII_87_LAYER_4
#define W_LAYER_5				ASCII_87_LAYER_5
#define W_LAYER_6				ASCII_87_LAYER_6
#define W_LAYER_7				ASCII_87_LAYER_7
#define W_LAYER_8				ASCII_87_LAYER_8
#define W_LAYER_9				ASCII_87_LAYER_9
#define W_LAYER_10				ASCII_87_LAYER_10

//	88: X
// 
//	Credit: 

#define ASCII_88_LAYER_0		"__        __"
#define ASCII_88_LAYER_1		"\\ \\      / /"
#define ASCII_88_LAYER_2		" \\ \\    / / "
#define ASCII_88_LAYER_3		"  \\ \\  / /  "
#define ASCII_88_LAYER_4		"   \\ \\/ /   "
#define ASCII_88_LAYER_5		"    \\  /    "
#define ASCII_88_LAYER_6		"    /  \\    "
#define ASCII_88_LAYER_7		"   / /\\ \\   "
#define ASCII_88_LAYER_8		"  / /  \\ \\  "
#define ASCII_88_LAYER_9		" / /    \\ \\ "
#define ASCII_88_LAYER_10		"/_/      \\_\\"

#define X_LAYER_0				ASCII_88_LAYER_0
#define X_LAYER_1				ASCII_88_LAYER_1
#define X_LAYER_2				ASCII_88_LAYER_2
#define X_LAYER_3				ASCII_88_LAYER_3
#define X_LAYER_4				ASCII_88_LAYER_4
#define X_LAYER_5				ASCII_88_LAYER_5
#define X_LAYER_6				ASCII_88_LAYER_6
#define X_LAYER_7				ASCII_88_LAYER_7
#define X_LAYER_8				ASCII_88_LAYER_8
#define X_LAYER_9				ASCII_88_LAYER_9
#define X_LAYER_10				ASCII_88_LAYER_10

//	89: Y
// 
//	Credit: 

#define ASCII_89_LAYER_0		"__        __"
#define ASCII_89_LAYER_1		"\\ \\      / /"
#define ASCII_89_LAYER_2		" \\ \\    / / "
#define ASCII_89_LAYER_3		"  \\ \\  / /  "
#define ASCII_89_LAYER_4		"   \\ \\/ /   "
#define ASCII_89_LAYER_5		"    \\  /    "
#define ASCII_89_LAYER_6		"    |  |    "
#define ASCII_89_LAYER_7		"    |  |    "
#define ASCII_89_LAYER_8		"    |  |    "
#define ASCII_89_LAYER_9		"    |  |    "
#define ASCII_89_LAYER_10		"    |__|    "

#define Y_LAYER_0				ASCII_89_LAYER_0
#define Y_LAYER_1				ASCII_89_LAYER_1
#define Y_LAYER_2				ASCII_89_LAYER_2
#define Y_LAYER_3				ASCII_89_LAYER_3
#define Y_LAYER_4				ASCII_89_LAYER_4
#define Y_LAYER_5				ASCII_89_LAYER_5
#define Y_LAYER_6				ASCII_89_LAYER_6
#define Y_LAYER_7				ASCII_89_LAYER_7
#define Y_LAYER_8				ASCII_89_LAYER_8
#define Y_LAYER_9				ASCII_89_LAYER_9
#define Y_LAYER_10				ASCII_89_LAYER_10

//	90: Z
// 
//	Credit: 

#define ASCII_90_LAYER_0		" ___________"
#define ASCII_90_LAYER_1		"|________  /"
#define ASCII_90_LAYER_2		"        / / "
#define ASCII_90_LAYER_3		"       / /  "
#define ASCII_90_LAYER_4		"      / /   "
#define ASCII_90_LAYER_5		"     / /    "
#define ASCII_90_LAYER_6		"    / /     "
#define ASCII_90_LAYER_7		"   / /      "
#define ASCII_90_LAYER_8		"  / /       "
#define ASCII_90_LAYER_9		" / /_______ "
#define ASCII_90_LAYER_10		"/__________|"

#define Z_LAYER_0				ASCII_90_LAYER_0
#define Z_LAYER_1				ASCII_90_LAYER_1
#define Z_LAYER_2				ASCII_90_LAYER_2
#define Z_LAYER_3				ASCII_90_LAYER_3
#define Z_LAYER_4				ASCII_90_LAYER_4
#define Z_LAYER_5				ASCII_90_LAYER_5
#define Z_LAYER_6				ASCII_90_LAYER_6
#define Z_LAYER_7				ASCII_90_LAYER_7
#define Z_LAYER_8				ASCII_90_LAYER_8
#define Z_LAYER_9				ASCII_90_LAYER_9
#define Z_LAYER_10				ASCII_90_LAYER_10

//	91: [
// 
//	Credit: 

#define ASCII_91_LAYER_0		"   _____    "
#define ASCII_91_LAYER_1		"  |  ___|   "
#define ASCII_91_LAYER_2		"  | |       "
#define ASCII_91_LAYER_3		"  | |       "
#define ASCII_91_LAYER_4		"  | |       "
#define ASCII_91_LAYER_5		"  | |       "
#define ASCII_91_LAYER_6		"  | |       "
#define ASCII_91_LAYER_7		"  | |       "
#define ASCII_91_LAYER_8		"  | |       "
#define ASCII_91_LAYER_9		"  | |___    "
#define ASCII_91_LAYER_10		"  |_____|   "

#define LSQBRACKET_LAYER_0		ASCII_91_LAYER_0
#define LSQBRACKET_LAYER_1		ASCII_91_LAYER_1
#define LSQBRACKET_LAYER_2		ASCII_91_LAYER_2
#define LSQBRACKET_LAYER_3		ASCII_91_LAYER_3
#define LSQBRACKET_LAYER_4		ASCII_91_LAYER_4
#define LSQBRACKET_LAYER_5		ASCII_91_LAYER_5
#define LSQBRACKET_LAYER_6		ASCII_91_LAYER_6
#define LSQBRACKET_LAYER_7		ASCII_91_LAYER_7
#define LSQBRACKET_LAYER_8		ASCII_91_LAYER_8
#define LSQBRACKET_LAYER_9		ASCII_91_LAYER_9
#define LSQBRACKET_LAYER_10		ASCII_91_LAYER_10

//	92: \
// 
//	Credit: 

#define ASCII_92_LAYER_0		"__          "
#define ASCII_92_LAYER_1		"\\ \\         "
#define ASCII_92_LAYER_2		" \\ \\        "
#define ASCII_92_LAYER_3		"  \\ \\       "
#define ASCII_92_LAYER_4		"   \\ \\      "
#define ASCII_92_LAYER_5		"    \\ \\     "
#define ASCII_92_LAYER_6		"     \\ \\    "
#define ASCII_92_LAYER_7		"      \\ \\   "
#define ASCII_92_LAYER_8		"       \\ \\  "
#define ASCII_92_LAYER_9		"        \\ \\ "
#define ASCII_92_LAYER_10		"         \\_\\"

#define BSLASH_LAYER_0			ASCII_92_LAYER_0
#define BSLASH_LAYER_1			ASCII_92_LAYER_1
#define BSLASH_LAYER_2			ASCII_92_LAYER_2
#define BSLASH_LAYER_3			ASCII_92_LAYER_3
#define BSLASH_LAYER_4			ASCII_92_LAYER_4
#define BSLASH_LAYER_5			ASCII_92_LAYER_5
#define BSLASH_LAYER_6			ASCII_92_LAYER_6
#define BSLASH_LAYER_7			ASCII_92_LAYER_7
#define BSLASH_LAYER_8			ASCII_92_LAYER_8
#define BSLASH_LAYER_9			ASCII_92_LAYER_9
#define BSLASH_LAYER_10			ASCII_92_LAYER_10

//	93: ]
// 
//	Credit: 

#define ASCII_93_LAYER_0		"   _____    "
#define ASCII_93_LAYER_1		"  |___  |   "
#define ASCII_93_LAYER_2		"      | |   "
#define ASCII_93_LAYER_3		"      | |   "
#define ASCII_93_LAYER_4		"      | |   "
#define ASCII_93_LAYER_5		"      | |   "
#define ASCII_93_LAYER_6		"      | |   "
#define ASCII_93_LAYER_7		"      | |   "
#define ASCII_93_LAYER_8		"      | |   "
#define ASCII_93_LAYER_9		"   ___| |   "
#define ASCII_93_LAYER_10		"  |_____|   "

#define RSQBRACKET_LAYER_0		ASCII_93_LAYER_0
#define RSQBRACKET_LAYER_1		ASCII_93_LAYER_1
#define RSQBRACKET_LAYER_2		ASCII_93_LAYER_2
#define RSQBRACKET_LAYER_3		ASCII_93_LAYER_3
#define RSQBRACKET_LAYER_4		ASCII_93_LAYER_4
#define RSQBRACKET_LAYER_5		ASCII_93_LAYER_5
#define RSQBRACKET_LAYER_6		ASCII_93_LAYER_6
#define RSQBRACKET_LAYER_7		ASCII_93_LAYER_7
#define RSQBRACKET_LAYER_8		ASCII_93_LAYER_8
#define RSQBRACKET_LAYER_9		ASCII_93_LAYER_9
#define RSQBRACKET_LAYER_10		ASCII_93_LAYER_10

//	94: ^
// 
//	Credit: 

#define ASCII_94_LAYER_0		"     /\\     "
#define ASCII_94_LAYER_1		"    //\\\\    "
#define ASCII_94_LAYER_2		"   //  \\\\   "
#define ASCII_94_LAYER_3		"  //    \\\\  "
#define ASCII_94_LAYER_4		" //      \\\\ "
#define ASCII_94_LAYER_5		"            "
#define ASCII_94_LAYER_6		"            "
#define ASCII_94_LAYER_7		"            "
#define ASCII_94_LAYER_8		"            "
#define ASCII_94_LAYER_9		"            "
#define ASCII_94_LAYER_10		"            "

#define CARET_LAYER_0			ASCII_94_LAYER_0
#define CARET_LAYER_1			ASCII_94_LAYER_1
#define CARET_LAYER_2			ASCII_94_LAYER_2
#define CARET_LAYER_3			ASCII_94_LAYER_3
#define CARET_LAYER_4			ASCII_94_LAYER_4
#define CARET_LAYER_5			ASCII_94_LAYER_5
#define CARET_LAYER_6			ASCII_94_LAYER_6
#define CARET_LAYER_7			ASCII_94_LAYER_7
#define CARET_LAYER_8			ASCII_94_LAYER_8
#define CARET_LAYER_9			ASCII_94_LAYER_9
#define CARET_LAYER_10			ASCII_94_LAYER_10

//	95: _
// 
//	Credit: 

#define ASCII_95_LAYER_0		"            "
#define ASCII_95_LAYER_1		"            "
#define ASCII_95_LAYER_2		"            "
#define ASCII_95_LAYER_3		"            "
#define ASCII_95_LAYER_4		"            "
#define ASCII_95_LAYER_5		"            "
#define ASCII_95_LAYER_6		"            "
#define ASCII_95_LAYER_7		"            "
#define ASCII_95_LAYER_8		"            "
#define ASCII_95_LAYER_9		" __________ "
#define ASCII_95_LAYER_10		"|__________|"

#define UNDERSCORE_LAYER_0		ASCII_95_LAYER_0
#define UNDERSCORE_LAYER_1		ASCII_95_LAYER_1
#define UNDERSCORE_LAYER_2		ASCII_95_LAYER_2
#define UNDERSCORE_LAYER_3		ASCII_95_LAYER_3
#define UNDERSCORE_LAYER_4		ASCII_95_LAYER_4
#define UNDERSCORE_LAYER_5		ASCII_95_LAYER_5
#define UNDERSCORE_LAYER_6		ASCII_95_LAYER_6
#define UNDERSCORE_LAYER_7		ASCII_95_LAYER_7
#define UNDERSCORE_LAYER_8		ASCII_95_LAYER_8
#define UNDERSCORE_LAYER_9		ASCII_95_LAYER_9
#define UNDERSCORE_LAYER_10		ASCII_95_LAYER_10

//	96: `
// 
//	Credit: 

#define ASCII_96_LAYER_0		"  ___       "
#define ASCII_96_LAYER_1		"  \\_ \\_     "
#define ASCII_96_LAYER_2		"    \\_ \\    "
#define ASCII_96_LAYER_3		"      \\_\\   "
#define ASCII_96_LAYER_4		"            "
#define ASCII_96_LAYER_5		"            "
#define ASCII_96_LAYER_6		"            "
#define ASCII_96_LAYER_7		"            "
#define ASCII_96_LAYER_8		"            "
#define ASCII_96_LAYER_9		"            "
#define ASCII_96_LAYER_10		"            "

#define GRAVEACCENT_LAYER_0		ASCII_96_LAYER_0
#define GRAVEACCENT_LAYER_1		ASCII_96_LAYER_1
#define GRAVEACCENT_LAYER_2		ASCII_96_LAYER_2
#define GRAVEACCENT_LAYER_3		ASCII_96_LAYER_3
#define GRAVEACCENT_LAYER_4		ASCII_96_LAYER_4
#define GRAVEACCENT_LAYER_5		ASCII_96_LAYER_5
#define GRAVEACCENT_LAYER_6		ASCII_96_LAYER_6
#define GRAVEACCENT_LAYER_7		ASCII_96_LAYER_7
#define GRAVEACCENT_LAYER_8		ASCII_96_LAYER_8
#define GRAVEACCENT_LAYER_9		ASCII_96_LAYER_9
#define GRAVEACCENT_LAYER_10	ASCII_96_LAYER_10

//	97: a
// 
//	Credit: 

#define ASCII_97_LAYER_0		"            "
#define ASCII_97_LAYER_1		"            "
#define ASCII_97_LAYER_2		"            "
#define ASCII_97_LAYER_3		"            "
#define ASCII_97_LAYER_4		" _________  "
#define ASCII_97_LAYER_5		"|________ \\ "
#define ASCII_97_LAYER_6		" ________\\ \\"
#define ASCII_97_LAYER_7		"/ _______  |"
#define ASCII_97_LAYER_8		"|/       \\ |"
#define ASCII_97_LAYER_9		"|\\_______/||"
#define ASCII_97_LAYER_10		"\\ _______/||"

#define a_LAYER_0				ASCII_97_LAYER_0
#define a_LAYER_1				ASCII_97_LAYER_1
#define a_LAYER_2				ASCII_97_LAYER_2
#define a_LAYER_3				ASCII_97_LAYER_3
#define a_LAYER_4				ASCII_97_LAYER_4
#define a_LAYER_5				ASCII_97_LAYER_5
#define a_LAYER_6				ASCII_97_LAYER_6
#define a_LAYER_7				ASCII_97_LAYER_7
#define a_LAYER_8				ASCII_97_LAYER_8
#define a_LAYER_9				ASCII_97_LAYER_9
#define a_LAYER_10				ASCII_97_LAYER_10

//	98: b
// 
//	Credit: 

#define ASCII_98_LAYER_0		" _          "
#define ASCII_98_LAYER_1		"| |         "
#define ASCII_98_LAYER_2		"| |         "
#define ASCII_98_LAYER_3		"| |         "
#define ASCII_98_LAYER_4		"| |         "
#define ASCII_98_LAYER_5		"| |______   "
#define ASCII_98_LAYER_6		"|  _____ \\  "
#define ASCII_98_LAYER_7		"| |     \\ \\ "
#define ASCII_98_LAYER_8		"| |     | | "
#define ASCII_98_LAYER_9		"| |_____/ / "
#define ASCII_98_LAYER_10		"|_______ /  "

#define b_LAYER_0				ASCII_98_LAYER_0
#define b_LAYER_1				ASCII_98_LAYER_1
#define b_LAYER_2				ASCII_98_LAYER_2
#define b_LAYER_3				ASCII_98_LAYER_3
#define b_LAYER_4				ASCII_98_LAYER_4
#define b_LAYER_5				ASCII_98_LAYER_5
#define b_LAYER_6				ASCII_98_LAYER_6
#define b_LAYER_7				ASCII_98_LAYER_7
#define b_LAYER_8				ASCII_98_LAYER_8
#define b_LAYER_9				ASCII_98_LAYER_9
#define b_LAYER_10				ASCII_98_LAYER_10

//	99: c
// 
//	Credit: 

#define ASCII_99_LAYER_0		"            "
#define ASCII_99_LAYER_1		"            "
#define ASCII_99_LAYER_2		"            "
#define ASCII_99_LAYER_3		"            "
#define ASCII_99_LAYER_4		"            "
#define ASCII_99_LAYER_5		"  ________  "
#define ASCII_99_LAYER_6		" /  ______| "
#define ASCII_99_LAYER_7		" | /        "
#define ASCII_99_LAYER_8		" | |        "
#define ASCII_99_LAYER_9		" | \\______  "
#define ASCII_99_LAYER_10		" \\________| "

#define c_LAYER_0				ASCII_99_LAYER_0
#define c_LAYER_1				ASCII_99_LAYER_1
#define c_LAYER_2				ASCII_99_LAYER_2
#define c_LAYER_3				ASCII_99_LAYER_3
#define c_LAYER_4				ASCII_99_LAYER_4
#define c_LAYER_5				ASCII_99_LAYER_5
#define c_LAYER_6				ASCII_99_LAYER_6
#define c_LAYER_7				ASCII_99_LAYER_7
#define c_LAYER_8				ASCII_99_LAYER_8
#define c_LAYER_9				ASCII_99_LAYER_9
#define c_LAYER_10				ASCII_99_LAYER_10

//	100: d
// 
//	Credit: 

#define ASCII_100_LAYER_0		"          _ "
#define ASCII_100_LAYER_1		"         | |"
#define ASCII_100_LAYER_2		"         | |"
#define ASCII_100_LAYER_3		"         | |"
#define ASCII_100_LAYER_4		"         | |"
#define ASCII_100_LAYER_5		"   ______| |"
#define ASCII_100_LAYER_6		"  /  ____  |"
#define ASCII_100_LAYER_7		" / /     | |"
#define ASCII_100_LAYER_8		" | |     | |"
#define ASCII_100_LAYER_9		" \\ \\_____| |"
#define ASCII_100_LAYER_10		"  \\_______ |"

#define d_LAYER_0				ASCII_100_LAYER_0
#define d_LAYER_1				ASCII_100_LAYER_1
#define d_LAYER_2				ASCII_100_LAYER_2
#define d_LAYER_3				ASCII_100_LAYER_3
#define d_LAYER_4				ASCII_100_LAYER_4
#define d_LAYER_5				ASCII_100_LAYER_5
#define d_LAYER_6				ASCII_100_LAYER_6
#define d_LAYER_7				ASCII_100_LAYER_7
#define d_LAYER_8				ASCII_100_LAYER_8
#define d_LAYER_9				ASCII_100_LAYER_9
#define d_LAYER_10				ASCII_100_LAYER_10

//	101: e
// 
//	Credit: 

#define ASCII_101_LAYER_0		"            "
#define ASCII_101_LAYER_1		"            "
#define ASCII_101_LAYER_2		"            "
#define ASCII_101_LAYER_3		"            "
#define ASCII_101_LAYER_4		"    ______  "
#define ASCII_101_LAYER_5		"   / _____\\ "
#define ASCII_101_LAYER_6		"  / /_____\\\\"
#define ASCII_101_LAYER_7		" / ________|"
#define ASCII_101_LAYER_8		"/ /         "
#define ASCII_101_LAYER_9		"\\ \\________ "
#define ASCII_101_LAYER_10		" \\ ________|"

#define e_LAYER_0				ASCII_101_LAYER_0
#define e_LAYER_1				ASCII_101_LAYER_1
#define e_LAYER_2				ASCII_101_LAYER_2
#define e_LAYER_3				ASCII_101_LAYER_3
#define e_LAYER_4				ASCII_101_LAYER_4
#define e_LAYER_5				ASCII_101_LAYER_5
#define e_LAYER_6				ASCII_101_LAYER_6
#define e_LAYER_7				ASCII_101_LAYER_7
#define e_LAYER_8				ASCII_101_LAYER_8
#define e_LAYER_9				ASCII_101_LAYER_9
#define e_LAYER_10				ASCII_101_LAYER_10

//	102: f
// 
//	Credit: 

#define ASCII_102_LAYER_0		"      ____  "
#define ASCII_102_LAYER_1		"     / __ \\ "
#define ASCII_102_LAYER_2		"    | |  |_|"
#define ASCII_102_LAYER_3		"  __| |__   "
#define ASCII_102_LAYER_4		" |__   __|  "
#define ASCII_102_LAYER_5		"    | |     "
#define ASCII_102_LAYER_6		"    | |     "
#define ASCII_102_LAYER_7		"    | |     "
#define ASCII_102_LAYER_8		"    | |     "
#define ASCII_102_LAYER_9		"    | |     "
#define ASCII_102_LAYER_10		"    |_|     "

#define f_LAYER_0				ASCII_102_LAYER_0
#define f_LAYER_1				ASCII_102_LAYER_1
#define f_LAYER_2				ASCII_102_LAYER_2
#define f_LAYER_3				ASCII_102_LAYER_3
#define f_LAYER_4				ASCII_102_LAYER_4
#define f_LAYER_5				ASCII_102_LAYER_5
#define f_LAYER_6				ASCII_102_LAYER_6
#define f_LAYER_7				ASCII_102_LAYER_7
#define f_LAYER_8				ASCII_102_LAYER_8
#define f_LAYER_9				ASCII_102_LAYER_9
#define f_LAYER_10				ASCII_102_LAYER_10

//	103: g
// 
//	Credit: 

#define ASCII_103_LAYER_0		"            "
#define ASCII_103_LAYER_1		"            "
#define ASCII_103_LAYER_2		"   _____    "
#define ASCII_103_LAYER_3		"  /_____\\   "
#define ASCII_103_LAYER_4		" //     \\\\  "
#define ASCII_103_LAYER_5		" |\\_____/|  "
#define ASCII_103_LAYER_6		" \\  ____ /  "
#define ASCII_103_LAYER_7		"  ||______  "
#define ASCII_103_LAYER_8		" / ______ \\ "
#define ASCII_103_LAYER_9		" ||______|| "
#define ASCII_103_LAYER_10		" \\ ______ / "

#define g_LAYER_0				ASCII_103_LAYER_0
#define g_LAYER_1				ASCII_103_LAYER_1
#define g_LAYER_2				ASCII_103_LAYER_2
#define g_LAYER_3				ASCII_103_LAYER_3
#define g_LAYER_4				ASCII_103_LAYER_4
#define g_LAYER_5				ASCII_103_LAYER_5
#define g_LAYER_6				ASCII_103_LAYER_6
#define g_LAYER_7				ASCII_103_LAYER_7
#define g_LAYER_8				ASCII_103_LAYER_8
#define g_LAYER_9				ASCII_103_LAYER_9
#define g_LAYER_10				ASCII_103_LAYER_10

//	104: h
// 
//	Credit: 

#define ASCII_104_LAYER_0		" _          "
#define ASCII_104_LAYER_1		"| |         "
#define ASCII_104_LAYER_2		"| |         "
#define ASCII_104_LAYER_3		"| |         "
#define ASCII_104_LAYER_4		"| |         "
#define ASCII_104_LAYER_5		"| |_______  "
#define ASCII_104_LAYER_6		"|  ______ \\ "
#define ASCII_104_LAYER_7		"| |      \\ \\"
#define ASCII_104_LAYER_8		"| |      | |"
#define ASCII_104_LAYER_9		"| |      | |"
#define ASCII_104_LAYER_10		"|_|      |_|"

#define h_LAYER_0				ASCII_104_LAYER_0
#define h_LAYER_1				ASCII_104_LAYER_1
#define h_LAYER_2				ASCII_104_LAYER_2
#define h_LAYER_3				ASCII_104_LAYER_3
#define h_LAYER_4				ASCII_104_LAYER_4
#define h_LAYER_5				ASCII_104_LAYER_5
#define h_LAYER_6				ASCII_104_LAYER_6
#define h_LAYER_7				ASCII_104_LAYER_7
#define h_LAYER_8				ASCII_104_LAYER_8
#define h_LAYER_9				ASCII_104_LAYER_9
#define h_LAYER_10				ASCII_104_LAYER_10

//	105: i
// 
//	Credit: 

#define ASCII_105_LAYER_0		"            "
#define ASCII_105_LAYER_1		"            "
#define ASCII_105_LAYER_2		"            "
#define ASCII_105_LAYER_3		"            "
#define ASCII_105_LAYER_4		"     _      "
#define ASCII_105_LAYER_5		"    |_|     "
#define ASCII_105_LAYER_6		"     _      "
#define ASCII_105_LAYER_7		"    | |     "
#define ASCII_105_LAYER_8		"    | |     "
#define ASCII_105_LAYER_9		"    | |     "
#define ASCII_105_LAYER_10		"    |_|     "

#define i_LAYER_0				ASCII_105_LAYER_0
#define i_LAYER_1				ASCII_105_LAYER_1
#define i_LAYER_2				ASCII_105_LAYER_2
#define i_LAYER_3				ASCII_105_LAYER_3
#define i_LAYER_4				ASCII_105_LAYER_4
#define i_LAYER_5				ASCII_105_LAYER_5
#define i_LAYER_6				ASCII_105_LAYER_6
#define i_LAYER_7				ASCII_105_LAYER_7
#define i_LAYER_8				ASCII_105_LAYER_8
#define i_LAYER_9				ASCII_105_LAYER_9
#define i_LAYER_10				ASCII_105_LAYER_10

//	106: j
// 
//	Credit: 

#define ASCII_106_LAYER_0		"            "
#define ASCII_106_LAYER_1		"            "
#define ASCII_106_LAYER_2		"            "
#define ASCII_106_LAYER_3		"         _  "
#define ASCII_106_LAYER_4		"        |_| "
#define ASCII_106_LAYER_5		"         _  "
#define ASCII_106_LAYER_6		"        | | "
#define ASCII_106_LAYER_7		"        | | "
#define ASCII_106_LAYER_8		"    __  | | "
#define ASCII_106_LAYER_9		"    \\ \\_| | "
#define ASCII_106_LAYER_10		"     \\____/ "

#define j_LAYER_0				ASCII_106_LAYER_0
#define j_LAYER_1				ASCII_106_LAYER_1
#define j_LAYER_2				ASCII_106_LAYER_2
#define j_LAYER_3				ASCII_106_LAYER_3
#define j_LAYER_4				ASCII_106_LAYER_4
#define j_LAYER_5				ASCII_106_LAYER_5
#define j_LAYER_6				ASCII_106_LAYER_6
#define j_LAYER_7				ASCII_106_LAYER_7
#define j_LAYER_8				ASCII_106_LAYER_8
#define j_LAYER_9				ASCII_106_LAYER_9
#define j_LAYER_10				ASCII_106_LAYER_10

//	107: k
// 
//	Credit: 

#define ASCII_107_LAYER_0		"   _        "
#define ASCII_107_LAYER_1		"  | |       "
#define ASCII_107_LAYER_2		"  | |       "
#define ASCII_107_LAYER_3		"  | |   __  "
#define ASCII_107_LAYER_4		"  | |  / /  "
#define ASCII_107_LAYER_5		"  | | / /   "
#define ASCII_107_LAYER_6		"  | |/ /    "
#define ASCII_107_LAYER_7		"  |   <     "
#define ASCII_107_LAYER_8		"  | |\\ \\    "
#define ASCII_107_LAYER_9		"  | | \\ \\   "
#define ASCII_107_LAYER_10		"  |_|  \\_\\  "

#define k_LAYER_0				ASCII_107_LAYER_0
#define k_LAYER_1				ASCII_107_LAYER_1
#define k_LAYER_2				ASCII_107_LAYER_2
#define k_LAYER_3				ASCII_107_LAYER_3
#define k_LAYER_4				ASCII_107_LAYER_4
#define k_LAYER_5				ASCII_107_LAYER_5
#define k_LAYER_6				ASCII_107_LAYER_6
#define k_LAYER_7				ASCII_107_LAYER_7
#define k_LAYER_8				ASCII_107_LAYER_8
#define k_LAYER_9				ASCII_107_LAYER_9
#define k_LAYER_10				ASCII_107_LAYER_10

//	108: l
// 
//	Credit: 

#define ASCII_108_LAYER_0		"    __      "
#define ASCII_108_LAYER_1		"   |_ |     "
#define ASCII_108_LAYER_2		"    | |     "
#define ASCII_108_LAYER_3		"    | |     "
#define ASCII_108_LAYER_4		"    | |     "
#define ASCII_108_LAYER_5		"    | |     "
#define ASCII_108_LAYER_6		"    | |     "
#define ASCII_108_LAYER_7		"    | |     "
#define ASCII_108_LAYER_8		"    | |     "
#define ASCII_108_LAYER_9		"   _| |_    "
#define ASCII_108_LAYER_10		"  |_____|   "

#define l_LAYER_0				ASCII_108_LAYER_0
#define l_LAYER_1				ASCII_108_LAYER_1
#define l_LAYER_2				ASCII_108_LAYER_2
#define l_LAYER_3				ASCII_108_LAYER_3
#define l_LAYER_4				ASCII_108_LAYER_4
#define l_LAYER_5				ASCII_108_LAYER_5
#define l_LAYER_6				ASCII_108_LAYER_6
#define l_LAYER_7				ASCII_108_LAYER_7
#define l_LAYER_8				ASCII_108_LAYER_8
#define l_LAYER_9				ASCII_108_LAYER_9
#define l_LAYER_10				ASCII_108_LAYER_10

//	109: m
// 
//	Credit: 

#define ASCII_109_LAYER_0		"            "
#define ASCII_109_LAYER_1		"            "
#define ASCII_109_LAYER_2		"            "
#define ASCII_109_LAYER_3		"            "
#define ASCII_109_LAYER_4		"            "
#define ASCII_109_LAYER_5		"  __    __  "
#define ASCII_109_LAYER_6		" /  \\  /  \\ "
#define ASCII_109_LAYER_7		"/ /\\ \\/ /\\ \\"
#define ASCII_109_LAYER_8		"| | \\  / | |"
#define ASCII_109_LAYER_9		"| |  \\/  | |"
#define ASCII_109_LAYER_10		"|_|      |_|"

#define m_LAYER_0				ASCII_109_LAYER_0
#define m_LAYER_1				ASCII_109_LAYER_1
#define m_LAYER_2				ASCII_109_LAYER_2
#define m_LAYER_3				ASCII_109_LAYER_3
#define m_LAYER_4				ASCII_109_LAYER_4
#define m_LAYER_5				ASCII_109_LAYER_5
#define m_LAYER_6				ASCII_109_LAYER_6
#define m_LAYER_7				ASCII_109_LAYER_7
#define m_LAYER_8				ASCII_109_LAYER_8
#define m_LAYER_9				ASCII_109_LAYER_9
#define m_LAYER_10				ASCII_109_LAYER_10

//	110: n
// 
//	Credit: 

#define ASCII_110_LAYER_0		"            "
#define ASCII_110_LAYER_1		"            "
#define ASCII_110_LAYER_2		"            "
#define ASCII_110_LAYER_3		"            "
#define ASCII_110_LAYER_4		" _          "
#define ASCII_110_LAYER_5		"| |_______  "
#define ASCII_110_LAYER_6		"|  ______ \\ "
#define ASCII_110_LAYER_7		"| |      \\ \\"
#define ASCII_110_LAYER_8		"| |      | |"
#define ASCII_110_LAYER_9		"| |      | |"
#define ASCII_110_LAYER_10		"|_|      |_|"

#define n_LAYER_0				ASCII_110_LAYER_0
#define n_LAYER_1				ASCII_110_LAYER_1
#define n_LAYER_2				ASCII_110_LAYER_2
#define n_LAYER_3				ASCII_110_LAYER_3
#define n_LAYER_4				ASCII_110_LAYER_4
#define n_LAYER_5				ASCII_110_LAYER_5
#define n_LAYER_6				ASCII_110_LAYER_6
#define n_LAYER_7				ASCII_110_LAYER_7
#define n_LAYER_8				ASCII_110_LAYER_8
#define n_LAYER_9				ASCII_110_LAYER_9
#define n_LAYER_10				ASCII_110_LAYER_10

//	111: o
// 
//	Credit: 

#define ASCII_111_LAYER_0		"            "
#define ASCII_111_LAYER_1		"            "
#define ASCII_111_LAYER_2		"            "
#define ASCII_111_LAYER_3		"     ___    "
#define ASCII_111_LAYER_4		"    /___\\   "
#define ASCII_111_LAYER_5		"   //   \\\\  "
#define ASCII_111_LAYER_6		"  //     \\\\ "
#define ASCII_111_LAYER_7		"  ||     || "
#define ASCII_111_LAYER_8		"  \\\\     // "
#define ASCII_111_LAYER_9		"   \\\\___//  "  
#define ASCII_111_LAYER_10		"    \\___/   "

#define o_LAYER_0				ASCII_111_LAYER_0
#define o_LAYER_1				ASCII_111_LAYER_1
#define o_LAYER_2				ASCII_111_LAYER_2
#define o_LAYER_3				ASCII_111_LAYER_3
#define o_LAYER_4				ASCII_111_LAYER_4
#define o_LAYER_5				ASCII_111_LAYER_5
#define o_LAYER_6				ASCII_111_LAYER_6
#define o_LAYER_7				ASCII_111_LAYER_7
#define o_LAYER_8				ASCII_111_LAYER_8
#define o_LAYER_9				ASCII_111_LAYER_9
#define o_LAYER_10				ASCII_111_LAYER_10

//	112: p
// 
//	Credit: 

#define ASCII_112_LAYER_0		"            "
#define ASCII_112_LAYER_1		"            "
#define ASCII_112_LAYER_2		"            "
#define ASCII_112_LAYER_3		"            "
#define ASCII_112_LAYER_4		"    ____    "
#define ASCII_112_LAYER_5		"   |  __\\   "
#define ASCII_112_LAYER_6		"   | |__||  "
#define ASCII_112_LAYER_7		"   |  ___/  "
#define ASCII_112_LAYER_8		"   | |      "
#define ASCII_112_LAYER_9		"   | |      "
#define ASCII_112_LAYER_10		"   |_|      "

#define p_LAYER_0				ASCII_112_LAYER_0
#define p_LAYER_1				ASCII_112_LAYER_1
#define p_LAYER_2				ASCII_112_LAYER_2
#define p_LAYER_3				ASCII_112_LAYER_3
#define p_LAYER_4				ASCII_112_LAYER_4
#define p_LAYER_5				ASCII_112_LAYER_5
#define p_LAYER_6				ASCII_112_LAYER_6
#define p_LAYER_7				ASCII_112_LAYER_7
#define p_LAYER_8				ASCII_112_LAYER_8
#define p_LAYER_9				ASCII_112_LAYER_9
#define p_LAYER_10				ASCII_112_LAYER_10

//	113: q
// 
//	Credit: 

#define ASCII_113_LAYER_0		"            "
#define ASCII_113_LAYER_1		"            "
#define ASCII_113_LAYER_2		"            "
#define ASCII_113_LAYER_3		"            "
#define ASCII_113_LAYER_4		"    ____    "
#define ASCII_113_LAYER_5		"   /__  |   "
#define ASCII_113_LAYER_6		"  ||__| |   "
#define ASCII_113_LAYER_7		"  \\___  |   "
#define ASCII_113_LAYER_8		"      | |   "
#define ASCII_113_LAYER_9		"      | |   "
#define ASCII_113_LAYER_10		"      |_|   "

#define q_LAYER_0				ASCII_113_LAYER_0
#define q_LAYER_1				ASCII_113_LAYER_1
#define q_LAYER_2				ASCII_113_LAYER_2
#define q_LAYER_3				ASCII_113_LAYER_3
#define q_LAYER_4				ASCII_113_LAYER_4
#define q_LAYER_5				ASCII_113_LAYER_5
#define q_LAYER_6				ASCII_113_LAYER_6
#define q_LAYER_7				ASCII_113_LAYER_7
#define q_LAYER_8				ASCII_113_LAYER_8
#define q_LAYER_9				ASCII_113_LAYER_9
#define q_LAYER_10				ASCII_113_LAYER_10

//	114: r
// 
//	Credit: 

#define ASCII_114_LAYER_0		"            "
#define ASCII_114_LAYER_1		"            "
#define ASCII_114_LAYER_2		"            "
#define ASCII_114_LAYER_3		"            "
#define ASCII_114_LAYER_4		" _          "
#define ASCII_114_LAYER_5		"| | ______  "
#define ASCII_114_LAYER_6		"| |/_____ \\ "
#define ASCII_114_LAYER_7		"|  /     \\_\\"
#define ASCII_114_LAYER_8		"| |         "
#define ASCII_114_LAYER_9		"| |         "
#define ASCII_114_LAYER_10		"|_|         "

#define r_LAYER_0				ASCII_114_LAYER_0
#define r_LAYER_1				ASCII_114_LAYER_1
#define r_LAYER_2				ASCII_114_LAYER_2
#define r_LAYER_3				ASCII_114_LAYER_3
#define r_LAYER_4				ASCII_114_LAYER_4
#define r_LAYER_5				ASCII_114_LAYER_5
#define r_LAYER_6				ASCII_114_LAYER_6
#define r_LAYER_7				ASCII_114_LAYER_7
#define r_LAYER_8				ASCII_114_LAYER_8
#define r_LAYER_9				ASCII_114_LAYER_9
#define r_LAYER_10				ASCII_114_LAYER_10

//	115: s
// 
//	Credit: 

#define ASCII_115_LAYER_0		"            "
#define ASCII_115_LAYER_1		"            "
#define ASCII_115_LAYER_2		"            "
#define ASCII_115_LAYER_3		"            "
#define ASCII_115_LAYER_4		"   _______  "
#define ASCII_115_LAYER_5		"  / ______| "
#define ASCII_115_LAYER_6		"  | |       "
#define ASCII_115_LAYER_7		"   \\ \\      "
#define ASCII_115_LAYER_8		"    \\ \\     "
#define ASCII_115_LAYER_9		" ____| |    "
#define ASCII_115_LAYER_10		"|_____ /    "

#define s_LAYER_0				ASCII_115_LAYER_0
#define s_LAYER_1				ASCII_115_LAYER_1
#define s_LAYER_2				ASCII_115_LAYER_2
#define s_LAYER_3				ASCII_115_LAYER_3
#define s_LAYER_4				ASCII_115_LAYER_4
#define s_LAYER_5				ASCII_115_LAYER_5
#define s_LAYER_6				ASCII_115_LAYER_6
#define s_LAYER_7				ASCII_115_LAYER_7
#define s_LAYER_8				ASCII_115_LAYER_8
#define s_LAYER_9				ASCII_115_LAYER_9
#define s_LAYER_10				ASCII_115_LAYER_10

//	116: t
// 
//	Credit: 

#define ASCII_116_LAYER_0		"            "
#define ASCII_116_LAYER_1		"      _     "
#define ASCII_116_LAYER_2		"     | |    "
#define ASCII_116_LAYER_3		"   __| |__  "
#define ASCII_116_LAYER_4		"  |__   __| "
#define ASCII_116_LAYER_5		"     | |    "
#define ASCII_116_LAYER_6		"     | |    "
#define ASCII_116_LAYER_7		"     | |    "
#define ASCII_116_LAYER_8		"     | |    "
#define ASCII_116_LAYER_9		"     | |__  "
#define ASCII_116_LAYER_10		"      \\___| "

#define t_LAYER_0				ASCII_116_LAYER_0
#define t_LAYER_1				ASCII_116_LAYER_1
#define t_LAYER_2				ASCII_116_LAYER_2
#define t_LAYER_3				ASCII_116_LAYER_3
#define t_LAYER_4				ASCII_116_LAYER_4
#define t_LAYER_5				ASCII_116_LAYER_5
#define t_LAYER_6				ASCII_116_LAYER_6
#define t_LAYER_7				ASCII_116_LAYER_7
#define t_LAYER_8				ASCII_116_LAYER_8
#define t_LAYER_9				ASCII_116_LAYER_9
#define t_LAYER_10				ASCII_116_LAYER_10

//	117: u
// 
//	Credit: 

#define ASCII_117_LAYER_0		"            "
#define ASCII_117_LAYER_1		"            "
#define ASCII_117_LAYER_2		"            "
#define ASCII_117_LAYER_3		"            "
#define ASCII_117_LAYER_4		" _        _ "
#define ASCII_117_LAYER_5		"| |      | |"
#define ASCII_117_LAYER_6		"| |      | |"
#define ASCII_117_LAYER_7		"| |      | |"
#define ASCII_117_LAYER_8		"| |      | |"
#define ASCII_117_LAYER_9		"| \\_____/  |"
#define ASCII_117_LAYER_10		" \\______/|_|"

#define u_LAYER_0				ASCII_117_LAYER_0
#define u_LAYER_1				ASCII_117_LAYER_1
#define u_LAYER_2				ASCII_117_LAYER_2
#define u_LAYER_3				ASCII_117_LAYER_3
#define u_LAYER_4				ASCII_117_LAYER_4
#define u_LAYER_5				ASCII_117_LAYER_5
#define u_LAYER_6				ASCII_117_LAYER_6
#define u_LAYER_7				ASCII_117_LAYER_7
#define u_LAYER_8				ASCII_117_LAYER_8
#define u_LAYER_9				ASCII_117_LAYER_9
#define u_LAYER_10				ASCII_117_LAYER_10

//	118: v
// 
//	Credit: 

#define ASCII_118_LAYER_0		"            "
#define ASCII_118_LAYER_1		"            "
#define ASCII_118_LAYER_2		"            "
#define ASCII_118_LAYER_3		"            "
#define ASCII_118_LAYER_4		"_          _"
#define ASCII_118_LAYER_5		"\\\\        //"
#define ASCII_118_LAYER_6		" \\\\      // "
#define ASCII_118_LAYER_7		"  \\\\    //  "
#define ASCII_118_LAYER_8		"   \\\\  //   "
#define ASCII_118_LAYER_9		"    \\\\//    "
#define ASCII_118_LAYER_10		"     \\/     "

#define v_LAYER_0				ASCII_118_LAYER_0
#define v_LAYER_1				ASCII_118_LAYER_1
#define v_LAYER_2				ASCII_118_LAYER_2
#define v_LAYER_3				ASCII_118_LAYER_3
#define v_LAYER_4				ASCII_118_LAYER_4
#define v_LAYER_5				ASCII_118_LAYER_5
#define v_LAYER_6				ASCII_118_LAYER_6
#define v_LAYER_7				ASCII_118_LAYER_7
#define v_LAYER_8				ASCII_118_LAYER_8
#define v_LAYER_9				ASCII_118_LAYER_9
#define v_LAYER_10				ASCII_118_LAYER_10

//	119: w
// 
//	Credit: 

#define ASCII_119_LAYER_0		"            "
#define ASCII_119_LAYER_1		"            "
#define ASCII_119_LAYER_2		"            "
#define ASCII_119_LAYER_3		"            "
#define ASCII_119_LAYER_4		"            "
#define ASCII_119_LAYER_5		" _        _ "
#define ASCII_119_LAYER_6		"| |      | |"
#define ASCII_119_LAYER_7		"| |  /\\  | |"
#define ASCII_119_LAYER_8		"| | /  \\ | |"
#define ASCII_119_LAYER_9		"\\ \\/ /\\ \\/ /"
#define ASCII_119_LAYER_10		" \\__/  \\__/ "

#define w_LAYER_0				ASCII_119_LAYER_0
#define w_LAYER_1				ASCII_119_LAYER_1
#define w_LAYER_2				ASCII_119_LAYER_2
#define w_LAYER_3				ASCII_119_LAYER_3
#define w_LAYER_4				ASCII_119_LAYER_4
#define w_LAYER_5				ASCII_119_LAYER_5
#define w_LAYER_6				ASCII_119_LAYER_6
#define w_LAYER_7				ASCII_119_LAYER_7
#define w_LAYER_8				ASCII_119_LAYER_8
#define w_LAYER_9				ASCII_119_LAYER_9
#define w_LAYER_10				ASCII_119_LAYER_10

//	120: x
// 
//	Credit: 

#define ASCII_120_LAYER_0		"            "
#define ASCII_120_LAYER_1		"            "
#define ASCII_120_LAYER_2		"            "
#define ASCII_120_LAYER_3		"            "
#define ASCII_120_LAYER_4		"  __    __  "
#define ASCII_120_LAYER_5		"  \\ \\  / /  "
#define ASCII_120_LAYER_6		"   \\ \\/ /   "
#define ASCII_120_LAYER_7		"    \\  /    "
#define ASCII_120_LAYER_8		"    /  \\    "
#define ASCII_120_LAYER_9		"   / /\\ \\   "
#define ASCII_120_LAYER_10		"  /_/  \\_\\  "

#define x_LAYER_0				ASCII_120_LAYER_0
#define x_LAYER_1				ASCII_120_LAYER_1
#define x_LAYER_2				ASCII_120_LAYER_2
#define x_LAYER_3				ASCII_120_LAYER_3
#define x_LAYER_4				ASCII_120_LAYER_4
#define x_LAYER_5				ASCII_120_LAYER_5
#define x_LAYER_6				ASCII_120_LAYER_6
#define x_LAYER_7				ASCII_120_LAYER_7
#define x_LAYER_8				ASCII_120_LAYER_8
#define x_LAYER_9				ASCII_120_LAYER_9
#define x_LAYER_10				ASCII_120_LAYER_10

//	121: y
// 
//	Credit: 

#define ASCII_121_LAYER_0		"            "
#define ASCII_121_LAYER_1		"            "
#define ASCII_121_LAYER_2		"            "
#define ASCII_121_LAYER_3		"            "
#define ASCII_121_LAYER_4		"  __    __  "
#define ASCII_121_LAYER_5		"  \\ \\  / /  "
#define ASCII_121_LAYER_6		"   \\ \\/ /   "
#define ASCII_121_LAYER_7		"    \\  /    "
#define ASCII_121_LAYER_8		"    / /     "
#define ASCII_121_LAYER_9		"   / /      "
#define ASCII_121_LAYER_10		"  /_/       "

#define y_LAYER_0				ASCII_121_LAYER_0
#define y_LAYER_1				ASCII_121_LAYER_1
#define y_LAYER_2				ASCII_121_LAYER_2
#define y_LAYER_3				ASCII_121_LAYER_3
#define y_LAYER_4				ASCII_121_LAYER_4
#define y_LAYER_5				ASCII_121_LAYER_5
#define y_LAYER_6				ASCII_121_LAYER_6
#define y_LAYER_7				ASCII_121_LAYER_7
#define y_LAYER_8				ASCII_121_LAYER_8
#define y_LAYER_9				ASCII_121_LAYER_9
#define y_LAYER_10				ASCII_121_LAYER_10

//	122: z
// 
//	Credit: 

#define ASCII_122_LAYER_0		"            "
#define ASCII_122_LAYER_1		"            "
#define ASCII_122_LAYER_2		"            "
#define ASCII_122_LAYER_3		"            "
#define ASCII_122_LAYER_4		"   ______   "
#define ASCII_122_LAYER_5		"  |____  |  "
#define ASCII_122_LAYER_6		"      / /   "
#define ASCII_122_LAYER_7		"     / /    "
#define ASCII_122_LAYER_8		"    / /     "
#define ASCII_122_LAYER_9		"   / /___   "
#define ASCII_122_LAYER_10		"  /______|  "

#define z_LAYER_0				ASCII_122_LAYER_0
#define z_LAYER_1				ASCII_122_LAYER_1
#define z_LAYER_2				ASCII_122_LAYER_2
#define z_LAYER_3				ASCII_122_LAYER_3
#define z_LAYER_4				ASCII_122_LAYER_4
#define z_LAYER_5				ASCII_122_LAYER_5
#define z_LAYER_6				ASCII_122_LAYER_6
#define z_LAYER_7				ASCII_122_LAYER_7
#define z_LAYER_8				ASCII_122_LAYER_8
#define z_LAYER_9				ASCII_122_LAYER_9
#define z_LAYER_10				ASCII_122_LAYER_10

//	123: {
// 
//	Credit: 

#define ASCII_123_LAYER_0		"      __    "
#define ASCII_123_LAYER_1		"     /__|   "
#define ASCII_123_LAYER_2		"    //      "
#define ASCII_123_LAYER_3		"   ||       "
#define ASCII_123_LAYER_4		"   ||       "
#define ASCII_123_LAYER_5		"  <<        "
#define ASCII_123_LAYER_6		"   ||       "
#define ASCII_123_LAYER_7		"   ||       "
#define ASCII_123_LAYER_8		"    \\\\__    "
#define ASCII_123_LAYER_9		"     \\__|   "
#define ASCII_123_LAYER_10		"            "

#define LCURLYBRACE_LAYER_0			ASCII_123_LAYER_0
#define LCURLYBRACE_LAYER_1			ASCII_123_LAYER_1
#define LCURLYBRACE_LAYER_2			ASCII_123_LAYER_2
#define LCURLYBRACE_LAYER_3			ASCII_123_LAYER_3
#define LCURLYBRACE_LAYER_4			ASCII_123_LAYER_4
#define LCURLYBRACE_LAYER_5			ASCII_123_LAYER_5
#define LCURLYBRACE_LAYER_6			ASCII_123_LAYER_6
#define LCURLYBRACE_LAYER_7			ASCII_123_LAYER_7
#define LCURLYBRACE_LAYER_8			ASCII_123_LAYER_8
#define LCURLYBRACE_LAYER_9			ASCII_123_LAYER_9
#define LCURLYBRACE_LAYER_10		ASCII_123_LAYER_10

//	124: |
// 
//	Credit: 

#define ASCII_124_LAYER_0		"      _     "
#define ASCII_124_LAYER_1		"     | |    "
#define ASCII_124_LAYER_2		"     | |    "
#define ASCII_124_LAYER_3		"     | |    "
#define ASCII_124_LAYER_4		"     | |    "
#define ASCII_124_LAYER_5		"     | |    "
#define ASCII_124_LAYER_6		"     | |    "
#define ASCII_124_LAYER_7		"     | |    "
#define ASCII_124_LAYER_8		"     | |    "
#define ASCII_124_LAYER_9		"     | |    "
#define ASCII_124_LAYER_10		"     |_|    "

#define VERTICALBAR_LAYER_0			ASCII_124_LAYER_0
#define VERTICALBAR_LAYER_1			ASCII_124_LAYER_1
#define VERTICALBAR_LAYER_2			ASCII_124_LAYER_2
#define VERTICALBAR_LAYER_3			ASCII_124_LAYER_3
#define VERTICALBAR_LAYER_4			ASCII_124_LAYER_4
#define VERTICALBAR_LAYER_5			ASCII_124_LAYER_5
#define VERTICALBAR_LAYER_6			ASCII_124_LAYER_6
#define VERTICALBAR_LAYER_7			ASCII_124_LAYER_7
#define VERTICALBAR_LAYER_8			ASCII_124_LAYER_8
#define VERTICALBAR_LAYER_9			ASCII_124_LAYER_9
#define VERTICALBAR_LAYER_10		ASCII_124_LAYER_10

//	125: }
// 
//	Credit: 

#define ASCII_125_LAYER_0		"    __      "
#define ASCII_125_LAYER_1		"   |__\\     "
#define ASCII_125_LAYER_2		"      \\\\    "
#define ASCII_125_LAYER_3		"       ||   "
#define ASCII_125_LAYER_4		"       ||   "
#define ASCII_125_LAYER_5		"        >>  "
#define ASCII_125_LAYER_6		"       ||   "
#define ASCII_125_LAYER_7		"       ||   "
#define ASCII_125_LAYER_8		"    __//    "
#define ASCII_125_LAYER_9		"   |__/     "
#define ASCII_125_LAYER_10		"            "

#define RCURLYBRACE_LAYER_0			ASCII_125_LAYER_0
#define RCURLYBRACE_LAYER_1			ASCII_125_LAYER_1
#define RCURLYBRACE_LAYER_2			ASCII_125_LAYER_2
#define RCURLYBRACE_LAYER_3			ASCII_125_LAYER_3
#define RCURLYBRACE_LAYER_4			ASCII_125_LAYER_4
#define RCURLYBRACE_LAYER_5			ASCII_125_LAYER_5
#define RCURLYBRACE_LAYER_6			ASCII_125_LAYER_6
#define RCURLYBRACE_LAYER_7			ASCII_125_LAYER_7
#define RCURLYBRACE_LAYER_8			ASCII_125_LAYER_8
#define RCURLYBRACE_LAYER_9			ASCII_125_LAYER_9
#define RCURLYBRACE_LAYER_10		ASCII_125_LAYER_10

//	126: ~
// 
//	Credit: 

#define ASCII_126_LAYER_0		"            "
#define ASCII_126_LAYER_1		"            "
#define ASCII_126_LAYER_2		"            "
#define ASCII_126_LAYER_3		"            "
#define ASCII_126_LAYER_4		"   ____  __ "
#define ASCII_126_LAYER_5		"  / /\\ \\/ / "
#define ASCII_126_LAYER_6		" /_/  \\__/  "
#define ASCII_126_LAYER_7		"            "
#define ASCII_126_LAYER_8		"            "
#define ASCII_126_LAYER_9		"            "
#define ASCII_126_LAYER_10		"            "

#define TILDE_LAYER_0			ASCII_126_LAYER_0
#define TILDE_LAYER_1			ASCII_126_LAYER_1
#define TILDE_LAYER_2			ASCII_126_LAYER_2
#define TILDE_LAYER_3			ASCII_126_LAYER_3
#define TILDE_LAYER_4			ASCII_126_LAYER_4
#define TILDE_LAYER_5			ASCII_126_LAYER_5
#define TILDE_LAYER_6			ASCII_126_LAYER_6
#define TILDE_LAYER_7			ASCII_126_LAYER_7
#define TILDE_LAYER_8			ASCII_126_LAYER_8
#define TILDE_LAYER_9			ASCII_126_LAYER_9
#define TILDE_LAYER_10			ASCII_126_LAYER_10

// 127: DEL

	// meh

// Extended ASCII codes next?