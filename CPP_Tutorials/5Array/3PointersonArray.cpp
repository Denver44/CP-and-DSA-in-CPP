#include <iostream>
using namespace std;

int main()
{

    // Array variables also store an adddress of first element of array.
    int marks[] = {23, 45, 56, 89, 55, 44, 22};
    int *p = marks;         // Here we have declare a Pointer which will going to store a address of integer type value.
    cout << *(p++) << endl; // Here Why 23 Is print out because p has address of first element of array which is 23 and we say we want post increment so first p will be print 23 now post increment is done now p store the address of next value 45.
    cout << *(++p) << endl; // Why here 56 Print not the 46. because currently p has address 45 but here we have used pre increment so first increment done so now p has address of 56 and now using de refernceing operator (*) we will print the value of that address which is 56.
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 1 + 1) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}
