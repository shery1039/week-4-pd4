#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
    gotoxy(10, 30);
   cout << " _____ _                     " << endl;
    cout << "/  ___| |                    " << endl;
    cout << "\\ `--.| |__   ___ _ __ _   _ " << endl;
    cout << " `--. \\ '_ \\ / _ \\ '__| | | |" << endl;
    cout << "/\\__/ / | | |  __/ |  | |_| |" << endl;
    cout << "\\____/|_| |_|\\___|_|   \\__, |" << endl;
    cout << "                        __/ |" << endl;
    cout << "                       |___/ " << endl;
}

void gotoxy(int x, int y)
{
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}
