#include <iostream>
using namespace std;

class ArraySum
{
private:
    int arr[10];

public:
    
    ArraySum()
    {
        cout << "Enter 10 array elements:" << endl;

        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }

    void findSum()
    {
        int sum = 0;

        for (int i = 0; i < 10; i++)
        {
            sum = sum + arr[i];
        }

        cout << "Sum of array elements = " << sum << endl;
    }
};

int main()
{
    ArraySum obj;

    obj.findSum();

    return 0;
}