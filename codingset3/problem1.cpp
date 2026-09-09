#include <iostream>
using namespace std;

class Number {

    
public:
    int value;
    void accept() {
        cout << "Enter a number: ";
        cin >> value; 
    }

    void display() {
        cout << "Sum = " << value << endl;
    }

};

Number add(Number n1, Number n2) {
    Number result;
    result.value = n1.value + n2.value;
    return result;
}

int main() {
    Number num1, num2, sum;

    num1.accept();
    num2.accept();

    sum = add(num1, num2);

    sum.display();

    return 0;
}