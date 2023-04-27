#include "barszczSosnowskiego.h"
#include "Functions.h"
#include "zwierze.h"
#include "organizmy.h"
#include <typeinfo>

char barszczSosnowskiego::rysowanie() {
	color(RED);
	return intToChar(219);
}

void barszczSosnowskiego::akcja() {
    int x = getPolozenieX();
    int y = getPolozenieY();

    

    if (getSwiat()->getOrganizm(x, y + 1)) {
        getSwiat()->getOrganizmy()->deleteNode(getSwiat()->getOrganizm(x, y + 1));
        getSwiat()->setNotifications("Barszcz Sosnowskiego zabil zwierze");
    }

    if (getSwiat()->getOrganizm(x, y - 1)) {
        getSwiat()->getOrganizmy()->deleteNode(getSwiat()->getOrganizm(x, y - 1));
        getSwiat()->setNotifications("Barszcz Sosnowskiego zabil zwierze");
    }

    if (getSwiat()->getOrganizm(x + 1, y)) {
        getSwiat()->getOrganizmy()->deleteNode(getSwiat()->getOrganizm(x + 1, y));
        getSwiat()->setNotifications("Barszcz Sosnowskiego zabil zwierze");
    }

    if (getSwiat()->getOrganizm(x - 1, y)) {
        getSwiat()->getOrganizmy()->deleteNode(getSwiat()->getOrganizm(x - 1, y));
        getSwiat()->setNotifications("Barszcz Sosnowskiego zabil zwierze");
    }
}

void barszczSosnowskiego::kolizja(organizm* org) {
    getSwiat()->getOrganizmy()->deleteNode(org);
    getSwiat()->setNotifications("Barszcz Sosnowskiego zabil zwierze");
}
