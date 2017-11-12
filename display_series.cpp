#include<iostream>
using namespace std;
#include<math.h>
int fact(int);
void series(int,int);
int main()
{
  int n,i=0,x;
  cout<<"enter the value of n";
  cin>>n;
  series(n,i);
  //cout<<sum<<endl;
  return 0;
}
void series(int n,int i)
{
  //static int sum=0;
  if(i<=n)
  {
    if(i%2!=0)
      {
        i++;
        cout<<"+"<<"x^"<<2*i<<"/"<<(2*i)<<"!";
        series(n,i);
      }
    else
         {
             i++;
            cout<<"-"<<"x^"<<2*i<<"/"<<(2*i)<<"!";
            series(n,i);
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
