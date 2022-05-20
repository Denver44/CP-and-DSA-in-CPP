#include <iostream>
using namespace std;

// This will not swap a and b here the a and b are local to this variable so as soon as the function job done the local variable destroy that why it will not reflect back on the main program
void passByValue(int a, int b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}

// Call by address using pointers here we are dealing will the address so the function will swap as we have the adddress so the function will change the value and it reflect on the main function.
void passByAddress(int *a, int *b)
{                  // temp a b
    int temp = *a; // 4   4  5
    *a = *b;       // 4   5  5
    *b = temp;     // 4   5  4
}

// Call by reference using C++ reference Variables  this is new method which is not in c.
// we have to call function like pass by value but  we have to use reference operator to access the address of the variable.
void passByReference(int &a, int &b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    passByValue(x, y); // This will not swap a and b
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    passByAddress(&x, &y); // This will swap a and b using pointer variables.
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    passByReference(x, y); // This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}