#include<iostream>
using namespace std;
class book_ticket{
private:
  string airway;
  string source;
  string dest;
  int num_pas;
public:
   book_ticket()
   {
     num_pas=0;
   }
   void airways()
   {
     cout<<"enter the airways you want to fly with";
     cin>>airway;
   }
   void sources();
   void dests();
   void pass();
   void display();
};
void book_ticket::pass()
{
  cout<<"enter the number of passengers"<<endl;
  cin>>num_pas;
}
void book_ticket::sources()
{
  cout<<"enter the source";
  cin>>source;
}
void book_ticket::dests()
{
  cout<<"enter the destination";
  cin>>dest;
}
void book_ticket::display()
{
  cout<<"your flight has been booked from "<<source<<"to "<<dest<<endl;
  cout<<"number of passengers"<<num_pas<<endl;
}
class arrival:public book_ticket{
private:
  int leave_time;
public:
  void get_time()
  {
    cout<<"enter the leaving time from source";
    cin>>leave_time;
  }
  void get_data()
  {
    book_ticket::airways();
    book_ticket::sources();
    book_ticket::dests();
    book_ticket::pass();
  }
  void display()
  {
    book_ticket::display();
    cout<<"your leaving time is"<<leave_time<<endl;
    cout<<"your tickets have been booked! thankyou"<<endl;
  }
};
class departure:public book_ticket{
private:
  int dept_time;
public:
  void get_time()
  {
    cout<<"enter the departure time";
    cin>>dept_time;
    if(dept_time>24)
     cout<<"wrong time"<<endl;
  }
  void display()
  {
    book_ticket::display();
    cout<<"your departing time is"<<dept_time<<endl;
  }
};
class arr_dep:public arrival,public departure{
public:
  void get_data()
  {
    arrival::get_data();
    arrival::get_time();
    departure::get_time();
  }
  void display()
  {
    cout<<"thankyou for booking both sides tickets with us user"<<endl;
    arrival::display();
    departure::display();
    cout<<"your both sides the tickets have been booked...hope you will have a good experience"<<endl;
  }
};
int main()
{
  int a;
  cout<<"welcome user"<<endl;
  cout<<"book your tickets here"<<endl;
  cout<<"which tickets you would want to book??";
  cout<<"ONE SIDE(1) OR BOTH SIDES(2)"<<endl;
  cin>>a;
  if(a==1)
  {
    arrival ob1;
    ob1.airways();
    ob1.get_time();
    ob1.display();
  }
  else
  {
    arr_dep ob2;
    ob2.get_data();
    ob2.display();
  }
  return 0;
}
