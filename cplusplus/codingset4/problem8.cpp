#include <iostream>
using namespace std;
class B;
class A
{
private:
  int a;

public:
  A()
  {
    a = 10;
  }
  friend int sum(A, B);
};
class B
{
private:
  int b;

public:
  B()
  {
    b = 20;
  }
  friend int sum(A, B);
};
int sum(A x, B y)
{
  return x.a + y.b;
}
int main()
{
  A a;
  B b;
  cout << "Sum = " << sum(a, b) << endl;
}