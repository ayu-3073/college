#include <iostream>
using namespace std;

class Account
{
protected:
  int accountNumber;
  float balance;

public:
  Account(int a, float b)
  {
    accountNumber = a;
    balance = b;
  }

  void display()
  {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
  }
};

class SavingsAccount : public Account
{
public:
  SavingsAccount(int a, float b) : Account(a, b) {}

  void display()
  {
    cout << "Savings Account" << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
  }
};

class CurrentAccount : public Account
{
public:
  CurrentAccount(int a, float b) : Account(a, b){}
  
  void display()
  {
    cout << "Current Account" << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
  }
};

int main()
{

  SavingsAccount s1(101, 50000);
  SavingsAccount s2(102, 60000);

  CurrentAccount c1(201, 80000);
  CurrentAccount c2(202, 90000);

  s1.display();
  cout << endl;

  s2.display();
  cout << endl;

  c1.display();
  cout << endl;

  c2.display();
  cout << endl;

  return 0;
}