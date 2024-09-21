#include <iostream>
using namespace std;
main()
{
int num,dig1,dig2,dig3,dig4,dig5;
float fn;
cout<<"Enter a 5 digit number :";
cin>>num;
dig1=num%10;
dig2=(num/10)%10;
dig3=(num/100)%10;
dig4=(num/1000)%10;
dig5=(num/10000)%10;
fn=dig1+dig2+dig3+dig4+dig5;
cout<<"Sum of individual digit present in number:"<<fn;
}