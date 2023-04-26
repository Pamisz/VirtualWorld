#pragma once
#include "roslina.h"

class wilczeJagody
    :public roslina
{
public:
    wilczeJagody(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(99);
    }
    void rysowanie() override {};
    ~wilczeJagody() {};
};

