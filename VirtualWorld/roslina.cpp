#include "roslina.h"
#include "organizmy.h"
#include "barszczSosnowskiego.h"
#include "wilczeJagody.h"
#include "guarana.h"
#include "mlecz.h"
#include "trawa.h"

void roslina::akcja() {
    int liczba = rand() % 20 + 1;
    if (liczba == 2) {
        auto elo = czyPustePole();
        if (elo.first != -1) {
            if (typeid(*this) == typeid(barszczSosnowskiego)) {
                barszczSosnowskiego* r = new barszczSosnowskiego(elo.first, elo.second, getSwiat());
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

