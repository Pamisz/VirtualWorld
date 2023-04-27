#pragma once
#include "zwierze.h"

class antylopa
    :public zwierze
{
public:
    antylopa(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(4);
    }
    char rysowanie() override;
};

