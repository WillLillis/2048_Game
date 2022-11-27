#pragma once
#include "2048_Square.h"
#include "Misc.h"
#include <cstdio>
#include <string.h> // needed for memset?
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <cctype>
#include <conio.h>

class TFE_Game{
public:

	const enum user_move : char
	{
		INVALID,
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
		
	}

	void play_game()
	{
		char user_in_raw;
		TFE_Game::user_move user_in;
		bool game_over = false;
		uint_fast8_t next_row, next_col, next_val;

		while (!game_over)
		{
			draw_board();
			do { // user input
				user_in_raw = _toupper(_getch());
				user_in = user_in_to_user_move(user_in_raw);
			} while (!is_valid_move(user_in));

			make_move(user_in);

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
					return true;
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
					return true;
				}
				else if (can_move_square_comb(src_row, src_col, src_row, src_col + 1)) // out of bound indices just get a returned false
				{
					return true;
				}
			}
		}
		
		return false;
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

	static TFE_Game::user_move user_in_to_user_move(char input)
	{
		input = _toupper(input);

		switch (input) {
		case 'W':
			return TFE_Game::user_move::UP;
			break;
		case 'S':
			return TFE_Game::user_move::DOWN;
			break;
		case 'A':
			return TFE_Game::user_move::LEFT;
			break;
		case 'D':
			return TFE_Game::user_move::RIGHT;
			break;
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
						if (can_move_square_no_comb(src_row, col, dest_row, col)) // if the square is empty it's free real estate
						{
							last_valid = dest_row;
							need_comb = false;
							continue;
						}
						else if (!combined[dest_row] && can_move_square_comb(src_row, col, dest_row, col)) // if its occupied with an equal value square that hasn't been combined this turn
						{
							last_valid = dest_row;
							need_comb = true;
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
						if (can_move_square_no_comb(src_row, col, dest_row, col)) // if the square is empty it's free real estate
						{
							last_valid = dest_row;
							need_comb = false;
							continue;
						}
						else if (!combined[dest_row] && can_move_square_comb(src_row, col, dest_row, col)) // if its occupied with an equal value square that hasn't been combined this turn
						{
							last_valid = dest_row;
							need_comb = true;
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
						if (can_move_square_no_comb(row, src_col, row, dest_col)) // if the square is empty it's free real estate
						{
							last_valid = dest_col;
							need_comb = false;
							continue;
						}
						else if (!combined[dest_col] && can_move_square_comb(row, src_col, row, dest_col)) // if its occupied with an equal value square that hasn't been combined this turn
						{
							last_valid = dest_col;
							need_comb = true;
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
						if (can_move_square_no_comb(row, src_col, row, dest_col)) // if the square is empty it's free real estate
						{
							last_valid = dest_col;
							need_comb = false;
							continue;
						}
						else if (!combined[dest_col] && can_move_square_comb(row, src_col, row, dest_col)) // if its occupied with an equal value square that hasn't been combined this turn
						{
							last_valid = dest_col;
							need_comb = true;
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
			break;
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

	void draw_board() const
	{

	}
};
