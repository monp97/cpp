#include<iostream>
using namespace std;
int main()
{
  int money,fif_notes,twenty_notes,hund_notes,ten_notes,five_notes,one_notes; 
  cout<<"enter the amount of money";
   cin>>money;
     hund_notes=money/100;
     money=money-hund_notes*100;
       if(money>=50)
         {
           fif_notes=money/50;
           money=money-fif_notes*50;
         }
       else
         fif_notes=0;
      if(money>=20)
        {
           twenty_notes=money/20;
           money=money-twenty_notes*20;
         } 
       else
         twenty_notes=0;
      if(money>=10)
       { 
         ten_notes=money/10;
         money=money-ten_notes*10;
       }
       else
         ten_notes=0;
 cout<<"100 notes:"<<hund_notes<<endl; 
 cout<<"50 notes:"<<fif_notes<<endl;
 cout<<"20 notes:"<<twenty_notes<<endl;
 cout<<"10 notes:"<<ten_notes<<endl; 
return 0;
}
       
