#include <iostream>
using namespace std;

/*
pointer to pointer concept is easy means a pointer which is going to hold a address of another pointer.
*/

void incremet1(int **p)
{
    p = p + 1;
}
void incremet2(int **p)
{
    *p = *p + 1;
}
void incremet3(int **p)
{
    **p = **p + 1;
}

void doublePointerOnFunctions()
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;

    incremet1(p2);
    cout << "incremet 1 " << i << endl;
    cout << "incremet 1 " << *p << endl;
    cout << "incremet 1 " << **p2 << endl;

    incremet2(p2);
    cout << "incremet 2 " << i << endl;
    cout << "incremet 2 " << *p << endl;
    cout << "incremet 2 " << **p2 << endl;

    incremet3(p2);
    cout << "incremet 3 " << i << endl;
    cout << "incremet 3 " << *p << endl;
    cout << "incremet 3 " << **p2 << endl; // Here we are dereferencing a value of which we don't have access.
}

int main()
{
    int i = 10;
    int *p = &i;

    int **p2 = &p;

    cout << &p << endl;
    cout << p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    doublePointerOnFunctions();

    return 0;
}
