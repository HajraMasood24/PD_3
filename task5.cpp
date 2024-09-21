#include <iostream>
using namespace std;
main()
{
string name;
cout<<"Enter the Name of the person:";
cin>> name;
float wl;
cout<<"Enter the weight loss in kilogram:";
cin>> wl;
float d;
d=wl*15;
cout<<name<<" will need "<<d<<" days to lose "<<wl<< "kg of weight by following the doctor's suggestion.";
}

