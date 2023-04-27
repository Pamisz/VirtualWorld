#pragma once
#include "zwierze.h"

class czlowiek
    :public zwierze
{
private:
    bool holocaust = false;
public:
    czlowiek(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(5);
    }
    void akcja() override;
    void kolizja(organizm* org) override;
    char rysowanie() override;
};
