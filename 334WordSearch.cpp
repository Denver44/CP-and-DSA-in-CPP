#include <iostream>
#include <vector>
#include <map>
using namespace std;
// Using Dfs We can solve this problem
// as we have to visit only horizontal neigbours and vertical neighbours
//  eg [1,1]    [0,1]                [i-1,j]
//         [1,0][1,1][1,2]    [i,j-1][i,j][i,j+1]
//              [2,1]                [i+1,j]
class Solution
{
public:
    bool search(vector<vector<char>> &board, int i, int j, string &word, int idx)
    {
        if (idx == word.length() - 1)
        {
            return true;
        }
        board[i][j] -= 65; // this help us that we have already vsited it.
        if (i > 0 && board[i - 1][j] == word[idx + 1] && search(board, i - 1, j, word, idx + 1))
        {
            return true;
        }
        if (j > 0 && board[i][j - 1] == word[idx + 1] && search(board, i, j - 1, word, idx + 1))
        {
            return true;
        }
        if (i < board.size() - 1 && board[i + 1][j] == word[idx + 1] && search(board, i + 1, j, word, idx + 1))
        {
            return true;
        }
        if (j < board[0].size() - 1 && board[i][j + 1] == word[idx + 1] && search(board, i, j + 1, word, idx + 1))
        {
            return true;
        }

        board[i][j] += 65;
        return false;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        int row = board.size();
        int col = board[0].size();

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (board[i][j] == word[0] && search(board, i, j, word, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}
