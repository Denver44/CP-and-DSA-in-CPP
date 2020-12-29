#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void fast()
{
    ios ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
// In this Question we are given an array in which we have to find two values whose sum is Equal to Target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// We have to return the Indexes.
// Time Complexity O(N);
// Using For Loop we can do it but it will take O(N^2)
// Using HasHmap for Solving this Problem in O(N).
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        fast();
        unordered_map<int, int> m1;
        for (int i = 0; i < nums.size(); i++)
        {
            int compliment = target - nums[i];
            if (m1.count(compliment))
                return {i, m1[compliment]};
            m1[nums[i]] = i; // So the Same Element Doest Not come we add the elemnt with is index at the last.
        }
        return {0, 0}; // this only for return as there will be alawys a Solution Exist it is mention.
    }
};