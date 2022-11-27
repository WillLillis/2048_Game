#include <windows.h>
#include "2048_Board.h"
#include <cmath>

int main()
{
	/*TFE_Game test_game;
	test_game.play_game();*/

	int len = 10;
	int val = 16384;
	int left_pad, right_pad;
	char color_arg = 'F';

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	SetConsoleTextAttribute(hConsole, 1);
	for (int j = 0; j < len; j++)
	{
		if (j == len / 2)
		{
			left_pad = (int)std::ceil((6.0 - (double)num_digits(val)) / 2.0);
			right_pad = (int)((6 - num_digits(val)) / 2);
			for (int i = 0; i < 7 + left_pad; i++)
			{
				printf("%c", 0xDB);
			}
			SetConsoleTextAttribute(hConsole, 7);
			printf("%d", val);
			SetConsoleTextAttribute(hConsole, 1);
			for (int i = 0; i < 7 + right_pad; i++)
			{
				printf("%c", 0xDB);
			}
		}
		else
		{
			for (int i = 0; i < len; i++)
			{
			
				printf("%c", 0xDB);
				printf("%c", 0xDB);
			}
		}
		
		printf("\n");
	}

	return 0;
}