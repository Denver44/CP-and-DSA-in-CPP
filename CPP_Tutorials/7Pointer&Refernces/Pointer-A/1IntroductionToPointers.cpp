#include <iostream>
using namespace std;
/*

What is a pointer?
Ans : A Data type which holds the address of variable

What is a segmentation fault?
Ans : Accessing a memory which u are not authorized to do.

*/

void basicConcept();
void notToDoWithPointers();
void whatActuallyWeShouldDo();
void intermediateConcept();

int main()
{
    basicConcept();
    intermediateConcept();
    return 0;
}

void basicConcept()
{

    int a = 3; // here a is variable which is going to store integer value 3 in it.
    int *b;    // here (*b) means b is pointer which will hold a address of integer type data.
    b = &a;    // here address of a is store in b using (address operator &).

    float f = 10.2;
    float *pf = &f;

    double d = 122.32;
    double *pd = &d;

    // (& ADDRESS OPERATOR)

    cout << "The address of a is " << &a << endl; // here we will get the address of a .
    cout << "The value of b is " << b << endl;    // as b is holding address of a if we print simply b we will get address of a.

    // (*(VALUE AT) OR DEREFERENCE OPERATOR)

    cout << "The value of b is " << *b << endl; //  (*b) means derefence it and print the value which is store in in that address.

    // SIZE OF POINTER

    cout << "SIZE OF INT PTR " << sizeof(b) << endl;
    cout << "SIZE OF FLOAT PTR " << sizeof(pf) << endl;
    cout << "SIZE OF DOUBLE PTR " << sizeof(pd) << endl;
    cout << "SIZE OF CHAR PTR " << sizeof(pc) << endl;
}

void notToDoWithPointers()
{
    int i;
    cout << i << endl;

    i++;
    cout << i << endl;

    int *p;
    cout << p << endl;

    p++;
    cout << *p << endl;
}

void whatActuallyWeShouldDo()
{
    int *p = NULL;      // Initialize with NULL or 0.
    cout << *p << endl; // Now it will return error here a segmentation fault
    (*p)++;
    cout << *p << endl;
}

void intermediateConcept()
{
    notToDoWithPointers();
    whatActuallyWeShouldDo();
}
