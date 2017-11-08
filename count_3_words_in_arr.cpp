#include<iostream>
using namespace std;
int main()
{
   char str[100];
   int k=0,i=0,three=0;
   cout<<"enter the string";
   gets(str);
   while(str[i]!='\0')
   {
     while(str[i]!='\0' && str[i]!=' ')
     {
       temp[k]=str[i];
       i++;
       k++;
     }
     temp[k]='\0';
     if(strlen(temp)==3)
     {
       three++;
     }
     if(str[i]==' ')
     {
       i++;
     }
   }
   cout<<"three letter words are"<<three<<endl;
   return 0;
}
