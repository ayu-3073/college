#include <iostream>
using namespace std;

class Distance
{
public:
  int feet;
  int inches;

  Distance(int f = 0, int i = 0)
  {
    feet = f;
    inches = i;
  }

  Distance add(Distance d)
  {
    Distance result;

    result.feet = feet + d.feet;
    result.inches = inches + d.inches;

    if (result.inches >= 12)
    {
      result.feet += result.inches / 12;
      result.inches = result.inches % 12;
    }

    return result;
  }

  void display()
  {
    cout << feet << " ft " << inches << " in";
  }
};

int main()
{
  Distance d1(5, 10);
  Distance d2(3, 8);

  Distance total = d1.add(d2);

  cout << "Total Distance: ";
  cout << total.feet << " ft " << total.inches << " in";

  return 0;
}