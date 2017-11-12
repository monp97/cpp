#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int n,a=1,b=1,c,j=0,k=0;
  cout<<"enetr the number of terms in fibbonacci numbers";
  cin>>n;
  float ar[n];
  cout<<a<<" "<<b;
  for(int i=2;i<=n;i++)
  {
    c=a+b;
    //cout<<c<<" ";
    ar[j]=c;
    j++;
    a=b;
    b=c;
  }
  k=2;
  for(int i=1;i<n;i++)
  {
    float d=ar[i]/ar[k];
    //cout<<setprecision(5)<<d<<" ";

    k++;
  }
  return 0;
}
