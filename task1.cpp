#include <iostream>
using namespace std;
main()
{
int sides;
cout<<"Enter the number of sides of the polygon:";
cin>> sides;
sides= (sides-2)*180;
cout<<"The sum of integral angle of a "<<sides<<" sided polygon is:"<<"degrees";
}