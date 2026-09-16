#include <iostream>
using namespace std;
class Book
{
private:
  int id;
  string name;
  double price;

public:
  static int totalBooks;
  Book(int i, string n, double p)
  {
    id = i;
    name = n;
    price = p;
    totalBooks++;
  }
  inline double discountPrice()
  {
    return price - (price * 10 / 100);
  }
  bool operator>(Book b)
  {
    return price > b.price;
  }
  friend void displayCostlier(Book b);
};
int Book::totalBooks = 0;
void displayCostlier(Book b)
{
  cout << "Costlier Book:" << endl;
  cout << "ID: " << b.id << endl;
  cout << "Name: " << b.name << endl;
  cout << "Price: " << b.price << endl;
}
int main()
{
  Book b1(101, "C++ Basics", 500);
  Book b2(102, "C++ Programming", 700);
  cout << "Book 1 Price = 500" << endl;
  cout << "Book 2 Price = 700" << endl;
  if (b1 > b2)
    displayCostlier(b1);
  else
    displayCostlier(b2);
  cout << "Total Books = " << Book::totalBooks << endl;
  cout << "Discounted Price = " << b2.discountPrice() << endl;
}