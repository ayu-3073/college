#include <iostream>
using namespace std;

// Template function to find larger value
template <class T>
T larger(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

// Template function to swap two values
template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    // Integer
    int a = 10, b = 20;
    cout << "Larger integer: " << larger(a, b) << endl;
    swapValues(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    // Float
    float x = 5.5, y = 3.2;
    cout << "Larger float: " << larger(x, y) << endl;
    swapValues(x, y);
    cout << "After swapping: " << x << " " << y << endl;

    // Double
    double p = 12.5, q = 15.7;
    cout << "Larger double: " << larger(p, q) << endl;
    swapValues(p, q);
    cout << "After swapping: " << p << " " << q << endl;

    // Character
    char c1 = 'A', c2 = 'Z';
    cout << "Larger character: " << larger(c1, c2) << endl;
    swapValues(c1, c2);
    cout << "After swapping: " << c1 << " " << c2 << endl;

    return 0;
}