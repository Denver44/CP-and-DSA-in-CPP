#include <iostream>
using namespace std;

int CountBinarystring(int n)
{
    int dpzeros[n + 1];
    int dpones[n + 1];
    dpzeros[0] = 0; // As there is no string of length zero which can end on 0.
    dpones[0] = 0;  // Same as here
    dpzeros[1] = 1; // only one string can end on 0 with lenght 0 is 0.
    dpones[1] = 1;  // same here.
    for (int i = 2; i < n + 1; i++)
    {
        dpones[i] = dpzeros[i - 1] + dpones[i - 1];
        dpzeros[i] = dpones[i - 1];
    }

    return dpones[n] + dpzeros[n];
}
int CountBinarystringSecondMethod(int n)
{

    int oldzeros = 1;
    int oldones = 1;
    int newones;

    for (int i = 2; i < n + 1; i++)
    {
        newones = oldzeros + oldones;
        oldzeros = oldones;
        oldones = newones;
    }

    return oldzeros + oldones;
}

int main()
{
    int n = 6;
    cout << CountBinarystring(n) << endl;
    cout << CountBinarystringSecondMethod(n) << endl;

    return 0;
}