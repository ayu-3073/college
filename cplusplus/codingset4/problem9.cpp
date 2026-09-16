#include <iostream>
using namespace std;
class Interest
{
public:
  inline double calculateSI(double P, double R, double T)
  {
    return (P * R * T) / 100;
  }
};
int main()
{
  Interest i;
  cout << "SI = " << i.calculateSI(10000, 5, 2) << endl;
