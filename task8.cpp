#include <iostream>
using namespace std;
main()
{
float vp;
cout<<"Enter vegetable price per kilogram (in coins):";
cin>> vp;
float fp;
cout<<"Enter fruit price per kilogram (in coins):";
cin>> fp;
int tkv;
cout<<"Enter total kilograms of vegetables:";
cin>> tkv;
int tkf;
cout<<"Enter total kilograms of fruits:";
cin>>tkf;
float te;
te= ((vp*tkv)/1.94)+((fp*tkf)/1.94) ;
cout<<"Total earning in Rupees (Rps):"<<te;
}

