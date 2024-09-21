#include <iostream>
using namespace std;
main()
{
string name;
cout<<"Enter the movie name:";
cin>>name;
int adult;
cout<<"Enter the adult ticket price:$";
cin>> adult;
int child;
cout<<"Enter the child ticket price:$";
cin>> child;
int ats;
cout<<"Enter the number of adults tickets sold:";
cin>> ats;
int cts;
cout<<"Enter the number of child tickets sold:";
cin>> cts;
int per;
cout<<"Enter the percentage of the amount to be donated to charity:";
cin>> per;

cout<<"Movie:"<<name<<endl;
int tag;
tag=(adult*ats)+(child*cts);
cout<<"Total amount generated from tickets sales:$ "<< tag<<endl;
int dtc;
dtc=tag/per;
cout<<"Donation to charity(10%):$ "<< dtc<<endl;
int ra;
ra=tag-dtc;
cout<<"Remaining amount after donation:$ "<< ra<<endl;
}





