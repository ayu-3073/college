import java.util.HashMap;

class Product {
    int productId;
    String name;
    double price;
    int quantity;

    // Constructor
    Product(int productId, String name, double price, int quantity) {
        this.productId = productId;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    // Display product details
    void display() {
        System.out.println("Product ID: " + productId);
        System.out.println("Name: " + name);
        System.out.println("Price: ₹" + price);
        System.out.println("Available Quantity: " + quantity);
        System.out.println();
    }
}

public class Main {

    // HashMap to store products
    static HashMap<Integer, Product> products = new HashMap<>();

    // Add product
    static void addProduct(Product product) {
        if (products.containsKey(product.productId)) {
            System.out.println("Product ID already exists.");
        } else {
            products.put(product.productId, product);
            System.out.println("Product added successfully.");
        }
    }

    // Search product
    static void searchProduct(int id) {
        if (products.containsKey(id)) {
            System.out.println("Product found:");
            products.get(id).display();
        } else {
            System.out.println("Product not found.");
        }
    }

    // Update price
    static void updatePrice(int id, double newPrice) {
        if (products.containsKey(id)) {
            products.get(id).price = newPrice;
            System.out.println("Price updated successfully.");
        } else {
            System.out.println("Product not found.");
        }
    }

    // Remove product
    static void removeProduct(int id) {
        if (products.containsKey(id)) {
            products.remove(id);
            System.out.println("Product removed successfully.");
        } else {
            System.out.println("Product not found.");
        }
    }

    // Display all products
    static void displayProducts() {
        System.out.println("All Products:");

        for (Product p : products.values()) {
            p.display();
        }
    }

    public static void main(String[] args) {

        // Creating products
        Product p1 = new Product(101, "Laptop", 55000, 5);
        Product p2 = new Product(102, "Mouse", 800, 20);
        Product p3 = new Product(103, "Keyboard", 1500, 10);

        // Adding products
        addProduct(p1);
        addProduct(p2);
        addProduct(p3);

        // Trying to add duplicate
        addProduct(new Product(101, "Tablet", 20000, 5));

        System.out.println();

        // Display all products
        displayProducts();

        // Search product
        searchProduct(102);

        // Update price
        updatePrice(102, 900);

        // Remove product
        removeProduct(103);

        System.out.println();

        // Display products after changes
        displayProducts();
    }
}