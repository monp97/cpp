#include<iostream>
using namespace std;
class one{
protected:
   string name;
   int age;
   int marks;
public:
  void get();
  void display()
  {
    cout<<marks<<endl;
  }
};
void one::get()
{
  cout<<"enter the name";
  cin>>name;
  cout<<"enetr the age";
  cin>>age;
  cout<<"enetr the initial  marks of the student";
  cin>>marks;
}
class two:public one{
private:
   int marks_change;
public:
  void change();
  void display(){
    cout<<"changed marks are"<<marks<<endl;
  }
};
void two::change()
{
  cout<<"enter the changed marks";
  cin>>marks_change;
  marks=marks+marks_change;
}
class three:public two{
private:
   int m;
 public:
   three(){m=0;}
   void change()
   {
     two::change();
     cout<<"hello from the class three"<<endl;
   }
   void display()
   {
     cout<<m<<endl;
   }
};
int main()
{
  two ob;
  ob.get();
  ob.change();
  ob.display();
  ob.one::display();
  three ob1;
  ob1.change();
  ob1.display();
return 0;
}
