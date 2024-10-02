#include <iostream>
using namespace std;
void isequal(int a,int b)
{
    if (a==b)
    {
        cout<<"True!"<<endl;
    }
    else
    {
        cout<<"False!"<<endl;
    }
    
}
int main() 
{
int a,b;
cout<<"Enter first number  :";
cin>>a;
cout<<"Enter second number  :";
cin>>b;
isequal(a,b);
return 0;
}