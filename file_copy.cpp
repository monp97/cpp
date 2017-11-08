#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file,file1;
  file.open("hello",ios::in|ios::ate);
  file1.open("hey",ios::out);
  while(!file.eof())
  {
    char a;
    file.get(a);
    file1.put(a);
  }
  file.close();
  file1.close();
  return 0;
}
