import java.util.HashSet;

class Student {
    int registrationNumber;
    String name;

    // Constructor
    Student(int registrationNumber, String name) {
        this.registrationNumber = registrationNumber;
        this.name = name;
    }

    // Override equals()
    @Override
    public boolean equals(Object obj) {
        Student s = (Student) obj;

        return this.registrationNumber == s.registrationNumber;
    }

    // Override hashCode()
    @Override
    public int hashCode() {
        return registrationNumber;
    }

    // Display student details
    void display() {
        System.out.println("Registration Number: " + registrationNumber);
        System.out.println("Name: " + name);
        System.out.println();
    }
}

public class problem6 {
    public static void main(String[] args) {

        // HashSet to store students
        HashSet<Student> students = new HashSet<>();

        // Creating students
        Student s1 = new Student(101, "Ayush");
        Student s2 = new Student(102, "Rahul");
        Student s3 = new Student(103, "Aman");

        // Duplicate registration number
        Student s4 = new Student(101, "Another Student");

        // Adding students
        students.add(s1);
        students.add(s2);
        students.add(s3);
        students.add(s4);

        // Display students
        System.out.println("Registered Students:");

        for (Student s : students) {
            s.display();
        }

        // Check whether a student is registered
        Student searchStudent = new Student(102, "Someone");

        if (students.contains(searchStudent)) {
            System.out.println("Student with registration number 102 is already registered.");
        } else {
            System.out.println("Student is not registered.");
        }
    }
}