#include <iostream>
using namespace std;
void ticket(string a ,float b)
{
    if (a=="Pakistan")
    {
        cout<<"Ticket price is $"<<b-b*0.05;
    }
    else if (a=="Ireland")
    {
        cout<<"Ticket price is $"<<b-b*0.1;
    }
    else if (a=="India")
    {
        cout<<"Ticket price is $"<<b-b*0.2;
    }
    else if (a=="England")
    {
        cout<<"Ticket price is $"<<b-b*0.3;
    }
    else if (a=="Canada")
    {
        cout<<"Ticket price is $"<<b-b*0.45;
    }


    
}
int main() {
    string s;
    float a;
    cout<<"Enter the country name "<<endl;
    cin>>s;
    cout<<"Enter ticket price in Dollar/s "<<endl;
    cin>>a;
    ticket(s,a);
    cout<<"Final ticket price after discount" <<endl;
    cin>>a;
return 0;
}