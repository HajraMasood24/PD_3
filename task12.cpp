#include <iostream>
using namespace std;
main()
{
int sm;
int w;
int h;
cout<<"Number of square meters you can paint:";
cin>>sm;
cout<<"Width of the single wall(in meters):";
cin>>w;
cout<<"Height of the single wall (in meters):";
cin>>h;
int nw;
nw=sm/(w*h);
cout<<"Number of walls yoy can paint:"<<nw;
}
