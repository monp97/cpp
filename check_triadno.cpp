#include<iostream>
using namespace std;
int main()
{
  int a[3],b[20],c=1;
  cout<<"enter the three numbers";
  for(int i=0;i<3;i++)
   cin>>a[i];
  for(int i=0;i<3;i++)
   {
     c=0;
     int r=a[i];
     while(r!=0)
      {
        r=r/10;
        c++;
      }
    if(c!=3)
      break;
   }
  if(c!=3)
   {
     cout<<"nummbers are not triad"<<endl;
   }
  else
  {
    int j=0;
     for(int i=0;i<3;i++)
      { 
     int r=a[i];
     while(r!=0)
        { 
        int a=r%10;
        b[j]=a;
        j++;
        r=r/10;
        c++;
       }
      }
  int r=0;
  for(int i=0;i<j;i++)
   {
     for(int k=i+1;k<j;k++)
       {
         if(b[i]==b[k])
           {
             r++;
             break;
           }
       }
     if(r!=0)
      {
       cout<<"the numbers are not triad there digits are repeated"<<endl;
        break;
      }
   }
  if(r==0)
  {
   if((a[1]==2*a[0])&&(a[2]==3*a[0]))
     {
      cout<<"the numbers are triad numbers"<<endl;
     }
   else
     cout<<"numbers are not triad numbers"<<endl;
  }
 }
return 0;
}

  

  
       
