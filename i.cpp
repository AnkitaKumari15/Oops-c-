//program which reads two time(hr, min) class
#include<iostream>
using namespace std;
class timee
{
  int hr,min;
public:
  void readdata();
  void dispdata();
};
void timee::readdata()
{
cout<<"\nEnter hour and minute";
cin>>hr>>min;
}
void timee::dispdata()
{
hr=hr+min/60;
min=min%60;
cout<<"\nHour= "<<hr;
cout<<"\nMinute="<<min;
}
int main()
{
 timee t;
 t.readdata();
 t.dispdata();
}

