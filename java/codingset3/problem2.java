class Calculator {
    void calculate(int a, int b) {
        System.out.println("calculate(int, int)");
        System.out.println("Result: " + (a + b));
    }

    void calculate(double a, double b) {
        System.out.println("calculate(double, double)");
        System.out.println("Result: " + (a + b));
    }

    void calculate(long a, long b) {
        System.out.println("calculate(long, long)");
        System.out.println("Result: " + (a + b));
    }

    void calculate(int a, double b) {
        System.out.println("calculate(int, double)");
        System.out.println("Result: " + (a + b));
    }
}

public class problem2 {
    public static void main(String[] args) {

        Calculator c = new Calculator();

        int a = 10;
        long b = 20L;
        float f = 20.5f;
        double d = 20.5;

        c.calculate(a, b);
        c.calculate(a, f);
        c.calculate(a, d);
        c.calculate(a, 20);
    }
}