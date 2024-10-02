#include <iostream>
using namespace std;
void negation(string a)
{
    if (a=="false")
    {
        cout<<"True";
    }
    else if (a=="true")
    {
        cout<<"False";
    }
    else
    {
        cout<<"Invalid input";
    }
    
}
int main() 
{
string a;
cout<<"Enter either 'true' or 'false'"<<endl;
cin>>a;
negation(a);
return 0;
}