#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void P_movement(int x, int y);
main()
{
    int x = 3;
    int y = 4;
    system("cls");
    printMaze();
    while (true)
    {
        P_movement(x, y);
        x = x + 1;
        if(x==20)
        {
            x=3;
        }
    }
    gotoxy(0, 10);
}
void printMaze()
{
    cout << "#######################" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#                     #" << endl;
    cout << "#######################" << endl;
}

void gotoxy(int x, int y)
{
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}

void P_movement(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
    gotoxy(x, y);
    cout << " ";
}