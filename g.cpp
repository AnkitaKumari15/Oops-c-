//Area of rectangle by using class
#include<iostream>
using namespace std;
class rect
{
  int l,b,a;
public:
  void readdata();
  void area();
  void dispdata();
};
void rect::readdata()
{
cout<<"\nEnter length and breadth";
cin>>l>>b;
}
void rect::area()
{
 a=l*b;
}
void rect::dispdata()
{
cout<<"Area of rectangle= "<<l*b;
}
int main()
{
  rect x;
 x.readdata();
 x.area();
 x.dispdata();
return 0;
}
