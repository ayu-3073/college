#include <iostream>
#include <string>
using namespace std;

// Base class
class Book
{
protected:
  string title;
  string author;

public:
  // Constructor
  Book(string t, string a)
  {
    title = t;
    author = a;
  }
};

// Derived class
class Ebook : public Book
{
private:
  float fileSize;
  string fileFormat;

public:
  // Constructor
  Ebook(string t, string a, float size, string format)
      : Book(t, a)
  {
    fileSize = size;
    fileFormat = format;
  }
  // Function to display details
  void display()
  {
  cout << "Title: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "File Size: " << fileSize << " MB" << endl;
  cout << "File Format: " << fileFormat << endl;
  cout << "------------------------" << endl;
}
}
;

int main()
{

  // Array of 3 EBook objects
  Ebook books[3] = {
      Ebook("The Alchemist", "Paulo Coelho", 2.5, "PDF"),
      Ebook("Atomic Habits", "James Clear", 4.2, "PDF"),
      Ebook("Steve Jobs", "Walter Isaacson", 6.8, "PDF")};

  // Display details of all books
  for (int i = 0; i < 3; i++)
  {
    cout << "E-Book " << i + 1 << endl;
    books[i].display();
  }

  return 0;
}