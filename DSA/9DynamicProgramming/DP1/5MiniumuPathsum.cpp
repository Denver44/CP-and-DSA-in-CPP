#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {

        ios::sync_with_stdio(0);
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int row = grid.size();
        int col = grid[0].size();
        int dp[row][col];

        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                if (i == row - 1 && j == col - 1) // LAST ROW AND LAST COL
                {
                    dp[i][j] = grid[i][j];
                }
                else if (i == row - 1) // LAST ROW So we can Go Only Right
                {
                    dp[i][j] = grid[i][j] + dp[i][j + 1];
                }
                else if (j == col - 1) // LAST COL WE CAN GO ONLY DOWN ONLY.
                {
                    dp[i][j] = grid[i][j] + dp[i + 1][j];
                }
                else // FOR OTHER WE CAN GO ANY WHERE.
                {
                    int min_value = min(dp[i + 1][j], dp[i][j + 1]);
                    dp[i][j] = grid[i][j] + min_value;
                }
            }
        }

        return dp[0][0];
    }
};

int main()
{

    return 0;
}