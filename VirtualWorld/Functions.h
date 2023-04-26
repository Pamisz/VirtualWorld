#pragma once

#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

#define BLACK 0
#define NAVY_BLUE 1
#define GREEN 2
#define SKY_BLUE 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GREY 8
#define BLUE 9
#define LIGHT_GREEN 10
#define TURQUOISE 11
#define LIGHT_RED 12
#define LIGHT_PURPLE 13
#define LIGHT_YELLOW 14

class swiat;

void color(int c);
void gotoxy(int x, int y);
char intToChar(int x);
void legend(swiat* s);



