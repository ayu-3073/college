#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int roll;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    ofstream file("students.txt");

    file << "Roll Number: " << roll << endl;
    file << "Name: " << name << endl;
    file << "Marks: " << marks << endl;

    file.close();

    cout << "Student details saved successfully." << endl;

    return 0;
}