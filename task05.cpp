#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int );
void printName();
int main()
{
   system("cls");
   printName();  
   gotoxy(15,15)

   void printName()
   {
   cout<<"     #######     ##########        #########       ##########     ###########        ##########     "<<endl;
   cout<<"    ##     ##       ##     ##      ##       ##     ##        ##    ##        ##      ##        ##    "<<endl;
   cout<<"    ##     ##      ##     ##      ##       ##     ##        ##    ##         ##     ##        ##    "<<endl;
   cout<<"    #########      ##     ##      ##       ##     ##        ##    ##         ##     ##        ##    "<<endl;
   cout<<"    ##     ##      ########       ##       ##     ##        ##    ############      ############     "<<endl;
   cout<<"    ##     ##      ####           ##       ##     ##        ##    ##         ##     ##        ##     "<<endl;
   cout<<"    ##     ##      ##   ##        ##       ##     ##        ##    ##         ##     ##        ##     "<<endl;
   cout<<"    ##     ##     ###   ######      ########       ##########     #############     ##        ##     "<<endl;


}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStHandle(STD_OUTPUT_HANDLE), coordinates);
}


 



