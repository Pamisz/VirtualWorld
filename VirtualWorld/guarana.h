#pragma once
#include "roslina.h"

class guarana
    :public roslina
{
public:
    guarana(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(0);
    }
    char rysowanie() override;
    ~guarana() {};
};


