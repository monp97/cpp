#include<iostream>
using namespace std;
int main()
{
  int **p=new int*;
   *p=new int;
   int *a=*p;
   **p=2;
   cout<<a<<endl;
   cout<<*p<<endl;
  cout<<**p<<endl;
  return 0;
}
  
