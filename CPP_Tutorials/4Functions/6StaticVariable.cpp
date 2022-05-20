#include <iostream>
using namespace std;

void fun()
{
    static int s = 10; // STATIC VARIABLE
    s++;
    cout << s << endl;
}
int main()
{
    fun();
    fun();
    return 0;
}

/*
we can make static variable declare in a function.
but it retain its value it clear from the memory when program terminate.
*/