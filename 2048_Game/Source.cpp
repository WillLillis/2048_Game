#include <windows.h>
#include "2048_Board.h"
#include <cmath>

int main()
{
	char throw_away;
	char game_select;
	set_fullscreen();
	printf("\033[?25l"); // hides the cursor

	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	SHORT screen_width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	const char* msg_1 = "Controls: WASD or Arrow Keys";
	const char* msg_2 = "R - Restart the game at any time";
	const char* msg_3 = "ESC - Exit the game at any time";
	const char* msg_4 = "Press any key to continue";

	while (true) {		
		system("cls");
		bigprintf("     2048!");
		printf("\n\n");
		for (uint_fast8_t i = 0; i < screen_width - strlen(msg_1); i++){
			printf(" ");
		}
		printf("%s\n\n", msg_1);
		for (uint_fast8_t i = 0; i < screen_width - strlen(msg_2); i++) {
			printf(" ");
		}
		printf("%s\n\n", msg_2);
		for (uint_fast8_t i = 0; i < screen_width - strlen(msg_3); i++) {
			printf(" ");
		}
		printf("%s\n\n", msg_3);
		for (uint_fast8_t i = 0; i < screen_width - strlen(msg_4); i++) {
			printf(" ");
		}
		printf("%s", msg_4);

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