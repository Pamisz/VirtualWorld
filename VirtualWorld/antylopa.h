#pragma once
#include "zwierze.h"

class antylopa
    :public zwierze
{
private:
    bool czyUciekla = false;
public:
    antylopa(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(4);
        string txt = "Urodzila sie antylopa";
        s->setNotifications(txt);
    }
    void akcja() override;
    void kolizja(organizm* org) override;
    char rysowanie() override;
    ~antylopa() {
        string txt = "Antylopa umarla";
        getSwiat()->setNotifications(txt);
    }
    void setCzyUciekla(bool b);
    bool getCzyUciekla();
};

