#include<iostream>
using namespace std;
int find_length(int num)
{
  int i=0;
  while(num!=0)
  {
   i++;
   num=num/10;
  }
  cout<<i<<endl;
 return i;
} 
int main()
{
  int n;
  cout<<"enter the value for n";
  cin>>n;
  int a[n][2];
  for(int i=0;i<n;i++)
  {
    cin>>a[i][0];
  }
  for(int i=0;i<n;i++)
  {
   cout<<"array"<<i<<" "<<a[i][0]<<endl;
     int n=a[i][0];
     int len= find_length(n);
     a[i][1]=len;
  }
 int max_num;
 int max=a[0][1];
  for(int i=0;i<n;i++)
  {
   if(a[i][1]>=max)
    {
      //cout<<a[i][1]<<endl;
      max=a[i][1];
      max_num=a[i][0];
    }
  }
cout<<max<<" "<<max_num<<endl;
return 0;
}  

