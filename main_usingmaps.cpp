#include<iostream>
#include<map>
#include<iterator>
using namespace std;
class customer{
private:
  float balance;
  //map <int,string> m;
  map <int,string>  cust;
  int age;
public:
  customer()
  {
    //used for making authorized customer list.
    cust.insert(pair <int,string> (121,"monika"));
    cust.insert(pair <int,string> (122,"karan"));
    cust.insert(pair <int,string> (123,"rajat"));
    cust.insert(pair <int,string> (124,"suman"));
    cust.insert(pair <int,string> (125,"komal"));
    cust.insert(pair <int,string> (126,"nidhi"));
    cust.insert(pair <int,string> (127,"sonal"));
    cust.insert(pair <int,string> (128,"pooja"));
  }
  bool validate(string name,int account_number)
  {
    map<int,string>:: iterator i=cust.find(account_number);
     if(i==cust.end())
       return false;
     if( i->second==name && i!=cust.end())
      return true;
     else
      return false;

  }
  void deposit(float amount,int account_number)
  {
    balance=balance+amount;
    //m.insert(pair<int,string> (account_number,cust.at(account_number)));
    cout<<"new balance is"<<balance<<endl;
  }
  bool check_withdrawal(float amount,int account_number)
  {
     if(balance>amount)
       return true;
     else
       return false;
  }
  void withdraw(float amount)
  {
    balance=balance-amount;
  }
  void remove(int account_number)
  {
    cust.erase(account_number);
  }
  void make_account(string name,int account_number)
  {
    cust.insert(pair <int,string> (account_number,name));
  }
  float check_bal()
  {
    return balance;
  }
  void display()
  {
    map<int,string>::iterator i;
    for(i=cust.begin();i!=cust.end();i++)
    {
      cout<<i->first<<" "<<i->second<<endl;
    }
  }
};
int main()
{
  customer c;
  int account_number,chosen,ans;
  float amount;
  string name;
  cout<<"enter the account number"<<endl;
  cin>>account_number;
  cout<<"enter the name of the customer"<<endl;
  cin>>name;
  bool val=c.validate(name,account_number);
  if(val==false)
    cout<<"this account number  with this name doesn't exists in the records"<<endl;
  else
    {
      do{
      cout<<"enter the operation you want to perform "<<endl;
      cout<<"1. DEPOSIT MONEY IN YOUR ACCOUNT"<<endl;
      cout<<"2. WITHDRAW MONEY FROM YOUR ACCOUNT"<<endl;
      cout<<"3. REMOVE YOUR ACCOUNT FROM THE BANK"<<endl;
      cout<<"4. OPEN A NEW ACCOUNT INT THE BANK"<<endl;
      cout<<"5. CHECK YOUR BALANCE"<<endl;
      cout<<"6. DISPLAY ALL THE CURRENT ACCOUNTS"<<endl;
      cout<<"**--------------------------------------**"<<endl;
      cout<<"enter your choice"<<endl;
      cin>>chosen;
      switch(chosen)
      {
        case 1:cout<<"enter the amount you want to deposit"<<endl;
               cin>>amount;
               c.deposit(amount,account_number);
              break;
        case 2:{cout<<"enter the amount you want to withdraw"<<endl;
              cin>>amount;
              bool val=c.check_withdrawal(amount,account_number);
              if(val==false)
                cout<<"THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNT,DEPOSIT AND THEN WITHDRAW"<<endl;
              else
                {
                  cout<<"COLLECT THE MONEY"<<endl;
                  c.withdraw(amount);
                }
                break;
              }
        case 3:{cout<<"are you sure to remove the account from the bank,if yes press 1"<<endl;
               cin>>ans;
               if(ans==1)
                 {
                   c.remove(account_number);
                   cout<<"ACCOUNT REMOVED FROM THE BANK"<<endl;
                 }
              break;
              }
        case 4:{cout<<"enter the name of the customer"<<endl;
                cin>>name;
                cout<<"enter the account number you would prefer"<<endl;
                cin>>account_number;
                bool val1=c.validate(name,account_number);
                if(val1==false)
                {c.make_account(name,account_number);
                cout<<"ACCOUNT ADDED"<<endl;}
                else
                  cout<<"ALREADY AN ACCOUNT EXISTS WITH THIS ACCOUNT NUMBER TRY SOME OTHER NUMBER"<<endl;
                break;}
        case 5:{float bal=c.check_bal();
                 cout<<bal<<endl;
                break;}
        case 6: c.display();
      }
      cout<<"do you want to continue,if yes press 1"<<endl;
      cin>>ans;
    }
    while(ans==1);
    }
  return 0;
}
