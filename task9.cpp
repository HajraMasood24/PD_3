#include <iostream>
using namespace std;
main()
{
int number;
float digit1;
float digit2;
float digit3;
float digit4;
cout<<"Enter a 4-digit number:";
cin>> number;
digit1=number/1000;
digit2=(number/100)%10;
digit3=(number/10)%10;
digit4=number%10;
float sum;
sum=digit1+digit2+digit3+digit4;
cout<<"Sum of individual digits:"<<sum;
}
