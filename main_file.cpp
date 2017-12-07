#include<iostream>
#include<fstream>
using namespace std;
class customer{
  fstream file;
 private:
   char name[100];
   float balance;
   int age;
   char account_number[20];
  public:
    void get_details(); //get the details of the customer,login the customer.
    void add_customer();
    void remove_customer();
    void add_balance(); //check if the user is administrator or not.if the user is not the administrator write a message.
    void deduct_balance(); //that he can  not add or remove the customer.
    void check_administrative();//function fro checking the validity of a customer.
    bool login_name(char name[],char account_number[]);
    bool login_account(char account_number[],int line);
};
void customer::get_details() //this function is for getting the details of th ecustomer for knowing his information.
{
   cout<<"Enter your account number";
   cin>>account_number;
   cout<<"Enter your first name";
   cin>>name;
   bool val1=login_name(name,account_number); //call to login name function.
   //bool val2=login_account(account_number,line); //call to login account function.
   if(val1==true)
     cout<<"user exists go ahead"<<endl;
   else
     cout<<"not exists"<<endl;
}
bool customer::login_name(char name[],char account_number[])
 {
    file.open("authorized_names",ios::in); //the authorized users are stored in a file.
    char s[100];
    int i=0,found=0,line=0;
    char a;
    while(!file.eof())
    {
      file.get(a);
      if(a!=' ' && a!='\0' && a!='\n') //getting a word from file one by one,and comparing the word with name.
       {
         s[i]=a;
         i++;
         continue;
       }
       s[i]='\0';
      if(a==' ' || a=='\n')
      {
        i=0;
        if(a=='\n')
         line++;
      }
        if(strcmp(name,s)==0)
        {
          found=1;
          //cout<<s<<" "<<name<<"same"<<endl;
          break;
        }
        if(a=='\0')
          break;
    }
   //cout<<line<<endl;
  if(found==1 && login_account(account_number,line)==true)
   return true;
  else
    return false;
 }
 bool customer::login_account(char account_number[],int line)
  {
     file.open("authorized_accounts",ios::in);//the authorized users are stored in a file.
     char s[100];
     int i=0,found=0;
     char a;
     int l=0;
     while(!file.eof())
     {
       file.get(a);
       if(a!=' ' && a!='\0' && a!='\n')//getting a word from file one by one,and comparing the word with name.
        {
          s[i]=a;
          i++;
          continue;
        }
        s[i]='\0';
       if(a==' ' || a=='\n')
       {
         if(a=='\n')
            l++;
          i=0;
       }
         if(strcmp(account_number,s)==0)
         {
           found=1;
           cout<<s<<" "<<name<<"same"<<endl;
           break;
         }
         if(a=='\0')
           break;
     }
 cout<<line<<" "<<l<<endl;
   if(found==1 )
    return true;
   else
     return false;
  }
int main()
{
  customer ob1;
  cout<<"WELCOME USER"<<endl;
  cout<<"login to your ID"<<endl;
  ob1.get_details();
  return 0;
}
