#pragma once
#include "board.h"
#include "Functions.h"

class organizmy;

class swiat {
private:
	organizmy* org;
	board* brd;
public:
	void rysujSwiat(board* b);
	void wykonajTure();
	organizmy* getOrganizmy();
	board* getBoard();
};
