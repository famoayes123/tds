#include<iostream>
using namespace std;

int main()
{
	int n = 5, p = 9 ;
    int q ;
    float x ; 
  cout<< (q = n <p) <<endl;
  cout<< (q = n==p) <<endl;  
  cout<< (q = p % n + p > n) <<endl;
  cout<< (x = p / n) <<endl;
  cout<< (x =float (p / n)) <<endl;
  cout<< (x = (p + 0.5) / n) <<endl;
  cout<< (x =int (p + 0.5) / n) <<endl;
  cout<< (q = n * (p > n ? n : p)) <<endl;
  cout<< (q = n * (p < n ? n : p)) <<endl;
  return 0;
}
