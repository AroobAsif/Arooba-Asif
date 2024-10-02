#include <iostream>
using namespace std;
void pet(int holiday){
    int a,b,c;
    a=365-holiday;
    b=a*63+holiday*127;
    c=30000-b;
    if (c>0)
    {
        cout<<"Tom sleeps well.\n"<<(c)/60<<" hours and minutes less to play.";
    }
    else
    {
        cout<<"Tom will run away!\n"<<(-1*c)/60<<" hours and minutes more to play.";
        
    }
    }


int main() {
    int holiday;
    cout << "Enter the number of holidays :";
    cin >> holiday;
    pet(holiday);
    return 0;
}