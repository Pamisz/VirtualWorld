#pragma once

struct board {
	int height;
	int width;
	char** board;
	void createBoard();
	void destroyBoard();
};


