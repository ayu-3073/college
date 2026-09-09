#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    float marks;

    
    Student(int r, float m) {
        rollNo = r;
        marks = m;
    }
};

Student findTop(Student s1, Student s2) {
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main() {
    Student s1(101, 85.5);
    Student s2(102, 92.0);

    Student top = findTop(s1, s2);

    cout << "Top Student:" << endl;
    cout << "Roll No: " << top.rollNo << endl;
    cout << "Marks: " << top.marks << endl;

    return 0;
}