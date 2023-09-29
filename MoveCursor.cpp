#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
    cout<<"Test: ";
    gotoxy(15,15);
    cout<<"My name is Muhammad Shaheryar Akhtar.";
}

void gotoxy(int x, int y)
{
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}
