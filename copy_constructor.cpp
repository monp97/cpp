#include<iostream>
using namespace std;
class copy1{
private:
  int n;
public:
  copy1(){
    n=2;
  }
  copy1(copy1& c2)
  {
    n=c2.n;
  }
  void display()
  {
    cout<<"number is"<<n<<endl;
  }
};
int main()
{
  copy1 c2;
  copy1 c1=c2;
  c1.display();
  c2.display();
  return 0;
}
