
abstract class Employee {
    String name;
    int employeeId;

    Employee(String name, int employeeId) {
        this.name = name;
        this.employeeId = employeeId;
    }

  
    abstract double calculateSalary();


    void displayDetails() {
        System.out.println("Employee Name: " + name);
        System.out.println("Employee ID: " + employeeId);
    }
}

class PermanentEmployee extends Employee {
    double basicSalary, HRA, DA;

    PermanentEmployee(String name, int employeeId,
                      double basicSalary, double HRA, double DA) {
        super(name, employeeId);
        this.basicSalary = basicSalary;
        this.HRA = HRA;
        this.DA = DA;
    }

    @Override
    double calculateSalary() {
        return basicSalary + HRA + DA;
    }
}

class ContractEmployee extends Employee {
    int hoursWorked;
    double hourlyRate;

    ContractEmployee(String name, int employeeId,
                     int hoursWorked, double hourlyRate) {
        super(name, employeeId);
        this.hoursWorked = hoursWorked;
        this.hourlyRate = hourlyRate;
    }

    @Override
    double calculateSalary() {
        return hoursWorked * hourlyRate;
    }
}

public class problem1 {
    public static void main(String[] args) {

        PermanentEmployee p = new PermanentEmployee(
            "Rahul", 101, 30000, 10000, 5000
        );

        ContractEmployee c = new ContractEmployee(
            "Amit", 102, 160, 200
        );

        System.out.println("Permanent Employee Details:");
        p.displayDetails();
        System.out.println("Salary: " + p.calculateSalary());

        System.out.println("\nContract Employee Details:");
        c.displayDetails();
        System.out.println("Salary: " + c.calculateSalary());
    }
}
