#include <iostream>
using namespace std;

// -------------------------------------------------- ALL TYPES OF FUNCTION IN CLASS-----------------------------
// All types of Member Functions
// • Constructors - called when object is created
// • Accessors - used for knowing the value of data members
// • Mutataors - used for changing value of data member
// • Facilitator - actual functions of class
// • Enquiry - used for checking if an object satisfies some condition
// • Destructor - used for releasing resources used by object

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(const Rectangle &r);
    int getLength() { return length; }   // Accessors
    int getBreadth() { return breadth; } // Accessors
    void setLength(int l);               // Mutataors
    void setBreadth(int b);
    int area();
    int perimeter(); // Facilitator
    bool isSquare(); // Enquiry
    ~Rectangle();    // Destructor
};

// Default Constructors
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

// Parameterized Constructors
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

// Copy Constructors
Rectangle::Rectangle(const Rectangle &r)
{
    cout << "Copy Constructors " << endl;
    length = r.length;
    breadth = r.breadth;
}

// Mutataors
void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int b)
{
    breadth = b;
}

// Facilitator
int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// Enquiry
bool Rectangle::isSquare()
{
    return length == breadth;
}

// Destructor
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed";
}

int main()
{
    Rectangle r1(10, 10);
    Rectangle r2 = r1;
    cout << "Area " << r1.area() << endl;

    if (r1.isSquare())
        cout << "Yes" << endl;
}