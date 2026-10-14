#include <iostream>
using namespace std;

template <class T>
class Pair {
private:
    T a, b;

public:
    // Constructor
    Pair(T x, T y) {
        a = x;
        b = y;
    }

    // Find and display maximum
    void displayMax() {
        if (a > b)
            cout << "Maximum: " << a << endl;
        else
            cout << "Maximum: " << b << endl;
    }

    // Find and display minimum
    void displayMin() {
        if (a < b)
            cout << "Minimum: " << a << endl;
        else
            cout << "Minimum: " << b << endl;
    }
};

int main() {

    // Integer values
    Pair<int> p1(10, 20);

    cout << "Integer Pair:" << endl;
    p1.displayMax();
    p1.displayMin();

    cout << endl;

    // Floating-point values
    Pair<float> p2(5.5, 3.2);

    cout << "Float Pair:" << endl;
    p2.displayMax();
    p2.displayMin();

    return 0;
}