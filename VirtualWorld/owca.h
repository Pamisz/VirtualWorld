#pragma once
#include "zwierze.h"

class owca
    :public zwierze
{
public:
    owca(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(4);
        string txt = "Urodzila sie owca";
        s->setNotifications(txt);
    }
    char rysowanie() override;
    ~owca() {
        string txt = "Owca umarla";
        getSwiat()->setNotifications(txt);
    }
};

