#include<iostream>
#include<string>
using namespace std;
class string_len{
private:
   char str[80];
public:
  void get()
  {
    cin>>str;
  }
  int operator > (string_len s2)
  {
    if(strcmp(str,s2.str)>0)
      return 1;
    else
     return 0;
  }
};
int main()
{
  string_len s1,s2;
  cout<<"enter the string one";
  s1.get();
  cout<<"enetr the string two";
  s2.get();
  int r= s1 >s2;
  if(r==1)
   cout<<"string 1 is greater than string 2"<<endl;
  else
   cout<<"string 2 is greater"<<endl;
   return 0;
}
