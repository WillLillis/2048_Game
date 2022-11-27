#pragma once

#include<cstdint>

class TFE_Square {
public:
	const enum square_val_t : uint32_t
	{
		EMPTY = 0,
		A = 2,
		B = 4,
		C = 8,
		D = 16,
		E = 32,
		F = 64,
		G = 128,
		H = 256,
		I = 512,
		J = 1024,
		K = 2048,
		L = 4096,
		M = 8192,
		N = 16384,
		O = 32768,
		P = 65536,
		Q = 131072,
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
		case TFE_Square::square_val_t::A:
			return TFE_Square::square_val_t::B;
			break;
		case TFE_Square::square_val_t::B:
			return TFE_Square::square_val_t::C;
			break;
		case TFE_Square::square_val_t::C:
			return TFE_Square::square_val_t::D;
			break;
		case TFE_Square::square_val_t::D:
			return TFE_Square::square_val_t::E;
			break;
		case TFE_Square::square_val_t::E:
			return TFE_Square::square_val_t::F;
			break;
		case TFE_Square::square_val_t::F:
			return TFE_Square::square_val_t::G;
			break;
		case TFE_Square::square_val_t::G:
			return TFE_Square::square_val_t::H;
			break;
		case TFE_Square::square_val_t::H:
			return TFE_Square::square_val_t::I;
			break;
		case TFE_Square::square_val_t::I:
			return TFE_Square::square_val_t::J;
			break;
		case TFE_Square::square_val_t::J:
			return TFE_Square::square_val_t::K;
			break;
		case TFE_Square::square_val_t::K:
			return TFE_Square::square_val_t::L;
			break;
		case TFE_Square::square_val_t::L:
			return TFE_Square::square_val_t::M;
			break;
		case TFE_Square::square_val_t::M:
			return TFE_Square::square_val_t::N;
			break;
		case TFE_Square::square_val_t::N:
			return TFE_Square::square_val_t::O;
			break;
		case TFE_Square::square_val_t::O:
			return TFE_Square::square_val_t::P;
			break;
		case TFE_Square::square_val_t::P:
			return TFE_Square::square_val_t::Q;
			break;
		case TFE_Square::square_val_t::Q:
			return TFE_Square::square_val_t::INVALID;
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