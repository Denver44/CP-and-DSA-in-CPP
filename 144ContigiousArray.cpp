#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void fast()
    {
        ios ::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int findMaxLength(vector<int> &nums)
    {
        fast();
        unordered_map<int, int> hashmap;
        int sum = 0;
        int maxlen = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                sum += -1;
            else
                sum += 1;

            if (sum == 0)
                maxlen = max(maxlen, i + 1);
            else if (hashmap.count(sum))
                maxlen = max(maxlen, i - hashmap[sum]);
            else
                hashmap[sum] = i;
        }
        return maxlen;
    }
};