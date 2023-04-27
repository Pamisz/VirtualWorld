#pragma once
#include "zwierze.h"


class zolw
    :public zwierze
{
private:
    bool czyOdbil = false;
public:
    zolw(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(1);
        setSila(2);
        string txt = "Urodzil sie zolw";
        s->setNotifications(txt);
    }
    char rysowanie() override;
    void akcja() override;
    void kolizja(organizm* org) override;
    bool getCzyOdbil();
    void setCzyOdbil(bool b);
    ~zolw() {
        string txt = "Zolw umarl";
        getSwiat()->setNotifications(txt);
    }
};

