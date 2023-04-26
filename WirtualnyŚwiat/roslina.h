#pragma once
#include "organizm.h"
#include "organizmy.h"

struct board;

class roslina
	:public organizm
{
public:
    roslina(int X, int Y, swiat* s)
        :organizm(s) 
    {
        setInicjatywa(0);
        setPolozenieX(X);
        setPolozenieY(Y);
        setSwiat(s);
    }
    virtual ~roslina() {};
    void akcja() override {
        int liczba = rand() % 4 + 1;
        if (liczba != 2) {
            auto elo = czyPustePole();
            if (elo.first != -1) {
                if (typeid(*this) == typeid(BarszczSosnowskiego)) {
                    BarszczSosnowskiego* r = new BarszczSosnowskiego(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(r);
                }
                if (typeid(*this) == typeid(wilczeJagody)) {
                    wilczeJagody* r = new wilczeJagody(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(r);

                }
                if (typeid(*this) == typeid(guarana)) {
                    guarana* r = new guarana(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(r);

                }
                if (typeid(*this) == typeid(mlecz)) {
                    mlecz* r = new mlecz(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(r);

                }
                if (typeid(*this) == typeid(trawa)) {
                    trawa* r = new trawa(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(r);

                }
            }
        }
    }
    void kolizja(organizm* org) {
        org->getSwiat()->getBoard()->board[org->getPolozenieX()][org->getPolozenieY()] = ' ';
    }
    void rysowanie() override = 0;
};

class BarszczSosnowskiego
    :public roslina 
{
public:
    BarszczSosnowskiego(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(10);
    }
    void rysowanie() override {
        ;
    }
    ~BarszczSosnowskiego() {
        ;
    }
};

class wilczeJagody
    :public roslina
{
public:
    wilczeJagody(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(99);
    }
    void rysowanie() override {
        ;
    }
};

class guarana
    :public roslina
{
public:
    guarana(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(0);
    }
    void rysowanie() override {
        ;
    }
};

class mlecz
    :public roslina
{
public:
    mlecz(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(0);
    }
    void rysowanie() override {
        ;
    }
};

class trawa
    :public roslina
{
public:
    trawa(int X, int Y, swiat* s)
        : roslina(X, Y, s)
    {
        setSila(0);
    }
    void rysowanie() override {
        ;
    }
};


