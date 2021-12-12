#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }

        sort(v.begin(), v.end());
        vector<int> res;

        for (int i = 0; i < n - 1; i++)
        {
            res.push_back(v[i + 1] - v[i]);
        }
        sort(res.begin(), res.end());
        cout << res[0] << endl;
    }

    return 0;
}