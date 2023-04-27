#include "lis.h"
#include "Functions.h"

char lis::rysowanie() {
	color(LIGHT_PURPLE);
	return intToChar(219);
}

void lis::akcja() {
    int liczba = rand() % 4 + 1;
    if (liczba == 1) {
        if (getSwiat()->getOrganizm(getPolozenieX(), getPolozenieY() + 1)->getSila() > getSila()) {
            getSwiat()->setNotifications("Lis wyczul silniejszy organizm");
        }
        else {
            if (getSwiat()->getBoard()[getPolozenieY() + 1][getPolozenieX()] != '#')
            setPolozenieY(getPolozenieY() + 1);
        }
    }
    else if (liczba == 2) {
        if (getSwiat()->getOrganizm(getPolozenieX(), getPolozenieY() - 1)->getSila() > getSila()) {
            getSwiat()->setNotifications("Lis wyczul silniejszy organizm");
        }
        else {
            if (getSwiat()->getBoard()[getPolozenieY() - 1][getPolozenieX()] != '#')
            setPolozenieY(getPolozenieY() - 1);
        }
    }
    else if (liczba == 3) {
        if (getSwiat()->getOrganizm(getPolozenieX() + 1, getPolozenieY())->getSila() > getSila()) {
            getSwiat()->setNotifications("Lis wyczul silniejszy organizm");
        }
        else {
            if (getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()+1] != '#')
            setPolozenieX(getPolozenieX() + 1);

        }
    }
    else if (liczba == 4) {
        if (getSwiat()->getOrganizm(getPolozenieX() - 1, getPolozenieY())->getSila() > getSila()) {
            getSwiat()->setNotifications("Lis wyczul silniejszy organizm");
        }
        else {
            if (getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()-1] != '#')
            setPolozenieX(getPolozenieX() - 1);

        }
    }
}
