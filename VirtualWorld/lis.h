#pragma once
#include "zwierze.h"

class lis
    :public zwierze
{
public:
    lis(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(7);
        setSila(3);
    }
    char rysowanie() override;
};
