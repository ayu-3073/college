#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string title;
    string author;
    int bookID;

public:
    
    Library(string t = "", string a = "", int id = 0)
    {
        title = t;
        author = a;
        bookID = id;
    }

    
    void display()
    {
        cout << "Book ID : " << bookID << endl;
        cout << "Title   : " << title << endl;
        cout << "Author  : " << author << endl;
        cout << "------------------------" << endl;
    }

    
    string getTitle()
    {
        return title;
    }
};

int main()
{
    
    Library books[10] =
    {
        Library("C++ Programming", "Bjarne Stroustrup", 101),
        Library("Java Programming", "James Gosling", 102),
        Library("Python Basics", "Mark Lutz", 103),
        Library("Data Structures", "Seymour Lipschutz", 104),
        Library("Operating Systems", "Galvin", 105),
        Library("Computer Networks", "Andrew Tanenbaum", 106),
        Library("Database Systems", "Raghu Ramakrishnan", 107),
        Library("Web Development", "Jon Duckett", 108),
        Library("Artificial Intelligence", "Stuart Russell", 109),
        Library("Machine Learning", "Tom Mitchell", 110)
    };

    string searchTitle;
    bool found = false;

    cout << "Enter book title to search: ";
    getline(cin, searchTitle);

    
    for (int i = 0; i < 10; i++)
    {
        if (books[i].getTitle() == searchTitle)
        {
            cout << "\nBook Found!" << endl;
            books[i].display();
            found = true;
        }
    }

    if (!found)
    {
        cout << "\nBook not found!" << endl;
    }

    return 0;
}