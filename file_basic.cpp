//program to write to a particular position in the file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file;
  file.open("makenew",ios::in|ios::out);
  char a;
  cout<<"enter the text you want to write into the file";
  cin.get(a);//getting the first character from the user.
  //int tell=file.tellg();
  file.seekp(0,ios::beg);
  while(a!='#')
  {
    file<<a;//putting the character from screen to file.
    cin.get(a);//again getting a new character for continued whiel loop.
   }
   //cout<<tell<<endl;
  return 0;
}
