#include<iostream>
using namespace std;
int main()
{
  char str[3][30];
  for(int i=0;i<3;i++)
  cin>>str[i];
  for(int i=2;i>=0;i--)
  {
    int l=strlen(str[i]);
    int j=0;
    while(j!=l)
      {
        cout<<str[i][j];
        j++;
      }
      cout<<" ";
  }
  return 0;
}
