#include<iostream>

using namespace std;
template<class T>
T Add(T a,T b)
{
  return a+b;
}
int main()
{
  float a =1.1;
  float b = 1.3;
  cout<<Add(a,b)<<endl;
  return 0;

}
