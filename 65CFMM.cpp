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
        int alpha[26] = {0};
        int n;
        cin >> n;
        string s;

        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < s.length(); j++)
            {
                int k = s[j] - 97;
                alpha[k]++;
            }
        }

    
        vector<int> v;
        v.push_back(alpha[2] / 2);
        v.push_back(alpha[3] / 1);
        v.push_back(alpha[4] / 2);
        v.push_back(alpha[5] / 1);
        v.push_back(alpha[7] / 1);
        v.push_back(alpha[14] / 1);
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }

    return 0;
}
