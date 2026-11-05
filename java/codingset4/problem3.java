
interface Drawable {
    void draw();
}


abstract class Shape {
    abstract double calculateArea();

    void display() {
        System.out.println("Displaying Shape Details");
    }
}

class Circle extends Shape implements Drawable {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    @Override
    double calculateArea() {
        return 3.14 * radius * radius;
    }

    @Override
    public void draw() {
        System.out.println("Drawing a Circle");
    }
}


class Rectangle extends Shape implements Drawable {
    double length, breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    @Override
    double calculateArea() {
        return length * breadth;
    }

    @Override
    public void draw() {
        System.out.println("Drawing a Rectangle");
    }
}

// Main class
public class problem3 {
    public static void main(String[] args) {

        Circle c = new Circle(5);

        System.out.println("Circle:");
        c.display();
        c.draw();
        System.out.println("Area of Circle: " + c.calculateArea());

        System.out.println();

        Rectangle r = new Rectangle(10, 5);

        System.out.println("Rectangle:");
        r.display();
        r.draw();
        System.out.println("Area of Rectangle: " + r.calculateArea());
    }
}
