#include<iostream>
using namespace std;
int main()
{
  char s[300];
  cout<<"enter the lines";
  cin.get(s,300,'#');
 int hash[26]={0};
  cout<<s<<endl;
 for(int i=0;s[i]!='\0';i++)
  {
    hash[s[i]-'a']++;
  }
 for(int i=0;i<26;i++)
  {
    if(hash[i]==0)
     continue;
    cout<<char(i+'a')<<hash[i]<<" ";
  }
return 0;
}
