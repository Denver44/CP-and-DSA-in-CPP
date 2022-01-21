#include <iostream>
using namespace std;

//--------------- RECURUSION U MUST HAVE HIGH LEVEL THINKING -----------------//
// High level thinking have three steps
// 1. Expectation
// 2. faith
// 3. relation between faith and excpectation

// Low Level thinking
// Dry run which help us to get our base condition.

void printDectoInC(int n)
{
    if (n == 0) // Base Conition
    {
        return;
    }
    else
    {
        cout << n << " ";
        printDectoInC(n - 1);
        cout << n << " ";
    }
}

int main()
{

    printDectoInC(7);

    return 0;
}