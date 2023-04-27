#include "antylopa.h"
#include "Functions.h"

char antylopa::rysowanie() {
	color(LIGHT_YELLOW);
	return intToChar(219);
}

void antylopa::akcja() {
    int liczba = rand() % 4 + 1;
    if (liczba == 1) {
        if (getSwiat()->getBoard()[getPolozenieY() + 2][getPolozenieX()] != '#')
        setPolozenieY(getPolozenieY() + 2);
    }
    else if (liczba == 2) {
        if (getSwiat()->getBoard()[getPolozenieY() - 2][getPolozenieX()] != '#')
        setPolozenieY(getPolozenieY() - 2);
    }
    else if (liczba == 3) {
        if (getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()+2] != '#')
        setPolozenieX(getPolozenieX() + 2);
    }
    else if (liczba == 4) {
        if (getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()-2] != '#')
        setPolozenieX(getPolozenieX() - 2);
    }
}

void antylopa::kolizja(organizm* org) {
    int liczba = rand() % 2 + 1;
    if (liczba == 2) {
        czyUciekla = true;
        akcja();
    }
}

void antylopa::setCzyUciekla(bool b) {
    czyUciekla = b;
}

bool antylopa::getCzyUciekla() {
    return czyUciekla;
}
