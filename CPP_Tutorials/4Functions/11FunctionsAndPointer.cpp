//------------------------------------------------  POINTER TO A FUNCTION ---------------------------------------------------------
#include <iostream>
using namespace std;

void display()
{
    cout << "hello" << endl;
    return;
}
int print()
{
    cout << "hello" << endl;
    return 5;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    //Syntax:  return type (*ptr_name) ( if args then only mention datatype args. else leave it blank )
    void (*fp)(); // Declare
    fp = display; // assign
    (*fp)();      // call

    int (*fp2)(int, int);
    fp2 = max;
    cout << (*fp2)(10, 5) << endl;
    fp2 = min;
    cout << (*fp2)(10, 5) << endl;

    int (*fp3)();
    fp3 = print;
    cout << (*fp3)();

    return 0;
}