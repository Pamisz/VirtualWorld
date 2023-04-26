#include "board.h"
#include "Functions.h"

void board::createBoard() {
	srand(time(NULL));
	cout << "Podaj rozmiar planszy: ";
	cin >> height >> width;
	system("cls");
	board = new char* [height + 2];
	for (int i = 0; i < height + 2; i++) {
		board[i] = new char[width + 2];
		for (int j = 0; j < width + 2; j++) {
			if (i == 0 || i == (height + 1) || j == 0 || j == (width + 1)) {
				board[i][j] = '#';
			}
			else {
				int liczba = rand() % 10 + 1;
				if (liczba == 2) {
					board[i][j] = intToChar(219);
				}
				else {
					board[i][j] = ' ';
				}
			}
		}
	}	
}

void board::destroyBoard() {
	for (int i = 0; i < height; i++) {
		delete[] board[i];
	}
	delete[] board;
}