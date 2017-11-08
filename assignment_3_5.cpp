#include<iostream>
#include<fstream>
using namespace std;
class file{
private:
  char a[100];
  char b;
  int words,space,line;
public:
  fstream file1;
  file()
  {
    words=0;
    space=0;
    line=0;
  }
  void open_file()
  {
    file1.open("hey",ios::in);
  }
  
  void count()
  {
    file1.seekg(0,ios::end);
    int size = file1.tellg();
   // cout<<"Size:"<<size;
    if(size == 0)
	return;
    file1.seekg(0);

    while(!file1.eof())
    {
      file1.get(b);
      if(b==' ')
        space++;
      else if(b=='\n')
         line++;
      else
        words++;
    }
  }
  void disp()
  {
    cout<<"no of characters"<<words<<endl;
    cout<<"no of line"<<line<<endl;
    cout<<"number of spaces"<<space<<endl;
  }
};
int main(){
  file f;
  f.open_file();
  f.count();
  f.disp();
  return 0;
}
