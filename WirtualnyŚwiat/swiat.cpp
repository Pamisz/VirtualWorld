#include "swiat.h"
#include "organizmy.h"

void swiat::rysujSwiat(board* b) {
	for (int i = 0; i < b->height + 2; i++) {
		for (int j = 0; j < b->width + 2; j++) {
			if (b->board[i][j] == intToChar(219)) {
				color(BLUE);
				cout << b->board[i][j] << ' ';
				color(WHITE);
			}
			else {
				cout << b->board[i][j] << ' ';
			}
		}
		cout << endl;
	}
}
void swiat::wykonajTure() {
	cout << "Wykonanie akcji wszystkich organizmow" << endl;
}
organizmy* swiat::getOrganizmy() {
	return org;
}
board* swiat::getBoard() {
	return brd;
}