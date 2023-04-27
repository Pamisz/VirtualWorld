#pragma once
#include "organizm.h"
#include "swiat.h"


class zwierze
	:public organizm
{
public:
    zwierze(int X, int Y, swiat* s)
        :organizm(s)
    {
        setPolozenieX(X);
        setPolozenieY(Y);
        setSwiat(s);
    }
    void akcja() override; 
    void kolizja(organizm* org) override; 
    char rysowanie() override = 0;
};

