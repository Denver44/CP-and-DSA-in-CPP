#include <bits/stdc++.h>
using namespace std;
bool safeplace(vector<vector<int>> chess, int row, int col)
{
    // Vecrtical Just Above Top row col
    for (int i = row - 1, j = col; i >= 0; i--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    // Diagonal call left side
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < chess.size(); i--, j++)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}

void Nqueens(vector<vector<int>> chess, int row, string sofar)
{

    if (row == chess.size())
    {
        cout << sofar + "." << endl;
        return;
    }

    for (int col = 0; col < chess.size(); col++)
    {

        if (safeplace(chess, row, col) == true)
        {
            chess[row][col] = 1;
            string prow = to_string(row);
            string pcol = to_string(col);
            Nqueens(chess, row + 1, sofar + prow + "-" + pcol + ",");
            chess[row][col] = 0;
        }
    }
}

int main()
{

    vector<vector<int>> chess(4, vector<int>(4));

    Nqueens(chess, 0, "");

    return 0;
}