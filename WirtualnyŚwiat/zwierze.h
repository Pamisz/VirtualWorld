#pragma once
#include "organizm.h"
#include "organizmy.h"

struct board;

class zwierze
    :public organizm
{
public:
    zwierze(int X, int Y, swiat* s)
        :organizm(s)
    {
        setPolozenieX(X);
        setPolozenieY(Y);
        setSwiat(s);
    }
    virtual ~zwierze() {};
    void akcja() override {
        int liczba = rand() % 4 + 1;
        if (liczba == 1) {
            setPolozenieY(getPolozenieY() + 1);
        }
        else if (liczba == 2) {
            setPolozenieY(getPolozenieY() - 1);
        }
        else if (liczba == 3) {
            setPolozenieX(getPolozenieX() + 1);
        }
        else if (liczba == 4) {
            setPolozenieX(getPolozenieX() - 1);
        }
    }
    void kolizja(organizm* org) {
        if (typeid(*this) == typeid(org)) {
            auto elo = czyPustePole();
            if (elo.first != -1) {
                if (typeid(*this) == typeid(wilk)) {
                    wilk* z = new wilk(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(z);
                }
                if (typeid(*this) == typeid(owca)) {
                    owca* z = new owca(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(z);

                }
                if (typeid(*this) == typeid(lis)) {
                    lis* z = new lis(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(z);

                }
                if (typeid(*this) == typeid(zolw)) {
                    zolw* z = new zolw(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(z);

                }
                if (typeid(*this) == typeid(antylopa)) {
                    antylopa* z = new antylopa(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(z);

                }
            }
        }
    }
    void rysowanie() override = 0;
};

class wilk
    :public zwierze
{
public:
    wilk(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(5);
        setSila(9);
    }
    void rysowanie() override {
        ;
    }
};

class owca
    :public zwierze
{
public:
    owca(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(4);
    }
    void rysowanie() override {
        ;
    }
};

class lis
    :public zwierze
{
public:
    lis(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(7);
        setSila(3);
    }
    void rysowanie() override {
        ;
    }
};

class zolw
    :public zwierze
{
public:
    zolw(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(1);
        setSila(2);
    }
    void rysowanie() override {
        ;
    }
};

class antylopa
    :public zwierze
{
public:
    antylopa(int X, int Y, swiat* s)
        : zwierze(X, Y, s)
    {
        setInicjatywa(4);
        setSila(4);
    }
    void rysowanie() override {
        ;
    }
};


