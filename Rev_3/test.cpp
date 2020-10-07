#include<iostream>
using namespace std;
class base1
{
  private:
    int a,b;
  public:
    base1(int i):b(i+1),a(b){}
    base1():b(0),a(b){}
    int get_a(){return a;}
    int get_b(){return b;}
};
int main()
{
  base1 obj1(11);
  cout<<obj1.get_a()<<endl<<obj1.get_b()<<endl;
  return 0;
}
