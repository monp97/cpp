#include<iostream>
using namespace std;
int main()
{
  int k,j,n;
  cout<<"enter th evalue for n"<<endl;
  cin>>n;
  int a1[n];
  cout<<"enter the number of rows"<<endl;
  cin>>k;
  cout<<"enter the number of columns"<<endl;
  cin>>j;
  cout<<"enter the values"<<endl;
  int a2[k][j];
  if(k*j==n)
  {
    for(int i=0;i<k;i++)
     {for(int p=0;p<j;p++)
      {
         cin>>a2[i][p];
      }
    }
  }
  else
   cout<<"wrong values of j and k"<<endl;
  for(int i=0;i<k;i++)
  {
    for(int p=0;p<j;p++)
     cout<<a2[i][p];
    cout<<endl;
  }
   return 0;
}
