#include<iostream>
using namespace std;
#include<math.h>
struct emp{
  float basic_salary;
  float emp_bonus;
  float add_bonus;
  int time;
  float sales;
  float total;
  void get()
  {
    cout<<"enter the following details";
    cout<<"basic salary,sales,number ofyears in company";
    cin>>basic_salary>>sales>>time;
  }
  void cal_emp_bonus()
  {
    if(time<=5)
      emp_bonus=10*time;
    if(time>5)
       emp_bonus=20*time;
  }
  void cal_add_bonus()
  {
    if(sales>=5000 && sales<=10000)
     add_bonus=0.03*sales;
    else if(sales>=10000)
      add_bonus=0.06*sales;
      else
        add_bonus=0;
  }
  void cal_total()
  {
    total=basic_salary+emp_bonus+add_bonus;
    cout<<"total salary is"<<total<<endl;
  }
};
int main()
{
  emp e;
  e.get();
  e.cal_emp_bonus();
  e.cal_add_bonus();
  e.cal_total();
  return 0;
}
