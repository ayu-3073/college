class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;

        System.out.println("Person constructor called");
    }
}

class Employee extends Person {
    int employeeId;
    double salary;

    Employee(String name, int age, int employeeId, double salary) {
        super(name, age);

        this.employeeId = employeeId;
        this.salary = salary;

        System.out.println("Employee constructor called");
    }
}

class Developer extends Employee {
    String programmingLanguage;
    String projectName;

    Developer(String name, int age, int employeeId, double salary,
              String programmingLanguage, String projectName) {

        super(name, age, employeeId, salary);

        this.programmingLanguage = programmingLanguage;
        this.projectName = projectName;

        System.out.println("Developer constructor called");
    }

    void displayDetails() {
        System.out.println("\n--- Developer Details ---");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Salary: " + salary);
        System.out.println("Programming Language: " + programmingLanguage);
        System.out.println("Project Name: " + projectName);
    }
}

public class problem1 {
    public static void main(String[] args) {

        Developer d = new Developer(
            "Ayush",
            20,
            101,
            50000,
            "Java",
            "Project A"
        );

        d.displayDetails();
    }
}