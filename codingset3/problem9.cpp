#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    string productName;
    float price;
    int quantity;

    Product(string name = "", float p = 0, int q = 0)
    {
        productName = name;
        price = p;
        quantity = q;
    }

    Product combine(Product other)
    {
        Product result;

        result.productName = productName;
        result.price = price;
        result.quantity = quantity + other.quantity;

        return result;
    }

    void display()
    {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }

    friend Product higherValue(Product p1, Product p2);
};

Product higherValue(Product p1, Product p2)
{
    if ((p1.price * p1.quantity) > (p2.price * p2.quantity))
        return p1;
    else
        return p2;
}

int main()
{
    Product p1("Laptop", 50000, 2);
    Product p2("Laptop", 50000, 3);

    cout << "Product 1:" << endl;
    p1.display();

    cout << "\nProduct 2:" << endl;
    p2.display();

    Product higher = higherValue(p1, p2);

    cout << "\nProduct with Higher Total Value:" << endl;
    higher.display();

    Product combined = p1.combine(p2);

    cout << "\nCombined Inventory:" << endl;
    combined.display();

    return 0;
}