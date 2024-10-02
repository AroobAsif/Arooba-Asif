#include <iostream>
using namespace std;
void longestTime(float a,int b) 
{
    int c=a*60;
    if (c>b)
    {
        cout<<a;
    }
    else if (c<b)
    {
        cout<<b;
    }
    else
    {
        cout<<"Both quantities are equal.";
    }
    
}
int main() 
{
    float a;
int b;
cout<<"Enter time in hour/s :";
cin>>a;
cout<<"Enter time in min/s :";
cin>>b;
longestTime(a,b);
return 0; }
