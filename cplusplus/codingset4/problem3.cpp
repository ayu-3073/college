#include <iostream>
using namespace std;
class Complex
{
public:
  int real;
  int imaginary;
  Complex operator+(Complex c)
  {
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }
};
int main()
{
  Complex c1, c2, c3;
  c1.real = 3;
  c1.imaginary = 4;
  c2.real = 2;
  c2.imaginary = 5;
  c3 = c1 + c2;
  cout << "Result = " << c3.real << " + " << c3.imaginary << "i" << endl;
}