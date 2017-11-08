#include<iostream>
using namespace std;
int add(int);
int main()
{
  cout<<"enter ten numbers";
  int s=0;
  int sum=add(s);
  cout<<sum;
  return 0;
}
 int add(int s)
  {
      int static n=1;int h;
      int n1;
      if(n==10)
        return s;
      if(n<=10)
       { cin>>n1;
          n++;
       }
      s=s+n1;
      return add(s);
      
  }
    
 
