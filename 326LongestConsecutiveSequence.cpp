#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    int longestConsecutive(vector<int> &nums)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (nums.size() == 0)
        {
            return 0;
        }

        unordered_map<int, bool> s1;
        for (int i : nums)
        {
            s1[i] = true;
        }
        for (int i : nums)
        {
            if (s1.find(i - 1) != s1.end())
            {
                s1[i] = false;
            }
        }
        int len = 0;
        for (int i : nums)
        {
            if (s1.at(i) == true)
            {
                int curr_len = 1;
                int curr_val = i;
                while (s1.find(curr_len + curr_val) != s1.end())
                {
                    curr_len++;
                }

                if (curr_len > len)
                {
                    len = curr_len;
                }
            }
        }

        return len;
    }
};

int main()
{

    return 0;
}

// --------------------------------------------- using set------------------------
// In this set is the best data strcuture to find the answer at min time.
// ?eg we have to find longest sub  sequence
// 11 10 1 4 12 2 3
// here first we inserted all vector values nums. and make a set.
// then we take first element and started seaching a lower element than it as here 11-1 10 and 10 is there in set so we go to 10
// now for 10 9 is not there so for 10 we startred sreaching one psotive number 10 +1 11 is there then 11 + 1 12 is there 12 + 1 13 is nt there
//  so totaly we have 3 element so using i and j we get 3
// but here there 1 4 2 and 3 aslo and we have to find longest subsequenc and they are longest subsequnec
//  so we repaet same thing and found the longest
// IMP :-  if we dont do find lowest subsequnec fo any ek 11 -1 that 10 then we get only 11 12 so the length will be 2
// and then when 10 again we have done sme 10 11 12 so the process take much time so to reduce tghe time we did.
// class Solution
// {
// public:
//     int longestConsecutive(vector<int> &nums)
//     {
//         if (nums.size() == 0)
//         {
//             return 0;
//         }

//         set<int> s1;
//         int res = INT32_MIN;
//         for (auto i : nums)
//         {
//             s1.insert(i);
//         }

//         for (auto i : s1)
//         {
//             if (s1.find(i - 1) == s1.end())
//             {
//                 int j = i;
//                 while (s1.find(j) != s1.end())
//                 {
//                     j++;
//                 }
//                 res = max(res, j - i);
//             }
//         }
//         return res;
//     }
// };
