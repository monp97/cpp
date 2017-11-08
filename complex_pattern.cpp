#include<iostream>
using namespace std;
int main()
{
  int a,c=9;
  for(int i=1;i<=n;i++)
   {  int l=i;
       int m=(2*i-1);
     for(int j=1;j<=m;j++)
       {
         if(l!=4)
         cout<<"*";
         else
          {
            
            m=(2*(i-1)-1);
            l--;  
          }
           
       }  
   
     for(int k=1;k<=c;k++)
       {
         cout<<" ";
       }
     c=c-4;
      for(int j=1;j<=(2*i-1);j++)
       {
         cout<<"*";
         
       }
     cout<<endl;
  }
 return 0;
}
         
