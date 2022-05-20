#include <iostream>
using namespace std;

void constantReference();
void constantPointersConcept();
void constantPointerAndReferncePassInFunctionConcept();
void g(int const &);
void f(const int *);

int main()
{
    constantReference();
    constantPointersConcept();
    // constantPointerAndReferncePassInFunctionConcept();
}

void constantReference()
{
    // 1. constant int
    const int i = 10;
    int const i2 = 10;
    // Here we can declare const int or int const means same the variable will don't have an access of write, we are not making the value of the variable constant we are just making the path constant.

    // 2. constant reference from a non const int
    int j = 12;
    const int &k = j; // K only have a read access
    // k++; We dont have premission for this now as k is constant refernce
    j++;
    cout << k << endl;

    // 3. constant reference from a const int
    int const j2 = 12;
    int const &k2 = j2; // reference (&) to a constant (const) int. The integer can't be modified through the reference.
    const int &k4 = j2; //  a reference to an int object which happens to be const. Equivalent to int const &
    // k4++; We don't have the write access

    /*
    Reference from a const int

    int const j3 = 123;
    int &k3 = j3; // We cannot do this.
    k3++;

    Note : We cannot create a refernce of constant variable, A variable who have only read permission how he can give u read and write premission.
    */
}

void constantPointersConcept()
{
    int i = 10;
    int j = 21;
    int const *p = &i; // Here it means p is a pointer to a constant integer, this pointer has only read access it cannot do change
    cout << "Address " << p << endl;
    cout << "Value " << *p << endl;
    // cout << "Value " << ++(*p) << endl; We cannot do this we will get error.

    p = &j; // But we can chaage our pointer to point some new address.

    // To restrict a pointer that it cannot point a new address, but now it can change the value.

    int *const p2 = &i; // Here it means p2 is const pointer to a int
    (*p2)++;
    // p2++; This we cannot do because p2 is constant pointer integer
    cout << "Value " << *p2 << endl;
    // p2 = &j; THis we cannot do as we make our pointer a constant, it lost his write access now, now it cannot write a new addess in itself.

    // Here p3 is a const pointer to a const integer.
    int const *const p3 = &i;
    cout << "Address " << p3 << endl;
    cout << "Value " << *p3 << endl;
    // p3 = &j; We cannot write a new address in it.
    // (*p3)++; We cannot change its value also.
}

void g(int const &a)
{
    // a++; We cannot do it
}

void f(const int *p)
{
    // (*p)++; We cannot do this
}

void constantPointerAndReferncePassInFunctionConcept()
{
    int const i = 10;
    int const *p = &i;

    int j = 12;
    int *p3 = &j;

    f(p3);
    g(j);

    int const *p2 = &j;
    cout << *p2 << endl;
    j++; // This is valid.
    // (*p2)++; This is not okay because we are const
    cout << *p2 << endl;
}
