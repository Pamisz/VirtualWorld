#include "swiat.h"
#include "Functions.h"
#include "organizmy.h"
#include "czlowiek.h"
#include "wilk.h"
#include "owca.h"
#include "lis.h"
#include "zolw.h"
#include "antylopa.h"
#include "cyberOwca.h"
#include "trawa.h"
#include "mlecz.h"
#include "guarana.h"
#include "wilczeJagody.h"
#include "barszczSosnowskiego.h"

void swiat::setNextMove() {
	personNextMove = whichArrow();
}

string swiat::getNextMove() {
	return personNextMove;
}

bool swiat::getPersonAlive() const {
	if (personAlive)
		return 1;
	else 
		return 0;
}

void swiat::setPersonAlive(bool b) {
	if (b)
		personAlive = true;
	else
		personAlive = false;
}

void swiat::rysujSwiat() {
	for (int i = 0; i < height + 2; i++) {
		for (int j = 0; j < width + 2; j++) {
			if (board[i][j] !=  ' ' && board[i][j] != '#') {
				organizm* ogm = org->getFront();
				while (ogm->getPrev() != nullptr && (ogm->getPolozenieX() != j || ogm->getPolozenieY() != i)) {
					ogm = ogm->getPrev();
				}
				cout << ogm->rysowanie() << ' ';
				color(WHITE);
				ogm = nullptr;
				delete ogm;
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
					liczba = rand() % 12 + 1;
					if (!org) {
						org = new organizmy;
					}
					if (liczba == 1 && personAlive == false) {
						czlowiek* cz = new czlowiek(j, i, this);
						org->createNode(cz);
						board[i][j] = 'C';
						personAlive = true;
						cz = nullptr;
						delete cz;		
					}
					else {
						if (liczba == 2) {
							wilk* w = new wilk(j, i, this);
							org->createNode(w);
							w = nullptr;
							delete w;
						}
						else if (liczba == 3) {
							owca* o = new owca(j, i, this);
							org->createNode(o);
							o = nullptr;
							delete o;
						}
						else if (liczba == 4) {
							lis* l = new lis(j, i, this);
							org->createNode(l);
							l = nullptr;
							delete l;
						}
						else if (liczba == 5) {
							zolw* z = new zolw(j, i, this);
							org->createNode(z);
							z = nullptr;
							delete z;
						}
						else if (liczba == 6) {
							antylopa* a = new antylopa(j, i, this);
							org->createNode(a);
							a = nullptr;
							delete a;
						}
						else if (liczba == 7) {
							cyberOwca* c = new cyberOwca(j, i, this);
							org->createNode(c);
							c = nullptr;
							delete c;
						}
						else if (liczba == 8) {
							trawa* t = new trawa(j, i, this);
							org->createNode(t);
							t = nullptr;
							delete t;
						}
						else if (liczba == 9) {
							mlecz* m = new mlecz(j, i, this);
							org->createNode(m);
							m = nullptr;
							delete m;
						}
						else if (liczba == 10) {
							guarana* g = new guarana(j, i, this);
							org->createNode(g);
							g = nullptr;
							delete g;
						}
						else if (liczba == 11) {
							wilczeJagody* wj = new wilczeJagody(j, i, this);
							org->createNode(wj);
							wj = nullptr;
							delete wj;
						}
						else if (liczba == 12) {
							barszczSosnowskiego* b = new barszczSosnowskiego(j, i, this);
							org->createNode(b);
							b = nullptr;
							delete b;
						}
						board[i][j] = intToChar(219);
					}
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
	if (personAlive == true) {
		organizm* buffer = org->getFront();
		while (typeid(*buffer) != typeid(czlowiek) && buffer->getPrev() != nullptr) {
			buffer = buffer->getPrev();
		}
		while (personNextMove == "") {
			 setNextMove();
			 buffer->akcja();
		}
		personNextMove = "";
		buffer = nullptr;
		delete buffer;
	}
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

string swiat::getNotifications(int x) {
	return notifications[x];
}

void swiat::setNotifications(string n) {
	int meter = 0;
	string buffer = notifications[0];
	while (buffer.length() > 0) {
		meter++;
		if (meter != 10) {
			buffer = notifications[meter];
		}
		else {
			buffer = "";
		}
	}
	if (meter == 10) {
		for (int i = 0; i < 10; i++) {
			notifications[i] = "";
		}
		meter = 0;
	}
	notifications[meter] = n;
}

