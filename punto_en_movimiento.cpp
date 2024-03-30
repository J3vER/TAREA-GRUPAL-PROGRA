#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x = 10; 
    int y = 5;  

    char pointChar = '*'; 


    gotoxy(x, y);
    cout << pointChar;

    // Mover el punto hacia la derecha
    for (int i = 0; i < 10; ++i) {
        Sleep(500); // Dormir por un tiempo corto para hacer visible el movimiento
        ++x;
        gotoxy(x, y);
        cout << pointChar;
    }

    return 0;
}

