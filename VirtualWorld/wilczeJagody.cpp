#include "wilczeJagody.h"
#include "organizmy.h"
#include "Functions.h"

char wilczeJagody::rysowanie() {
	color(PURPLE);
	return intToChar(219);
}

void wilczeJagody::kolizja(organizm* org) {
	getSwiat()->getOrganizmy()->deleteNode(org);
}

