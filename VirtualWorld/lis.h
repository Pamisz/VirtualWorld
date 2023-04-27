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
        string txt = "Urodzil sie lis";
        s->setNotifications(txt);
    }
    void akcja() override;
    char rysowanie() override;
    ~lis() {
        string txt = "Lis umarl";
        getSwiat()->setNotifications(txt);
    }
};
