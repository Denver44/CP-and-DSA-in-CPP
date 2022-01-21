#include <iostream>
using namespace std;



void printdec(int n)
{
    if (n == 0) // Base Conition
    {
        return;
    }
    else
    {
        cout << n << " ";
        printdec(n - 1);
    }
}
int main()
{

    printdec(7);

    return 0;
}