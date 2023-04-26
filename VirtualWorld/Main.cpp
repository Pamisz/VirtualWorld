#include "swiat.h"
#include "Functions.h"

int main() {
	swiat world;
	world.createSwiat();
	world.rysujSwiat();
	legend(&world);
	while (true)
		;
	world.destroySwiat();
	return 0;
}