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
        string txt = "Mlecz zostal rozpylony";
        s->setNotifications(txt);
    }
    void akcja() override;
    void kolizja(organizm* org) {};
    char rysowanie() override;
    ~mlecz() {
        string txt = "Mlecz umarl";
        getSwiat()->setNotifications(txt);
    }
};



