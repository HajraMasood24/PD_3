#include <iostream>
using namespace std;
main()
{
int v;
cout<<"Enter Initial Velocity (m/s):";
cin>> v;
int a;
cout<<"Enter Acceleration (m/s^2):";
cin>> a;
int t;
cout<<"Enter time (t):";
cin>> t;
int fv;
fv=v+a*t;
cout<<"Final Velocity(m/s):"<<fv;
}
