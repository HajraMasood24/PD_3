#include <iostream>
using namespace std;
main()
{
int min;
cout<<"Number of Minutes:";
cin>>min;
int sec;
cout<<"Frames per second:";
cin>>sec;
int ttl;
ttl=(min*60)*sec;
cout<<"Total Number of Frames: "<<ttl;
}