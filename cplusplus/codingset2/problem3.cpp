// Problem 3 : Number analyser
#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    bool isEven()
    {
        return (num % 2 == 0);
    }

    void displayResult()
    {
        if (isEven())
            cout << num << " is Even." << endl;
        else
            cout << num << " is Odd." << endl;
    }
};

int main()
{
    Number n;

    n.input();
    n.displayResult();

    return 0;
}