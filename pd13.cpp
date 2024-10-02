#include <iostream>
using namespace std;
void possiblebonus(int a, int b ){
if (b<=a+6){
    cout<<"True!";
}
else{
    cout<<"False!";
}

}
int main()
{
     int a,b;
cout<<"Enter your position :";
cin>>a;
cout<<"Enter your friend's position :";
cin>>b;
possiblebonus(a,b);
return 0;
}