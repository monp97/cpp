#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the number of lines";
  cin>>n;
  int k=1,c=1,m=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      if(i%2==0 && j==1)
      {
        c=m+i-1;
      }
      if(i%2!=0 && j==1)
      {
        k=m;
      }
       if(i%2!=0)
        {
          cout<<k<<" ";
          k++;
          m++;
        }
       else
         {
           cout<<c<<" ";
           c--;
           m++;
         }
    }
    cout<<endl;
  }
    return 0;
}
