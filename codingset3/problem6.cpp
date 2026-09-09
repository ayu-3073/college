#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string Name;
    float Salary;

    Employee()
    {
        Name = "";
        Salary = 0;
    }

    Employee(string n, float s)
    {
        Name = n;
        Salary = s;
    }
};

Employee highestSalary(Employee employees[], int size)
{
    Employee highest = employees[0];

    for (int i = 1; i < size; i++)
    {
        if (employees[i].Salary > highest.Salary)
        {
            highest = employees[i];
        }
    }

    return highest;
}

Employee revisedEmployee(Employee e)
{
    e.Salary = e.Salary + (e.Salary * 0.10);
    return e;
}

int main()
{
    Employee employees[3] =
    {
        Employee("Raichu", 50000),
        Employee("Aizen", 65000),
        Employee("Goku", 55000)
    };

    Employee highest = highestSalary(employees, 3);

    cout << "Employee with Highest Salary:" << endl;
    cout << "Name: " << highest.Name << endl;
    cout << "Salary: " << highest.Salary << endl;

    Employee revised = revisedEmployee(employees[0]);

    cout << "\nAfter 10% Salary Increment:" << endl;
    cout << "Name: " << revised.Name << endl;
    cout << "Revised Salary: " << revised.Salary << endl;

    return 0;
}
