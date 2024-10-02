#include<iostream>
using namespace std;
void Equality( int number1 , int number2 );
main()
{
int number1, number2;
cout<<"Enter the First number :";
cin>> number1;
cout<<"Enter the Second number:";
cin>> number2;
Equality( number1,number2);
}
void Equality (int number1 ,int number2)
{
if (number1 == number2 )
{
cout<<" True";
}
else
{
cout<<"False";
}
  }


