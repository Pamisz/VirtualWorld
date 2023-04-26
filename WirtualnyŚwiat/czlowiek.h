#pragma once
#include "zwierze.h"

class czlowiek
	:public zwierze
{
    czlowiek(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(5);
    }
    void rysowanie() override {
        ;
    }
};
