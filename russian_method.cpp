#include<iostream>
using namespace std;
int main()
{
  int a,b,sum=0;
  cout<<"enter the value of a and b";
  cin>>a>>b;
  while(a!=0)
   {
     cout<<a<<"   "<<b<<endl;
    if(a%2==1)
      sum=sum+b;
    a=a/2;
    b=b*2;
    
   }  
 cout<<sum<<endl;
 return 0;
}
