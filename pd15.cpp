#include <iostream>
using namespace std;
void flower(int a,int b,int c)
{
    float r,w,t,d;
    r = a*2;
    w = b*4.10;
    t = c*2.5;
    d = r+w+t;
    if (d>=200)
    {
        cout<<"Total price in  $"<<d<<endl;
        cout<<"Discount given in $"<<d*.2<<endl;
        cout<<"Total payablle in $"<<d-d*.2<<endl;
    }
    else
    {
        cout<<"Total price in $"<<d<<"\nNo discount applied!";
    }
    
    
}
int main() 
{
    int a,b,c;
cout<<"Enter number of Rose :";
cin>>a;
cout<<"Enter number of White Rose :";
cin>>b;
cout<<"Enter number of Tulips :";    
cin>>c;
flower(a,b,c);

 }