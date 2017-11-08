#include<iostream>
using namespace std;
class time
{
private:
    int h;
    int m;
    int s;
public:
   void get_time();
   void change_time();
   void disp();
};
void time::get_time()
{
  cout<<"enter the time in hour,minute,seconds";
  cin>>h>>m>>s;
}
void time::change_time()
{
  int h1,m1,s1;
  cout<<"enter the changed time";
  cin>>h1>>m1>>s1;
  h=h1;
  m=m1;
  s=s1;
}
void time::disp()
{
  cout<<endl;
  if(h>12)
  cout<<"good afternoon ";
  else if(h<12)
  cout<<"good morning ";
  else cout<<"good night";
}
class user_time:public time{


public:
  char name[20];
  char msg[100];
   void get_name()
   {
     cout<<"enter the user name";
     cin>>name;
     cout<<"enter the message user want to print";
     cin.ignore();
     cin.getline(msg,100);
   }
   void display()
   {
     time::disp();
     cout<<name<<endl;
     cout<<msg<<endl;
   }
};
int main()
{
  user_time u1;
  u1.get_name();
  u1.get_time();
  u1.change_time();
  u1.display();
  return 0;
}
