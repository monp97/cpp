#include<iostream>
using namespace std;
int main()
{ int k=4;
 for(int i=1;i<=5;i++)
  {
   if(i==1)
   {
     for(int j=1;j<=9;j++)
      {
        cout<<"*";
      }
   }
   else
   {
     for(int j=1;j<=k;j++)
      {
        cout<<"*";
      }
     for(int j=1;j<=(2*(i-1)-1);j++)
      cout<<" ";
     for(int j=1;j<=k;j++)
      {
        cout<<"*";
      }
      k--;
   }
  cout<<endl;
  }
 int m=3;
 for(int i=1;i<=4;i++)
  {
   if(i==4)
   {
     for(int j=1;j<=9;j++)
      {
        cout<<"*";
      }
   }
   else
   {
     for(int j=1;j<=(i+1);j++)
      {
        cout<<"*";
      }
     for(int j=1;j<=(2*m-1);j++)
      cout<<" ";
     for(int j=1;j<=(i+1);j++)
      {
        cout<<"*";
      }
      m--;
   }
   cout<<endl;
  }
return 0;
}
