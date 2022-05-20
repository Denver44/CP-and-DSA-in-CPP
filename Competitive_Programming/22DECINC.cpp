#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;
    if (num % 4 == 0)
    {
        num++;
    }
    else
    {
        num--;
    }

    cout << num << endl;

    return 0;
}