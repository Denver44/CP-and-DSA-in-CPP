#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int row = matrix.size();
        int col = matrix[0].size();
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                q.push(matrix[i][j]);
            }
        }

        int res;

        while (!q.empty() && k)
        {
            res = q.top();
            q.pop();
            k--;
        }
        return res;
    }
};

int main()
{

    return 0;
}