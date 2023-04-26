#pragma once
#include <iostream>
using namespace std;
class swiat;

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
	organizm* getNext();
	organizm* getPrev();
	swiat* getSwiat();
	int getPolozenieX() const;
	int getPolozenieY() const;
	int getInicjatywa() const;
	int getSila() const;
	//Settery
	void setNext(organizm* org);
	void setPrev(organizm* org);
	void setSwiat(swiat* sw);
	void setPolozenieX(int x);
	void setPolozenieY(int y);
	void setInicjatywa(int i);
	void setSila(int s);

	pair<int, int> czyPustePole();
	organizm(swiat* s);
	virtual void akcja() = 0;
	virtual void kolizja(organizm* org) = 0;
	virtual void rysowanie() = 0;
	virtual ~organizm() = default;
};