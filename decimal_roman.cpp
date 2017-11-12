#include<iostream>
using namespace std;
int main()
{
  int n,i=0;
  cout<<"enter the number"<<endl;
  cin>>n;
  string a[4];
  string m[]={"","m","mm","mmm"};
  string c[]={"","c","cc","ccc","cd","d","dc","dcc","dccc","ccm","cm"};
  string x[]={"","x","xx","xxx","xl","l","lx","lxx","lxxx","xc"};
  string o[]={"","i","ii","iii","iv","v","vi","vii","viii","ix"};
  while(n!=0)
  {
    if(n>=1000)
        {int rem=n/1000;a[i]=m[rem];n=n%1000;}
    else if(n>=100)
        {int rem=n/100;a[i]=c[rem];n=n%100;}
    else if(n>=10)
          {int rem=n/10;a[i]=x[rem];n=n%10;}
      else
         {int rem=n;a[i]=o[rem];n=0;}
     cout<<a[i];
     i++;
  }
  cout<<endl;
}
