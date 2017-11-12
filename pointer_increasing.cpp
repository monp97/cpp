#include<iostream>
using namespace std;
void add(int*,int*,int,int);
int main()
{
  int m,n;

  cout<<"enter the size1";
  cin>>m;
  cout<<"enter the size2";
  cin>>n;
  int a1[m],a2[n];
  cout<<"enter the array1 of size"<<m;
  for(int i=0;i<m;i++)
   cin>>a1[i];
   cout<<"enter the array2 of size"<<n;
  for(int i=0;i<n;i++)
    cin>>a2[i];
  add(a1,a2,m,n);

  return 0;
}
void add(int *p1,int *p2,int m,int n)
{
  int a3[m+n];
  int i=0,j=0,k=n-1;
  while(i<m+n)
  {
    while(j<m)
    {
       a3[i]=p1[j];
       j++;
       i++;
    }
    //i=m+n-1;
    while(k>=0)
    {
      a3[i]=p2[k];
      k--;
      i++;
    }
  }
  for(int i=0;i<m+n;i++)
  {
    cout<<a3[i]<<" ";
  }

}
