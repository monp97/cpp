#include<iostream>
using namespace std;
int main()
{
  int d,m,y,l=0;
  cout<<"enter th edate";
  cin>>d>>m>>y;
   if(y%4==0)
    l=1;
  if(y<=2015 && y>=1985)
   {
     if((m%2!=0)||(m==8))
      {
        if(d>=1 && d<=31)
           cout<<"date is a valid date";
        else
           cout<<"date is invalid";
      }
     else
      {
        if(m==2)
          {
            if(l==1)
             {
               if(d>=1 && d<=29)
                 cout<<"date is a valid date";
               else
                 cout<<"date is invalid";
             }
            else
             {
               if(d>=1 && d<=28)
               cout<<"date is a valid date";
               else
               cout<<"date is invalid";
             }
          }
        else
          {
            if(d>=1 && d<=30)
              cout<<"date is a valid date";
            else
              cout<<"date is invalid";
          }
        }
      }
     else 
      cout<<"date is not valid";
return 0;
}
  

      

         
  
