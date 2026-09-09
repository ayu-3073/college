#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    double balance;

    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            receiver.balance += amount;

            cout << "Transfer successful!" << endl;
        }
      }


    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1(101, 5000);
    BankAccount account2(102, 3000);

    cout << "Before Transfer:" << endl;

    cout << "\nAccount 1:" << endl;
    account1.display();

    cout << "\nAccount 2:" << endl;
    account2.display();

    account1.transfer(account2, 1500);

    cout << "\nAfter Transfer:" << endl;

    cout << "\nAccount 1:" << endl;
    account1.display();

    cout << "\nAccount 2:" << endl;
    account2.display();

    return 0;
}