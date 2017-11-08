#include<iostream>
using namespace std;
int cal(int);
int main()
{
  int n;
 cout<<"enter the number";
 cin>>n;
 int rev=cal(n);
  cout<<rev<<endl;
 return 0;
}
int cal(int n)
{ 
  static int rev=0;
 if(n==0)
   return rev;
  if(n!=0)
  {
    int r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
 return cal(n);
}
    
  
 
