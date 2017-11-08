#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file;
  fstream file1;
  char a[30];
  char ch;int i=0;
  int n;
  cout<<"enter the file name";
  cin>>a;
  cout<<"enter the character you want to delet from the file";
  cin>>n;
  file.open(a,ios::in);
  file1.open("yo",ios::out);
  while(!file.eof())
  {
    file.get(ch);
    i++;
    if(i==n)
    {
      continue;
    }
    else
    {
      file1.put(ch);
    }
  }
  file.close();
  file1.close();
  return 0;
}
