#include<iostream>
using namespace std;
int rem(int a,int b);
int main()
{
  int a,b;
  cout<<"enter the value for a";
  cin>>a;
  cout<<"enter the value for b";
  cin>>b;
  int rem1=rem(a,b);
  cout<<rem1<<endl;
 return 0;
}
int rem(int a,int b)
{ 
  static int i=0;
  if(a>=0 && a<b)
    return i;
   if(a>=b)
    {
     a=a-b;
      i++;
    }
  return rem(a,b);
}
