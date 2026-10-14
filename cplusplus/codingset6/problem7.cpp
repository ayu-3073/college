#include <iostream>
using namespace std;

int main() {
    int choice;
    int a, b;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        switch (choice) {
            case 1:
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                if (b == 0)
                    throw 0;

                cout << "Result = " << a / b << endl;
                break;

            default:
                throw 'x';
        }
    }

    catch (int) {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    catch (char) {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}