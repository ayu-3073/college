class Employee {
    // Private data members
    private int employeeId;
    private String name;
    private double basicSalary;

    // Constructor
    public Employee(int employeeId, String name, double basicSalary) {
        this.employeeId = employeeId;
        this.name = name;
        this.basicSalary = basicSalary;
    }

    // Calculate HRA
    public double calculateHRA() {
        return basicSalary * 0.20;
    }

    // Calculate DA
    public double calculateDA() {
        return basicSalary * 0.10;
    }

    // Calculate Bonus
    public double calculateBonus() {
        if (basicSalary > 50000)
            return basicSalary * 0.05;
        else
            return 0;
    }

    // Calculate Gross Salary
    public double calculateGrossSalary() {
        return basicSalary + calculateHRA() + calculateDA() + calculateBonus();
    }

    // Display employee salary details
    public void displayDetails() {
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Name: " + name);
        System.out.println("Basic Salary: " + basicSalary);
        System.out.println("HRA: " + calculateHRA());
        System.out.println("DA: " + calculateDA());
        System.out.println("Bonus: " + calculateBonus());
        System.out.println("Gross Salary: " + calculateGrossSalary());
        System.out.println();
    }

    // Compare two employees
    public static Employee compareEmployees(Employee e1, Employee e2) {
        if (e1.calculateGrossSalary() > e2.calculateGrossSalary())
            return e1;
        else
            return e2;
    }

    // Getter methods
    public int getEmployeeId() {
        return employeeId;
    }

    public String getName() {
        return name;
    }
}

public class problem3 {
    public static void main(String[] args) {

        // Creating three employee objects
        Employee e1 = new Employee(101, "Ayush", 60000);
        Employee e2 = new Employee(102, "Rahul", 45000);
        Employee e3 = new Employee(103, "Aman", 75000);

        // Display salary details
        e1.displayDetails();
        e2.displayDetails();
        e3.displayDetails();

        // Comparing two employees
        Employee higher = Employee.compareEmployees(e1, e2);

        System.out.println("Employee with higher gross salary:");
        System.out.println("Name: " + higher.getName());
        System.out.println("Employee ID: " + higher.getEmployeeId());
        System.out.println("Gross Salary: " + higher.calculateGrossSalary());
    }
}