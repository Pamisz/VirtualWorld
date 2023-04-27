#pragma once
#include "roslina.h"

class mlecz
    :public roslina
{
public:
    mlecz(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(0);
    }
    char rysowanie() override;
    ~mlecz() {};
};



