
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        if (heights.size() == 0)
        {
            return 0;
        }
        if (heights.size() == 1)
        {
            return heights[0];
        }

        long long n = heights.size();
        stack<ll> s1;
        // ll rb[n];
        vector<ll> rb(n);
        s1.push(n - 1);
        rb[n - 1] = n;
        for (int i = n - 2; i >= 0; i--)
        {
            while (s1.size() > 0 && heights[i] <= heights[s1.top()])
            {
                s1.pop();
            }
            if (s1.size() == 0)
            {
                rb[i] = n;
            }
            else
            {
                rb[i] = s1.top();
            }
            s1.push(i);
        }
        stack<ll> s2;
        // ll lb[n];
        vector<ll> lb(n);

        s2.push(0);
        lb[0] = -1;
        for (int i = 1; i < n; i++)
        {
            while (s2.size() > 0 && heights[i] <= heights[s2.top()])
            {
                s2.pop();
            }
            if (s2.size() == 0)
            {
                lb[i] = -1;
            }
            else
            {
                lb[i] = s2.top();
            }
            s2.push(i);
        }

        int maxarea = 0;
        s1.push(0);
        int i = 0;
        for (i = 0; i < heights.size(); i++)
        {
            ll width = rb[i] - lb[i] - 1;
            ll area = width * heights[i];
            if (area > maxarea)
            {
                maxarea = area;
            }
        }

        return maxarea;
    }
};