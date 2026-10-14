#include <iostream>
using namespace std;

class NotEligibleException {
};

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18)
            throw NotEligibleException();

        cout << "Eligible to vote." << endl;
    }
    catch (NotEligibleException) {
        cout << "Error: You must be 18 or older to vote." << endl;
    }

    return 0;
}