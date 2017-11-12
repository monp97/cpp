//using friend function or class in program
#include<iostream>
using namespace std;
class elder{
private:
  int money;
  int spent;
public:
  void get()
  {
    cout<<"enter the  total money alloted";
    cin>>money;
  }
  void expenditure()
  {
    cout<<"enetr the money you have spended";
    cin>>spent;
    money=money-spent;
  }
  friend class younger;
};
class younger{
private:
  int spent;
  int saved;
public:
  void expenditure(elder ob1)
  {
    cout<<"enter your part of expenditure";
    cin>>spent;
    saved=ob1.money-spent;
    cout<<"money saved  is"<<saved<<endl;
  }
};
int main()
{
  elder ob1;
  younger ob2;
  ob1.get();
  ob1.expenditure();
  ob2.expenditure(ob1);
  return 0;
}
