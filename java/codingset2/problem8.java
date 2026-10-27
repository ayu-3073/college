import java.util.ArrayList;
import java.util.HashMap;

class Course {
    String courseCode;
    String courseName;
    int maxCapacity;

    // Constructor
    Course(String courseCode, String courseName, int maxCapacity) {
        this.courseCode = courseCode;
        this.courseName = courseName;
        this.maxCapacity = maxCapacity;
    }
}

class Student {
    String studentId;
    String name;

    // Constructor
    Student(String studentId, String name) {
        this.studentId = studentId;
        this.name = name;
    }
}

public class problem8 {

    // Store courses
    static HashMap<String, Course> courses = new HashMap<>();

    // Store students registered in each course
    static HashMap<String, ArrayList<Student>> registrations = new HashMap<>();

    // Add a course
    static void addCourse(Course course) {
        if (courses.containsKey(course.courseCode)) {
            System.out.println("Course already exists.");
        } else {
            courses.put(course.courseCode, course);
            registrations.put(course.courseCode, new ArrayList<>());
            System.out.println("Course added successfully.");
        }
    }

    // Register student for a course
    static void registerStudent(String courseCode, Student student) {

        // Check if course exists
        if (!courses.containsKey(courseCode)) {
            System.out.println("Course not found.");
            return;
        }

        ArrayList<Student> students = registrations.get(courseCode);

        // Check for duplicate registration
        for (Student s : students) {
            if (s.studentId.equals(student.studentId)) {
                System.out.println("Student is already registered for this course.");
                return;
            }
        }

        // Check capacity
        Course course = courses.get(courseCode);

        if (students.size() >= course.maxCapacity) {
            System.out.println("Course is full.");
            return;
        }

        // Register student
        students.add(student);
        System.out.println("Student registered successfully.");
    }

    // Display students in a course
    static void displayStudents(String courseCode) {

        if (!courses.containsKey(courseCode)) {
            System.out.println("Course not found.");
            return;
        }

        Course course = courses.get(courseCode);
        ArrayList<Student> students = registrations.get(courseCode);

        System.out.println("\nCourse: " + course.courseName);
        System.out.println("Course Code: " + course.courseCode);

        if (students.isEmpty()) {
            System.out.println("No students registered.");
            return;
        }

        System.out.println("Registered Students:");

        for (Student s : students) {
            System.out.println("ID: " + s.studentId + ", Name: " + s.name);
        }
    }

    public static void main(String[] args) {

        // Create courses
        Course c1 = new Course("CS101", "Java Programming", 2);
        Course c2 = new Course("CS102", "Database Management", 3);

        // Add courses
        addCourse(c1);
        addCourse(c2);

        // Create students
        Student s1 = new Student("S01", "Ayush");
        Student s2 = new Student("S02", "Rahul");
        Student s3 = new Student("S03", "Aman");

        // Register students
        registerStudent("CS101", s1);
        registerStudent("CS101", s2);

        // Student can register for another course
        registerStudent("CS102", s1);

        // Try duplicate registration
        registerStudent("CS101", s1);

        // Try when course is full
        registerStudent("CS101", s3);

        // Display students
        displayStudents("CS101");
        displayStudents("CS102");
    }
}