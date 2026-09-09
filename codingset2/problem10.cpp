#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    int marks[5];

public:
    
    Student()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    
    int calculateTotal()
    {
        int total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        return total;
    }

    
    float calculatePercentage()
    {
        return calculateTotal() / 5.0;
    }

  
    char determineGrade()
    {
        float percentage = calculatePercentage();

        if (percentage >= 90)
            return 'A';
        else if (percentage >= 75)
            return 'B';
        else if (percentage >= 60)
            return 'C';
        else if (percentage >= 40)
            return 'D';
        else
            return 'F';
    }

    
    void displayResult()
    {
        cout << "\n----- Student Result -----" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Total Marks: " << calculateTotal() << " / 500" << endl;
        cout << "Percentage : " << calculatePercentage() << "%" << endl;
        cout << "Grade      : " << determineGrade() << endl;
    }
};

int main()
{
    Student s;

    s.displayResult();

    return 0;
}