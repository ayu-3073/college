#include <iostream>
#include <string>
using namespace std;

class Text
{
private:
    string str;

public:
    
    Text(string s)
    {
        str = s;
    }

    
    int calculateLength()
    {
        int count = 0;

        for (char ch : str)
        {
            count++;
        }

        return count;
    }
};

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    Text obj(input);

    cout << "Length of string = " << obj.calculateLength() << endl;

    return 0;
}