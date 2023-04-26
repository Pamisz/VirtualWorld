#include "swiat.h"
#include "Functions.h"
#include "organizmy.h"

void swiat::rysujSwiat() {
	for (int i = 0; i < height + 2; i++) {
		for (int j = 0; j < width + 2; j++) {
			if (board[i][j] == intToChar(219)) {
				color(BLUE);
				cout << board[i][j] << ' ';
				color(WHITE);
			}
			else {
				cout << board[i][j] << ' ';
			}
		}
		cout << endl;
	}
}

void swiat::createSwiat() {
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

void swiat::destroySwiat() {
	for (int i = 0; i < height; i++) {
		delete[] board[i];
	}
	delete[] board;
}

void swiat::wykonajTure() {
	cout << "Wykonanie akcji wszystkich organizmow" << endl;
}

organizmy* swiat::getOrganizmy() {
	return org;
}

int swiat::getHeight() const {
	return height;
}

int swiat::getWidth() const {
	return width;
}

char** swiat::getBoard() {
	return board;
}
