#include "zolw.h"
#include "Functions.h"

char zolw::rysowanie() {
    color(GREEN);
    return intToChar(219);
}

void zolw::akcja() {
    int liczba = rand() % 4 + 1;
    if (liczba == 2) {
        liczba = rand() % 4 + 1;
        if (liczba == 1) {
            if (getSwiat()->getBoard()[getPolozenieY() + 1][getPolozenieX()] != '#')
            setPolozenieY(getPolozenieY() + 1);
        }
        else if (liczba == 2) {
            if (getSwiat()->getBoard()[getPolozenieY() - 1][getPolozenieX()] != '#')
            setPolozenieY(getPolozenieY() - 1);
        }
        else if (liczba == 3) {
            if (getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()+1] != '#')
            setPolozenieX(getPolozenieX() + 1);
        }
        else if (liczba == 4) {
            if (getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()-1] != '#')
            setPolozenieX(getPolozenieX() - 1);
        }
    }
}

void zolw::kolizja(organizm* org) {
    if (org->getSila() < 5) {
        czyOdbil = true;
    }
}

bool zolw::getCzyOdbil() {
    return czyOdbil;
}

void zolw::setCzyOdbil(bool b) {
    czyOdbil = b;
}
