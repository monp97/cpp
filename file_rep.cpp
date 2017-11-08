#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file,file1;
  string word,rep;
  file.open("hello",ios::in);
  file1.open("hey",ios::out);
  cout<<"enter the word you want to replace in file";
  cin>>word;
  //int l=word.length();
  cout<<"enter the word you want to replace it with";
  cin>>rep;
  int i=0,j=0;
  while(!file.eof())
  {
    char b;
    char a[100];
    file.get(b);
    if(b!=' ' && !file.eof())
    {
      a[i]=b;
      i++;
      continue;
    }
    a[i]='\0';
    if(b==' ')
    {
    if(a==word)
    {
      int k=0;
      while(rep[k]!='\0')
      {
        file1.put(rep[k]);
        k++;
      }
      file1<<" ";
    }
    else
    {
      j=0;
      while(a[j]!='\0')
      {
        file1.put(a[j]);
        j++;
      }
      file1<<" ";
    }
    }
    else
    break;
    i=0;
  }
  cout<<"done"<<endl;
  return 0;
}
