#include <bits/stdc++.h>
using namespace std;
// We can use dp in question Like a same call with same Input is repeating more then once there we can use dp.
// TWO METHODS
// 1. Top-Down Approach using Memoization.
// 2. Bottom -up Approach using Tabulation.

int fib(int n) // Recursive Way
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int fibMemoize(int n, int *answerBank) //-Top Down Approach
{
    if (n <= 1)
        return n;

    if (answerBank[n] != 0)
        return answerBank[n];

    int output = fibMemoize(n - 1, answerBank) + fibMemoize(n - 2, answerBank);
    answerBank[n] = output;
    return output;
}
int fibTabulation(int n) // Bottom Up Approach
{
    int *fib = new int[n + 1];
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    int ans = fib[n];
    delete[] fib; // Delting a Dynamic allocated array is must
    return ans;
}
int main()
{
    cout << fib(10) << endl; // Normal Recursion

    int *answerBank = new int[15];
    memset(answerBank, 0, sizeof(int) * 15);

    cout << fibMemoize(10, answerBank) << endl; // Memoize Method

    delete[] answerBank;

    cout << fibTabulation(10) << endl; // Tabulation Method+
    return 0;
}