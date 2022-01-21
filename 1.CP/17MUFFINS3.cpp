#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int res = 0;
    while (t--)
    {
        cin >> n;
        res = (n / 2) + 1;
        cout << res << endl;
    }

    return 0;
}