#pragma once
#include<stdio.h>
#include<stdarg.h>
#include<malloc.h>
#include<assert.h>
#include<stdbool.h>
#include"BigCharsDef.h"
#include"bigstdio_switches.h"

//#define	NUM_LAYERS			11 // defined in bigstdio_switch.h, don't want this in two places
#define CHARS_PER_LAYER		12
#define MAX_CHARS			65535 // completely arbitrary
#define CHARS_PER_BIG_CHAR	132 // 11 lines times 12 chars per line

// lil helper function guy 
inline size_t fmin(size_t a, size_t b)
{
	return a < b ? a : b;
}

// lil helper function guy 
inline size_t fmax(size_t a, size_t b)
{
	return a > b ? a : b;
}

/****************************************************************************
* printbigCharLine
*
* - prints the the "big char" representation of the buffer passed in, from 
* the address "buffer" to address buffer + (offset - 1)
* - should only be called to print a single line of big chars
* 
* - Should I add error checking based off of the return value of the printf
* call in printbigCharLayer?
*
* Parameters :
* - buffer : the char buffer of normal chars to be translated to "big chars",
* buffer specifies the starting address of the buffer
* - offset : specifies how far to go past the buffer address. As each char is
* one byte, this also specifies how many chars we're printing
*
* Returns :
* - none
****************************************************************************/
void printbigCharLine(char* buffer, size_t offset)
{
	assert(buffer != NULL);

	for (int layer = 0; layer < NUM_LAYERS; layer++) // for every layer...
	{
		for (unsigned long curr_char = 0; curr_char < offset; curr_char++) // print the corresponding big char "slice" of each char in the buffer
		{
			printbigCharLayer(buffer[curr_char], layer);
		}
		printf("\n");
	}
}

/****************************************************************************
* bigcharsperbuffer
*
* - takes in a size (in bytes) and returns the number of big chars that could
* be stored in that space,
* - assumes there's a trailing newline or null terminator character at the
* end of the last layer
* - only correct if passed in a single line buffer (to be used by printline
* functions only)
*
* Parameters :
* - buff_size : the size in question
*
* Returns :
* - unsigned long : the number of big chars (in a single big char line) that
* could be stored in a buffer of buff_size size
****************************************************************************/
unsigned long bigcharsperbuffer(size_t buff_size)
{
	if (buff_size < 11) // edge case, seems best to handle it explicitly
	{
		return 0;
	}
	// think this is correct now, but not 100% certain 
	buff_size -= (size_t)11; // take newline characters at the end of each layer into account

	return buff_size / CHARS_PER_BIG_CHAR; // then see how many big chars fit in the remaining space
}

/****************************************************************************
* fprintbigCharLine
*
* - prints the the "big char" representation of the buffer passed in to the
* specified FILE stream, from the address "buffer" to address 
* buffer + (offset - 1)
* - should only be called to print a single line of big chars
* 
* - Should I add error checking based off of the return value of fprintf?
*
* Parameters :
* - stream : the FILE stream to print the big chars to
* - buffer : the char buffer of normal chars to be translated to "big chars",
* buffer specifies the starting address of the buffer
* - offset : specifies how far to go past the buffer address. As each char is
* one byte, this also specifies how many chars we're printing
*
* Returns :
* - none
****************************************************************************/
void fprintbigCharLine(FILE* stream, char* buffer, size_t offset)
{
	assert(stream != NULL);
	assert(buffer != NULL);

	for (int layer = 0; layer < NUM_LAYERS; layer++) // for every layer...
	{
		for (unsigned long curr_char = 0; curr_char < offset; curr_char++)
		{
			fprintf(stream, "%s", getbigCharLayer(buffer[curr_char], layer).layer); // print the corresponding big char "slice" of each char in the buffer
		}
		fprintf(stream, "\n");
	}
}

/****************************************************************************
* snprintbigCharLine
*
* - prints the the "big char" representation of the buffer passed in to the
* specified buffer. 
* - function will determine if all of the big chars can be fit in dest_buff,
* based off of dest_buff_size
*	- If there is insufficient space, the function will print as many chars 
*	as it can while avoiding partially printing a character 
* - should only be called to print a single line of big chars to a buffer
*
* Parameters :
* - dest_buff : pointer to the address where big chars will begin to be stored 
* - dest_buff_size : the size of dest_buff in bytes
* - src_buff : the starting address of normal chars from which the routine will
* translate big chars from to store in dest_buff
* - offset : specifies how far to go past the src_buff address. As each char is
* one byte, this also specifies how many chars we're printing
* - trailing_newline : specifies whether a newline character should be placed 
* at the end of the buffer (after the last layer of the last big char)
* - overrun_flag : boolean passed in by reference, indicates to the caller if
* dest_buff had insufficient space to store the big char representation of the 
* supplied src_buff inside of dest_buff
*
* Returns :
* - size_t : returns the number of regular chars copied to dest_buff
****************************************************************************/
size_t snprintbigCharLine(char* dest_buff, size_t dest_buff_size, char* src_buff, size_t offset, bool trailing_newline, bool* overrun_flag)
{
	assert(dest_buff != NULL);
	assert(src_buff != NULL);

	if (bigcharsperbuffer(dest_buff_size) < offset - 1) // if there's not enough space in the destination buffer, just print what characters we can
	{
		size_t temp_offset = bigcharsperbuffer(dest_buff_size);
		if (temp_offset == 0)
		{
			offset = temp_offset;
		}
		else
		{
			offset = temp_offset - 1; 
		}
		assert(overrun_flag != NULL);
		*overrun_flag = true; // if we don't have enough space, better tell the caller
	}

	retWrapper layer_temp;
	size_t dest_buff_index = 0;

	for (int curr_layer = 0; curr_layer < NUM_LAYERS; curr_layer++) // for each layer in the big char line
	{
		for (size_t curr_offset = 0; curr_offset < offset; curr_offset++) // for all of the characters in the source buffer
		{
			layer_temp = getbigCharLayer(src_buff[curr_offset], curr_layer); // grab the current char's current layer
			for (unsigned int i = 0; i < CHARS_PER_LAYER; i++) // assign the characters one by one to the destination buffer
			{
				dest_buff[dest_buff_index++] = layer_temp.layer[i]; // should I make this a function call? Seems reusable
			}
		}
		if ((curr_layer < NUM_LAYERS - 1) || trailing_newline) // if it's not the last layer, or if it is and we want a newline at the end
		{
			dest_buff[dest_buff_index++] = '\n';
		}
	}
	return dest_buff_index; // number of regular chars copied to dest_buff
}

/****************************************************************************
* FmtStrtoNumChars
*
* - takes in a printf/fprintf-style format string (and its variable number of 
* optional arguments) and returns the number of bytes required to store the 
* resulting string, had it been printed (including the null terminator)
* 
* Could play around a bit with the common and max buff_size's to optimize things
*
* Parameters :
* - format : printf-style const char format string
* - args : va_list giving the routine access to the variable optional arguments
* specified by the contents of the format string
*
* Returns :
* - size_t : the number of number of bytes required to store the 
* resulting string, had it been printed (including the null terminator)
****************************************************************************/
size_t FmtStrtoNumChars(const char* format, va_list args)
{
	assert(format != NULL); // is this actually needed/ helpful?

	const size_t common_buff_size = 256;
	const size_t max_buff_size = MAX_CHARS + 1; // make this way bigger?
	va_list argptr = args; // need an extra copy of args, since using a va_list modifies it

	char* buffer = (char*)malloc(common_buff_size); 
	assert(buffer != NULL);
	size_t actual_buff_size = vsnprintf(buffer, common_buff_size, format, args);
	free(buffer);

	if (actual_buff_size >= 0 && actual_buff_size <= common_buff_size) // if it fits within the common_buff_size...
	{
		return actual_buff_size + 1; // + 1 for null terminator
	}
	else // ...otherwise try going bigger
	{
		buffer = (char*)malloc(max_buff_size); // no need to do * sizeof(char) because that's just one byte
		assert(buffer != NULL);
		actual_buff_size = vsnprintf(buffer, max_buff_size, format, argptr);
		free(buffer);

		if (actual_buff_size >= 0) // might truncate, but that's ok
		{
			return actual_buff_size + 1; // + 1 for null terminator
		}
		else
		{
			return 0; // encoding error returned from snprintf, we just won't print in that case
		}
	}
}

/****************************************************************************
* buff_to_big_buff_size
*
* - takes in a buffer of regular chars, and retuns the required size for a 
* buffer to store the big char representation of the original buffer
* - only checks through first MAX_CHARS chars of the source buffer, in order 
* to mitigate against some stupid inputs without null terminators
* 
*- what are some other security measures that could be taken here?
*
* Parameters :
* - src_buff : address of the input buffer of regular chars
*
* Returns :
* - size_t : size in bytes for a buffer to store the big char representation 
* of the original buffer
****************************************************************************/
size_t buff_to_big_buff_size(const char* src_buff)
{
	assert(src_buff != NULL);

	unsigned long curr_char = 0;
	unsigned long num_lines = 1;
	size_t accum = 0;

	while (src_buff[curr_char] != '\0' && curr_char < MAX_CHARS)
	{
		if (src_buff[curr_char] == '\n') // newline chars need to be treated a little differently...
		{
			num_lines++;
		}
		else // ...otherwise we'll assume it's a printable character, and thus needs CHARS_PER_BIG_CHAR bytes of space
		{
			accum += CHARS_PER_BIG_CHAR;
		}
		curr_char++;
	}

	accum += (size_t)num_lines * (size_t)NUM_LAYERS; // a big char newline means 11 new line characters (one for each layer)
	
	return accum; 
}

/****************************************************************************
* format_str_to_buff_size
*
* - takes in a printf/fprintf-style format string (and its variable number of 
* optional arguments) and returns the number of bytes required to store the 
* big char representation of the resulting string, had it been printed 
* (including the null terminator)
*
* Parameters :
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be 
* passed in depending on the contents of format
*
* Returns :
* - size_t : size in bytes for a buffer to store the big char representation
* of the string specified by format and its zero or more optional arguments
****************************************************************************/
size_t format_str_to_buff_size(const char* format, ...)
{
	assert(format != NULL); // is this actually needed/ helpful?

	va_list argptr;

	va_start(argptr, format);
	size_t temp_buff_size = FmtStrtoNumChars(format, argptr);
	va_end(argptr);
	if (temp_buff_size == 0) // encoding error, we won't print
	{
		return 0;
	}

	char* temp_buff = (char*)malloc(temp_buff_size);
	assert(temp_buff != NULL);

	va_start(argptr, format);
	vsnprintf(temp_buff, temp_buff_size, format, argptr);
	va_end(argptr);

	size_t big_buff_size = buff_to_big_buff_size(temp_buff);

	if (temp_buff != NULL) // is this needed since we already assert'd above?
	{
		free(temp_buff);
	}

	return big_buff_size;
}

/****************************************************************************
* bigprintf
*
* - takes in a printf/fprintf-style format string (and its variable number of
* optional arguments) and prints the big char representation of the resulting
* string
* 
* - Do we want to add automatic window resizing based off of the width of the
* printed big chars?
*
* Parameters
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be
* passed in depending on the contents of format
*
* Returns
* - int : matching the style of normal printf, this will return the number of 
* big chars printed
*	- in the case of an error, a negative number will be returned
****************************************************************************/
int bigprintf(const char* format, ...)
{
	assert(format != NULL); // is this actually needed/ helpful?

	va_list argptr; 

	va_start(argptr, format); // argptr should now point to first unnamed argument (and not format?)
	size_t buff_size = FmtStrtoNumChars(format, argptr);
	va_end(argptr);
	if (buff_size == 0) // encoding error, we won't print
	{
		return -1;
	}
	char* buffer = (char*)malloc(buff_size); // no need to do * sizeof(char) because that's just one byte
	assert(buffer != NULL);
	char* work_buffer = buffer; // want to preserver buffer's original address so we can free it later, work_buffer will be incremented as we iterate through the buffer

	va_start(argptr, format); // do we need to restart the argument list thingy?
	vsnprintf(buffer, buff_size, format, argptr); // might want to eliminate this call but we'll optimize later
	// could eliminate call by having function pass out pointer to buffer by reference, return size of it
	// we can optimize later
	va_end(argptr);

	size_t offset = 0;
	char stop_char = 2; // 2 is Start of text (STX) character, starting value doesn't really matter, just can't be '\0'

	// iterate through buffer until a newline or null terminator char is found, 
	// pass the starting point and the number of chars to go out past that to printbigCharLine
	while (stop_char != '\0')
	{	
		if (work_buffer[offset] == '\n' || work_buffer[offset] == '\0')
		{
			stop_char = work_buffer[offset];
			printbigCharLine(work_buffer, offset); // print all the chars from current char pointed to by buffer to buffer[offset]
			work_buffer += offset + (size_t)1; // set the starting point for the next line, we won't access this address if we reached the null terminator so incrementing this too much by 1 shouldn't be an issue
			offset = 0;
			continue;
		}
		offset++;
	}

	if (buffer != NULL) // still checking even tho we assert'd up above
	{
		free(buffer);
	}
	
	return (int)(buff_size - 1); // printed everything but the null terminator
}

/****************************************************************************
* bigfprintf
*
* - takes in a printf/fprintf-style format string (and its variable number of
* optional arguments) and prints the big char representation of the resulting
* string to the specified FILE stream
*
* - Do we want to add error checking based off of the calls to fprintf in 
* fprintbigCharLine?
*
* Parameters
* - stream : the FILE stream to print the big chars to
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be
* passed in depending on the contents of format
*
* Returns
* - int : matching the style of normal fprintf, this will return the number of
* big chars printed
*	- in the case of an error, a negative number will be returned
****************************************************************************/
int bigfprintf(FILE* stream, const char* format, ...)
{
	assert(stream != NULL);
	assert(format != NULL); // is this actually needed/ helpful?
	
	va_list argptr;

	va_start(argptr, format); // argptr should now point to first unnamed argument (and not format?)
	size_t buff_size = FmtStrtoNumChars(format, argptr);
	va_end(argptr);
	if (buff_size == 0) // encoding error, we won't print
	{
		return -1;
	}
	char* buffer = (char*)malloc(buff_size); // no need to do * sizeof(char) because that's just one byte
	assert(buffer != NULL);
	char* work_buffer = buffer; // want to preserver buffer's original address so we can free it later, work_buffer will be incremented as we iterate through the buffer

	va_start(argptr, format); // do we need to restart the argument list thingy?
	vsnprintf(buffer, buff_size, format, argptr); // might want to eliminate this call but we'll optimize later
	// could eliminate call by having function pass out pointer to buffer by reference, return size of it
	// we can optimize later
	va_end(argptr);

	size_t offset = 0;
	char stop_char = 2; // 2 is Start of text (STX) character, starting value doesn't really matter, just can't be '\0'

	// iterate through buffer until a newline or null terminator char is found, 
	// pass the starting point and the number of chars to go out past that to printbigCharLine
	while (stop_char != '\0')
	{
		if (work_buffer[offset] == '\n' || work_buffer[offset] == '\0')
		{
			stop_char = work_buffer[offset];
			fprintbigCharLine(stream, work_buffer, offset);
			work_buffer += offset + (size_t)1; // set the starting point for the next line, we won't access this address if we reached the null terminator so incrementing this too much by 1 shouldn't be an issue
			offset = 0;
			continue;
		}
		offset++;
	}

	if (buffer != NULL) // still checking even tho we assert'd up above
	{
		free(buffer);
	}

	return (int)(buff_size - 1); // printed everything but the null terminator
}

/****************************************************************************
* bigsnprintf
*
* - takes in a printf/fprintf-style format string (and its variable number of
* optional arguments) and prints the big char representation of the resulting
* string to the specified buffer, within the size constraints given by 
* dest_buff_size
*
* - Do we want to add error checking based off of the calls to fprintf in
* snprintbigCharLine?
*
* Parameters
* - dest_buff : address of the start of the buffer to print the big chars to
* - dest_buff_size : size in bytes of dest_buff
* - format : printf style format string
* - ... (additional arguments) : variable number of optional arguments to be
* passed in depending on the contents of format
*
* Returns
* - int : matching the style of normal snprintf, this will return the number of
* big chars printed
*	- in the case of an error, a negative number will be returned
****************************************************************************/
int bigsnprintf(char* dest_buff, size_t dest_buff_size, const char* format, ...)
{
	assert(dest_buff != NULL);
	assert(format != NULL); // is this actually needed/ helpful?

	va_list argptr;

	va_start(argptr, format); // argptr should now point to first unnamed argument (and not format?)
	size_t buff_size = FmtStrtoNumChars(format, argptr); 
	va_end(argptr);
	if (buff_size == 0) // encoding error, we won't print
	{
		return -1;
	}

	char* buffer = (char*)malloc(buff_size); // no need to do * sizeof(char) because that's just one byte
	assert(buffer != NULL);
	char* work_buffer = buffer; // want to preserver buffer's original address so we can free it later, work_buffer will be incremented as we iterate through the buffer

	va_start(argptr, format); // do we need to restart the argument list thingy?
	vsnprintf(buffer, buff_size, format, argptr); // might want to eliminate this call but we'll optimize later
	// could eliminate call by having function pass out pointer to buffer by reference, return size of it
	// we can optimize later
	va_end(argptr);

	size_t offset = 0;
	char stop_char = (char)2; // 2 is Start of text (STX) character, starting value doesn't really matter, just can't be '\0'
	size_t chars_placed;
	int total_chars = 0;
	bool overrun_flag = false;

	// iterate through buffer until a newline or null terminator char is found, 
	// pass the starting point and the number of chars to go out past that to printbigCharLine
	while (stop_char != '\0' && !overrun_flag)
	{
		if (work_buffer[offset] == '\n' || work_buffer[offset] == '\0')
		{ // could use some more stringent testing here...
			stop_char = work_buffer[offset];
			chars_placed = snprintbigCharLine(dest_buff, dest_buff_size, work_buffer, offset, stop_char == '\n', &overrun_flag);
			work_buffer += offset + (size_t)1; // set the starting point for the next line, we won't access this address if we reached the null terminator so incrementing this too much by 1 shouldn't be an issue
			dest_buff += chars_placed; // have to update where we are in dest_buff 
			dest_buff_size -= chars_placed; // as well as how much space is still in there...
			if (stop_char == '\n')
			{
				total_chars += (chars_placed - 11) / CHARS_PER_BIG_CHAR; // not counting the newline chars placed at the end of the big char line
				total_chars++; // still need to count the big newline character that was printed
			}
			else
			{
				total_chars += (chars_placed - 10) / CHARS_PER_BIG_CHAR; // same thing, but there isn't a newline at the end, space left for null terminator
			}
			offset = 0;
			continue;
		}
		offset++;
	}

	*dest_buff = '\0'; // place null terminator at next available spot

	if (buffer != NULL) // still checking even tho we assert'd up above
	{
		free(buffer);
	}

	return total_chars; // printed everything but the null terminator
}
