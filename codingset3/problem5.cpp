#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    
    Complex add(Complex c) {
        Complex result;

        result.real = real + c.real;
        result.imag = imag + c.imag;

        return result;
    }

    Complex multiply(Complex c) {
        Complex result;

        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);

        return result;
    }
};

Complex subtract(Complex c1, Complex c2) {
    Complex result;

    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;

    return result;
}

void display(Complex c) {
    cout << c.real;

    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";

    cout << endl;
}

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);


    Complex sum = c1.add(c2);

    
    Complex difference = subtract(c1, c2);

    
    Complex product = c1.multiply(c2);

    cout << "First Complex Number: ";
    display(c1);

    cout << "Second Complex Number: ";
    display(c2);

    cout << "\nAddition: ";
    display(sum);

    cout << "Subtraction: ";
    display(difference);

    cout << "Multiplication: ";
    return 0;
}