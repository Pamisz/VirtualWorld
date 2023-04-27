#pragma once
#include "roslina.h"
#include "Functions.h"

class wilczeJagody
    :public roslina
{
public:
    wilczeJagody(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(99);
        string txt = "Wilcze jagody zostaly rozpylone";
        s->setNotifications(txt);
    }
    void kolizja(organizm* org) override;
    char rysowanie() override;
    ~wilczeJagody() {
        string txt = "Wilcze jagody umarly";
        getSwiat()->setNotifications(txt);
    }
};

