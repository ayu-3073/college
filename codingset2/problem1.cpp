//problem 1 : Student details
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    void setData() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayData() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;   

    s1.setData();
    s1.displayData();

    return 0;
}