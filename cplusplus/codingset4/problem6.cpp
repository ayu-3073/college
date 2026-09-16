
#include <iostream>
using namespace std;
class BankAccount
{
public:
  int accountNumber;
  string customerName;
  static int totalAccounts;
  BankAccount()
  {
    totalAccounts++;
  }
  static void displayTotal()
  {
    cout << "Total Accounts = " << totalAccounts << endl;
  }
};
int BankAccount::totalAccounts = 0;
int main()
{
  BankAccount a1;
  BankAccount a2;
  BankAccount a3;
  BankAccount::displayTotal();
}