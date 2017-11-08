#include<iostream>
#include<cctype>
using namespace std;
class to_up{
private:
   char a[80];
public:
  void get()
  {
    cout<<"enter the string";
    cin>>a;
  }
  void operator ++(int)
  {
    int i=0;
      while(a[i]!='\0')
      {
        a[i]=a[i]-32;
        i++;
      }
    cout<<a<<endl;
  }
};
int main()
{
  to_up o1;
  o1.get();
  o1++;
  //o1.display();
  return 0;
}
