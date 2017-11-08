#include<iostream>
using namespace std;
class sales{
private:
  int sales;
protected:
   void getdata()
   {
     cout<<"enter the sales";
     cin>>sales;
   }
   void putdata()
   {
     cout<<"sales is"<<sales<<endl;
   }
};
class publication{
protected:
  string name;
   int price;
public:
  void getdata()
  {
    cout<<"enetr the name";
    cin>>name;
    cout<<"enter the price";
    cin>>price;
  }
  void putdata()
  {
    cout<<"the name is"<<name<<endl;
    cout<<"the price is"<<price<<endl;
  }
};
class publication2:public publication{
private:
  string date;
public:
   void getdata()
   {
     publication::getdata();
     cout<<"enter the date";
     cin>>date;
   }
   void putdata()
   {
     publication::putdata();
     cout<<"date is"<<date<<endl;
   }
};
class book:public publication2,public sales{
private:
  int page_count;
public:
  void getdata()
  {
    publication2::getdata();
    sales::getdata();
    cout<<"enetr the PAGE COUNT";
    cin>>page_count;
  }
  void putdata()
  {
    publication2::putdata();
    sales::putdata();
      cout<<"page count is"<<page_count<<endl;
  }
};
class tape:public publication2,public sales{
private:
   float tape;
 public:
   void getdata()
   {
     publication2::getdata();
     sales::getdata();
     cout<<"enter the time of playlist";
     cin>>tape;
   }
   void putdata()
   {
     publication2::putdata();
     sales::putdata();
       cout<<"time is"<<tape<<endl;
   }
};
class disk:public publication{
private:
     string disk_type;
public:
  void getdata()
  {
    publication::getdata();
    cout<<"enter the type of disk";
    cin>>disk_type;
  }
  void putdata()
  {
    publication::putdata();
    cout<<"the type of disk is"<<disk_type<<endl;
  }
};
int main()
{
  int n,type;
  cout<<"enter the area of interest press 1 for books and 2 for audio";
  cin>>n;

  book b;
  tape t;
  disk d;
  if(n==1)
  {
    cout<<"enetr the type of user you are  0 or 1";
    cin>>type;
    if(type==1)
    d.getdata();
    else
    b.getdata();
  }
  else if(n==2)
  {

    t.getdata();
  }
 else
   cout<<"the entered number is wrong"<<endl;
  if(n==1)
  {
    if(type==1)
    d.putdata();
    else
    b.putdata();
  }
  else
 {
   t.putdata();
 }
return 0;
}
