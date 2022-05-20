#include <iostream>
using namespace std;
const double PI = 3.14;
#define NEW_PI = 3.14; // Alternate to const

int main()
{
    static int y;
    cout << y;

    int r;
    cout << "Enter the radius\n";
    cin >> r;
    cout << "Area is " << PI * r * r;

    return 0;
}

/*

1. Static local variables are created once and stay for lifetime of program.
2. Static Data members of a class are shared by all objects
2. Static methods of a class can access only static data.
4. Static global variable have internal linkage.

1. We can change the value of const in cpp by using pointer but that is not recommended
2. We can use preprocessor like #define to create const variable but it has certain dis advanatage that it don't do typeChecking it just replace the word with value so use const more.

*/
