#include <iostream>
using namespace std;
void tpchecker(int a ,int b)
{
int c,d,e;
c=500*b;
d=57*a;
e=c/d;
if (e<14)
{
    cout<<"Your TP will only last "<<e<<" days, buy more!";
}
else
{
    cout<<"Your TP will last "<<e<<" days, no need to panic.";
}


}
int main() 
{
    int a,b;
    cout<<"Enter number of the people in the household :";
    cin>>a;
    cout<<"Numbers of rools of TP :";
    cin>>b;
    tpchecker(a,b);

return 0;
}
