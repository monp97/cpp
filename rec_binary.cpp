#include<iostream>
using namespace std;
int* binary_rec(int,int);
int c=0;
int main()
{
  int n;
  cout<<"enter the number you want to convert";
  cin>>n;
   int i=0;
  int *p=binary_rec(n,i);
  while(i<c)
   {
    cout<<p[i];
    i++;
   }
  cout<<endl;
 return 0;
}
int* binary_rec(int n,int i)
{
   static int a[50],b[50];
  if(n!=0)
  {
    int a1=n%2;
    n=n/2;
    a[i]=a1;
    i++;
    c++;
   binary_rec(n,i);
  }
  else
   {
    int k=0;
    for(int j=i-1;j>=0;j--)
     {
       b[k]=a[j];
       k++;
     }
    b[k]='\0';
   }
 int *p=&b[0];
 return p;
   
}
  

