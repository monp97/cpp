#include<iostream>
using namespace std;
void fib(int,int,int);
int main()
{
  int n;
 cout<<"enter the number of terms ";
 cin>>n;
 int a=0,b=1;
  cout<<a<<b;
    n=n-2;
  if(n>2)
    fib(n,a,b);
 return 0;
}
void fib(int n,int a,int b)
{
     int c; 
     c=a+b;
    cout<<c;
    int next=b;
    b=c;
    a=next;
    n--;
    if(n!=0)
    fib(n,a,b);
}   
