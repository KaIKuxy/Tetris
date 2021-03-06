/*
	A Tetrimino contains four Minos
	Row: 16   Column: 10
	From left: 0 -> 9   From down: 0 -> 15
	1280*720
*/

#include "MinoClass.h"
#include <array>
using namespace std;

class Tetrimino{
public:
	Tetrimino();
	std::array<Vec2, 4> moveable(int);
	//	one-block moving action			0:left	1:right	2:down
	//	return the next position with Vec2
	std::array<Vec2, 4> rotatable();
	//	clockwise rotating action
	//	return the next position with Vec2
	void move();
	//	move to the next position using current action
	bool outOfBorder();
	//	know if the next move or rotate is going to be (only) out of border
private:

protected:
	Mino *minos[4];
	int type;
	int totalType;
	std::array<Vec2, 4> moveTo;
	std::array<Vec2, 4> Rotate[4];
};

class Tetris_I : public Tetrimino {	// type: 0	1
public:
	Tetris_I(int);
};

class Tetris_J : public Tetrimino {	// type: 0	1	2	3
public:
	Tetris_J(int);
};

class Tetris_L : public Tetrimino {	// type: 0	1	2	3
public:
	Tetris_L(int);
};

class Tetris_O : public Tetrimino {	// type: 0
public:
	Tetris_O();
	std::array<Vec2, 4> rotatable();
};

class Tetris_S : public Tetrimino {	// type: 0	1
public:
	Tetris_S(int);
};

class Tetris_T : public Tetrimino {	// type: 0	1	2	3
public:
	Tetris_T(int);
};

class Tetris_Z : public Tetrimino {	// type: 0	1
public:
	Tetris_Z(int);
};
