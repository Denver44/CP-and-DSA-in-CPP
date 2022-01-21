#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    vector<int> arr1;
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int a;
        cin >> a;
        arr1.push_back(a);
    }

    vector<int> arr2;
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int a;
        cin >> a;
        arr2.push_back(a);
    }
    unordered_map<int, int> HashMap;
    for (int i = 0; i < arr1.size(); i++)
    {
        HashMap[arr1[i]]++;
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if (HashMap.count(arr2[i]) > 0)
        {
            cout << arr2[i] << endl;

            int val = HashMap.at(arr2[i]);
            HashMap.erase(arr2[i]);
            HashMap.insert(make_pair(arr2[i],val-1));
        }
    }

    return 0;
}