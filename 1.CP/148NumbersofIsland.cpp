#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    // DFS Approach
public:
    void dfs(vector<vector<char>> &grid, int i, int j, int row, int col)
    {
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == '0') // If its going out of bounday then jsut return or it is a water then also return.
        {
            return;
        }
        grid[i][j] = '0'; // We mark that spot '0' as water so there sis no need of visisted array for  extra space.

        dfs(grid, i + 1, j, row, col); // Downwards
        dfs(grid, i - 1, j, row, col); // Upwards
        dfs(grid, i, j + 1, row, col); // Left
        dfs(grid, i, j - 1, row, col); // Right
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int row = grid.size();
        if (row == 0) // if the vector is empty then there cannit be any island. so ans will be zero.
        {
            return 0;
        }
        int col = grid[0].size(); // Taking Colum size.
        int no_of_island = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == '1') // If it is land then Only we have to Traverse rather than No.
                {
                    dfs(grid, i, j, row, col);
                    no_of_island++; // As of After traversal the count of island will be Increase by 1.
                }
            }
        }
        return no_of_island;
    }
};
int main()
{

    return 0;
}