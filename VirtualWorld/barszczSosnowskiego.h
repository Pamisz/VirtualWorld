#pragma once
#include "roslina.h"

class barszczSosnowskiego
	:public roslina
{
public:
    barszczSosnowskiego(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(10);
    }
    char rysowanie() override;
    ~barszczSosnowskiego() override;
};

