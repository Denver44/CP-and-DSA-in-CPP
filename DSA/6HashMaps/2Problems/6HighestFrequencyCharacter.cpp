#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> HashMap;
    for (int i = 0; i < str.length(); i++)
    {
        HashMap[str[i]]++;
    }
    int max_value = INT32_MIN;
    char key;
    for (auto i : HashMap)
    {
        if (i.second > max_value)
        {
            max_value = i.second;
            key = i.first;
        }
    }
    cout << key << endl;

    return 0;
}