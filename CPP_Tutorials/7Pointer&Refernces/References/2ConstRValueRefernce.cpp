#include <iostream>
using namespace std;

void printError(string &s)
{
    cout << s << endl;
}

// Valid
void print(const string &s)
{
    cout << s << '\n';
}

// With R value reference we can change value also.
void editAndPrint(string &&s)
{
    s = "Hi, " + s;
    cout << s << "\n";
}
void fun()
{

    int &x = 3;       // Invalid
    const int &x = 3; // valid
    int &&x = 3;      // Valid

    string &s = "gfg";       // Invalid
    const string &s = "gfg"; // Valid
    string &&s = "gfg";      // Valid
}
int main()
{
    // printError("This Will Throw Error"); // This will throw Error
    print("Welcome to GeeksforGeeks");
    editAndPrint("Welcome to GeeksforGeeks");
    fun();
    return 0;
}
