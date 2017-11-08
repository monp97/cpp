#include<iostream>
using namespace std;
struct student{
  char name[20];
  int maths;
  int sci;
  int marks;
  char grade;
  void get_info();
  void cal();
  void display_grade();
};
void student::get_info()
{
  cout<<"enetr the name of the student";
  cin>>name;
  cout<<"enetr the marks of student in maths out of 100";
  cin>>maths;
  cout<<"enetr the marks of student in science out of 100";
  cin>>sci;
 // cout<<name<<maths<<sci<<endl;
}
void student::cal()
{
  marks=(sci+maths)/2;
  //cout<<marks<<endl;
  if(marks>90)
  {
    grade='A';
  }
  else if(marks>70)
  {
    grade='B';
  }
  else
   grade='C';
}
void student::display_grade()
{
  cout<<"name of the student"<<name<<endl;
  cout<<"grade of the student"<<grade<<endl;
  cout<<"marks of the student"<<marks<<endl;
}
int main()
{
  int no;
  cout<<"enter the number of students in class";
  cin>>no;
  student s[no];
  for(int i=0;i<no;i++)
  {
    s[i].get_info();
  }
  for(int i=0;i<no;i++)
  {
    s[i].cal();
  }
  for(int i=0;i<no;i++)
  {
    s[i].display_grade();
  }
  return 0;
}
