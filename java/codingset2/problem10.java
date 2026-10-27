import java.util.HashMap;

class Product {
    int productId;
    String name;
    double price;

    // Constructor
    Product(int productId, String name, double price) {
        this.productId = productId;
        this.name = name;
        this.price = price;
    }
}

class CartItem {
    Product product;
    int quantity;

    // Constructor
    CartItem(Product product, int quantity) {
        this.product = product;
        this.quantity = quantity;
    }

    // Calculate amount
    double getAmount() {
        return product.price * quantity;
    }
}

class ShoppingCart {

    // Internal cart data
    private HashMap<Integer, CartItem> cart = new HashMap<>();

    // Add product to cart
    void addProduct(Product product, int quantity) {

        if (quantity <= 0) {
            System.out.println("Invalid quantity.");
            return;
        }

        // If product already exists, increase quantity
        if (cart.containsKey(product.productId)) {
            CartItem item = cart.get(product.productId);
            item.quantity = item.quantity + quantity;
        } 
        else {
            cart.put(product.productId, new CartItem(product, quantity));
        }
    }

    // Update quantity
    void updateQuantity(int productId, int quantity) {

        if (quantity <= 0) {
            System.out.println("Invalid quantity.");
            return;
        }

        if (cart.containsKey(productId)) {
            cart.get(productId).quantity = quantity;
        } 
        else {
            System.out.println("Product not found.");
        }
    }

    // Remove product
    void removeProduct(int productId) {

        if (cart.containsKey(productId)) {
            cart.remove(productId);
        } 
        else {
            System.out.println("Product not found.");
        }
    }

    // Calculate subtotal
    double calculateSubtotal() {

        double subtotal = 0;

        for (CartItem item : cart.values()) {
            subtotal = subtotal + item.getAmount();
        }

        return subtotal;
    }

    // Calculate discount
    double calculateDiscount() {

        double subtotal = calculateSubtotal();

        if (subtotal >= 5000) {
            return subtotal * 0.10;
        } 
        else if (subtotal >= 1000) {
            return subtotal * 0.05;
        } 
        else {
            return 0;
        }
    }

    // Calculate final amount
    double calculateFinalAmount() {
        return calculateSubtotal() - calculateDiscount();
    }

    // Display cart
    void displayCart() {

        System.out.printf("%-15s %-10s %-10s %-10s%n",
                "Product", "Quantity", "Price", "Amount");

        System.out.println("-----------------------------------------------");

        for (CartItem item : cart.values()) {

            System.out.printf("%-15s %-10d %-10.2f %-10.2f%n",
                    item.product.name,
                    item.quantity,
                    item.product.price,
                    item.getAmount());
        }

        System.out.println("-----------------------------------------------");

        System.out.printf("Subtotal: %.2f%n", calculateSubtotal());
        System.out.printf("Discount: %.2f%n", calculateDiscount());
        System.out.printf("Final Amount: %.2f%n", calculateFinalAmount());
    }
}

public class problem10 {
    public static void main(String[] args) {

        // Create products
        Product p1 = new Product(101, "Keyboard", 800);
        Product p2 = new Product(102, "Mouse", 700);

        // Create shopping cart
        ShoppingCart cart = new ShoppingCart();

        // Add products
        cart.addProduct(p1, 2);
        cart.addProduct(p2, 1);

        // Display cart
        cart.displayCart();

        // Update quantity
        cart.updateQuantity(101, 2);

        // Remove product
        // cart.removeProduct(102);
    }
}