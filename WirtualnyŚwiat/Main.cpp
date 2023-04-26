#include "swiat.h"
#include "Functions.h"

int main() {
	board b;
	b.createBoard();
	swiat s;
	s.rysujSwiat(&b);
	legend(b);
	
	while (1)
		;
	b.destroyBoard();
	return 0;
}