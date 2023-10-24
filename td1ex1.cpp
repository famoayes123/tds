include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
  char c = '\x01';
  short int p = 10;
  cout<<p + 3<<endl;
   cout<<typeid(p+3).name()<<endl;
  cout<<c + 1<<endl;  
   cout<<typeid(c+1).name()<<endl;
  cout<<p + c<<endl;
   cout<<typeid(p+c).name()<<endl;
  cout<<3 * p + 5 * c<<endl;
   cout<<typeid(3*p+5*c).name()<<endl;
  return 0;
}
