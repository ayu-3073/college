
interface Printable {
    void print();
}

interface Scannable {
    void scan();
}

class MultiFunctionPrinter implements Printable, Scannable {

    public void print() {
        System.out.println("Printing document...");
    }

    public void scan() {
        System.out.println("Scanning document...");
    }
}

class BasicPrinter implements Printable {

    public void print() {
        System.out.println("Basic Printer is printing document...");
    }
}

public class problem4 {
    public static void main(String[] args) {

        MultiFunctionPrinter m = new MultiFunctionPrinter();

        System.out.println("Multi Function Printer:");
        m.print();
        m.scan();

        System.out.println();

        BasicPrinter b = new BasicPrinter();

        System.out.println("Basic Printer:");
        b.print();
    }
}
