#include<iostream>
using namespace std;
struct complex{
  float inti;
  float comp;
  void  get_comp();
  void add_comp(complex c2);
};
void complex::get_comp()
{
  cout<<"enter the complex numeber";
  cout<<"enetr the integer part";
  cin>>inti;
  cout<<"entr the complex part";
  cin>>comp;
}
void complex::add_comp(complex c2)
{
  int sum_int= inti + c2.inti;
  int sum_comp= comp + c2.comp;
  cout<<"the sum of complex numbers is"<<sum_int<<"+"<<sum_comp<<"i"<<endl;
}
int main()
{
  complex c1,c2;
  c1.get_comp();
  c2.get_comp();
  c1.add_comp(c2);
  return 0;
}
