//WAP to calculate the A(m,n) ackersman function using recusrsion.
#include<iostream>
using namespace std;
int A(int,int);
int main()
{
  int m,n;
  cout<<"enter the value for m,n";
  cin>>m>>n;
  int result=A(m,n);
  cout<<"result is "<<result<<endl;
  return 0;
}
int A(int m,int n)
{
  if(m==0)
  {
    return n+1;
  }
  if(n>0)
  {
     A(m-1,A(m,n-1));
  }
  return A(m-1,1);
  //cout<<m<<" "<<n<<endl;
}
