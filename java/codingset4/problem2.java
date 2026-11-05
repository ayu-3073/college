
interface Payment {
    void makePayment(double amount);
    void generateReceipt();
}

class CreditCardPayment implements Payment {
    double amount;

    public void makePayment(double amount) {
        this.amount = amount;
        System.out.println("Payment of Rs." + amount +
                           " made using Credit Card.");
    }

    public void generateReceipt() {
        System.out.println("Credit Card Receipt Generated.");
        System.out.println("Amount Paid: Rs." + amount);
    }
}

class UPIPayment implements Payment {
    double amount;

    public void makePayment(double amount) {
        this.amount = amount;
        System.out.println("Payment of Rs." + amount +
                           " made using UPI.");
    }

    public void generateReceipt() {
        System.out.println("UPI Transaction Receipt Generated.");
        System.out.println("Amount Paid: Rs." + amount);
    }
}

class CashPayment implements Payment {
    double amount;

    public void makePayment(double amount) {
        this.amount = amount;
        System.out.println("Payment of Rs." + amount +
                           " made using Cash.");
    }

    public void generateReceipt() {
        System.out.println("Cash Payment Receipt Generated.");
        System.out.println("Amount Paid: Rs." + amount);
    }
}

public class problem2 {
    public static void main(String[] args) {

        Payment p;

        // Credit Card Payment
        p = new CreditCardPayment();
        p.makePayment(5000);
        p.generateReceipt();

        System.out.println();

        // UPI Payment
        p = new UPIPayment();
        p.makePayment(2000);
        p.generateReceipt();

        System.out.println();

        // Cash Payment
        p = new CashPayment();
        p.makePayment(1000);
        p.generateReceipt();
    }
}
