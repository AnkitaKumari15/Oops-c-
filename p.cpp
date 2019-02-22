#include<iostream>
using namespace std;
class A
{
  int n;
 public:
  void read()
 {
   cout<<"enter no.";
   cin>>n;
 }
  void prime()
 {
    int i,n;
     i=2;
    while(n!=0)
    { 
       if(n%i==0)
        break;
       else
          i++;
     }
  }
  void display()
  {
    int i;
    if(n==i)
     cout<<"\nNo is nots prime:";
    else
     cout<<"\nNo is prime";
   }
};
  int main()
 {
   A s;
  s.read();
  s.prime();
  s.display();
 return 0;
}
