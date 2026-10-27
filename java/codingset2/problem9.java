import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Employee {
    int id;
    String name;
    String department;
    double salary;

    // Constructor
    Employee(int id, String name, String department, double salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    // Display employee details
    void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("Salary: ₹" + salary);
        System.out.println();
    }
}

public class problem9 {
    public static void main(String[] args) {

        // ArrayList of employees
        ArrayList<Employee> employees = new ArrayList<>();

        // Creating employees
        employees.add(new Employee(101, "Ayush", "CSE", 60000));
        employees.add(new Employee(102, "Rahul", "ECE", 45000));
        employees.add(new Employee(103, "Aman", "CSE", 75000));
        employees.add(new Employee(104, "Rohit", "ME", 50000));
        employees.add(new Employee(105, "Vivek", "CSE", 90000));

        // Sort by salary - ascending
        Collections.sort(employees, new Comparator<Employee>() {
            public int compare(Employee e1, Employee e2) {
                return Double.compare(e1.salary, e2.salary);
            }
        });

        System.out.println("Employees sorted by salary:");
        for (Employee e : employees) {
            e.display();
        }

        // Sort by name - alphabetical order
        Collections.sort(employees, new Comparator<Employee>() {
            public int compare(Employee e1, Employee e2) {
                return e1.name.compareTo(e2.name);
            }
        });

        System.out.println("Employees sorted by name:");
        for (Employee e : employees) {
            e.display();
        }

        // Search employees by department
        String searchDepartment = "CSE";

        System.out.println("Employees in " + searchDepartment + " department:");

        for (Employee e : employees) {
            if (e.department.equals(searchDepartment)) {
                e.display();
            }
        }

        // Sort by salary - descending
        Collections.sort(employees, new Comparator<Employee>() {
            public int compare(Employee e1, Employee e2) {
                return Double.compare(e2.salary, e1.salary);
            }
        });

        // Display top 3 highest-paid employees
        System.out.println("Top 3 Highest-Paid Employees:");

        for (int i = 0; i < 3 && i < employees.size(); i++) {
            employees.get(i).display();
        }
    }
}