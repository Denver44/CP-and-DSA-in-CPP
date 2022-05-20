#include <iostream>
using namespace std;

void increment(int &i)
{
    i++;
}

/*
Bad practice
because the scope of variable will be in that function only as the call finished the function will be destroy.
int &f(int n)
{
    int a = n;
    return a;
}

int *f2()
{
    int i = 10;
    return &i;
}

*/
int main()
{
    int *p = f2();

    int i;
    i = 10;

    int &k1 = f(i);

    increment(i);
    cout << i << endl;

    int &j = i; // Benefits of its, it work as alias, no new space created of variable j.

    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    int k = 100;
    j = k;
    cout << i << endl;
}


