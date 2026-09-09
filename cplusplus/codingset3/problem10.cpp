#include <iostream>
using namespace std;

class Result
{
public:
    int rollNo;
    int marks[5];


    
    Result(int r = 0, int m1 = 0, int m2 = 0, int m3 = 0,
           int m4 = 0, int m5 = 0)
    {
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
            sum += marks[i];

        return sum;
    }

    void compare(Result other)
    {
        if (total() > other.total())
            cout << "Roll Number " << rollNo << " has higher total marks."
                 << endl;
        else if (total() < other.total())
            cout << "Roll Number " << other.rollNo
                 << " has higher total marks." << endl;
        else
            cout << "Both students have equal total marks." << endl;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";

        cout << endl;
        cout << "Total Marks: " << total() << endl;
    }

    friend Result topper(Result r1, Result r2, Result r3);
    friend Result applyGrace(Result r);
};

Result topper(Result r1, Result r2, Result r3)
{
    Result top = r1;

    if (r2.total() > top.total())
        top = r2;

    if (r3.total() > top.total())
        top = r3;

    return top;
}

Result applyGrace(Result r)
{
    Result newResult = r;

    int totalGrace = 0;

    for (int i = 0; i < 5; i++)
    {
        int grace = 5;

        if (totalGrace + grace > 20)
            grace = 20 - totalGrace;

        newResult.marks[i] += grace;
        totalGrace += grace;

        if (totalGrace == 20)
            break;
    }

    return newResult;
}

int main()
{
    Result r1(101, 70, 65, 80, 75, 68);
    Result r2(102, 85, 72, 78, 80, 75);
    Result r3(103, 75, 90, 70, 82, 80);

    cout << "Student 1:" << endl;
    r1.display();

    cout << "\nStudent 2:" << endl;
    r2.display();

    cout << "\nStudent 3:" << endl;
    r3.display();

    cout << "\nComparison between Student 1 and Student 2:" << endl;
    r1.compare(r2);

    Result top = topper(r1, r2, r3);

    cout << "\nTopper:" << endl;
    top.display();

    Result graceResult = applyGrace(r1);

    cout << "\nResult of Student 1 after applying Grace Marks:" << endl;
    graceResult.display();

    return 0;
}