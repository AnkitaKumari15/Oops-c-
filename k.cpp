// sum of n natural number by using do-while loop
#include<iostream>
using namespace std;
class A
{
  int n;
  public:
   void read()
  {
    cout<<"\nEnter no";  
    cin>>n;
  }
   void summ()
  {
    int i, s=0;
   for(i=1;i<=n;i++)
   {
     s=s+i;
   }
  cout<<"\n sum=";
  cout<<s;
  }
  
};
  int main()
{
  A x;
 x.read();
 x.summ();
 return 0;
}
