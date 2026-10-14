#include <iostream>
using namespace std;

class BankAccount {
    float balance;

public:
    BankAccount(float b) {
        balance = b;
    }

    void withdraw(float amount) {
        try {
            if (amount > balance)
                throw "Insufficient balance.";

            balance = balance - amount;
            cout << "Withdrawal successful." << endl;
            cout << "Remaining balance = " << balance << endl;
        }
        catch (const char* error) {
            cout << "Error: " << error << endl;
        }
    }
};

int main() {
    float balance, amount;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    BankAccount account(balance);
    account.withdraw(amount);

    return 0;
}