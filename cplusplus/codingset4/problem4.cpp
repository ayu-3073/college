#include <iostream>
using namespace std;
class Distance
{
public:
  int feet;
  int inches;
  Distance operator+(Distance d)
  {
    Distance temp;
    temp.feet = feet + d.feet;
    temp.inches = inches + d.inches;
    if (temp.inches >= 12)
    {
      temp.feet = temp.feet + temp.inches / 12;
      temp.inches = temp.inches % 12;
    }
    return temp;
  }
};
int main()
{
  Distance d1, d2, d3;
  d1.feet = 5;
  d1.inches = 8;
  d2.feet = 3;
  d2.inches = 9;
  d3 = d1 + d2;
  cout << "Result = " << d3.feet << " ft "
       << d3.inches << " in" << endl;
}