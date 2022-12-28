#pragma once

#include<cstdint>

class TFE_Square {
public:
	const enum square_val_t : uint32_t
	{
		EMPTY = 0,
		s_2 = 2,
		s_4 = 4,
		s_8 = 8,
		s_16 = 16,
		s_32 = 32,
		s_64 = 64,
		s_128 = 128,
		s_256 = 256,
		s_512 = 512,
		s_1024 = 1024,
		s_2048 = 2048,
		s_4096 = 4096,
		s_8192 = 8192,
		s_16384 = 16384,
		s_32768 = 32768,
		s_65536 = 65536,
		s_131072 = 131072,
		INVALID
	};
	

	TFE_Square()
	{
		set_val(TFE_Square::square_val_t::EMPTY);
	}
	
	TFE_Square(TFE_Square::square_val_t val_in)
	{
		set_val(val_in);
	}
	// don't want to deal with crappy input values, if it's a bad value just set it to empty
	TFE_Square(uint32_t val_in)
	{
		if (val_in == square_val_t::s_2 || val_in == square_val_t::s_4 || val_in == square_val_t::s_8 // move all of this to a translation function?
			|| val_in == square_val_t::s_16 || val_in == square_val_t::s_32 || val_in == square_val_t::s_64
			|| val_in == square_val_t::s_128 || val_in == square_val_t::s_256 || val_in == square_val_t::s_512
			|| val_in == square_val_t::s_1024 || val_in == square_val_t::s_2048 || val_in == square_val_t::s_4096
			|| val_in == square_val_t::s_8192 || val_in == square_val_t::s_16384 || val_in == square_val_t::s_32768
			|| val_in == square_val_t::s_65536 || val_in == square_val_t::s_131072 || val_in == square_val_t::EMPTY){
			set_val((TFE_Square::square_val_t)val_in);
		} else{
			set_val(square_val_t::EMPTY);
		}
	}

	TFE_Square::square_val_t get_square_val() const
	{
		return val;
	}
	void set_square_val(square_val_t val_in)
	{
		val = val_in;
	}

	bool is_empty() const
	{
		return get_square_val() == TFE_Square::square_val_t::EMPTY;
	}

	static TFE_Square next_square(TFE_Square square_in)
	{
		TFE_Square::square_val_t square_val = square_in.get_square_val();

		switch (square_val) { // better way to do this?
		case TFE_Square::square_val_t::EMPTY:
			return TFE_Square::square_val_t::EMPTY;
			break;
		case TFE_Square::square_val_t::s_2:
			return TFE_Square::square_val_t::s_4;
			break;
		case TFE_Square::square_val_t::s_4:
			return TFE_Square::square_val_t::s_8;
			break;
		case TFE_Square::square_val_t::s_8:
			return TFE_Square::square_val_t::s_16;
			break;
		case TFE_Square::square_val_t::s_16:
			return TFE_Square::square_val_t::s_32;
			break;
		case TFE_Square::square_val_t::s_32:
			return TFE_Square::square_val_t::s_64;
			break;
		case TFE_Square::square_val_t::s_64:
			return TFE_Square::square_val_t::s_128;
			break;
		case TFE_Square::square_val_t::s_128:
			return TFE_Square::square_val_t::s_256;
			break;
		case TFE_Square::square_val_t::s_256:
			return TFE_Square::square_val_t::s_512;
			break;
		case TFE_Square::square_val_t::s_512:
			return TFE_Square::square_val_t::s_1024;
			break;
		case TFE_Square::square_val_t::s_1024:
			return TFE_Square::square_val_t::s_2048;
			break;
		case TFE_Square::square_val_t::s_2048:
			return TFE_Square::square_val_t::s_4096;
			break;
		case TFE_Square::square_val_t::s_4096:
			return TFE_Square::square_val_t::s_8192;
			break;
		case TFE_Square::square_val_t::s_8192:
			return TFE_Square::square_val_t::s_16384;
			break;
		case TFE_Square::square_val_t::s_16384:
			return TFE_Square::square_val_t::s_32768;
			break;
		case TFE_Square::square_val_t::s_32768:
			return TFE_Square::square_val_t::s_65536;
			break;
		case TFE_Square::square_val_t::s_65536:
			return TFE_Square::square_val_t::s_131072;
			break;
		case TFE_Square::square_val_t::s_131072:
			return TFE_Square::square_val_t::INVALID;
			break;
		default:
			return TFE_Square::square_val_t::INVALID;
			break;
		}
	}

	int get_square_color() const
	{
		switch (val){ // better way to do this?
		case TFE_Square::square_val_t::EMPTY:
			return 0; // 15
			break;
		case TFE_Square::square_val_t::s_2:
			return 1;
			break;
		case TFE_Square::square_val_t::s_4:
			return 2;
			break;
		case TFE_Square::square_val_t::s_8:
			return 3;
			break;
		case TFE_Square::square_val_t::s_16:
			return 4;
			break;
		case TFE_Square::square_val_t::s_32:
			return 5;
			break;
		case TFE_Square::square_val_t::s_64:
			return 6;
			break;
		case TFE_Square::square_val_t::s_128:
			return 7;
			break;
		case TFE_Square::square_val_t::s_256:
			return 8;
			break;
		case TFE_Square::square_val_t::s_512:
			return 9;
			break;
		case TFE_Square::square_val_t::s_1024:
			return 10;
			break;
		case TFE_Square::square_val_t::s_2048:
			return 11;
			break;
		case TFE_Square::square_val_t::s_4096:
			return 12;
			break;
		case TFE_Square::square_val_t::s_8192:
			return 13;
			break;
		case TFE_Square::square_val_t::s_16384:
			return 14;
			break;
		case TFE_Square::square_val_t::s_32768:
			return 15;
			break;
		case TFE_Square::square_val_t::s_65536:
			return 1;
			break;
		case TFE_Square::square_val_t::s_131072:
			return 0;
			break;
		default: //better behavior for bad inputs?
			return 0;
			break;
		}
	}

private:
	TFE_Square::square_val_t val;

	void set_val(TFE_Square::square_val_t val_in)
	{
		val = val_in;
	}
};