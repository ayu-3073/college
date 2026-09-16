#include <iostream>
using namespace std;
class Number
{
private:
  int a;
  int b;

public:
  Number()
  {
    a = 25;
    b = 40;
  }
  friend void largest(Number n);
};
void largest(Number n)
{
  if (n.a > n.b)
    cout << "Largest = " << n.a << endl;
  else
    cout << "Largest = " << n.b << endl;
}
int main()
{
  Number n;
  largest(n);
