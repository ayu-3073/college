// Problem 2 : Student details
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of Rectangle = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle r;   // Object creation

    r.input();
    r.displayArea();

    return 0;
}