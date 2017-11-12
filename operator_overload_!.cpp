#include<iostream>
using namespace std;
class factorial{
private:
  int  num;
  int fact;
public:
  factorial{
    fact=1;
  }
  void get()
  {
    cout<<"enter the number";
    cin>>num;
  }
  void display()
  {
    cout<<"the factorial if the number is"<<fact<<endl;
  }
};
void factorial::operator !(){
  for(int i=num;i>0;i--)
  {
    fact=fact*i;
  }
}
int main()
{
  factorial o1;
  o1.get();
  !o1;
  o1.display();
  return 0;
}
