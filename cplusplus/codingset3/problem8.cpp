#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    int bookID;
    string title;
    int copies;


    Book(int id = 0, string t = "", int c = 0)
    {
        bookID = id;
        title = t;
        copies = c;
    }

    void exchange(Book &other)
    {
        int tempID;
        string tempTitle;
        int tempCopies;

        tempID = bookID;
        bookID = other.bookID;
        other.bookID = tempID;

        tempTitle = title;
        title = other.title;
        other.title = tempTitle;

        tempCopies = copies;
        copies = other.copies;
        other.copies = tempCopies;
    }

    void display()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Number of Copies: " << copies << endl;
    }

};

Book moreCopies(Book b1, Book b2)
{
    if (b1.copies > b2.copies)
        return b1;
    else
        return b2;
}

int main()
{
    Book b1(101, "The Myth of Sisyphus", 10);
    Book b2(102, "Kafka on the Shore", 15);

    cout << "Before Exchange:" << endl;

    cout << "\nBook 1:" << endl;
    b1.display();

    cout << "\nBook 2:" << endl;
    b2.display();

    b1.exchange(b2);

    cout << "\nAfter Exchange:" << endl;

    cout << "\nBook 1:" << endl;
    b1.display();

    cout << "\nBook 2:" << endl;
    b2.display();

    Book result = moreCopies(b1, b2);

    cout << "\nBook with More Copies:" << endl;
    result.display();

    return 0;
}