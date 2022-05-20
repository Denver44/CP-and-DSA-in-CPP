
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print1(int *p)
{
    cout << *p << endl;
}
void print(int **p)
{
    **p = **p + 1;
}
void inc(int *p)
{
    *p = *p + 1;
}

int main()
{
    int i = 10;
    int *p = &i;
    cout << "Address of P " << p << endl;
    cout << "Value of i is " << i << endl;
    print(&p);
    cout << "Value of i is " << i << endl; // 11
    inc(p);
    cout << "Value of i is " << i << endl; // 12

    int a = 100;
    int *p1 = &a;
    int **q = &p1;
    int b = (**q)++ + 4;           // it will increase 100 to 101 but it value will be 100 here only +4 because of Post increment.
    cout << a << " " << b << endl; // 101 104
}