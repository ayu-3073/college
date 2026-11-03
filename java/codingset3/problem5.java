class Account {
    int accountNumber;
    double balance;

    Account(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: ₹" + amount);
    }

    void deposit(double amount, String description) {
        balance += amount;
        System.out.println("Deposited: ₹" + amount +
                           " (" + description + ")");
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: ₹" + amount);
        } else {
            System.out.println("Withdrawal rejected: Insufficient balance");
        }
    }

    void calculateInterest() {
        System.out.println("No interest calculation for general account");
    }

    void displayBalance() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Balance: ₹" + balance);
    }
}