#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the number of elements";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
 int temp=a[0],j;
  for( j=0;j<n-1;j++)
   {
     a[j]=a[j+1];
   }
   a[j]=temp;
  for(int i=0;i<n;i++)
   {
     cout<<a[i];
   }
 return 0;
}
     
