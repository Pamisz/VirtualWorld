#pragma once
#include "zwierze.h"

class wilk
    :public zwierze
{
public:
    wilk(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(5);
        setSila(9);
        string txt = "Urodzil sie wilk";
        s->setNotifications(txt);
    }
    char rysowanie() override;
    ~wilk() {
        string txt = "Wilk umarl";
        getSwiat()->setNotifications(txt);
    }
};
