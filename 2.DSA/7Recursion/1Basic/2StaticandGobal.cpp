#include <iostream>
using namespace std;
int fun2(int x)
{

    if (x > 0)
    {
        return fun2(x - 1) + x;
    }

    return 0;
}

int main()
{

    int x = 5;
    cout << fun2(x);
    return 0;
}

//*************************** STATIC VARIABLE AND GLOBAL VARIABLE  IN RECURSION ***************************************//
// here if we have the static int n as a global variable there will be no change.
#include <iostream>
using namespace std;
int fun2(int x)
{
    static int n;

    if (x > 0)
    {
        n++;
        return fun2(x - 1) + n;
    }

    return 0;
}

int main()
{

    int x = 5;
    cout << fun2(x);
    return 0;
}