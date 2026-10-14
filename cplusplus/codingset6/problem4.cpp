#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    try {
        if (marks < 0 || marks > 100)
            throw "Invalid marks.";

        cout << "Marks = " << marks << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}