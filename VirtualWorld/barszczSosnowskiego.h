#pragma once
#include "roslina.h"
#include "Functions.h"

class barszczSosnowskiego
	:public roslina
{
public:
    barszczSosnowskiego(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(10);
        string txt = "BarszczSosnowskiego zostal zapylony";
        getSwiat()->setNotifications(txt);
    }
    void kolizja(organizm* org) override;
    void akcja() override;
    char rysowanie() override;
    ~barszczSosnowskiego() {
        string txt = "barszczSosnowskiego umarl";
        getSwiat()->setNotifications(txt);
    }
};

