import java.util.PriorityQueue;
import java.util.Comparator;

class Patient {
    int patientId;
    String name;
    int priority;
    int arrivalNumber;

    // Constructor
    Patient(int patientId, String name, int priority, int arrivalNumber) {
        this.patientId = patientId;
        this.name = name;
        this.priority = priority;
        this.arrivalNumber = arrivalNumber;
    }

    // Display patient details
    void display() {
        System.out.println("Patient ID: " + patientId);
        System.out.println("Name: " + name);
        System.out.println("Priority: " + priority);
        System.out.println();
    }
}

public class problem7 {
    public static void main(String[] args) {

        // Comparator for PriorityQueue
        Comparator<Patient> comparator = (p1, p2) -> {

            // Smaller priority number comes first
            if (p1.priority != p2.priority) {
                return p1.priority - p2.priority;
            }

            // If priority is same, earlier arrival comes first
            return p1.arrivalNumber - p2.arrivalNumber;
        };

        // PriorityQueue
        PriorityQueue<Patient> queue = new PriorityQueue<>(comparator);

        // Creating patients
        Patient p1 = new Patient(101, "Ayush", 2, 1);
        Patient p2 = new Patient(102, "Rahul", 1, 2);
        Patient p3 = new Patient(103, "Aman", 3, 3);
        Patient p4 = new Patient(104, "Rohit", 2, 4);
        Patient p5 = new Patient(105, "Vivek", 1, 5);

        // Adding patients
        queue.add(p1);
        queue.add(p2);
        queue.add(p3);
        queue.add(p4);
        queue.add(p5);

        // Process patients
        System.out.println("Patients processed in order:");

        while (!queue.isEmpty()) {
            Patient p = queue.poll();
            p.display();
        }
    }
}