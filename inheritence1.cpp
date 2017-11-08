#include<iostream>
using namespace std;
class vehicle
{
protected:
  int fuel;
public:
  char name[30];
  void get_fuel();
  void use_fuel(int f);
  void add_fuel(int f);
  void display()
    {
    cout<<"fuel in car is"<<fuel<<endl;
    cout<<"the car nam is "<<name<<endl;
    }
};
void vehicle::get_fuel()
{
  cout<<"enetrr the fuel in the car";
  cin>>fuel;
}
void vehicle::use_fuel(int f)
{
  fuel=fuel-f;
}
void vehicle::add_fuel(int f)
{
  fuel=fuel+f;
}
class car:public vehicle
{
public:                       
  void get_name()
   {
     cout<<"enter the name of the car";
     cin>>name;
   }
  void get_fuel()
  {
    vehicle::get_fuel();
  }
};
int main()
{
  car car1;
  car1.get_fuel();
   car1.get_name();
  car1.add_fuel(2);
  car1.display();
  car1.use_fuel(1);
  car1.display();
  return 0;
}
