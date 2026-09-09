
#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    // Parameterized constructor
    Book(string t, string a)
    {
        title = t;
        author = a;
    }

    // Function to display book details
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book b("The Alchemist", "Paulo Coelho");

    b.display();

    return 0;
}