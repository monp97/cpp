#include<iostream>
using namespace std;
#include<math.h>
int fact(int);
float series(int,int,int);
int main()
{
  int n,i=1,x;
  cout<<"enter the value of n";
  cin>>n;
  cout<<"enetr the value of x";
  cin>>x;
  float sum=series(n,i,x);
  cout<<sum<<endl;
  return 0;
}
float series(int n,int i,int x)
{
  static int sum=0;
  if(i==n+1)
  {
    return sum;
  }
  else
  {
    if(i%2!=0)
      {
        i++;
        return sum-pow(x,2*i)/fact(2*i);
      }
    else
         {
          i++;
          return sum+pow(x,2*i)/fact(2*i);
          }
     }
}
int fact(int n)
{
  int f=1;
  for(int i=n;i>0;i--)
  {
    f=f*i;
  }
  return f;
}
