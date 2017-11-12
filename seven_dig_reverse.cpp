#include<iostream>
using namespace std;
int main()
{
  long long int n,a;
  cout<<"enter the value for n";
  cin>>n;
  a=n;
  int num=0;
  while(n!=0)
  {
    int rem=n%10;
    num=num*10+rem;
    n=n/10;
  }
  if(num==a)
  {
    cout<<"numbers are same"<<endl;
  }
  else
   cout<<"numbers are diff";
   return 0;
}
