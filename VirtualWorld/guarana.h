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
        string txt = "Guarana zostala rozpylona";
        s->setNotifications(txt);
    }
    void kolizja(organizm* org) override;
    char rysowanie() override;
    ~guarana() {
        string txt = "Guarana umarla";
        getSwiat()->setNotifications(txt);
    }
};


