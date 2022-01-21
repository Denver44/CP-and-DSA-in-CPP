#include <bits/stdc++.h>

using namespace std;
void display(vector<vector<int>> chess)
{
    for (int i = 0; i < chess.size(); i++)
    {
        for (int j = 0; j < chess.size(); j++)
        {
            cout << chess[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void knightsTours(vector<vector<int>> chess, int row, int col, int move)
{
    if (row < 0 || col < 0 || row >= chess.size() || col >= chess[0].size() || chess[row][col] > 0)
    {
        return;
    }
    else if (move == chess.size() * chess.size())
    {
        display(chess);
    }

    chess[row][col] = move;
    knightsTours(chess, row - 2, col + 1, move + 1);
    knightsTours(chess, row - 1, col + 2, move + 1);
    knightsTours(chess, row + 1, col + 2, move + 1);
    knightsTours(chess, row + 2, col + 1, move + 1);
    knightsTours(chess, row + 2, col - 1, move + 1);
    knightsTours(chess, row + 1, col - 2, move + 1);
    knightsTours(chess, row - 1, col - 2, move + 1);
    knightsTours(chess, row - 2, col - 1, move + 1);
    chess[row][col] = 0;
}

int main()
{

    vector<vector<int>> chess(5, vector<int>(5));

    knightsTours(chess, 2, 0, 1);

    return 0;
}

// Perfect. Recursion Complete Here.