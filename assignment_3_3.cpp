#include<iostream>
using namespace std;
//#define pi 3.14;
float pi=3.14;
struct circle
{
  float radius;
  float area;
  float circum;
  void get_r()
  {
    cout<<"enter the value of radius";
    cin>>radius;
  }
  void get_area()
  {
    area=pi*radius*radius;
  }
  void get_circum()
  {
    circum=2*pi*radius;
  }
  void display()
  {
    cout<<"area of the circle is"<<area<<endl;
    cout<<"circumference of the circle is"<<circum<<endl;
  }
};
int main()
{
 circle c1;
 c1.get_r();
 c1.get_area();
 c1.get_circum();
 c1.display();
 return 0;
}
