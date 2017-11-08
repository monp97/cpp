#include<iostream>
using namespace std;
class stu{
private:
   int marks;
   int age;
 public:
   void get()
   {
     cin>>marks;
     cin>>age;
   }
   void display()
   {
     cout<<marks<<" "<<age<<endl;
   }
};
int main()
{
  stu *p= new stu;
  p->get();
  p->display();
  return 0;
}
