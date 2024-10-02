 #include <iostream>
using namespace std;
void speed(int a){
    if (a<=100)
    {
        cout<<"Perfect! You're going good."<<endl;
    }
    else if (a>=105)
    {
        cout<<"Halt... YOU WILL BE CHALLENGED!!!";
    }
    
}
int main(){
    int a;
    cout<<"Enter speed in km/h"<<endl;
    cin>>a;
    speed(a); }

                  