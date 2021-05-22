#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        priority_queue<int, vector<int>, greater<int>> q;
        for (auto i : nums)
        {
            q.push(i);
            if (q.size() > k)
            {
                q.pop();
            }
        }

        return q.top();
    }
};
int main()
{

    return 0;
}