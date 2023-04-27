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
        string txt = "Trawa zostala rozpylona";
        s->setNotifications(txt);
    }
    void akcja() override {};
    void kolizja(organizm* org) override {};
    char rysowanie() override;
    ~trawa() {
        string txt = "Trawa umarla";
        getSwiat()->setNotifications(txt);
    }
};


