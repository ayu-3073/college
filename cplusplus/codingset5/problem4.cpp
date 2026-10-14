#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string registrationNumber;
    string companyName;

public:
    // Constructor
    Vehicle(string reg, string company) {
        registrationNumber = reg;
        companyName = company;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    string fuelType;
    int engineCapacity;

public:
    // Constructor
    Car(string reg, string company, string fuel, int engine)
        : Vehicle(reg, company) {
        fuelType = fuel;
        engineCapacity = engine;
    }

    void display() {
        cout << "Car Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company: " << companyName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "------------------------" << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
private:
    string fuelType;
    int engineCapacity;

public:
    // Constructor
    Bike(string reg, string company, string fuel, int engine)
        : Vehicle(reg, company) {
        fuelType = fuel;
        engineCapacity = engine;
    }

    void display() {
        cout << "Bike Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Company: " << companyName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
        cout << "------------------------" << endl;
    }
};

int main() {

    // Creating multiple objects
    Car car1("JK02AB1234", "Hyundai", "Petrol", 1197);
    Car car2("JK02CD5678", "Toyota", "Diesel", 1498);

    Bike bike1("JK02EF1111", "Honda", "Petrol", 160);
    Bike bike2("JK02GH2222", "Yamaha", "Petrol", 155);

    // Display details
    car1.display();
    car2.display();

    bike1.display();
    bike2.display();

    return 0;
}