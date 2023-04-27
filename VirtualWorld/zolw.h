#pragma once
#include "zwierze.h"


class zolw
    :public zwierze
{
public:
    zolw(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(1);
        setSila(2);
    }
    char rysowanie() override;
};

