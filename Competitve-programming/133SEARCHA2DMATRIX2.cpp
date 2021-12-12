#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
// We have to return true if the value is there else return false.
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        fast();
        if (matrix.size() == 0)
            return false;
        int row = matrix.size(), col = matrix[0].size();
        int i = 0, j = col - 1;
        while (i >= 0 && j >= 0 && i < row && j < col) // Boundaries.
        {
            if (matrix[i][j] > target)
                j--;
            else if (matrix[i][j] < target)
                i++;
            else
                return true;
        }
        return false;
    }
};
