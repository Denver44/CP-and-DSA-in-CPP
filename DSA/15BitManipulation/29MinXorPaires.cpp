#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// a b c
// a^b < a^c
// b^c < a^c

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end());
    int min = INT32_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        int res = v1[i] ^ v1[i + 1];
        if (res < min)
        {
            min = res;

            cout << v1[i] << ", " << v1[i + 1] << endl;
        }
        else if (res == min)
        {
            cout << v1[i] << ", " << v1[i + 1] << endl;
        }
    }

    return 0;
}