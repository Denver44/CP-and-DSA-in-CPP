#include <iostream>
using namespace std;


void printInc(int n)
{
    if (n == 0) // Base Conition
    {
        return;
    }
    else
    {
        printInc(n - 1);
        cout << n << " ";
    }
}


int main()
{

    printInc(7);

    return 0;
}