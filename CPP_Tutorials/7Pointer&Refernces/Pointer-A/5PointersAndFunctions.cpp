#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void incrementPointer(int *p)
{
    cout << "incrementPointer Function " << p << endl;
    p++;
    cout << "incrementPointer Function " << p << endl;
}

void increment(int *p)
{
    (*p)++;
}

int sum(int *a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{

    int i = 10;
    int *p = &i;

    print(p);

    cout << p << endl;
    incrementPointer(p);
    cout << p << endl;

    cout << *p << endl;
    increment(p);
    cout << *p << endl;

    int a[5] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(int);
    cout << "SUM : " << sum(a, size) << endl;
    return 0;
}