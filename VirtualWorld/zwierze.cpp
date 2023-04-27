#include "zwierze.h"
#include "organizmy.h"
#include "wilk.h"
#include "owca.h"
#include "lis.h"
#include "zolw.h"
#include "antylopa.h"
#include "cyberOwca.h"

void zwierze::akcja() {
    {
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
}

void zwierze::kolizja(organizm* org) {
    {
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
                if (typeid(*this) == typeid(cyberOwca)) {
                    cyberOwca* z = new cyberOwca(elo.first, elo.second, getSwiat());
                    getSwiat()->getOrganizmy()->createNode(z);
                }
            }
        }
    }
}
