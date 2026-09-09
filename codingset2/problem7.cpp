#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employeeName;
    float basicSalary;

public:
    // Constructor
    Employee(string name, float salary)
    {
        employeeName = name;
        basicSalary = salary;
    }

    // Function to calculate HRA
    float calculateHRA()
    {
        return 0.20 * basicSalary;
    }

    // Function to calculate DA
    float calculateDA()
    {
        return 0.10 * basicSalary;
    }

    // Function to display gross salary
    void displayGrossSalary()
    {
        float HRA = calculateHRA();
        float DA = calculateDA();
        float grossSalary = basicSalary + HRA + DA;

        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << HRA << endl;
        cout << "DA (10%): " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    string name;
    float salary;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> salary;

    Employee emp(name, salary);

    emp.displayGrossSalary();

    return 0;
}