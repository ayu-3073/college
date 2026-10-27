class BankAccount {
    // Private data members
    private int accountNumber;
    private String accountHolderName;
    private double balance;

    // Constructor 1: Initializes account with zero balance
    public BankAccount(int accountNumber, String accountHolderName) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = 0;
    }

    // Constructor 2: Initializes account with specified opening balance
    public BankAccount(int accountNumber, String accountHolderName, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;

        if (balance >= 0)
            this.balance = balance;
        else
            this.balance = 0;
    }

    // Deposit method
    public void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

    // Withdraw method
    public void withdraw(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid withdrawal amount.");
        } else if (amount > balance) {
            System.out.println("Insufficient balance.");
        } else {
            balance = balance - amount;
            System.out.println("Withdrawn: " + amount);
        }
    }

    // Display balance
    public void displayBalance() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Holder: " + accountHolderName);
        System.out.println("Balance: " + balance);
    }
}

public class problem2 {
    public static void main(String[] args) {

        // Using constructor with zero balance
        BankAccount account1 = new BankAccount(101, "Ayush");

        account1.deposit(5000);
        account1.withdraw(1500);
        account1.displayBalance();

        System.out.println();

        // Using constructor with opening balance
        BankAccount account2 = new BankAccount(102, "Rahul", 10000);

        account2.deposit(2000);
        account2.withdraw(15000);
        account2.withdraw(-500);
        account2.displayBalance();
    }
}