#include <iostream>
using namespace std;

void howTocreateMemInHeap()
{
    // Use new keyword to create a mem in heap.
    int *p = new int; // THis way we create a int 4 byte in heap and it will return the address of that area which we store in our pointer p.
    *p = 10;

    cout << *p << endl;

    double *pd = new double;
    char *c = new char;

    int *pa = new int[50]; // 200 Size of block is created in heap.

    int n;
    cout << "Enter num of elements" << endl;
    cin >> n;

    int *pa2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pa2[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}

void howToDeleteMemInHeap()
{

    int *p = new int;
    delete p;    // Delete keyword is used to delete the memory in heap, here only memory delete not the pointer
    p = nullptr; // This is good practice.

    p = new int;
    delete p;

    p = new int[100];
    delete[] p; // to delete an array delete [] (ptr_name) here we tell the compiler that we have to delete a an array

    /*
    TESTING
    while (true) {
        int *p = new int;
    }

    while (true) {
        int i = 10;
    }

    */
}

int main()
{
    howTocreateMemInHeap();
    howToDeleteMemInHeap();
}
