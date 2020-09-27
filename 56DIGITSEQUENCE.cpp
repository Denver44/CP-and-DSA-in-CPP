#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s = s + to_string(i);
    }
    cout << s[n-1];

    return 0;
}