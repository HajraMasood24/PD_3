#include <iostream>
using namespace std;
main()
{
float i;
cout<<"Enter Imposter Count:";
cin>> i;
float p;
cout<<"Enter Player Count:";
cin>>p;
float ch;
ch=100*(i/p);
cout<<"Chance of being an imposter: "<<ch<<"%";
}