#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, rem;
    while (t--)
    {
        cin >> a >> b;
        rem = a % b;
        cout << rem << endl;
    }

    return 0;
}
