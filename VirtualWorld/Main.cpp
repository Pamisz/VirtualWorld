#include "swiat.h"
#include "Functions.h"

int main() {
	swiat world;
	world.createSwiat();
	world.rysujSwiat();
	texts(&world);
	while (true) {
		world.wykonajTure();
		system("cls");
		world.rysujSwiat();
		texts(&world);
		Sleep(1000);
	}
	world.destroySwiat();
	return 0;
}