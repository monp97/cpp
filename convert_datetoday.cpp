#include<iostream>
using namespace std;
int main()
{
 int d,m,y,year_no,month_code,leap=0,cent_code;
 int a[12]={0,3,3,6,1,4,6,2,5,0,3,5};
 cout<<"enter the date";
 cin>>d>>m>>y;
 year_no=((y%100)+(y%100)/4)%7;
  month_code=a[m-1];
  if(y%4==0)
   leap=1;
  if(y>=1800 && y<1900)
    cent_code=2;
  if(y>=1900 && y<2000)
    cent_code=0;
  if(y>=2000 && y<2100)
    cent_code=6;
  if(y>=2100 && y<2200)
    cent_code=4;
 int final=(year_no+month_code-leap+cent_code+d)%7;
  switch(final)
   {
     case 0:cout<<"sunday";
            break;
     case 1:cout<<"monday";
            break;

     case 2:cout<<"tuesday";
            break;

     case 3:cout<<"wednesday";
            break;

     case 4:cout<<"thursday";
            break;

     case 5:cout<<"friday";
            break;

     case 6:cout<<"saturday";
            break;
  }
 return 0;
}

  
 
 
  
