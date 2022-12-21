#pragma once
#include "2048_Square.h" // TFE_Square class
#include "Misc.h" // misc helper functions
#include <cstdio> // printf
#include <string.h> // needed for memset?
#include <cstdint> // uint_fastx_t types
#include <cstdlib> // ?
#include <ctime> // needed to seed rand()
#include <cassert>
#include <conio.h> // _getch()

// second key code put in buffer for each arrow key
#define LEFT_ARR_KEY	75
#define RIGHT_ARR_KEY	77
#define UP_ARR_KEY		72
#define DOWN_ARR_KEY	80

class TFE_Game{
public:
	uint_fast32_t score;
	const enum user_move : char
	{
		INVALID,
		EXIT,
		UP = 'W',
		DOWN = 'S',
		LEFT = 'A',
		RIGHT = 'D'
	};

	TFE_Game()
	{
		printf("\033[?25l"); // hides the cursor
		// set all squares to empty initially
		for (uint_fast8_t row = 0; row < 4; row++)
		{
			for (uint_fast8_t col = 0; col < 4; col++)
			{
				set_board_square(TFE_Square(), row, col);
			}
		}

		// randomly select a starting square, and whether to initialize it with a 2 or 4 
		srand((unsigned int)time(NULL));
		uint_fast8_t starting_square_row = rand() % 4;
		uint_fast8_t starting_square_col = rand() % 4;
		uint_fast8_t starting_val = rand() % 2;
		if (starting_val == 0)
		{
			set_board_square(TFE_Square(TFE_Square::square_val_t::A), starting_square_row, starting_square_col);
		}
		else
		{
			set_board_square(TFE_Square(TFE_Square::square_val_t::B), starting_square_row, starting_square_col);
		}
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		score = 0;
	}

	void modify_score(uint32_t val)
	{
		score += val;
	}

	void play_game()
	{
		char user_in_raw;
		TFE_Game::user_move user_in;
		bool game_over = false;
		uint_fast8_t next_row, next_col, next_val;
		TFE_Square past_state[4][4];
		bool change_state = false;

		while (!game_over)
		{
			draw_board(true);
			do {
				do { // user input
					user_in_raw = _getch();
					user_in = user_in_to_user_move(user_in_raw);
				} while (!is_valid_move(user_in));

				memcpy(past_state, board, sizeof(board)); // copy the previous state of the board

				make_move(user_in); // attempt to make the move

				change_state = false;
				for (uint_fast8_t row = 0; row < 4; row++) // check if the move actually changed anything
				{
					for (uint_fast8_t col = 0; col < 4; col++)
					{
						if (past_state[row][col].get_square_val() != get_board_square(row, col).get_square_val())
						{
							change_state = true;
							row = col = 4; // break out of the loop, could use a goto here but that's bad practice?
						}
					}
				}
			} while (!change_state);

			next_val = rand() % 2;
			do { // pick out the square to spawn the next piece (and make sure it's empty)
				next_row = rand() % 4;
				next_col = rand() % 4;
			} while (!get_board_square(next_row, next_col).is_empty());

			if (next_val == 0)
			{
				set_board_square(TFE_Square(TFE_Square::square_val_t::A), next_row, next_col);
			}
			else
			{
				set_board_square(TFE_Square(TFE_Square::square_val_t::B), next_row, next_col);
			}

			game_over = check_game_over();
		}

		draw_board(true);
	}

	bool check_game_over() const
	{
		// first check if there's any empty squares
		for (uint_fast8_t row = 0; row < 4; row++)
		{
			for (uint_fast8_t col = 0; col < 4; col++)
			{
				if (get_board_square(row, col).is_empty())
				{
					return false;
				}
			}
		}
		// if there aren't any empty squares, there must be two 
		// adjacent squares of equal value for the game to continue
		for (uint_fast8_t src_row = 0; src_row < 3; src_row++)
		{
			for (uint_fast8_t src_col = 0; src_col < 3; src_col++)
			{
				if (can_move_square_comb(src_row, src_col, src_row + 1, src_col)) // out of bound indices just get a returned false
				{
					return false;
				}
				else if (can_move_square_comb(src_row, src_col, src_row, src_col + 1)) // out of bound indices just get a returned false
				{
					return false;
				}
			}
		}
		
		return true;
	}

	void set_board_square(TFE_Square square_contents, uint_fast8_t row, uint_fast8_t col)
	{
		assert(row >= 0 && row < 4);
		assert(col >= 0 && col < 4);

		board[row][col] = square_contents;
	}

	TFE_Square get_board_square(uint_fast8_t row, uint_fast8_t col) const
	{
		assert(row >= 0 && row < 4);
		assert(col >= 0 && col < 4);

		return board[row][col];
	}


private:
	/*
	* _________________________
	* | 0,0 | 0,1 | 0,2 | 0,3 |
	* | 1,0 | 1,1 | 1,2 | 1,3 |
	* | 2,0 | 2,1 | 2,2 | 2,3 |
	* |_3,0_|_3,1_|_3,2_|_3,3_|
	* 
	*/
	TFE_Square board[4][4];
	HANDLE  hConsole;

	static TFE_Game::user_move user_in_to_user_move(char input)
	{
		// handle arrow key inputs...
		if (input == (char)0xE0)
		{
			switch (_getch()) {
			case UP_ARR_KEY:
				return TFE_Game::user_move::UP;
				break;
			case DOWN_ARR_KEY:
				return TFE_Game::user_move::DOWN;
				break;
			case RIGHT_ARR_KEY:
				return TFE_Game::user_move::RIGHT;
				break;
			case LEFT_ARR_KEY:
				return TFE_Game::user_move::LEFT;
				break;
			default:
				return TFE_Game::user_move::INVALID;
				break;
			}
		}

		// otherwise we'll assume WASD
		switch (input) {
		case 'w':
			return TFE_Game::user_move::UP;
			break;
		case 'W':
			return TFE_Game::user_move::UP;
			break;
		case 's':
			return TFE_Game::user_move::DOWN;
			break;
		case 'S':
			return TFE_Game::user_move::DOWN;
			break;
		case 'a':
			return TFE_Game::user_move::LEFT;
			break;
		case 'A':
			return TFE_Game::user_move::LEFT;
			break;
		case 'd':
			return TFE_Game::user_move::RIGHT;
			break;
		case 'D':
			return TFE_Game::user_move::RIGHT;
			break;
		case (char)27: // ESC key
			return TFE_Game::user_move::EXIT;
		default:
			return TFE_Game::user_move::INVALID;
			break;
		}
	}
	
	bool can_move_square_no_comb(uint_fast8_t src_row, uint_fast8_t src_col, uint_fast8_t dest_row, uint_fast8_t dest_col) const
	{
		if (!(src_row >= 0 && src_row <= 3))
		{
			return false;
		}
		if (!(src_col >= 0 && src_col <= 3))
		{
			return false;
		}
		if (!(dest_row >= 0 && dest_row <= 3))
		{
			return false;
		}
		if (!(dest_col >= 0 && dest_col <= 3))
		{
			return false;
		}

		if (get_board_square(dest_row, dest_col).is_empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool can_move_square_comb(uint_fast8_t src_row, uint_fast8_t src_col, uint_fast8_t dest_row, uint_fast8_t dest_col) const
	{
		if (!(src_row >= 0 && src_row <= 3))
		{
			return false;
		}
		if (!(src_col >= 0 && src_col <= 3))
		{
			return false;
		}
		if (!(dest_row >= 0 && dest_row <= 3))
		{
			return false;
		}
		if (!(dest_col >= 0 && dest_col <= 3))
		{
			return false;
		}

		if (get_board_square(dest_row, dest_col).get_square_val() == get_board_square(src_row, src_col).get_square_val())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void move_square(uint_fast8_t src_row, uint_fast8_t src_col, uint_fast8_t dest_row, uint_fast8_t dest_col)
	{
		if (get_board_square(dest_row, dest_col).is_empty())
		{
			set_board_square(get_board_square(src_row, src_col), dest_row, dest_col);
			set_board_square(TFE_Square(), src_row, src_col);
		}
		else if (get_board_square(dest_row, dest_col).get_square_val() == get_board_square(src_row, src_col).get_square_val())
		{
			TFE_Square next_square = TFE_Square::next_square(get_board_square(src_row, src_col));
			set_board_square(next_square, dest_row, dest_col);
			set_board_square(TFE_Square(), src_row, src_col);
		}
	}

	void make_move(TFE_Game::user_move move_in)
	{
		bool combined[4] = { false };
		bool need_comb = false;
		uint_fast8_t last_valid = 4;
		uint_fast32_t add_score = 0;

		switch (move_in) {
		case TFE_Game::user_move::UP:
			for (uint_fast8_t col = 0; col < 4; col++)
			{
				memset(combined, false, 4 * sizeof(bool));
				for (uint_fast8_t src_row = 1; src_row <= 3; src_row++)
				{
					last_valid = 4;
					need_comb = false;
					for (int_fast8_t dest_row = src_row - 1; dest_row >= 0; dest_row--)
					{
						if (!get_board_square(src_row, col).is_empty() &&
							can_move_square_no_comb(src_row, col, dest_row, col)) // if the square is empty it's free real estate
						{
							last_valid = dest_row;
							need_comb = false;
							continue;
						}
						else if (!get_board_square(src_row, col).is_empty() // if its occupied with an equal value square that hasn't been combined this turn
							&& !combined[dest_row] && can_move_square_comb(src_row, col, dest_row, col)) 
						{
							last_valid = dest_row;
							need_comb = true;
							add_score += (uint_fast32_t)TFE_Square::next_square(get_board_square(src_row, col).get_square_val()).get_square_val();
							break;
						}
						else // otherwise there isn't a move, and we can't go any higher
						{
							break;
						}
					}
					if (last_valid != 4) // if we found a valid move
					{
						combined[last_valid] = need_comb; // if a combination occurred, mark it
						move_square(src_row, col, last_valid, col); 
					}
				}
			}
			modify_score(add_score);
			break;
		case TFE_Game::user_move::DOWN:
			for (uint_fast8_t col = 0; col < 4; col++)
			{
				memset(combined, false, 4 * sizeof(bool));
				for (int_fast8_t src_row = 2; src_row >= 0; src_row--)
				{
					last_valid = 4;
					need_comb = false;
					for (int_fast8_t dest_row = src_row + 1; dest_row <= 3; dest_row++)
					{
						if (!get_board_square(src_row, col).is_empty() &&
							can_move_square_no_comb(src_row, col, dest_row, col)) // if the square is empty it's free real estate
						{
							last_valid = dest_row;
							need_comb = false;
							continue;
						}
						else if (!get_board_square(src_row, col).is_empty() // if its occupied with an equal value square that hasn't been combined this turn
							&& !combined[dest_row] && can_move_square_comb(src_row, col, dest_row, col)) 
						{
							last_valid = dest_row;
							need_comb = true;
							add_score += (uint_fast32_t)TFE_Square::next_square(get_board_square(src_row, col).get_square_val()).get_square_val();
							break;
						}
						else // otherwise there isn't a move, and we can't go any higher
						{
							break;
						}
					}
					if (last_valid != 4) // if we found a valid move
					{
						combined[last_valid] = need_comb; // if a combination occurred, mark it
						move_square(src_row, col, last_valid, col);
					}
				}
			}
			modify_score(add_score);
			break;
		case TFE_Game::user_move::LEFT:
			for (uint_fast8_t row = 0; row < 4; row++)
			{
				memset(combined, false, 4 * sizeof(bool));
				for (uint_fast8_t src_col = 1; src_col <= 3; src_col++)
				{
					last_valid = 4;
					need_comb = false;
					for (int_fast8_t dest_col = src_col - 1; dest_col >= 0; dest_col--)
					{
						if (!get_board_square(row, src_col).is_empty() &&
							can_move_square_no_comb(row, src_col, row, dest_col)) // if the square is empty it's free real estate
						{
							last_valid = dest_col;
							need_comb = false;
							continue;
						}
						else if (!get_board_square(row, src_col).is_empty() // if its occupied with an equal value square that hasn't been combined this turn
							&& !combined[dest_col] && can_move_square_comb(row, src_col, row, dest_col)) 
						{
							last_valid = dest_col;
							need_comb = true;
							add_score += (uint_fast32_t)TFE_Square::next_square(get_board_square(row, src_col).get_square_val()).get_square_val();
							break;
						}
						else // otherwise there isn't a move, and we can't go any higher
						{
							break;
						}
					}
					if (last_valid != 4) // if we found a valid move
					{
						combined[last_valid] = need_comb; // if a combination occurred, mark it
						move_square(row, src_col, row, last_valid);
					}
				}
			}
			modify_score(add_score);
			break;
		case TFE_Game::user_move::RIGHT:
			for (uint_fast8_t row = 0; row < 4; row++)
			{
				memset(combined, false, 4 * sizeof(bool));
				for (int_fast8_t src_col = 2; src_col >= 0; src_col--)
				{
					last_valid = 4;
					need_comb = false;
					for (uint_fast8_t dest_col = src_col + 1; dest_col <= 3; dest_col++)
					{
						if (!get_board_square(row, src_col).is_empty() &&
							can_move_square_no_comb(row, src_col, row, dest_col)) // if the square is empty it's free real estate
						{
							last_valid = dest_col;
							need_comb = false;
							continue;
						}
						else if (!get_board_square(row, src_col).is_empty() // if its occupied with an equal value square that hasn't been combined this turn
							&& !combined[dest_col] && can_move_square_comb(row, src_col, row, dest_col)) 
						{
							last_valid = dest_col;
							need_comb = true;
							add_score += (uint_fast32_t)TFE_Square::next_square(get_board_square(row, src_col).get_square_val()).get_square_val();
							break;
						}
						else // otherwise there isn't a move, and we can't go any higher
						{
							break;
						}
					}
					if (last_valid != 4) // if we found a valid move
					{
						combined[last_valid] = need_comb; // if a combination occurred, mark it
						move_square(row, src_col, row, last_valid);
					}
				}
			}
			modify_score(add_score);
			break;
		case TFE_Game::user_move::EXIT:
			exit(EXIT_SUCCESS); // cleaner way to do this?
		case TFE_Game::user_move::INVALID:
			return;
			break;
		default:
			return;
			break;
		}
	}

	bool is_valid_move(TFE_Game::user_move move_in) const
	{
		return move_in != TFE_Game::user_move::INVALID ? true : false;
	}

	// need to add checks to skip over redundant draws->might help with flickering effect
	void draw_board(bool include_score)
	{
		uint_fast8_t curr_color;
		uint_fast8_t left_pad, right_pad;
		// casts needed to supress warnings about truncating the values in the array below from type int to type char
		const char strip[] = {(char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, 
			(char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, 
			(char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, (char)0xDB, '\0'};

		clear_screen();

		for (uint_fast8_t row = 0; row < 4; row++)
		{
			for (uint_fast8_t layer = 0; layer < 9; layer++)
			{
				if (layer != 4)
				{
					for (uint_fast8_t col = 0; col < 4; col++)
					{
						curr_color = get_board_square(row, col).get_square_color();
						SetConsoleTextAttribute(hConsole, curr_color);
						printf("%s ", strip);
					}
				}
				else
				{
					for (uint_fast8_t col = 0; col < 4; col++)
					{
						left_pad = (uint_fast8_t)std::ceil((6.0 - (double)num_digits(get_board_square(row, col).get_square_val())) / 2.0);
						right_pad = (uint_fast8_t)((6 - num_digits(get_board_square(row, col).get_square_val())) / 2);
						curr_color = get_board_square(row, col).get_square_color();
						SetConsoleTextAttribute(hConsole, curr_color);
						for (int i = 0; i < 7 + left_pad; i++)
						{
							printf("%c", 0xDB);
						}
						SetConsoleTextAttribute(hConsole, 7);
						if (get_board_square(row, col).get_square_val() != 0)
						{
							printf("%d", get_board_square(row, col).get_square_val());
						}
						else
						{
							right_pad++;
						}
						SetConsoleTextAttribute(hConsole, curr_color);
						for (int i = 0; i < 7 + right_pad; i++)
						{
							printf("%c", 0xDB);
						}
						printf(" ");
					}
				}
				if (row == 3 && layer == 8 && include_score)
				{
					SetConsoleTextAttribute(hConsole, 15); // white text for score
					printf("Score: %u", score);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
};