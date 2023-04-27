#include "mlecz.h"
#include "Functions.h"
#include "organizmy.h"

char mlecz::rysowanie() {
	color(YELLOW);
	return intToChar(219);
}

void mlecz::akcja() {
    for (int i = 0; i < 3; i++) {
        int liczba = rand() % 20 + 1;
        if (liczba == 2) {
            auto elo = czyPustePole();
            if (elo.first != -1) {
                mlecz* r = new mlecz(elo.first, elo.second, getSwiat());
                getSwiat()->getOrganizmy()->createNode(r);
                getSwiat()->setNotifications("Rozpylono mlecza");
            }
        }
    }
}
