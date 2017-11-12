#include<iostream>
using namespace std;
int print(int,int);
int main()
{
  int n;
  cout<<"enetr the value for n";
  cin>>n;
  int sum=print(n,1);
  cout<<sum<<endl;
  return 0;
}
int print(int n,int i)
{
  static int sum=0;
  if(i==n)
  {
    sum=sum+i;
    return sum;
  }
  else{
    sum=sum+i;
    i++;
    return print(n,i);}
}
