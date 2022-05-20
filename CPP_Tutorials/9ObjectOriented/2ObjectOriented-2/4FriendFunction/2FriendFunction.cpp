#include <iostream>
using namespace std;
class Y; // we have to declare the class Y  at top as the compile checks from the top so it get the point that there is Class Y below.

class X
{
private:
    int a;

public:
    X(int a)
    {
        this->a = a;
    }

    friend int add(X, Y); // this way we make friend to class X to the add function.
};

class Y
{
private:
    int b;

public:
    Y(int b)
    {
        this->b = b;
    }

    friend int add(X, Y);
};

// here we are defining the function by using X and Y the two classes name and the o1 and o2 are the variable here X and Y work as a data type.
int add(X o1, Y o2)
{
    return o1.a + o2.b;
}

int main()
{
    X x(1);
    Y y(2);

    cout << "The sum of Class X data + Class Y data is  =  " << add(x, y);
    return 0;
}
