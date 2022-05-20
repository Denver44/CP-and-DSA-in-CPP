#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(int) << "\n"
         << sizeof(char) << "\n"
         << sizeof(long long) << "\n"
         << sizeof(float) << "\n"
         << sizeof(10ll) << "\n"
         << sizeof(3.4) << "\n"
         << sizeof(3.4f) << "\n";
    int var = 5;

    cout << sizeof(var++) << "\n";
    cout << var << "\n";
    return 0;
}

/*


SIZE OF OPERATOR IS A COMPILE TIME OPERATOR.

So no expression will execute in size of operator.

Use Size of Operator to get the size of primitive data type because it is different for Arch and compiler.

Size of operator works at compile time so it will not execute
    int var = 5;
    cout << sizeof(var++) << "\n";
    cout << var << "\n";

here teh avr will be 5 only.

1. An operator in C++ (evaluated at compile time)
2. Returns number of bytes required for a data type
3. can be used with variables and literal also
4. We can use size of operator on userdefined data type also
*/