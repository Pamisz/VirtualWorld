#include "Czlowiek.h"
#include "Functions.h"
#include "antylopa.h"
#include "guarana.h"

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
		//czlowiek zabija
		if (typeid(*org) == typeid(guarana)); //sila +3
	}
	else {
		if (typeid(*org) == typeid(antylopa)) {
			//antylopa kolizja
		}
		
	}
}

char czlowiek::rysowanie() {
	return 'C';
}