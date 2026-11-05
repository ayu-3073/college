
class Box<T> {
    T value;

    Box(T value) {
        this.value = value;
    }

    void setValue(T value) {
        this.value = value;
    }

    T getValue() {
        return value;
    }
}

public class problem5 {
    public static void main(String[] args) {

        
        Box<Integer> b1 = new Box<>(100);

        Box<String> b2 = new Box<>("Hello Java");

        Box<Double> b3 = new Box<>(45.67);

        System.out.println("Integer Value: " + b1.getValue());
        System.out.println("String Value: " + b2.getValue());
        System.out.println("Double Value: " + b3.getValue());

        b1.setValue(200);
        b2.setValue("Generic Class");
        b3.setValue(89.50);

        System.out.println("\nAfter Updating Values:");

        System.out.println("Integer Value: " + b1.getValue());
        System.out.println("String Value: " + b2.getValue());
        System.out.println("Double Value: " + b3.getValue());
    }
}
