#include "Functions.h"

void color(int c) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x - 1;
    c.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void nextLine(int& x, int& y) {
    y++;
    gotoxy(x, y);
}

void legend(board b){
    int x = 2 * b.width + 10;
    int y = 1;
    color(BLUE);
    gotoxy(x, y);
    cout << "LEGENDA:"; nextLine(x, y); color(WHITE); 
    nextLine(x, y);
    cout << ">Zwierzeta"; nextLine(x, y);
    cout << "-Wilk                 "; color(GREY); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Antylopa             "; color(LIGHT_YELLOW); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Owca                 "; color(BLUE); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Cyberowca            "; color(NAVY_BLUE); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Zolw                 "; color(GREEN); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Lis                  "; color(LIGHT_PURPLE); cout << intToChar(219); color(WHITE); nextLine(x, y);
    nextLine(x, y);
    cout << ">Rosliny"; nextLine(x, y);
    cout << "-Barszcz Sosnowskiego "; color(RED); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Wilcze Jagody        "; color(PURPLE); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Guarana              "; color(LIGHT_RED); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Mlecz                "; color(YELLOW); cout << intToChar(219); color(WHITE); nextLine(x, y);
    cout << "-Trawa                "; color(LIGHT_GREEN); cout << intToChar(219); color(WHITE); nextLine(x, y);
    nextLine(x, y);
    cout << ">Czlowiek             " << intToChar(219);
}

char intToChar(int x) {
    return static_cast<char>(x);
}