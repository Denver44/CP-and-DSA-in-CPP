#include <iostream>
using namespace std;

int fib(int n) // Here the recursive approach is not good for factorial because it call same function for many time so iterative approach is much better.
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

int main()
{

    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}
