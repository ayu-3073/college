#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle(float l = 0, float w = 0)
    {
        length = l;
        width = w;
    }

    float area()
    {
        return length * width;
    }

    bool equalArea(Rectangle r)
    {
        return area() == r.area();
    }

    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << area() << endl;
    }

    friend Rectangle mergeRectangles(Rectangle r1, Rectangle r2);
};

Rectangle mergeRectangles(Rectangle r1, Rectangle r2)
{
    Rectangle r3;

    r3.length = r1.length + r2.length;
    r3.width = r1.width + r2.width;

    return r3;
}

int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(5, 10);

    cout << "Rectangle 1:" << endl;
    r1.display();

    cout << "\nRectangle 2:" << endl;
    r2.display();

    if (r1.equalArea(r2))
        cout << "\nBoth rectangles have equal area." << endl;
    else
        cout << "\nBoth rectangles do not have equal area." << endl;

    // Merge rectangles
    Rectangle r3 = mergeRectangles(r1, r2);

    cout << "\nMerged Rectangle:" << endl;
    r3.display();

    return 0;
}