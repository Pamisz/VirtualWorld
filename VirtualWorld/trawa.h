#pragma once
#include "roslina.h"

class trawa
    :public roslina
{
public:
    trawa(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(0);
    }
    char rysowanie() override;
    ~trawa() {};
};


