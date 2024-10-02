#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int ,int );
void move(int ,int );
void printmaze();

int main()
{
system("cls");
gotoxy(15,0);
cout<<"H";
gotoxy(15,1);
cout<<"A";
gotoxy(15,2);
cout<<"S";
gotoxy(15,3);
cout<<"S";
gotoxy(15,04);
cout<<"A";
gotoxy(15,05);
cout<<"N";
gotoxy(0,10);

    return 0;
}

void gotoxy(int x, int y)
{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

}