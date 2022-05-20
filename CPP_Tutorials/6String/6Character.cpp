#include <iostream>
#include <cstring>
using namespace std;

void characterBasicConcept()
{
    char x[] = "geeksquiz";
    char y[] = "geeksforgeeks";
    char t[] = "";

    cout << "&X Prints : " << &x << "&Y Prints : " << &y << endl;
    cout << "X Prints :  " << x << "Y Prints : " << y << endl;

    cout << "X[0] Prints : " << x[0] << "Y[0] Prints : " << y[0] << endl;
    cout << "&X[0] Prints :  " << &x[0] << "&Y[0] Prints : " << &y[0] << endl;

    return 0;
}

void swapCharacters()
{
    char x[] = "geeksquiz";
    char y[] = "geeksforgeeks";
    char t[20];

    cout << x << " " << y;
    strcpy(x, t);
    strcpy(y, x);
    strcpy(t, y);
    cout << " " << x << " " << y;
}

void charPointerConcept()
{
    char ch = 'g';
    char *ptr = &ch;
    ch++;
    cout << ptr << endl;  // this will print until it doesn't get Nullpointer
    cout << *ptr << endl; // this will print the value at the address. only g.

    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl; // XYZ Answer

    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p; // h  hello
}

int main()
{
    characterBasicConcept();
    swapCharacters();
    charPointerConcept();
    return 0;
}