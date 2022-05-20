#include <iostream>
using namespace std;

int fun2(int x)
{

    if (x > 0)
    {
        cout << x << endl;
        fun2(x - 1);
        fun2(x - 1);
    }

    return 0;
}

int main()
{

    int x = 3;
    fun2(x);
    return 0;
}