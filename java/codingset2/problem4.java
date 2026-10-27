import java.util.ArrayList;

class Book {
    String isbn;
    String title;
    String author;
    double price;

    // Parameterized constructor
    Book(String isbn, String title, String author, double price) {
        this.isbn = isbn;
        this.title = title;
        this.author = author;
        this.price = price;
    }

    // Display book details
    void display() {
        System.out.println("ISBN: " + isbn);
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: ₹" + price);
        System.out.println();
    }
}

public class problem4 {

    // ArrayList to store books
    static ArrayList<Book> books = new ArrayList<>();

    // Add a book
    static void addBook(Book book) {
        for (Book b : books) {
            if (b.isbn.equals(book.isbn)) {
                System.out.println("Book with this ISBN already exists.");
                return;
            }
        }

        books.add(book);
        System.out.println("Book added successfully.");
    }

    // Search book by ISBN
    static void searchBook(String isbn) {
        for (Book b : books) {
            if (b.isbn.equals(isbn)) {
                System.out.println("Book found:");
                b.display();
                return;
            }
        }

        System.out.println("Book not found.");
    }

    // Display all books
    static void displayBooks() {
        System.out.println("All Books:");

        for (Book b : books) {
            b.display();
        }
    }

    // Remove book by ISBN
    static void removeBook(String isbn) {
        for (Book b : books) {
            if (b.isbn.equals(isbn)) {
                books.remove(b);
                System.out.println("Book removed successfully.");
                return;
            }
        }

        System.out.println("Book not found.");
    }

    public static void main(String[] args) {

        // Creating books
        Book b1 = new Book("101", "Java Programming", "James Gosling", 500);
        Book b2 = new Book("102", "Python Basics", "John Smith", 450);
        Book b3 = new Book("103", "C Programming", "Dennis Ritchie", 400);

        // Adding books
        addBook(b1);
        addBook(b2);
        addBook(b3);

        // Trying to add duplicate ISBN
        addBook(new Book("101", "Another Book", "ABC", 300));

        System.out.println();

        // Display all books
        displayBooks();

        // Search a book
        searchBook("102");

        // Remove a book
        removeBook("103");

        System.out.println();

        // Display books after removal
        displayBooks();
    }
}