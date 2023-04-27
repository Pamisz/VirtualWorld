#include "Functions.h"
#include "swiat.h"

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

char intToChar(int x) {
    return static_cast<char>(x);
}

void legend(swiat* s) {
    int x = 2 * s->getWidth() + 6;
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
    cout << ">Czlowiek             " << 'C';
}

void info(swiat* s) {
    int x = 2 * s->getWidth() + 32;
    int y = 1;
    color(BLUE);
    gotoxy(x, y);
    cout << "INFO:"; nextLine(x, y); color(WHITE);
    int meter = 0;
    while (meter != 10) {
        cout << s->getNotifications(meter);
        nextLine(x, y);
        meter++;
    }
}

void interfejs(swiat* s) {
    int x = 2 * s->getWidth() + 18;
    int y = 20;
    color(BLUE);
    gotoxy(x, y);
    cout << "Patryk Miszke 193249"; 
    nextLine(x, y);
    cout << "Tura: " << s->getTura();
    color(WHITE);
}

void texts(swiat* s) {
    legend(s);
    info(s);
    interfejs(s);
}

string whichArrow() {
    string key = "";
        short key1 = GetAsyncKeyState(VK_LEFT);
        short key2 = GetAsyncKeyState(VK_RIGHT);
        short key3 = GetAsyncKeyState(VK_UP);
        short key4 = GetAsyncKeyState(VK_DOWN);

        if (key1 < 0) {
            key = "LEWO";
        }
        if (key2 < 0) {
            key = "PRAWO";
        }
        if (key3 < 0) {
            key = "GORA";
        }
        if (key4 < 0) {
            key = "DOL";
        }
    return key;
}

