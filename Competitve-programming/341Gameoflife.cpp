#include <iostream>
#include <vector>
using namespace std;
// In this Question we have to find out a cell has how many live cell in their neighbours and total 8 neighbours we have to check.

// So for Dead we have represent -1 and for live we did 2.
// as we have to do simultenously for every cell at a time so we channot chnage the value at the time so we will put -1 and 2 and then -1 will replace by 0 and 2 will be 1.

//1 Any live cell with fewer than two live neighbors dies, as if caused by under - population.
//2 Any live cell with two or three live neighbors lives on to the next generation.
//3 Any live cell with more than three live neighbors dies, as if by over - population.
//4 .Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

// eg for arr[2][2] it  8 neighbour will be
//  [1][1] [1][2] [1][3]
//  [2][1] [2][2] [2][3]
//  [3][1] [3][2] [3][3]

// [i-1][j-1]   [i-1][j]  [i-1][j+1]
// [i][j-1]     [i][j]    [i][j+1]
// [i+1][j-1]   [i+1][j]  [i+1][j+1]

class Solution
{
public:
    int count(vector<vector<int>> &board, int i, int j, int m, int n)
    {
        // For Boundary conditon is must check that i-1 or j-1 must be greater tha 0. as row and column cannot be in negative index and it cannot be greater than row and col size.
        int c = 0;
        if (i - 1 >= 0 && i - 1 < m && j - 1 >= 0 && j - 1 < n) //1
        {
            if (board[i - 1][j - 1] == 1 || board[i - 1][j - 1] == -1) // [i-1][j-1]
            {
                c++;
            }
        }
        if (i - 1 >= 0 && i - 1 < m && j >= 0 && j < n) //2
        {
            if (board[i - 1][j] == 1 || board[i - 1][j] == -1) //[i-1][j]
            {
                c++;
            }
        }
        if (i - 1 >= 0 && i - 1 < m && j + 1 >= 0 && j + 1 < n) //3
        {
            if (board[i - 1][j + 1] == 1 || board[i - 1][j + 1] == -1) //[i-1][j+1]
            {
                c++;
            }
        }
        if (i >= 0 && i < m && j - 1 >= 0 && j - 1 < n) //4
        {
            if (board[i][j - 1] == 1 || board[i][j - 1] == -1) // [i][j-1]
            {
                c++;
            }
        }
        if (i >= 0 && i < m && j + 1 >= 0 && j + 1 < n) //5
        {
            if (board[i][j + 1] == 1 || board[i][j + 1] == -1) //[i][j+1]
            {
                c++;
            }
        }
        if (i + 1 >= 0 && i + 1 < m && j - 1 >= 0 && j - 1 < n) //6
        {
            if (board[i + 1][j - 1] == 1 || board[i + 1][j - 1] == -1) // [i+1][j-1]
            {
                c++;
            }
        }
        if (i + 1 >= 0 && i + 1 < m && j >= 0 && j < n) //7
        {
            if (board[i + 1][j] == 1 || board[i + 1][j] == -1) // [i+1][j]
            {
                c++;
            }
        }
        if (i + 1 >= 0 && i + 1 < m && j + 1 >= 0 && j + 1 < n) //8
        {
            if (board[i + 1][j + 1] == 1 || board[i + 1][j + 1] == -1) //  [i+1][j+1]
            {
                c++;
            }
        }
        return c;
    }
    void gameOfLife(vector<vector<int>> &board)
    {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int c = count(board, i, j, m, n);
                if (board[i][j] == 1 && c < 2)
                {
                    board[i][j] = -1; // for the new array make it dead so we reprsent it by -1.
                }
                if (board[i][j] == 1 && c > 3)
                {
                    board[i][j] = -1; // dead
                }
                if (board[i][j] == 0 && c == 3)
                {
                    board[i][j] = 2; // then he now live
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == -1)
                {
                    board[i][j] = 0; // dead
                }

                if (board[i][j] == 2)
                {
                    board[i][j] = 1; // now making it live.
                }
            }
        }
    }
};

int main()
{

    return 0;
}