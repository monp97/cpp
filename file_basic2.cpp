//make a program to replace a word in file .
#include<iostream>
#include<fstream>
using namespace std;
#include<stdio.h>
int main()
{
fstream file;
fstream file1;
file.open("makenew",ios::in);
file1.open("makenew1",ios::out);
char a;
int i;
char ar[50];
while(!file.eof())
{
  file.get(a);
  i=0;
  while(a!=' ' && a!='\n' && a!='\r' && !file.eof())
  {
    ar[i]=a;
    file.get(a);
    i++;
  }
  ar[i]='\0';
  if(strcmp(ar,"cat")==0)
  {
     file1<<"bat ";
     continue;
  }
  else
  {
    cout<<ar<<" ";
    file1<<ar<<" ";
    continue;
  }
  if(a==' ' || a=='\n')
    continue;

}
rename("makenew1","makenew");//renaming the new file to the old name. 
return 0;
}
