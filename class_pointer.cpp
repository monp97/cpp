#include<iostream>
using namespace std;
class point{
private:
  int marks;
public:
  void get()
  {
    cout<<"enter";
    cin>>marks;
  }
  void display()
  {
    cout<<marks<<endl;
  }

};
int main()
{
  point *p=new point[3];
  p->get();
  p->display();
  return 0;
}
