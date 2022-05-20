#include <iostream>
#include <cstdarg> // the cstdarg this libary is used to for the variable function.
using namespace std;

// This three dot ... plays an important role in this.
// The first args will always be count of elem in the func..
int func(int count, ...)
{

    int sum = 0;
    va_list list;          // first step create list of any name for this use the function va_list.
    va_start(list, count); // the second step is to connect the list with the number of count by va_start.
    for (int i = 0; i < count; i++)
    {
        int n = va_arg(list, int); // the va_ arg this step initialize the first element to the variable u want.
        sum = sum + n;
    }
    return sum;
}

int main()
{
    // 1. The first argument in the function must always count of elemnets.
    // 2. Like here first number is 5 it shows there total 5 argument of which we want the average.
    cout << "The average marks of Class 9 - A is " << func(5, 10, 20, 30, 40, 50) << endl;
    cout << "The average marks of Class 9 - B is " << func(8, 1, 2, 3, 4, 5, 6, 7, 8) << endl;
    cout << "The average marks of Class 9 - C is " << func(3, 10, 20, 50) << endl;
    return 0;
}
