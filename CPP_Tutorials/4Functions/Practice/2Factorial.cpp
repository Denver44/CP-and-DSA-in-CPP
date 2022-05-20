#include <iostream>
using namespace std;

int factorial(int n) //This recursive approach in which the function call itself till the condition doesn't get fail.
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
//[3] Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;
// Factorial of a number:
// 6! = 6*5*4*3*2*1 = 720
// 0! = 1 by definition
// 1! = 1 by definition
// n! = n * (n-1)!
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;
    return 0;
}
