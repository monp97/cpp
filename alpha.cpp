#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"enter the chracter ";
  cin>>ch;
  int ch1=ch;
  if(ch1>=97 && ch<=123)
   {
     ch1=ch1-32;
     char ch2=ch1;
     cout<<ch2;
   }
  return 0;
}
