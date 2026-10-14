#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNumber;
    int age;

public:
    // Constructor
    Student(string n, int r, int a) {
        name = n;
        rollNumber = r;
        age = a;
    }
};

// Derived class
class EngineeringStudent : public Student {
private:
    string branch;
    int semester;

public:
    // Constructor
    EngineeringStudent(string n, int r, int a, string b, int s)
        : Student(n, r, a) {
        branch = b;
        semester = s;
    }

    // Function to display details
    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    EngineeringStudent s1("Ayush", 39, 20, "CSE", 2);

    s1.display();

    return 0;
}