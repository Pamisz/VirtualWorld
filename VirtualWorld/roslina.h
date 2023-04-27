#pragma once
#include "organizm.h"
#include "swiat.h"

class roslina
    :public organizm
{
public:
    roslina(int X, int Y, swiat* s)
        :organizm(s)
    {
        setInicjatywa(0);
        setPolozenieX(X);
        setPolozenieY(Y);
        setSwiat(s);
    }
    void akcja() override;
    void kolizja(organizm* org) override;
    char rysowanie() override = 0;
};


