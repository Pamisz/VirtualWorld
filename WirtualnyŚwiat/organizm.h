#pragma once
#include "swiat.h"

class organizm {
private:
	int sila;
	int inicyjatywa;
	int polozenie[2];
	swiat* s;
	organizm* next = nullptr;
	organizm* prev = nullptr;
public:
	//Gettery
	organizm* getNext() { return next; }
	organizm* getPrev() { return prev; }
	swiat* getSwiat() { return s; }
	int getPolozenieX() const {	return polozenie[0]; }
	int getPolozenieY() const { return polozenie[1]; }
	int getInicjatywa() const { return inicyjatywa; }
	int getSila() const { return sila; }
	//Settery
	void setNext(organizm* org) { next = org; }
	void setPrev(organizm* org) { prev = org; }
	void setSwiat(swiat* sw) { s = sw; }
	void setPolozenieX(int x) { polozenie[0] = x; }
	void setPolozenieY(int y) { polozenie[1] = y; }
	void setInicjatywa(int i){ inicyjatywa = i; }
	void setSila(int s) { sila = s; }

	pair<int, int> czyPustePole() {
		string pola = "";
		if (s->getBoard()->board[polozenie[0]][polozenie[1] + 1] == ' ') {
			pola += '1';
		}
		if (s->getBoard()->board[polozenie[0]][polozenie[1]-1] == ' ') {
			pola += '2';
		}
		if (s->getBoard()->board[polozenie[0]+1][polozenie[1]] == ' ') {
			pola += '3';
		}
		if (s->getBoard()->board[polozenie[0]-1][polozenie[1]] == ' ') {
			pola += '4';
		}
		if (pola.length() > 0) {
			int los = rand() % pola.length() + 1;
			if (pola[los] == '1') return { polozenie[0], polozenie[1] + 1 };
			else if (pola[los] == '2') return { polozenie[0], polozenie[1] - 1 };
			else if (pola[los] == '3') return { polozenie[0] + 1, polozenie[1] };
			else if(pola[los] == '4') return { polozenie[0] - 1, polozenie[1] };
		}
		else {
			return { -1, -1 };
		}
	}
	organizm(swiat* s) { setSwiat(s); }
	virtual void akcja() = 0;
	virtual void kolizja(organizm* org) = 0;
	virtual void rysowanie() = 0;
	virtual ~organizm();
};
