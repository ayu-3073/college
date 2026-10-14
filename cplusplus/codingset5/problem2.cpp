#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int employeeID;
    string name;

public:
    // Constructor
    Employee(int id, string n) {
        employeeID = id;
        name = n;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;
    float salary;

public:
    // Constructor
    Manager(int id, string n, string d, float s)
        : Employee(id, n) {
        department = d;
        salary = s;
    }

    // Display function
    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------------" << endl;
    }
};

int main() {

    // Array of 5 Manager objects
    Manager managers[5] = {
        Manager(101, "Luffy", "CSE", 60000),
        Manager(102, "Zoro", "HR", 55000),
        Manager(103, "Sanji", "Finance", 65000),
        Manager(104, " Nami", "Marketing", 58000),
        Manager(105, "Usop", "IT", 70000)
    };

    // Display details of all managers
    for (int i = 0; i < 5; i++) {
        cout << "Manager " << i + 1 << endl;
        managers[i].display();
    }

    return 0;
}


