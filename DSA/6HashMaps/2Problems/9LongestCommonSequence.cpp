#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n1;
    cin >> n1;
    vector<int> arr1;
    for (int i = 0; i < n1; i++)
    {
        int a;
        cin >> a;
        arr1.push_back(a);
    }
    unordered_map<int, bool> HashMap;
    for (int i = 0; i < arr1.size(); i++)
    {
        HashMap[arr1[i]] = true;
    }

    for (int i : arr1)
    {
        if (HashMap.find(i - 1) != HashMap.end()) // if we have value which less than current i value by -1 thats mean we sequence so we make current i == false.
        {
            HashMap[i] = false;
        }
    }
    int max_len = 0;     // this stores lenght
    int start_point = 0; // this starting point of value.
    for (int i : arr1)
    {
        if (HashMap.at(i) == true) // only run for true Value.
        {
            int len = 1;  // as by default for i itslef len will be 1 so start from i
            int curr = i; // curr will fix.
            while (HashMap.find(curr + len) != HashMap.end())
            {
                len++; // only increasing the len.
            }
            if (len > max_len) // upadtinh starting point and max_len if we get better than previous one.
            {
                max_len = len;
                start_point = curr;
            }
        }
    }
    for (int i = start_point; i < start_point + max_len; i++) // printing.
    {
        cout << i << endl;
    }

    return 0;
}