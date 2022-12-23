#include <windows.h>
#include "2048_Board.h"
#include <cmath>

int main()
{
	char throw_away;
	char game_select;
	set_fullscreen();

	while (true) {		
		system("cls");
		printf("Welcome to 2048!\nPress any key to continue\n");

		throw_away = _getch();

		TFE_Game test_game;
		test_game.play_game();

		printf("Game Over!\nPress space to play again, or any other key to exit.\n");

		Sleep(1000);

		game_select = _getch();

		if (game_select == ' ') {
			continue;
		}
		else {
			break;
		}
	}
	

	return 0;
}
// TODO
	// Check potential issues with check_game_over()-> Resolved?
	// add alternates to windows specific calls so game works on MacOS?
	// drawing optimizations?