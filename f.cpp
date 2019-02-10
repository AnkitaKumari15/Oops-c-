//volume of cuboid using class
#include<iostream>
using namespace std;
class cuboid
{
 int l,b,h,v;
public:
 void readdata();
 int volume();
 void dispdata();
};
void cuboid::readdata()
{
cout<<"\nEnter length breadth and height";
cin>>l>>b>>h;
}
int cuboid::volume()
{
return(l*b*h);
}
void cuboid::dispdata()
{
cout<<"\nVolume of cuboid = "<<volume();
}
int main()
{
  cuboid x;
 x.readdata();
 x.dispdata();
return 0;
}

