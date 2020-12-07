#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (matrix.size() == 0)
        {
            return false;
        }
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0;
        int j = col - 1;

        while (i >= 0 && j >= 0 && i < row && j < col)
        {
            if (matrix[i][j] > target)
            {
                j--;
            }
            else if (matrix[i][j] < target)
            {
                i++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
