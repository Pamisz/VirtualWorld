#include "organizm.h"
#include "swiat.h"
#include <string>

organizm* organizm::getNext() { 
	return next; 
}

organizm* organizm::getPrev() { 
	return prev; 
}

swiat* organizm::getSwiat() { 
	return s; 
}

int organizm::getPolozenieX() const
{ return polozenie[0]; 
}

int organizm::getPolozenieY() const {
	return polozenie[1]; 
}

int organizm::getInicjatywa() const {
	return inicyjatywa; 
}

int organizm::getSila() const {
	if(this != nullptr)
	return sila; 
}
	//Settery
void organizm::setNext(organizm* org) {
	next = org; 
}

void organizm::setPrev(organizm* org) {
	prev = org; 
}

void organizm::setSwiat(swiat* sw) {
	s = sw; 
}

void organizm::setPolozenieX(int x) {
	polozenie[0] = x; 
}

void organizm::setPolozenieY(int y) {
	polozenie[1] = y; 
}

void organizm::setInicjatywa(int i) {
	inicyjatywa = i; 
}

void organizm::setSila(int s) {
	sila = s; 
}

pair<int, int> organizm::czyPustePole() {
	string pola = "";
	if (polozenie[1] <= s->getHeight() + 1 && s->getBoard()[polozenie[0]][polozenie[1] + 1] == ' ') {
		pola += '1';
	}
	if (polozenie[1] > 0 && s->getBoard()[polozenie[0]][polozenie[1] - 1] == ' ') {
		pola += '2';
	}
	if (polozenie[0] < s->getWidth() + 1 && s->getBoard()[polozenie[0] + 1][polozenie[1]] == ' ') {
		pola += '3';
	}
	if (polozenie[0] > 0 && s->getBoard()[polozenie[0] - 1][polozenie[1]] == ' ') {
		pola += '4';
	}
	if (pola.length() > 0) {
		int los = rand() % pola.length();
		if (pola[los] == '1') return { polozenie[0], polozenie[1] + 1 };
		else if (pola[los] == '2') return { polozenie[0], polozenie[1] - 1 };
		else if (pola[los] == '3') return { polozenie[0] + 1, polozenie[1] };
		else if (pola[los] == '4') return { polozenie[0] - 1, polozenie[1] };
	}
	else {
		return { -1, -1 };
	}
}

organizm::organizm(swiat* s) {
	setSwiat(s); 
}