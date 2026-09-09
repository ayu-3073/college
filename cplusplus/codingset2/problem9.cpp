#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    
    BankAccount(int accNo, float initialBalance)
    {
        accountNumber = accNo;
        balance = initialBalance;
    }

  
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    
    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, 5000);

    account.displayBalance();

    account.deposit(2000);
    account.displayBalance();

    account.withdraw(3000);
    account.displayBalance();

    account.withdraw(5000);  

    return 0;
}