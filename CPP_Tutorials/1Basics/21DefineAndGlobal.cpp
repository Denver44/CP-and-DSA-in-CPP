#include <iostream>
using namespace std;
#define PI 3.14

int a;

void g()
{
    a++;
    cout << a << endl;
}

void f()
{
    cout << a << endl;
    a++;
    g();
}

void globalConcept()
{
    a = 10;
    f();
    f();
    cout << a << endl;
}

void defineConcept()
{

    int r;
    cin >> r;

    cout << PI * r * r << endl;
}

int main()
{
    defineConcept();
    globalConcept();
    return 0;
}