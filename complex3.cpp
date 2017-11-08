#include<iostream>
using namespace std;
int main()
{ 
  int n=7;
  for(int i=1;i<=5;i++)
   {
     for(int j=1;j<=i;j++)
       { if(i==5 && j==5)
          {
            cout<<"*";
          }
         else
          {
          if(i%2==0 && j%2==0)
            {
              cout<<"*";
            }
          else if(i%2!=0 && j%2!=0)
             cout<<"*";
          else
           cout<<" ";
          }
       }
     for(int k=n;k>=1;k--)
      {
        cout<<" ";
      }
    for(int j=1;j<=i;j++)
       {
         if(i%2==0 && j%2==0)
            {
              cout<<"*";
            }
         else if(i%2!=0 && j%2!=0)
            cout<<"*";
         else
           cout<<" ";
       }
    n=n-2;
   cout<<endl;
}
 int m=1,l=9;
for(int i=4;i>=1;i--)
 {
   for(int j=1;j<=i;j++)
     {
       if(i%2==0 && j%2==0)
            {
              cout<<"*";
            }
         else if(i%2!=0 && j%2!=0)
            cout<<"*";
         else
           cout<<" ";
       }
     for(int k=1;k<=m;k++)
      {
        cout<<" ";
      }
    for(int j=1;j<=i;j++)
       {
         if(i%2==0 && j%2==0)
            {
              cout<<"*";
            }
         else if(i%2!=0 && j%2!=0)
            cout<<"*";
         else
           cout<<" ";
       }
   m=m+2;
  cout<<endl;
   }
return 0;
}
