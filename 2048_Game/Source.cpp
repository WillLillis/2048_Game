#include <windows.h>
#include "2048_Board.h"
#include <cmath>

int main()
{
	set_fullscreen_for_realsies();

	TFE_Game test_game;
	test_game.play_game();

	return 0;
}
// TODO
	// Check potential issues with check_game_over()