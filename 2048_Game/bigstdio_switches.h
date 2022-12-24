#pragma once
// Separate header file to hold the functions with the nasty 3000-ish line long nested switch statements to print/ return layers of big chars

#define	NUM_LAYERS	11 // still need this #define in here...

// - Struct to "wrap" the 13 char arrays in in order to return them from the 
// "getbigCharLayer" function, as C doesn't allow returning the arrays
// directly
typedef struct retWrapper {
	char layer[13];
}retWrapper;

/****************************************************************************
* retWrapperAssign
*
* - Assigns the contents of the char array passed in to the retWrapper's
* character array (layer)
*
* Parameters :
* - struct_in : the retWrapper struct to have the char array copied to
* - input : 13 char array (including null terminator) whose contents will be
* copied to the struct
*
* Returns :
* - none
****************************************************************************/
void retWrapperAssign(retWrapper* struct_in, const char input[13])
{
	assert(struct_in != NULL);

	for (int i = 0; i < 13; i++)
	{
		struct_in->layer[i] = input[i];
	}
}

/****************************************************************************
* getbigCharLayer
*
* - Returns a retWrapper struct whose layer data member is specified layer
* of the requested big character
* - Terrible, Horrible, No Good, Very Bad nested switch statement...is there
* a better way?
*
* Parameters :
* - in_char : the ASCII character whose "big char" the caller is requesting
*	- (for now) definitions only cover 32 (SPACE) to 126 (~), although it will
*	return an "empty" 13 char array (first character being \0) for chars 0-31,
*	rather than triggering the assert
*	- extended ASCII characters to be added at a later date
* - layer : the requested layer of in_char's "big char" representation
*
* Returns :
* - retWrapper : struct containing the requested char's "big char" layer
****************************************************************************/
retWrapper getbigCharLayer(char in_char, int layer)
{
	assert(in_char >= 0 && in_char <= 126);
	assert(layer >= 0 && layer < NUM_LAYERS);

	retWrapper wrapper;

	switch (in_char) {
	case 32:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_9);

		case 10:
			retWrapperAssign(&wrapper, ASCII_32_LAYER_10);
			break;
		}
		break;
	case 33:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_33_LAYER_10);
			break;
		}
		break;
	case 34:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_34_LAYER_10);
			break;
		}
		break;
	case 35:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_35_LAYER_10);
			break;
		}
		break;
	case 36:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_36_LAYER_10);
			break;
		}
		break;
	case 37:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_37_LAYER_10);
			break;
		}
		break;
	case 38:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_38_LAYER_10);
			break;
		}
		break;
	case 39:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_39_LAYER_10);
			break;
		}
		break;
	case 40:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_40_LAYER_10);
			break;
		}
		break;
	case 41:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_41_LAYER_10);
			break;
		}
		break;
	case 42:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_42_LAYER_10);
			break;
		}
		break;
	case 43:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_43_LAYER_10);
			break;
		}
		break;
	case 44:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_44_LAYER_10);
			break;
		}
		break;
	case 45:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_45_LAYER_10);
			break;
		}
		break;
	case 46:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_46_LAYER_10);
			break;
		}
		break;
	case 47:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_47_LAYER_10);
			break;
		}
		break;
	case 48:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_48_LAYER_10);
			break;
		}
		break;
	case 49:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_49_LAYER_10);
			break;
		}
		break;
	case 50:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_50_LAYER_10);
			break;
		}
		break;
	case 51:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_51_LAYER_10);
			break;
		}
		break;
	case 52:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_52_LAYER_10);
			break;
		}
		break;
	case 53:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_53_LAYER_10);
			break;
		}
		break;
	case 54:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_54_LAYER_10);
			break;
		}
		break;
	case 55:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_55_LAYER_10);
			break;
		}
		break;
	case 56:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_56_LAYER_10);
			break;
		}
		break;
	case 57:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_57_LAYER_10);
			break;
		}
		break;
	case 58:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_58_LAYER_10);
			break;
		}
		break;
	case 59:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_59_LAYER_10);
			break;
		}
		break;
	case 60:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_60_LAYER_10);
			break;
		}
		break;
	case 61:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_61_LAYER_10);
			break;
		}
		break;
	case 62:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_62_LAYER_10);
			break;
		}
		break;
	case 63:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_63_LAYER_10);
			break;
		}
		break;
	case 64:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_64_LAYER_10);
			break;
		}
		break;
	case 65:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_65_LAYER_10);
			break;
		}
		break;
	case 66:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_66_LAYER_10);
			break;
		}
		break;
	case 67:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_67_LAYER_10);
			break;
		}
		break;
	case 68:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_68_LAYER_10);
			break;
		}
		break;
	case 69:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_69_LAYER_10);
			break;
		}
		break;
	case 70:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_70_LAYER_10);
			break;
		}
		break;
	case 71:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_71_LAYER_10);
			break;
		}
		break;
	case 72:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_72_LAYER_10);
			break;
		}
		break;
	case 73:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_73_LAYER_10);
			break;
		}
		break;
	case 74:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_74_LAYER_10);
			break;
		}
		break;
	case 75:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_75_LAYER_10);
			break;
		}
		break;
	case 76:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_76_LAYER_10);
			break;
		}
		break;
	case 77:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_77_LAYER_10);
			break;
		}
		break;
	case 78:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_78_LAYER_10);
			break;
		}
		break;
	case 79:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_79_LAYER_10);
			break;
		}
		break;
	case 80:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_80_LAYER_10);
			break;
		}
		break;
	case 81:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_81_LAYER_10);
			break;
		}
		break;
	case 82:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_82_LAYER_10);
			break;
		}
		break;
	case 83:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_83_LAYER_10);
			break;
		}
		break;
	case 84:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_84_LAYER_10);
			break;
		}
		break;
	case 85:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_85_LAYER_10);
			break;
		}
		break;
	case 86:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_86_LAYER_10);
			break;
		}
		break;
	case 87:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_87_LAYER_10);
		}
		break;
	case 88:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_88_LAYER_10);
			break;
		}
		break;
	case 89:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_89_LAYER_10);
			break;
		}
		break;
	case 90:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_90_LAYER_10);
			break;
		}
		break;
	case 91:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_91_LAYER_10);
			break;
		}
		break;
	case 92:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_92_LAYER_10);
			break;
		}
		break;
	case 93:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_93_LAYER_10);
			break;
		}
		break;
	case 94:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_94_LAYER_10);
			break;
		}
		break;
	case 95:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_95_LAYER_10);
			break;
		}
		break;
	case 96:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_96_LAYER_10);
			break;
		}
		break;
	case 97:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_97_LAYER_10);
			break;
		}
		break;
	case 98:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_98_LAYER_10);
			break;
		}
		break;
	case 99:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_99_LAYER_10);
			break;
		}
		break;
	case 100:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_100_LAYER_10);
			break;
		}
		break;
	case 101:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_101_LAYER_10);
			break;
		}
		break;
	case 102:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_102_LAYER_10);
			break;
		}
		break;
	case 103:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_103_LAYER_10);
			break;
		}
		break;
	case 104:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_104_LAYER_10);
			break;
		}
		break;
	case 105:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_105_LAYER_10);
			break;
		}
		break;
	case 106:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_106_LAYER_10);
			break;
		}
		break;
	case 107:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_107_LAYER_10);
			break;
		}
		break;
	case 108:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_108_LAYER_10);
			break;
		}
		break;
	case 109:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_109_LAYER_10);
			break;
		}
		break;
	case 110:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_110_LAYER_10);
			break;
		}
		break;
	case 111:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_111_LAYER_10);
			break;
		}
		break;
	case 112:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_112_LAYER_10);
			break;
		}
		break;
	case 113:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_113_LAYER_10);
			break;
		}
		break;
	case 114:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_114_LAYER_10);
			break;
		}
		break;
	case 115:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_115_LAYER_10);
			break;
		}
		break;
	case 116:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_116_LAYER_10);
			break;
		}
		break;
	case 117:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_117_LAYER_10);
			break;
		}
		break;
	case 118:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_118_LAYER_10);
			break;
		}
		break;
	case 119:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_119_LAYER_10);
			break;
		}
		break;
	case 120:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_120_LAYER_10);
			break;
		}
		break;
	case 121:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_121_LAYER_10);
			break;
		}
		break;
	case 122:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_122_LAYER_10);
			break;
		}
		break;
	case 123:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_123_LAYER_10);
			break;
		}
		break;
	case 124:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_124_LAYER_10);
			break;
		}
		break;
	case 125:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_125_LAYER_10);
			break;
		}
		break;
	case 126:
		switch (layer) {
		case 0:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_0);
			break;
		case 1:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_1);
			break;
		case 2:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_2);
			break;
		case 3:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_3);
			break;
		case 4:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_4);
			break;
		case 5:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_5);
			break;
		case 6:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_6);
			break;
		case 7:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_7);
			break;
		case 8:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_8);
			break;
		case 9:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_9);
			break;
		case 10:
			retWrapperAssign(&wrapper, ASCII_126_LAYER_10);
			break;
		}
		break;
	default:
		retWrapperAssign(&wrapper, "\0            ");
		break;
	}

	return wrapper;
}

/****************************************************************************
* printbigCharLayer
*
* - prints the specified layer of the requested "big char" with a call to
* printf
* - Terrible, Horrible, No Good, Very Bad nested switch statement...is there
* a better way?
*
* Parameters :
* - in_char : the ASCII character whose "big char" the caller is requesting
*	- (for now) definitions only cover 32 (SPACE) to 126 (~), although it will
*	print nothing for chars 0-31, rather than triggering the assert
*	- extended ASCII characters to be added at a later date
* - layer : the requested layer of in_char's "big char" representation
*
* Returns :
* - none
****************************************************************************/
void printbigCharLayer(char in_char, int layer)
{
	assert(in_char >= 0 && in_char <= 126);
	assert(layer >= 0 && layer < NUM_LAYERS);

	switch (in_char) {
	case 32:
		switch (layer) {
		case 0:
			printf("%s", ASCII_32_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_32_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_32_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_32_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_32_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_32_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_32_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_32_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_32_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_32_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_32_LAYER_10);
			break;
		}
		break;
	case 33:
		switch (layer) {
		case 0:
			printf("%s", ASCII_33_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_33_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_33_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_33_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_33_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_33_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_33_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_33_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_33_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_33_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_33_LAYER_10);
			break;
		}
		break;
	case 34:
		switch (layer) {
		case 0:
			printf("%s", ASCII_34_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_34_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_34_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_34_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_34_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_34_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_34_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_34_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_34_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_34_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_34_LAYER_10);
			break;
		}
		break;
	case 35:
		switch (layer) {
		case 0:
			printf("%s", ASCII_35_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_35_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_35_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_35_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_35_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_35_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_35_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_35_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_35_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_35_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_35_LAYER_10);
			break;
		}
		break;
	case 36:
		switch (layer) {
		case 0:
			printf("%s", ASCII_36_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_36_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_36_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_36_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_36_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_36_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_36_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_36_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_36_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_36_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_36_LAYER_10);
			break;
		}
		break;
	case 37:
		switch (layer) {
		case 0:
			printf("%s", ASCII_37_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_37_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_37_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_37_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_37_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_37_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_37_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_37_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_37_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_37_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_37_LAYER_10);
			break;
		}
		break;
	case 38:
		switch (layer) {
		case 0:
			printf("%s", ASCII_38_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_38_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_38_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_38_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_38_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_38_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_38_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_38_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_38_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_38_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_38_LAYER_10);
			break;
		}
		break;
	case 39:
		switch (layer) {
		case 0:
			printf("%s", ASCII_39_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_39_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_39_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_39_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_39_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_39_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_39_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_39_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_39_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_39_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_39_LAYER_10);
			break;
		}
		break;
	case 40:
		switch (layer) {
		case 0:
			printf("%s", ASCII_40_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_40_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_40_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_40_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_40_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_40_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_40_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_40_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_40_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_40_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_40_LAYER_10);
			break;
		}
		break;
	case 41:
		switch (layer) {
		case 0:
			printf("%s", ASCII_41_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_41_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_41_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_41_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_41_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_41_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_41_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_41_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_41_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_41_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_41_LAYER_10);
			break;
		}
		break;
	case 42:
		switch (layer) {
		case 0:
			printf("%s", ASCII_42_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_42_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_42_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_42_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_42_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_42_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_42_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_42_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_42_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_42_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_42_LAYER_10);
			break;
		}
		break;
	case 43:
		switch (layer) {
		case 0:
			printf("%s", ASCII_43_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_43_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_43_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_43_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_43_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_43_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_43_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_43_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_43_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_43_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_43_LAYER_10);
			break;
		}
		break;
	case 44:
		switch (layer) {
		case 0:
			printf("%s", ASCII_44_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_44_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_44_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_44_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_44_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_44_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_44_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_44_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_44_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_44_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_44_LAYER_10);
			break;
		}
		break;
	case 45:
		switch (layer) {
		case 0:
			printf("%s", ASCII_45_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_45_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_45_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_45_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_45_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_45_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_45_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_45_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_45_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_45_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_45_LAYER_10);
			break;
		}
		break;
	case 46:
		switch (layer) {
		case 0:
			printf("%s", ASCII_46_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_46_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_46_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_46_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_46_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_46_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_46_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_46_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_46_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_46_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_46_LAYER_10);
			break;
		}
		break;
	case 47:
		switch (layer) {
		case 0:
			printf("%s", ASCII_47_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_47_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_47_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_47_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_47_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_47_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_47_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_47_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_47_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_47_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_47_LAYER_10);
			break;
		}
		break;
	case 48:
		switch (layer) {
		case 0:
			printf("%s", ASCII_48_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_48_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_48_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_48_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_48_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_48_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_48_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_48_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_48_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_48_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_48_LAYER_10);
			break;
		}
		break;
	case 49:
		switch (layer) {
		case 0:
			printf("%s", ASCII_49_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_49_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_49_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_49_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_49_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_49_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_49_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_49_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_49_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_49_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_49_LAYER_10);
			break;
		}
		break;
	case 50:
		switch (layer) {
		case 0:
			printf("%s", ASCII_50_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_50_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_50_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_50_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_50_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_50_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_50_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_50_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_50_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_50_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_50_LAYER_10);
			break;
		}
		break;
	case 51:
		switch (layer) {
		case 0:
			printf("%s", ASCII_51_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_51_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_51_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_51_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_51_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_51_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_51_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_51_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_51_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_51_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_51_LAYER_10);
			break;
		}
		break;
	case 52:
		switch (layer) {
		case 0:
			printf("%s", ASCII_52_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_52_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_52_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_52_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_52_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_52_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_52_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_52_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_52_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_52_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_52_LAYER_10);
			break;
		}
		break;
	case 53:
		switch (layer) {
		case 0:
			printf("%s", ASCII_53_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_53_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_53_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_53_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_53_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_53_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_53_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_53_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_53_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_53_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_53_LAYER_10);
			break;
		}
		break;
	case 54:
		switch (layer) {
		case 0:
			printf("%s", ASCII_54_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_54_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_54_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_54_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_54_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_54_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_54_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_54_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_54_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_54_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_54_LAYER_10);
			break;
		}
		break;
	case 55:
		switch (layer) {
		case 0:
			printf("%s", ASCII_55_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_55_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_55_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_55_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_55_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_55_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_55_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_55_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_55_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_55_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_55_LAYER_10);
			break;
		}
		break;
	case 56:
		switch (layer) {
		case 0:
			printf("%s", ASCII_56_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_56_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_56_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_56_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_56_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_56_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_56_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_56_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_56_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_56_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_56_LAYER_10);
			break;
		}
		break;
	case 57:
		switch (layer) {
		case 0:
			printf("%s", ASCII_57_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_57_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_57_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_57_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_57_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_57_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_57_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_57_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_57_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_57_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_57_LAYER_10);
			break;
		}
		break;
	case 58:
		switch (layer) {
		case 0:
			printf("%s", ASCII_58_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_58_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_58_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_58_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_58_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_58_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_58_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_58_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_58_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_58_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_58_LAYER_10);
			break;
		}
		break;
	case 59:
		switch (layer) {
		case 0:
			printf("%s", ASCII_59_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_59_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_59_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_59_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_59_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_59_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_59_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_59_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_59_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_59_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_59_LAYER_10);
			break;
		}
		break;
	case 60:
		switch (layer) {
		case 0:
			printf("%s", ASCII_60_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_60_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_60_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_60_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_60_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_60_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_60_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_60_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_60_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_60_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_60_LAYER_10);
			break;
		}
		break;
	case 61:
		switch (layer) {
		case 0:
			printf("%s", ASCII_61_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_61_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_61_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_61_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_61_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_61_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_61_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_61_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_61_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_61_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_61_LAYER_10);
			break;
		}
		break;
	case 62:
		switch (layer) {
		case 0:
			printf("%s", ASCII_62_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_62_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_62_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_62_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_62_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_62_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_62_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_62_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_62_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_62_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_62_LAYER_10);
			break;
		}
		break;
	case 63:
		switch (layer) {
		case 0:
			printf("%s", ASCII_63_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_63_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_63_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_63_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_63_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_63_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_63_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_63_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_63_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_63_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_63_LAYER_10);
			break;
		}
		break;
	case 64:
		switch (layer) {
		case 0:
			printf("%s", ASCII_64_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_64_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_64_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_64_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_64_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_64_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_64_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_64_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_64_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_64_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_64_LAYER_10);
			break;
		}
		break;
	case 65:
		switch (layer) {
		case 0:
			printf("%s", ASCII_65_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_65_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_65_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_65_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_65_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_65_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_65_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_65_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_65_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_65_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_65_LAYER_10);
			break;
		}
		break;
	case 66:
		switch (layer) {
		case 0:
			printf("%s", ASCII_66_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_66_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_66_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_66_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_66_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_66_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_66_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_66_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_66_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_66_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_66_LAYER_10);
			break;
		}
		break;
	case 67:
		switch (layer) {
		case 0:
			printf("%s", ASCII_67_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_67_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_67_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_67_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_67_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_67_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_67_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_67_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_67_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_67_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_67_LAYER_10);
			break;
		}
		break;
	case 68:
		switch (layer) {
		case 0:
			printf("%s", ASCII_68_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_68_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_68_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_68_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_68_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_68_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_68_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_68_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_68_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_68_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_68_LAYER_10);
			break;
		}
		break;
	case 69:
		switch (layer) {
		case 0:
			printf("%s", ASCII_69_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_69_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_69_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_69_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_69_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_69_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_69_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_69_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_69_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_69_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_69_LAYER_10);
			break;
		}
		break;
	case 70:
		switch (layer) {
		case 0:
			printf("%s", ASCII_70_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_70_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_70_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_70_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_70_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_70_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_70_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_70_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_70_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_70_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_70_LAYER_10);
			break;
		}
		break;
	case 71:
		switch (layer) {
		case 0:
			printf("%s", ASCII_71_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_71_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_71_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_71_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_71_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_71_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_71_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_71_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_71_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_71_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_71_LAYER_10);
			break;
		}
		break;
	case 72:
		switch (layer) {
		case 0:
			printf("%s", ASCII_72_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_72_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_72_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_72_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_72_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_72_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_72_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_72_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_72_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_72_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_72_LAYER_10);
			break;
		}
		break;
	case 73:
		switch (layer) {
		case 0:
			printf("%s", ASCII_73_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_73_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_73_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_73_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_73_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_73_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_73_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_73_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_73_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_73_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_73_LAYER_10);
			break;
		}
		break;
	case 74:
		switch (layer) {
		case 0:
			printf("%s", ASCII_74_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_74_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_74_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_74_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_74_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_74_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_74_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_74_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_74_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_74_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_74_LAYER_10);
			break;
		}
		break;
	case 75:
		switch (layer) {
		case 0:
			printf("%s", ASCII_75_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_75_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_75_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_75_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_75_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_75_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_75_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_75_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_75_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_75_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_75_LAYER_10);
			break;
		}
		break;
	case 76:
		switch (layer) {
		case 0:
			printf("%s", ASCII_76_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_76_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_76_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_76_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_76_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_76_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_76_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_76_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_76_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_76_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_76_LAYER_10);
			break;
		}
		break;
	case 77:
		switch (layer) {
		case 0:
			printf("%s", ASCII_77_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_77_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_77_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_77_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_77_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_77_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_77_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_77_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_77_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_77_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_77_LAYER_10);
			break;
		}
		break;
	case 78:
		switch (layer) {
		case 0:
			printf("%s", ASCII_78_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_78_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_78_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_78_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_78_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_78_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_78_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_78_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_78_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_78_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_78_LAYER_10);
			break;
		}
		break;
	case 79:
		switch (layer) {
		case 0:
			printf("%s", ASCII_79_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_79_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_79_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_79_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_79_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_79_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_79_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_79_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_79_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_79_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_79_LAYER_10);
			break;
		}
		break;
	case 80:
		switch (layer) {
		case 0:
			printf("%s", ASCII_80_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_80_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_80_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_80_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_80_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_80_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_80_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_80_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_80_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_80_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_80_LAYER_10);
			break;
		}
		break;
	case 81:
		switch (layer) {
		case 0:
			printf("%s", ASCII_81_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_81_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_81_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_81_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_81_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_81_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_81_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_81_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_81_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_81_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_81_LAYER_10);
			break;
		}
		break;
	case 82:
		switch (layer) {
		case 0:
			printf("%s", ASCII_82_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_82_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_82_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_82_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_82_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_82_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_82_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_82_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_82_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_82_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_82_LAYER_10);
			break;
		}
		break;
	case 83:
		switch (layer) {
		case 0:
			printf("%s", ASCII_83_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_83_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_83_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_83_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_83_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_83_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_83_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_83_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_83_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_83_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_83_LAYER_10);
			break;
		}
		break;
	case 84:
		switch (layer) {
		case 0:
			printf("%s", ASCII_84_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_84_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_84_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_84_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_84_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_84_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_84_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_84_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_84_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_84_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_84_LAYER_10);
			break;
		}
		break;
	case 85:
		switch (layer) {
		case 0:
			printf("%s", ASCII_85_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_85_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_85_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_85_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_85_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_85_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_85_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_85_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_85_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_85_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_85_LAYER_10);
			break;
		}
		break;
	case 86:
		switch (layer) {
		case 0:
			printf("%s", ASCII_86_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_86_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_86_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_86_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_86_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_86_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_86_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_86_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_86_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_86_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_86_LAYER_10);
			break;
		}
		break;
	case 87:
		switch (layer) {
		case 0:
			printf("%s", ASCII_87_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_87_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_87_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_87_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_87_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_87_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_87_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_87_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_87_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_87_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_87_LAYER_10);
			break;
		}
		break;
	case 88:
		switch (layer) {
		case 0:
			printf("%s", ASCII_88_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_88_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_88_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_88_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_88_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_88_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_88_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_88_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_88_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_88_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_88_LAYER_10);
			break;
		}
		break;
	case 89:
		switch (layer) {
		case 0:
			printf("%s", ASCII_89_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_89_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_89_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_89_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_89_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_89_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_89_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_89_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_89_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_89_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_89_LAYER_10);
			break;
		}
		break;
	case 90:
		switch (layer) {
		case 0:
			printf("%s", ASCII_90_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_90_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_90_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_90_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_90_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_90_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_90_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_90_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_90_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_90_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_90_LAYER_10);
			break;
		}
		break;
	case 91:
		switch (layer) {
		case 0:
			printf("%s", ASCII_91_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_91_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_91_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_91_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_91_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_91_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_91_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_91_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_91_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_91_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_91_LAYER_10);
			break;
		}
		break;
	case 92:
		switch (layer) {
		case 0:
			printf("%s", ASCII_92_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_92_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_92_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_92_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_92_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_92_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_92_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_92_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_92_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_92_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_92_LAYER_10);
			break;
		}
		break;
	case 93:
		switch (layer) {
		case 0:
			printf("%s", ASCII_93_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_93_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_93_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_93_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_93_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_93_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_93_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_93_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_93_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_93_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_93_LAYER_10);
			break;
		}
		break;
	case 94:
		switch (layer) {
		case 0:
			printf("%s", ASCII_94_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_94_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_94_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_94_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_94_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_94_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_94_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_94_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_94_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_94_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_94_LAYER_10);
			break;
		}
		break;
	case 95:
		switch (layer) {
		case 0:
			printf("%s", ASCII_95_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_95_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_95_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_95_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_95_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_95_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_95_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_95_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_95_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_95_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_95_LAYER_10);
			break;
		}
		break;
	case 96:
		switch (layer) {
		case 0:
			printf("%s", ASCII_96_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_96_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_96_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_96_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_96_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_96_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_96_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_96_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_96_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_96_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_96_LAYER_10);
			break;
		}
		break;
	case 97:
		switch (layer) {
		case 0:
			printf("%s", ASCII_97_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_97_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_97_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_97_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_97_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_97_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_97_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_97_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_97_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_97_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_97_LAYER_10);
			break;
		}
		break;
	case 98:
		switch (layer) {
		case 0:
			printf("%s", ASCII_98_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_98_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_98_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_98_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_98_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_98_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_98_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_98_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_98_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_98_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_98_LAYER_10);
			break;
		}
		break;
	case 99:
		switch (layer) {
		case 0:
			printf("%s", ASCII_99_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_99_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_99_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_99_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_99_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_99_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_99_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_99_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_99_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_99_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_99_LAYER_10);
			break;
		}
		break;
	case 100:
		switch (layer) {
		case 0:
			printf("%s", ASCII_100_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_100_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_100_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_100_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_100_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_100_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_100_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_100_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_100_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_100_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_100_LAYER_10);
			break;
		}
		break;
	case 101:
		switch (layer) {
		case 0:
			printf("%s", ASCII_101_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_101_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_101_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_101_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_101_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_101_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_101_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_101_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_101_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_101_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_101_LAYER_10);
			break;
		}
		break;
	case 102:
		switch (layer) {
		case 0:
			printf("%s", ASCII_102_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_102_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_102_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_102_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_102_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_102_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_102_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_102_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_102_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_102_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_102_LAYER_10);
			break;
		}
		break;
	case 103:
		switch (layer) {
		case 0:
			printf("%s", ASCII_103_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_103_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_103_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_103_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_103_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_103_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_103_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_103_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_103_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_103_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_103_LAYER_10);
			break;
		}
		break;
	case 104:
		switch (layer) {
		case 0:
			printf("%s", ASCII_104_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_104_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_104_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_104_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_104_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_104_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_104_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_104_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_104_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_104_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_104_LAYER_10);
			break;
		}
		break;
	case 105:
		switch (layer) {
		case 0:
			printf("%s", ASCII_105_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_105_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_105_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_105_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_105_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_105_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_105_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_105_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_105_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_105_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_105_LAYER_10);
			break;
		}
		break;
	case 106:
		switch (layer) {
		case 0:
			printf("%s", ASCII_106_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_106_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_106_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_106_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_106_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_106_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_106_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_106_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_106_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_106_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_106_LAYER_10);
			break;
		}
		break;
	case 107:
		switch (layer) {
		case 0:
			printf("%s", ASCII_107_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_107_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_107_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_107_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_107_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_107_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_107_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_107_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_107_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_107_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_107_LAYER_10);
			break;
		}
		break;
	case 108:
		switch (layer) {
		case 0:
			printf("%s", ASCII_108_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_108_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_108_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_108_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_108_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_108_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_108_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_108_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_108_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_108_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_108_LAYER_10);
			break;
		}
		break;
	case 109:
		switch (layer) {
		case 0:
			printf("%s", ASCII_109_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_109_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_109_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_109_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_109_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_109_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_109_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_109_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_109_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_109_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_109_LAYER_10);
			break;
		}
		break;
	case 110:
		switch (layer) {
		case 0:
			printf("%s", ASCII_110_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_110_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_110_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_110_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_110_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_110_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_110_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_110_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_110_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_110_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_110_LAYER_10);
			break;
		}
		break;
	case 111:
		switch (layer) {
		case 0:
			printf("%s", ASCII_111_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_111_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_111_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_111_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_111_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_111_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_111_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_111_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_111_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_111_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_111_LAYER_10);
			break;
		}
		break;
	case 112:
		switch (layer) {
		case 0:
			printf("%s", ASCII_112_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_112_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_112_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_112_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_112_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_112_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_112_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_112_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_112_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_112_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_112_LAYER_10);
			break;
		}
		break;
	case 113:
		switch (layer) {
		case 0:
			printf("%s", ASCII_113_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_113_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_113_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_113_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_113_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_113_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_113_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_113_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_113_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_113_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_113_LAYER_10);
			break;
		}
		break;
	case 114:
		switch (layer) {
		case 0:
			printf("%s", ASCII_114_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_114_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_114_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_114_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_114_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_114_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_114_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_114_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_114_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_114_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_114_LAYER_10);
			break;
		}
		break;
	case 115:
		switch (layer) {
		case 0:
			printf("%s", ASCII_115_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_115_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_115_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_115_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_115_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_115_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_115_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_115_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_115_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_115_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_115_LAYER_10);
			break;
		}
		break;
	case 116:
		switch (layer) {
		case 0:
			printf("%s", ASCII_116_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_116_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_116_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_116_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_116_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_116_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_116_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_116_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_116_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_116_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_116_LAYER_10);
			break;
		}
		break;
	case 117:
		switch (layer) {
		case 0:
			printf("%s", ASCII_117_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_117_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_117_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_117_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_117_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_117_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_117_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_117_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_117_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_117_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_117_LAYER_10);
			break;
		}
		break;
	case 118:
		switch (layer) {
		case 0:
			printf("%s", ASCII_118_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_118_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_118_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_118_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_118_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_118_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_118_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_118_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_118_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_118_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_118_LAYER_10);
			break;
		}
		break;
	case 119:
		switch (layer) {
		case 0:
			printf("%s", ASCII_119_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_119_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_119_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_119_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_119_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_119_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_119_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_119_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_119_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_119_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_119_LAYER_10);
			break;
		}
		break;
	case 120:
		switch (layer) {
		case 0:
			printf("%s", ASCII_120_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_120_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_120_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_120_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_120_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_120_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_120_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_120_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_120_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_120_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_120_LAYER_10);
			break;
		}
		break;
	case 121:
		switch (layer) {
		case 0:
			printf("%s", ASCII_121_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_121_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_121_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_121_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_121_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_121_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_121_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_121_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_121_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_121_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_121_LAYER_10);
			break;
		}
		break;
	case 122:
		switch (layer) {
		case 0:
			printf("%s", ASCII_122_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_122_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_122_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_122_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_122_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_122_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_122_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_122_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_122_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_122_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_122_LAYER_10);
			break;
		}
		break;
	case 123:
		switch (layer) {
		case 0:
			printf("%s", ASCII_123_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_123_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_123_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_123_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_123_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_123_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_123_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_123_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_123_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_123_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_123_LAYER_10);
			break;
		}
		break;
	case 124:
		switch (layer) {
		case 0:
			printf("%s", ASCII_124_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_124_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_124_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_124_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_124_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_124_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_124_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_124_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_124_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_124_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_124_LAYER_10);
			break;
		}
		break;
	case 125:
		switch (layer) {
		case 0:
			printf("%s", ASCII_125_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_125_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_125_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_125_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_125_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_125_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_125_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_125_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_125_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_125_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_125_LAYER_10);
			break;
		}
		break;
	case 126:
		switch (layer) {
		case 0:
			printf("%s", ASCII_126_LAYER_0);
			break;
		case 1:
			printf("%s", ASCII_126_LAYER_1);
			break;
		case 2:
			printf("%s", ASCII_126_LAYER_2);
			break;
		case 3:
			printf("%s", ASCII_126_LAYER_3);
			break;
		case 4:
			printf("%s", ASCII_126_LAYER_4);
			break;
		case 5:
			printf("%s", ASCII_126_LAYER_5);
			break;
		case 6:
			printf("%s", ASCII_126_LAYER_6);
			break;
		case 7:
			printf("%s", ASCII_126_LAYER_7);
			break;
		case 8:
			printf("%s", ASCII_126_LAYER_8);
			break;
		case 9:
			printf("%s", ASCII_126_LAYER_9);
			break;
		case 10:
			printf("%s", ASCII_126_LAYER_10);
			break;
		}
	default: // default is to print nothing
		break;

		// add cases for extended ASCII chars?
	}
}
