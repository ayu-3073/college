#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException {
};

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0)
            throw NegativeNumberException();

        cout << "Square root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException) {
        cout << "Error: Square root of a negative number cannot be calculated." << endl;
    }

    return 0;
}