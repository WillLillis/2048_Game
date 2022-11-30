#include <windows.h>
#include "2048_Board.h"
#include <cmath>

int main()
{
	set_fullscreen_for_realsies();

	printf("Loading...");
	Sleep(1000);
	system("cls");
	printf("Welcome to 2048!\nPress any key to continue\n");

	char throw_away = _getch();

	TFE_Game test_game;
	test_game.play_game();

	system("pause");

	return 0;
}
// TODO
	// Check potential issues with check_game_over()