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
     i=1;
    do
    {
     s=s+i;
     i++;
   }while(i<=n);
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
