class Student {
    // Private data members
    private int rollNumber;
    private String name;
    private int marks1;
    private int marks2;
    private int marks3;

    // Parameterized constructor
    public Student(int rollNumber, String name, int marks1, int marks2, int marks3) {
        this.rollNumber = rollNumber;
        this.name = name;
        this.marks1 = marks1;
        this.marks2 = marks2;
        this.marks3 = marks3;
    }

    // Getter methods
    public int getRollNumber() {
        return rollNumber;
    }

    public String getName() {
        return name;
    }

    public int getMarks1() {
        return marks1;
    }

    public int getMarks2() {
        return marks2;
    }

    public int getMarks3() {
        return marks3;
    }

    // Calculate total marks
    public int calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    // Calculate percentage
    public double calculatePercentage() {
        return (calculateTotal() / 300.0) * 100;
    }

    // Calculate grade
    public char calculateGrade() {
        double percentage = calculatePercentage();

        if (percentage >= 90)
            return 'A';
        else if (percentage >= 75)
            return 'B';
        else if (percentage >= 60)
            return 'C';
        else
            return 'D';
    }

    // Display student details
    public void displayDetails() {
        System.out.println("Roll Number: " + getRollNumber());
        System.out.println("Name: " + getName());
        System.out.println("Marks in Subject 1: " + getMarks1());
        System.out.println("Marks in Subject 2: " + getMarks2());
        System.out.println("Marks in Subject 3: " + getMarks3());
        System.out.println("Total Marks: " + calculateTotal());
        System.out.println("Percentage: " + calculatePercentage() + "%");
        System.out.println("Grade: " + calculateGrade());
    }
}

public class problem1 {
    public static void main(String[] args) {

        // Creating Student object using parameterized constructor
        Student s1 = new Student(101, "Ayush", 85, 90, 88);

        // Display complete details
        s1.displayDetails();
    }
}