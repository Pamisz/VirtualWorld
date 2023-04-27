#pragma once
#include "zwierze.h"

class cyberOwca
    :public zwierze
{
public:
    cyberOwca(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(11);
    }
    char rysowanie() override;
};

