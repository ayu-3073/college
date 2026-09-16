#include <iostream>
using namespace std;

class Area {
 public:
  double  calculate(int side){
    return side*side;
  } 
  double  calculate(int length, int breadth){
    return length*breadth;
  }
  double  calculate (double radius){
   return 3.14*radius*radius;
  }
};
int main(){
  Area area;
  cout <<"Area of square of side 5 is: "<<area.calculate(5)<<endl;
  cout <<"Area of rectangle of length 4 and breadth 6 is: "<<area.calculate(4,6)<<endl;
  cout <<"Area of circle of radius 3.5 is: "<<area.calculate(3.5)<<endl;
};