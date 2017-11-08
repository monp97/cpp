#include<iostream>
using namespace std;
int main()
{
  int d1,m1,y1;//assuming date 2 is bigger than date 1
  int d2,m2,y2,borrow;
  cout<<"enter the first date";
  cin>>d1>>m1>>y1;
  cout<<"enter the second date";
  cin>>d2>>m2>>y2;
  if(y2>=y1)
   {
     if(d1>d2)
      {
        if(((m2-1)%2!=0)||m2==9)
         {
           borrow=31;
         }
       else if(m2==3)
        {
          if(y2%4==0)
            borrow=29;
          else
            borrow=28;
        }
      else
        borrow=30;
    
      d2=d2+borrow;
       m2--;
     }
    if(m1>m2)
     {
       m2=m2+12;
       y2--;
     }
   }         
        
   
 else
   cout<<"enter a valid date where date2 is larger than date1";
  int diff1=d2-d1;
  int diff2=m2-m1;
  int diff3=y2-y1;
  cout<<diff1<<"days"<<diff2<<"months"<<diff3<<"years"<<endl;
  return 0;
}
