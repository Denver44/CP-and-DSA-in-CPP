#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age = 39;
    string name = "Sandeep";
    char gender = 'M';
    bool isMarried = true;
    float weight = 68.5;
    cout << name << "\n"
         << age << "\n"
         << gender << "\n"
         << isMarried << "\n"
         << weight;

    int a, b, c;

    cout << "enter the value of a:\n";
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "Total value of a+b = " << c << endl;
    cout << "Print the global variable value of C using Scope Operator " << ::c << endl; // here :: this is a symbol of scope resolution operator it helps to take the value of global variable.
    // As here we have not enter any namespace name after scope resolution operator so it will see in this file and check there is any global variable name c or not.

    float d = 34.4f;       // 34.4f means its a floating value
    long double e = 34.4l; // 34.4l means its a long double number && 34.4 without any suffix its a default  double value. so use prefix it useful in upcoming programming .
    cout << "The value of d is = " << d << endl;
    cout << "The value of e is = " << e << endl;

    cout << " the size of a is = " << sizeof(a) << " Bytes " << endl;         // long double as system default without suffix it is a long double.
    cout << " the size of 34.4 is = " << sizeof(34.4) << " Bytes " << endl;   // long double as system default without suffix it is a long double.
    cout << " the size of 34.4f is = " << sizeof(34.4f) << " Bytes " << endl; // float value and float value size is 4. we can write both the capital and small f.
    cout << " the size of 34.4F is = " << sizeof(34.4F) << " Bytes " << endl;
    cout << " the size of 34.4l is = " << sizeof(34.4l) << " Bytes " << endl; // long double its size is 12 and also we have to use suffix l here both upper & lower case.
    cout << " the size of 34.4L is = " << sizeof(34.4L) << "Bytes " << endl;

    return 0;
}

/*

Primitive (Or Fundamental) Types :

Integer Types : short, int, long, long long, unsigned short, unsigned int, unsigned long long

The size of sort, int long is not given by cpp it is dependent on compiler and generally in compiler the short is 2 byte and int and long are 4 byte and long long is 6.


unsigned means the range will be cosnist of positive number and it will be double as we are going to store positive number only


Character Types : char, unsigned char, wchart_t, char8_t, char16_t, char32_t

the char is just 1 byte and this type are of unicode (wchart_t, char8_t, char16_t, char32_t) means we can save chinese or hindi character also


Floating Type : float, double, long double

To store a decimal number we use float and to get better percision we use double or more or higher precision use long double but as they use bit manipulation so the number will not be exact some minor diff will be there,

Others : bool, void

Bool and void are datatypes which we used


Non-Primitive Types :

Arrays, Pointer, user Defined (Class and Struct), string and Vector



Use Size of Operator to get the size of primitive data type because it is different for Arch and compiler.

sizeof(int)
sizeof(char)
sizeof(long long)
sizeof(float)
*/