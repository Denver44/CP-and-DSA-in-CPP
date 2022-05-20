#include <iostream>

using namespace std;

int main()
{
    // Assignment Operators --> used to assign values to variables
    // char d='d';
    int a = 4, b = 5;

    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators this are are all arithemtic operators used to do arithemtic .
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    int x = a++; // x = a; a = a+1;
    int y = ++a; // a = a+1; y = a;

    // Comparison operators  // here we have to use ( ) because the compiler will get confused which value to take so thats why we should use parenthesis.
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl; // it check weather both the value are equal or not.
    cout << "The value of a != b is " << (a != b) << endl; // it check weather both the value are not equal.
    cout << "The value of a >= b is " << (a >= b) << endl; // it will check that a is must be greater or equal to b value.
    cout << "The value of a <= b is " << (a <= b) << endl; // it will check that a is must be smaller than b or equal to b.
    cout << "The value of a > b is " << (a > b) << endl;   // it simply check weather a is greater than b.
    cout << "The value of a < b is " << (a < b) << endl;   // it will check that a is less than b.

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) & (a < b)) << endl; // here both condition must be right then only we can output as 1.
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl; // here one of the condition must be right then we will get output 1.
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;                  // here we have used not operator so if answer is 1 then output will be 0 as we have used not opeartor.

    return 0;
}

/*
 Arithmetic Operators

 1. +, -, * and / work for both the integer types  (int, long long , ...) and floating point types (float, double and long double )

 2. % works for integer types only.


 3. The sign of a%b is same as sign of a.
    a. cout<<(10 % -3); => 1;
    a. cout<<(-10 % 3); => -1;
In case of integer, the result of a/b and a%b is undefined when b is zero


Assignment Operators

= , += , -= , *= , /= , %=

Bitwise Assignment Operators :  $=, |= , <<=, >>= , ^=



*/