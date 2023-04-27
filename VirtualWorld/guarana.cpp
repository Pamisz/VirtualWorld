#include "guarana.h"
#include "Functions.h"

char guarana::rysowanie() {
	color(LIGHT_RED);
	return intToChar(219);
}

void guarana::kolizja(organizm* org) {
	org->setSila(org->getSila() + 3);
}
