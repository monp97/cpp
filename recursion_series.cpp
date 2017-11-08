#include<iostream>
using namespace std;
#include<math.h>
int rec(int ,int,int);
int main()
{
  int n,x;
  cout<<"enter the terms which you want to calculate";
  cin>>n;
  cout<<"enter the value for x n the series";
  cin>>x;
   int sum1=rec(n,x,1);
  cout<<"the sum is"<<sum1<<endl;
  return 0;
}
int rec(int n,int x, int sum1)
{ static int i=1;static int sum=sum1; 
 if(n>1)
   {
      sum=sum+pow(x,i);
      i++;n--;
     rec(n,x,sum);
   }
  return sum;
}   
