#include "Czlowiek.h"
#include "Functions.h"
#include "organizmy.h"

void czlowiek::akcja() {
	if (getSwiat()->getNextMove() == "GORA" && getSwiat()->getBoard()[getPolozenieY() - 1][getPolozenieX()] != '#') {
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = ' ';
		setPolozenieY(getPolozenieY() - 1);
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = 'C';
	}
	else if (getSwiat()->getNextMove() == "DOL" && getSwiat()->getBoard()[getPolozenieY() + 1][getPolozenieX()] != '#') {
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = ' ';
		setPolozenieY(getPolozenieY() + 1);
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = 'C';
	}
	else if (getSwiat()->getNextMove() == "PRAWO" && getSwiat()->getBoard()[getPolozenieY()][getPolozenieX() + 1] != '#') {
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = ' ';
		setPolozenieX(getPolozenieX() + 1);
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = 'C';
	}
	else if (getSwiat()->getNextMove() == "LEWO" && getSwiat()->getBoard()[getPolozenieY()][getPolozenieX() - 1] != '#') {
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = ' ';
		setPolozenieX(getPolozenieX() - 1);
		getSwiat()->getBoard()[getPolozenieY()][getPolozenieX()] = 'C';
	}
}

void czlowiek::kolizja(organizm* org) {
	if (holocaust || org->getSila() <= getSila()) {
		getSwiat()->getOrganizmy()->deleteNode(org);
		getSwiat()->setNotifications("Czlowiek zabil organizm!");
	}
	else {
		getSwiat()->getOrganizmy()->deleteNode(this);
		getSwiat()->setPersonAlive(false);
	}
}

char czlowiek::rysowanie() {
	return 'C';
}