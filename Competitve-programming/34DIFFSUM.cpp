#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << num1 - num2 << endl;
    }
    else
    {
        cout << num1 + num2 << endl;
    }

    return 0;
}