#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int index;

    cout << "Enter index: ";
    cin >> index;

    try {
        if (index < 0 || index > 9)
            throw "Index out of bounds.";

        cout << "Element = " << arr[index] << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}